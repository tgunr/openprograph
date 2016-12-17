/*
	
	VPL_Primitives.c
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


Int4 VPLP_itimes( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_itimes( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	V_Object		outputObject = NULL;
	V_Object		inputObject = NULL;

	Int4			integerResult = 1;
	
	Nat4		counter = 0;
	Int1		*primName = "itimes";
	Int4		result = kNOERROR;

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

	for(counter = 0;counter<primInArity;counter++){
		inputObject = VPLPrimGetInputObject(counter,primitive,environment);
		integerResult *= ((V_Integer) inputObject)->value;
	}
	
	outputObject = (V_Object) int_to_integer(integerResult,environment);
	VPLPrimSetOutputObject(environment,primInArity,0,primitive,(V_Object) outputObject);

	*trigger = kSuccess;	
	return kNOERROR;
}

Int4 VPLP_iplus( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_iplus( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	V_Object		outputObject = NULL;
	V_Object		inputObject = NULL;

	Int4			integerResult = 0;
	
	Nat4		counter = 0;
	Int1		*primName = "iplus";
	Int4		result = kNOERROR;

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

	for(counter = 0;counter<primInArity;counter++){
		inputObject = VPLPrimGetInputObject(counter,primitive,environment);
		integerResult += ((V_Integer) inputObject)->value;
	}
	
	outputObject = (V_Object) int_to_integer(integerResult,environment);
	VPLPrimSetOutputObject(environment,primInArity,0,primitive,(V_Object) outputObject);

	*trigger = kSuccess;	
	return kNOERROR;
}

Int4 VPLP_iminus( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_iminus( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	Int4 value = 0;
	V_Object	left = NULL;	
	V_Object	right = NULL;	

	V_Integer	outputInt = 0;	
	Nat4		counter = 0;	
	Int1		*primName = "iminus";
	Int4		result = kNOERROR;

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArityMin(environment,primName, primInArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputArityMax(environment,primName, primInArity, 2 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

	for(counter = 0;counter<primInArity;counter++){
		result = VPLPrimCheckInputObjectType( kInteger,counter, primName, primitive, environment );
		if( result != kNOERROR ) return result;
	}

#endif

	left = VPLPrimGetInputObject(0,primitive,environment);
	value = ((V_Integer) left)->value;

	if(primInArity == 2) {
		right = VPLPrimGetInputObject(1,primitive,environment);
		value = value - ((V_Integer) right)->value;
	} else value = 0 - value;

	
	outputInt = int_to_integer(value,environment);
	VPLPrimSetOutputObject(environment,primInArity,0,primitive,(V_Object) outputInt);

	*trigger = kSuccess;	
	return kNOERROR;
}

Int4 VPLP_idiv( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_idiv( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	V_Object		outputObject = NULL;

	Int4 value = 0;
	Int4 rightvalue = 0;
	V_Object	left = NULL;	
	V_Object	right = NULL;	

	V_Integer	outputInt = 0;	
	Nat4		counter = 0;	
	Int1		*primName = "idiv";
	Int4		result = kNOERROR;

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArityMin(environment,primName, primInArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputArityMax(environment,primName, primInArity, 2 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArityMin(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArityMax(environment,primName, primOutArity, 2 );
	if( result != kNOERROR ) return result;

	for(counter = 0;counter<primInArity;counter++){
		result = VPLPrimCheckInputObjectType( kInteger,counter, primName, primitive, environment );
		if( result != kNOERROR ) return result;
	}

#endif

	left = VPLPrimGetInputObject(0,primitive,environment);
	value = ((V_Integer) left)->value;

	if(primInArity == 2) {
		right = VPLPrimGetInputObject(1,primitive,environment);
		rightvalue = ((V_Integer) right)->value;
	} else {
		rightvalue = value;
		value = 1;
	}
	
	outputInt = int_to_integer(value/rightvalue,environment);
	VPLPrimSetOutputObject(environment,primInArity,0,primitive,(V_Object) outputInt);

	if(primOutArity == 2) {
		outputObject = (V_Object) int_to_integer(value%rightvalue,environment);
		VPLPrimSetOutputObject(environment,primInArity,1,primitive,(V_Object) outputObject);
	}

	*trigger = kSuccess;	
	return kNOERROR;
}

Int4 VPLP__2B_1( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP__2B_1( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	V_Object		outputObject = NULL;
	V_Object		inputObject = NULL;

	Real10			realResult = 0.0;
	Int4			integerResult = 0;
	
	enum dataType	finalResultType = kInteger;

	Nat4		counter = 0;
	Int1		*primName = "plus-one";
	Int4		result = kNOERROR;

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectTypes( 0 ,primName, primitive, environment, 2, kInteger, kReal );
	if( result != kNOERROR ) return result;

#endif

	inputObject = VPLPrimGetInputObject(counter,primitive,environment);
	if(inputObject->type == kInteger) {
		integerResult = ((V_Integer) inputObject)->value + 1;
	} else {
		realResult += ((V_Real) inputObject)->value + 1.0;
		finalResultType = kReal;
	}
	
	if(finalResultType == kInteger) outputObject = (V_Object) int_to_integer(integerResult,environment);
	else outputObject = (V_Object) float_to_real(realResult,environment);
	VPLPrimSetOutputObject(environment,primInArity,0,primitive,(V_Object) outputObject);

	*trigger = kSuccess;	
	return kNOERROR;
}

Int4 VPLP_minus_2D_one( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_minus_2D_one( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	V_Object		outputObject = NULL;
	V_Object		inputObject = NULL;

	Real10			realResult = 0.0;
	Int4			integerResult = 0;
	
	enum dataType	finalResultType = kInteger;

	Nat4		counter = 0;
	Int1		*primName = "minus-one";
	Int4		result = kNOERROR;

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectTypes( 0 ,primName, primitive, environment, 2, kInteger, kReal );
	if( result != kNOERROR ) return result;

#endif

	inputObject = VPLPrimGetInputObject(counter,primitive,environment);
	if(inputObject->type == kInteger) {
		integerResult = ((V_Integer) inputObject)->value - 1;
	} else {
		realResult += ((V_Real) inputObject)->value - 1.0;
		finalResultType = kReal;
	}
	
	if(finalResultType == kInteger) outputObject = (V_Object) int_to_integer(integerResult,environment);
	else outputObject = (V_Object) float_to_real(realResult,environment);
	VPLPrimSetOutputObject(environment,primInArity,0,primitive,(V_Object) outputObject);

	*trigger = kSuccess;	
	return kNOERROR;
}

Int4 VPLP_times( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_times( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	V_Object		outputObject = NULL;
	V_Object		inputObject = NULL;

	Real10			realResult = 1.0;
	Int4			integerResult = 1;
	
	enum dataType	finalResultType = kInteger;

	Nat4		counter = 0;
	Int1		*primName = "times";
	Int4		result = kNOERROR;

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArityMin(environment,primName, primInArity, 2 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

	for(counter = 0;counter<primInArity;counter++){
		result = VPLPrimCheckInputObjectTypes( counter,primName, primitive, environment, 2, kInteger, kReal );
		if( result != kNOERROR ) return result;
	}

#endif

	for(counter = 0;counter<primInArity;counter++){
		inputObject = VPLPrimGetInputObject(counter,primitive,environment);
		if(inputObject->type == kInteger) {
			integerResult *= ((V_Integer) inputObject)->value;
			realResult *= ((V_Integer) inputObject)->value;
		} else {
			realResult *= ((V_Real) inputObject)->value;
			finalResultType = kReal;
		}
	}
	
	if(finalResultType == kInteger) outputObject = (V_Object) int_to_integer(integerResult,environment);
	else outputObject = (V_Object) float_to_real(realResult,environment);
	VPLPrimSetOutputObject(environment,primInArity,0,primitive,(V_Object) outputObject);

	*trigger = kSuccess;	
	return kNOERROR;
}

Int4 VPLP_plus( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_plus( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	V_Object		outputObject = NULL;
	V_Object		inputObject = NULL;

	Real10			realResult = 0.0;
	Int4			integerResult = 0;
	
	enum dataType	finalResultType = kInteger;

	Nat4		counter = 0;
	Int1		*primName = "plus";
	Int4		result = kNOERROR;

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArityMin(environment,primName, primInArity, 2 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

	for(counter = 0;counter<primInArity;counter++){
		result = VPLPrimCheckInputObjectTypes( counter,primName, primitive, environment, 2, kInteger, kReal );
		if( result != kNOERROR ) return result;
	}

#endif

	for(counter = 0;counter<primInArity;counter++){
		inputObject = VPLPrimGetInputObject(counter,primitive,environment);
		if(inputObject->type == kInteger) {
			integerResult += ((V_Integer) inputObject)->value;
			realResult += ((V_Integer) inputObject)->value;
		} else {
			realResult += ((V_Real) inputObject)->value;
			finalResultType = kReal;
		}
	}
	
	if(finalResultType == kInteger) outputObject = (V_Object) int_to_integer(integerResult,environment);
	else outputObject = (V_Object) float_to_real(realResult,environment);
	VPLPrimSetOutputObject(environment,primInArity,0,primitive,(V_Object) outputObject);

	*trigger = kSuccess;	
	return kNOERROR;
}

Int4 VPLP_minus( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_minus( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	V_Object		outputObject = NULL;
	V_Object		inputObject = NULL;

	Real10			realResult = 0.0;
	Int4			integerResult = 0;
	
	enum dataType	finalResultType = kInteger;

	Nat4		counter = 0;
	Int1		*primName = "minus";
	Int4		result = kNOERROR;

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArityMin(environment,primName, primInArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputArityMax(environment,primName, primInArity, 2 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

	for(counter = 0;counter<primInArity;counter++){
		result = VPLPrimCheckInputObjectTypes( counter,primName, primitive, environment, 2, kInteger, kReal );
		if( result != kNOERROR ) return result;
	}

#endif

	if(primInArity == 2){
		inputObject = VPLPrimGetInputObject(0,primitive,environment);
		if(inputObject->type == kInteger) {
			integerResult = ((V_Integer) inputObject)->value;
			realResult = ((V_Integer) inputObject)->value;
		} else {
			realResult = ((V_Real) inputObject)->value;
			finalResultType = kReal;
		}
	} else {
		integerResult = 0;
		realResult = 0.0;
	}
	
	if(primInArity == 2) counter = 1;
	else counter = 0;
	inputObject = VPLPrimGetInputObject(counter,primitive,environment);
	if(inputObject->type == kInteger) {
		integerResult -= ((V_Integer) inputObject)->value;
		realResult -= ((V_Integer) inputObject)->value;
	} else {
		realResult -= ((V_Real) inputObject)->value;
		finalResultType = kReal;
	}
	
	if(finalResultType == kInteger) outputObject = (V_Object) int_to_integer(integerResult,environment);
	else outputObject = (V_Object) float_to_real(realResult,environment);
	VPLPrimSetOutputObject(environment,primInArity,0,primitive,(V_Object) outputObject);

	*trigger = kSuccess;	
	return kNOERROR;
}

Int4 VPLP_div( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_div( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	V_Object		outputObject = NULL;
	V_Object		inputObject = NULL;

	Real10			realResult = 0.0;
	Int4			integerResult = 0;
	Real10			rightRealResult = 0.0;
	Int4			rightIntegerResult = 0;
	
	enum dataType	finalResultType = kInteger;

	Nat4		counter = 0;
	Int1		*primName = "div";
	Int4		result = kNOERROR;

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArityMin(environment,primName, primInArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputArityMax(environment,primName, primInArity, 2 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

	for(counter = 0;counter<primInArity;counter++){
		result = VPLPrimCheckInputObjectTypes( counter,primName, primitive, environment, 2, kInteger, kReal );
		if( result != kNOERROR ) return result;
	}

#endif

	inputObject = VPLPrimGetInputObject(0,primitive,environment);
	if(inputObject->type == kInteger) {
			integerResult = ((V_Integer) inputObject)->value;
			realResult = ((V_Integer) inputObject)->value;
	} else {
			realResult = ((V_Real) inputObject)->value;
			finalResultType = kReal;
	}
	
	if(primInArity == 2) {
		inputObject = VPLPrimGetInputObject(1,primitive,environment);
		if(inputObject->type == kInteger) {
			rightIntegerResult = ((V_Integer) inputObject)->value;
			rightRealResult = ((V_Integer) inputObject)->value;
		} else {
			rightRealResult = ((V_Real) inputObject)->value;
			finalResultType = kReal;
		}
	} else {
		rightIntegerResult = integerResult;
		rightRealResult = realResult;
		integerResult = 1;
		realResult = 1.0;
	}
	
	if(finalResultType == kInteger && integerResult%rightIntegerResult == 0)
		outputObject = (V_Object) int_to_integer(integerResult/rightIntegerResult,environment);
	else outputObject = (V_Object) float_to_real(realResult/rightRealResult,environment);
	VPLPrimSetOutputObject(environment,primInArity,0,primitive,(V_Object) outputObject);

	*trigger = kSuccess;	
	return kNOERROR;
}

Int4 VPLP_round_2D_down( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_round_2D_down( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	V_Object		outputObject = NULL;

	Real10 value = 0;
	Real10 integer_part = 0;
	vpl_Integer	precision = 0;
	Real10 factor = 0.0;
	V_Object	inputObject = NULL;	

	Int1		*primName = "round-down";
	Int4		result = kNOERROR;

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArityMin(environment,primName, primInArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputArityMax(environment,primName, primInArity, 2 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectTypes( 0 ,primName, primitive, environment, 2, kInteger, kReal );
	if( result != kNOERROR ) return result;

	if(primInArity == 2){
		result = VPLPrimCheckInputObjectType( kInteger,1,primName, primitive, environment );
		if( result != kNOERROR ) return result;
	}

#endif

	inputObject = VPLPrimGetInputObject(0,primitive,environment);
	if(inputObject->type == kInteger) {
		value = ((V_Integer) inputObject)->value;
	} else {
		value = ((V_Real) inputObject)->value;
	}
	
	if(primInArity == 2){
		result = VPLPrimGetInputObjectInteger( &precision, 1, primName, primitive, environment );
		if( result != kNOERROR ) return result;
	}
	
	factor = pow(10.0,precision);
	
	value *= factor;
	value = floor(value);
	value = value/factor;
	
	if(modf(value,&integer_part) == 0) {
		outputObject = (V_Object) int_to_integer((Int4) value,environment);
	} else {
		outputObject = (V_Object) float_to_real(value,environment);
	}
	VPLPrimSetOutputObject(environment,primInArity,0,primitive,(V_Object) outputObject);

	*trigger = kSuccess;	
	return kNOERROR;
}

Int4 VPLP_round_2D_up( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_round_2D_up( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	V_Object		outputObject = NULL;

	Real10 value = 0;
	Real10 integer_part = 0;
	vpl_Integer	precision = 0;
	Real10 factor = 0.0;
	V_Object	inputObject = NULL;	

	Int1		*primName = "round-up";
	Int4		result = kNOERROR;

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArityMin(environment,primName, primInArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputArityMax(environment,primName, primInArity, 2 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectTypes( 0 ,primName, primitive, environment, 2, kInteger, kReal );
	if( result != kNOERROR ) return result;

	if(primInArity == 2){
		result = VPLPrimCheckInputObjectType( kInteger,1,primName, primitive, environment );
		if( result != kNOERROR ) return result;
	}

#endif

	inputObject = VPLPrimGetInputObject(0,primitive,environment);
	if(inputObject->type == kInteger) {
		value = ((V_Integer) inputObject)->value;
	} else {
		value = ((V_Real) inputObject)->value;
	}
	
	if(primInArity == 2){
		result = VPLPrimGetInputObjectInteger( &precision, 1, primName, primitive, environment );
		if( result != kNOERROR ) return result;
	}
	
	factor = pow(10.0,precision);
	
	value *= factor;
	value = ceil(value);
	value = value/factor;
	
	if(modf(value,&integer_part) == 0) {
		outputObject = (V_Object) int_to_integer((Int4) value,environment);
	} else {
		outputObject = (V_Object) float_to_real(value,environment);
	}
	VPLPrimSetOutputObject(environment,primInArity,0,primitive,(V_Object) outputObject);

	*trigger = kSuccess;	
	return kNOERROR;
}

Int4 VPLP_round( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_round( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	V_Object		outputObject = NULL;

	Real10 value = 0;
	Real10 upper = 0;
	Real10 lower = 0;
	Real10 integer_part = 0;
	vpl_Integer	precision = 0;
	Real10 factor = 0.0;
	V_Object	inputObject = NULL;	

	Int1		*primName = "round";
	Int4		result = kNOERROR;

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArityMin(environment,primName, primInArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputArityMax(environment,primName, primInArity, 2 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectTypes( 0 ,primName, primitive, environment, 2, kInteger, kReal );
	if( result != kNOERROR ) return result;

	if(primInArity == 2){
		result = VPLPrimCheckInputObjectType( kInteger,1,primName, primitive, environment );
		if( result != kNOERROR ) return result;
	}

#endif

	inputObject = VPLPrimGetInputObject(0,primitive,environment);
	if(inputObject->type == kInteger) {
		value = ((V_Integer) inputObject)->value;
	} else {
		value = ((V_Real) inputObject)->value;
	}
	
	if(primInArity == 2){
		result = VPLPrimGetInputObjectInteger( &precision, 1, primName, primitive, environment );
		if( result != kNOERROR ) return result;
	}
	
	factor = pow(10.0,precision);
	
	value *= factor;
	
	upper = ceil(value);
	lower = floor(value);

	if(upper - value > value - lower){
		value = lower;
	}else{
		value = upper;
	}
	
	value = value/factor;
	
	if(modf(value,&integer_part) == 0) {
		outputObject = (V_Object) int_to_integer((Int4) value,environment);
	} else {
		outputObject = (V_Object) float_to_real(value,environment);
	}
	VPLPrimSetOutputObject(environment,primInArity,0,primitive,(V_Object) outputObject);

	*trigger = kSuccess;	
	return kNOERROR;
}

Int4 VPLP_abs( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_abs( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	Int1		*primName = "abs";
	Int4		result = kNOERROR;

	V_Object		outputObject = NULL;

	Int4		value = 0;
	Real10		realValue = 0;
	V_Object	left = NULL;	
	V_Integer	outputInt = 0;	

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectTypes( 0 ,primName, primitive, environment, 2, kInteger, kReal );
	if( result != kNOERROR ) return result;

#endif

	left = VPLPrimGetInputObject(0,primitive,environment);

	if(left->type == kInteger){
		value = ((V_Integer) left)->value;
		outputInt = int_to_integer(abs(value),environment);
		VPLPrimSetOutputObject(environment,primInArity,0,primitive,(V_Object) outputInt);

	}else{
		realValue = ((V_Real) left)->value;
		outputObject = (V_Object) float_to_real(fabs(value),environment);
		VPLPrimSetOutputObject(environment,primInArity,0,primitive,(V_Object) outputObject);

	}

	*trigger = kSuccess;	
	return kNOERROR;
}

Int4 VPLP_sqrt( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_sqrt( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	Int1		*primName = "sqrt";
	Int4		result = kNOERROR;

	V_Object		outputObject = NULL;

	Real10		realValue = 0;
	V_Object	left = NULL;	

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectTypes( 0 ,primName, primitive, environment, 2, kInteger, kReal );
	if( result != kNOERROR ) return result;

#endif

	left = VPLPrimGetInputObject(0,primitive,environment);

	if(left->type == kInteger){
		realValue = ((V_Integer) left)->value;
	}else{
		realValue = ((V_Real) left)->value;
	}

	if(realValue >= 0){
		outputObject = (V_Object) float_to_real(sqrt(realValue),environment);
		VPLPrimSetOutputObject(environment,primInArity,0,primitive,(V_Object) outputObject);

		*trigger = kSuccess;
	}else{
		VPLPrimSetOutputObjectNULL(environment,primInArity,0,primitive);
		*trigger = kFailure;
	}
	
	return kNOERROR;
}

Int4 VPLP_max( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_max( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	Int1		*primName = "max";
	Int4		result = kNOERROR;

	V_Object		outputObject = NULL;

	Real10 		value = 0;
	Real10		rightvalue = 0;
	V_Object	left = NULL;	
	V_Object	right = NULL;	

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 2 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectTypes( 0 ,primName, primitive, environment, 2, kInteger, kReal );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectTypes( 1 ,primName, primitive, environment, 2, kInteger, kReal );
	if( result != kNOERROR ) return result;

#endif

	left = VPLPrimGetInputObject(0,primitive,environment);

	right = VPLPrimGetInputObject(1,primitive,environment);

	if(left->type == kInteger){
		value = ((V_Integer) left)->value;
	}else{
		value = ((V_Real) left)->value;
	}
	if(right->type == kInteger){
		rightvalue = ((V_Integer) right)->value;
	}else{
		rightvalue = ((V_Real) right)->value;
	}
	
	if(value > rightvalue){
		increment_count(left);
		outputObject = left;
		VPLPrimSetOutputObject(environment,primInArity,0,primitive,(V_Object) outputObject);

	}else{
		increment_count(right);
		outputObject = right;
		VPLPrimSetOutputObject(environment,primInArity,0,primitive,(V_Object) outputObject);

	}
		
	*trigger = kSuccess;	
	return kNOERROR;
}

Int4 VPLP_min( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_min( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	Int1		*primName = "min";
	Int4		result = kNOERROR;

	V_Object		outputObject = NULL;

	Real10 		value = 0;
	Real10		rightvalue = 0;
	V_Object	left = NULL;	
	V_Object	right = NULL;	

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 2 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectTypes( 0 ,primName, primitive, environment, 2, kInteger, kReal );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectTypes( 1 ,primName, primitive, environment, 2, kInteger, kReal );
	if( result != kNOERROR ) return result;

#endif

	left = VPLPrimGetInputObject(0,primitive,environment);

	right = VPLPrimGetInputObject(1,primitive,environment);

	if(left->type == kInteger){
		value = ((V_Integer) left)->value;
	}else{
		value = ((V_Real) left)->value;
	}
	if(right->type == kInteger){
		rightvalue = ((V_Integer) right)->value;
	}else{
		rightvalue = ((V_Real) right)->value;
	}
	
	if(value < rightvalue){
		increment_count(left);
		outputObject = left;
		VPLPrimSetOutputObject(environment,primInArity,0,primitive,(V_Object) outputObject);

	}else{
		increment_count(right);
		outputObject = right;
		VPLPrimSetOutputObject(environment,primInArity,0,primitive,(V_Object) outputObject);

	}
		
	*trigger = kSuccess;	
	return kNOERROR;
}

Int4 VPLP_pi( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive ); /* pi */
Int4 VPLP_pi( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	Int1		*primName = "pi";
	Int4		result = kNOERROR;

	V_Object		outputObject = NULL;


#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 0 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

#endif

	outputObject = (V_Object) float_to_real(pi,environment);
	VPLPrimSetOutputObject(environment,primInArity,0,primitive,(V_Object) outputObject);

	*trigger = kSuccess;	
	return kNOERROR;
}

