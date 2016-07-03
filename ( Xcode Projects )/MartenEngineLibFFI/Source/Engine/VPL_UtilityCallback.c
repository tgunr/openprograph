

#include "VPL_PrimUtility.h"
#if __VPL_DISATCH_USES_FFI__
#include <sys/mman.h>

extern ffi_type*	ffiTypeForExtStructure( V_ExtStructure convertStruct, V_Environment environment );
extern void			ffiVPLCallbackHandler( ffi_cif* cif, void* result, void** args, void* userdata );

//extern void dictApplyClosure(ffi_cif* cif, void* result, void** args, void* userdata);

int		VPLEnvironmentCallbackClosureCreate( V_CallbackCodeSegment structure );
int		VPLEnvironmentCallbackClosureRelease( ffi_closure* FFIclosure );

#else
#include <CoreServices/CoreServices.h>
#endif // __VPL_DISATCH_USES_FFI__

V_CallbackCodeSegment VPLEnvironmentCallbackRetain( V_CallbackCodeSegment theCallback )
{
	if( theCallback ) theCallback->use++;
	return theCallback;
}

void VPLEnvironmentCallbackRelease( V_CallbackCodeSegment theCallback )
{
	V_CallbackCodeSegment	next = NULL;				// Currently this function is not called.
	V_CallbackCodeSegment	previous = NULL;
	V_Object				theObject = NULL;
	V_Environment			environment = NULL;

	if( theCallback ) {
		theCallback->use--;
		if( theCallback->use <= 0 ) {
					
			previous = theCallback->previous;
			next = theCallback->next;
			theObject = theCallback->object;						// I feel like we should clear theObject->system, but I suppose not.
			environment = theCallback->theEnvironment;
			
			theCallback->previous = NULL;
			theCallback->next = NULL;
			
			if( theCallback->vplRoutine != NULL ) {					// Release the copy of the function name we created.
				X_free( theCallback->vplRoutine );
				theCallback->vplRoutine = NULL;
			}

//			theObject->system = 0;
			
			if(previous != NULL) previous->next = next;
			if(next != NULL) next->previous = previous;
			
			if((environment != NULL ) && (environment->segments == theCallback)) environment->segments = next;

#if __VPL_DISATCH_USES_FFI__
			if( theCallback->ffiseg_closure != NULL ) VPLEnvironmentCallbackClosureRelease( theCallback->ffiseg_closure );
#else			
			MakeDataExecutable( theCallback, 0 );					// I doubt this is necessary, but I doubt it hurts.
#endif
		
			X_free( theCallback );
		}
	}
}


