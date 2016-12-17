/*
	
	VPL_PrimitivesString.c
	Copyright 2000 Scott B. Anderson, All Rights Reserved.
	
*/
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <ctype.h>
#ifdef __MWERKS__
#include "VPL_Compiler.h"
#include "VPL_Errors.h"
#elif __GNUC__
#include <MartenEngine/MartenEngine.h>

/*
typedef union {
	long inputInt;
	float inputFloat;
	double inputDouble;
} VPL_Input, *V_Input;

typedef struct {
	V_Input *inputs;
} VPL_InputList, *V_InputList;
*/

#endif	


#define     CONVERT_BASE_INVALID_SOURCE_BASE		1
#define     CONVERT_BASE_INVALID_DESTINATION_BASE	2
#define     CONVERT_BASE_INVALID_CHAR_FOR_BASE		3
#define     CONVERT_BASE_INVALID_TOO_LARGE			4

#define     CONVERT_BASE_MAX_LENGTH_OUTPUT			256

#define		CONVERT_BASE_LOWER_LIMIT				2
#define 	CONVERT_BASE_UPPER_LIMIT				36

#define		CONVERT_BASE_USE_FLOAT					1

#define		UTF8_ERROR_END_OF_TEXT					1
#define		UTF8_ERROR_INDEX_OUT_OF_RANGE			2


Int4 utf8_prevChar( Int1* inString, Nat4 inIndex, Nat4* outNextIndex );
Int4 utf8_prevChar( Int1* inString, Nat4 inIndex, Nat4* outNextIndex )
{
	Int4	outResult = UTF8_ERROR_INDEX_OUT_OF_RANGE;
	
	Nat4	testIndex = inIndex - 1;
	
	Nat1	testChar = 0;
	bool	charFound = false;
	bool	pastFirst = false;
	
	if( inIndex == 0 ) goto EXIT;
	
	while( !pastFirst && !charFound ) 
	{
		if( testIndex == 0 ) pastFirst = true;
		
		testChar = inString[testIndex];
		if( testChar == 0 ) break;
		if( testChar <= 0x7F ) charFound = true;
		else if( (testChar >= 0xC2) && (testChar <= 0xDF) ) charFound = true;
		else if( (testChar >= 0xE0) && (testChar <= 0xEF) ) charFound = true;
		else if( (testChar >= 0xF0) && (testChar <= 0xF4) ) charFound = true;
		else testIndex--;
		
	}

EXIT:

	if (charFound) {	
		outResult = 0;
		*outNextIndex = testIndex;
	} else {
		*outNextIndex = inIndex;
		if( (pastFirst) || (inIndex == 0) ) outResult = UTF8_ERROR_END_OF_TEXT;
	}
	
	return outResult;
}

Int4 utf8_nextChar( Int1* inString, Nat4 inIndex, Nat4* outNextIndex );
Int4 utf8_nextChar( Int1* inString, Nat4 inIndex, Nat4* outNextIndex )
{
	Int4	outResult = UTF8_ERROR_INDEX_OUT_OF_RANGE;
	
	Nat4	maxlen = strlen( inString );
	Nat4	testIndex = inIndex;
	
	Nat1	testChar = 0;
	bool	charFound = false;
	
	while( (testIndex <= maxlen) && !charFound ) 
	{
		
		testChar = inString[testIndex];

		if( testChar == 0 ) break;
		if( testChar <= 0x7F ) charFound = true;
		else if( (testChar >= 0xC2) && (testChar <= 0xDF) ) charFound = true;
		else if( (testChar >= 0xE0) && (testChar <= 0xEF) ) charFound = true;
		else if( (testChar >= 0xF0) && (testChar <= 0xF4) ) charFound = true;
		else testIndex++;
		
	}
	
	if (charFound) {	
		outResult = kNOERROR;
		*outNextIndex = testIndex + 1;
	} else {
		*outNextIndex = inIndex;
		if( testIndex == maxlen ) {
			outResult = UTF8_ERROR_END_OF_TEXT;
			*outNextIndex = maxlen + 1;
		}
	}
	
	return outResult;
}

Int4 utf8_byteToChar( Int1* inString, Nat4 inByteIndex, Nat4* outCharIndex );
Int4 utf8_byteToChar( Int1* inString, Nat4 inByteIndex, Nat4* outCharIndex )
{
	Int4	outResult = UTF8_ERROR_INDEX_OUT_OF_RANGE;
	Nat4	maxlen = 0;
	Nat4	testIndex = 0;
	Nat4	nextIndex = 0;
	
	Nat4	charCount = 0;
	
	if( (inString != NULL) ) {	
		maxlen = strlen( inString );
		if( maxlen != 0 ) {
			outResult = kNOERROR;
		}
		
		while( (outResult == 0) && (testIndex < inByteIndex) ) {
			outResult = utf8_nextChar( inString, testIndex, &nextIndex );
			if( (outResult != UTF8_ERROR_INDEX_OUT_OF_RANGE) ) charCount++;
			testIndex = nextIndex;
		}

		if( inByteIndex == 0 ) charCount = 1;
	}
	
	*outCharIndex = charCount;
	
	return outResult;
}

Int4 utf8_charToByte( Int1* inString, Nat4 inCharIndex, Nat4* outByteIndex );
Int4 utf8_charToByte( Int1* inString, Nat4 inCharIndex, Nat4* outByteIndex )
{
	Int4	outResult = UTF8_ERROR_INDEX_OUT_OF_RANGE;
	Nat4	maxlen = 0;
	Nat4	testIndex = 0;
	
	Nat4	charCount = 0;
	
	if( (inString != NULL) && (inCharIndex != 0) ) {	
		maxlen = strlen( inString );
		if( maxlen != 0 ) {
			outResult = kNOERROR;
			charCount = 0;
		}
		
		for( charCount = 1; charCount < inCharIndex+1; charCount++ ) {
			outResult = utf8_nextChar( inString, testIndex, &testIndex );
		}
	}

	*outByteIndex = testIndex-1;
	
	if( outResult == UTF8_ERROR_END_OF_TEXT ) outResult = kNOERROR;
	
	return outResult;
}

Nat4 utf8_countChar( Int1* inString );
Nat4 utf8_countChar( Int1* inString )
{
	Int4	outResult = 0;
	Nat4	maxlen = 0;
	Nat4	testIndex = 0;
	Nat4	nextIndex = 0;
	
	Nat4	charCount = 0;
	
	if( inString != NULL) {	
		maxlen = strlen( inString );
		
		while( outResult == 0 ) {
			outResult = utf8_nextChar( inString, testIndex, &nextIndex );
			if( outResult == kNOERROR ) charCount++;
			testIndex = nextIndex;
		}
	}
	
	return charCount;
}

Int4 utf8_charSize( Int1* inString, Nat4 inLength, Nat4 inPosition, Nat4 *outSize );
Int4 utf8_charSize( Int1* inString, Nat4 inLength, Nat4 inPosition, Nat4 *outSize )
{
	Nat4	bytePosition = 0;
	Int4	result = 0;
	
	Nat4	testIndex = 0;

	*outSize = 0;

	result = utf8_charToByte( inString, inPosition, &bytePosition );
	if( result == UTF8_ERROR_INDEX_OUT_OF_RANGE ) return result;
	
	if( inLength == 0 ) return kNOERROR;

	result = utf8_charToByte( inString, inPosition + inLength, &testIndex );

	if( result != kNOERROR ) testIndex = strlen(inString);
	
	if( ((inPosition + inLength) == utf8_countChar(inString)) ) result = UTF8_ERROR_END_OF_TEXT;
	
	*outSize = (testIndex - bytePosition);
	return result;
}


void utf8_reverse( Int1* theString );
void utf8_reverse( Int1* theString )
{
	Int1	result = 0;
	Int1* 	tempString;
	Nat4	length = 0;
	Nat4	charLength = 0;
	Nat4	charPosition = 0;
	Nat4	charSize = 0;
	Nat4	loop;
	Nat4	charLoop;
	
	length = strlen(theString);
	tempString = (Int1*) X_malloc( length+1 );
	tempString[ length ] = '\0';
	
	charLength = utf8_countChar( theString );

	for( loop = 1; loop <= charLength; loop++ ) {
		result = utf8_charToByte( theString, loop, &charPosition );
		result = utf8_charSize( theString, 1, loop, &charSize );
		
		for( charLoop = charSize; charLoop > 0; charLoop-- )
			tempString[length-charLoop] = theString[charPosition+(charSize-charLoop)];
		
		length = length - charSize;
	}
		
	strcpy( theString, tempString );
	X_free(tempString );
	
}

