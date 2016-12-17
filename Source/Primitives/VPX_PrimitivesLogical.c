/*
	
	VPL_PrimitivesLogical.c
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


Int4 VPLP__3D_( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );	/* = */
Int4 VPLP__3D_( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )	/* = */
{
	vpl_Status		result = kNOERROR;
	V_Object	left = NULL;	
	V_Object	right = NULL;
	Bool		isGood = kFALSE;

	Int1	*primName = "=";

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 2 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArityMin(environment,primName, primOutArity, 0 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArityMax(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

#endif

	left = VPLPrimGetInputObject(0,primitive,environment);

	right = VPLPrimGetInputObject(1,primitive,environment);
	
	isGood = object_identity(left , right );

	result = VPLPrimSetOutputObjectBoolOrFail( environment, trigger, primInArity, primOutArity, primitive, isGood );
	return kNOERROR;
}

Int4 VPLP__7E3D_( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );	/* != */
Int4 VPLP__7E3D_( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )	/* != */
{
	V_Object	left = NULL;	
	V_Object	right = NULL;
	Bool		isGood = kFALSE;

	Int1	*primName = "!=";
	vpl_Status	result = kNOERROR;		

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 2 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArityMin(environment,primName, primOutArity, 0 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArityMax(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

#endif

	left = VPLPrimGetInputObject(0,primitive,environment);

	right = VPLPrimGetInputObject(1,primitive,environment);
	
	if( object_identity(left , right) ) isGood = kFALSE;
	else isGood = kTRUE;

	result = VPLPrimSetOutputObjectBoolOrFail( environment, trigger, primInArity, primOutArity, primitive, isGood );
	return kNOERROR;
}

Int4 VPLP_and( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_and( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	V_Object	inputObject = NULL;	
	Bool		isGood = kFALSE;

	Nat4		counter = 0;
	vpl_Status	result = kNOERROR;		
	Int1	*primName = "and";

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArityMin(environment,primName, primInArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArityMin(environment,primName, primOutArity, 0 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArityMax(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

	for(counter = 0;counter<primInArity;counter++){
		result = VPLPrimCheckInputObjectType( kBoolean,counter, primName, primitive, environment );
		if( result != kNOERROR ) return result;
	}

#endif

	inputObject = VPLPrimGetInputObject(0,primitive,environment);
	isGood = ((V_Boolean) inputObject)->value;

	for(counter = 1;counter<primInArity;counter++){
		inputObject = VPLPrimGetInputObject(counter,primitive,environment);
		isGood = isGood && ((V_Integer) inputObject)->value;
	}
	

	result = VPLPrimSetOutputObjectBoolOrFail( environment, trigger, primInArity, primOutArity, primitive, isGood );
	return kNOERROR;
}

Int4 VPLP_choose( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_choose( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	vpl_Status	result = kNOERROR;		
	V_Object		outputObject = NULL;

	V_Object	theBoo = NULL;	
	V_Object	theTrueOut = NULL;
	V_Object	theFalseOut = NULL;
	V_Object	theOutChoice = NULL;

	Int1	*primName = "choose";

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 3 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kBoolean,0, primName, primitive, environment );
	if( result != kNOERROR ) return result;

#endif

	theBoo = VPLPrimGetInputObject(0,primitive,environment);

	theTrueOut	 = VPLPrimGetInputObject(1,primitive,environment);
	theFalseOut	 = VPLPrimGetInputObject(2,primitive,environment);

	theOutChoice = ((((V_Boolean) theBoo)->value) == kTRUE) ? (theTrueOut) : (theFalseOut);

	increment_count( theOutChoice );

	outputObject = (V_Object) theOutChoice;
	VPLPrimSetOutputObject(environment,primInArity,0,primitive,(V_Object) outputObject);

	*trigger = kSuccess;	
	return kNOERROR;
}

Int4 VPLP_equals( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_equals( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	return VPLP__3D_(environment,trigger,primInArity,primOutArity,primitive);
}

Int4 VPLP_not( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_not( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	V_Object		outputObject = NULL;

	V_Object	object = NULL;	
	Nat4		theValue = 0;

	vpl_Status	result = kNOERROR;		
	Int1	*primName = "not";

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kBoolean,0, primName, primitive, environment );
	if( result != kNOERROR ) return result;

#endif

	object = VPLPrimGetInputObject(0,primitive,environment);
	theValue = ((V_Boolean) object)->value;

	if(theValue == 0) theValue = 1;
	else theValue = 0;

	outputObject = (V_Object) bool_to_boolean(theValue, environment);
	VPLPrimSetOutputObject(environment,primInArity,0,primitive,(V_Object) outputObject);

	*trigger = kSuccess;	
	return kNOERROR;
}

Int4 VPLP_or( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_or( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	V_Object	inputObject = NULL;	
	Bool		isGood = kFALSE;

	Nat4		counter = 0;
	vpl_Status	result = kNOERROR;		
	Int1	*primName = "or";

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArityMin(environment,primName, primInArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArityMin(environment,primName, primOutArity, 0 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArityMax(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

	for(counter = 0;counter<primInArity;counter++){
		result = VPLPrimCheckInputObjectType( kBoolean,counter, primName, primitive, environment );
		if( result != kNOERROR ) return result;
	}

#endif

	inputObject = VPLPrimGetInputObject(0,primitive,environment);
	isGood = ((V_Boolean) inputObject)->value;

	for(counter = 1;counter<primInArity;counter++){
		inputObject = VPLPrimGetInputObject(counter,primitive,environment);
		isGood = isGood || ((V_Integer) inputObject)->value;
	}
	

	result = VPLPrimSetOutputObjectBoolOrFail( environment, trigger, primInArity, primOutArity, primitive, isGood );
	return kNOERROR;
}

Int4 VPLP_xor( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_xor( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	Bool 		leftValue = 0;
	Bool 		rightValue = 0;
	V_Object	left = NULL;	
	V_Object	right = NULL;	
	Bool		isGood = kFALSE;

	vpl_Status	result = kNOERROR;		
	Int1	*primName = "xor";

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 2 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArityMin(environment,primName, primOutArity, 0 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArityMax(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kBoolean,0, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kBoolean,1, primName, primitive, environment );
	if( result != kNOERROR ) return result;

#endif

	left = VPLPrimGetInputObject(0,primitive,environment);

	right = VPLPrimGetInputObject(1,primitive,environment);
	
	leftValue = ((V_Boolean) left)->value;
	rightValue = ((V_Boolean) right)->value;

	isGood = ( (leftValue || rightValue)  && !(leftValue && rightValue) );

	result = VPLPrimSetOutputObjectBoolOrFail( environment, trigger, primInArity, primOutArity, primitive, isGood );
	return kNOERROR;
}

Int4 VPLP_gt( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_gt( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	V_Object	inputObject = NULL;

	Real10		leftResult = 0.0;
	Real10		rightResult = 0.0;
	Bool		isTrue = kFALSE;

	Nat4		counter = 0;
	Int1		*primName = "gt";
	Int4		result = kNOERROR;

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 2 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArityMax(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

	for(counter = 0;counter<primInArity;counter++){
		result = VPLPrimCheckInputObjectTypes( counter,primName, primitive, environment, 2, kInteger, kReal );
		if( result != kNOERROR ) return result;
	}

#endif

	inputObject = VPLPrimGetInputObject(0,primitive,environment);
	if(inputObject->type == kInteger) leftResult = ((V_Integer) inputObject)->value;
	else leftResult = ((V_Real) inputObject)->value;
	
	inputObject = VPLPrimGetInputObject(1,primitive,environment);
	if(inputObject->type == kInteger) rightResult = ((V_Integer) inputObject)->value;
	else rightResult = ((V_Real) inputObject)->value;
	
	if(leftResult > rightResult) isTrue = kTRUE;

	result = VPLPrimSetOutputObjectBoolOrFail( environment, trigger, primInArity, primOutArity, primitive, isTrue );
	return result;
}

Int4 VPLP_gte( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_gte( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	V_Object	inputObject = NULL;

	Real10		leftResult = 0.0;
	Real10		rightResult = 0.0;
	Bool		isTrue = kFALSE;

	Nat4		counter = 0;
	Int1		*primName = "gte";
	Int4		result = kNOERROR;

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 2 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArityMax(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

	for(counter = 0;counter<primInArity;counter++){
		result = VPLPrimCheckInputObjectTypes( counter,primName, primitive, environment, 2, kInteger, kReal );
		if( result != kNOERROR ) return result;
	}

#endif

	inputObject = VPLPrimGetInputObject(0,primitive,environment);
	if(inputObject->type == kInteger) leftResult = ((V_Integer) inputObject)->value;
	else leftResult = ((V_Real) inputObject)->value;
	
	inputObject = VPLPrimGetInputObject(1,primitive,environment);
	if(inputObject->type == kInteger) rightResult = ((V_Integer) inputObject)->value;
	else rightResult = ((V_Real) inputObject)->value;
	
	if(leftResult >= rightResult) isTrue = kTRUE;

	result = VPLPrimSetOutputObjectBoolOrFail( environment, trigger, primInArity, primOutArity, primitive, isTrue );
	return result;
}

Int4 VPLP_lt( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_lt( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	V_Object	inputObject = NULL;

	Real10		leftResult = 0.0;
	Real10		rightResult = 0.0;
	Bool		isTrue = kFALSE;

	Nat4		counter = 0;
	Int1		*primName = "lt";
	Int4		result = kNOERROR;

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 2 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArityMax(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

	for(counter = 0;counter<primInArity;counter++){
		result = VPLPrimCheckInputObjectTypes( counter,primName, primitive, environment, 2, kInteger, kReal );
		if( result != kNOERROR ) return result;
	}

#endif

	inputObject = VPLPrimGetInputObject(0,primitive,environment);
	if(inputObject->type == kInteger) leftResult = ((V_Integer) inputObject)->value;
	else leftResult = ((V_Real) inputObject)->value;
	
	inputObject = VPLPrimGetInputObject(1,primitive,environment);
	if(inputObject->type == kInteger) rightResult = ((V_Integer) inputObject)->value;
	else rightResult = ((V_Real) inputObject)->value;
	
	if(leftResult < rightResult) isTrue = kTRUE;

	result = VPLPrimSetOutputObjectBoolOrFail( environment, trigger, primInArity, primOutArity, primitive, isTrue );
	return result;
}

Int4 VPLP_lte( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_lte( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	V_Object	inputObject = NULL;

	Real10		leftResult = 0.0;
	Real10		rightResult = 0.0;
	Bool		isTrue = kFALSE;

	Nat4		counter = 0;
	Int1		*primName = "lte";
	Int4		result = kNOERROR;

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 2 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArityMax(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

	for(counter = 0;counter<primInArity;counter++){
		result = VPLPrimCheckInputObjectTypes( counter,primName, primitive, environment, 2, kInteger, kReal );
		if( result != kNOERROR ) return result;
	}

#endif

	inputObject = VPLPrimGetInputObject(0,primitive,environment);
	if(inputObject->type == kInteger) leftResult = ((V_Integer) inputObject)->value;
	else leftResult = ((V_Real) inputObject)->value;
	
	inputObject = VPLPrimGetInputObject(1,primitive,environment);
	if(inputObject->type == kInteger) rightResult = ((V_Integer) inputObject)->value;
	else rightResult = ((V_Real) inputObject)->value;
	
	if(leftResult <= rightResult) isTrue = kTRUE;

	result = VPLPrimSetOutputObjectBoolOrFail( environment, trigger, primInArity, primOutArity, primitive, isTrue );
	return result;
}

Nat4	loadConstants_VPX_PrimitivesLogical(V_Environment environment,char *bundleID);
Nat4	loadConstants_VPX_PrimitivesLogical(V_Environment environment,char *bundleID)
{
#pragma unused(environment)
#pragma unused(bundleID)
        
        return kNOERROR;

}

Nat4	loadStructures_VPX_PrimitivesLogical(V_Environment environment,char *bundleID);
Nat4	loadStructures_VPX_PrimitivesLogical(V_Environment environment,char *bundleID)
{
#pragma unused(environment)
#pragma unused(bundleID)
        
        return kNOERROR;

}

Nat4	loadProcedures_VPX_PrimitivesLogical(V_Environment environment,char *bundleID);
Nat4	loadProcedures_VPX_PrimitivesLogical(V_Environment environment,char *bundleID)
{
#pragma unused(environment)
#pragma unused(bundleID)
        
        return kNOERROR;

}

Int4 VPLP__3C_( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP__3C_( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive ){
	return VPLP_lt(environment,trigger,primInArity,primOutArity,primitive);
}

Int4 VPLP__3C3D_( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP__3C3D_( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive ){
	return VPLP_lte(environment,trigger,primInArity,primOutArity,primitive);
}

Int4 VPLP__3E_( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP__3E_( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive ){
	return VPLP_gt(environment,trigger,primInArity,primOutArity,primitive);
}

Int4 VPLP__3E3D_( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP__3E3D_( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive ){
	return VPLP_gte(environment,trigger,primInArity,primOutArity,primitive);
}

Int4 VPLP__213D_( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP__213D_( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive ){
	return VPLP__7E3D_(environment,trigger,primInArity,primOutArity,primitive);
}

Int4 VPLP__E289A0_( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP__E289A0_( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive ){
	return VPLP__7E3D_(environment,trigger,primInArity,primOutArity,primitive);
}

Nat4	loadPrimitives_VPX_PrimitivesLogical(V_Environment environment,char *bundleID);
Nat4	loadPrimitives_VPX_PrimitivesLogical(V_Environment environment,char *bundleID)
{
        V_ExtPrimitive	result = NULL;
        V_Dictionary	dictionary = environment->externalPrimitivesTable;
        
        if((result = extPrimitive_new(bundleID,kNextCaseOnFailure,"=",dictionary,2,0,VPLP__3D_)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kNextCaseOnFailure,"!=",dictionary,2,0,VPLP__213D_)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kNextCaseOnFailure,"~=",dictionary,2,0,VPLP__7E3D_)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kNextCaseOnFailure,"\xE2\x89\xA0",dictionary,2,0,VPLP__7E3D_)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kNextCaseOnFailure,"gt",dictionary,2,0,VPLP_gt)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kNextCaseOnFailure,"gte",dictionary,2,0,VPLP_gte)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kNextCaseOnFailure,"lt",dictionary,2,0,VPLP_lt)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kNextCaseOnFailure,"lte",dictionary,2,0,VPLP_lte)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kNextCaseOnFailure,">",dictionary,2,0,VPLP_gt)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kNextCaseOnFailure,">=",dictionary,2,0,VPLP_gte)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kNextCaseOnFailure,"<",dictionary,2,0,VPLP_lt)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kNextCaseOnFailure,"<=",dictionary,2,0,VPLP_lte)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kNextCaseOnFailure,"and",dictionary,2,0,VPLP_and)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"choose",dictionary,3,1,VPLP_choose)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kNextCaseOnFailure,"equals",dictionary,2,0,VPLP_equals)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"not",dictionary,1,1,VPLP_not)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kNextCaseOnFailure,"or",dictionary,2,0,VPLP_or)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kNextCaseOnFailure,"xor",dictionary,2,0,VPLP_xor)) == NULL) return kERROR;

        return kNOERROR;

}

Nat4	load_VPX_PrimitivesLogical(V_Environment environment,char *bundleID);
Nat4	load_VPX_PrimitivesLogical(V_Environment environment,char *bundleID)
{
		Nat4	result = 0;
		
		result = loadConstants_VPX_PrimitivesLogical(environment,bundleID);
		result = loadStructures_VPX_PrimitivesLogical(environment,bundleID);
		result = loadProcedures_VPX_PrimitivesLogical(environment,bundleID);
		result = loadPrimitives_VPX_PrimitivesLogical(environment,bundleID);
		
		return result;
}

