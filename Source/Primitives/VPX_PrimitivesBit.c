/*
	
	VPX_PrimitivesBit.c
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
#endif	

Int4 VPLP_bit_2D_and( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_bit_2D_and( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	vpl_Status		result = kNOERROR;
	V_Object		inputObject = NULL;

	Int4 andValue = 0;
	V_Integer	outputInt = 0;	

	Nat4		counter = 0;
	Int1	*primName = "bit-and";

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArityMin(environment,primName, primInArity, 2 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

	for(counter = 0;counter<primInArity;counter++){
		result = VPLPrimCheckInputObjectType( kInteger,counter, primName, primitive, environment );
		if( result != kNOERROR ) return result;
	}

#endif

	inputObject = VPLPrimGetInputObject(0,primitive,environment);
	andValue = ((V_Integer) inputObject)->value;

	for(counter = 1;counter<primInArity;counter++){
		inputObject = VPLPrimGetInputObject(counter,primitive,environment);
		andValue = andValue & ((V_Integer) inputObject)->value;
	}
	
	outputInt = int_to_integer(andValue,environment);
	VPLPrimSetOutputObject(environment,primInArity,0,primitive,(V_Object) outputInt);

	*trigger = kSuccess;	
	return kNOERROR;
}

Int4 VPLP_bit_2D_or( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_bit_2D_or( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	vpl_Status		result = kNOERROR;
	V_Object		inputObject = NULL;

	Int4 orValue = 0;
	V_Integer	outputInt = 0;	

	Nat4		counter = 0;
	Int1	*primName = "bit-or";

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArityMin(environment,primName, primInArity, 2 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

	for(counter = 0;counter<primInArity;counter++){
		result = VPLPrimCheckInputObjectType( kInteger,counter, primName, primitive, environment );
		if( result != kNOERROR ) return result;
	}

#endif

	inputObject = VPLPrimGetInputObject(0,primitive,environment);
	orValue = ((V_Integer) inputObject)->value;

	for(counter = 1;counter<primInArity;counter++){
		inputObject = VPLPrimGetInputObject(counter,primitive,environment);
		orValue = orValue | ((V_Integer) inputObject)->value;
	}
	
	outputInt = int_to_integer(orValue,environment);
	VPLPrimSetOutputObject(environment,primInArity,0,primitive,(V_Object) outputInt);

	*trigger = kSuccess;	
	return kNOERROR;
}

Int4 VPLP_bit_2D_not( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_bit_2D_not( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	vpl_Status		result = kNOERROR;

	Int4 leftValue = 0;
	Int4 notValue = 0;
	V_Object	left = NULL;	
	V_Integer	outputInt = 0;	

	Int1	*primName = "bit-not";

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,0, primName, primitive, environment );
	if( result != kNOERROR ) return result;

#endif

	left = VPLPrimGetInputObject(0,primitive,environment);

	leftValue = ((V_Integer) left)->value;
	notValue = ~leftValue;

	outputInt = int_to_integer(notValue,environment);
	VPLPrimSetOutputObject(environment,primInArity,0,primitive,(V_Object) outputInt);

	*trigger = kSuccess;	
	return kNOERROR;
}

Int4 VPLP_bit_2D_shift_2D_l( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_bit_2D_shift_2D_l( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	Int4 value = 0;
	Int4 rightvalue = 0;
	V_Object	left = NULL;	
	V_Object	right = NULL;	
	V_Integer	outputInt = 0;	

	vpl_Status		result = kNOERROR;
	Int1	*primName = "bit-shift-l";

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 2 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,0, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,1, primName, primitive, environment );
	if( result != kNOERROR ) return result;

#endif

	left = VPLPrimGetInputObject(0,primitive,environment);

	right = VPLPrimGetInputObject(1,primitive,environment);

	value = ((V_Integer) left)->value;
	rightvalue = ((V_Integer) right)->value;
	
	outputInt = int_to_integer(value << rightvalue,environment);
	VPLPrimSetOutputObject(environment,primInArity,0,primitive,(V_Object) outputInt);

	*trigger = kSuccess;	
	return kNOERROR;
}

Int4 VPLP_bit_2D_shift_2D_r( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_bit_2D_shift_2D_r( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	Int4 value = 0;
	Int4 rightvalue = 0;
	V_Object	left = NULL;	
	V_Object	right = NULL;	
	V_Integer	outputInt = 0;	

	vpl_Status		result = kNOERROR;
	Int1	*primName = "bit-shift-r";

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 2 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,0, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,1, primName, primitive, environment );
	if( result != kNOERROR ) return result;

#endif

	left = VPLPrimGetInputObject(0,primitive,environment);

	right = VPLPrimGetInputObject(1,primitive,environment);

	value = ((V_Integer) left)->value;
	rightvalue = ((V_Integer) right)->value;
	
	outputInt = int_to_integer(value >> rightvalue,environment);
	VPLPrimSetOutputObject(environment,primInArity,0,primitive,(V_Object) outputInt);

	*trigger = kSuccess;	
	return kNOERROR;
}

Int4 VPLP_bit_2D_xor( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_bit_2D_xor( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	Int4 leftValue = 0;
	Int4 rightValue = 0;
	V_Object	left = NULL;	
	V_Object	right = NULL;	
	V_Integer	outputInt = 0;	

	vpl_Status		result = kNOERROR;
	Int1	*primName = "bit-xor";

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 2 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,0, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,1, primName, primitive, environment );
	if( result != kNOERROR ) return result;

#endif

	left = VPLPrimGetInputObject(0,primitive,environment);

	right = VPLPrimGetInputObject(1,primitive,environment);
	
	leftValue = ((V_Integer) left)->value;
	rightValue = ((V_Integer) right)->value;

	outputInt = int_to_integer(leftValue ^ rightValue,environment);
	VPLPrimSetOutputObject(environment,primInArity,0,primitive,(V_Object) outputInt);

	*trigger = kSuccess;	
	return kNOERROR;
}

Int4 VPLP_test_2D_all_3F_( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_test_2D_all_3F_( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	Int4 leftValue = 0;
	Int4 rightValue = 0;
	V_Object	left = NULL;	
	V_Object	right = NULL;	
	Bool		isGood = kFALSE;

	vpl_Status		result = kNOERROR;
	Int1	*primName = "test-all?";

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 2 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArityMin(environment,primName, primOutArity, 0 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArityMax(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,0, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,1, primName, primitive, environment );
	if( result != kNOERROR ) return result;

#endif

	left = VPLPrimGetInputObject(0,primitive,environment);

	right = VPLPrimGetInputObject(1,primitive,environment);
	
	leftValue = ((V_Integer) left)->value;
	rightValue = ((V_Integer) right)->value;

	if(leftValue == rightValue) isGood = kTRUE;
	else isGood = kFALSE;

	result = VPLPrimSetOutputObjectBoolOrFail( environment, trigger, primInArity, primOutArity, primitive, isGood );

	return kNOERROR;
}

Int4 VPLP_test_2D_bit_3F_( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_test_2D_bit_3F_( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	Int4 leftValue = 0;
	Int4 rightValue = 0;
	V_Object	left = NULL;	
	V_Object	right = NULL;	
	Bool		isGood = kFALSE;

	vpl_Status		result = kNOERROR;
	Int1	*primName = "test-bit?";

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 2 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArityMin(environment,primName, primOutArity, 0 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArityMax(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,0, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,1, primName, primitive, environment );
	if( result != kNOERROR ) return result;

#endif

	left = VPLPrimGetInputObject(0,primitive,environment);

	right = VPLPrimGetInputObject(1,primitive,environment);
	
	leftValue = ((V_Integer) left)->value;
	rightValue = ((V_Integer) right)->value;
//	rightValue = 1 << ( rightValue - 1 ); ### Bug Fix: 2008_05_28 -- Right most bit position is 0, not 1.
	rightValue = 1 << ( rightValue );

	if(leftValue & rightValue) isGood = kTRUE;
	else isGood = kFALSE;

	result = VPLPrimSetOutputObjectBoolOrFail( environment, trigger, primInArity, primOutArity, primitive, isGood );

	return kNOERROR;
}

Int4 VPLP_test_2D_one_3F_( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_test_2D_one_3F_( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	Int4 leftValue = 0;
	Int4 rightValue = 0;
	V_Object	left = NULL;	
	V_Object	right = NULL;	
	Bool		isGood = kFALSE;

	vpl_Status		result = kNOERROR;
	Int1	*primName = "test-one?";

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 2 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArityMin(environment,primName, primOutArity, 0 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArityMax(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,0, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,1, primName, primitive, environment );
	if( result != kNOERROR ) return result;

#endif

	left = VPLPrimGetInputObject(0,primitive,environment);

	right = VPLPrimGetInputObject(1,primitive,environment);
	
	leftValue = ((V_Integer) left)->value;
	rightValue = ((V_Integer) right)->value;

	if(leftValue & rightValue) isGood = kTRUE;
	else isGood = kFALSE;

	result = VPLPrimSetOutputObjectBoolOrFail( environment, trigger, primInArity, primOutArity, primitive, isGood );

	return kNOERROR;
}

Nat4	loadConstants_VPX_PrimitivesBit(V_Environment environment,char *bundleID);
Nat4	loadConstants_VPX_PrimitivesBit(V_Environment environment,char *bundleID)
{
#pragma unused(environment)
#pragma unused(bundleID)

        return kNOERROR;

}

Nat4	loadStructures_VPX_PrimitivesBit(V_Environment environment,char *bundleID);
Nat4	loadStructures_VPX_PrimitivesBit(V_Environment environment,char *bundleID)
{
#pragma unused(environment)
#pragma unused(bundleID)

        return kNOERROR;

}

Nat4	loadProcedures_VPX_PrimitivesBit(V_Environment environment,char *bundleID);
Nat4	loadProcedures_VPX_PrimitivesBit(V_Environment environment,char *bundleID)
{
#pragma unused(environment)
#pragma unused(bundleID)

        return kNOERROR;

}

Nat4	loadPrimitives_VPX_PrimitivesBit(V_Environment environment,char *bundleID);
Nat4	loadPrimitives_VPX_PrimitivesBit(V_Environment environment,char *bundleID)
{
        V_ExtPrimitive	result = NULL;
        V_Dictionary	dictionary = environment->externalPrimitivesTable;
        
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"bit-and",dictionary,2,1,VPLP_bit_2D_and)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"bit-or",dictionary,2,1,VPLP_bit_2D_or)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"bit-not",dictionary,1,1,VPLP_bit_2D_not)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"bit-shift-l",dictionary,2,1,VPLP_bit_2D_shift_2D_l)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"bit-shift-r",dictionary,2,1,VPLP_bit_2D_shift_2D_r)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"bit-xor",dictionary,2,1,VPLP_bit_2D_xor)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kNextCaseOnFailure,"test-all?",dictionary,2,0,VPLP_test_2D_all_3F_)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kNextCaseOnFailure,"test-bit?",dictionary,2,0,VPLP_test_2D_bit_3F_)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kNextCaseOnFailure,"test-one?",dictionary,2,0,VPLP_test_2D_one_3F_)) == NULL) return kERROR;

        return kNOERROR;

}

Nat4	load_VPX_PrimitivesBit(V_Environment environment,char *bundleID);
Nat4	load_VPX_PrimitivesBit(V_Environment environment,char *bundleID)
{
		Nat4	result = 0;
		
		result = loadConstants_VPX_PrimitivesBit(environment,bundleID);
		result = loadStructures_VPX_PrimitivesBit(environment,bundleID);
		result = loadProcedures_VPX_PrimitivesBit(environment,bundleID);
		result = loadPrimitives_VPX_PrimitivesBit(environment,bundleID);
		
		return result;
}



