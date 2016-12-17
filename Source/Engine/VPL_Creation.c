/*
	
	VPL_Creation.c
	Copyright 2000 Scott B. Anderson, All Rights Reserved.
	
*/

#include "VPL_Creation.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include <CoreServices/CoreServices.h>

enum typeMode {
	tNotDefined,
	tInteger,
	tReal,
	tString,
	tStringStart,
	tStringContinue,
	tStringStop,
	tTrue,
	tFalse,
	tList,
	tStopList,
	tInstance,
	tStopInstance,
	tUndefined,
	tNone,
	tNull,
	tMinus,
	tCharCode1,
	tCharCode2,
	tCharCode3,
	tCharCode4,
	tCharCode5,
	tCharCode6,
	tEscape,
	tBaseInteger
};

typedef struct VPL_ObjectNode  *V_ObjectNode;
typedef struct VPL_ObjectNode
{
	V_Object		object;
	V_ObjectNode	previous;
}	VPL_ObjectNode;

int isdelimiter(char character);
int isdelimiter(char character)
{
	if(character == ' ' || character == '(' || character == ')' ) return 1;
	else return 0;
}

enum typeMode  delimiterMode(char character);
enum typeMode  delimiterMode(char character)
{
	if(character == '(') return tList;
	if(character == ')') return tStopList;
	else return tNotDefined;
}

Int1 *object_to_string( V_Object object , V_Environment environment )
{

	V_List		tempList = NULL;
	V_Instance	tempInstance = NULL;
	V_ExternalBlock	tempBlock = NULL;
	Nat4		length = 0;
	Nat4		stringLength = 0;
	Nat4		counter = 0;
	V_Object	*objectList = NULL;
	Int1		*tempCString = NULL;
	Int1		*tempOString = NULL;
	Int1		*tempTString = NULL;

	if(object == NULL){
		tempCString = new_string("NULL",environment);
	} else {
		switch( object->type ) {
			case kObject:
				tempCString = new_string("OBJECT",environment);
				break;
			case kNone:
				tempCString = new_string("NONE",environment);
				break;
			case kUndefined:
				tempCString = new_string("UNDEFINED",environment);
				break;
			case kBoolean:
				if(((V_Boolean)object)->value == kTRUE) tempCString = new_string("TRUE",environment); 
				else if (((V_Boolean)object)->value == kFALSE) tempCString = new_string("FALSE",environment);
				else record_error("Invalid Boolean value!","Module",kERROR,environment); 
				break;
			case kInteger:
				tempCString = integer2string( ((V_Integer)object)->value );
				break;
			case kReal:
				tempCString = real2string( ((V_Real)object)->value );
				break;
			case kString:
/*
				tempCString = ((V_String)object)->string;
				tempCString = (Int1 *) X_malloc(strlen(tempOString)+3);
				tempCString[0] = '\"';
				tempCString[1] = '\0';
				tempCString = strcat(tempOString,((V_String)object)->string);
				tempCString = strcat(tempOString,"\"");
*/
				tempCString = new_string( ((V_String)object)->string ,environment);
				break;
			case kList: /* ToDo: The following two cases should use a single memory allocation instead of X_malloc/strcpy/strcat */
				tempList = (V_List) object;
				length = tempList->listLength;
				objectList = tempList->objectList;
				tempCString = new_string( "( " ,environment);
				for(counter = 0;counter<length;counter++){
					tempOString = object_to_string(objectList[counter],environment);
					stringLength = strlen(tempOString);
					stringLength += strlen(tempCString);
					tempTString = (Int1 *)X_malloc((stringLength+2)*sizeof(Int1));
					tempTString = strcpy(tempTString,tempCString);
					tempTString = strcat(tempTString,tempOString);
					tempTString[stringLength] = ' ';
					tempTString[stringLength+1] = '\0';
					X_free(tempOString);
					X_free(tempCString);
					tempCString = tempTString;
				}
				stringLength = strlen(tempCString);
				tempTString = (Int1 *)X_malloc((stringLength+2)*sizeof(Int1));
				tempTString = strcpy(tempTString,tempCString);
				tempTString = strcat(tempTString,")");
				X_free(tempCString);
				tempCString = tempTString;
				break;
			case kInstance:
				tempInstance = (V_Instance) object;
				stringLength = strlen(tempInstance->name);
				tempTString = (Int1 *)X_malloc((stringLength+3)*sizeof(Int1));
				tempTString[0] = '<';
				tempTString[1] = '\0';
				tempTString = strcat(tempTString,tempInstance->name);
				tempTString[stringLength+1] = '>';
				tempTString[stringLength+2] = '\0';
				X_free(tempCString);
				tempCString = tempTString;
				break;
			case kExternalBlock:
//				tempCString = new_string("BLOCK",environment);
				
				tempBlock = (V_ExternalBlock) object;
				
				stringLength = strlen( tempBlock->name );
				stringLength += tempBlock->levelOfIndirection;
				stringLength += ( 1 + 8 + 1 );  // @FFFFFFFF + 0
				
				tempOString = (Int1*)X_malloc( tempBlock->levelOfIndirection + 1 );
				switch (tempBlock->levelOfIndirection) {
					case 1:
						tempOString[0] = '*';
						tempOString[1] = 0;
						counter = *(Nat4*)tempBlock->blockPtr;
						break;
					case 2:
						tempOString[0] = '*';
						tempOString[1] = '*';
						tempOString[2] = 0;
						counter = **(Nat4**)tempBlock->blockPtr;
						break;
					default:
						tempOString[0] = 0;
						counter = (Nat4)tempBlock->blockPtr;
						break;		
				}
				
				tempCString = (Int1*)X_malloc( stringLength*sizeof(Int1) );
				sprintf( tempCString, "%s%s@%08X", tempBlock->name, tempOString, (unsigned int) counter );
				
				X_free( tempOString );
				
				break;
			default:
				tempCString = new_string("DEFAULT",environment);
				break;
		}
	}

	return tempCString;
}