void str_reverse( Int1* theString );
void str_reverse( Int1* theString )
{

	Int1* 	tempString;
	Nat4	length = 0;
	Nat4	loop;
	
	length = strlen(theString);
	tempString = (Int1*) X_malloc( length+1 );
	for( loop = length; loop > 0; loop-- )
		tempString[length-loop] = theString[loop-1];
	tempString[ length ] = '\0';
	
	strcpy( theString, tempString );
	X_free(tempString );
	
}

Int4 VPLP__22_reverse_22_( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP__22_reverse_22_( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	Int1		*primName = "\"reverse\"";
	Int4		result = kNOERROR;

	V_Object	object = NULL;
	Int1		*tempCString = NULL;

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kString,0,primName, primitive, environment );
	if( result != kNOERROR ) return result;
#endif

	object = VPLPrimGetInputObject(0,primitive,environment);
	tempCString = new_string( ((V_String) object)->string , environment );

//	str_reverse( tempCString );
	utf8_reverse( tempCString );
	
	VPLPrimSetOutputObjectString(environment,primInArity,0,primitive, tempCString);
	
	*trigger = kSuccess;	
	return kNOERROR;
}

Int4 VPLP_integer_2D_to_2D_string( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_integer_2D_to_2D_string( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	V_Object	object = NULL;
	Int1		*workString = NULL;
	Int4		theInt = 0;

	Int1		*primName = "integer-to-string";
	Int4		result = kNOERROR;
	
	Nat4		oneChar = 255;
	Nat4		twoChar = 65535;
	Nat4		threeChar = 16777215;

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,0,primName, primitive, environment );
	if( result != kNOERROR ) return result;

#endif

	object = VPLPrimGetInputObject(0,primitive,environment);
	theInt = ((V_Integer) object)->value;

	workString = calloc(5,1);
	
	if ( theInt <= oneChar ) workString[0] = (Int1)theInt;
	else if ( theInt <= twoChar ) {
		workString[1] = (Int1)theInt;
		workString[0] = (Int1)(theInt >> 8);
	} else if ( theInt <= threeChar ) {
		workString[2] = (Int1)theInt;
		workString[1] = (Int1)(theInt >> 8);
		workString[0] = (Int1)(theInt >> 16);
	} else {
		workString[3] = (Int1)theInt;
		workString[2] = (Int1)(theInt >> 8);
		workString[1] = (Int1)(theInt >> 16);
		workString[0] = (Int1)(theInt >> 24);
	}

//	sprintf(workString,"%.4s",&theInt);	
	
	VPLPrimSetOutputObjectString(environment,primInArity,0,primitive, workString);
	
	*trigger = kSuccess;	
	return kNOERROR;
}



Int4 VPLP_string_2D_to_2D_integer( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_string_2D_to_2D_integer( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	V_Object	object = NULL;
	Int1		*workString = "";
	Nat4		theInt = 0;

	Int1		*primName = "string-to-integer";
	Int4		result = kNOERROR;

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kString,0,primName, primitive, environment );
	if( result != kNOERROR ) return result;
#endif

	object = VPLPrimGetInputObject(0,primitive,environment);
	workString = (Int1*)(((V_String) object)->string);

	if (strlen(workString) == 0 ) theInt = 0;
	else if (strlen(workString) == 1 ) theInt = workString[0];
	else if (strlen(workString) == 2 ) theInt = (workString[0] << 8) + workString[1];
	else if (strlen(workString) == 3 ) theInt = (workString[0] << 16) + (workString[1] << 8) + workString[2];
	else theInt = (workString[0] << 24) + (workString[1] << 16) + (workString[2] << 8) + workString[3];
	
//	theInt = atol(workString);
	
	VPLPrimSetOutputObjectInteger(environment,primInArity,0,primitive, theInt);
	
	*trigger = kSuccess;	
	return kNOERROR;
}

Int4 VPXConvertBaseString( Int1* theNumString, Nat2 sourceBase, Nat2 destBase, Int1* theResultString, Int1 clumpSize, Bool padToLeft, Bool seperateOut, Int1 seperationChar );
Int4 VPXConvertBaseString( Int1* theNumString, Nat2 sourceBase, Nat2 destBase, Int1* theResultString, Int1 clumpSize, Bool padToLeft, Bool seperateOut, Int1 seperationChar )
{

#if CONVERT_BASE_USE_FLOAT == 1
	long double		temp1 = 0;
	long double		tempWidth = 1;
	Nat1			counter;
	Nat1			placeCount;
#else
	Nat4	temp1 = 0;
	Nat4	tempWidth = 1;
#endif

	Nat1	temp2;
	Nat1	temp;
	Nat1	loop;
	char	tempArray[2 * CONVERT_BASE_MAX_LENGTH_OUTPUT + 1];
	Int1*	holding;

	*theResultString = '\0';
	
	if( (sourceBase < CONVERT_BASE_LOWER_LIMIT) || (sourceBase>CONVERT_BASE_UPPER_LIMIT) ) return CONVERT_BASE_INVALID_SOURCE_BASE;
	if( (destBase < CONVERT_BASE_LOWER_LIMIT) || (destBase>CONVERT_BASE_UPPER_LIMIT) ) return CONVERT_BASE_INVALID_DESTINATION_BASE;
	
//	str_reverse( theNumString );
	utf8_reverse( theNumString );
	
	for( loop=0; theNumString[loop]; loop++ ) {
		temp2 = CONVERT_BASE_UPPER_LIMIT;
		if (isdigit( theNumString[loop] )) temp2 = theNumString[loop] - '0';
		else if (isalpha( theNumString[loop] )) temp2 = toupper( theNumString[loop] ) - '7';
		
		if( temp2 >= sourceBase ) return CONVERT_BASE_INVALID_CHAR_FOR_BASE;
			
		temp1 += temp2 * tempWidth;
		tempWidth *= sourceBase;
	}
	
//	str_reverse( theNumString );
	utf8_reverse( theNumString );

#if CONVERT_BASE_USE_FLOAT == 1

	for( tempWidth=1, placeCount=1; (tempWidth * destBase) <= temp1; ) {
		tempWidth *= destBase;
		placeCount++;
	}

	for( loop=0, counter=0; placeCount; loop++, counter++, placeCount-- ) {
		temp = (temp1 / tempWidth);
		tempArray[loop] = ( temp<10 ? temp+'0' : temp+'7' );
		temp1 = temp1 - ( temp * tempWidth );
		tempWidth /= destBase;
		if( loop >= CONVERT_BASE_MAX_LENGTH_OUTPUT - 1 ) {
			tempArray[0] = '\0';
			return CONVERT_BASE_INVALID_TOO_LARGE;
		}	
	}
	
	tempArray[loop] = '\0';
//	str_reverse( theNumString );
//	utf8_reverse( theNumString );
	utf8_reverse( tempArray );

#else

	loop = 0;
	while( temp1 != 0 ) {
		temp = (temp1 % destBase);
		temp1 /= destBase;
		tempArray[loop++] = (temp<10 ? temp+'0' : temp+'7');
		if( loop >= CONVERT_BASE_MAX_LENGTH_OUTPUT - 1 ) return CONVERT_BASE_INVALID_TOO_LARGE;
	}
	tempArray[loop] = '\0';

#endif
	
	if( padToLeft && clumpSize ) {
		loop = strlen( tempArray );
		while( (loop % clumpSize) )
			tempArray[loop++] = '0';
		tempArray[loop] = '\0';
	}
	
	if( seperateOut && clumpSize ) {
		holding = tempArray;
		for( loop=1; *holding; holding++, loop++ )
			if( !(loop % clumpSize) ) {
				memmove( holding+2, holding+1, strlen( holding+1 ) + 1 );
				*++holding = seperationChar;
				loop = 0;
			}
		if( *--holding == seperationChar ) *holding = '\0';
	}

	if( strlen( tempArray ) >= CONVERT_BASE_MAX_LENGTH_OUTPUT ) return CONVERT_BASE_INVALID_TOO_LARGE;

	strcpy( theResultString, tempArray );
//	str_reverse( theNumString );
//	utf8_reverse( theNumString );
	utf8_reverse( theResultString );
	
	return kNOERROR;
}

