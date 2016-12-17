/*
	
	VPL_PrimitivesMemory.c
	Copyright 2000 Scott B. Anderson, All Rights Reserved.
	
*/
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#ifdef __MWERKS__
#include "VPL_Compiler.h"
#elif __GNUC__
#include <MartenEngine/MartenEngine.h>
#endif	


Int4 VPLP_string_2D_address( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive ); /* string-address */
Int4 VPLP_string_2D_address( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive ) /* string-address */
{
	Int1*		primName = "string-address";
	Nat4		result = kNOERROR;
	V_Object	theVObject = NULL;
	
	Nat4*		theStrAddr = NULL;

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimGetInputObjectCheckType( &theVObject, kString, 0, primName, primitive, environment );
	if( result != kNOERROR ) return result;
	
#endif

	theStrAddr = X_malloc( sizeof( vpl_StringPtr ) );
	*theStrAddr = *(Nat4*)((V_String) theVObject)->string;
	
	result = VPLPrimSetOutputObjectEBlockPtr(environment,primInArity,0,primitive, (void*)theStrAddr, "void", sizeof( void* ), kvpl_BlockLevelPointer);
	
	*trigger = kSuccess;	
	return result;
}

Int4 VPLP_retain_2D_object( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive ); /* retain-object */
Int4 VPLP_retain_2D_object( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive ) /* retain-object */
{
	Int1*		primName = "retain-object";
	Nat4		result = kNOERROR;
	V_Object	theVObject = NULL;
	
#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

#endif

	theVObject = VPLPrimGetInputObject( 0, primitive, environment );
	
	VPLObjectRetain( theVObject, environment );	/* First retain for caller */
	VPLObjectRetain( theVObject, environment );	/* Second retain to return as output */
	
	result = VPLPrimSetOutputObject(environment,primInArity,0,primitive, (V_Object) theVObject);
	
	*trigger = kSuccess;	
	return result;
}

Int4 VPLP_release_2D_object( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive ); /* release-object */
Int4 VPLP_release_2D_object( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive ) /* release-object */
{
	Int1*		primName = "release-object";
	Nat4		result = kNOERROR;
	V_Object	theVObject = NULL;
	
#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 0 );
	if( result != kNOERROR ) return result;

#endif

	theVObject = VPLPrimGetInputObject( 0, primitive, environment );
	
	VPLObjectRelease( theVObject, environment );	
	
	*trigger = kSuccess;	
	return result;
}

Int4 VPLP_get_2D_retain_2D_count( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive ); /* get-retain-count */
Int4 VPLP_get_2D_retain_2D_count( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive ) /* get-retain-count */
{
	vpl_StringPtr	primName = "get-retain-count";
	vpl_Status		result = kNOERROR;
	V_Object		theVObject = NULL;
	
	vpl_RetainCount	theCount = 0;
	
#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

#endif

	theVObject = VPLPrimGetInputObject( 0, primitive, environment );
	
	theCount = VPLObjectGetRetainCount( theVObject );
	
	result = VPLPrimSetOutputObjectInteger(environment,primInArity,0,primitive, theCount);
	
	*trigger = kSuccess;	
	return result;
}

Int4 VPLP_object_2D_to_2D_address( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive ); /* object-to-address */
Int4 VPLP_object_2D_to_2D_address( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive ) /* object-to-address */
{
	Int1*		primName = "object-to-address";
	Nat4		result = kNOERROR;
	V_Object	theVObject = NULL;
	
	vpl_Integer		theOAddr = 0;

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

#endif

	theVObject = VPLPrimGetInputObject( 0, primitive, environment );
	
	if(theVObject) theOAddr = (vpl_Integer) theVObject;

	result = VPLPrimSetOutputObjectInteger(environment,primInArity,0,primitive, theOAddr);
	
	*trigger = kSuccess;	
	return result;
}

Int4 VPLP_address_2D_to_2D_object( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive ); /* address-to-object */
Int4 VPLP_address_2D_to_2D_object( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive ) /* address-to-object */
{
	Int1*		primName = "address-to-object";
	Nat4		result = kNOERROR;
	V_Object	theVObject = NULL;
	
	vpl_Integer	theIAddr = 0;

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimGetInputObjectInteger( &theIAddr, 0, primName, primitive, environment );
	if( result != kNOERROR ) return result;

#endif
	
	if( theIAddr ) theVObject = (V_Object)theIAddr;
	
	VPLObjectRetain( theVObject, environment );

	result = VPLPrimSetOutputObject(environment,primInArity,0,primitive, (V_Object) theVObject);
	
	*trigger = kSuccess;	
	return result;
}

Int4 VPLP_object_2D_to_2D_archive( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_object_2D_to_2D_archive( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	vpl_Status		result = kNOERROR;	
	V_Object		outputObject = NULL;

	V_Object	object = NULL;	
	V_Archive	tempArchive = NULL;
	Int4		size = 0;	
	V_ExternalBlock		ptrO = NULL;

	vpl_StringPtr	primName = "object-to-archive";

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 2 );
	if( result != kNOERROR ) return result;

#endif

	object = VPLPrimGetInputObject(0,primitive,environment);

	tempArchive = archive_object(environment,object,&size);
	
	ptrO = create_externalBlock("VPL_Archive",size,environment);
	ptrO->blockPtr = (void *) tempArchive;
	VPLPrimSetOutputObject(environment,primInArity,0,primitive,(V_Object) ptrO);

	outputObject = (V_Object) int_to_integer(size,environment);
	VPLPrimSetOutputObject(environment,primInArity,1,primitive,(V_Object) outputObject);

	*trigger = kSuccess;	
	return kNOERROR;
}