V_Object string_to_object( Int1 *tempString , V_Environment environment )
{
	V_ObjectNode	list = NULL;
	V_ObjectNode	tempNode = NULL;
	V_Object	object = NULL;
	V_List		tempList = NULL;
	Int1		*tempBuffer = NULL;
	Nat4		length = 0;
	Nat4		index = 0;
	Nat4		counter = 0;
	Nat4		mode = 0;
	char		tempChar = '\0';
	Bool		stringStart = kFALSE;
	Nat4		tempCharCode = 0;
	Nat4		tempCodeCount = 0;
	Int4		tempInteger = 0;
	Int4		checkInteger = 0;
	Int4		integerBase = 10;
	Bool		wentMinus = kFALSE;
	Nat4		hashPosition = 0;

	if(tempString == NULL) return NULL;
	length = strlen(tempString);
	if(length == 0){
		object = (V_Object) create_string("",environment);
		return object;
	}

/* It is not clear that this produces any performance improvement! */

	if(strcmp("NULL",tempString) == 0){
		return NULL;
	}

	tempBuffer = (Int1 *)X_malloc((length+1)*sizeof(Int1));
	mode = tNotDefined;
	index = 0;
	
	for(counter = 0; counter < length; counter++){
	
		tempChar = tempString[counter];
		
		switch(mode){
			case tNotDefined:
				if(isdigit(tempChar) != 0){
					mode = tInteger;
					tempBuffer[index++] = tempString[counter];
				} else if(tempChar == '.'){
					mode = tReal;
					tempBuffer[index++] = tempString[counter];
				} else if(tempChar == '-'){
					mode = tMinus;
					tempBuffer[index++] = tempString[counter];
				} else if(tempChar == ' '){
					continue;
				} else if(tempChar == '\"'){
					mode = tString;
					stringStart = kTRUE;
				} else if(tempChar == '\''){
					mode = tCharCode1;
					tempBuffer[index++] = tempString[counter];
					tempCodeCount = 0;
				} else if(tempChar == 'N' && tempString[counter+1] == 'U' && tempString[counter+2] == 'L' && tempString[counter+3] == 'L' ){
					mode = tNull;
					tempBuffer[index++] = tempString[counter++];
					tempBuffer[index++] = tempString[counter++];
					tempBuffer[index++] = tempString[counter++];
					tempBuffer[index++] = tempString[counter];
				} else if(tempChar == 'N' && tempString[counter+1] == 'O' && tempString[counter+2] == 'N' && tempString[counter+3] == 'E' ){
					mode = tNone;
					tempBuffer[index++] = tempString[counter++];
					tempBuffer[index++] = tempString[counter++];
					tempBuffer[index++] = tempString[counter++];
					tempBuffer[index++] = tempString[counter];
				} else if(tempChar == 'T' && tempString[counter+1] == 'R' && tempString[counter+2] == 'U' && tempString[counter+3] == 'E' ){
					mode = tTrue;
					tempBuffer[index++] = tempString[counter++];
					tempBuffer[index++] = tempString[counter++];
					tempBuffer[index++] = tempString[counter++];
					tempBuffer[index++] = tempString[counter];
				} else if(tempChar == 'F' && tempString[counter+1] == 'A' && tempString[counter+2] == 'L' && tempString[counter+3] == 'S'  && tempString[counter+4] == 'E' ){
					mode = tFalse;
					tempBuffer[index++] = tempString[counter++];
					tempBuffer[index++] = tempString[counter++];
					tempBuffer[index++] = tempString[counter++];
					tempBuffer[index++] = tempString[counter++];
					tempBuffer[index++] = tempString[counter];
				} else if(				 tempChar == 'U' && tempString[counter+1] == 'N' && tempString[counter+2] == 'D' && tempString[counter+3] == 'E' &&
							tempString[counter+4] == 'F' && tempString[counter+5] == 'I' && tempString[counter+6] == 'N' && tempString[counter+7] == 'E' &&
							tempString[counter+8] == 'D'){
					mode = tUndefined;
					tempBuffer[index++] = tempString[counter++];
					tempBuffer[index++] = tempString[counter++];
					tempBuffer[index++] = tempString[counter++];
					tempBuffer[index++] = tempString[counter++];
					tempBuffer[index++] = tempString[counter++];
					tempBuffer[index++] = tempString[counter++];
					tempBuffer[index++] = tempString[counter++];
					tempBuffer[index++] = tempString[counter++];
					tempBuffer[index++] = tempString[counter];
				} else{
					mode = tString;
					tempBuffer[index++] = tempString[counter];
				}
				break;
			case tCharCode1:
				if(isprint(tempChar) != 0){
					tempBuffer[index++] = tempString[counter];
					mode = tCharCode2;
					tempCodeCount++;
				} else{
					mode = tString;
					tempBuffer[index++] = tempString[counter];
				}
				break;
			case tCharCode2:
				if(tempChar == '\''){
					tempBuffer[index++] = tempString[counter];
					mode = tCharCode6;
				} else if(isprint(tempChar) != 0){
					tempBuffer[index++] = tempString[counter];
					mode = tCharCode3;
					tempCodeCount++;
				} else{
					mode = tString;
					tempBuffer[index++] = tempString[counter];
				}
				break;
			case tCharCode3:
				if(tempChar == '\''){
					tempBuffer[index++] = tempString[counter];
					mode = tCharCode6;
				} else if(isprint(tempChar) != 0){
					tempBuffer[index++] = tempString[counter];
					mode = tCharCode4;
					tempCodeCount++;
				} else{
					mode = tString;
					tempBuffer[index++] = tempString[counter];
				}
				break;
			case tCharCode4:
				if(tempChar == '\''){
					tempBuffer[index++] = tempString[counter];
					mode = tCharCode6;
				} else if(isprint(tempChar) != 0){
					tempBuffer[index++] = tempString[counter];
					mode = tCharCode5;
					tempCodeCount++;
				} else{
					mode = tString;
					tempBuffer[index++] = tempString[counter];
				}
				break;
			case tCharCode5:
				if(tempChar == '\''){
					tempBuffer[index++] = tempString[counter];
					mode = tCharCode6;
				} else{
					mode = tString;
					tempBuffer[index++] = tempString[counter];
				}
				break;
			case tCharCode6:
				if(isdelimiter(tempChar) != 0){

					if ( tempCodeCount == 1 ) tempCharCode = tempBuffer[1];
					else if ( tempCodeCount == 2 ) tempCharCode = (tempBuffer[1] << 8) + tempBuffer[2];
					else if ( tempCodeCount == 3 ) tempCharCode = (tempBuffer[1] << 16) + (tempBuffer[2] << 8) + tempBuffer[3];
					else if ( tempCodeCount == 4 ) tempCharCode = (tempBuffer[1] << 24) + (tempBuffer[2] << 16) + (tempBuffer[3] << 8) + tempBuffer[4];
					else tempCharCode = 0;

					tempNode = list;
					list = (V_ObjectNode) X_malloc(sizeof (VPL_ObjectNode));
					list->previous = tempNode;
					list->object = (V_Object) int_to_integer(tempCharCode,environment);
					index = 0;
					mode = tNotDefined;
				} else{
					mode = tString;
					tempBuffer[index++] = tempString[counter];
				}
				break;
			case tNull:
				if(isdelimiter(tempChar) != 0){
					tempNode = list;
					list = (V_ObjectNode) X_malloc(sizeof (VPL_ObjectNode));
					list->previous = tempNode;
					list->object = NULL;
					index = 0;
					mode = tNotDefined;
				} else{
					mode = tString;
					tempBuffer[index++] = tempString[counter];
				}
				break;
			case tUndefined:
				if(isdelimiter(tempChar) != 0){
					tempNode = list;
					list = (V_ObjectNode) X_malloc(sizeof (VPL_ObjectNode));
					list->previous = tempNode;
					list->object = (V_Object) create_undefined(environment);
					index = 0;
					mode = tNotDefined;
				} else{
					mode = tString;
					tempBuffer[index++] = tempString[counter];
				}
				break;
			case tNone:
				if(isdelimiter(tempChar) != 0){
					tempNode = list;
					list = (V_ObjectNode) X_malloc(sizeof (VPL_ObjectNode));
					list->previous = tempNode;
					list->object = (V_Object) create_none(environment);
					index = 0;
					mode = tNotDefined;
				} else{
					mode = tString;
					tempBuffer[index++] = tempString[counter];
				}
				break;
			case tTrue:
				if(isdelimiter(tempChar) != 0){
					tempNode = list;
					list = (V_ObjectNode) X_malloc(sizeof (VPL_ObjectNode));
					list->previous = tempNode;
					list->object = (V_Object) create_boolean("TRUE",environment);
					index = 0;
					mode = tNotDefined;
				} else{
					mode = tString;
					tempBuffer[index++] = tempString[counter];
				}
				break;
			case tFalse:
				if(isdelimiter(tempChar) != 0){
					tempNode = list;
					list = (V_ObjectNode) X_malloc(sizeof (VPL_ObjectNode));
					list->previous = tempNode;
					list->object = (V_Object) create_boolean("FALSE",environment);
					index = 0;
					mode = tNotDefined;
				} else{
					mode = tString;
					tempBuffer[index++] = tempString[counter];
				}
				break;
			case tMinus:
				if(isdelimiter(tempChar) != 0){
					tempNode = list;
					tempBuffer[index] = '\0';
					list = (V_ObjectNode) X_malloc(sizeof (VPL_ObjectNode));
					list->previous = tempNode;
					list->object = (V_Object) create_string(tempBuffer,environment);
					index = 0;
					mode = tNotDefined;
				} else if(isdigit(tempChar) != 0){
					mode = tInteger;
					tempBuffer[index++] = tempString[counter];
				} else{
					mode = tString;
					tempBuffer[index++] = tempString[counter];
				}
				break;
			case tInteger:
				if(isdelimiter(tempChar) != 0){
					tempNode = list;
					tempBuffer[index] = '\0';
					list = (V_ObjectNode) X_malloc(sizeof (VPL_ObjectNode));
					list->previous = tempNode;
					list->object = (V_Object) create_integer(tempBuffer,environment);
					index = 0;
					mode = tNotDefined;
				} else if(isdigit(tempChar) != 0){
					tempBuffer[index++] = tempString[counter];
				} else if(tempChar == '.'){
					mode = tReal;
					tempBuffer[index++] = tempString[counter];
				} else if(tempChar == '#'){ 
					mode = tBaseInteger;
					tempBuffer[index] = '\0';
					integerBase = (Int4)atoi(tempBuffer);
					if (integerBase < 0 ) {
						integerBase = -integerBase;
						wentMinus = kTRUE;
					}
					tempBuffer[index++] = '#';
					if ((integerBase < 2) || (integerBase > 36)){
						wentMinus = kFALSE;
						mode = tString;
						tempBuffer[index++] = tempString[counter];
					}
				} else{
					mode = tString;
					tempBuffer[index++] = tempString[counter];
				}
				break;
			case tBaseInteger:
				if(isdelimiter(tempChar) != 0){
					tempBuffer[index] = '\0';
					hashPosition = strcspn(tempBuffer,"#");
					checkInteger = (Int4)atol(tempBuffer+hashPosition+1);
					tempInteger = (Int4)strtol(tempBuffer+hashPosition+1, NULL, (int)integerBase);
					if ( ((checkInteger != 0) || (strlen(tempBuffer+hashPosition+1) > 0)) && ( tempInteger == 0 ) ){
						tempNode = list;
						list = (V_ObjectNode) X_malloc(sizeof (VPL_ObjectNode));
						list->previous = tempNode;
						list->object = (V_Object) create_string(tempBuffer,environment);
						index = 0;
						mode = tNotDefined;
					} else {
						if (wentMinus == kTRUE ){
							tempInteger = -tempInteger;
							wentMinus = kFALSE;
						}
                                        
						tempNode = list;
						list = (V_ObjectNode) X_malloc(sizeof (VPL_ObjectNode));
						list->previous = tempNode;
						list->object = (V_Object) int_to_integer(tempInteger,environment);
						index = 0;
						mode = tNotDefined;
					}
				} else if((isdigit(tempChar) != 0) || (isalpha(tempChar) != 0 )){
					tempBuffer[index++] = tempString[counter];
				} else {
					mode = tString;
					tempBuffer[index++] = tempString[counter];
				}
				break;
			case tReal:
				if(isdelimiter(tempChar) != 0){
					tempNode = list;
					tempBuffer[index] = '\0';
					list = (V_ObjectNode) X_malloc(sizeof (VPL_ObjectNode));
					list->previous = tempNode;
					list->object = (V_Object) create_real(tempBuffer,environment);
					index = 0;
					mode = tNotDefined;
				} else if(isdigit(tempChar) != 0){
					tempBuffer[index++] = tempString[counter];
				} else{
					mode = tString;
					tempBuffer[index++] = tempString[counter];
				}
				break;
			case tString:
				if(isdelimiter(tempChar) != 0 && stringStart == kFALSE){
					tempNode = list;
					tempBuffer[index] = '\0';
					list = (V_ObjectNode) X_malloc(sizeof (VPL_ObjectNode));
					list->previous = tempNode;
					list->object = (V_Object) create_string(tempBuffer,environment);
					index = 0;
					mode = tNotDefined;
				} else {
					if(tempChar == '\"' && stringStart == kTRUE){
						mode = tEscape;
					} else {
						tempBuffer[index++] = tempString[counter];
					}
				}
				break;
			case tEscape:
				if(isdelimiter(tempChar) != 0){
					tempNode = list;
					tempBuffer[index] = '\0';
					list = (V_ObjectNode) X_malloc(sizeof (VPL_ObjectNode));
					list->previous = tempNode;
					list->object = (V_Object) create_string(tempBuffer,environment);
					index = 0;
					mode = tNotDefined;
					stringStart = kFALSE;
				} else if(tempChar == '\"'){
					mode = tString;
					tempBuffer[index++] = tempString[counter];
				} else{
					mode = tString;
					tempBuffer[index++] = tempString[counter];
					stringStart = kFALSE;
				}
				break;
			default:
				{
					mode = tString;
					tempBuffer[index++] = tempString[counter];
				}
				break;
		}

		if(tempChar == '(' && stringStart == kFALSE){
			tempNode = list;
			list = (V_ObjectNode) X_malloc(sizeof (VPL_ObjectNode));
			list->previous = tempNode;
			list->object = (V_Object) X_malloc(sizeof (VPL_Object));
			(list->object)->type = kObject;
			index = 0;
			mode = tNotDefined;
			continue;
		} else if(tempChar == ')' && stringStart == kFALSE){
			if(list != NULL){
				index = 0;
				tempNode = list;
				while(tempNode != NULL && (tempNode->object == NULL || tempNode->object->type !=  kObject)) {
						tempNode = tempNode->previous;
						index++;
				}
				if(tempNode != NULL && tempNode->object != NULL && tempNode->object->type == kObject){
					tempList = create_list(index,environment);
					while(list->object == NULL || (list->object)->type !=  kObject) {
						index--;
						*(tempList->objectList+index) = list->object;
						tempNode = list->previous;
						X_free(list);
						list = tempNode;
					}
					X_free(list->object);
					list->object = (V_Object) tempList;
					index = 0;
					mode = tNotDefined;
				} else {
					mode = tString;
					tempBuffer[index++] = tempString[counter];
				}
			} else {
				mode = tString;
				tempBuffer[index++] = tempString[counter];
			}
			continue;
		}

	}
		
		switch(mode){
			case tNotDefined:
				break;
			case tNull:
					tempNode = list;
					list = (V_ObjectNode) X_malloc(sizeof (VPL_ObjectNode));
					list->previous = tempNode;
					list->object = NULL;
				break;
			case tUndefined:
					tempNode = list;
					list = (V_ObjectNode) X_malloc(sizeof (VPL_ObjectNode));
					list->previous = tempNode;
					list->object = (V_Object) create_undefined(environment);
				break;
			case tNone:
					tempNode = list;
					list = (V_ObjectNode) X_malloc(sizeof (VPL_ObjectNode));
					list->previous = tempNode;
					list->object = (V_Object) create_none(environment);
				break;
			case tTrue:
					tempNode = list;
					list = (V_ObjectNode) X_malloc(sizeof (VPL_ObjectNode));
					list->previous = tempNode;
					list->object = (V_Object) create_boolean("TRUE",environment);
				break;
			case tFalse:
					tempNode = list;
					list = (V_ObjectNode) X_malloc(sizeof (VPL_ObjectNode));
					list->previous = tempNode;
					list->object = (V_Object) create_boolean("FALSE",environment);
				break;
			case tMinus:
					tempNode = list;
					tempBuffer[index] = '\0';
					list = (V_ObjectNode) X_malloc(sizeof (VPL_ObjectNode));
					list->previous = tempNode;
					list->object = (V_Object) create_string(tempBuffer,environment);
				break;
			case tInteger:
					tempNode = list;
					tempBuffer[index] = '\0';
					list = (V_ObjectNode) X_malloc(sizeof (VPL_ObjectNode));
					list->previous = tempNode;
					list->object = (V_Object) create_integer(tempBuffer,environment);
				break;
			case tBaseInteger:
					tempBuffer[index] = '\0';
					hashPosition = strcspn(tempBuffer,"#");
					checkInteger = (Int4)atol(tempBuffer+hashPosition+1);
					tempInteger = (Int4)strtol(tempBuffer+hashPosition+1, NULL, (int)integerBase);
					if ( ((checkInteger != 0) || (strlen(tempBuffer+hashPosition+1) > 0)) && ( tempInteger == 0 ) ){
						tempNode = list;
						list = (V_ObjectNode) X_malloc(sizeof (VPL_ObjectNode));
						list->previous = tempNode;
						list->object = (V_Object) create_string(tempBuffer,environment);
					} else {
						if (wentMinus == kTRUE ){
							tempInteger = -tempInteger;
							wentMinus = kFALSE;
						}
                                        
						tempNode = list;
						list = (V_ObjectNode) X_malloc(sizeof (VPL_ObjectNode));
						list->previous = tempNode;
						list->object = (V_Object) int_to_integer(tempInteger,environment);
					}
				break;
			case tReal:
					tempNode = list;
					tempBuffer[index] = '\0';
					list = (V_ObjectNode) X_malloc(sizeof (VPL_ObjectNode));
					list->previous = tempNode;
					if(strcmp(tempBuffer,".") == 0) {
						list->object = (V_Object) create_string(tempBuffer,environment);
					} else {
						list->object = (V_Object) create_real(tempBuffer,environment);
					}
				break;
			case tString:
					index = 0;
					while(tempString[index++] == ' '){}
					object = (V_Object) create_string(tempString+index-1,environment);
					while(list != NULL) {
						tempNode = (V_ObjectNode) list->previous;
						decrement_count(environment,list->object);
						X_free(list);
						list = tempNode;
					}
					X_free(tempBuffer);
					return object;
				break;
			case tCharCode6:
				if(tempChar == '\''){

					if ( tempCodeCount == 1 ) tempCharCode = tempBuffer[1];
					else if ( tempCodeCount == 2 ) tempCharCode = (tempBuffer[1] << 8) + tempBuffer[2];
					else if ( tempCodeCount == 3 ) tempCharCode = (tempBuffer[1] << 16) + (tempBuffer[2] << 8) + tempBuffer[3];
					else if ( tempCodeCount == 4 ) tempCharCode = (tempBuffer[1] << 24) + (tempBuffer[2] << 16) + (tempBuffer[3] << 8) + tempBuffer[4];
					else tempCharCode = 0;

					tempNode = list;
					list = (V_ObjectNode) X_malloc(sizeof (VPL_ObjectNode));
					list->previous = tempNode;
					list->object = (V_Object) int_to_integer(tempCharCode,environment);
					index = 0;
					mode = tNotDefined;
				} else{
					mode = tString;
					tempBuffer[index++] = tempString[counter];
				}
				break;
			case tEscape:
					tempNode = list;
					tempBuffer[index] = '\0';
					list = (V_ObjectNode) X_malloc(sizeof (VPL_ObjectNode));
					list->previous = tempNode;
					list->object = (V_Object) create_string(tempBuffer,environment);
				break;
			default:
					record_error("string_to_object: Unrecognized finish for!",tempString,kERROR,environment);
				break;
		}

	X_free(tempBuffer);
	if(list != NULL && list->previous == NULL){
		object = list->object;
		X_free(list);
	} else {
		object = (V_Object) create_string(tempString,environment);
		while(list != NULL) {
			tempNode = (V_ObjectNode) list->previous;
			decrement_count(environment,list->object);
			X_free(list);
			list = tempNode;
		}
	}

	
	return object;
}