Int4 VPLP_power( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive ); /* power */
Int4 VPLP_power( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	V_Object		outputObject = NULL;

	enum dataType	finalResultType = kInteger;

	Real10 		numValue = 0;
	Real10		expValue = 0;
	Real10		powValue = 1;
	V_Object	number = NULL;	
	V_Object	exponent = NULL;	

	Nat4		counter = 0;
	Int1		*primName = "power";
	Int4		result = kNOERROR;

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 2 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

	for(counter = 0;counter<primInArity;counter++){
		result = VPLPrimCheckInputObjectTypes( counter,primName, primitive, environment, 2, kInteger, kReal );
		if( result != kNOERROR ) return result;
	}

#endif

	number = VPLPrimGetInputObject(0,primitive,environment);

	exponent = VPLPrimGetInputObject(1,primitive,environment);

	if(number->type == kInteger){
		numValue = ((V_Integer) number)->value;
	}else{
		numValue = ((V_Real) number)->value;
		finalResultType = kReal;
	}
	if(exponent->type == kInteger){
		expValue = ((V_Integer) exponent)->value;
	}else{
		expValue = ((V_Real) exponent)->value;
		finalResultType = kReal;
	}
	
	powValue = pow( numValue, expValue );

	if(finalResultType == kInteger) outputObject = (V_Object) int_to_integer(powValue,environment);
	else outputObject = (V_Object) float_to_real(powValue,environment);
	VPLPrimSetOutputObject(environment,primInArity,0,primitive,(V_Object) outputObject);
		
	*trigger = kSuccess;	
	return kNOERROR;
}