int		VPLEnvironmentCallbackClosureCreate( V_CallbackCodeSegment structure )
{
	V_Environment environment = structure->theEnvironment;

//	fprintf( stderr, "segment (): @0x%08x  environs: @0x%08x\n", structure, environment );
	
	ffi_status				outStatus;
	
	V_ExtProcedure			tempProcedure = NULL;
	V_Parameter				tempParameter = NULL;
	Nat4					procedureInarity = 0;
	Nat4					theParameterType = 0;
	
	// fill in FFIargs
	tempProcedure = structure->callbackFunction;
	tempParameter = tempProcedure->parameters;
	while( tempParameter != NULL ) {
		procedureInarity++;
		theParameterType = tempParameter->type;
		if(theParameterType == kFloatType && tempParameter->size == 8) theParameterType = kDoubleType;
//		fprintf(stderr, "Parameter: %i  Type: %i\n", procedureInarity, theParameterType);
		switch(theParameterType){
			case kVoidType:
				structure->ffiseg_ArgumentTypes[procedureInarity-1] = &ffi_type_void;
				break;
			case kUnsignedType:
				structure->ffiseg_ArgumentTypes[procedureInarity-1] = &ffi_type_uint32;
				break;
			case kLongType:
				//structure->ffiseg_ArgumentTypes[procedureInarity-1] = &ffi_type_sint64;
				structure->ffiseg_ArgumentTypes[procedureInarity-1] = &ffi_type_sint32;
				break;
			case kShortType:
				structure->ffiseg_ArgumentTypes[procedureInarity-1] = &ffi_type_sint16;
				break;
			case kCharType:
				structure->ffiseg_ArgumentTypes[procedureInarity-1] = &ffi_type_sint8;
				break;
			case kEnumType:
				structure->ffiseg_ArgumentTypes[procedureInarity-1] = &ffi_type_uint8;
				break;
			case kIntType:
				structure->ffiseg_ArgumentTypes[procedureInarity-1] = &ffi_type_sint32;
				break;
			case kFloatType:
				structure->ffiseg_ArgumentTypes[procedureInarity-1] = &ffi_type_float;
				break;
			case kDoubleType:
				structure->ffiseg_ArgumentTypes[procedureInarity-1] = &ffi_type_double;
				break;
			case kPointerType:
				structure->ffiseg_ArgumentTypes[procedureInarity-1] = &ffi_type_pointer;
				break;
			case kStructureType:
				structure->ffiseg_ArgumentTypes[procedureInarity-1] = (ffi_type*)ffiTypeForExtStructureName( tempParameter->name, environment );
				break;
		}
		tempParameter = tempParameter->next;
	} // End For(argument) Loop
	
	if(tempProcedure->returnParameter != NULL) {
		switch(tempProcedure->returnParameter->type){
			case kVoidType:
				structure->ffiseg_ReturnType = &ffi_type_void;
				break;
			case kUnsignedType:
				structure->ffiseg_ReturnType = &ffi_type_uint32;
				break;
			case kLongType:
//				structure->ffiseg_ReturnType = &ffi_type_sint64;
				structure->ffiseg_ReturnType = &ffi_type_sint32;
				break;
			case kShortType:
				structure->ffiseg_ReturnType = &ffi_type_sint16;
				break;
			case kCharType:
				structure->ffiseg_ReturnType = &ffi_type_sint8;
				break;
			case kEnumType:
				structure->ffiseg_ReturnType = &ffi_type_uint8;
				break;
			case kIntType:
				structure->ffiseg_ReturnType = &ffi_type_sint32;
				break;
			case kFloatType:
				structure->ffiseg_ReturnType = &ffi_type_float;
				break;
			case kDoubleType:
				structure->ffiseg_ReturnType = &ffi_type_double;
				break;
			case kPointerType:
				structure->ffiseg_ReturnType = &ffi_type_pointer;
				break;
			case kStructureType:
				structure->ffiseg_ReturnType = (ffi_type*)ffiTypeForExtStructureName( tempProcedure->returnParameter->name, environment );
				break;
			default:
				structure->ffiseg_ReturnType = &ffi_type_void;
				break;
		}
		
	} else structure->ffiseg_ReturnType = &ffi_type_void;
	
	structure->ffiseg_InArity = procedureInarity;
		
//	fprintf(stderr, "API InArity: %ld  Return Type: 0x%08x\n", structure->ffiseg_InArity, structure->ffiseg_ReturnType);
	
//	return FFI_OK;

	if( environment->compiled == TRUE ) {
		// Allocate a page to hold the closure with read and write permissions.
		if( structure->ffiseg_closure == NULL ) {
			if ((structure->ffiseg_closure = mmap(NULL, sizeof(ffi_closure), PROT_READ | PROT_WRITE, MAP_ANON | MAP_PRIVATE, -1, 0)) == (void*)-1)
			{
				// Check errno and handle the error. 
				outStatus = errno;
				fprintf(stderr,"FFI mmap Error: %ld\n",outStatus);
				return outStatus;
			}
			
			//closure = structure->ffiseg_closure;
			
			// Prepare the ffi_cif structure.
			//if ((outStatus = ffi_prep_cif(&structure->ffiseg_cif, FFI_DEFAULT_ABI, 3, &ffi_type_void, arg_types)) != FFI_OK)
			if ((outStatus = ffi_prep_cif(&structure->ffiseg_cif, FFI_DEFAULT_ABI, structure->ffiseg_InArity, structure->ffiseg_ReturnType, structure->ffiseg_ArgumentTypes)) != FFI_OK)
			{
				// Handle the ffi_status error.
				fprintf(stderr,"FFI Prep CIF Error: %ld\n", outStatus);
				return outStatus;
			}
			
			// Prepare the ffi_closure structure.
			//if ((status = ffi_prep_closure(closure, &cif, dictApplyClosure, NULL)) != FFI_OK)
			if ((outStatus = ffi_prep_closure(structure->ffiseg_closure, &structure->ffiseg_cif, environment->callbackHandler, structure)) != FFI_OK)
			{
				// Handle the ffi_status error.
				fprintf(stderr,"FFI Prep Closure Error: %ld\n", outStatus);
				return outStatus;
			}
		}		

		// Ensure that the closure will execute on all architectures.
		if (mprotect(structure->ffiseg_closure, sizeof(ffi_closure*), PROT_READ | PROT_EXEC) == -1)
		{
			// Check errno and handle the error. 
			outStatus = errno;
			fprintf(stderr,"FFI Prep mprotect Error: %ld\n", outStatus);
			return outStatus;
		}

		// Test here...
		CFDictionaryRef	theDict;
		
		int		theKeys[5];
		int		theThings[5];
		int		theIndex;
		
		for( theIndex=0; theIndex<5; theIndex++ )
		{
			theKeys[theIndex] = theIndex+1;
			theThings[theIndex] = theIndex+1;
		}
		
		theDict = CFDictionaryCreate( kCFAllocatorDefault, (const void**)theKeys, (const void**)theThings, 5, NULL, NULL );
		fprintf(stderr,"Internal Apply Direct Closure\n");
		CFShow( theDict );
		CFDictionaryApplyFunction( theDict, (CFDictionaryApplierFunction)structure->ffiseg_closure, NULL );
		CFRelease( theDict );
	}
	
	return FFI_OK;
}