V_Undefined create_undefined(V_Environment environment)
{
	V_Undefined ptrA = VPXMALLOC(1,VPL_Undefined);
	if(ptrA == NULL) {
		record_error("Create UNDEFINED failure","Module",kERROR,environment);
		return NULL;
	}
	ptrA->instanceIndex = 0;
	ptrA->system = 0;
	ptrA->mark = 0;
	ptrA->type = kUndefined;
	addToHeap((V_Object) ptrA,environment);

	return ptrA;
}

V_None create_none(V_Environment environment)
{
	V_None ptrA = VPXMALLOC(1,VPL_None);
	if(ptrA == NULL) {
		record_error("Create NONE failure","Module",kERROR,environment);
		return NULL;
	}
	ptrA->instanceIndex = 0;
	ptrA->system = 0;
	ptrA->mark = 0;
	ptrA->type = kNone;
	addToHeap((V_Object) ptrA,environment);

	return ptrA;
}

V_Boolean create_boolean( Int1 *string, V_Environment environment )
{
	V_Boolean ptrA = VPXMALLOC(1,VPL_Boolean);
	if(ptrA == NULL) {
		record_error("Create BOOLEAN failure","Module",kERROR,environment);
		return NULL;
	}
	ptrA->instanceIndex = 0;
	ptrA->system = 0;
	ptrA->mark = 0;
	ptrA->type = kBoolean;
	addToHeap((V_Object) ptrA,environment);
	if(0 == strcmp(string,"TRUE") ) ptrA->value = kTRUE;
	else if(0 == strcmp(string,"FALSE") ) ptrA->value = kFALSE;
	else {
		record_error("Invalid value for Boolean!","Module",kERROR,environment);
		X_free(ptrA);
		ptrA = NULL;
	}
	return ptrA;
}

V_Boolean bool_to_boolean( Bool aValue, V_Environment environment )
{
	V_Boolean ptrA = VPXMALLOC(1,VPL_Boolean);
	if(ptrA == NULL) {
		record_error("Create BOOLEAN failure","Module",kERROR,environment);
		return NULL;
	}
	ptrA->instanceIndex = 0;
	ptrA->system = 0;
	ptrA->mark = 0;
	ptrA->type = kBoolean;
	addToHeap((V_Object) ptrA,environment);
	ptrA->value = aValue;

	return ptrA;
}

V_Integer create_integer( Int1 *string , V_Environment environment)
{
	return int_to_integer(atoi(string),environment);
}

V_Integer int_to_integer( Int4 value , V_Environment environment)
{
	V_Integer ptrA = VPXMALLOC(1,VPL_Integer);
	if(ptrA == NULL) {
		record_error("Create INTEGER failure","Module",kERROR,environment);
		return NULL;
	}
	ptrA->instanceIndex = 0;
	ptrA->system = 0;
	ptrA->mark = 0;
	ptrA->type = kInteger;
	addToHeap((V_Object) ptrA,environment);
	ptrA->value = value;
	return ptrA;
}

V_Real create_real( Int1 *string , V_Environment environment)
{
	V_Real ptrA = VPXMALLOC(1,VPL_Real);
	if(ptrA == NULL) {
		record_error("Create REAL failure","Module",kERROR,environment);
		return NULL;
	}
	ptrA->instanceIndex = 0;
	ptrA->system = 0;
	ptrA->mark = 0;
	ptrA->type = kReal;
	addToHeap((V_Object) ptrA,environment);
	ptrA->value = atof(string);
	return ptrA;
}

V_Real float_to_real( Real10 value , V_Environment environment)
{
	V_Real ptrA = VPXMALLOC(1,VPL_Real);
	if(ptrA == NULL) {
		record_error("Create REAL failure","Module",kERROR,environment);
		return NULL;
	}
	ptrA->instanceIndex = 0;
	ptrA->system = 0;
	ptrA->mark = 0;
	ptrA->type = kReal;
	addToHeap((V_Object) ptrA,environment);
	ptrA->value = value;
	return ptrA;
}

V_String create_string( Int1 *string , V_Environment environment)
{
	V_String ptrA = VPXMALLOC(1,VPL_String);
	if(ptrA == NULL) {
		record_error("Create STRING failure","Module",kERROR,environment);
		return NULL;
	}
	ptrA->instanceIndex = 0;
	ptrA->system = 0;
	ptrA->mark = 0;
	ptrA->type = kString;
	addToHeap((V_Object) ptrA,environment);
	ptrA->length = strlen(string);
	ptrA->string = (Int1 *)X_malloc((ptrA->length+1)*sizeof(Int1));
	strcpy(ptrA->string,string);
	return ptrA;
}

V_String install_string( Int1 *string , V_Environment environment)
{
	V_String ptrA = VPXMALLOC(1,VPL_String);
	if(ptrA == NULL) {
		record_error("Create STRING failure","Module",kERROR,environment);
		return NULL;
	}
	ptrA->instanceIndex = 0;
	ptrA->system = 0;
	ptrA->mark = 0;
	ptrA->type = kString;
	addToHeap((V_Object) ptrA,environment);
	ptrA->length = strlen(string);
	ptrA->string = string;
	return ptrA;
}

V_ExternalBlock create_externalBlock( Int1 *name,Nat4 size, V_Environment environment )
{
	V_ExternalBlock	ptrA = VPXMALLOC(1,VPL_ExternalBlock);
	if(ptrA == NULL) {
		record_error("Create EXTERNALBLOCK failure","Module",kERROR,environment);
		return NULL;
	}
	ptrA->instanceIndex = 0;
	ptrA->system = 0;
	ptrA->mark = 0;
	ptrA->type = kExternalBlock;
	addToHeap((V_Object) ptrA,environment);
	ptrA->name = new_string(name,environment);
	ptrA->size = size;
	ptrA->levelOfIndirection = 0;
	ptrA->blockFreeProcPtr = NULL;

	return ptrA;
}

V_ExternalBlock pointer_to_block( Int1 *name, Nat4 size , Nat4 level , Nat4 tempInt , V_Environment environment)
{
	V_ExternalBlock	ptrA = NULL;
	Nat4			*tempPointer = NULL;

	if(!tempInt) return NULL;
	
	ptrA = create_externalBlock(name,size,environment);
	tempPointer = (Nat4 *) X_malloc(sizeof(Nat4));

	if(ptrA == NULL) {
		record_error("Create POINTER TO BLOCK failure","Module",kERROR,environment);
		return NULL;
	}
	*((Nat4 *)tempPointer) = tempInt;
	ptrA->levelOfIndirection = level;
	ptrA->blockPtr = tempPointer;
	return ptrA;
}


V_ExternalBlock create_externalBlock_level( Int1 *name, Nat4 size, Nat4 level, void *dataPtr, Bool escalated, V_Environment environment )
{
	Nat4	*outputPtr;
	Nat4	*blockPtr;
	Nat4	*pointerPtr;
	Nat4	*handlePtr;
	Nat1	sysFlags = escalated ? kSystemEscalated : 0;
	
	V_ExternalBlock	ptrA = VPXMALLOC(1,VPL_ExternalBlock);
	if(ptrA == NULL) goto BAIL;
		
	if( dataPtr == NULL ) {
		blockPtr = (void *) X_calloc(1,size);
		if(blockPtr == NULL ) goto BAIL;
	} else blockPtr = dataPtr;

	if( level == 0 ) outputPtr = blockPtr;			// kvpl_BlockLevelBlock
	else if( level == 1 ) {							// kvpl_BlockLevelPointer
		pointerPtr = (void *) X_calloc(1,size);
		if(pointerPtr == NULL ) goto BAIL;

		*pointerPtr = (Nat4)blockPtr;
		outputPtr = pointerPtr;
		sysFlags |= kSystemIndirection;
	} else if( level == 2 ) {						// kvpl_BlockLevelHandle
		pointerPtr = (void *) X_calloc(1,size);
		if(pointerPtr == NULL ) goto BAIL;

		*pointerPtr = (Nat4)blockPtr;
		handlePtr = (void *) X_calloc(1,size);
		if(handlePtr == NULL ) goto BAIL;

		*handlePtr = (Nat4)pointerPtr;
		outputPtr = handlePtr;
		sysFlags |= kSystemIndirection;
	} else goto BAIL;
			
	ptrA->instanceIndex = 0;
	ptrA->system = 0;
	ptrA->mark = 0;
	ptrA->type = kExternalBlock;
	addToHeap((V_Object) ptrA,environment);
	ptrA->name = new_string(name,environment);
	ptrA->size = size;
	ptrA->levelOfIndirection = level;
	ptrA->blockPtr = outputPtr;
	ptrA->blockFreeProcPtr = NULL;
	
	ptrA->system |= sysFlags;
//	printf("block basic create!  System:%d\n", ptrA->system);
	return ptrA;
	
BAIL:
	record_error("Create EXTERNALBLOCK failure","",kERROR,environment);
	
	if( handlePtr != NULL ) X_free( handlePtr );
	if( pointerPtr != NULL ) X_free( pointerPtr );
	if( blockPtr != NULL ) X_free( blockPtr );
	if( ptrA != NULL ) X_free( ptrA );
	return NULL;
}

V_List create_list( Nat4 length , V_Environment environment )
{
	V_List ptrA = VPXMALLOC(1,VPL_List);
	if(ptrA == NULL) {
		record_error("Create LIST failure","Module",kERROR,environment);
		return NULL;
	}
	ptrA->instanceIndex = 0;
	ptrA->system = 0;
	ptrA->mark = 0;
	ptrA->type = kList;
	if(length != 0){
		ptrA->objectList = (V_Object *) calloc(length,sizeof (V_Object));
		memset(ptrA->objectList,0,length*sizeof(V_Object));
	}else{
		ptrA->objectList = NULL;
	}
	ptrA->listLength = length;
	addToHeap((V_Object) ptrA,environment);
	
	return ptrA;
}

V_List clone_list( Nat4 fromOffset, Nat4 toOffset, V_List fromList, Nat4 length , V_Environment environment )
{
	Nat4 fromCounter = 0;
	Nat4 toCounter = 0;
	V_List ptrA = create_list( length , environment); /* Create object, add to heap, set refcount */
	
	if(ptrA == NULL) return NULL;
	for( fromCounter = fromOffset, toCounter = toOffset; (fromCounter < fromList->listLength) && (toCounter < length); fromCounter++,toCounter++){
		put_nth(environment,ptrA,toCounter+1, *(fromList->objectList+fromCounter)); /* Insert and increment refcount */
	}
	
	return ptrA;
}

V_List join_list(V_Environment environment, V_List listA, V_List listB)
{
	V_List		tempList = NULL;
	Nat4		lengthA = 0;
	Nat4		lengthB = 0;
	Nat4		counter = 0;
	V_Object	object = NULL;
	
	if(listA == NULL && listB == NULL){
		return NULL;
	} else if (listA != NULL && listB == NULL){
		tempList = clone_list( 0, 0, listA,listA->listLength,environment);	/* Clone list from 1->N into 1->N */
	} else if (listA == NULL && listB != NULL){
		tempList = clone_list( 0, 0, listB,listB->listLength,environment);	/* Clone list from 1->N into 1->N */
	} else {
		lengthA = listA->listLength;
		lengthB = listB->listLength;
		tempList = clone_list( 0, 0, listA,lengthA + lengthB,environment);	/* Clone list from 1->N into 1->N */
		for(counter = 0;counter<lengthB;counter++){
			object = listB->objectList[counter];
			put_nth(environment,tempList,lengthA + counter + 1,object); /* Insert into index and increment refcount */
		}
	}
	return tempList;
}