Int4 VPLP_string_2D_to_2D_base( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive ); /* string-to-base */
Int4 VPLP_string_2D_to_2D_base( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive ) /* string-to-base */
{

	V_Object	object = NULL;

	Int1*		theNumString = "";
	Int1*		theResultString = "";
	Nat2		theSourceBase = 0;
	Nat2		theDestBase = 10;
	Int1		theClumpSize = 0;
	Bool		padToLeft = kFALSE;
	Bool		seperateOut = kFALSE;
	Int1		seperationChar = ' ';
	Int1		err = kERROR;
	
	Int1		*moduleName = NULL;
	Int1		*primName = "string-to-base";
	Int4		result = kNOERROR;


/* I/O Types

	Input 1:	String		theNumString			Required
	Input 2:	Nat2 		theSourceBase ( 2-36 )	Required
	Input 3:	Nat2		theDestBase ( 2-36 )	Default: 10
	Input 4:	Int1		theClumpSize			Default: 0
	Input 5:	Boolean		padToLeft?				Default: FALSE
	Input 6:	Boolean		seperateOut?			Default: FALSE
	Input 7:	Int1		seperationChar			Default: ' '
	
	Output 1:	Int4		result					Required
	Output 2:	String		theResultString			Required

	FAILS:		Never
	
*/

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArityMin(environment,primName, primInArity, 2 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputArityMax(environment,primName, primInArity, 7 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 2 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kString,0,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,1,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	switch(primInArity){
	
		case 7:
			result = VPLPrimCheckInputObjectType( kInteger,6,primName, primitive, environment );
			if( result != kNOERROR ) return result;
		case 6:
			result = VPLPrimCheckInputObjectType( kBoolean,5,primName, primitive, environment );
			if( result != kNOERROR ) return result;
		case 5:
			result = VPLPrimCheckInputObjectType( kBoolean,4,primName, primitive, environment );
			if( result != kNOERROR ) return result;
		case 4:
			result = VPLPrimCheckInputObjectType( kInteger,3,primName, primitive, environment );
			if( result != kNOERROR ) return result;
		case 3:
			result = VPLPrimCheckInputObjectType( kInteger,2,primName,primitive, environment );
			if( result != kNOERROR ) return result;
			break;
		default:
			break;
	}
#endif

	object = VPLPrimGetInputObject(0,primitive,environment);
	theNumString = (Int1*)(((V_String) object)->string);

	object = VPLPrimGetInputObject(1,primitive,environment);
	theSourceBase = (Nat2)(((V_Integer) object)->value);
	if( (theSourceBase<CONVERT_BASE_LOWER_LIMIT) || (theSourceBase>CONVERT_BASE_UPPER_LIMIT) ) return record_error("base-to-string: Input 2 out of range",moduleName,kWRONGINPUTTYPE,environment);
	
	switch(primInArity){
	
		case 7:
			object = VPLPrimGetInputObject(6,primitive,environment);
			seperationChar = (Int1)(((V_Integer) object)->value);
		case 6:
			object = VPLPrimGetInputObject(5,primitive,environment);
			seperateOut = (Bool)(((V_Boolean) object)->value);
		case 5:
			object = VPLPrimGetInputObject(4,primitive,environment);
			padToLeft = (Bool)(((V_Boolean) object)->value);
		case 4:
			object = VPLPrimGetInputObject(3,primitive,environment);
			theClumpSize = (Int1)(((V_Integer) object)->value);
		case 3:
			object = VPLPrimGetInputObject(2,primitive,environment);
			theDestBase = (Nat2)(((V_Integer) object)->value);
			if( (theSourceBase<CONVERT_BASE_LOWER_LIMIT) || (theSourceBase>CONVERT_BASE_UPPER_LIMIT) ) return record_error("base-to-string: Input 3 out of range",moduleName,kWRONGINPUTTYPE,environment);
			break;
		default:
			break;
	}
	
	theResultString = X_malloc(CONVERT_BASE_MAX_LENGTH_OUTPUT * sizeof(Int1));

	err = VPXConvertBaseString( theNumString, theSourceBase, theDestBase, theResultString, theClumpSize, padToLeft, seperateOut, seperationChar );
	
	VPLPrimSetOutputObjectInteger(environment,primInArity,0,primitive, err);
	
	VPLPrimSetOutputObjectString(environment,primInArity,1,primitive, theResultString);
	
	*trigger = kSuccess;	
	return kNOERROR;
}

Int4 VPLP__22_in_22_( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive ); /* "in" */
Int4 VPLP__22_in_22_( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive ) /* "in" */
{

//	Nat4		length = 0;
	Int4		offset = 0;
	V_Object	object = NULL;	
	Int1		*tempString = NULL;
	Int1		*tempAString = NULL;
	Int1		*tempCString = NULL;

	Int1		*moduleName = NULL;
	Int1		*primName = "string-to-base";
	Int4		result = kNOERROR;
	
	Nat4		byteOffset = 0;
	Nat4		charIndex = 0;

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArityMin(environment,primName, primInArity, 2 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputArityMax(environment,primName, primInArity, 3 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kString,0,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kString,1,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	switch(primInArity){
	
		case 3:
			result = VPLPrimCheckInputObjectType( kInteger,2,primName, primitive, environment );
			if( result != kNOERROR ) return result;
			break;

		default:
			break;
	}
#endif

	object = VPLPrimGetInputObject(0,primitive,environment);
	tempString = (Int1*)(((V_String) object)->string);

	object = VPLPrimGetInputObject(1,primitive,environment);
	tempAString = (Int1*)(((V_String) object)->string);
	
	switch(primInArity){
	
		case 3:
			object = VPLPrimGetInputObject(2,primitive,environment);
			offset = ((V_Integer) object)->value;
			if(offset < 0) return record_error("\"in\": Input 3 less than 0 in module - ",moduleName,kWRONGINPUTTYPE,environment);
			if(utf8_countChar(tempString) <= offset) return record_error("\"in\": Input 3 greater than length in module - ",moduleName,kWRONGINPUTTYPE,environment);
			result = utf8_charToByte( tempString, offset, &byteOffset );
			if( result == UTF8_ERROR_INDEX_OUT_OF_RANGE ) return record_error("\"in\": Input 3 out of range",moduleName,kWRONGINPUTTYPE,environment);
			tempString = (Int1 *) (tempString + byteOffset);
			offset--;
			break;

		default:
			break;
	}


	tempCString = strstr(tempString,tempAString);
	if(tempCString != NULL) {
		result = utf8_byteToChar( tempString, 1 + (tempCString - tempString), &charIndex );
		if( result == UTF8_ERROR_INDEX_OUT_OF_RANGE ) charIndex = 0;
		else charIndex = charIndex + offset;
	}


	VPLPrimSetOutputObjectInteger(environment,primInArity,0,primitive, charIndex);		// UTF8
	
	*trigger = kSuccess;	
	return kNOERROR;
}

Int4 VPLP__22_join_22_( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive ); /* "join" */
Int4 VPLP__22_join_22_( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive ) /* "join" */
{

	Int1		*tempCString = NULL;

	Int1		*primName = "\"join\"";
	Int4		result = kNOERROR;

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArityMin(environment,primName, primInArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;
#endif

/* OLD "join" code

	Nat4		length = 0;
	Nat4		counter = 0;
	V_Object	string = NULL;	
	Int1		*tempString = NULL;

	for(counter = 0;counter<primInArity;counter++){
		result = VPLPrimCheckInputObjectType( kString,counter,primName, primitive, environment );
		if( result != kNOERROR ) return result;
	}

#endif

//	printf("join: inArity:%d lengths:", primInArity);

	for(counter = 0;counter<primInArity;counter++){
		string = VPLPrimGetInputObject(counter,primitive,environment);
//		length += ((V_String) string)->length;
		length += strlen(((V_String) string)->string);
//		if( strlen(((V_String) string)->string) != ((V_String) string)->length ) printf("\nBad string length: field:%d actual:%d string:%s\n", ((V_String) string)->length, strlen(((V_String) string)->string), ((V_String) string)->string);
//		printf("%d, ", strlen(((V_String) string)->string) );
	}
	tempCString = (Int1 *)X_malloc((length+1)*sizeof(Int1));
//	memset(tempCString,0,(length+1)*sizeof(Int1));
	memset(tempCString,0,sizeof(Int1));

//	printf("\nlength:%d temp=NULL:%d tempParts: ", length, (tempCString == NULL));

	for(counter = 0;counter<primInArity;counter++){
		string = VPLPrimGetInputObject(counter,primitive,environment);
		tempString = ((V_String) string)->string;
//		printf("\"%s\"+\n", tempString);
		tempCString = strcat(tempCString,tempString);
	}
	
//	printf("Conclusion: outLength:%d outString:%s\n\n", strlen(tempCString), tempCString);
*/
	result = VPLPrimGetInputObjectStringCoalesce( &tempCString, 0, primInArity, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	if( tempCString ) VPLPrimSetOutputObjectString(environment,primInArity,0,primitive, tempCString);
	else VPLPrimSetOutputObjectNULL(environment, primInArity, 0, primitive);
	
	*trigger = kSuccess;	
	return kNOERROR;
}

Int4 VPLP_join_2D_text( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_join_2D_text( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	Int1		*tempCString = NULL;

	Int1		*primName = "\"join-text\"";
	Int4		result = kNOERROR;

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArityMin(environment,primName, primInArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;
#endif

	result = VPLPrimGetInputObjectStringCoalesce( &tempCString, 0, primInArity, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	if( tempCString ) VPLPrimSetOutputObjectString( environment, primInArity, 0, primitive, tempCString );
	else VPLPrimSetOutputObjectNULL( environment, primInArity, 0, primitive );
	
	*trigger = kSuccess;	
	return kNOERROR;
}

Int4 VPLP__22_length_22_( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive ); /* "length" */
Int4 VPLP__22_length_22_( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive ) /* "length" */
{

	Nat4		length = 0;
	V_Object	object = NULL;	

	Int1		*primName = "\"length\"";
	Int4		result = kNOERROR;

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kString,0,primName, primitive, environment );
	if( result != kNOERROR ) return result;
#endif

	object = VPLPrimGetInputObject(0,primitive,environment);

	length = utf8_countChar( ((V_String) object)->string );		// UTF8
//	length = strlen( ((V_String) object)->string );				// Old
//	length = ((V_String) string)->length;						// Oldest

	VPLPrimSetOutputObjectInteger(environment,primInArity,0,primitive, length);
	
	*trigger = kSuccess;	
	return kNOERROR;
}

Int4 VPLP_to_2D_string( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_to_2D_string( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	Int1		*primName = "to-string";
	Int4		result = kNOERROR;

	V_Object	object = NULL;
	Int1		*tempCString = NULL;

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;
#endif

	object = VPLPrimGetInputObject(0,primitive,environment);

	tempCString = object_to_string( object , environment);

	VPLPrimSetOutputObjectString(environment,primInArity,0,primitive, tempCString); /* tempCString will be freed at object destruction */

	*trigger = kSuccess;	
	return kNOERROR;
}

Int4 VPLP_from_2D_string( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive ); /* from-string */
Int4 VPLP_from_2D_string( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive ) /* from-string */
{

	V_Object	object = NULL;

	Int1		*primName = "from-string";
	Int4		result = kNOERROR;

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kString,0,primName, primitive, environment );
	if( result != kNOERROR ) return result;
#endif

	object = VPLPrimGetInputObject(0,primitive,environment);

	object = string_to_object(((V_String)object)->string,environment);
		
	VPLPrimSetOutputObject(environment,primInArity,0,primitive, object);
	
	*trigger = kSuccess;	
	return kNOERROR;
}


Int4 VPLP_middle( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive ); /* prefix */
Int4 VPLP_middle( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive ) /* prefix */
{

	Int4		length = 0;
	Int4		position = 0;
	V_Object	object = NULL;	
	Int1		*tempString = NULL;
	Int1		*tempCString = NULL;

	Int1		*moduleName = NULL;
	Int1		*primName = "middle";
	Int4		result = kNOERROR;
	
	Nat4		tempStringLength = 0;
	Nat4		byteLength = 0;
	Nat4		bytePosition = 0;
	

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 3 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kString,0, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,1, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,2, primName, primitive, environment );
	if( result != kNOERROR ) return result;

#endif

	object = VPLPrimGetInputObject(0,primitive,environment);
	tempString = ((V_String) object)->string;
	tempStringLength = utf8_countChar( tempString );

	object = VPLPrimGetInputObject(1,primitive,environment);
	length = ((V_Integer) object)->value;
	if( length < 1 || length > tempStringLength) return record_error("middle: Length out of range",moduleName,kWRONGINPUTTYPE,environment);

	object = VPLPrimGetInputObject(2,primitive,environment);
	position = ((V_Integer) object)->value;
	if( position < 1 || position > tempStringLength) return record_error("middle: Position out of range",moduleName,kWRONGINPUTTYPE,environment);

	result = utf8_charToByte( tempString, position, &bytePosition );
	if( result == UTF8_ERROR_INDEX_OUT_OF_RANGE ) return record_error("middle: Position out of range",moduleName,kWRONGINPUTTYPE,environment);

/*	testIndex = bytePosition;
	result = kNOERROR;

	if( bytePosition == strlen( tempString ) ) {
		testIndex++;
	} else {
		while( (result == kNOERROR) && (charCount < length) ) {
			result = utf8_nextChar( tempString, testIndex, &nextIndex );
			charCount++;
			testIndex = nextIndex;
		}
	}
	
//	if( result == UTF8_ERROR_INDEX_OUT_OF_RANGE ) return record_error("middle: Length out of range",moduleName,kWRONGINPUTTYPE,environment);
	if( result != kNOERROR ) testIndex = strlen(tempString) + 1;
	
	byteLength = testIndex - bytePosition;
	
//	result = utf8_charSize( tempString, length, position, &tempStringLength );
//	printf( "middle: byteLength:%d charSize:%d result:%d\n", byteLength, tempStringLength, result );
*/

	result = utf8_charSize( tempString, length, position, &byteLength );

	tempCString = VPXMALLOC(byteLength+1,char);
	tempCString = strncpy(tempCString,tempString+bytePosition,byteLength);
	
	VPLPrimSetOutputObjectString(environment,primInArity,0,primitive, tempCString);
	
	*trigger = kSuccess;	
	return kNOERROR;
}

Int4 VPLP_prefix( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive ); /* prefix */
Int4 VPLP_prefix( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive ) /* prefix */
{

	Int4		length = 0;
	V_Object	object = NULL;	
	Int1		*tempString = NULL;
	Int1		*tempCString = NULL;

	Int1		*primName = "prefix";
	Int4		result = kNOERROR;
	
	Nat4		bytePosition = 0;

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 2 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 2 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kString,0,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,1,primName, primitive, environment );
	if( result != kNOERROR ) return result;

#endif

	object = VPLPrimGetInputObject(0,primitive,environment);
	tempString = ((V_String) object)->string;

	object = VPLPrimGetInputObject(1,primitive,environment);
	length = ((V_Integer) object)->value;
#ifdef VPL_VERBOSE_ENGINE
//		if( length < 0 || length > strlen(tempString)) return record_error("middle: Index out of range in module - ",moduleName,kWRONGINPUTTYPE,environment);
		if( length < 0 ) return record_error("prefix: Index less than 0",NULL,kWRONGINPUTTYPE,environment);

#endif

	if( length >= utf8_countChar(tempString) ) {
		length = strlen(tempString);
		bytePosition = length;
	} else {
		result = utf8_charToByte( tempString, length+1, &bytePosition );
		if( result != kNOERROR ) return record_error("prefix: Index out of range",NULL,kWRONGINPUTTYPE,environment);

		length = bytePosition;
	}
	
	tempCString = VPXMALLOC(length+1,char);
	tempCString = strncpy(tempCString,tempString,length);
	
	VPLPrimSetOutputObjectString(environment,primInArity,0,primitive, tempCString);
	VPLPrimSetOutputObjectStringCopy(environment,primInArity,1,primitive, tempString + bytePosition);
	
	*trigger = kSuccess;	
	return kNOERROR;
}

Int4 VPLP_suffix( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive ); /* suffix */
Int4 VPLP_suffix( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive ) /* suffix */
{
	Int4		length = 0;
	V_Object	object = NULL;	
	Int1		*tempString = NULL;
	Int1		*tempCString = NULL;

	Int1		*primName = "suffix";
	Int4		result = kNOERROR;
	
	Nat4		byteLength = 0;
	

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 2 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 2 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kString,0,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,1,primName, primitive, environment );
	if( result != kNOERROR ) return result;

#endif

	object = VPLPrimGetInputObject(0,primitive,environment);
	tempString = ((V_String) object)->string;

	object = VPLPrimGetInputObject(1,primitive,environment);
	length = ((V_Integer) object)->value;
#ifdef VPL_VERBOSE_ENGINE
//	if( length < 0 || length > strlen(tempString)) return record_error("middle: Index out of range in module - ",moduleName,kWRONGINPUTTYPE,environment);
	if( length < 0 ) return record_error("suffix: Index less than 0",NULL,kWRONGINPUTTYPE,environment);
//	if( length > strlen(tempString) ) length = strlen(tempString);

#endif

	if( length >= utf8_countChar(tempString) ) {
		byteLength = 0;
	} else {
		length = utf8_countChar( tempString ) - length;

		result = utf8_charToByte( tempString, length+1, &byteLength );
		if( result == UTF8_ERROR_INDEX_OUT_OF_RANGE ) return record_error("suffix: Index out of range",NULL,kWRONGINPUTTYPE,environment);
//		byteLength--;
	}
	
//	printf("suffix: byteLength:%d length:%d\n", byteLength, length );
	
	tempCString = VPXMALLOC(byteLength+1,char);
	tempCString = strncpy(tempCString,tempString,byteLength);
	
	VPLPrimSetOutputObjectString(environment,primInArity,0,primitive, tempCString);
	VPLPrimSetOutputObjectStringCopy(environment,primInArity,1,primitive, tempString + byteLength);
		
	*trigger = kSuccess;	
	return kNOERROR;
}


Int4 VPLP_from_2D_ascii( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive ); /* from-string */
Int4 VPLP_from_2D_ascii( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive ) /* from-string */
{

	V_Object	object = NULL;
	V_List		tempList = NULL;
	Int4		ascii = 0;
	Int1		*string;
	Nat4		stringLength = 0;
	Nat4		counter = 0;

	Int1	*moduleName = NULL;

	Int1		*primName = "lowercase";
	Int4		result = kNOERROR;

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

#endif

	object = VPLPrimGetInputObject(0,primitive,environment);
	if( object == NULL) return record_error("from-ascii: Input 1 type NULL - ",moduleName,kWRONGINPUTTYPE,environment);
	else if(object->type == kInteger){
		stringLength = 1;
		string = (Int1 *) calloc(stringLength+1,sizeof(Int1));
		ascii = ((V_Integer) object)->value;
		string[0] = ascii;
	}else if(object->type == kList){
		tempList = (V_List) object;
		stringLength = tempList->listLength;
		string = (Int1 *) calloc(stringLength+1,sizeof(Int1));
		for(counter = 0; counter < stringLength; counter++){
			object = tempList->objectList[counter];
			if( object == NULL || object->type != kInteger) return record_error("from-ascii: Input 1 type not integer in module - ",moduleName,kWRONGINPUTTYPE,environment);
			ascii = ((V_Integer) object)->value;
			string[counter] = ascii;
		}
	}
	else return record_error("from-ascii: Input 1 type neither integer nor list in module - ",moduleName,kWRONGINPUTTYPE,environment);

	string[stringLength] = '\0';

	VPLPrimSetOutputObjectString(environment,primInArity,0,primitive, string);
	
	*trigger = kSuccess;	
	return kNOERROR;
}

Int4 VPLP_to_2D_ascii( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive ); /* to-ascii */
Int4 VPLP_to_2D_ascii( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive ) /* to-ascii */
{

	V_Object	object = NULL;
	Int1		*tempString = NULL;
	Nat4		length = 0;
	V_List		theList = NULL;
	Nat4		counter = 0;
	Nat1		character = 0;

	Int1		*primName = "to-ascii";
	Int4		result = kNOERROR;

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kString,0,primName, primitive, environment );
	if( result != kNOERROR ) return result;

#endif

	object = VPLPrimGetInputObject(0,primitive,environment);
	tempString = ((V_String) object)->string;
	length = ((V_String) object)->length;
	
	theList = create_list(length,environment); /* Create object, add to heap, set refcount */

	for(counter = 0;counter<length;counter++){
		character = *(tempString + counter);
		object = (V_Object) int_to_integer(character,environment); /* Create object, add to heap, set refcount */
		*(theList->objectList+counter) = object; /* Insert object */
	}
	
	VPLPrimSetOutputObject(environment,primInArity,0,primitive,(V_Object) theList);
	
	*trigger = kSuccess;	
	return kNOERROR;
}

Int4 VPLP_is_2D_alnum( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive ); /* to-ascii */
Int4 VPLP_is_2D_alnum( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive ) /* to-ascii */
{

	V_Object	object = NULL;
	Int1		*tempString = NULL;
	Nat4		length = 0;
	Nat1		character = 0;

	Int1		*primName = "to-ascii";
	Int4		result = kNOERROR;

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 0 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kString,0,primName, primitive, environment );
	if( result != kNOERROR ) return result;

#endif

	object = VPLPrimGetInputObject(0,primitive,environment);
	tempString = ((V_String) object)->string;
	length = ((V_String) object)->length;
	
	if(length == 0) *trigger = kFailure;	
	else{
		character = *tempString;
		if( 0 == isalnum(character)) *trigger = kFailure;	
		else *trigger = kSuccess;	
	}

	return kNOERROR;
}

Int4 VPLP_uppercase( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive ); /* to-ascii */
Int4 VPLP_uppercase( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive ) /* to-ascii */
{

	V_Object	object = NULL;
	Int1		*tempString = NULL;
	Nat4		length = 0;
	Nat4		counter = 0;

	Int1		*primName = "uppercase";
	Int4		result = kNOERROR;

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kString,0,primName, primitive, environment );
	if( result != kNOERROR ) return result;

#endif

	object = VPLPrimGetInputObject(0,primitive,environment);
	tempString = new_string( ((V_String) object)->string , environment );
	length = ((V_String) object)->length;
	
	for(counter = 0; counter < length;counter++){
		tempString[counter] = toupper( tempString[counter] );
	}
	
	VPLPrimSetOutputObjectString(environment,primInArity,0,primitive, tempString);
	
	*trigger = kSuccess;	
	return kNOERROR;
}

Int4 VPLP_lowercase( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive ); /* to-ascii */
Int4 VPLP_lowercase( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive ) /* to-ascii */
{

	V_Object	object = NULL;
	Int1		*tempString = NULL;
	Nat4		length = 0;
	Nat4		counter = 0;

	Int1		*primName = "lowercase";
	Int4		result = kNOERROR;

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kString,0,primName, primitive, environment );
	if( result != kNOERROR ) return result;

#endif

	object = VPLPrimGetInputObject(0,primitive,environment);
	tempString = new_string( ((V_String) object)->string , environment );
	length = ((V_String) object)->length;
	
	for(counter = 0; counter < length;counter++){
		tempString[counter] = tolower( tempString[counter] );
	}
	
	VPLPrimSetOutputObjectString(environment,primInArity,0,primitive, tempString);
	
	*trigger = kSuccess;	
	return kNOERROR;
}

Int4 VPLP_pointer_2D_to_2D_string( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_pointer_2D_to_2D_string( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	V_Object	block = NULL;

	Int1			*theString = NULL;
	V_ExternalBlock	externalBlock = NULL;

	Int1	*moduleName = NULL;
	Int1		*primName = "pointer-to-string";
	Int4		result = kNOERROR;

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kExternalBlock,0,primName, primitive, environment );
	if( result != kNOERROR ) return result;

#endif

	block = VPLPrimGetInputObject(0,primitive,environment);

	externalBlock = (V_ExternalBlock) block;
	if( strcmp(externalBlock->name,"char") != 0) return record_error("pointer-to-string: Input 1 external not type char! - ",moduleName,kWRONGINPUTTYPE,environment);
	
	if(externalBlock->levelOfIndirection == 0) theString = (Int1 *) externalBlock->blockPtr;
	else if(externalBlock->levelOfIndirection == 1) theString = *(Int1 **) externalBlock->blockPtr;
	else if(externalBlock->levelOfIndirection == 2) theString = **(Int1 ***) externalBlock->blockPtr;
	else  return record_error("pointer-to-string: Level of indirection greater than 2! - ",moduleName,kERROR,environment);
	
	VPLPrimSetOutputObjectStringCopy(environment,primInArity,0,primitive, theString);	
	*trigger = kSuccess;	
	return kNOERROR;
}

Int4 VPLP_string_2D_to_2D_pointer( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_string_2D_to_2D_pointer( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	V_Object	object = NULL;
	V_ExternalBlock	ptrO = NULL;

	Int1		*theString = NULL;
	Nat4		theLength = 0;

	Int1		*primName = "string-to-pointer";
	Int4		result = kNOERROR;

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kString,0,primName, primitive, environment );
	if( result != kNOERROR ) return result;

#endif

	object = VPLPrimGetInputObject(0,primitive,environment);
	theString = ((V_String) object)->string;
	theLength = ((V_String) object)->length;
	
	theString = new_string(theString,environment);
	
	ptrO = create_externalBlock("char",theLength+1,environment);
	ptrO->blockPtr = (void *) theString;
	VPLPrimSetOutputObject(environment,primInArity,0,primitive, (V_Object) ptrO);
	
	*trigger = kSuccess;	
	return kNOERROR;
}


Int4 VPLP_byte_2D_in( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive ); /* "in" */
Int4 VPLP_byte_2D_in( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive ) /* "in" */
{

	Nat4		length = 0;
	Int4		offset = 0;
	V_Object	object = NULL;	
	Int1		*tempString = NULL;
	Int1		*tempAString = NULL;
	Int1		*tempCString = NULL;

	Int1		*moduleName = NULL;
	Int1		*primName = "byte-in";
	Int4		result = kNOERROR;

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArityMin(environment,primName, primInArity, 2 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputArityMax(environment,primName, primInArity, 3 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kString,0,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kString,1,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	switch(primInArity){
	
		case 3:
			result = VPLPrimCheckInputObjectType( kInteger,2,primName, primitive, environment );
			if( result != kNOERROR ) return result;
			break;

		default:
			break;
	}
#endif

	object = VPLPrimGetInputObject(0,primitive,environment);
	tempString = (Int1*)(((V_String) object)->string);

	object = VPLPrimGetInputObject(1,primitive,environment);
	tempAString = (Int1*)(((V_String) object)->string);
	
	switch(primInArity){
	
		case 3:
			object = VPLPrimGetInputObject(2,primitive,environment);
			offset = ((V_Integer) object)->value - 1;
			if(offset < 0) return record_error("\"in\": Input 3 less than 0 in module - ",moduleName,kWRONGINPUTTYPE,environment);
			if(strlen(tempString) <= offset) return record_error("\"in\": Input 3 greater than length in module - ",moduleName,kWRONGINPUTTYPE,environment);
			tempString = (Int1 *) (tempString + offset);
			break;

		default:
			break;
	}


	tempCString = strstr(tempString,tempAString);
	if(tempCString != NULL) length = 1 + (tempCString - tempString);
	else length = 0;

	VPLPrimSetOutputObjectInteger(environment,primInArity,0,primitive, length);
	
	*trigger = kSuccess;	
	return kNOERROR;
}

Int4 VPLP_byte_2D_middle( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive ); /* prefix */
Int4 VPLP_byte_2D_middle( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive ) /* prefix */
{

	Int4		length = 0;
	Int4		position = 0;
	V_Object	object = NULL;	
	Int1		*tempString = NULL;
	Int1		*tempCString = NULL;

	Int1		*moduleName = NULL;
	Int1		*primName = "byte-middle";
	Int4		result = kNOERROR;

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 3 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kString,0,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,1,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,2,primName, primitive, environment );
	if( result != kNOERROR ) return result;

#endif

	object = VPLPrimGetInputObject(0,primitive,environment);
	tempString = ((V_String) object)->string;

	object = VPLPrimGetInputObject(1,primitive,environment);
	length = ((V_Integer) object)->value;
	if( length < 1 || length > strlen(tempString)) return record_error("middle: Index out of range in module - ",moduleName,kWRONGINPUTTYPE,environment);

	object = VPLPrimGetInputObject(2,primitive,environment);
	position = ((V_Integer) object)->value;
	if( position < 1 || position > strlen(tempString)) return record_error("middle: Index out of range in module - ",moduleName,kWRONGINPUTTYPE,environment);

	tempCString = (Int1 *)X_malloc((length+1)*sizeof(Int1));
	tempCString = strncpy(tempCString,tempString+position-1,length);
	tempCString[length] = '\0';
	
	VPLPrimSetOutputObjectString(environment,primInArity,0,primitive, tempCString);
	
	*trigger = kSuccess;	
	return kNOERROR;
}

Int4 VPLP_byte_2D_prefix( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive ); /* prefix */
Int4 VPLP_byte_2D_prefix( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive ) /* prefix */
{

	Int4		length = 0;
	V_Object	object = NULL;	
	Int1		*tempString = NULL;
	Int1		*tempCString = NULL;

	Int1		*primName = "byte-prefix";
	Int4		result = kNOERROR;

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 2 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 2 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kString,0,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,1,primName, primitive, environment );
	if( result != kNOERROR ) return result;

#endif

	object = VPLPrimGetInputObject(0,primitive,environment);
	tempString = ((V_String) object)->string;

	object = VPLPrimGetInputObject(1,primitive,environment);
	length = ((V_Integer) object)->value;
#ifdef VPL_VERBOSE_ENGINE
//		if( length < 0 || length > strlen(tempString)) return record_error("middle: Index out of range in module - ",moduleName,kWRONGINPUTTYPE,environment);
		if( length < 0 ) return record_error("prefix: Index less than 0",NULL,kWRONGINPUTTYPE,environment);
		if( length > strlen(tempString) ) length = strlen(tempString);

#endif
	tempCString = (Int1 *)X_malloc((length+1)*sizeof(Int1));
	memset(tempCString,0,(length+1)*sizeof(Int1));
	tempCString = strncpy(tempCString,tempString,length);
	tempCString[length] = '\0';
	
	VPLPrimSetOutputObjectString(environment,primInArity,0,primitive, tempCString);
	VPLPrimSetOutputObjectStringCopy(environment,primInArity,1,primitive, tempString + length);
	
	*trigger = kSuccess;	
	return kNOERROR;
}

Int4 VPLP_byte_2D_suffix( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive ); /* suffix */
Int4 VPLP_byte_2D_suffix( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive ) /* suffix */
{
	Int4		length = 0;
	V_Object	object = NULL;	
	Int1		*tempString = NULL;
	Int1		*tempCString = NULL;

	Int1		*primName = "byte-suffix";
	Int4		result = kNOERROR;

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 2 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 2 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kString,0,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,1,primName, primitive, environment );
	if( result != kNOERROR ) return result;

#endif

	object = VPLPrimGetInputObject(0,primitive,environment);
	tempString = ((V_String) object)->string;

	object = VPLPrimGetInputObject(1,primitive,environment);
	length = ((V_Integer) object)->value;
#ifdef VPL_VERBOSE_ENGINE
//	if( length < 0 || length > strlen(tempString)) return record_error("middle: Index out of range in module - ",moduleName,kWRONGINPUTTYPE,environment);
	if( length < 0 ) return record_error("suffix: Index less than 0",NULL,kWRONGINPUTTYPE,environment);
	if( length > strlen(tempString) ) length = strlen(tempString);

#endif
	length = strlen(tempString) - length;

	tempCString = (Int1 *)X_malloc((length+1)*sizeof(Int1));
	memset(tempCString,0,(length+1)*sizeof(Int1));
	tempCString = strncpy(tempCString,tempString,length);
	tempCString[length] = '\0';
	
	VPLPrimSetOutputObjectString(environment,primInArity,0,primitive, tempCString);
	VPLPrimSetOutputObjectStringCopy(environment,primInArity,1,primitive, tempString + length);
		
	*trigger = kSuccess;	
	return kNOERROR;
}