Int4 VPLP_rand( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive ); /* rand */
Int4 VPLP_rand( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	Int1		*primName = "rand";
	Int4		result = kNOERROR;

	V_Object		outputObject = NULL;

	Real10 theRatio = 0;

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 0 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

#endif

	theRatio = (Random() + 32767) / 65534.0000;		// Random() returns a range between -32767 to +32767. 
													// This is converted into a ratio between 0 and 1.
													// There are 65534 possible results. 
													// Random() also resets the seed.
	
	outputObject = (V_Object) float_to_real( theRatio,environment);
	VPLPrimSetOutputObject(environment,primInArity,0,primitive,(V_Object) outputObject);

	*trigger = kSuccess;	
	return kNOERROR;
}

Int4 VPLP_rand_2D_seed( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive ); /* rand-seed */
Int4 VPLP_rand_2D_seed( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	long			seedValue = 0;
	V_Object		seed = NULL;
	V_Integer	outputInt = 0;	

	if(primInArity == 0 && primOutArity == 0) return kWRONGINARITY;
	
	if(primInArity == 1) {												// Optional first input to set the seed.
		seed = VPLPrimGetInputObject(0,primitive,environment);
		if( (seed != NULL) && (seed->type == kNone) ) seed = NULL;	// NONE = NULL
		
		if( (seed != NULL) && (seed->type != kInteger) ) return kWRONGINPUTTYPE;

		if(seed == NULL) GetDateTime( (unsigned long*)&seedValue );	// If you pass in NULL we make up a seed for you.
		else seedValue = ((V_Integer) seed)->value;
		
		SetQDGlobalsRandomSeed( seedValue );
	}

	if(primOutArity == 1) {												// Optional first output to return the current seed.
		outputInt = int_to_integer( GetQDGlobalsRandomSeed(),environment);
		VPLPrimSetOutputObject(environment,primInArity,0,primitive,(V_Object) outputInt);
	}
	
	*trigger = kSuccess;	
	return kNOERROR;
}