V_Instance create_instance( Int1 *string , Nat4 length, V_Environment environment)
{
	V_Instance ptrA = VPXMALLOC(1,VPL_Instance);
	if(ptrA == NULL) {
		record_error("Create INSTANCE failure","Module",kERROR,environment);
		return NULL;
	}
	ptrA->instanceIndex = 0;
	ptrA->system = 0;
	ptrA->mark = 0;
	ptrA->type = kInstance;
	addToHeap((V_Object) ptrA,environment);
	if(length != 0){
		ptrA->objectList = (V_Object *) calloc(length,sizeof (V_Object));
	}else{
		ptrA->objectList = NULL;
	}
	ptrA->listLength = length;
	if(string) ptrA->name = new_string(string,environment);
	else ptrA->name = NULL;
	return ptrA;
}

V_Instance construct_instance( V_Class tempClass , V_Environment environment )
{
	Nat4				counter = 0;
	V_DictionaryNode	tempNode = NULL;
	V_Value				tempValue = NULL;
	V_Dictionary		tempDictionary = tempClass->attributes;
	Nat4				length = tempDictionary->numberOfNodes;
	
	V_Instance ptrA = create_instance(tempClass->name,length,environment);
	ptrA->instanceIndex = tempClass->classIndex;

	for(counter = 0;counter<length;counter++){
		tempNode = tempDictionary->nodes[counter];
		tempValue = (V_Value) tempNode->object;
		ptrA->objectList[counter] = copy(environment,tempValue->value);
	}

	return ptrA;
}

Nat4 destroy_object( V_Object objectA)
{
	switch(objectA->type){
		case kObject:
		case kUndefined:
		case kNone:
		case kBoolean:
		case kInteger:
		case kReal:
			return destroy_basic(objectA);
		case kExternalBlock:
			return destroy_externalBlock( (V_ExternalBlock) objectA);
		case kString:
			return destroy_string( (V_String) objectA);
		case kList:
			return destroy_list( (V_List) objectA);
		case kInstance:
			return destroy_instance( (V_Instance) objectA);
	}

	return kNOERROR;
}

Nat4 destroy_basic( V_Object ptrA)
{
	ptrA->system = 0;
	ptrA->type = 0;
	ptrA->mark = 0;
	ptrA->use = 0;
	ptrA->previous = NULL;
	ptrA->next = NULL;
	X_free(ptrA);
	
	return kNOERROR;
}

Nat4 destroy_string( V_String ptrA)
{
	if(ptrA->string != NULL) X_free(ptrA->string);
	ptrA->string = NULL;
	ptrA->length = 0;
	return destroy_basic((V_Object) ptrA);	
}

Nat4 destroy_list( V_List ptrA)
{
	if(ptrA->objectList != NULL) X_free(ptrA->objectList);
	ptrA->objectList = NULL;
	ptrA->listLength = 0;
	return destroy_basic((V_Object) ptrA);	
}

Nat4 destroy_instance( V_Instance tempInstance)
{
	X_free(tempInstance->objectList);
	tempInstance->objectList = NULL;
	tempInstance->listLength = 0;
	X_free(tempInstance->name);
	tempInstance->name = NULL;
	return destroy_basic((V_Object) tempInstance);	
}

Nat4 destroy_externalBlock( V_ExternalBlock ptrA)
{
	if(ptrA->name != NULL) X_free(ptrA->name);
	ptrA->name = NULL;
	return destroy_basic((V_Object) ptrA);	
}

V_Object decrement_count(V_Environment environment,V_Object ptrO)
{
	Nat4	counter = 0;
	V_List	tempList = NULL;
	V_Instance	tempInstance = NULL;
	V_ExternalBlock	ptrB= NULL;
	Nat4	systemUsed = 0;
	
	if(ptrO != NULL){
		systemUsed = ptrO->system & kSystemUsed;
		switch(ptrO->type){
			case kObject:
			case kUndefined:
			case kNone:
			case kBoolean:
			case kInteger:
			case kReal:
			case kString:
			case kList:
			case kExternalBlock:
				break;
				
			case kInstance:
				tempInstance = (V_Instance) ptrO;
				if(ptrO->use == 1 && !systemUsed && tempInstance->instanceIndex){
					V_ClassEntry theClassEntry = environment->classIndexTable->classes[tempInstance->instanceIndex];
					while(theClassEntry && theClassEntry->destructorIndex == -1){
						if(theClassEntry->numberOfSuperClasses) theClassEntry = environment->classIndexTable->classes[theClassEntry->superClasses[0]];
						else theClassEntry = NULL;
					}
					if(theClassEntry && theClassEntry->destructorIndex != -1) {
						Int4		result = kNOERROR;
						Int4		(*spawnPtr)(V_Environment,char *,V_List , V_List ,Int4 *);
						V_Method	theDestructor = theClassEntry->methods[theClassEntry->destructorIndex];
						V_List		inputList = create_list(1,environment); // Create object, add to heap, set refcount
						V_List		outputList = create_list(0,environment); // Create object, add to heap, set refcount

						put_nth(environment,inputList,1,ptrO);

	if(environment->logging){
						V_Case		*initialCases = NULL;
						initialCases = X_obtain_cases_by_name(environment,environment->universalsTable,theDestructor->objectName,1,0);
						if(!initialCases) {
							record_error("decrement_count: Method not found: ",theDestructor->objectName,kERROR,environment);
							return NULL;
						}
						if(initialCases[0]->operationsList[0]->outarity != 1) {
							record_error("decrement_count: Number of inputs does not match inarity of: ",theDestructor->objectName,kERROR,environment);
							return NULL;
						}
						if(initialCases[0]->operationsList[initialCases[0]->numberOfOperations-1]->inarity != 0) {
							record_error("decrement_count: Number of outputs does not match outarity of: ",theDestructor->objectName,kERROR,environment);
							return NULL;
						}
	}
						spawnPtr = environment->stackSpawner;
						result = spawnPtr(environment,theDestructor->objectName,inputList,outputList,NULL);
						if(result != kNOERROR){
							record_error("decrement_count: Destructor execution error: ",theDestructor->objectName,kERROR,environment);
							return NULL;
						}
						decrement_count(environment,(V_Object) inputList);
						decrement_count(environment,(V_Object) outputList);	
					}
				}
				break;


			default:
				record_error("decrement_count: Unknown type: ",NULL,kERROR,environment);
				return NULL;
				break;
		}
		if(ptrO->use != 0) ptrO->use--;
		if(ptrO->use == 0 && !systemUsed){
/*
What could happen is that decrement_count is interrupted with ptrA-previous = ptrB and ptrB->next = ptrA and ptrA->next = OBJECTA and ptrB->previous = OBJECTB:

	ptrA->previous->next = ptrA->next;  so ptrB->next = OBJECTA
		ptrB->previous->next = ptrB->next; so  OBJECTB->next = OBJECTA
		ptrB->next->previous = ptrB->previous; so OBJECTA->previous = OBJECTB
		ptrB destroyed
	ptrA->next->previous = ptrA->previous; so OBJECTA->previous = ptrB which has been destroyed!
			
This interruption would leave OBJECTA->previous corrupted.
*/

#ifdef _POSIX_THREADS
	pthread_mutex_lock(&gHeapLock);
#endif
			if(ptrO->previous != NULL){
				ptrO->previous->next = ptrO->next;
			}
			if(ptrO->next != NULL){
				ptrO->next->previous = ptrO->previous;
			}
#ifdef _POSIX_THREADS
	pthread_mutex_unlock(&gHeapLock);
#endif

			if(ptrO->type == kList){
				tempList = (V_List) ptrO;
				for( counter = 0; counter < tempList->listLength; counter++){
					decrement_count(environment,*(tempList->objectList+counter));
				}
			}else if(ptrO->type == kExternalBlock){
				ptrB = (V_ExternalBlock) ptrO;
				if(ptrB->system & kSystemEscalated) {								// was kSystemReservedB
					ptrB->blockPtr = NULL;
//					printf("block escalated free!  System:%d\n", ptrB->system);
				} else {
					
					VPL_ExternalBlockFreeProcPtr	theFree = ptrB->blockFreeProcPtr;
					void*							theBrave = NULL;
					Bool							freeFree = ptrB->system & kSystemReservedC;
					V_CallbackCodeSegment			theFreeCG = (V_CallbackCodeSegment)ptrB->blockFreeProcPtr;

#if __VPL_DISPATCH_USES_FFI__
					if( freeFree )
						theFree = (VPL_ExternalBlockFreeProcPtr)theFreeCG->ffiseg_closure;
#endif
					if(ptrB->system & kSystemIndirection) {						// was kSystemReservedA
						if(ptrB->blockPtr != NULL) {
							switch( ptrB->levelOfIndirection ) {
								case 2:
									theBrave = (Nat4*)*(**(Nat4 ***)ptrB->blockPtr);
									if( (**(Nat4 **)ptrB->blockPtr) ) X_free((Nat4*)**(Nat4 **)ptrB->blockPtr);
//									printf("handle level free\n");
//									**(Nat4 **)ptrB->blockPtr = NULL;
								case 1:
									if( theBrave == NULL ) theBrave = (Nat4*)*(*(Nat4 **)ptrB->blockPtr);
									if( (*(Nat4 *)ptrB->blockPtr) ) X_free((Nat4*)*(Nat4 *)ptrB->blockPtr);
//									printf("pointer level free\n");
//									*(Nat4 *)ptrB->blockPtr = NULL;
								default:
									if( theBrave == NULL ) theBrave = (Nat4*)*((Nat4 *)ptrB->blockPtr);
									if( theFree && theBrave ) theFree( theBrave );
									if( theFree && freeFree ) VPLEnvironmentCallbackRelease( theFreeCG );
									X_free(ptrB->blockPtr);
//									printf("block level free\n");
									ptrB->blockPtr = NULL;
									break;
							}
						}
					} else if(ptrB->blockPtr != NULL) {
						if( theBrave == NULL ) theBrave = (Nat4*)*((Nat4 *)ptrB->blockPtr);
						if( theFree && theBrave ) theFree( theBrave );
						if( theFree && freeFree ) VPLEnvironmentCallbackRelease( theFreeCG );
						X_free(ptrB->blockPtr);
//						printf("block basic free!  System:%d\n", ptrB->system);
						ptrB->blockPtr = NULL;
					}
				}
			}else if(ptrO->type == kInstance){
				
				tempInstance = (V_Instance) ptrO;
				if(tempInstance->objectList) {
					for( counter = 0; counter < tempInstance->listLength; counter++){
						decrement_count(environment,*(tempInstance->objectList+counter));
					}
				}
				if(tempInstance->system & kSystemWatched){
					Nat4	classCounter = 0;
					for(classCounter = 0;classCounter< environment->classIndexTable->numberOfClasses;classCounter++){
						V_ClassEntry	tempClassEntry = environment->classIndexTable->classes[classCounter];
						if(tempClassEntry) {
							Nat4	tempNode = 0;
							for(tempNode = 0;tempNode<environment->totalValues;tempNode++){
								V_ValueNode tempValueNode = tempClassEntry->values[tempNode];
								if(tempValueNode) {
									V_WatchpointNode	tempWatchpointNode = tempValueNode->watchpointList;
									while(tempWatchpointNode){
										if(tempWatchpointNode->theInstance == tempInstance){
											if(tempWatchpointNode->previous != NULL){
												tempWatchpointNode->previous->next = tempWatchpointNode->next;
											}
											if(tempWatchpointNode->next != NULL){
												tempWatchpointNode->next->previous = tempWatchpointNode->previous;
											} else {
												tempValueNode->watchpointList = tempWatchpointNode->previous;
											}
											X_free(tempWatchpointNode);
											tempInstance->system = tempInstance->system & !kSystemWatched;
											break;
										}
										tempWatchpointNode = tempWatchpointNode->previous;
									}
								}
							}
						}
					}
				}
			}
			destroy_object(ptrO);
			return NULL;
		}
	}
	return ptrO;
}

Nat4 increment_count(V_Object ptrO)
{
	if(ptrO != NULL){
		ptrO->use++;
	}
	return kNOERROR;
}

Nat4 put_nth( V_Environment environment,V_List list, Nat4 index, V_Object ptrO )
{

	V_Object tempObject = *(list->objectList + index - 1);

	*(list->objectList + index - 1) = ptrO;
	increment_count(ptrO);
	decrement_count(environment,tempObject);
	
	return kNOERROR;
}