int		VPLEnvironmentCallbackClosureRelease( ffi_closure* FFIclosure )
	{	return munmap(FFIclosure, sizeof(FFIclosure));	}


V_CallbackCodeSegment VPLEnvironmentCallbackCreate( V_Environment environment, vpl_StringPtr theMethodName, vpl_StringPtr theTypeName, V_Object theObject, Bool isListInputs )
{
	/* Variables to handle internal processing */

	V_CallbackCodeSegment	currentSegment = NULL;
	Nat4					address = 0;
	V_CallbackCodeSegment	structure = NULL;
	Int1					*theCallbackCodeSegment = NULL;
	Nat4					theSegmentCounter = 0;
#if __VPL_DISATCH_USES_FFI__
	ffi_cif					FFIcif;
	ffi_closure*			FFIclosure;
	ffi_type*				FFIarg_types[24];
	ffi_type*				FFIreturnType = &ffi_type_void;

	ffi_arg					FFIresult;
	ffi_status				FFIstatus;
	
	V_ExtProcedure			tempProcedure = NULL;
	V_Parameter				tempParameter = NULL;
	Nat4					procedureInarity = 0;
	Nat4					theParameterType = 0;
	
#endif
	
	if( environment == NULL ) return NULL;
	if( environment->callbackHandler == NULL ) return NULL;
	if( theMethodName == NULL ) return NULL;
	if( theTypeName == NULL ) return NULL;

	currentSegment = environment->segments;

	structure = VPXMALLOC( 1, VPL_CallbackCodeSegment );
	if(structure == NULL) return NULL;

	structure->loadHighAddress = 0;
	structure->orAddress = 0;
	structure->loadHighOp = 0;
	structure->orOp = 0;
	structure->mtctrOp = 0;
	structure->branchOp = 0;
	structure->vplRoutine = new_string(theMethodName,environment);
	structure->callbackFunction = get_extProcedure(environment->externalProceduresTable,theTypeName);
	structure->theEnvironment = environment;
	structure->listInput = isListInputs;
	structure->object = theObject;
	structure->previous = NULL;
	structure->next = NULL;

	VPLEnvironmentCallbackRetain( structure );				//	Retain once for creation.
	
	if( structure->callbackFunction == NULL ) {
		X_free( structure );
		return NULL;
	}

	if(currentSegment == NULL){
		structure->previous = NULL;
		structure->next = NULL;
		environment->segments = structure;
	}else{
		while(currentSegment->next != NULL) {
			currentSegment = currentSegment->next;
		};
		currentSegment->next = structure;
		structure->previous = currentSegment;
		structure->next = NULL;
	}

#if __VPL_DISATCH_USES_FFI__

	structure->ffiseg_closure = NULL;
	
	//structure->ffiseg_InArity = 3;
	//structure->ffiseg_ReturnType = &ffi_type_void;
	//structure->ffiseg_ArgumentTypes[0] = &ffi_type_pointer;
	//structure->ffiseg_ArgumentTypes[1] = &ffi_type_pointer;
	//structure->ffiseg_ArgumentTypes[2] = &ffi_type_pointer;
	
	if( VPLEnvironmentCallbackClosureCreate( structure ) != FFI_OK )
	{
		X_free( structure );
		return NULL;
	}
	
	//MakeDataExecutable( structure, 6*sizeof(Nat4) );

/*
	// fill in FFIargs
	tempProcedure = structure->callbackFunction;
	tempParameter = tempProcedure->parameters;
	while( tempParameter != NULL ) {
		procedureInarity++;
		theParameterType = tempParameter->type;
		if(theParameterType == kFloatType && tempParameter->size == 8) theParameterType = kDoubleType;
		switch(theParameterType){
			case kVoidType:
				FFIarg_types[procedureInarity-1] = &ffi_type_void;
				break;
			case kUnsignedType:
				FFIarg_types[procedureInarity-1] = &ffi_type_uint32;
				break;
			case kLongType:
				FFIarg_types[procedureInarity-1] = &ffi_type_sint64;
				break;
			case kShortType:
				FFIarg_types[procedureInarity-1] = &ffi_type_sint16;
				break;
			case kCharType:
				FFIarg_types[procedureInarity-1] = &ffi_type_sint8;
				break;
			case kEnumType:
				FFIarg_types[procedureInarity-1] = &ffi_type_uint8;
				break;
			case kIntType:
				FFIarg_types[procedureInarity-1] = &ffi_type_sint32;
				break;
			case kFloatType:
				FFIarg_types[procedureInarity-1] = &ffi_type_float;
				break;
			case kDoubleType:
				FFIarg_types[procedureInarity-1] = &ffi_type_double;
				break;
			case kPointerType:
				FFIarg_types[procedureInarity-1] = &ffi_type_pointer;
				break;
			case kStructureType:
				FFIarg_types[procedureInarity-1] = (ffi_type*)ffiTypeForExtStructureName( tempParameter->name, environment );
				break;
		}
		tempParameter = tempParameter->next;
	} // End For(argument) Loop

	if(tempProcedure->returnParameter != NULL) {
		switch(tempProcedure->returnParameter->type){
			case kVoidType:
				FFIreturnType = &ffi_type_void;
				break;
			case kUnsignedType:
				FFIreturnType = &ffi_type_uint32;
				break;
			case kLongType:
				FFIreturnType = &ffi_type_sint64;
				break;
			case kShortType:
				FFIreturnType = &ffi_type_sint16;
				break;
			case kCharType:
				FFIreturnType = &ffi_type_sint8;
				break;
			case kEnumType:
				FFIreturnType = &ffi_type_uint8;
				break;
			case kIntType:
				FFIreturnType = &ffi_type_sint32;
				break;
			case kFloatType:
				FFIreturnType = &ffi_type_float;
				break;
			case kDoubleType:
				FFIreturnType = &ffi_type_double;
				break;
			case kPointerType:
				FFIreturnType = &ffi_type_pointer;
				break;
			case kStructureType:
				FFIreturnType = (ffi_type*)ffiTypeForExtStructureName( tempProcedure->returnParameter->name, environment );
				break;
			default:
				break;
		}
		
	}
	
	// Allocate a page
	if( (FFIclosure = mmap( NULL, sizeof(ffi_closure), PROT_READ | PROT_WRITE, MAP_ANON | MAP_PRIVATE, -1, 0) ) == (void*)-1 )
	{
		// Check errno and handle the error. 
		X_free( structure );
		return NULL;
	}

	// Prepare interface
	
	procedureInarity = 3;
	FFIarg_types[0] = &ffi_type_pointer;
	FFIarg_types[1] = &ffi_type_pointer;
	FFIarg_types[2] = &ffi_type_pointer;
	FFIreturnType = &ffi_type_void;
	
	if( (FFIstatus = ffi_prep_cif( &FFIcif, FFI_DEFAULT_ABI, procedureInarity, FFIreturnType, FFIarg_types) ) != FFI_OK )
	{
		// Handle the FFIstatus error.
		X_free( structure );
		return NULL;
	}
	
	// Prepare closure
	
	structure->loadHighOp = FFIclosure;
	
//	if( (FFIstatus = ffi_prep_closure( FFIclosure, &FFIcif, ffiVPLCallbackHandler, NULL) ) != FFI_OK )
	if( (FFIstatus = ffi_prep_closure( FFIclosure, &FFIcif, environment->callbackHandler, (void*)structure) ) != FFI_OK )
	{
		// Handle the FFIstatus error.
		X_free( structure );
		return NULL;
	}
	
	// Ensure execution
	
	if( mprotect( FFIclosure, sizeof(FFIclosure), PROT_READ | PROT_EXEC ) == -1 ) 
	{
		// Check errno and handle the error. 
		X_free( structure );
		return NULL;
	}
	
	// Test here
	
	int	p1 = 1;
	int	p2 = 2;
	int p3 = 0;
	
	//((void (*)(const void*, const void*, void*))FFIclosure)(&p1, &p2, &p3);
	
	//FFIresult = ((unsigned char(*)(float, unsigned int))structure->loadHighAddress)(42, 5.1);
	
	fprintf(stderr, "Ffn = %ld\n", structure->loadHighAddress);
	//fprintf(stderr, "42.0 - 5 = %ld\n", FFIresult);
*/	
	
#else
#if __i386__
	theSegmentCounter = 0;
	theCallbackCodeSegment = (Int1 *) structure;
	*(theCallbackCodeSegment + theSegmentCounter++) = 0x55;	//push EBP

	*(theCallbackCodeSegment + theSegmentCounter++) = 0x89;	//mov
	*(theCallbackCodeSegment + theSegmentCounter++) = 0xE5;	//mov ESP, EBP

	*(theCallbackCodeSegment + theSegmentCounter++) = 0x83;	//sub
	*(theCallbackCodeSegment + theSegmentCounter++) = 0xEC;	//sub
	*(theCallbackCodeSegment + theSegmentCounter++) = 0x08;	//sub $8, ESP

	*(theCallbackCodeSegment + theSegmentCounter++) = 0xBA;	//mov imm32 -> EDX

	address = (Nat4) structure;
	*((Nat4 *) (theCallbackCodeSegment + theSegmentCounter)) = address;
	theSegmentCounter += sizeof(Nat4);
	
	*(theCallbackCodeSegment + theSegmentCounter++) = 0xB8;	//mov imm32 -> EAX

	address = (Nat4) environment->callbackHandler;
	*((Nat4 *) (theCallbackCodeSegment + theSegmentCounter)) = address;
	theSegmentCounter += sizeof(Nat4);
	
	*(theCallbackCodeSegment + theSegmentCounter++) = 0xFF;	//call
	*(theCallbackCodeSegment + theSegmentCounter++) = 0xD0;	//call *EAX

	*(theCallbackCodeSegment + theSegmentCounter++) = 0xC9;	//leave
	*(theCallbackCodeSegment + theSegmentCounter++) = 0xC3;	//ret

	MakeDataExecutable( structure, 6*sizeof(Nat4) );

#endif

#if __ppc__
	address = (Nat4) structure; 
	address = address >> 16;
	address = address | 0x3D600000;
	structure->loadHighAddress = address;	// lis r11, hiwords(address) - Load in the most-significant (hiword) bits of the handler address into Register 11
											// (alias for addis r11,0,value)

	address = (Nat4) structure; 
	address = address & 0xFFFF;
	address = address | 0x616B0000;
	structure->orAddress = address;			// ori r11, r11, lowords(address) "Or" in the least-significant (loword) bits of the handler address into Register 11
	
	address = (Nat4) environment->callbackHandler; 
	address = address >> 16;
	address = address | 0x3D800000;
	structure->loadHighOp = address;	// lis r12, hiwords(address) - Load in the most-significant (hiword) bits of the handler address into Register 12
										// (alias for addis r12,0,value)

	address = (Nat4) environment->callbackHandler; 
	address = address & 0xFFFF;
	address = address | 0x618C0000;
	structure->orOp = address;			// ori r12, r12, lowords(address) "Or" in the least-significant (loword) bits of the handler address into Register 12

	structure->mtctrOp = 0x7D8903A6;	// mtctr - Load the contents of Register 12 into the Control Register
	structure->branchOp = 0x4E800420;	// bctr - Branch to the address stored in the Control Register

	MakeDataExecutable( structure, 6*sizeof(Nat4) );

#endif


#endif // __VPL_DISATCH_USES_FFI__	
	
//	if( theObject != NULL ) fprintf(stderr, "have Object: %ld of object %ld\n", structure->object, theObject );
	if( theObject != NULL ) theObject->system = theObject->system | kSystemUsed;

	return structure;
}

V_Object VPLEnvironmentCallbackDispose( V_Environment environment, V_CallbackCodeSegment theCallback )
{
	#pragma unused ( environment )

	V_Object				theObject = NULL;
	
	if( theCallback )
	{
		theObject = theCallback->object;
		if( theCallback->ffiseg_closure )
			VPLEnvironmentCallbackClosureRelease( theCallback->ffiseg_closure );
		theCallback->ffiseg_closure = NULL;

		VPLEnvironmentCallbackRelease( theCallback );		//	Release our creation count.
	}

	return theObject;
}