Int4 VPLP_archive_2D_to_2D_object( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_archive_2D_to_2D_object( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	vpl_Status		result = kNOERROR;	
	V_Archive	tempArchive = NULL;
	V_Object	object = NULL;	
	V_Object	block = NULL;	
	V_Environment	theEnvironment = NULL;

	vpl_StringPtr	primName = "archive-to-object";

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArityMin(environment,primName, primInArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputArityMax(environment,primName, primInArity, 2 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

#endif

	object = VPLPrimGetInputObject(0,primitive,environment);
	if( object == NULL || object->type != kExternalBlock){
		record_error("archive-to-object: Input 1 type not ExternalBlock in module - ",primName,kWRONGINPUTTYPE,environment);
		VPLPrimSetOutputObjectNULL(environment,primInArity,0,primitive);
		*trigger = kFailure;	
		return kNOERROR;
	}

	tempArchive = (V_Archive)(((V_ExternalBlock) object)->blockPtr);
	
//	tempArchive = archive_copy(environment,tempArchive);
	tempArchive = archive_copy(NULL,tempArchive);
	
	if(primInArity == 2){
		block = VPLPrimGetInputObject(1,primitive,environment);
		if( block == NULL || block->type != kExternalBlock) return record_error("archive-to-object: Input 2 type not externalBlock!",primName,kWRONGINPUTTYPE,environment);
		if( strcmp(((V_ExternalBlock)block)->name,"VPL_Environment") != 0) return record_error("archive-to-object: Input 2 external not type VPL_Environment! - ",primName,kWRONGINPUTTYPE,environment);
	
		theEnvironment = *(V_Environment *) ((V_ExternalBlock)block)->blockPtr;
	} else theEnvironment = environment;

	object = unarchive_object(theEnvironment,tempArchive);
	
	X_free(tempArchive);

	VPLPrimSetOutputObject(environment,primInArity,0,primitive,(V_Object) object);

	*trigger = kSuccess;	
	return kNOERROR;
}

Int4 VPLP_archive_2D_to_2D_list( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_archive_2D_to_2D_list( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	Int4		result = kNOERROR;
	V_Archive	tempArchive = NULL;
	V_Object	object = NULL;	
	V_List		list = NULL;	

	Int1		*charBuffer = "";
	Nat4		*hex = NULL;
	Nat4		*hexStop = NULL;
	Nat4		listLength = 0;
	Nat4		counter = 0;

	Int1			*primName = "archive-to-list";

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kExternalBlock,0, primName, primitive, environment );
	if( result != kNOERROR ) return result;
	
#endif

	object = VPLPrimGetInputObject(0,primitive,environment);

	tempArchive = (V_Archive)(((V_ExternalBlock) object)->blockPtr);
	
	hex = (Nat4 *) tempArchive;
//	hexStop = (Nat4 *)( ((Nat4) tempArchive) + archive_size(environment,tempArchive));
	hexStop = (Nat4 *)( ((Nat4) tempArchive) + archive_size(NULL,tempArchive));
	charBuffer = (Int1 *) X_malloc(11);
	
	listLength = ((Nat4) hexStop - (Nat4) hex)/sizeof(Nat4);
	
	list = create_list(listLength,environment);
	
	counter = 0;
	for(;hex<hexStop;hex++){
		sprintf(charBuffer,"%#010X", CFSwapInt32HostToBig( (unsigned int) *hex) );
		*(list->objectList+counter++) = (V_Object) create_string(charBuffer,environment);
	}
	
	X_free(charBuffer);

	VPLPrimSetOutputObject(environment,primInArity,0,primitive, (V_Object) list);

	*trigger = kSuccess;	
	return kNOERROR;
}

Int4 VPLP_to_2D_pointer( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_to_2D_pointer( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	vpl_Status		result = kNOERROR;	
	vpl_StringPtr	primName = "to-pointer";
	
	vpl_StringPtr	finalName = NULL;
	vpl_StringPtr	blockName = "void";
	vpl_BlockLevel	blockLevel = kvpl_BlockLevelPointer;
	vpl_BlockPtr	blockData = NULL;
	V_ExternalBlock	ptrO = NULL;


#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArityMin(environment,primName, primInArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputArityMax(environment,primName, primInArity, 3 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

#endif

	result = VPLPrimGetInputObjectEBlockPtrCoerce( &blockData, NULL, 0, primName, primitive, environment );

	if( primInArity >= 2 ) {
		result = VPLPrimGetInputObjectString( &blockName, 1, primName, primitive, environment );
		if( result != kNOERROR ) return result;	
		
		result = VPLEnvironmentLookupExternalBlockSize( blockName, &finalName, &blockLevel, NULL, NULL, environment );
	}

	if( primInArity >= 3 ) {
		result = VPLPrimGetInputObjectInteger( (vpl_Integer*)&blockLevel, 2, primName, primitive, environment );
		if( result != kNOERROR ) return result;	
	}

	if( finalName == NULL ) finalName = blockName;

	ptrO = (V_ExternalBlock)create_externalBlock_level( finalName, sizeof(Nat4), blockLevel, blockData, TRUE, environment);
	if( ptrO != NULL ) VPLPrimSetOutputObject( environment, primInArity, 0, primitive, (V_Object)ptrO );
	else VPLPrimSetOutputObjectNULL( environment, primInArity, 0, primitive );

	*trigger = kSuccess;

	return kNOERROR;
}

Int4 VPLP_from_2D_pointer( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_from_2D_pointer( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	vpl_Status		result = kNOERROR;	
	V_Object	object = NULL;	
	Nat4		pointer = 0;	
	Nat4		level = 1;

	V_Integer	outputInt = 0;	
	vpl_StringPtr	primName = "from-pointer";

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArityMin(environment,primName, primInArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputArityMax(environment,primName, primInArity, 2 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectTypes( 0,primName, primitive, environment, 2, kInteger, kExternalBlock );
	if( result != kNOERROR ) return result;

	if( primInArity == 2 ) {
		result = VPLPrimCheckInputObjectTypes( 1,primName, primitive, environment, 1, kInteger );
		if( result != kNOERROR ) return result;
	}
	
#endif

	object = VPLPrimGetInputObject(0,primitive,environment);
	
	if( primInArity == 2) result = VPLPrimGetInputObjectInteger((vpl_Integer*)&level,1,primName,primitive,environment);
	else if( object->type == kExternalBlock ) level = (((V_ExternalBlock) object)->levelOfIndirection);
	
	if( level == 2 ) {
		if(object->type == kExternalBlock) pointer = **(Nat4 **)(((V_ExternalBlock) object)->blockPtr);
		else pointer = **(Nat4 **)(((V_Integer) object)->value);
	} else if( level == 1 ) {
		if(object->type == kExternalBlock) pointer = *(Nat4*)(((V_ExternalBlock) object)->blockPtr);
		else pointer = *(Nat4*)(((V_Integer) object)->value);
	} else {
		if(object->type == kExternalBlock) pointer = (Nat4)(((V_ExternalBlock) object)->blockPtr);
		else pointer = (Nat4)(((V_Integer) object)->value);
	}
	
	outputInt = int_to_integer(pointer,environment);
	VPLPrimSetOutputObject(environment,primInArity,0,primitive,(V_Object) outputInt);

	*trigger = kSuccess;	
	return kNOERROR;
}

Int4 VPLP_make_2D_external( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_make_2D_external( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	Int1			*primName = "make-external";
	Int4			result = kNOERROR;

	V_Object		object = NULL;
	Nat4			size = 0;
	Nat4			tempSize = 0;
	Nat4			count = 1;
	Int1			*name = NULL;
	Nat4			level = 0;
	vpl_StringPtr	finalName = NULL;

	void			*pointer = NULL;

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArityMin(environment,primName, primInArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputArityMax(environment,primName, primInArity, 4 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kString,0,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	switch(primInArity){
	
		case 3:
			result = VPLPrimCheckInputObjectType( kInteger,2,primName,primitive, environment );
			if( result != kNOERROR ) return result;
		case 2:
			result = VPLPrimCheckInputObjectType( kInteger,1,primName, primitive, environment );
			if( result != kNOERROR ) return result;		
			break;
		default:
			break;
	}
#endif

	result = VPLPrimGetInputObjectString( &name, 0, primName, primitive, environment );
	
	switch(primInArity){	
		case 4:
			result = VPLPrimGetInputObjectInteger( (vpl_Integer*)&count, 3, primName, primitive, environment );
		case 3:
			result = VPLPrimGetInputObjectInteger( (vpl_Integer*)&level, 2, primName, primitive, environment );
		case 2:
			result = VPLPrimGetInputObjectInteger( (vpl_Integer*)&size, 1, primName, primitive, environment );
		default:
			break;
	}

	switch(primInArity){	
		case 4:
			result = VPLEnvironmentLookupExternalBlockSize( name, &finalName, NULL, &tempSize, NULL, environment );
			break;
		case 3:
			result = VPLEnvironmentLookupExternalBlockSize( name, &finalName, NULL, &tempSize, &count, environment );
			break;
		case 2:
			result = VPLEnvironmentLookupExternalBlockSize( name, &finalName, &level, &tempSize, &count, environment );
			break;
		default:
			result = VPLEnvironmentLookupExternalBlockSize( name, &finalName, &level, &size, &count, environment );
			break;
	}
	
	if( size == 0 ) size = tempSize;
	
	if( finalName == NULL ) finalName = new_string( name, environment );		// if the requested name isn't registered, NULL is returned from the Lookup.
	
	if( (size > 0) & (count > 0) ) pointer = (void *) X_calloc(count, size);
	if(pointer != NULL)
		VPLPrimSetOutputObjectEBlockPtr(environment,primInArity,0,primitive,(vpl_BlockPtr) pointer, finalName, (count * size), level);
	else VPLPrimSetOutputObjectNULL(environment,primInArity,0,primitive);

	*trigger = kSuccess;	
	return kNOERROR;
}

Int4 VPLP_set_2D_external_2D_type( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_set_2D_external_2D_type( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	Int1		*primName = "set-external-type";
	Int4		result = kNOERROR;

	V_ExternalBlock	tempBlock = NULL;
	V_Object		object = NULL;
	Int1			*type = NULL;	

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 2 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArityMin(environment,primName, primOutArity, 0 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArityMax(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kExternalBlock,0,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kString,1,primName, primitive, environment );
	if( result != kNOERROR ) return result;

#endif

	object = VPLPrimGetInputObject(0,primitive,environment);
	tempBlock = (V_ExternalBlock) object;
	
	object = VPLPrimGetInputObject(1,primitive,environment);
	type = ((V_String) object)->string;
	
	X_free(tempBlock->name);
	tempBlock->name = new_string(type,environment);
	
	if(primOutArity == 1){
		increment_count((V_Object) tempBlock);
		VPLPrimSetOutputObject(environment,primInArity,0,primitive,(V_Object) tempBlock);
	}

	*trigger = kSuccess;	
	return kNOERROR;
}

Int4 VPLP_set_2D_external_2D_destructor( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_set_2D_external_2D_destructor( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	V_ExternalBlock	theExtBlock = NULL;
	void*			theNewFunc = NULL;
	vpl_StringPtr	theFuncName = NULL;
	
	Int1			*primName = "set-external-destructor";
	Int4			result = kNOERROR;
	
#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity( environment, primName, primInArity, 2 );
	if( result != kNOERROR ) return result;
	
	result = VPLPrimCheckOutputArityMin(environment,primName, primOutArity, 0 );
	if( result != kNOERROR ) return result;
	
	result = VPLPrimCheckOutputArityMax(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;
	
	result = VPLPrimCheckInputObjectType( kExternalBlock, 0, primName, primitive, environment );
	if( result != kNOERROR ) return result;
	
#endif
	
	theExtBlock = (V_ExternalBlock)VPLPrimGetInputObject( 0, primitive, environment );
	
	if( theExtBlock->system & kSystemReservedC ) {
		if( theExtBlock->blockFreeProcPtr != NULL ) {
			VPLEnvironmentCallbackRelease( theExtBlock->blockFreeProcPtr );
			theExtBlock->blockFreeProcPtr = NULL;
		}
		theExtBlock->system = theExtBlock->system | !kSystemReservedC;
	}
	
	if( VPLPrimGetInputObjectType(kString, 1, primitive, environment) == kNOERROR ) 
	{
		V_ExtProcedure	theProcEntry = NULL;
		
		result = VPLPrimGetInputObjectString( &theFuncName, 1, primName, primitive, environment );
		if( result != kNOERROR ) return result;

		theProcEntry = get_extProcedure( environment->externalProceduresTable, theFuncName );
		if( theProcEntry ) theNewFunc = theProcEntry->functionPtr;
		// log theFuncName wasn't found?
		if( theNewFunc == NULL ) return kWRONGINPUTTYPE;
	} else {
		if( VPLPrimGetInputObjectType(kExternalBlock, 1, primitive, environment) == kNOERROR ) {
			result = VPLPrimGetInputObjectEBlockPtrCoerce( &theNewFunc, NULL, 1, primName, primitive, environment );
			if( result != kNOERROR ) return result;
			
			theExtBlock->system = theExtBlock->system | kSystemReservedC;
			VPLEnvironmentCallbackRetain( theNewFunc );
		}
	}
	
	if( theExtBlock )
		theExtBlock->blockFreeProcPtr = theNewFunc;
	
	if(primOutArity == 1)
		VPLPrimSetOutputObjectFromInputObject( environment, primInArity, 0, primitive, 0, NULL );
	
	*trigger = kSuccess;	
	return kNOERROR;
}


Int4 VPLP_get_2D_integer( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_get_2D_integer( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	Int4			result = kNOERROR;
	vpl_StringPtr	primName = "get-integer";
	
	vpl_BlockPtr	blockData = NULL;

	Nat4			theBuffer = 0;
	Nat4			theOffset =  0;
	Nat4			theSize = 0;
	
	Int4			theInteger = 0;


#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 3 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 3 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectTypes(  0, primName, primitive, environment, 2, kExternalBlock, kInteger);
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectTypes(  1, primName, primitive, environment, 2, kInteger, kNone);
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectTypes(  2, primName, primitive, environment, 2, kInteger, kNone);
	if( result != kNOERROR ) return result;
	
#endif

	result = VPLPrimGetInputObjectEBlockPtrCoerce( &blockData, NULL, 0, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	if( VPLPrimGetInputObjectType( kNone, 1, primitive, environment ) != kNOERROR ) {
		result = VPLPrimGetInputObjectInteger( (vpl_Integer*)&theOffset, 1, primName, primitive, environment );
		if( result != kNOERROR ) return result;
	}
	
	if( VPLPrimGetInputObjectType( kNone, 2, primitive, environment ) != kNOERROR ) {
		result = VPLPrimGetInputObjectInteger( (vpl_Integer*)&theSize, 2, primName, primitive, environment );
		if( result != kNOERROR ) return result;
	}
	
	theBuffer = (Nat4)blockData + theOffset;
	
	switch(theSize){
		case 1:
			theInteger = *((Int1 *) theBuffer);
			break;

		case 2:
			theInteger = *((Int2 *) theBuffer);
			break;

		case 4:
			theInteger = *((Int4 *) theBuffer);
			break;

		default:
			theInteger = *((Int4 *) theBuffer);
			break;

	}
	
	theOffset += theSize;
	
	VPLPrimSetOutputObjectFromInputObject( environment, primInArity, 0, primitive, 0, NULL );
	VPLPrimSetOutputObjectInteger( environment, primInArity, 1, primitive, theOffset );
	VPLPrimSetOutputObjectInteger( environment, primInArity, 2, primitive, theInteger );
	
	*trigger = kSuccess;	
	return kNOERROR;
}

Int4 VPLP_put_2D_integer( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_put_2D_integer( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	Int4			result = kNOERROR;
	vpl_StringPtr	primName = "put-integer";

	vpl_BlockPtr	blockData = NULL;

	Nat4			theBuffer = 0;
	Nat4			theOffset =  0;
	Nat4			theSize = 0;
	
	Int4			theInteger = 0;


#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 4 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 2 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectTypes( 0, primName, primitive, environment, 2, kExternalBlock, kInteger );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectTypes( 1, primName, primitive, environment, 2, kInteger, kNone );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectTypes( 2, primName, primitive, environment, 2, kInteger, kNone );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger, 3, primName, primitive, environment );
	if( result != kNOERROR ) return result;
	
#endif

	result = VPLPrimGetInputObjectEBlockPtrCoerce( &blockData, NULL, 0, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	if( VPLPrimGetInputObjectType( kNone, 1, primitive, environment ) != kNOERROR ) {
		result = VPLPrimGetInputObjectInteger( (vpl_Integer*)&theOffset, 1, primName, primitive, environment );
		if( result != kNOERROR ) return result;
	}
	
	if( VPLPrimGetInputObjectType( kNone, 2, primitive, environment ) != kNOERROR ) {
		result = VPLPrimGetInputObjectInteger( (vpl_Integer*)&theSize, 2, primName, primitive, environment );
		if( result != kNOERROR ) return result;
	}
	
	result = VPLPrimGetInputObjectInteger( (vpl_Integer*)&theInteger, 3, primName, primitive, environment );
	if( result != kNOERROR ) return result;
	
	theBuffer = (Nat4)blockData + theOffset;
	
	switch(theSize){
		case 1:
			*((Int1 *) theBuffer) = theInteger;
			break;

		case 2:
			*((Int2 *) theBuffer) = theInteger;
			break;

		case 4:
			*((Int4 *) theBuffer) = theInteger;
			break;

		default:
			*((Int4 *) theBuffer) = theInteger;
			break;

	}
	
	theOffset += theSize;
	
	VPLPrimSetOutputObjectFromInputObject( environment, primInArity, 0, primitive, 0, NULL );
	VPLPrimSetOutputObjectInteger( environment, primInArity, 1, primitive, theOffset );

	*trigger = kSuccess;	
	return kNOERROR;
}

Int4 VPLP_get_2D_real( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_get_2D_real( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	Int4			result = kNOERROR;
	vpl_StringPtr	primName = "get-real";

	vpl_BlockPtr	blockData = NULL;

	Nat4			theBuffer = 0;
	Nat4			theOffset =  0;
	Nat4			theSize = 0;
	
	Real10			theFloat = 0;

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 3 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 3 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectTypes( 0, primName, primitive, environment, 2, kExternalBlock, kInteger );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectTypes( 1, primName, primitive, environment, 2, kInteger, kNone );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectTypes( 2, primName, primitive, environment, 2, kInteger, kNone );
	if( result != kNOERROR ) return result;
		
#endif

	result = VPLPrimGetInputObjectEBlockPtrCoerce( &blockData, NULL, 0, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	if( VPLPrimGetInputObjectType( kNone, 1, primitive, environment ) != kNOERROR ) {
		result = VPLPrimGetInputObjectInteger( (vpl_Integer*)&theOffset, 1, primName, primitive, environment );
		if( result != kNOERROR ) return result;
	}
	
	if( VPLPrimGetInputObjectType( kNone, 2, primitive, environment ) != kNOERROR ) {
		result = VPLPrimGetInputObjectInteger( (vpl_Integer*)&theSize, 2, primName, primitive, environment );
		if( result != kNOERROR ) return result;
	}
	
	theBuffer = (Nat4)blockData + theOffset;
	
	switch(theSize){
		case 4:
			theFloat = *((Real4 *) theBuffer);
			break;

		case 8:
			theFloat = *((Real10 *) theBuffer);
			break;

		default:
			theFloat = *((Real4 *) theBuffer);
	}
	
	theOffset += theSize;
	
	VPLPrimSetOutputObjectFromInputObject( environment, primInArity, 0, primitive, 0, NULL );
	VPLPrimSetOutputObjectInteger( environment, primInArity, 1, primitive, theOffset );
	VPLPrimSetOutputObjectReal( environment, primInArity, 2, primitive, theFloat );

	*trigger = kSuccess;	
	return kNOERROR;
}

Int4 VPLP_put_2D_real( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_put_2D_real( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	Int4			result = kNOERROR;
	Int1			*primName = "put-real";

	vpl_BlockPtr	blockData = NULL;

	Nat4			theBuffer = 0;
	Nat4			theOffset =  0;
	Nat4			theSize = 0;
	
	Real10			theFloat = 0;

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 4 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 2 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectTypes( 0, primName, primitive, environment, 2, kExternalBlock, kInteger );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectTypes( 1, primName, primitive, environment, 2, kInteger, kNone );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectTypes( 2, primName, primitive, environment, 2, kInteger, kNone );
	if( result != kNOERROR ) return result;
	
	result = VPLPrimCheckInputObjectTypes( 3, primName, primitive, environment, 2, kInteger, kReal );
	if( result != kNOERROR ) return result;
	
#endif

	result = VPLPrimGetInputObjectEBlockPtrCoerce( &blockData, NULL, 0, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	if( VPLPrimGetInputObjectType( kNone, 1, primitive, environment ) != kNOERROR ) {
		result = VPLPrimGetInputObjectInteger( (vpl_Integer*)&theOffset, 1, primName, primitive, environment );
		if( result != kNOERROR ) return result;
	}
	
	if( VPLPrimGetInputObjectType( kNone, 2, primitive, environment ) != kNOERROR ) {
		result = VPLPrimGetInputObjectInteger( (vpl_Integer*)&theSize, 2, primName, primitive, environment );
		if( result != kNOERROR ) return result;
	}
	
	result = VPLPrimGetInputObjectRealCoerce( (vpl_Real*)&theFloat, 3, primName, primitive, environment );
	if( result != kNOERROR ) return result;
	
	theBuffer = (Nat4)blockData + theOffset;
	
	switch(theSize){
		case 4:
			*((Real4 *) theBuffer) = theFloat;
			break;

		case 8:
			*((Real10 *) theBuffer) = theFloat;
			break;

		default:
			*((Real4 *) theBuffer) = theFloat;
			break;
	}
	
	theOffset += theSize;
	
	VPLPrimSetOutputObjectFromInputObject( environment, primInArity, 0, primitive, 0, NULL );
	VPLPrimSetOutputObjectInteger( environment, primInArity, 1, primitive, theOffset );

	*trigger = kSuccess;	
	return kNOERROR;
}

Int4 VPLP_get_2D_text( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive ); /* get-text */
Int4 VPLP_get_2D_text( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive ) /* get-text */
{
	vpl_Status		result = 0;	
	vpl_StringPtr	primName = "get-text";

	vpl_BlockPtr	blockData = NULL;

	Nat4			theBuffer = 0;
	vpl_Integer		theOffset =  0;
	vpl_Integer		theSize = 0;
	
	Nat4			counter = 0;
	vpl_StringPtr	theString = "";
	vpl_StringPtr	outString = "";
	
	vpl_StringEncoding	theEncoding = vpl_Default_StringEncoding;			// kCFStringEncodingUTF8;

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArityMin(environment,primName, primInArity, 3 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputArityMax(environment,primName, primInArity, 4 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 3 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectTypes( 0, primName, primitive, environment, 2, kExternalBlock, kInteger );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectTypes( 1, primName, primitive, environment, 2, kInteger, kNone );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectTypes( 2, primName, primitive, environment, 1, kInteger );
	if( result != kNOERROR ) return result;

	if( primInArity == 4 ) {
		result = VPLPrimCheckInputObjectTypes( 3, primName, primitive, environment, 1, kInteger );
		if( result != kNOERROR ) return result;
	}
	
#endif

	result = VPLPrimGetInputObjectEBlockPtrCoerce( &blockData, NULL, 0, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	if( VPLPrimGetInputObjectType( kNone, 1, primitive, environment ) != kNOERROR ) {
		result = VPLPrimGetInputObjectInteger( (vpl_Integer*)&theOffset, 1, primName, primitive, environment );
		if( result != kNOERROR ) return result;
	}

	result = VPLPrimGetInputObjectInteger( &theSize, 2, primName, primitive, environment );
	if( result != kNOERROR ) return result;
	
	if( primInArity == 4 ) {
		result = VPLPrimGetInputObjectInteger( (long*)&theEncoding, 3, primName, primitive, environment );
		if( result != kNOERROR ) return result;
	}
	
	theBuffer = (Nat4)blockData + theOffset;			// should check if theBuffer is within theOffset + theSize
	
	theString = (vpl_StringPtr) X_malloc( (theSize + 1)*vpl_CharSize );
	theString[theSize] = vpl_StringTerminator;
	
	memmove( theString, (const void*)theBuffer, theSize );
	
	outString = VPLStringCoerceEncoding( theString, theSize, theEncoding, vpl_Default_StringEncoding, environment );

	X_free( theString );

	theOffset += theSize;
	
	VPLPrimSetOutputObjectFromInputObject( environment, primInArity, 0, primitive, 0, NULL );
	VPLPrimSetOutputObjectInteger( environment, primInArity, 1, primitive, theOffset );
	if( outString != NULL ) 
		VPLPrimSetOutputObjectString( environment, primInArity, 2, primitive, outString );
	else
		VPLPrimSetOutputObjectNULL( environment, primInArity, 2, primitive );

	*trigger = kSuccess;

	return kNOERROR;
}

Int4 VPLP_put_2D_text( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive ); /* put-text */
Int4 VPLP_put_2D_text( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive ) /* put-text */
{
	vpl_Status		result = 0;	
	vpl_StringPtr	primName = "put-text";

	vpl_BlockPtr	blockData = NULL;

	Nat4			theBuffer = 0;
	vpl_Integer		theOffset =  0;
	vpl_Integer		theSize = 0;
	
	Nat4			counter = 0;
	vpl_StringPtr	theString = "";
	vpl_StringPtr	outString = "";
	vpl_Integer		outSize = 0;

	vpl_StringEncoding	theEncoding = vpl_Default_StringEncoding;		// kCFStringEncodingUTF8;

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArityMin(environment,primName, primInArity, 4 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputArityMax(environment,primName, primInArity, 5 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 2 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectTypes( 0, primName, primitive, environment, 2, kExternalBlock, kInteger );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectTypes( 1, primName, primitive, environment, 2, kInteger, kNone );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectTypes( 2, primName, primitive, environment, 2, kInteger, kNone );
	if( result != kNOERROR ) return result;
	
	result = VPLPrimCheckInputObjectTypes( 3, primName, primitive, environment, 1, kString );
	if( result != kNOERROR ) return result;

	if( primInArity == 5 ) {
		result = VPLPrimCheckInputObjectTypes( 4, primName, primitive, environment, 1, kInteger );
		if( result != kNOERROR ) return result;
	}

#endif

	result = VPLPrimGetInputObjectEBlockPtrCoerce( &blockData, NULL, 0, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	if( VPLPrimGetInputObjectType( kNone, 1, primitive, environment ) != kNOERROR ) {
		result = VPLPrimGetInputObjectInteger( (vpl_Integer*)&theOffset, 1, primName, primitive, environment );
		if( result != kNOERROR ) return result;
	}
	
	if( VPLPrimGetInputObjectType( kNone, 2, primitive, environment ) != kNOERROR ) {
		result = VPLPrimGetInputObjectInteger( (vpl_Integer*)&theSize, 2, primName, primitive, environment );
		if( result != kNOERROR ) return result;
	}
	
	result = VPLPrimGetInputObjectStringCopy( &theString, 3, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	if( primInArity == 5 ) {
		result = VPLPrimGetInputObjectInteger( (long*)&theEncoding, 4, primName, primitive, environment );
		if( result != kNOERROR ) return result;
	}
	
	// check if theString is within theSize 
	// theString is a copy so we can futz with it
	
	if( theSize > strlen( theString ) ) theSize = strlen( theString );
	if( theSize < 1 ) theSize = strlen( theString );
	if( theSize < strlen( theString ) ) theString[ theSize ] = '\0';			

	// convert 
	
//#ifdef CARBON
#if 0
	{
		CFIndex			bufferSize = 0;
		CFIndex			charCount = 0;
		CFStringRef		convertString = NULL;
		Boolean			goodCoerce = false;

		theBuffer = (Nat4)blockData + theOffset;

		convertString = (CFStringRef)CFStringCreateWithBytesNoCopy( kCFAllocatorDefault, (UInt8*)theString, theSize, vpl_Default_StringEncoding, FALSE, kCFAllocatorNull );
		if( convertString != NULL ) {
			bufferSize = CFStringGetMaximumSizeForEncoding( CFStringGetLength( convertString ), theEncoding );
			charCount = CFStringGetBytes( convertString, CFRangeMake(0, theSize), theEncoding, 0, FALSE, (UInt8*)theBuffer, bufferSize, (CFIndex*)&outSize );
			CFRelease( convertString );
		}
		theOffset += outSize;
		X_free( theString );
	}
#else
	outString = VPLStringCoerceEncoding( theString, theSize, vpl_Default_StringEncoding, theEncoding, environment );
	
	X_free( theString );

	theBuffer = (Nat4)blockData;
	
	if( outString != NULL ) {
		theSize = strlen( outString );		// theSize now changes to fit the encoding - NOTE THIS CODE WILL FAIL TO SUPPORT WIDE ENCODINGS!
		theBuffer += theOffset;				// should check if theBuffer is within theOffset + theSize
			
		for( counter = 0; counter<theSize; counter++, theBuffer++ )
			*((vpl_StringPtr) theBuffer) = outString[counter];

		theOffset += theSize;				// theOffset only changes if the coercion was successful
		
		X_free( outString );
	}
#endif // CARBON
	
	VPLPrimSetOutputObjectFromInputObject( environment, primInArity, 0, primitive, 0, NULL );
	VPLPrimSetOutputObjectInteger( environment, primInArity, 1, primitive, theOffset );

	*trigger = kSuccess;
	return kNOERROR;
}

Int4 VPLP_get_2D_block( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive ); /* get-block */
Int4 VPLP_get_2D_block( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive ) /* get-block */
{
	V_Object	block = NULL;

	Nat4		theBuffer = 0;
	vpl_Integer		theOffset =  0;
	vpl_Integer		theSize = 0;
	
	vpl_StringPtr	tempName = "void";
	vpl_StringPtr	blockName = NULL;
	vpl_BlockSize	tempSize = 0;
	vpl_BlockSize	tempCount = 1;
	vpl_BlockLevel	tempLevel = kvpl_BlockLevelBlock;
	
	Nat4		counter = 0;
	vpl_Status		result = 0;	
	Nat1*		theBytes = NULL;

	vpl_StringPtr	primName = "get-block";
//	Int1	*moduleName = NULL;
	vpl_BlockPtr	blockData = NULL;
	V_ExternalBlock	externalBlock = NULL;
	
#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 3 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 3 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectTypes(  0, primName, primitive, environment, 2, kExternalBlock, kInteger);
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectTypes(  1, primName, primitive, environment, 2, kInteger, kNone);
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectTypes(  2, primName, primitive, environment, 2, kString, kInteger);
	if( result != kNOERROR ) return result;

#endif

/*	externalBlock = (V_ExternalBlock) block;

	if(externalBlock->levelOfIndirection == 0) theBuffer = (Nat4) externalBlock->blockPtr;
	else if(externalBlock->levelOfIndirection == 1) theBuffer = *(Nat4 *) externalBlock->blockPtr;
	else if(externalBlock->levelOfIndirection == 2) theBuffer = **(Nat4 **) externalBlock->blockPtr;
	else  return record_error("get-block: Level of indirection greater than 2! - ",moduleName,kERROR,environment);
*/

	result = VPLPrimGetInputObjectEBlockPtrCoerce( &blockData, NULL, 0, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	if( VPLPrimGetInputObjectType( kNone, 1, primitive, environment ) != kNOERROR ) {
		result = VPLPrimGetInputObjectInteger( &theOffset, 1, primName, primitive, environment );
		if( result != kNOERROR ) return result;
	}
	
	if( VPLPrimGetInputObjectType( kInteger, 2, primitive, environment ) == kNOERROR ) {
		result = VPLPrimGetInputObjectInteger( &theSize, 2, primName, primitive, environment );
		if( result != kNOERROR ) return result;
	} else {
		result = VPLPrimGetInputObjectString( &tempName, 2, primName, primitive, environment );
		if( result != kNOERROR ) return result;
		
		result = VPLEnvironmentLookupExternalBlockSize( tempName, &blockName, &tempLevel, &tempSize, &tempCount, environment );
		if( result != kNOERROR ) return result;
		
		if( tempLevel > kvpl_BlockLevelBlock ) tempSize = sizeof(vpl_BlockPtr);
		theSize = tempSize * tempCount;
	}

	if( blockName == NULL ) blockName = tempName;

	theBuffer = (Nat4)blockData + theOffset;			// should check if theBuffer is within theOffset + theSize
	
	theBytes = (Nat1*) X_malloc( (theSize)*sizeof(Nat1) );
	if( theBytes != NULL ) {
		for( counter = 0; counter<theSize; counter++, theBuffer++ )
			theBytes[counter] = *((Nat1*)theBuffer);
		VPLPrimSetOutputObjectEBlockPtr(environment,primInArity,2,primitive, theBytes, blockName, theSize, tempLevel);
	} else VPLPrimSetOutputObjectNULL(environment,primInArity,2,primitive);

	theOffset += theSize;
	
	VPLPrimSetOutputObjectFromInputObject( environment, primInArity, 0, primitive, 0, NULL );
	VPLPrimSetOutputObjectInteger( environment, primInArity, 1, primitive, theOffset );

	*trigger = kSuccess;

	return kNOERROR;
}

Int4 VPLP_put_2D_block( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive ); /* put-block */
Int4 VPLP_put_2D_block( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive ) /* put-block */
{
	V_Object	block = NULL;

	Nat4		theBuffer = 0;
	vpl_Integer		theOffset =  0;
	vpl_Integer		theSize = 0;
	
	Bool			haveSize = FALSE;
	
	vpl_StringPtr	tempName = "void";
	vpl_BlockSize	tempSize = 0;
	vpl_BlockSize	tempCount = 1;
	vpl_BlockLevel	tempLevel = kvpl_BlockLevelBlock;
	
	Nat4		counter = 0;
	vpl_Status		result = 0;	
	Nat4		theBytes = 0;

	vpl_BlockPtr	blockData = NULL;
	vpl_BlockPtr	sourceData = NULL;
	V_ExternalBlock	externalBlock = NULL;


	vpl_StringPtr	primName = "put-block";
	Int1	*moduleName = NULL;

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 4 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 2 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectTypes(  0, primName, primitive, environment, 2, kExternalBlock, kInteger);
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectTypes(  1, primName, primitive, environment, 2, kInteger, kNone);
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectTypes(  2, primName, primitive, environment, 3, kString, kInteger, kNone);
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectTypes(  3, primName, primitive, environment, 2, kExternalBlock, kInteger);
	if( result != kNOERROR ) return result;

#endif

/*
	externalBlock = (V_ExternalBlock) block;

	if(externalBlock->levelOfIndirection == 0) theBuffer = (Nat4) externalBlock->blockPtr;
	else if(externalBlock->levelOfIndirection == 1) theBuffer = *(Nat4 *) externalBlock->blockPtr;
	else if(externalBlock->levelOfIndirection == 2) theBuffer = **(Nat4 **) externalBlock->blockPtr;
	else  return record_error("put-block: Level of indirection greater than 2! - ",moduleName,kERROR,environment);

	result = VPLPrimGetInputObjectInteger( &theOffset, 1, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimGetInputObjectInteger( &theSize, 2, primName, primitive, environment );
	if( result != kNOERROR ) return result;
	
	result = VPLPrimGetInputObjectCheckType( &block, kExternalBlock, 3, primName, primitive, environment );
	if( result != kNOERROR ) return result;
	externalBlock = (V_ExternalBlock) block;

	if(externalBlock->levelOfIndirection == 0) theBytes = (Nat4) externalBlock->blockPtr;
	else if(externalBlock->levelOfIndirection == 1) theBytes = *(Nat4 *) externalBlock->blockPtr;
	else if(externalBlock->levelOfIndirection == 2) theBytes = **(Nat4 **) externalBlock->blockPtr;
	else  return record_error("put-block: Level of indirection greater than 2! - ",moduleName,kERROR,environment);

	theBuffer += theOffset;				// should check if theBuffer is within theOffset + theSize
			
	for( counter = 0; counter<theSize; counter++, theBuffer++, theBytes++ ) {
//		*((Nat1*) theBuffer) = theBytes[counter];
		*((Nat1*) theBuffer) = *((Nat1*)theBytes);
//		printf("put byte:%d\n", *((Nat1*)theBytes));		
	}
*/

	result = VPLPrimGetInputObjectEBlockPtrCoerce( &blockData, NULL, 0, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	if( VPLPrimGetInputObjectType( kNone, 1, primitive, environment ) != kNOERROR ) {
		result = VPLPrimGetInputObjectInteger( &theOffset, 1, primName, primitive, environment );
		if( result != kNOERROR ) return result;
	}
	
	if( VPLPrimGetInputObjectType( kInteger, 2, primitive, environment ) == kNOERROR ) {
		result = VPLPrimGetInputObjectInteger( &theSize, 2, primName, primitive, environment );
		if( result != kNOERROR ) return result;
		haveSize = TRUE;
	} else if( VPLPrimGetInputObjectType( kNone, 2, primitive, environment ) != kNOERROR ) {
		haveSize = FALSE;
	} else {
		result = VPLPrimGetInputObjectString( &tempName, 2, primName, primitive, environment );
		if( result != kNOERROR ) return result;
		
		result = VPLEnvironmentLookupExternalBlockSize( tempName, NULL, &tempLevel, &tempSize, &tempCount, environment );
		if( result != kNOERROR ) return result;
		
		if( tempLevel > kvpl_BlockLevelBlock ) tempSize = sizeof(vpl_BlockPtr);
		theSize = tempSize * tempCount;
		haveSize = TRUE;
	}

	if( haveSize == TRUE ) {
		result = VPLPrimGetInputObjectEBlockPtrCoerce( &sourceData, NULL, 3, primName, primitive, environment );
		if( result != kNOERROR ) return result;
		theBytes = (Nat4)sourceData;
	} else {
		result = VPLPrimGetInputObjectCheckType( (V_Object*)&externalBlock, kExternalBlock, 3, primName, primitive, environment );
		if( result != kNOERROR ) return result;
		
		if( externalBlock != NULL ) {
			tempSize = VPLObjectGetExternalBlockSize( (V_Object)externalBlock );
			tempLevel = VPLObjectGetExternalBlockLevel( (V_Object)externalBlock );
			sourceData = VPLObjectGetExternalBlockPtr( (V_Object)externalBlock );
			
			if(tempLevel == kvpl_BlockLevelBlock) theBytes = (Nat4) sourceData;
			else if(tempLevel == kvpl_BlockLevelPointer) theBytes = *(Nat4 *) sourceData;
			else if(tempLevel == kvpl_BlockLevelHandle) theBytes = **(Nat4 **) sourceData;
			else return record_error("put-block: Level of indirection greater than 2! - ",moduleName,kERROR,environment);
			
			if( tempLevel > kvpl_BlockLevelBlock ) tempSize = sizeof(vpl_BlockPtr);
			theSize = tempSize * tempCount;
			haveSize = TRUE;
		}
	}

	if( haveSize == FALSE ) return record_error("put-block: data size not specified",moduleName,kERROR,environment);
	if( theBytes == 0 ) return record_error("put-block: data block is NULL",moduleName,kERROR,environment);

	theBuffer = (Nat4)blockData + theOffset;				// should check if theBuffer is within theOffset + theSize
			
	for( counter = 0; counter<theSize; counter++, theBuffer++, theBytes++ ) {
		*((Nat1*) theBuffer) = *((Nat1*)theBytes);
	}

	theOffset += theSize;				
			
	VPLPrimSetOutputObjectFromInputObject( environment, primInArity, 0, primitive, 0, NULL );
	VPLPrimSetOutputObjectInteger( environment, primInArity, 1, primitive, theOffset );

	*trigger = kSuccess;

	return kNOERROR;
}

Int4 VPLP_pointer_2D_to_2D_integer( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_pointer_2D_to_2D_integer( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	return VPLP_get_2D_integer(environment,trigger,primInArity,primOutArity,primitive);
}

Int4 VPLP_integer_2D_to_2D_pointer( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_integer_2D_to_2D_pointer( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	return VPLP_put_2D_integer(environment,trigger,primInArity,primOutArity,primitive);
}	

Nat4	loadConstants_VPX_PrimitivesMemory(V_Environment environment,char *bundleID);
Nat4	loadConstants_VPX_PrimitivesMemory(V_Environment environment,char *bundleID)
{
#pragma unused(environment)
#pragma unused(bundleID)
        
        return kNOERROR;

}

Nat4	loadStructures_VPX_PrimitivesMemory(V_Environment environment,char *bundleID);
Nat4	loadStructures_VPX_PrimitivesMemory(V_Environment environment,char *bundleID)
{
#pragma unused(environment)
#pragma unused(bundleID)
        
        return kNOERROR;

}

Nat4	loadProcedures_VPX_PrimitivesMemory(V_Environment environment,char *bundleID);
Nat4	loadProcedures_VPX_PrimitivesMemory(V_Environment environment,char *bundleID)
{
#pragma unused(environment)
#pragma unused(bundleID)
        
        return kNOERROR;

}

Nat4	loadPrimitives_VPX_PrimitivesMemory(V_Environment environment,char *bundleID);
Nat4	loadPrimitives_VPX_PrimitivesMemory(V_Environment environment,char *bundleID)
{
        V_ExtPrimitive	result = NULL;
        V_Dictionary	dictionary = environment->externalPrimitivesTable;
       
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"string-address",dictionary,1,1,VPLP_string_2D_address)) == NULL) return kERROR;

        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"retain-object",dictionary,1,1,VPLP_retain_2D_object)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"release-object",dictionary,1,0,VPLP_release_2D_object)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"get-retain-count",dictionary,1,1,VPLP_get_2D_retain_2D_count)) == NULL) return kERROR;

        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"object-to-address",dictionary,1,1,VPLP_object_2D_to_2D_address)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"address-to-object",dictionary,1,1,VPLP_address_2D_to_2D_object)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"object-to-archive",dictionary,1,2,VPLP_object_2D_to_2D_archive)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"archive-to-object",dictionary,1,1,VPLP_archive_2D_to_2D_object)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"archive-to-list",dictionary,1,1,VPLP_archive_2D_to_2D_list)) == NULL) return kERROR;

        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"make-external",dictionary,1,1,VPLP_make_2D_external)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"to-pointer",dictionary,1,1,VPLP_to_2D_pointer)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"from-pointer",dictionary,1,1,VPLP_from_2D_pointer)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"set-external-type",dictionary,2,1,VPLP_set_2D_external_2D_type)) == NULL) return kERROR;
		if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"set-external-destructor",dictionary,2,1,VPLP_set_2D_external_2D_destructor)) == NULL) return kERROR;

        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"get-integer",dictionary,3,3,VPLP_get_2D_integer)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"put-integer",dictionary,4,2,VPLP_put_2D_integer)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"get-real",dictionary,3,3,VPLP_get_2D_real)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"put-real",dictionary,4,2,VPLP_put_2D_real)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"put-text",dictionary,4,2,VPLP_put_2D_text)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"get-text",dictionary,3,3,VPLP_get_2D_text)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"put-block",dictionary,4,2,VPLP_put_2D_block)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"get-block",dictionary,3,3,VPLP_get_2D_block)) == NULL) return kERROR;

        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"pointer-to-integer",dictionary,3,3,VPLP_pointer_2D_to_2D_integer)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"integer-to-pointer",dictionary,4,2,VPLP_integer_2D_to_2D_pointer)) == NULL) return kERROR;

        return kNOERROR;

}

Nat4	load_VPX_PrimitivesMemory(V_Environment environment,char *bundleID);
Nat4	load_VPX_PrimitivesMemory(V_Environment environment,char *bundleID)
{
		Nat4	result = 0;
		
		result = loadConstants_VPX_PrimitivesMemory(environment,bundleID);
		result = loadStructures_VPX_PrimitivesMemory(environment,bundleID);
		result = loadProcedures_VPX_PrimitivesMemory(environment,bundleID);
		result = loadPrimitives_VPX_PrimitivesMemory(environment,bundleID);
		
		return result;
}