Nat4 addToHeap( V_Object ptrA , V_Environment environment)
{
	V_Heap	heap = NULL;
	Nat4	tempCounter = 0;
	
	heap = environment->heap;
	
/*  We start with the following situation

		HEAP ---PREVIOUS---> OBJECT
		HEAP <--NEXT-------- OBJECT

----------------------------------------  We then perform the following double-linked list insert
		
		PTRA ---PREVIOUS---> OBJECT
		HEAP <--NEXT-------- PTRA
		
		PTRA <--NEXT-------- OBJECT
		HEAP ---PREVIOUS---> PTRA

----------------------------------------  which then leads to the following
		
		HEAP ---PREVIOUS---> PTRA ---PREVIOUS---> OBJECT
		HEAP <--NEXT-------- PTRA <--NEXT-------- OBJECT
		
What could happen is that addToHeap is interrupted as so:

	ptrA->previous = heap->previous;
		ptrB->previous = heap->previous;
		heap->previous = ptrB;
	heap->previous = ptrA;
			
which would leave both PTRA and PTRB pointing to OBJECT but the HEAP only pointing PTRA
		
*/
	
#ifdef _POSIX_THREADS
	pthread_mutex_lock(&gHeapLock);
#endif

	ptrA->previous = heap->previous;
	ptrA->next = (V_Object) heap;
	if(heap->previous != NULL) heap->previous->next = ptrA;
	heap->previous = ptrA;

#ifdef _POSIX_THREADS
	pthread_mutex_unlock(&gHeapLock);
#endif

	if(!environment->compiled){
		heap->listLength++;
		tempCounter = heap->listLength;
		if(heap->listLength > heap->maxLength) heap->maxLength = heap->listLength;
	}
	
	ptrA->system = ptrA->system & kSystemWatched;
	ptrA->mark = 0;
	ptrA->use = 1;

	return kNOERROR;
}

V_Archive	archive_object(V_Environment environment, V_Object object, Int4 *archiveSize)
{
	V_Archive	tempArchive = NULL;
	V_PointerLocation	tempLocation = NULL;
	V_PointerLocation	freeLocation = NULL;
	
	Nat4		size = 0;
	Nat4		theSize = 0;
	Nat4		counter = 0;
	Nat4		numberOfLocations = 0;
	Int1		*start = 0;
	Nat4		objectStart = 0;
	
	if(object == NULL) return NULL;

	object_reset_mark(environment,object);
	size = object_storage_size(environment,object,&numberOfLocations);
	object_reset_mark(environment,object);

	theSize = sizeof(VPL_Archive) + (numberOfLocations*sizeof(Int1 **)) + size;
	if(theSize%4 != 0){
		theSize = 4*(theSize/4 + 1);
	}
	*archiveSize = theSize;
	tempArchive = (V_Archive) X_malloc(*archiveSize);
	if(tempArchive == NULL){
		record_error("archive_object: NULL archive created","ARCHIVE",kERROR,environment);
		return NULL;
	}
	tempArchive->locations = NULL;
	tempArchive->objectSize = CFSwapInt32HostToBig( size );
	
	start = (Int1 *) tempArchive;
	size = sizeof(VPL_Archive);
	start += size;
	tempArchive->positions = (Int1 ***) start;
	tempArchive->numberOfPositions = CFSwapInt32HostToBig( numberOfLocations );
	size = numberOfLocations*sizeof(Int1 **);
	start += size;

	tempArchive->objectStart = start;
	start = copy_object_to_archive(environment,object,start,(Int1 **) &objectStart,tempArchive);
	object_reset_mark(environment,object);

/* --------------------- */
	
	tempLocation = tempArchive->locations;
	for(counter = 0;counter < numberOfLocations;counter++){
		if(tempLocation) {
			tempArchive->positions[counter] = tempLocation->pointerLocation;
			tempLocation = (V_PointerLocation) tempLocation->next;
		}
	}

/* ---------------------------------- */

	tempLocation = tempArchive->locations;
	while(tempLocation != NULL){
		freeLocation = tempLocation;
		tempLocation = (V_PointerLocation) tempLocation->next;
		X_free(freeLocation);
	}
	tempArchive->locations = NULL;

	petrify_archive(environment,tempArchive);
	
	return tempArchive;
}

Int4 petrify_archive(V_Environment environment, V_Archive archive)
{
#pragma unused(environment)

	Int1				**location = 0;
	Nat4				counter = 0;
	Nat4				offset = 0;
	Nat4				position = 0;
	Nat4				numberOfPositions = CFSwapInt32BigToHost((Nat4) archive->numberOfPositions);

	offset = (Nat4) archive;
	for(counter = 0;counter < numberOfPositions;counter++){
		location = archive->positions[counter];
		if(location) 
		{
			*location = (Int1 *) CFSwapInt32HostToBig((Nat4) *location - offset);
			position = (Nat4) location;
			archive->positions[counter] = (Int1 **) CFSwapInt32HostToBig(position - offset);			
		}
	}
	
	position = (Nat4) archive->positions;
	archive->positions = (Int1 ***) CFSwapInt32HostToBig(position - offset);
	
	position = (Nat4) archive->objectStart;
	archive->objectStart = (Int1 *) CFSwapInt32HostToBig(position - offset);
	
	return kNOERROR;
}

Int4 revive_archive(V_Environment environment, V_Archive archive)
{
#pragma unused(environment)

	Int1				**location = 0;
	Nat4				counter = 0;
	Nat4				offset = 0;
	Nat4				position = 0;
	Nat4				numberOfPositions = CFSwapInt32BigToHost((Nat4) archive->numberOfPositions);

	offset = (Nat4) archive;
	
	position = CFSwapInt32BigToHost((Nat4) archive->positions);
	archive->positions = (Int1 ***) (position + offset);

	position = CFSwapInt32BigToHost((Nat4) archive->objectStart);
	archive->objectStart = (Int1 *) (position + offset);
	
	for(counter = 0;counter < numberOfPositions;counter++){
		position = CFSwapInt32BigToHost((Nat4) archive->positions[counter]);
		archive->positions[counter] = (Int1 **) (position + offset);
		location = archive->positions[counter];
		*location = (Int1 *) CFSwapInt32BigToHost((Nat4) *location) + offset;
	}
	
	
	return kNOERROR;
}

V_Object copy_archive_to_object(V_Environment environment, V_Object inputObject);
V_Object copy_archive_to_object(V_Environment environment, V_Object inputObject)
{
	V_Dictionary	tempDictionary = NULL;
	V_Object	object = NULL;
	V_Object	*tempObjectList = NULL;
	Int1 		*tempName = NULL;
	V_Class		tempClass = NULL;
	
	Nat4		size = 0;
	Nat4		counter = 0;
	Nat4		listLength = 0;
	uint64_t	tempLongLong = 0;
	uint64_t	swappedLongLong = 0;

	if(inputObject == NULL) return NULL;
	if(inputObject->mark != 0){
		object = (V_Object) inputObject->mark;
		increment_count(object);
		return object;
	}
	object = allocate_object(inputObject->type);
	if(object == NULL){
		record_error("deep-copy: NULL object created","ARCHIVE",kERROR,environment);
		return NULL;
	}
	switch(inputObject->type){
		case kObject:
		case kUndefined:
		case kNone:
			switch(inputObject->type){
				case kObject:
					size = sizeof(VPL_Object);
					break;
				case kUndefined:
					size = sizeof(VPL_Undefined);
					break;
				case kNone:
					size = sizeof(VPL_None);
					break;
			}
			memcpy(object,inputObject,size);
			inputObject->mark = (Nat4) object;
			addToHeap(object,environment);
			
			break;

		case kBoolean:
			size = sizeof(VPL_Boolean);
			memcpy(object,inputObject,size);
			inputObject->mark = (Nat4) object;
			addToHeap(object,environment);
			((V_Boolean) object)->value = CFSwapInt16BigToHost(((V_Boolean) object)->value);
			break;

		case kInteger:
			size = sizeof(VPL_Integer);
			memcpy(object,inputObject,size);
			inputObject->mark = (Nat4) object;
			addToHeap(object,environment);
			((V_Integer) object)->value = CFSwapInt32BigToHost(((V_Integer) object)->value);
			break;

		case kReal:
			size = sizeof(VPL_Real);
			memcpy(object,inputObject,size);
			inputObject->mark = (Nat4) object;
			addToHeap(object,environment);
			tempLongLong = *(uint64_t *) &(((V_Real) object)->value);
			swappedLongLong = CFSwapInt64BigToHost(tempLongLong);
			((V_Real) object)->value = *(double *) &swappedLongLong;
			break;

		case kString:
			size = sizeof(VPL_String);
			memcpy(object,inputObject,size);
			inputObject->mark = (Nat4) object;
			addToHeap(object,environment);

			tempName = ((V_String) inputObject)->string;
			size = strlen(tempName)+1;
			tempName = (Int1 *) X_malloc(size);
			if(tempName == NULL){
				record_error("deep-copy: NULL string created","ARCHIVE",kERROR,environment);
				return NULL;
			}
			memcpy(tempName,((V_String) inputObject)->string,size);
			((V_String) object)->string = tempName;
//			((V_String) object)->length = CFSwapInt32BigToHost(((V_String) inputObject)->length);
			((V_String) object)->length = size - 1;
			break;
			
		case kList:
			size = sizeof(VPL_List);
			memcpy(object,inputObject,size);
			inputObject->mark = (Nat4) object;
			addToHeap(object,environment);

			tempObjectList = ((V_List) inputObject)->objectList;
			listLength = CFSwapInt32BigToHost(((V_List) inputObject)->listLength);
			if(listLength > 0){
				size = listLength*sizeof(V_Object);
				tempObjectList = (V_Object	*) X_malloc(size);
				if(tempObjectList == NULL){
					record_error("deep-copy: NULL list tempObjectList created","ARCHIVE",kERROR,environment);
					return NULL;
				}
				memcpy(tempObjectList,((V_List) inputObject)->objectList,size);
				((V_List) object)->objectList = tempObjectList;
				((V_List) object)->listLength = listLength;

				for(counter = 0;counter < listLength;counter++){
					tempObjectList[counter] = copy_archive_to_object(environment,tempObjectList[counter]); 
				}
			}
			break;
			
		case kInstance:
			tempName = ((V_Instance) inputObject)->name;
			tempClass = get_class(environment->classTable,tempName);
			listLength = CFSwapInt32BigToHost(((V_List) inputObject)->listLength);
			if(tempClass != NULL){
				tempDictionary = tempClass->attributes;
				if(tempDictionary->numberOfNodes != listLength){
					size = sizeof(VPL_Instance);
					memcpy(object,inputObject,size);
					inputObject->mark = (Nat4) object;
					addToHeap(object,environment);
					object->instanceIndex = tempClass->classIndex;

					tempName = ((V_Instance) inputObject)->name;
					size = strlen(tempName)+1;
					tempName = (Int1 *) X_malloc(size);
					if(tempName == NULL){
						record_error("deep-copy: NULL name created","ARCHIVE",kERROR,environment);
						return NULL;
					}
					memcpy(tempName,((V_Instance) inputObject)->name,size);
					((V_Instance) object)->name = tempName;

					if(tempDictionary->numberOfNodes > listLength){
//						record_error("deep-copy: Warning! source object has fewer attributes for ",tempName,kERROR,environment);
					}
					if(tempDictionary->numberOfNodes < listLength){
//						record_error("deep-copy: Warning! source object has more attributes for ",tempName,kERROR,environment);
						listLength = tempDictionary->numberOfNodes;
					}
					((V_Instance) object)->listLength = tempDictionary->numberOfNodes;
					if(listLength > 0){	
						size = tempDictionary->numberOfNodes*sizeof(V_Object);
						tempObjectList = (V_Object	*) X_malloc(size);
						if(tempObjectList == NULL){
							record_error("deep-copy: NULL instance tempObjectList created","ARCHIVE",kERROR,environment);
							return NULL;
						}
						size = listLength*sizeof(V_Object);
						memcpy(tempObjectList,((V_List) inputObject)->objectList,size);
						((V_List) object)->objectList = tempObjectList;	
	
						for(counter = 0;counter < listLength;counter++){
							tempObjectList[counter] = copy_archive_to_object(environment,tempObjectList[counter]); 
						}
						for(;counter < tempDictionary->numberOfNodes;counter++) tempObjectList[counter] = NULL; 
					} else {	
						((V_List) object)->objectList = NULL;	
						((V_List) object)->listLength = 0;
					}
				}else{
					size = sizeof(VPL_Instance);
					memcpy(object,inputObject,size);
					inputObject->mark = (Nat4) object;
					addToHeap(object,environment);
					object->instanceIndex = tempClass->classIndex;

					tempName = ((V_Instance) inputObject)->name;
					size = strlen(tempName)+1;
					tempName = (Int1 *) X_malloc(size);
					if(tempName == NULL){
						record_error("deep-copy: NULL name created","ARCHIVE",kERROR,environment);
						return NULL;
					}
					memcpy(tempName,((V_Instance) inputObject)->name,size);
					((V_Instance) object)->name = tempName;

					if(listLength > 0){	
						size = listLength*sizeof(V_Object);
						tempObjectList = (V_Object	*) X_malloc(size);
						if(tempObjectList == NULL){
							record_error("deep-copy: NULL instance tempObjectList created","ARCHIVE",kERROR,environment);
							return NULL;
						}
						memcpy(tempObjectList,((V_List) inputObject)->objectList,size);
						((V_List) object)->objectList = tempObjectList;	
						((V_List) object)->listLength = listLength;
	
						for(counter = 0;counter < listLength;counter++){
							tempObjectList[counter] = copy_archive_to_object(environment,tempObjectList[counter]); 
						}
					} else {	
						((V_List) object)->objectList = NULL;	
						((V_List) object)->listLength = 0;
					}
				}
			}else{
				record_error("deep-copy: Class not found: ",tempName,kERROR,environment);
					size = sizeof(VPL_Instance);
					memcpy(object,inputObject,size);
					inputObject->mark = (Nat4) object;
					addToHeap(object,environment);
					object->instanceIndex = 0;

					tempName = ((V_Instance) inputObject)->name;
					size = strlen(tempName)+1;
					tempName = (Int1 *) X_malloc(size);
					if(tempName == NULL){
						record_error("deep-copy: NULL name created","ARCHIVE",kERROR,environment);
						return NULL;
					}
					memcpy(tempName,((V_Instance) inputObject)->name,size);
					((V_Instance) object)->name = tempName;

					if(listLength > 0){	
						size = listLength*sizeof(V_Object);
						tempObjectList = (V_Object	*) X_malloc(size);
						if(tempObjectList == NULL){
							record_error("deep-copy: NULL instance tempObjectList created","ARCHIVE",kERROR,environment);
							return NULL;
						}
						memcpy(tempObjectList,((V_List) inputObject)->objectList,size);
						((V_List) object)->objectList = tempObjectList;	
						((V_List) object)->listLength = listLength;
	
						for(counter = 0;counter < listLength;counter++){
							tempObjectList[counter] = copy_archive_to_object(environment,tempObjectList[counter]); 
						}
					} else {	
						((V_List) object)->objectList = NULL;	
						((V_List) object)->listLength = 0;
					}
			}
			break;

		case kExternalBlock:
			size = sizeof(VPL_ExternalBlock);
			memcpy(object,inputObject,size);
			inputObject->mark = (Nat4) object;
			addToHeap(object,environment);

			tempName = ((V_ExternalBlock) inputObject)->name;
			size = strlen(tempName)+1;
			tempName = (Int1 *) X_malloc(size);
			if(tempName == NULL){
				record_error("deep-copy: NULL string created","ARCHIVE",kERROR,environment);
				return NULL;
			}
			memcpy(tempName,((V_ExternalBlock) inputObject)->name,size);
			((V_ExternalBlock) object)->name = tempName;

//			if(((V_ExternalBlock) inputObject)->levelOfIndirection == 0) size = CFSwapInt32BigToHost( ((V_ExternalBlock) inputObject)->size );
//			else size = sizeof(Int1 *);

			((V_ExternalBlock) object)->levelOfIndirection = CFSwapInt32BigToHost( ((V_ExternalBlock) inputObject)->levelOfIndirection );
			
			size = CFSwapInt32BigToHost( ((V_ExternalBlock) inputObject)->size );
			((V_ExternalBlock) object)->size = size;
			
			if(((V_ExternalBlock) object)->levelOfIndirection != 0) size = sizeof(Int1 *);


//			printf("Readomg Block name: %s level: %d size: %d\n", tempName, ((V_ExternalBlock) object)->levelOfIndirection, size );

			if(size != 0) {
				tempName = (Int1 *) X_malloc(size);
				if(tempName == NULL){
					record_error("deep-copy: NULL string created","ARCHIVE",kERROR,environment);
					return NULL;
				}
				memcpy(tempName,((V_ExternalBlock) inputObject)->blockPtr,size);
				((V_ExternalBlock) object)->blockPtr = tempName;
			} else ((V_ExternalBlock) object)->blockPtr = NULL;
			break;

		default:
			break;
	}
	return object;
}

