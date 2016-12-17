

#include "VPL_PrimUtility.h"
#include <CoreServices/CoreServices.h>

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
					
#ifdef _POSIX_THREADS
	pthread_mutex_lock(&gCallbackLock);
#endif

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

#ifdef _POSIX_THREADS
	pthread_mutex_unlock(&gCallbackLock);
#endif
			MakeDataExecutable( theCallback, 0 );					// I doubt this is necessary, but I doubt it hurts.
			
			X_free( theCallback );
		}
	}
}

V_CallbackCodeSegment VPLEnvironmentCallbackCreate( V_Environment environment, vpl_StringPtr theMethodName, vpl_StringPtr theTypeName, V_Object theObject, Bool isListInputs )
{
	/* Variables to handle internal processing */

	V_CallbackCodeSegment	currentSegment = NULL;
	Nat4					address = 0;
	V_CallbackCodeSegment	structure = NULL;
	Int1					*theCallbackCodeSegment = NULL;
	Nat4					theSegmentCounter = 0;

	if( environment == NULL ) return NULL;
	if( environment->callbackHandler == NULL ) return NULL;
	if( theMethodName == NULL ) return NULL;
	if( theTypeName == NULL ) return NULL;

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

#ifdef _POSIX_THREADS
	pthread_mutex_lock(&gCallbackLock);
#endif

	currentSegment = environment->segments;

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

#ifdef _POSIX_THREADS
	pthread_mutex_unlock(&gCallbackLock);
#endif

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
#endif

	MakeDataExecutable( structure, 6*sizeof(Nat4) );

	if( theObject != NULL ) theObject->system = theObject->system | kSystemUsed;

	return structure;
}

V_Object VPLEnvironmentCallbackDispose( V_Environment environment, V_CallbackCodeSegment theCallback )
{
	#pragma unused ( environment )

	V_Object				theObject = NULL;
	
	if( theCallback ) theObject = theCallback->object;

	VPLEnvironmentCallbackRelease( theCallback );		//	Release our creation count.

	return theObject;
}

