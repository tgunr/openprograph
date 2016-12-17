/*
	
	VPX_PrimitivesCallbacks.c
	Copyright 2003 Scott B. Anderson, All Rights Reserved.
	
*/
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#ifdef __MWERKS__
#include "VPL_Compiler.h"
#elif __GNUC__
#include <MartenEngine/MartenEngine.h>

typedef struct VPL_CallbackCodeSegment
{
	Nat4					loadHighAddress;
	Nat4					orAddress;
	Nat4					loadHighOp;
	Nat4					orOp;
	Nat4					mtctrOp;
	Nat4					branchOp;
	Int1					*vplRoutine;
	V_ExtProcedure			callbackFunction;
	V_Environment			theEnvironment;
	Nat4					listInput;
	V_Object				object;
	V_CallbackCodeSegment	previous;
	V_CallbackCodeSegment	next;
	Nat4					use;
}	VPL_CallbackCodeSegment;

#endif	

Int4 VPLP_callback( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_callback( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	vpl_Status		result = kNOERROR;
	Int1			*primName = "callback";

	V_Object		block = NULL;
	V_Object		flag = NULL;

/* Variables to handle inputs */
	
	Int1			*vplRoutine = "";
	Int1			*procedureName = "";
	Bool			inputListFlag = kFALSE;

/* Variables to handle internal processing */

	V_CallbackCodeSegment	structure = NULL;
	V_CallbackCodeSegment	*structurePtr = NULL;
	V_ExternalBlock	ptrO = NULL;
	
	Int1	*moduleName = NULL;

	if(environment->callbackHandler == NULL) {
		record_error("callback: No callback handler installed for environment!",moduleName,kWRONGINPUTTYPE,environment);
		VPLPrimSetOutputObjectNULL(environment,primInArity,0,primitive);
		*trigger = kSuccess;	
		return kNOERROR;
	}

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArityMin(environment,primName, primInArity, 2 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputArityMax(environment,primName, primInArity, 4 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kString,0, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kString,1, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	switch(primInArity){
	
		case 4:
			result = VPLPrimCheckInputObjectType( kBoolean,3,primName, primitive, environment );
			if( result != kNOERROR ) return result;
		case 3:
			break;
		default:
			break;
	}
#endif

	block = VPLPrimGetInputObject(0,primitive,environment);
	vplRoutine = ((V_String)block)->string;

	block = VPLPrimGetInputObject(1,primitive,environment);
	procedureName = ((V_String)block)->string;

	if(primInArity >= 3){
		block = VPLPrimGetInputObject(2,primitive,environment);
		if(block != NULL && block->type == kNone) return record_error("callback: Input 3 type is none!",moduleName,kWRONGINPUTTYPE,environment);
		if(block != NULL) block->system = block->system | kSystemUsed;
	} else block = NULL;
	
	if(primInArity >= 4){
		flag = VPLPrimGetInputObject(3,primitive,environment);
		inputListFlag = ((V_Boolean) flag)->value;
	} else inputListFlag = kFALSE;
	
	structure = VPLEnvironmentCallbackCreate( environment, vplRoutine, procedureName, block, inputListFlag );
	structurePtr = (V_CallbackCodeSegment *) X_malloc(sizeof(V_CallbackCodeSegment));
	*structurePtr = structure;

	ptrO = create_externalBlock("VPL_CallbackCodeSegment",sizeof (VPL_CallbackCodeSegment),environment);
	ptrO->blockPtr = (void *) structurePtr;
	ptrO->levelOfIndirection = 1;
	VPLPrimSetOutputObject(environment,primInArity,0,primitive,(V_Object) ptrO);

//	printf( "Creation() of callback handler: %s @0x%08x\n", structure->vplRoutine, structure );

	*trigger = kSuccess;	
	return kNOERROR;
}

Int4 VPLP_dispose_2D_callback( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_dispose_2D_callback( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	vpl_Status		result = kNOERROR;
	Int1			*primName = "dispose-callback";
	V_Object		outputObject = NULL;

	V_Object		block = NULL;

/* Variables to handle inputs */
	
	V_CallbackCodeSegment	structure = NULL;

/* Variables to handle internal processing */
	
	Int1	*moduleName = NULL;

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectTypes(0, primName, primitive, environment,2, kNull, kExternalBlock );
	if( result != kNOERROR ) return result;

#endif

	block = VPLPrimGetInputObject(0,primitive,environment);
	if( block == NULL) {
		VPLPrimSetOutputObjectNULL(environment,primInArity,0,primitive);
		*trigger = kSuccess;	
		return kNOERROR;
	}
	if( strcmp(((V_ExternalBlock)block)->name,"VPL_CallbackCodeSegment") != 0) return record_error("insert-operation: Input 1 external not type VPL_CallbackCodeSegment! - ",moduleName,kWRONGINPUTTYPE,environment);
	
	structure = *(V_CallbackCodeSegment *) ((V_ExternalBlock)block)->blockPtr;

//	printf( "Attempted free() of callback handler: %s @0x%08x\n", structure->vplRoutine, structure );

	outputObject = VPLEnvironmentCallbackDispose( environment, structure );
	increment_count(outputObject);
	VPLPrimSetOutputObject(environment,primInArity,0,primitive,(V_Object) outputObject);
	
	*trigger = kSuccess;	
	return kNOERROR;
}

Int4 VPLP_system_2D_used( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_system_2D_used( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	vpl_Status		result = kNOERROR;
	Int1			*primName = "dispose-callback";
	V_Object		block = NULL;

/* Variables to handle inputs */
	
	V_Object		booleanObject = NULL;
	Bool			used = kFALSE;

/* Variables to handle internal processing */
	
#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 2 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 0 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kBoolean,1, primName, primitive, environment );
	if( result != kNOERROR ) return result;

#endif

	block = VPLPrimGetInputObject(0,primitive,environment);
	if(block) {
	
		booleanObject = VPLPrimGetInputObject(1,primitive,environment);
	
		used = ((V_Boolean) booleanObject)->value;

	
		if(used) block->system = block->system | kSystemUsed;
		else block->system = block->system & !kSystemUsed;
	}
	*trigger = kSuccess;	
	return kNOERROR;
}

Nat4	loadConstants_VPX_PrimitivesCallbacks(V_Environment environment,char *bundleID);
Nat4	loadConstants_VPX_PrimitivesCallbacks(V_Environment environment,char *bundleID)
{
#pragma unused(environment)
#pragma unused(bundleID)
        
        return kNOERROR;

}

Nat4	loadStructures_VPX_PrimitivesCallbacks(V_Environment environment,char *bundleID);
Nat4	loadStructures_VPX_PrimitivesCallbacks(V_Environment environment,char *bundleID)
{
#pragma unused(environment)
#pragma unused(bundleID)
        
        return kNOERROR;

}

Nat4	loadProcedures_VPX_PrimitivesCallbacks(V_Environment environment,char *bundleID);
Nat4	loadProcedures_VPX_PrimitivesCallbacks(V_Environment environment,char *bundleID)
{
#pragma unused(environment)
#pragma unused(bundleID)
        
        return kNOERROR;

}

Nat4	loadPrimitives_VPX_PrimitivesCallbacks(V_Environment environment,char *bundleID);
Nat4	loadPrimitives_VPX_PrimitivesCallbacks(V_Environment environment,char *bundleID)
{
        V_ExtPrimitive	result = NULL;
        V_Dictionary	dictionary = environment->externalPrimitivesTable;
        
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"callback",dictionary,2,1,VPLP_callback)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"dispose-callback",dictionary,1,1,VPLP_dispose_2D_callback)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"system-used",dictionary,2,0,VPLP_system_2D_used)) == NULL) return kERROR;

        return kNOERROR;

}

Nat4	load_VPX_PrimitivesCallbacks(V_Environment environment,char *bundleID);
Nat4	load_VPX_PrimitivesCallbacks(V_Environment environment,char *bundleID)
{
		Nat4	result = 0;
		
		result = loadConstants_VPX_PrimitivesCallbacks(environment,bundleID);
		result = loadStructures_VPX_PrimitivesCallbacks(environment,bundleID);
		result = loadProcedures_VPX_PrimitivesCallbacks(environment,bundleID);
		result = loadPrimitives_VPX_PrimitivesCallbacks(environment,bundleID);
		
		return result;
}