Nat4 archive_reset_mark(V_Environment environment, V_Object object);
Nat4 archive_reset_mark(V_Environment environment, V_Object object)
{
	Nat4		counter = 0;
	Nat4		listLength = 0;

	if(object == NULL) return kNOERROR;
	if(object->mark == 0) return kNOERROR;
	object->mark = 0;
	switch(object->type){
		case kObject:
		case kUndefined:
		case kNone:
		case kBoolean:
		case kInteger:
		case kReal:
		case kString:
		case kExternalBlock:
			break;
			
		case kInstance:
		case kList:
			listLength = CFSwapInt32BigToHost(((V_List) object)->listLength);
			for(counter = 0;counter < listLength;counter++){
				archive_reset_mark(environment,((V_List) object)->objectList[counter]);
			}
			break;
			
		default:
			break;
	}
	return kNOERROR;
}

V_Object unarchive_object(V_Environment environment, V_Archive archive)
{
	V_Object	tempObject = NULL;
	
	if(archive == NULL) return NULL;
	
	revive_archive(environment,archive);

	tempObject = copy_archive_to_object(environment,(V_Object) archive->objectStart);
	archive_reset_mark(environment,(V_Object) archive->objectStart);
	
	petrify_archive(environment,archive);

	return tempObject;
}

V_Object allocate_object( Nat4 type)
{
	V_Object	object = NULL;

	switch(type){
		case kObject:
			object = (V_Object) X_malloc(sizeof (VPL_Object));
			break;
		case kUndefined:
			object = (V_Object) X_malloc(sizeof (VPL_Undefined));
			break;
		case kNone:
			object = (V_Object) X_malloc(sizeof (VPL_None));
			break;
		case kBoolean:
			object = (V_Object) X_malloc(sizeof (VPL_Boolean));
			break;
		case kInteger:
			object = (V_Object) X_malloc(sizeof (VPL_Integer));
			break;
		case kReal:
			object = (V_Object) X_malloc(sizeof (VPL_Real));
			break;
		case kString:
			object = (V_Object) X_malloc(sizeof (VPL_String));
			break;
		case kList:
			object = (V_Object) X_malloc(sizeof (VPL_List));
			break;
		case kInstance:
			object = (V_Object) X_malloc(sizeof (VPL_Instance));
			break;
		case kExternalBlock:
			object = (V_Object) X_malloc(sizeof (VPL_ExternalBlock));
			break;
		default:
			object = NULL;
			break;
	}

	return object;
}



Nat4 object_storage_size(V_Environment environment, V_Object object, Nat4 *numberOfLocations)
{
	V_Object		tempObject = NULL;
	Int1 		*tempName = NULL;
	Nat4		size = 0;
	Nat4		counter = 0;
	Nat4		listLength = 0;

	if(object == NULL) return 0;
	if(object->mark == kTRUE) return 0;
	object->mark = kTRUE;
	switch(object->type){
		case kObject:
			size = sizeof(VPL_Object);
			break;
			
		case kUndefined:
			size = sizeof(VPL_Undefined);
			break;
			
		case kNone:
			size = sizeof(VPL_None);
			break;
			
		case kBoolean:
			size = sizeof(VPL_Boolean);
			break;
			
		case kInteger:
			size = sizeof(VPL_Integer);
			break;
			
		case kReal:
			size = sizeof(VPL_Real);
			break;
			
		case kString:
			size = sizeof(VPL_String);
			tempName = ((V_String) object)->string;
			size += strlen(tempName)+1;
			if(size%4 != 0){
				size = 4*(size/4 + 1);
			}
			(*numberOfLocations)++;
			break;
			
		case kList:
			size = sizeof(VPL_List);
			listLength = ((V_List) object)->listLength;
			if(listLength > 0){
				size += listLength*sizeof(V_Object);
				(*numberOfLocations)++;

				for(counter = 0;counter < listLength;counter++){
					tempObject = ((V_List) object)->objectList[counter];
					if(tempObject != NULL){
						if(tempObject->type != kExternalBlock) (*numberOfLocations)++;
						else if( strcmp(((V_ExternalBlock)tempObject)->name,"VPL_Archive") == 0) (*numberOfLocations)++;
						size += object_storage_size(environment,tempObject,numberOfLocations);
					}
				}
			}
			break;
			
		case kInstance:
			size = sizeof(VPL_Instance);
			tempName = ((V_Instance) object)->name;
			size += strlen(tempName)+1;
			if(size%4 != 0){
				size = 4*(size/4 + 1);
			}
			(*numberOfLocations)++;
			listLength = ((V_Instance) object)->listLength;
			if(listLength > 0){
				size += listLength*sizeof(V_Object);
				(*numberOfLocations)++;

				if(((V_Instance) object)->objectList) {
				for(counter = 0;counter < listLength;counter++){
					tempObject = ((V_Instance) object)->objectList[counter];
					if(tempObject != NULL){
						if(tempObject->type != kExternalBlock) (*numberOfLocations)++;
						else if( strcmp(((V_ExternalBlock)tempObject)->name,"VPL_Archive") == 0) (*numberOfLocations)++;
						size += object_storage_size(environment,tempObject,numberOfLocations);
					}
				}
				}
			}
			break;
			
		case kExternalBlock:
			if( strcmp(((V_ExternalBlock)object)->name,"VPL_Archive") != 0) break;
			size = sizeof(VPL_ExternalBlock);
			tempName = ((V_ExternalBlock) object)->name;
			size += strlen(tempName)+1;
			if(size%4 != 0){
				size = 4*(size/4 + 1);
			}
			(*numberOfLocations)++;

			tempName = ((V_ExternalBlock) object)->blockPtr;
			if(tempName != NULL) {
//				size += archive_size(environment,(V_Archive) tempName);
				size += archive_size(NULL,(V_Archive) tempName);
				(*numberOfLocations)++;
			}
			break;
			
		default:
			break;
	}
	return size;
}

Nat4 object_reset_mark(V_Environment environment, V_Object object)
{
	Nat4		counter = 0;
	Nat4		listLength = 0;

	if(object == NULL) return kNOERROR;
	if(object->mark == 0) return kNOERROR;
	object->mark = 0;
	switch(object->type){
		case kObject:
		case kUndefined:
		case kNone:
		case kBoolean:
		case kInteger:
		case kReal:
		case kString:
		case kExternalBlock:
			break;
			
		case kInstance:
		case kList:
			listLength = ((V_List) object)->listLength;
			if(((V_Instance) object)->objectList) {
			for(counter = 0;counter < listLength;counter++){
				object_reset_mark(environment,((V_List) object)->objectList[counter]);
			}
			}
			break;
			
		default:
			break;
	}
	return kNOERROR;
}