Int4 VPLP_log_2D_string( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive ); /* log-string */
Int4 VPLP_log_2D_string( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive ) /* log-string */
{

/*
	Nat4		length = 0;
	Int4		counter = 0;
	V_Object	string = NULL;	
	Int1		*tempString = "";
	Int1		*tempCString = "";
	Int1		*workString = "";


	if(primInArity == 0) return record_error("log-string: Input arity is 0",NULL,kWRONGINARITY,environment);
	if(primOutArity != 0) return record_error("log-string: Output arity is not 0",NULL,kWRONGINARITY,environment);

	string = VPLPrimGetInputObject(0,primitive,environment);
	if( string == NULL || string->type != kString){
	
		if( string ) tempString = object_to_string( string, environment );
		if(tempString) {
			length = strlen( tempString );
		} else {
			record_error("log-string: Input 1 type not string",NULL,kWRONGINPUTTYPE,environment);
			return kWRONGINPUTTYPE;
		}
	} else {
		length = ((V_String) string)->length;
		tempString = ((V_String) string)->string;
	}

	tempCString = (Int1 *)X_malloc((length+1)*sizeof(Int1));
	tempCString = strcpy(tempCString,tempString);

	for(counter = 1;counter<primInArity;counter++){
		string = VPLPrimGetInputObject(counter,primitive,environment);
		if( string == NULL || string->type != kString){
	
			if( string ) workString = object_to_string( string, environment );
			if( workString ) {
				length += strlen( workString );
				tempCString = realloc( tempCString, length*sizeof(Int1) );
				if( !tempCString ) break;
				tempCString = strcat( tempCString, workString );
			} else {
				record_error("log-string: Input type not string",NULL,kWRONGINPUTTYPE,environment);
				return kWRONGINPUTTYPE;
			}
		} else {
			length += ((V_String) string)->length;
			tempCString = realloc( tempCString, length*sizeof(Int1) );
			if( !tempCString ) break;
			tempCString = strcat( tempCString, ((V_String) string)->string );
		}
	}
*/
	Int1		*tempCString = NULL;
	Int1		*primName = "log-string";
	Int4		result = kNOERROR;

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArityMin(environment, primName, primInArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment, primName, primOutArity, 0 );
	if( result != kNOERROR ) return result;	
#endif

	result = VPLPrimGetInputObjectStringCoalesce( &tempCString, 0, primInArity, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	if( tempCString ) 
	{
		VPLLogString( tempCString, environment );
		X_free(tempCString );
	}
	
	*trigger = kSuccess;	
	return kNOERROR;
}

Int4 VPLP_log_2D_string_2D_return( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive ); /* log-string-return */
Int4 VPLP_log_2D_string_2D_return( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive ) /* log-string-return */
{
/*
	Nat4		length = 0;
	Int4		counter = 0;
	V_Object	string = NULL;	
	Int1		*tempString = "";
	Int1		*tempCString = "";
	Int1		*workString = "";


//	if(primInArity == 0) return record_error("log-string-return: Input arity is 0",NULL,kWRONGINARITY,environment);
	if(primOutArity != 0) return record_error("log-string-return: Output arity is not 0",NULL,kWRONGINARITY,environment);

	if(primInArity != 0 ) {
		string = VPLPrimGetInputObject(0,primitive,environment);
		if( string == NULL || string->type != kString){
		
			if( string ) tempString = object_to_string( string, environment );
			if(tempString) {
				length = strlen( tempString );
			} else {
				record_error("log-string-return: Input 1 type not string",NULL,kWRONGINPUTTYPE,environment);
				return kWRONGINPUTTYPE;
			}
		} else {
			length = ((V_String) string)->length;
			tempString = ((V_String) string)->string;
		}

		tempCString = (Int1 *)X_malloc((length+1)*sizeof(Int1));
		tempCString = strcpy(tempCString,tempString);

		for(counter = 1;counter<primInArity;counter++){
			string = VPLPrimGetInputObject(counter,primitive,environment);
			if( string == NULL || string->type != kString){
		
				if( string ) workString = object_to_string( string, environment );
				if( workString ) {
					length += strlen( workString );
					tempCString = realloc( tempCString, length*sizeof(Int1) );
					if( !tempCString ) break;
					tempCString = strcat( tempCString, workString );
				} else {
					record_error("log-string-return: Input type not string",NULL,kWRONGINPUTTYPE,environment);
					return kWRONGINPUTTYPE;
				}
			} else {
				length += ((V_String) string)->length;
				tempCString = realloc( tempCString, length*sizeof(Int1) );
				if( !tempCString ) break;
				tempCString = strcat( tempCString, ((V_String) string)->string );
			}
		}
		VPLLogStringReturn( tempCString, environment );
		X_free(tempCString );
	} else VPLLogString( "\n", environment );
*/

	Int1		*tempCString = NULL;
	Int1		*primName = "log-string-return";
	Int4		result = kNOERROR;

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckOutputArity(environment, primName, primOutArity, 0 );
	if( result != kNOERROR ) return result;	
#endif

	if( primInArity > 0 ) {
		result = VPLPrimGetInputObjectStringCoalesce( &tempCString, 0, primInArity, primName, primitive, environment );
		if( result != kNOERROR ) return result;
	}
	if( tempCString ) 
	{
		VPLLogStringReturn( tempCString, environment );
		X_free(tempCString );
	} else 
		VPLLogString( "\n", environment );
		
	*trigger = kSuccess;	
	return kNOERROR;
}

Int4 VPLP_log_2D_error( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive ); /* log-error */
Int4 VPLP_log_2D_error( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive ) /* log-error */
{
/*
	Nat4		length = 0;
	Int4		counter = 0;
	V_Object	string = NULL;	
	Int1		*tempString = "";
	Int1		*tempCString = "";
	Int1		*workString = "";


	if(primInArity == 0) return record_error("log-error: Input arity is 0",NULL,kWRONGINARITY,environment);
	if(primOutArity != 0) return record_error("log-error: Output arity is not 0",NULL,kWRONGINARITY,environment);

	string = VPLPrimGetInputObject(0,primitive,environment);
	if( string == NULL || string->type != kString){
	
		if( string ) tempString = object_to_string( string, environment );
		if(tempString) {
			length = strlen( tempString );
		} else {
			record_error("log-error: Input 1 type not string",NULL,kWRONGINPUTTYPE,environment);
			return kWRONGINPUTTYPE;
		}
	} else {
		length = ((V_String) string)->length;
		tempString = ((V_String) string)->string;
	}

	tempCString = (Int1 *)X_malloc((length+1)*sizeof(Int1));
	tempCString = strcpy(tempCString,tempString);

	for(counter = 1;counter<primInArity;counter++){
		string = VPLPrimGetInputObject(counter,primitive,environment);
		if( string == NULL || string->type != kString){
	
			if( string ) workString = object_to_string( string, environment );
			if( workString ) {
				length += strlen( workString );
				tempCString = realloc( tempCString, length*sizeof(Int1) );
				if( !tempCString ) break;
				tempCString = strcat( tempCString, workString );
			} else {
				record_error("log-error: Input type not string",NULL,kWRONGINPUTTYPE,environment);
				return kWRONGINPUTTYPE;
			}
		} else {
			length += ((V_String) string)->length;
			tempCString = realloc( tempCString, length*sizeof(Int1) );
			if( !tempCString ) break;
			tempCString = strcat( tempCString, ((V_String) string)->string );
		}
	}

	VPLLogError( tempCString, environment );

	X_free(tempCString );
*/

	Int1		*tempCString = NULL;
	Int1		*primName = "log-error";
	Int4		result = kNOERROR;

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArityMin(environment, primName, primInArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment, primName, primOutArity, 0 );
	if( result != kNOERROR ) return result;	
#endif

	result = VPLPrimGetInputObjectStringCoalesce( &tempCString, 0, primInArity, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	if( tempCString ) 
	{
		VPLLogError( tempCString, environment );
		X_free(tempCString );
	}

	*trigger = kSuccess;	
	return kNOERROR;
}


Nat4	loadConstants_VPX_PrimitivesString(V_Environment environment,char *bundleID);
Nat4	loadConstants_VPX_PrimitivesString(V_Environment environment,char *bundleID)
{
#pragma unused(environment)
#pragma unused(bundleID)
        
        return kNOERROR;

}

Nat4	loadStructures_VPX_PrimitivesString(V_Environment environment,char *bundleID);
Nat4	loadStructures_VPX_PrimitivesString(V_Environment environment,char *bundleID)
{
#pragma unused(environment)
#pragma unused(bundleID)
        
        return kNOERROR;

}

Nat4	loadProcedures_VPX_PrimitivesString(V_Environment environment,char *bundleID);
Nat4	loadProcedures_VPX_PrimitivesString(V_Environment environment,char *bundleID)
{
#pragma unused(environment)
#pragma unused(bundleID)
        
        return kNOERROR;

}

Int4 VPLP_byte_2D_length( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_byte_2D_length( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive ){

	Nat4		length = 0;
	V_Object	object = NULL;	

	Int1		*primName = "bytes-length";
	Int4		result = kNOERROR;

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kString,0,primName, primitive, environment );
	if( result != kNOERROR ) return result;
#endif

	object = VPLPrimGetInputObject(0,primitive,environment);

	length = strlen( ((V_String) object)->string );				

	VPLPrimSetOutputObjectInteger(environment,primInArity,0,primitive, length);
	
	*trigger = kSuccess;	
	return kNOERROR;
}

Nat4 format_size(const char *format, va_list ap);
Nat4 format_size(const char *format, va_list ap)
{
  const char *p = format;
  /* Add one to make sure that it is never zero, which might cause malloc
     to return NULL.  */
  int total_width = strlen (format) + 1;

  while (*p != '\0')
    {
      if (*p++ == '%')
	{
	  while (strchr ("-+ #0", *p))
	    ++p;
	  if (*p == '*')
	    {
	      ++p;
	      total_width += abs (va_arg (ap, int));
	    }
	  else
	    total_width += strtoul (p, (char **) &p, 10);
	  if (*p == '.')
	    {
	      ++p;
	      if (*p == '*')
		{
		  ++p;
		  total_width += abs (va_arg (ap, int));
		}
	      else
	      total_width += strtoul (p, (char **) &p, 10);
	    }
	  while (strchr ("hlL", *p))
	    ++p;
	  /* Should be big enough for any format specifier except %s and floats.  */
	  total_width += 30;
	  switch (*p)
	    {
	    case 'd':
	    case 'i':
	    case 'o':
	    case 'u':
	    case 'x':
	    case 'X':
	    case 'c':
	      (void) va_arg (ap, int);
	      break;
	    case 'f':
	    case 'e':
	    case 'E':
	    case 'g':
	    case 'G':
	      (void) va_arg (ap, double);
	      /* Since an ieee double can have an exponent of 307, we'll
		 make the buffer wide enough to cover the gross case. */
	      total_width += 307;
	      break;
	    case 's':
	      total_width += strlen (va_arg (ap, char *));
	      break;
	    case 'p':
	    case 'n':
	      (void) va_arg (ap, char *);
	      break;
	    }
	  p++;
	}
    }
	return total_width;
}

Int4 VPLP_format( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_format( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	V_Object	object = NULL;
	Int1		*workString = NULL;
	Nat4		workSize = 0;
	Int1		*formatString = NULL;
	Nat4		counter = 0;
	char		*argList = NULL;

	long			tempInt = 0;
	VPL_InputList	tempInputList;
	Nat4			*inputSizes = NULL;
	Nat4			inarity = primInArity - 1;
	V_Input			tempInput = NULL;
	Nat4			*parameterArea = NULL;
	Nat4			gprCounter = 0;

	Int1		*primName = "format";
	Int4		result = kNOERROR;
	
#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArityMin(environment,primName, primInArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kString,0,primName, primitive, environment );
	if( result != kNOERROR ) return result;

#endif

	object = VPLPrimGetInputObject(0,primitive,environment);
	formatString = ((V_String)object)->string;
	
	if(inarity>0){

	tempInputList.inputs = VPXMALLOC(inarity,V_Input);
	inputSizes = VPXMALLOC(inarity,Nat4);

	gprCounter = 0;
	for(counter = 0; counter < inarity; counter++){
		tempInput = VPXMALLOC(1,VPL_Input);
		tempInputList.inputs[counter] = tempInput;
		object = VPLPrimGetInputObject(counter+1,primitive,environment);
		if(object == NULL){
			tempInput->inputInt = 0;
		}else{
			switch(object->type){
				case kBoolean:	tempInput->inputInt = (long) ((V_Boolean) object)->value; inputSizes[counter] = 4; break;
				case kInteger:	tempInput->inputInt = (long) ((V_Integer) object)->value; inputSizes[counter] = 4; break;
				case kReal:		tempInput->inputDouble = (double) ((V_Real) object)->value; inputSizes[counter] = 8; break;
				case kString:	tempInput->inputInt = (long) ((V_String) object)->string; inputSizes[counter] = 4; break;
				case kExternalBlock:	tempInput->inputInt = (long) ((V_ExternalBlock) object)->blockPtr; inputSizes[counter] = 4; break;
						
				default:
					record_error("extprocedure: IntegerType input is not integer nor real! - ",primName,kWRONGINPUTTYPE,environment);
					record_fault(environment,kIncorrectType,primName,"NULL","NULL","NULL");
					return kHalt;
				break;
			}
		}
		if(inputSizes[counter] == 4){
			gprCounter++;
		} else {
			gprCounter++;
			gprCounter++;
		}
	}
	
	parameterArea = VPXMALLOC(gprCounter,Nat4);
	gprCounter = 0;		
	for(counter = 0; counter < inarity; counter++){
		tempInput = tempInputList.inputs[counter];
		if(inputSizes[counter] == 4){
			tempInt = tempInput->inputInt;
			*(parameterArea + gprCounter++) = tempInt;
		} else {
			tempInt = *(Nat4 *) &tempInput->inputDouble;
			*(parameterArea + gprCounter++) = tempInt;
			tempInt = *( (Nat4 *) &tempInput->inputDouble + 1);
			*(parameterArea + gprCounter++) = tempInt;
		}
	}

	}

	for(counter = 0; counter < inarity; counter++){
		X_free(tempInputList.inputs[counter]);
	}
	X_free(tempInputList.inputs);
	X_free(inputSizes);
	
	argList = (char *) parameterArea;
	
	workSize = format_size(formatString,argList);
	
	workString = VPXMALLOC(workSize+1,Int1);
				
	vsnprintf(workString,workSize,formatString,argList);
	
	VPLPrimSetOutputObjectString(environment,primInArity,0,primitive, workString);
	
	*trigger = kSuccess;	
	return kNOERROR;
}

Int4 VPLP__22_bytes_22_( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP__22_bytes_22_( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive ){
	return VPLP_byte_2D_length(environment,trigger,primInArity,primOutArity,primitive);
}

Int4 VPLP_string_2D_to_2D_bytes( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_string_2D_to_2D_bytes( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive ){
	return VPLP_to_2D_ascii(environment,trigger,primInArity,primOutArity,primitive);
}

Int4 VPLP_bytes_2D_to_2D_string( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_bytes_2D_to_2D_string( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive ){
	return VPLP_from_2D_ascii(environment,trigger,primInArity,primOutArity,primitive);
}



Nat4	loadPrimitives_VPX_PrimitivesString(V_Environment environment,char *bundleID);
Nat4	loadPrimitives_VPX_PrimitivesString(V_Environment environment,char *bundleID)
{
        V_ExtPrimitive	result = NULL;
        V_Dictionary	dictionary = environment->externalPrimitivesTable;
       
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"\"bytes\"",dictionary,1,1,VPLP__22_bytes_22_)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"byte-length",dictionary,1,1,VPLP_byte_2D_length)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"byte-in",dictionary,2,1,VPLP_byte_2D_in)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"byte-middle",dictionary,3,1,VPLP_byte_2D_middle)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"byte-prefix",dictionary,2,2,VPLP_byte_2D_prefix)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"byte-suffix",dictionary,2,2,VPLP_byte_2D_suffix)) == NULL) return kERROR;

        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"\"reverse\"",dictionary,1,1,VPLP__22_reverse_22_)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"integer-to-string",dictionary,1,1,VPLP_integer_2D_to_2D_string)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"string-to-integer",dictionary,1,1,VPLP_string_2D_to_2D_integer)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"string-to-base",dictionary,2,2,VPLP_string_2D_to_2D_base)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"\"in\"",dictionary,2,1,VPLP__22_in_22_)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"\"join\"",dictionary,2,1,VPLP__22_join_22_)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"join-text",dictionary,2,1,VPLP_join_2D_text)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"\"length\"",dictionary,1,1,VPLP__22_length_22_)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"to-string",dictionary,1,1,VPLP_to_2D_string)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"from-string",dictionary,1,1,VPLP_from_2D_string)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"middle",dictionary,3,1,VPLP_middle)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"prefix",dictionary,2,2,VPLP_prefix)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"suffix",dictionary,2,2,VPLP_suffix)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"from-ascii",dictionary,1,1,VPLP_from_2D_ascii)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"to-ascii",dictionary,1,1,VPLP_to_2D_ascii)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"is-alnum",dictionary,1,0,VPLP_is_2D_alnum)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"uppercase",dictionary,1,1,VPLP_uppercase)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"lowercase",dictionary,1,1,VPLP_lowercase)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"pointer-to-string",dictionary,1,1,VPLP_pointer_2D_to_2D_string)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"string-to-pointer",dictionary,1,1,VPLP_string_2D_to_2D_pointer)) == NULL) return kERROR;
        
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"bytes-to-string",dictionary,1,1,VPLP_bytes_2D_to_2D_string)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"string-to-bytes",dictionary,1,1,VPLP_string_2D_to_2D_bytes)) == NULL) return kERROR;

        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"format",dictionary,2,1,VPLP_format)) == NULL) return kERROR;

        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"log-error",dictionary,1,0,VPLP_log_2D_error)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"log-string",dictionary,1,0,VPLP_log_2D_string)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"log-string-return",dictionary,1,0,VPLP_log_2D_string_2D_return)) == NULL) return kERROR;

        return kNOERROR;

}

Nat4	load_VPX_PrimitivesString(V_Environment environment,char *bundleID);
Nat4	load_VPX_PrimitivesString(V_Environment environment,char *bundleID)
{
		Nat4	result = 0;
		
		result = loadConstants_VPX_PrimitivesString(environment,bundleID);
		result = loadStructures_VPX_PrimitivesString(environment,bundleID);
		result = loadProcedures_VPX_PrimitivesString(environment,bundleID);
		result = loadPrimitives_VPX_PrimitivesString(environment,bundleID);
		
		return result;
}

