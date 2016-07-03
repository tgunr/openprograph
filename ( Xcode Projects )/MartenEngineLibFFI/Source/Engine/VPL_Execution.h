/*
	
	VPL_Execution.h
	Copyright 2000 Scott B. Anderson, All Rights Reserved.
	
*/

#include "VPL_Engine.h"
#include "VPL_Externals.h"

#ifndef VPLEXECUTION
#define VPLEXECUTION

enum tokenType{
	kTokenTypeIntegerConstant,
	kTokenTypeRealConstant,
	kTokenTypeOperator,
	kTokenTypeLParen,
	kTokenTypeRParen,
	kTokenTypeExpression,
	kTokenTypeRow
};

enum operatorType{
	kOperatorTypeNoop,
	kOperatorTypePositive,
	kOperatorTypeNegative,
	kOperatorTypeAddition,
	kOperatorTypeSubtraction,
	kOperatorTypeMultiplication,
	kOperatorTypeDivision,
	kOperatorTypeIntegerDivision,
	kOperatorTypeRemainder,
	kOperatorTypeBitwiseAnd,
	kOperatorTypeBitwiseOr,
	kOperatorTypeBitwiseXor,
	kOperatorTypeBitwiseNot,
	kOperatorTypeBitShiftLeft,
	kOperatorTypeBitShiftRight,
	kOperatorTypeExponent
};

typedef struct VPL_EvalTokenList *V_EvalTokenList;
typedef struct VPL_EvalToken *V_EvalToken;
typedef struct VPL_EvalExpression *V_EvalExpression;
typedef struct VPL_GPRegisters *V_GPRegisters;

typedef struct VPL_GPRegisters
{
	Nat4		register3;
	Nat4		register4;
	Nat4		register5;
	Nat4		register6;
	Nat4		register7;
	Nat4		register8;
	Nat4		register9;
	Nat4		register10;
}	VPL_GPRegisters;

typedef struct VPL_EvalExpression
{
	V_EvalToken			before;
	V_EvalToken			after;
	V_EvalToken			operation;
}	VPL_EvalExpression;

typedef struct VPL_EvalToken
{
	Nat4				type;			/* enum tokenType type */
	Nat4				operationType;	/* enum operatorType type */
	V_EvalExpression	expression;
	Int4				integerValue;
	Real10				realValue;
	V_EvalToken			previous;
	V_EvalToken			next;
}	VPL_EvalToken;

typedef struct VPL_EvalTokenList
{
	V_EvalToken			first;
	V_EvalToken			last;
}	VPL_EvalTokenList;

#ifdef __cplusplus
extern "C" {
#endif

Int4 execute_get( V_Environment environment,V_Stack stack);
Int4 execute_set( V_Environment environment,V_Stack stack);
Int4 execute_extget( V_Environment environment,V_Stack stack);
Int4 execute_extset( V_Environment environment,V_Stack stack);
Int4 execute_extprocedure( V_Environment environment,V_Stack stack);
Int4 execute_evaluate( V_Environment environment,V_Stack stack);


Int1 *module_name( V_Operation operation , V_Environment environment );
Int1 *full_name( V_Operation operation , V_Environment environment );

V_EvalTokenList	parse_string(V_Environment environment,V_Stack stack,Int1* testString);
Int4 add_token(V_EvalTokenList tokenList,V_EvalToken token);
V_EvalToken reduce_complex(V_EvalToken theFirstToken,V_EvalToken theLastToken);
V_EvalToken execute_tokenList(V_EvalToken theFirstToken);

Int4 attribute_offset( V_Class tempClass , Int1 *tempOString );

#ifdef __cplusplus
}
#endif

#endif