Int1 *copy_object_to_archive(V_Environment environment, V_Object object, Int1 *currentPointer, Int1 **location, V_Archive archive)
{
	V_Object			tempObject = NULL;
	V_Object			*tempObjectList = NULL;
	Int1 				*tempName = NULL;
	Int1				**tempLocation = NULL;

	Nat4				size = 0;
	Nat4				counter = 0;
	Nat4				listLength = 0;
	V_Object			offset = (V_Object) currentPointer;
	uint64_t			tempLongLong = 0;
	uint64_t			swappedLongLong = 0;

	if(object == NULL) return currentPointer;
	if(object->mark != 0){
		*location = (Int1 *) object->mark;
		return currentPointer;
	}
	switch(object->type){
		case kObject:
		case kUndefined:
		case kNone:
		case kBoolean:
		case kInteger:
		case kReal:
			switch(object->type){
				case kObject:
					size = sizeof(VPL_Object);
					break;
				case kUndefined:
					size = sizeof(VPL_Undefined);
					break;
				case kNone:
					size = sizeof(VPL_None);
					break;
				case kBoolean:
					size = sizeof(VPL_Boolean);
					break;
				case kInteger:
					size = sizeof(VPL_Integer);
					break;
				case kReal:
					size = sizeof(VPL_Real);
					break;
			}
			memcpy(offset,object,size);
			*location = (Int1 *) offset;
			object->mark = (Nat4) offset;
			offset->system = offset->system & kSystemWatched;
			offset->use = 0;
			offset->previous = NULL;
			offset->next = NULL;
			currentPointer += size;
			switch(object->type){
				case kBoolean:
					((V_Boolean) offset)->value = CFSwapInt16HostToBig(((V_Boolean) object)->value);
					break;
				case kInteger:
					((V_Integer) offset)->value = CFSwapInt32HostToBig(((V_Integer) object)->value);
					break;
				case kReal:
					tempLongLong = *(uint64_t *) &(((V_Real) object)->value);
					swappedLongLong = CFSwapInt64HostToBig(tempLongLong);
					((V_Real) offset)->value = *(double *) &swappedLongLong;
					break;
				default:
					break;
			}
			
			break;
			
		case kString:
			size = sizeof(VPL_String);
			memcpy(offset,object,size);
			*location = (Int1 *) offset;
			object->mark = (Nat4) offset;
			offset->system = offset->system & kSystemWatched;
			offset->use = 0;
			offset->previous = NULL;
			offset->next = NULL;
			currentPointer += size;

			tempLocation = &(((V_String) offset)->string);
			tempName = ((V_String) offset)->string;
			add_location(environment,archive,tempLocation);
			size = strlen(tempName)+1;
			memcpy(currentPointer,tempName,size);
			*tempLocation = currentPointer;
			if(size%4 != 0){
				size = 4*(size/4 + 1);
			}
			currentPointer += size;
			break;
			
		case kList:
			size = sizeof(VPL_List);
			memcpy(offset,object,size);
			*location = (Int1 *) offset;
			object->mark = (Nat4) offset;
			offset->system = offset->system & kSystemWatched;
			offset->use = 0;
			offset->previous = NULL;
			offset->next = NULL;
			currentPointer += size;

			listLength = ((V_List) offset)->listLength;
			((V_List) offset)->listLength = CFSwapInt32HostToBig( listLength );
			
			if(listLength > 0){
				tempLocation = (Int1 **) &((V_List) offset)->objectList;
				tempObjectList = ((V_List) offset)->objectList;
				add_location(environment,archive,tempLocation);
				size = listLength*sizeof(V_Object);
				memcpy(currentPointer,tempObjectList,size);
				*tempLocation = currentPointer;
				tempObjectList = (V_Object *) currentPointer;
				currentPointer += size;

				for(counter = 0;counter < listLength;counter++){
					tempObject = tempObjectList[counter];
					if(tempObject != NULL){
						if(tempObject->type == kExternalBlock && strcmp(((V_ExternalBlock)tempObject)->name,"VPL_Archive") != 0){
							tempObjectList[counter] = NULL;
						}else{
							tempLocation = (Int1 **) &(tempObjectList[counter]);
							add_location(environment,archive,tempLocation);
							currentPointer = copy_object_to_archive(environment,tempObject,currentPointer,tempLocation,archive);
						}
					}
				}
			}
			break;
			
		case kInstance:
			size = sizeof(VPL_Instance);
			memcpy(offset,object,size);
			*location = (Int1 *) offset;
			object->mark = (Nat4) offset;
			offset->system = offset->system & kSystemWatched;
			offset->use = 0;
			offset->previous = NULL;
			offset->next = NULL;
			currentPointer += size;

			tempLocation = (Int1 **) &(((V_Instance) offset)->name);
			tempName = ((V_Instance) offset)->name;
			add_location(environment,archive,tempLocation);
			size = strlen(tempName)+1;
			memcpy(currentPointer,tempName,size);
			*tempLocation = currentPointer;
			if(size%4 != 0){
				size = 4*(size/4 + 1);
			}
			currentPointer += size;

			listLength = ((V_List) offset)->listLength;
			((V_List) offset)->listLength = CFSwapInt32HostToBig( listLength );
			
			if(listLength > 0 && ((V_List) offset)->objectList){
				tempLocation = (Int1 **) &((V_List) offset)->objectList;
				tempObjectList = ((V_List) offset)->objectList;
				add_location(environment,archive,tempLocation);
				size = listLength*sizeof(V_Object);
				memcpy(currentPointer,tempObjectList,size);
				*tempLocation = currentPointer;
				tempObjectList = (V_Object *) currentPointer;
				currentPointer += size;

				for(counter = 0;counter < listLength;counter++){
					tempObject = tempObjectList[counter];
					if(tempObject != NULL){
						if(tempObject->type == kExternalBlock && strcmp(((V_ExternalBlock)tempObject)->name,"VPL_Archive") != 0){
							tempObjectList[counter] = NULL;
						}else{
							tempLocation = (Int1 **) &(tempObjectList[counter]);
							add_location(environment,archive,tempLocation);
							currentPointer = copy_object_to_archive(environment,tempObject,currentPointer,tempLocation,archive);
						}
					}
				}
			}
			break;

		case kExternalBlock:
			if( strcmp(((V_ExternalBlock)object)->name,"VPL_Archive") != 0) break;

			size = sizeof(VPL_ExternalBlock);
			memcpy(offset,object,size);
			*location = (Int1 *) offset;
			object->mark = (Nat4) offset;
			offset->system = offset->system & kSystemWatched;
			offset->use = 0;
			offset->previous = NULL;
			offset->next = NULL;
			currentPointer += size;

			((V_ExternalBlock) offset)->levelOfIndirection = CFSwapInt32HostToBig( ((V_ExternalBlock) object)->levelOfIndirection );
//			((V_ExternalBlock) offset)->size = CFSwapInt32HostToBig( ((V_ExternalBlock) object)->size );
//			((V_ExternalBlock) offset)->size = ((V_ExternalBlock) object)->size;

			tempLocation = &(((V_ExternalBlock) offset)->name);
			tempName = ((V_ExternalBlock) offset)->name;
			add_location(environment,archive,tempLocation);
			size = strlen(tempName)+1;
			memcpy(currentPointer,tempName,size);
			*tempLocation = currentPointer;
			if(size%4 != 0){
				size = 4*(size/4 + 1);
			}
			currentPointer += size;

			tempName = ((V_ExternalBlock) offset)->blockPtr;
			if(tempName != NULL){
#ifdef __MWERKS__
				tempLocation = &((Int1 *) ((V_ExternalBlock) offset)->blockPtr);	// This works in Codewarrior but not in GCC
#elif __GNUC__
				tempLocation = (Int1 **) &((V_ExternalBlock) offset)->blockPtr;		// But this works in GCC but not in Codewarrior!
#endif
				add_location(environment,archive,tempLocation);
//				size = archive_size(environment,(V_Archive) tempName);
				size = archive_size(NULL,(V_Archive) tempName);
				
				memcpy(currentPointer,tempName,size);
				*tempLocation = currentPointer;
				currentPointer += size;
			} else size = 0;
			
			((V_ExternalBlock) offset)->size = CFSwapInt32HostToBig( size );
			
//			printf( "Writing block name: %s level:%d size: %d actual: %d\n", ((V_ExternalBlock) offset)->name, ((V_ExternalBlock) offset)->levelOfIndirection, size, ((V_ExternalBlock) offset)->size );
			
			break;
			
		default:
			break;
	}
	return currentPointer;
}

V_Object deep_copy(V_Environment environment, V_Object inputObject)
{
	V_Dictionary	tempDictionary = NULL;
	V_Object	object = NULL;
	V_Object	*tempObjectList = NULL;
	Int1 		*tempName = NULL;
	V_Class		tempClass = NULL;
	
	Nat4		size = 0;
	Nat4		counter = 0;
	Nat4		listLength = 0;

	if(inputObject == NULL) return NULL;
	if(inputObject->mark != 0){
		object = (V_Object) inputObject->mark;
		increment_count(object);
		return object;
	}
	object = allocate_object(inputObject->type);
	if(object == NULL){
		record_error("deep-copy: NULL object created","ARCHIVE",kERROR,environment);
		return NULL;
	}
	switch(inputObject->type){
		case kObject:
		case kUndefined:
		case kNone:
		case kBoolean:
		case kInteger:
		case kReal:
			switch(inputObject->type){
				case kObject:
					size = sizeof(VPL_Object);
					break;
				case kUndefined:
					size = sizeof(VPL_Undefined);
					break;
				case kNone:
					size = sizeof(VPL_None);
					break;
				case kBoolean:
					size = sizeof(VPL_Boolean);
					break;
				case kInteger:
					size = sizeof(VPL_Integer);
					break;
				case kReal:
					size = sizeof(VPL_Real);
					break;
			}
			memcpy(object,inputObject,size);
			inputObject->mark = (Nat4) object;
			addToHeap(object,environment);
			
			break;

		case kString:
			size = sizeof(VPL_String);
			memcpy(object,inputObject,size);
			inputObject->mark = (Nat4) object;
			addToHeap(object,environment);

			tempName = ((V_String) inputObject)->string;
			size = strlen(tempName)+1;
			tempName = (Int1 *) X_malloc(size);
			if(tempName == NULL){
				record_error("deep-copy: NULL string created","ARCHIVE",kERROR,environment);
				return NULL;
			}
			memcpy(tempName,((V_String) inputObject)->string,size);
			((V_String) object)->string = tempName;
			break;
			
		case kList:
			size = sizeof(VPL_List);
			memcpy(object,inputObject,size);
			inputObject->mark = (Nat4) object;
			addToHeap(object,environment);

			tempObjectList = ((V_List) inputObject)->objectList;
			listLength = ((V_List) inputObject)->listLength;
			if(listLength > 0){
				size = listLength*sizeof(V_Object);
				tempObjectList = (V_Object	*) X_malloc(size);
				if(tempObjectList == NULL){
					record_error("deep-copy: NULL list tempObjectList created","ARCHIVE",kERROR,environment);
					return NULL;
				}
				memcpy(tempObjectList,((V_List) inputObject)->objectList,size);
				((V_List) object)->objectList = tempObjectList;

				for(counter = 0;counter < listLength;counter++){
					tempObjectList[counter] = deep_copy(environment,tempObjectList[counter]); 
				}
			}
			break;
			
		case kInstance:
			tempName = ((V_Instance) inputObject)->name;
			tempClass = get_class(environment->classTable,tempName);
			listLength = ((V_List) inputObject)->listLength;
			if(tempClass != NULL){
				tempDictionary = tempClass->attributes;
				if(tempDictionary->numberOfNodes != listLength){
					size = sizeof(VPL_Instance);
					memcpy(object,inputObject,size);
					inputObject->mark = (Nat4) object;
					addToHeap(object,environment);
					object->instanceIndex = tempClass->classIndex;

					tempName = ((V_Instance) inputObject)->name;
					size = strlen(tempName)+1;
					tempName = (Int1 *) X_malloc(size);
					if(tempName == NULL){
						record_error("deep-copy: NULL name created","ARCHIVE",kERROR,environment);
						return NULL;
					}
					memcpy(tempName,((V_Instance) inputObject)->name,size);
					((V_Instance) object)->name = tempName;

					tempObjectList = ((V_List) inputObject)->objectList;
					listLength = ((V_List) inputObject)->listLength;
					if(tempDictionary->numberOfNodes > listLength){
//						record_error("deep-copy: Warning! source object has fewer attributes for ",tempName,kERROR,environment);
					}
					if(tempDictionary->numberOfNodes < listLength){
//						record_error("deep-copy: Warning! source object has more attributes for ",tempName,kERROR,environment);
						listLength = tempDictionary->numberOfNodes;
					}
					((V_Instance) object)->listLength = tempDictionary->numberOfNodes;
					if(listLength > 0){	
						size = tempDictionary->numberOfNodes*sizeof(V_Object);
						tempObjectList = (V_Object	*) X_malloc(size);
						if(tempObjectList == NULL){
							record_error("deep-copy: NULL instance tempObjectList created","ARCHIVE",kERROR,environment);
							return NULL;
						}
						size = listLength*sizeof(V_Object);
						memcpy(tempObjectList,((V_List) inputObject)->objectList,size);
						((V_List) object)->objectList = tempObjectList;	
	
						for(counter = 0;counter < listLength;counter++){
							tempObjectList[counter] = deep_copy(environment,tempObjectList[counter]); 
						}
						for(;counter < tempDictionary->numberOfNodes;counter++) tempObjectList[counter] = NULL; 
					}
				}else{
					size = sizeof(VPL_Instance);
					memcpy(object,inputObject,size);
					inputObject->mark = (Nat4) object;
					addToHeap(object,environment);
					object->instanceIndex = tempClass->classIndex;

					tempName = ((V_Instance) inputObject)->name;
					size = strlen(tempName)+1;
					tempName = (Int1 *) X_malloc(size);
					if(tempName == NULL){
						record_error("deep-copy: NULL name created","ARCHIVE",kERROR,environment);
						return NULL;
					}
					memcpy(tempName,((V_Instance) inputObject)->name,size);
					((V_Instance) object)->name = tempName;

					tempObjectList = ((V_List) inputObject)->objectList;
					listLength = ((V_List) inputObject)->listLength;
					if(listLength > 0){	
						size = listLength*sizeof(V_Object);
						tempObjectList = (V_Object	*) X_malloc(size);
						if(tempObjectList == NULL){
							record_error("deep-copy: NULL instance tempObjectList created","ARCHIVE",kERROR,environment);
							return NULL;
						}
						if(((V_List) inputObject)->objectList == NULL){
							record_error("deep-copy: NULL object list for instance","ARCHIVE",kERROR,environment);
							return NULL;
						}
						memcpy(tempObjectList,((V_List) inputObject)->objectList,size);
						((V_List) object)->objectList = tempObjectList;	
	
						for(counter = 0;counter < listLength;counter++){
							tempObjectList[counter] = deep_copy(environment,tempObjectList[counter]); 
						}
					}
				}
			}else{
//				record_error("deep-copy: Class not found: ",tempName,kERROR,environment);
					size = sizeof(VPL_Instance);
					memcpy(object,inputObject,size);
					inputObject->mark = (Nat4) object;
					addToHeap(object,environment);
					object->instanceIndex = 0;

					tempName = ((V_Instance) inputObject)->name;
					size = strlen(tempName)+1;
					tempName = (Int1 *) X_malloc(size);
					if(tempName == NULL){
						record_error("deep-copy: NULL name created","ARCHIVE",kERROR,environment);
						return NULL;
					}
					memcpy(tempName,((V_Instance) inputObject)->name,size);
					((V_Instance) object)->name = tempName;

					tempObjectList = ((V_List) inputObject)->objectList;
					listLength = ((V_List) inputObject)->listLength;
					if(listLength > 0){	
						size = listLength*sizeof(V_Object);
						tempObjectList = (V_Object	*) X_malloc(size);
						if(tempObjectList == NULL){
							record_error("deep-copy: NULL instance tempObjectList created","ARCHIVE",kERROR,environment);
							return NULL;
						}
						memcpy(tempObjectList,((V_List) inputObject)->objectList,size);
						((V_List) object)->objectList = tempObjectList;	
	
						for(counter = 0;counter < listLength;counter++){
							tempObjectList[counter] = deep_copy(environment,tempObjectList[counter]); 
						}
					}
			}
			break;

		case kExternalBlock:
			size = sizeof(VPL_ExternalBlock);
			memcpy(object,inputObject,size);
			inputObject->mark = (Nat4) object;
			addToHeap(object,environment);

			tempName = ((V_ExternalBlock) inputObject)->name;
			size = strlen(tempName)+1;
			tempName = (Int1 *) X_malloc(size);
			if(tempName == NULL){
				record_error("deep-copy: NULL string created","ARCHIVE",kERROR,environment);
				return NULL;
			}
			memcpy(tempName,((V_ExternalBlock) inputObject)->name,size);
			((V_ExternalBlock) object)->name = tempName;

			if(((V_ExternalBlock) inputObject)->levelOfIndirection == 0) size = ((V_ExternalBlock) inputObject)->size;
			else size = sizeof(Int1 *);
			if(size != 0) {
				tempName = (Int1 *) X_malloc(size);
				if(tempName == NULL){
					record_error("deep-copy: NULL string created","ARCHIVE",kERROR,environment);
					return NULL;
				}
				memcpy(tempName,((V_ExternalBlock) inputObject)->blockPtr,size);
				((V_ExternalBlock) object)->blockPtr = tempName;
			} else ((V_ExternalBlock) object)->blockPtr = NULL;
			break;

		default:
			break;
	}
	return object;
}