Int4 VPLP_trunc( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive ); /* trunc */
Int4 VPLP_trunc( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	Int1			*primName = "trunc";
	Int4			result = kNOERROR;

	V_Object		outputObject = NULL;

	Real10		numValue = 0;
	Int4		intValue = 0;
	Real10		fracValue = 0;
	V_Object	number = NULL;
	V_Integer	outputInt = 0;	

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 2 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectTypes( 0 ,primName, primitive, environment, 2, kInteger, kReal );
	if( result != kNOERROR ) return result;

#endif

	number = VPLPrimGetInputObject(0,primitive,environment);

	if(number->type == kInteger){
		numValue = ((V_Integer) number)->value;
	}else{
		numValue = ((V_Real) number)->value;
	}
	
	intValue = trunc( numValue );
	fracValue = numValue - intValue;
	
	outputInt = int_to_integer( intValue,environment);
	VPLPrimSetOutputObject(environment,primInArity,0,primitive,(V_Object) outputInt);

	outputObject = (V_Object) float_to_real( fracValue,environment);
	VPLPrimSetOutputObject(environment,primInArity,1,primitive,(V_Object) outputObject);
	
	*trigger = kSuccess;	
	return kNOERROR;
}

Int4 VPLP_sin( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_sin( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	V_Object		outputObject = NULL;
	V_Object		inputObject = NULL;

	Real10			realResult = 0.0;

	Int1			*primName = "tan";
	Int4			result = kNOERROR;

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectTypes( 0 ,primName, primitive, environment, 2, kInteger, kReal );
	if( result != kNOERROR ) return result;

#endif

	inputObject = VPLPrimGetInputObject(0,primitive,environment);
	if(inputObject->type == kInteger) {
		realResult = ((V_Integer) inputObject)->value;
	} else {
		realResult += ((V_Real) inputObject)->value;
	}
	
	realResult = sin(realResult);
	
	outputObject = (V_Object) float_to_real(realResult,environment);
	VPLPrimSetOutputObject(environment,primInArity,0,primitive,(V_Object) outputObject);

	*trigger = kSuccess;	
	return kNOERROR;
}

Int4 VPLP_cos( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_cos( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	V_Object		outputObject = NULL;
	V_Object		inputObject = NULL;

	Real10			realResult = 0.0;

	Int1			*primName = "tan";
	Int4			result = kNOERROR;

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectTypes( 0 ,primName, primitive, environment, 2, kInteger, kReal );
	if( result != kNOERROR ) return result;

#endif

	inputObject = VPLPrimGetInputObject(0,primitive,environment);
	if(inputObject->type == kInteger) {
		realResult = ((V_Integer) inputObject)->value;
	} else {
		realResult += ((V_Real) inputObject)->value;
	}
	
	realResult = cos(realResult);
	
	outputObject = (V_Object) float_to_real(realResult,environment);
	VPLPrimSetOutputObject(environment,primInArity,0,primitive,(V_Object) outputObject);

	*trigger = kSuccess;	
	return kNOERROR;
}

Int4 VPLP_tan( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_tan( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	V_Object		outputObject = NULL;
	V_Object		inputObject = NULL;

	Real10			realResult = 0.0;

	Int1			*primName = "tan";
	Int4			result = kNOERROR;

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectTypes( 0 ,primName, primitive, environment, 2, kInteger, kReal );
	if( result != kNOERROR ) return result;

#endif

	inputObject = VPLPrimGetInputObject(0,primitive,environment);
	if(inputObject->type == kInteger) {
		realResult = ((V_Integer) inputObject)->value;
	} else {
		realResult += ((V_Real) inputObject)->value;
	}
	
	realResult = tan(realResult);
	
	outputObject = (V_Object) float_to_real(realResult,environment);
	VPLPrimSetOutputObject(environment,primInArity,0,primitive,(V_Object) outputObject);

	*trigger = kSuccess;	
	return kNOERROR;
}

Int4 VPLP_asin( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_asin( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	V_Object		outputObject = NULL;
	V_Object		inputObject = NULL;

	Real10			realResult = 0.0;

	Int1			*primName = "tan";
	Int4			result = kNOERROR;

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectTypes( 0 ,primName, primitive, environment, 2, kInteger, kReal );
	if( result != kNOERROR ) return result;

#endif

	inputObject = VPLPrimGetInputObject(0,primitive,environment);
	if(inputObject->type == kInteger) {
		realResult = ((V_Integer) inputObject)->value;
	} else {
		realResult += ((V_Real) inputObject)->value;
	}
	
	realResult = asin(realResult);
	
	outputObject = (V_Object) float_to_real(realResult,environment);
	VPLPrimSetOutputObject(environment,primInArity,0,primitive,(V_Object) outputObject);

	*trigger = kSuccess;	
	return kNOERROR;
}

Int4 VPLP_acos( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_acos( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	V_Object		outputObject = NULL;
	V_Object		inputObject = NULL;

	Real10			realResult = 0.0;

	Int1			*primName = "tan";
	Int4			result = kNOERROR;

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectTypes( 0 ,primName, primitive, environment, 2, kInteger, kReal );
	if( result != kNOERROR ) return result;

#endif

	inputObject = VPLPrimGetInputObject(0,primitive,environment);
	if(inputObject->type == kInteger) {
		realResult = ((V_Integer) inputObject)->value;
	} else {
		realResult += ((V_Real) inputObject)->value;
	}
	
	realResult = acos(realResult);
	
	outputObject = (V_Object) float_to_real(realResult,environment);
	VPLPrimSetOutputObject(environment,primInArity,0,primitive,(V_Object) outputObject);

	*trigger = kSuccess;	
	return kNOERROR;
}

Int4 VPLP_atan( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_atan( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	V_Object		outputObject = NULL;
	V_Object		inputObject = NULL;

	Real10			realResult = 0.0;

	Int1			*primName = "tan";
	Int4			result = kNOERROR;

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectTypes( 0 ,primName, primitive, environment, 2, kInteger, kReal );
	if( result != kNOERROR ) return result;

#endif

	inputObject = VPLPrimGetInputObject(0,primitive,environment);
	if(inputObject->type == kInteger) {
		realResult = ((V_Integer) inputObject)->value;
	} else {
		realResult += ((V_Real) inputObject)->value;
	}
	
	realResult = atan(realResult);
	
	outputObject = (V_Object) float_to_real(realResult,environment);
	VPLPrimSetOutputObject(environment,primInArity,0,primitive,(V_Object) outputObject);

	*trigger = kSuccess;	
	return kNOERROR;
}

Int4 VPLP_sinh( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_sinh( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	V_Object		outputObject = NULL;
	V_Object		inputObject = NULL;

	Real10			realResult = 0.0;

	Int1			*primName = "tan";
	Int4			result = kNOERROR;

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectTypes( 0 ,primName, primitive, environment, 2, kInteger, kReal );
	if( result != kNOERROR ) return result;

#endif

	inputObject = VPLPrimGetInputObject(0,primitive,environment);
	if(inputObject->type == kInteger) {
		realResult = ((V_Integer) inputObject)->value;
	} else {
		realResult += ((V_Real) inputObject)->value;
	}
	
	realResult = sinh(realResult);
	
	outputObject = (V_Object) float_to_real(realResult,environment);
	VPLPrimSetOutputObject(environment,primInArity,0,primitive,(V_Object) outputObject);

	*trigger = kSuccess;	
	return kNOERROR;
}

Int4 VPLP_cosh( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_cosh( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	V_Object		outputObject = NULL;
	V_Object		inputObject = NULL;

	Real10			realResult = 0.0;

	Int1			*primName = "tan";
	Int4			result = kNOERROR;

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectTypes( 0 ,primName, primitive, environment, 2, kInteger, kReal );
	if( result != kNOERROR ) return result;

#endif

	inputObject = VPLPrimGetInputObject(0,primitive,environment);
	if(inputObject->type == kInteger) {
		realResult = ((V_Integer) inputObject)->value;
	} else {
		realResult += ((V_Real) inputObject)->value;
	}
	
	realResult = cosh(realResult);
	
	outputObject = (V_Object) float_to_real(realResult,environment);
	VPLPrimSetOutputObject(environment,primInArity,0,primitive,(V_Object) outputObject);

	*trigger = kSuccess;	
	return kNOERROR;
}

Int4 VPLP_tanh( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_tanh( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	V_Object		outputObject = NULL;
	V_Object		inputObject = NULL;

	Real10			realResult = 0.0;

	Int1			*primName = "tan";
	Int4			result = kNOERROR;

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectTypes( 0 ,primName, primitive, environment, 2, kInteger, kReal );
	if( result != kNOERROR ) return result;

#endif

	inputObject = VPLPrimGetInputObject(0,primitive,environment);
	if(inputObject->type == kInteger) {
		realResult = ((V_Integer) inputObject)->value;
	} else {
		realResult += ((V_Real) inputObject)->value;
	}
	
	realResult = tanh(realResult);
	
	outputObject = (V_Object) float_to_real(realResult,environment);
	VPLPrimSetOutputObject(environment,primInArity,0,primitive,(V_Object) outputObject);

	*trigger = kSuccess;	
	return kNOERROR;
}

Nat4	loadConstants_VPX_PrimitivesMath(V_Environment environment,char *bundleID);
Nat4	loadConstants_VPX_PrimitivesMath(V_Environment environment,char *bundleID)
{
#pragma unused(environment)
#pragma unused(bundleID)
        
        return kNOERROR;

}

Nat4	loadStructures_VPX_PrimitivesMath(V_Environment environment,char *bundleID);
Nat4	loadStructures_VPX_PrimitivesMath(V_Environment environment,char *bundleID)
{
#pragma unused(environment)
#pragma unused(bundleID)
        
        return kNOERROR;

}

Nat4	loadProcedures_VPX_PrimitivesMath(V_Environment environment,char *bundleID);
Nat4	loadProcedures_VPX_PrimitivesMath(V_Environment environment,char *bundleID)
{
#pragma unused(environment)
#pragma unused(bundleID)
        
        return kNOERROR;

}

Int4 VPLP__2A2A_( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP__2A2A_( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive ){
	return VPLP_itimes(environment,trigger,primInArity,primOutArity,primitive);
}

Int4 VPLP__2B2B_( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP__2B2B_( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive ){
	return VPLP_iplus(environment,trigger,primInArity,primOutArity,primitive);
}

Int4 VPLP__2D2D_( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP__2D2D_( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive ){
	return VPLP_iminus(environment,trigger,primInArity,primOutArity,primitive);
}

Int4 VPLP__C3B7C3B7_( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP__C3B7C3B7_( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive ){
	return VPLP_idiv(environment,trigger,primInArity,primOutArity,primitive);
}

Int4 VPLP__2D_1( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP__2D_1( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive ){
	return VPLP_minus_2D_one(environment,trigger,primInArity,primOutArity,primitive);
}

Int4 VPLP__2A_( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP__2A_( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive ){
	return VPLP_times(environment,trigger,primInArity,primOutArity,primitive);
}

Int4 VPLP_plus_2D_one( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_plus_2D_one( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive ){
	return VPLP__2B_1(environment,trigger,primInArity,primOutArity,primitive);
}

Int4 VPLP__2B_( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP__2B_( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive ){
	return VPLP_plus(environment,trigger,primInArity,primOutArity,primitive);
}

Int4 VPLP__2D_( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP__2D_( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive ){
	return VPLP_minus(environment,trigger,primInArity,primOutArity,primitive);
}

Int4 VPLP__C3B7_( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP__C3B7_( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive ){
	return VPLP_div(environment,trigger,primInArity,primOutArity,primitive);
}

Int4 VPLP__CF80_( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP__CF80_( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive ){
	return VPLP_pi(environment,trigger,primInArity,primOutArity,primitive);
}

Nat4	loadPrimitives_VPX_PrimitivesMath(V_Environment environment,char *bundleID);
Nat4	loadPrimitives_VPX_PrimitivesMath(V_Environment environment,char *bundleID)
{
        V_ExtPrimitive	result = NULL;
        V_Dictionary	dictionary = environment->externalPrimitivesTable;
        
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"**",dictionary,2,1,VPLP_itimes)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"++",dictionary,2,1,VPLP_iplus)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"--",dictionary,2,1,VPLP_iminus)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"\xC3\xB7\xC3\xB7",dictionary,2,2,VPLP_idiv)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"*",dictionary,2,1,VPLP_times)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"+",dictionary,2,1,VPLP_plus)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"-",dictionary,2,1,VPLP_minus)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"\xC3\xB7",dictionary,2,1,VPLP_div)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"itimes",dictionary,2,1,VPLP_itimes)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"iplus",dictionary,2,1,VPLP_iplus)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"iminus",dictionary,2,1,VPLP_iminus)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"idiv",dictionary,2,2,VPLP_idiv)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"times",dictionary,2,1,VPLP_times)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"plus",dictionary,2,1,VPLP_plus)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"minus",dictionary,2,1,VPLP_minus)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"div",dictionary,2,1,VPLP_div)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"+1",dictionary,1,1,VPLP__2B_1)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"-1",dictionary,1,1,VPLP_minus_2D_one)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"plus-one",dictionary,1,1,VPLP__2B_1)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"minus-one",dictionary,1,1,VPLP_minus_2D_one)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"round-down",dictionary,1,1,VPLP_round_2D_down)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"round-up",dictionary,1,1,VPLP_round_2D_up)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"round",dictionary,1,1,VPLP_round)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"abs",dictionary,1,1,VPLP_abs)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"sqrt",dictionary,1,1,VPLP_sqrt)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"max",dictionary,2,1,VPLP_max)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"min",dictionary,2,1,VPLP_min)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"pi",dictionary,0,1,VPLP_pi)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"\xCF\x80",dictionary,0,1,VPLP_pi)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"power",dictionary,2,1,VPLP_power)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"rand",dictionary,0,1,VPLP_rand)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"rand-seed",dictionary,1,0,VPLP_rand_2D_seed)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"trunc",dictionary,1,2,VPLP_trunc)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"sin",dictionary,1,1,VPLP_sin)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"cos",dictionary,1,1,VPLP_cos)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"tan",dictionary,1,1,VPLP_tan)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"asin",dictionary,1,1,VPLP_asin)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"acos",dictionary,1,1,VPLP_acos)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"atan",dictionary,1,1,VPLP_atan)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"sinh",dictionary,1,1,VPLP_sinh)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"cosh",dictionary,1,1,VPLP_cosh)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"tanh",dictionary,1,1,VPLP_tanh)) == NULL) return kERROR;


        return kNOERROR;

}

Nat4	load_VPX_PrimitivesMath(V_Environment environment,char *bundleID);
Nat4	load_VPX_PrimitivesMath(V_Environment environment,char *bundleID)
{
		Nat4	result = 0;
		
		result = loadConstants_VPX_PrimitivesMath(environment,bundleID);
		result = loadStructures_VPX_PrimitivesMath(environment,bundleID);
		result = loadProcedures_VPX_PrimitivesMath(environment,bundleID);
		result = loadPrimitives_VPX_PrimitivesMath(environment,bundleID);
		
		return result;
}