V_Object shallow_copy(V_Environment environment, V_Object inputObject)
{
	V_Object	object = NULL;
	V_Object	*tempObjectList;
	Int1 		*tempName = NULL;
	
	Nat4		size = 0;
	Nat4		counter = 0;
	Nat4		listLength = 0;

	if(inputObject == NULL) return NULL;
	object = allocate_object(inputObject->type);
	switch(inputObject->type){
		case kObject:
		case kUndefined:
		case kNone:
		case kBoolean:
		case kInteger:
		case kReal:
			switch(inputObject->type){
				case kObject:
					size = sizeof(VPL_Object);
					break;
				case kUndefined:
					size = sizeof(VPL_Undefined);
					break;
				case kNone:
					size = sizeof(VPL_None);
					break;
				case kBoolean:
					size = sizeof(VPL_Boolean);
					break;
				case kInteger:
					size = sizeof(VPL_Integer);
					break;
				case kReal:
					size = sizeof(VPL_Real);
					break;
			}
			memcpy(object,inputObject,size);
			addToHeap(object,environment);
			break;
/*
		case kObject:
			size = sizeof(VPL_Object);
			memcpy(object,inputObject,size);
			addToHeap(object,environment);
			break;
			
		case kUndefined:
			object = (V_Object) create_undefined(environment);
			break;
			
		case kNone:
			object = (V_Object) create_none(environment);
			break;
			
		case kBoolean:
			size = sizeof(VPL_Boolean);
			memcpy(object,inputObject,size);
			addToHeap(object,environment);
			break;
			
		case kInteger:
			object = (V_Object) int_to_integer(((V_Integer) inputObject)->value,environment);
			break;
			
		case kReal:
			object = (V_Object) float_to_real(((V_Real) inputObject)->value,environment);
			break;
*/			
		case kString:
			size = sizeof(VPL_String);
			memcpy(object,inputObject,size);
			addToHeap(object,environment);

			tempName = ((V_String) inputObject)->string;
			size = strlen(tempName)+1;
			tempName = (Int1 *) X_malloc(size);
			memcpy(tempName,((V_String) inputObject)->string,size);
			((V_String) object)->string = tempName;
/*
			object = (V_Object) create_string( ((V_String) inputObject)->string,environment);
*/
			break;
			
		case kList:
			size = sizeof(VPL_List);
			memcpy(object,inputObject,size);
			addToHeap(object,environment);

			tempObjectList = ((V_List) inputObject)->objectList;
			listLength = ((V_List) inputObject)->listLength;
			size = listLength*sizeof(V_Object);
			tempObjectList = (V_Object	*) X_malloc(size);
			memcpy(tempObjectList,((V_List) inputObject)->objectList,size);
			((V_List) object)->objectList = tempObjectList;

			for(counter = 0;counter < listLength;counter++){
				increment_count(tempObjectList[counter]); 
			}
			break;
			
			break;
			
		case kInstance:
			size = sizeof(VPL_Instance);
			memcpy(object,inputObject,size);
			addToHeap(object,environment);

			tempName = ((V_Instance) inputObject)->name;
			size = strlen(tempName)+1;
			tempName = (Int1 *) X_malloc(size);
			memcpy(tempName,((V_Instance) inputObject)->name,size);
			((V_Instance) object)->name = tempName;

			tempObjectList = ((V_List) inputObject)->objectList;
			listLength = ((V_List) inputObject)->listLength;
			size = listLength*sizeof(V_Object);
			tempObjectList = (V_Object	*) X_malloc(size);
			memcpy(tempObjectList,((V_List) inputObject)->objectList,size);
			((V_List) object)->objectList = tempObjectList;

			for(counter = 0;counter < listLength;counter++){
				increment_count(tempObjectList[counter]); 
			}
			break;
/*
		case kExternalBlock:
			size = sizeof(VPL_ExternalBlock);
			memcpy(offset,object,size);
			archive->records = add_record(environment,archive->records,(Int1 *) offset,(Int1 *) object);
			object->mark = kTRUE;
			offset->system = offset->system & kSystemWatched;
			offset->use = 0;
			offset->previous = NULL;
			offset->next = NULL;
			currentPointer += size;
			break;

*/			
		case kExternalBlock:
			break;

		default:
			break;
	}
	return object;
}

V_Object copy(V_Environment environment, V_Object inputObject)
{
	V_Object	tempObject = NULL;
	tempObject = deep_copy(environment,inputObject);
	object_reset_mark(environment,inputObject);
	return tempObject;
}

Nat4 add_location(V_Environment environment, V_Archive archive, Int1 **location)
{
#pragma unused(environment)

	V_PointerLocation	tempLocation = NULL;

	tempLocation = (V_PointerLocation) X_malloc(sizeof(VPL_PointerLocation));
	tempLocation->pointerLocation = location;
	tempLocation->next = (struct VPL_PointerLocation *) archive->locations;
	archive->locations = tempLocation;

	return kNOERROR;
}

V_PointerRecord	add_record(V_Environment environment, V_PointerRecord record, Int1 *newPointer, Int1 *oldPointer)
{
#pragma unused(environment)

	V_PointerRecord	tempRecord = NULL;

	tempRecord = (V_PointerRecord) X_malloc(sizeof(VPL_PointerRecord));
	tempRecord->newPointer = newPointer;
	tempRecord->oldPointer = oldPointer;
	tempRecord->next = (struct VPL_PointerRecord *) record;

	return tempRecord;
}

Int1 *get_newPointer(V_Environment environment, V_PointerRecord	tempRecord, Int1 *oldPointer)
{
#pragma unused(environment)

	while(tempRecord != NULL){
		if(oldPointer == tempRecord->oldPointer) return tempRecord->newPointer;
		tempRecord = (V_PointerRecord) tempRecord->next;
	}
	
	return NULL;
}

Nat4 destroy_archive(V_Environment environment, V_Archive archive)
{
#pragma unused(environment)

	
	V_PointerLocation	tempLocation = NULL;
	V_PointerLocation	freeLocation = NULL;
	
	if(archive == NULL) return kNOERROR;
	tempLocation = archive->locations;
	while(tempLocation != NULL){
		freeLocation = tempLocation;
		tempLocation = (V_PointerLocation) tempLocation->next;
		X_free(freeLocation);
	}
	archive->locations = NULL;
	
	X_free(archive);
	
	return kNOERROR;
}

V_Archive archive_copy(V_Environment environment, V_Archive archive)
{
	V_Archive	tempArchive = NULL;
	Nat4		size = 0;
	
	if(archive == NULL) return kNOERROR;
	size = archive_size(environment,archive);
//	size = archive_size(NULL,archive);
	
	tempArchive = (V_Archive) X_malloc(size);
	memcpy(tempArchive,archive,size);

	return tempArchive;
}

V_Archive archive_create(V_Environment environment)
{
	V_Archive	archive = NULL;

	archive = (V_Archive) X_malloc(sizeof(VPL_Archive));
	if(archive == NULL){
		record_error("archive_create: NULL archive created","ARCHIVE",kERROR,environment);
		return NULL;
	}
	archive->locations = NULL;
	archive->objectSize = 0;
	archive->positions = NULL;
	archive->numberOfPositions = 0;

	return archive;
}

V_Object object_clone(V_Environment environment, V_Object object)
{
	V_Object	tempObject = NULL;
	Nat4		size = 0;

	if(object == NULL) return NULL;
	switch(object->type){
		case kObject:
		case kUndefined:
		case kNone:
		case kBoolean:
		case kInteger:
		case kReal:
			switch(object->type){
				case kObject:
					size = sizeof(VPL_Object);
					break;
				case kUndefined:
					size = sizeof(VPL_Undefined);
					break;
				case kNone:
					size = sizeof(VPL_None);
					break;
				case kBoolean:
					size = sizeof(VPL_Boolean);
					break;
				case kInteger:
					size = sizeof(VPL_Integer);
					break;
				case kReal:
					size = sizeof(VPL_Real);
					break;
			}
			tempObject = X_malloc(size);
			memcpy(tempObject,object,size);
			addToHeap(tempObject,environment);
			
			break;
			
		case kString:
			tempObject = (V_Object) create_string(((V_String)object)->string,environment);
			break;
			
		case kList:
			tempObject = (V_Object) clone_list(0,0,(V_List)object,((V_List)object)->listLength,environment);
			break;
			
		case kInstance:
			break;

		case kExternalBlock:
			break;
			
		default:
			break;
	}
	return tempObject;
}

Nat4 archive_size(V_Environment environment, V_Archive archive)
{
// #pragma unused(environment)

	Nat4		size = 0;
	Nat4		hostNumberOfPositions = 0;
	Nat4		hostObjectSize = 0;
	
	if(archive == NULL) return 0;
	size = sizeof(VPL_Archive) + (archive->numberOfPositions*sizeof(Int1 **)) + archive->objectSize;

	if( environment == NULL ) {
		hostNumberOfPositions = CFSwapInt32BigToHost((Nat4) archive->numberOfPositions);
		hostObjectSize = CFSwapInt32BigToHost((Nat4) archive->objectSize);
		size = sizeof(VPL_Archive) + (hostNumberOfPositions*sizeof(Int1 **)) + hostObjectSize;
	}
	
	if(size%4 != 0){
		size = 4*(size/4 + 1);
	}

	return size;
}

