/* A VPL Project File */
/*

Regression Project.c
Copyright: 2004 Scott B. Anderson

*/

#define vpl_MAIN "MAIN"

#include "VPL_Compiler.h"
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>


extern Int4 VPLP_show( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP__2B_1( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_Rect_2D_to_2D_list( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_string_2D_to_2D_pointer( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_make_2D_external( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP__22_length_22_( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
extern Int4 VPLP_pointer_2D_to_2D_string( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );

Nat4	*pClassConstantToIndex = NULL;
Nat4	*pMethodConstantToIndex = NULL;
Nat4	*pValueConstantToIndex = NULL;

long CompilerDummyCall(	long intA, long intB, long intc, long intd, long inte, long intf, long intg, long inth,
						long int1, long int2, long int3, long int4, long int5, long int6, long int7, long int8,
						long int9, long int10, long int11, long int12, long int13, long int14, long int15, long int16);
long CompilerDummyCall(	long intA, long intB, long intc, long intd, long inte, long intf, long intg, long inth,
						long int1, long int2, long int3, long int4, long int5, long int6, long int7, long int8,
						long int9, long int10, long int11, long int12, long int13, long int14, long int15, long int16)
{

	long result = 0;
	
	result = intA + intB + intc + intd + inte + intf + intg + inth
	+	int1 + int2 + int3 + int4 + int5 + int6 + int7 + int8
	+	int9 + int10 + int11 + int12 + int13 + int14 + int15 + int16;
	return result;
	
}

V_Object vpx_increment_count(V_Object object)
{
	if(object) object->use++;
	return object;
}

enum opTrigger vpx_constant(V_Environment environment, enum boolType *repeat, Nat4 contextClassIndex, Int1 *stringValue, V_Object *root)
{
#pragma unused(repeat)
#pragma unused(contextClassIndex)
	decrement_count(environment,*root); *root = string_to_object(stringValue,environment);
	
	return kSuccess;

}

enum opTrigger vpx_match(V_Environment environment, enum boolType *repeat, Nat4 contextClassIndex, Int1 *stringValue, V_Object terminal)
{
#pragma unused(repeat)
#pragma unused(contextClassIndex)
	enum opTrigger	result = kSuccess;
	V_Object		tempObject = NULL;
	
	tempObject = string_to_object(stringValue,environment);
	if(object_identity(tempObject,terminal)) result = kSuccess; // The "string" object must always come first so Boolean can match to Integer
	else result = kFailure;

	decrement_count(environment,tempObject);
	return result;
}

enum opTrigger vpx_instantiate(V_Environment environment, enum boolType *repeat, Nat4 contextClassIndex, Int4 classConstant,Nat4 numberOfTerminals,Nat4 numberOfRoots, ...)
{
#pragma unused(repeat)
#pragma unused(contextClassIndex)
	enum opTrigger	result = kSuccess;
	V_ClassEntry	theClassEntry = environment->classIndexTable->classes[pClassConstantToIndex[classConstant]];
	V_Class			tempClass = theClassEntry->theClass;
	V_Object		tempObject = (V_Object) construct_instance(tempClass,environment);

	Nat4			counter = 0;
	V_Object		*root = NULL;
	va_list			argList;
	V_Object		inputArray[32] = { NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,
									NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL };

	va_start(argList,numberOfRoots);
	for(counter = 0;counter<numberOfTerminals;counter++){
		inputArray[counter] = va_arg(argList,V_Object);
	}

	if(numberOfTerminals) {
		V_Object	theInputObject = inputArray[0];
		if(theInputObject && theInputObject->type == kList){
			V_List	theTempList = (V_List) theInputObject;
			Nat4	theListLength = theTempList->listLength;
			for(counter=0;counter<theListLength;counter++){
				Nat4		attributeOffset = 0;
				V_Object	theTempObject = theTempList->objectList[counter];
				V_List		theInternalList = NULL;
				V_Object	theAttributeObject = NULL;
				V_Object	theObjectToSet = NULL;
				V_Object	previousObject = NULL;
				Int1		*theAttribute = NULL;
				V_Instance	tempInstance = (V_Instance) tempObject;
				Nat4	columnIndex = -1;

				theInternalList = (V_List) theTempObject;
				theAttributeObject = theInternalList->objectList[0];
				theObjectToSet = theInternalList->objectList[1];
				theAttribute = ((V_String) theAttributeObject)->string;
				attributeOffset = attribute_offset(tempClass,theAttribute);
				if(attributeOffset == -1){
					Int1	*tempAString;
					Int1	*tempOString;
					V_Value	ptrM = NULL;
					columnIndex = (Nat4) get_node(environment->valuesDictionary,theAttribute);
					tempAString = new_cat_string("/",theAttribute,environment);
					tempOString = new_cat_string(tempClass->name,tempAString,environment);
					X_free(tempAString);
					ptrM = get_persistentNode(environment->persistentsTable,tempOString);
					X_free(tempOString);
					previousObject = ptrM->value;
					increment_count(theObjectToSet);
					decrement_count(environment,previousObject);
					ptrM->value = theObjectToSet;
				} else {
					V_Object		previousObject = tempInstance->objectList[attributeOffset];
					increment_count(theObjectToSet);
					decrement_count(environment,previousObject);
					tempInstance->objectList[attributeOffset] = theObjectToSet;
				}
			}
		}
	}

	while(theClassEntry && theClassEntry->constructorIndex == -1){
		if(theClassEntry->numberOfSuperClasses) theClassEntry = environment->classIndexTable->classes[theClassEntry->superClasses[0]];
		else theClassEntry = NULL;
	}
	if(theClassEntry && theClassEntry->constructorIndex != -1) {
		Nat4			methodConstant = 0;
		enum boolType localRepeat = kFALSE;
		V_Method theConstructor = theClassEntry->methods[theClassEntry->constructorIndex];
		while(pMethodConstantToIndex[methodConstant] != theConstructor->columnIndex){
			methodConstant++;
		}
		vpx_call_data_method(environment,&localRepeat,tempClass->classIndex,methodConstant,1,1,tempObject,&tempObject);
	}

	for(counter=0;counter<numberOfRoots;counter++){
		root = va_arg(argList,V_Object *);
		decrement_count(environment,*root); *root = tempObject;
	}
	va_end(argList);

	return result;
}

enum opTrigger vpx_get(V_Environment environment, enum boolType *repeat, Nat4 contextClassIndex, Int4 valueConstant, V_Object terminal, V_Object *root0, V_Object *root1)
{
#pragma unused(repeat)
#pragma unused(contextClassIndex)
	enum opTrigger	result = kSuccess;
	V_Object		tempObject = NULL;
	
	if(terminal->type == kInstance){
		V_Instance 		tempInstance = (V_Instance) terminal;
		V_ClassEntry	theClassEntry = environment->classIndexTable->classes[tempInstance->instanceIndex];
		V_ValueNode		tempValueNode = theClassEntry->values[pValueConstantToIndex[valueConstant]];
		if(tempValueNode->type == kAttributeNode){
			tempObject = tempInstance->objectList[tempValueNode->attributeOffset];
		} else {
			tempObject = tempValueNode->value->value;
		}
	} else {
	}

	increment_count(terminal);
	decrement_count(environment,*root0); *root0 = terminal;

	increment_count(tempObject);
	decrement_count(environment,*root1); *root1 = tempObject;
	return result;
}

enum opTrigger vpx_set(V_Environment environment, enum boolType *repeat, Nat4 contextClassIndex, Int4 valueConstant, V_Object terminal0, V_Object terminal1, V_Object *root0)
{
#pragma unused(repeat)
#pragma unused(contextClassIndex)
	enum opTrigger	result = kSuccess;
	V_Object		tempObject = NULL;
	
	if(terminal0->type == kInstance){
		V_Instance 		tempInstance = (V_Instance) terminal0;
		V_ClassEntry	theClassEntry = environment->classIndexTable->classes[tempInstance->instanceIndex];
		V_ValueNode		tempValueNode = theClassEntry->values[pValueConstantToIndex[valueConstant]];
		increment_count(terminal1);
		if(tempValueNode->type == kAttributeNode){
			tempObject = tempInstance->objectList[tempValueNode->attributeOffset];
			tempInstance->objectList[tempValueNode->attributeOffset] = terminal1;
		} else {
			tempObject = tempValueNode->value->value;
			tempValueNode->value->value = terminal1;
		}
		decrement_count(environment,tempObject);
	} else {
	}

	increment_count(terminal0);
	decrement_count(environment,*root0); *root0 = terminal0;

	return result;
}

enum opTrigger vpx_persistent(V_Environment environment, enum boolType *repeat, Nat4 contextClassIndex, Int4 valueConstant,Nat4 numberOfTerminals,Nat4 numberOfRoots, ...)
{
#pragma unused(repeat)
#pragma unused(contextClassIndex)
	enum opTrigger	result = kSuccess;
	
	Nat4			counter = 0;
	V_Object		*root = NULL;
	va_list			argList;
	V_Object		inputArray[32] = { NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,
									NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL };

	va_start(argList,numberOfRoots);
	for(counter = 0;counter<numberOfTerminals;counter++){
		inputArray[counter] = va_arg(argList,V_Object);
	}

	if(numberOfTerminals) {
		V_ClassEntry	theClassEntry = environment->classIndexTable->classes[0];
		V_ValueNode		theValueNode = theClassEntry->values[pValueConstantToIndex[valueConstant]];
		V_Object		tempObject = theValueNode->value->value;

		increment_count(inputArray[0]);
		decrement_count(environment,tempObject);
		theValueNode->value->value = inputArray[0];
	}
	if(numberOfRoots){
		V_ClassEntry	theClassEntry = environment->classIndexTable->classes[0];
		V_ValueNode		theValueNode = theClassEntry->values[pValueConstantToIndex[valueConstant]];
		V_Object		tempObject = theValueNode->value->value;

		root = va_arg(argList,V_Object *);
		increment_count(tempObject);
		decrement_count(environment,*root); *root = tempObject;
	}
	va_end(argList);

	return result;
}

enum opTrigger vpx_call_primitive(V_Environment environment, enum boolType *inputRepeat, Nat4 contextClassIndex,void *inputFunctionPtr,Nat4 numberOfTerminals,Nat4 numberOfRoots, ...)
{
#pragma unused(inputRepeat)
#pragma unused(contextClassIndex)
	Int4			(*functionPtr)( V_Environment , enum opTrigger * , Nat4 , Nat4 , vpl_PrimitiveInputs ) = inputFunctionPtr;
	enum opTrigger	trigger = kSuccess;
	Int4			result = kNOERROR;
	Nat4			counter = 0;

	V_Object		*root = NULL;
	va_list			argList;
	V_Object		inputArray[32] = { NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,
									NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL };

	va_start(argList,numberOfRoots);
	for(counter = 0;counter<numberOfTerminals;counter++){
		inputArray[counter] = va_arg(argList,V_Object);
	}

	result = (functionPtr)(environment,&trigger,numberOfTerminals,numberOfRoots,inputArray);
	for(counter=0;counter<numberOfRoots;counter++){
		root = va_arg(argList,V_Object *);
		decrement_count(environment,*root); *root = inputArray[counter+numberOfTerminals];
	}
	va_end(argList);
	return trigger;
}

enum opTrigger vpx_extconstant(V_Environment environment, enum boolType *repeat, Nat4 contextClassIndex, Int4 enumValue, V_Object *root)
{
#pragma unused(repeat)
#pragma unused(contextClassIndex)
	decrement_count(environment,*root); *root = (V_Object) int_to_integer(enumValue,environment);
	
	return kSuccess;

}

enum opTrigger vpx_extmatch(V_Environment environment, enum boolType *repeat, Nat4 contextClassIndex, Int4 enumValue, V_Object terminal)
{
#pragma unused(repeat)
#pragma unused(contextClassIndex)
	enum opTrigger	result = kSuccess;
	V_Object		tempObject = NULL;
	
	tempObject = (V_Object) int_to_integer(enumValue,environment);
	if(object_identity(terminal,tempObject)) result = kSuccess;
	else result = kFailure;

	decrement_count(environment,tempObject);
	return result;
}

enum opTrigger vpx_extget(V_Environment environment, enum boolType *repeat, Nat4 contextClassIndex, Int1 *tempOString,Nat4 numberOfTerminals,Nat4 numberOfRoots, ...)
{
#pragma unused(repeat)
#pragma unused(contextClassIndex)
	enum opTrigger	result = kSuccess;
	V_Object	possibleStructure = NULL;
	V_ExternalBlock	tempStructure = NULL;
	V_ExternalBlock	outStructure = NULL;
	V_ExtField		tempField = NULL;
	V_ExtStructure	extStructure = NULL;
	V_Object	tempObject = NULL;
	Nat4		size = 0;
	Nat4		offset = 0;
	Int4		tempInt = 0;
	Real10		tempReal = 0.0;
	Int1		*tempAString = NULL;
	Nat4		pointer = 0;
	vpl_Integer		inputOffset = 0;
	Bool		modeArray = kFALSE;
	Bool		modeAddress = kFALSE;
	enum parameterType	effectiveType = kIntType;


	Nat4			counter = 0;
	V_Object		*root = NULL;
	va_list			argList;
	V_Object		inputArray[32] = { NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,
									NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL };

	va_start(argList,numberOfRoots);
	for(counter = 0;counter<numberOfTerminals;counter++){
		inputArray[counter] = va_arg(argList,V_Object);
	}

	possibleStructure = inputArray[0];
	if(numberOfTerminals == 2) {
		inputOffset = ((V_Integer) inputArray[1])->value;
		modeArray = kTRUE;
	}
		
	tempStructure = (V_ExternalBlock) possibleStructure;
	
	extStructure = get_extStructure(environment->externalStructsTable,tempStructure->name);

		if(tempOString[0] == '&') {
			tempAString = (Int1 *) X_malloc(strlen(tempOString));
			strcpy(tempAString,tempOString+1);
			X_free(tempOString);
			tempOString = tempAString;
			modeAddress = kTRUE;
		}
		tempField = get_extField(extStructure,tempOString);
			size = tempField->size;
			offset = tempField->offset + size*inputOffset;
			if(tempStructure->levelOfIndirection == 0) pointer = (Nat4) tempStructure->blockPtr;
			else if(tempStructure->levelOfIndirection == 1) pointer = *(Nat4 *) tempStructure->blockPtr;
			else pointer = **(Nat4 **) tempStructure->blockPtr;
			pointer += offset;
			if(modeAddress){
				outStructure = create_externalBlock(tempField->typeName,size,environment);
				outStructure->blockPtr = X_malloc(sizeof(Nat4));
				*((Nat4 *) outStructure->blockPtr) = pointer;
				outStructure->levelOfIndirection = 1;
				tempObject = (V_Object) outStructure;
			} else {
				if(modeArray && tempField->type == kPointerType) effectiveType = kLongType;
				else effectiveType = tempField->type;
				switch(effectiveType){
							case kLongType:
							case kShortType:
							case kCharType:
							case kEnumType:
							case kIntType:
								switch(size){
									case 1:
                                		tempInt = *((Int1 *) pointer);
										tempObject = (V_Object) int_to_integer(tempInt,environment);
										break;
									case 2:
                                		tempInt = *((Int2 *) pointer);
										tempObject = (V_Object) int_to_integer(tempInt,environment);
										break;
									case 4:
									default:
                                		tempInt = *((Int4 *) pointer);
										tempObject = (V_Object) int_to_integer(tempInt,environment);
										break;
								}
                                break;

							case kUnsignedType:
								switch(size){
									case 1:
                                		tempInt = *((Nat1 *) pointer);
										tempObject = (V_Object) int_to_integer(tempInt,environment);
										break;
									case 2:
                                		tempInt = *((Nat2 *) pointer);
										tempObject = (V_Object) int_to_integer(tempInt,environment);
										break;
									case 4:
									default:
                                		tempInt = *((Nat4 *) pointer);
										tempObject = (V_Object) int_to_integer(tempInt,environment);
										break;
								}
                                break;

							case kDoubleType:
							case kFloatType:
								switch(size){
									case 4:
									default:
                                		tempReal = *((float *) pointer);
										tempObject = (V_Object) float_to_real(tempReal,environment);
										break;
									case 8:
                                		tempReal = *((double *) pointer);
										tempObject = (V_Object) float_to_real(tempReal,environment);
										break;
								}
                                break;

							case kPointerType:
                            	outStructure = create_externalBlock(tempField->pointerTypeName,size,environment);
                            	outStructure->blockPtr = X_malloc(size);
                            	memcpy(outStructure->blockPtr,(void *) pointer,size);
                            	outStructure->levelOfIndirection = tempField->indirection;
                            	tempObject = (V_Object) outStructure;
                                break;

                            case kStructure:
                            	outStructure = create_externalBlock(tempField->typeName,tempField->size,environment);
                            	outStructure->blockPtr = X_malloc(tempField->size);
                            	memcpy(outStructure->blockPtr,(void *) pointer,tempField->size);
                            	tempObject = (V_Object) outStructure;
                                break;

                            case kVoidType:
                                break;

                        }
			}

	root = va_arg(argList,V_Object *);
	increment_count(inputArray[0]);
	decrement_count(environment,*root); *root = inputArray[0];

	root = va_arg(argList,V_Object *);
	decrement_count(environment,*root); *root = tempObject;

	va_end(argList);

	return result;
}

enum opTrigger vpx_extset(V_Environment environment, enum boolType *repeat, Nat4 contextClassIndex, Int1 *tempOString,Nat4 numberOfTerminals,Nat4 numberOfRoots, ...)
{
#pragma unused(repeat)
#pragma unused(contextClassIndex)
	enum opTrigger	result = kSuccess;

	V_Object	block = NULL;
	V_Object	possibleStructure = NULL;
	V_ExternalBlock	tempStructure = NULL;
	V_ExternalBlock	externalBlock = NULL;
	V_ExtField		tempField = NULL;
	V_ExtStructure	extStructure = NULL;
	Nat4		size = 0;
	Nat4		offset = 0;
	Int4		tempInt = 0;
	Real10		tempReal = 0;
	Nat4		pointer = 0;
	void		*voidPointer = NULL;
	vpl_Integer		inputOffset = 0;
	Bool		modeArray = kFALSE;
	enum parameterType	effectiveType = kIntType;

	Nat4			counter = 0;
	V_Object		*root = NULL;
	va_list			argList;
	V_Object		inputArray[32] = { NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,
									NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL };

	va_start(argList,numberOfRoots);
	for(counter = 0;counter<numberOfTerminals;counter++){
		inputArray[counter] = va_arg(argList,V_Object);
	}

	possibleStructure = inputArray[0];
	block = inputArray[1];
	if(numberOfTerminals == 3) {
		inputOffset = ((V_Integer) inputArray[2])->value;
		modeArray = kTRUE;
	}
	
	tempStructure = (V_ExternalBlock) possibleStructure;
	extStructure = get_extStructure(environment->externalStructsTable,tempStructure->name);

		tempField = get_extField(extStructure,tempOString);
			size = tempField->size;
			offset = tempField->offset+size*inputOffset;
			if(tempStructure->levelOfIndirection == 0) pointer = (Nat4) tempStructure->blockPtr;
			else if(tempStructure->levelOfIndirection == 1) pointer = *(Nat4 *) tempStructure->blockPtr;
			else pointer = **(Nat4 **) tempStructure->blockPtr;
			pointer += offset;
			if(modeArray && tempField->type == kPointerType) effectiveType = kLongType;
			else effectiveType = tempField->type;
                        switch(effectiveType){
							case kLongType:
							case kShortType:
							case kCharType:
							case kEnumType:
							case kIntType:
								if(block == NULL) {
                                		tempInt = 0;
								} else {
								switch(block->type){
									case kInteger:
                                		tempInt = ((V_Integer)block)->value;
										break;
									case kBoolean:
                                		tempInt = ((V_Boolean)block)->value;
										break;
								}
								}
								switch(size){
									case 1:
                                		*((Int1 *) pointer) = tempInt;
										break;
									case 2:
                                		*((Int2 *) pointer) = tempInt;
										break;
									case 4:
									default:
                                		*((Int4 *) pointer) = tempInt;
										break;
								}
                                break;

							case kUnsignedType:
								if(block == NULL) {
                                		tempInt = 0;
								} else {
								switch(block->type){
									case kInteger:
                                		tempInt = ((V_Integer)block)->value;
										break;
									case kBoolean:
                                		tempInt = ((V_Boolean)block)->value;
										break;
								}
								}
								switch(size){
									case 1:
                                		*((Nat1 *) pointer) = tempInt;
										break;
									case 2:
                                		*((Nat2 *) pointer) = tempInt;
										break;
									case 4:
									default:
                                		*((Nat4 *) pointer) = tempInt;
										break;
								}
                                break;

							case kFloatType:
							case kDoubleType:
								if(block == NULL) {
                                		tempReal = 0.0;
								} else {
								switch(block->type){
									case kInteger:
                                		tempReal = ((V_Integer)block)->value;
										break;
									case kBoolean:
                                		tempReal = ((V_Boolean)block)->value;
										break;
									case kReal:
                                		tempReal = ((V_Real)block)->value;
										break;
								}
								}
								switch(size){
									case 4:
									default:
                                		*((float *) pointer) = tempReal;
										break;
									case 8:
                                		*((double *) pointer) = tempReal;
										break;
								}
                                break;

							case kPointerType:
								if(block == NULL) *(Nat4 *) pointer = 0;
								else switch(block->type){
										case kExternalBlock:
											externalBlock = (V_ExternalBlock) block;
											voidPointer = externalBlock->blockPtr;
											if(externalBlock->levelOfIndirection == 0) {
												*(Nat4 *) pointer = (Nat4) VPXMALLOC(externalBlock->size,char);
												memcpy((char *) (*(Nat4 *) pointer),voidPointer,externalBlock->size);
											}
											else if(externalBlock->levelOfIndirection == 1) *(Nat4 *) pointer = *(Nat4 *) voidPointer;
											else *(Nat4 *) pointer = **(Nat4 **) voidPointer;
											break;
										case kString:
											voidPointer = ( (V_String) block)->string;
											*(Nat4 *) pointer = (Nat4) VPXMALLOC(strlen(voidPointer)+1,char);
											memcpy((char *) (*(Nat4 *) pointer),voidPointer,strlen(voidPointer)+1);
											break;
									}
                                break;

                            case kStructure:
								externalBlock = (V_ExternalBlock) block;
								voidPointer = externalBlock->blockPtr;
								if(externalBlock->levelOfIndirection == 0) memcpy((void *) pointer,voidPointer,tempField->size);
                                break;

                            case kVoidType:
                                break;

                        }

	root = va_arg(argList,V_Object *);
	increment_count(inputArray[0]);
	decrement_count(environment,*root); *root = inputArray[0];

	va_end(argList);

	return result;
}

extern unsigned long get_terminal(char theChar);
extern V_EvalToken create_token(enum tokenType type,enum operatorType operationType,V_EvalExpression expression,Int4 integerValue,Real10 realValue);
extern V_EvalTokenList create_tokenList(void);

V_EvalTokenList	vpx_parse_string(V_Environment environment,V_Object inputArray[],Int1* testString);
V_EvalTokenList	vpx_parse_string(V_Environment environment,V_Object inputArray[],Int1* testString)
{
	VPL_EvalTokenList	*theInitialTokenList;
	V_EvalToken			theToken;
	Int1				theCharacter = '\0';
	Nat4				counter = 0;
	Nat4				stringLength = strlen(testString);
	Int1*				scratchPad = (Int1 *) X_malloc(stringLength*sizeof(Int1));
	Int4				theIntegerValue = 0;
	Real10				theRealValue = 0.0;
	Int1*				tempPad = NULL;
	Bool				isReal = kFALSE;
	V_Object			tempObject = NULL;
	
	memset(scratchPad,0,stringLength);
	
	theInitialTokenList = create_tokenList();
	theToken = create_token(kTokenTypeLParen,kOperatorTypeNoop,NULL,0,0.0);
	add_token(theInitialTokenList,theToken);
	
	for(counter = 0;counter < stringLength; counter++){
		theCharacter = testString[counter];
		if(isalpha(theCharacter)){
			tempObject = inputArray[get_terminal(theCharacter)];
			if(!tempObject){
				theToken = create_token(kTokenTypeIntegerConstant,kOperatorTypeNoop,NULL,0,0.0);
			} else if (tempObject->type == kInteger){
				theToken = create_token(kTokenTypeIntegerConstant,kOperatorTypeNoop,NULL,((V_Integer) tempObject)->value,0.0);
			} else if (tempObject->type == kReal){
				theToken = create_token(kTokenTypeRealConstant,kOperatorTypeNoop,NULL,0,((V_Real) tempObject)->value);
			} else if (tempObject->type == kBoolean){
				theToken = create_token(kTokenTypeIntegerConstant,kOperatorTypeNoop,NULL,((V_Boolean) tempObject)->value,0.0);
			} else {
				record_error("evaluate: Invalid input: ",NULL,kERROR,environment);
				return NULL;
			}
		} else if(isdigit(theCharacter)){
			tempPad = scratchPad;
			while(isdigit(theCharacter) || theCharacter == '.'){
				if(theCharacter == '.') isReal = kTRUE;
				*tempPad++ = theCharacter;
				theCharacter = testString[++counter];
			}
			if(isReal) {
				theRealValue = atof(scratchPad);
				theToken = create_token(kTokenTypeRealConstant,kOperatorTypeNoop,NULL,0,theRealValue);
			} else {
				theIntegerValue = atoi(scratchPad);
				theToken = create_token(kTokenTypeIntegerConstant,kOperatorTypeNoop,NULL,theIntegerValue,0.0);
			}
			memset(scratchPad,0,stringLength);
			counter--;
		} else switch(theCharacter){
			case '(':
				theToken = create_token(kTokenTypeLParen,kOperatorTypeNoop,NULL,0,0.0);
				break;
				
			case ')':
				theToken = create_token(kTokenTypeRParen,kOperatorTypeNoop,NULL,0,0.0);
				break;
				
			case '@':
				theToken = create_token(kTokenTypeOperator,kOperatorTypeExponent,NULL,0,0.0);
				break;
				
			case '+':
				theToken = theInitialTokenList->last;
				if(theToken->type == kTokenTypeOperator || 
					theToken->type == kTokenTypeLParen) theToken = create_token(kTokenTypeOperator,kOperatorTypePositive,NULL,0,0.0);
				else theToken = create_token(kTokenTypeOperator,kOperatorTypeAddition,NULL,0,0.0);
				break;
				
			case '-':
				theToken = theInitialTokenList->last;
				if(theToken->type == kTokenTypeOperator || 
					theToken->type == kTokenTypeLParen) theToken = create_token(kTokenTypeOperator,kOperatorTypeNegative,NULL,0,0.0);
				else theToken = create_token(kTokenTypeOperator,kOperatorTypeSubtraction,NULL,0,0.0);
				break;
				
			case '*':
				theToken = create_token(kTokenTypeOperator,kOperatorTypeMultiplication,NULL,0,0.0);
				break;
				
			case '/':
				if(testString[counter+1] == '/') {
					theToken = create_token(kTokenTypeOperator,kOperatorTypeIntegerDivision,NULL,0,0.0);
					counter++;
				} else theToken = create_token(kTokenTypeOperator,kOperatorTypeDivision,NULL,0,0.0);
				break;
				
			case '%':
				theToken = create_token(kTokenTypeOperator,kOperatorTypeRemainder,NULL,0,0.0);
				break;
				
			case '&':
				theToken = create_token(kTokenTypeOperator,kOperatorTypeBitwiseAnd,NULL,0,0.0);
				break;
				
			case '|':
				theToken = create_token(kTokenTypeOperator,kOperatorTypeBitwiseOr,NULL,0,0.0);
				break;
				
			case '^':
				theToken = create_token(kTokenTypeOperator,kOperatorTypeBitwiseXor,NULL,0,0.0);
				break;
				
			case '~':
				theToken = create_token(kTokenTypeOperator,kOperatorTypeBitwiseNot,NULL,0,0.0);
				break;
				
			case '<':
				if(testString[counter+1] == '<') {
					theToken = create_token(kTokenTypeOperator,kOperatorTypeBitShiftLeft,NULL,0,0.0);
					counter++;
				}
				break;
				
			case '>':
				if(testString[counter+1] == '>') {
					theToken = create_token(kTokenTypeOperator,kOperatorTypeBitShiftRight,NULL,0,0.0);
					counter++;
				}
				break;
				
			default:
				continue;
		}
		add_token(theInitialTokenList,theToken);
	}
	theToken = create_token(kTokenTypeRParen,kOperatorTypeNoop,NULL,0,0.0);
	add_token(theInitialTokenList,theToken);
	
	return theInitialTokenList;
}

enum opTrigger vpx_call_evaluate(V_Environment environment, enum boolType *inputRepeat, Nat4 contextClassIndex,Int1 *tempString,Nat4 numberOfTerminals,Nat4 numberOfRoots, ...)
{
#pragma unused(inputRepeat)
#pragma unused(contextClassIndex)
	enum opTrigger	trigger = kSuccess;

	V_EvalTokenList theInitialTokenList;
	V_EvalToken		theFinalToken = NULL;
	V_EvalToken		theLastToken = NULL;
	V_Object		tempObject = NULL;

	Nat4			counter = 0;

	V_Object		*root = NULL;
	va_list			argList;
	V_Object		inputArray[32] = { NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,
									NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL };

	va_start(argList,numberOfRoots);
	for(counter = 0;counter<numberOfTerminals;counter++){
		inputArray[counter] = va_arg(argList,V_Object);
	}

	theInitialTokenList = vpx_parse_string(environment,inputArray,tempString);
	theFinalToken = reduce_complex(theInitialTokenList->first,theLastToken);
	theInitialTokenList->first = NULL;
	theInitialTokenList->last = NULL;
	add_token(theInitialTokenList,theFinalToken);
	theFinalToken = execute_tokenList(theInitialTokenList->first);
	
	if(theFinalToken->type == kTokenTypeIntegerConstant) tempObject = (V_Object) int_to_integer(theFinalToken->integerValue,environment);
	else tempObject = (V_Object) float_to_real(theFinalToken->realValue,environment);

	root = va_arg(argList,V_Object *);
	decrement_count(environment,*root); *root = tempObject;
	va_end(argList);

	return trigger;
}

#if __i386__
enum opTrigger vpx_call_data_method(V_Environment environment, enum boolType *inputRepeat, Nat4 contextClassIndex,Int4 methodConstant,Nat4 numberOfTerminals,Nat4 numberOfRoots, ...)
{
	register long tempInt = 0;
	Nat4			inarity = numberOfTerminals + numberOfRoots;
	V_Instance		tempInstance = NULL;
	V_ClassEntry	theClassEntry = NULL;
	V_Method		theMethod = NULL;

	Nat4 *parameterArea = NULL;
	Nat4 gprCounter = 0;
	Nat4 argument = 0;

	va_list			argList;

	asm( "movl %%esp,%0" : "=r" (tempInt) : /* No inputs */ );	// Get the stack pointer
	parameterArea = (Nat4 *) tempInt;		/* Set the initial parameter area to the stack pointer */
	tempInt = CompilerDummyCall(1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24);	/* Force the compiler to allocate 24 words in the parameter area*/

	va_start(argList,numberOfRoots);

/* Past this point no fiddling with R3! for example by calling a subroutine whose output would be place in R3 */	
	
	tempInstance = (V_Instance) va_arg(argList,V_Object);
	inarity--;
	
	theClassEntry = environment->classIndexTable->classes[tempInstance->instanceIndex];
	theMethod = theClassEntry->methods[pMethodConstantToIndex[methodConstant]];
	while(!theMethod){
		theClassEntry = environment->classIndexTable->classes[theClassEntry->superClasses[0]];
		theMethod = theClassEntry->methods[pMethodConstantToIndex[methodConstant]];
	}
	
	if(theClassEntry->theClass) contextClassIndex = theClassEntry->theClass->classIndex;
	else contextClassIndex = 0;

	gprCounter = 0;
	tempInt = (Nat4) environment;
	*(parameterArea + gprCounter++) = tempInt;
	
	tempInt = (Nat4) inputRepeat;
	*(parameterArea + gprCounter++) = tempInt;
	
	tempInt = (Nat4) contextClassIndex;
	*(parameterArea + gprCounter++) = tempInt;
	
	tempInt = (Nat4) tempInstance;
	*(parameterArea + gprCounter++) = tempInt;

	for(argument = 0; argument < inarity; argument++){
			tempInt = (Nat4) va_arg(argList,V_Object);
			*(parameterArea + gprCounter++) = tempInt;
	} /* End For(argument) Loop */
	
	va_end(argList);
	
	tempInt = (Nat4) theMethod->functionPointer;
	asm( "movl %0,%%eax" : /* No outputs */ : "r" (tempInt) );
	asm( "call *%%eax" : /* No outputs */ : /* No inputs */ );
	asm( "movl %%eax,%0" : "=r" (tempInt) : /* No inputs */ );

	return tempInt;
}
#endif

#if __ppc__
enum opTrigger vpx_call_data_method(V_Environment environment, enum boolType *inputRepeat, Nat4 contextClassIndex,Int4 methodConstant,Nat4 numberOfTerminals,Nat4 numberOfRoots, ...)
{
	register long tempInt = 0;
#ifdef __MWERKS__
	register void* functionPtr = NULL;
#elif __GNUC__
	asm{
		mr tempInt,r1
	}					/* Get the stack pointer */
#endif
	VPL_GPRegisters theRegisters;
	V_GPRegisters theRegistersPtr = &theRegisters;
	Int4			result = kNOERROR;
	Nat4			inarity = numberOfTerminals + numberOfRoots;
	V_Instance		tempInstance = NULL;
	V_ClassEntry	theClassEntry = NULL;
	V_Method		theMethod = NULL;

	Nat4 *parameterArea = NULL;
	Nat4 gprCounter = 0;
	Nat4 argument = 0;

	va_list			argList;

#ifdef __MWERKS__
	asm{
		mr tempInt,r1
	}					/* Get the stack pointer */
#endif
	parameterArea = (Nat4 *) tempInt;		/* Set the initial parameter area to the stack pointer */
	parameterArea += 6;						/* Add 6 words to skip over the linkage area to the start of the parameter area */
	if(result) tempInt = CompilerDummyCall(1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24);	/* Force the compiler to allocate 24 words in the parameter area*/

	va_start(argList,numberOfRoots);

/* Past this point no fiddling with R3! for example by calling a subroutine whose output would be place in R3 */	
	
	tempInstance = (V_Instance) va_arg(argList,V_Object);
	inarity--;
	
	theClassEntry = environment->classIndexTable->classes[tempInstance->instanceIndex];
	theMethod = theClassEntry->methods[pMethodConstantToIndex[methodConstant]];
	while(!theMethod){
		theClassEntry = environment->classIndexTable->classes[theClassEntry->superClasses[0]];
		theMethod = theClassEntry->methods[pMethodConstantToIndex[methodConstant]];
	}
	
	if(theClassEntry->theClass) contextClassIndex = theClassEntry->theClass->classIndex;
	else contextClassIndex = 0;

	gprCounter = 0;
	tempInt = (Nat4) environment;
#ifdef __MWERKS__
	asm{
		mr r3,tempInt
	}
#elif __GNUC__
	theRegistersPtr->register3 = tempInt;
#endif	
	gprCounter++;
	tempInt = (Nat4) inputRepeat;
#ifdef __MWERKS__
	asm{
		mr r4,tempInt
	}
#elif __GNUC__
	theRegistersPtr->register4 = tempInt;
#endif	
	gprCounter++;
	tempInt = (Nat4) contextClassIndex;
#ifdef __MWERKS__
	asm{
		mr r5,tempInt
	}
#elif __GNUC__
	theRegistersPtr->register5 = tempInt;
#endif	
	gprCounter++;
	tempInt = (Nat4) tempInstance;
#ifdef __MWERKS__
	asm{
		mr r6,tempInt
	}
#elif __GNUC__
	theRegistersPtr->register6 = tempInt;
#endif	

	gprCounter++;

	for(argument = 0; argument < inarity; argument++){
			tempInt = (Nat4) va_arg(argList,V_Object);
			switch(gprCounter){

#ifdef __MWERKS__
					case 4: asm{
								mr r7,tempInt
							}
#elif __GNUC__
					case 4: theRegistersPtr->register7 = tempInt;
#endif	
							gprCounter++; break;
#ifdef __MWERKS__
					case 5: asm{
								mr r8,tempInt
							}
#elif __GNUC__
					case 5: theRegistersPtr->register8 = tempInt;
#endif	
							gprCounter++; break;
#ifdef __MWERKS__
					case 6: asm{
								mr r9,tempInt
							}
#elif __GNUC__
					case 6: theRegistersPtr->register9 = tempInt;
#endif	
							gprCounter++; break;
#ifdef __MWERKS__
					case 7: asm{
								mr r10,tempInt
							}
#elif __GNUC__
					case 7: theRegistersPtr->register10 = tempInt;
#endif	
							gprCounter++; break;
					case 8: case 9: case 10: case 11: case 12: case 13: case 14: case 15: case 16: case 17: case 18: case 19: case 20: case 21: case 22: case 23: *(parameterArea + gprCounter++) = tempInt; break;
			}
	} /* End For(argument) Loop */
	va_end(argList);
	
#ifdef __MWERKS__
	functionPtr = theMethod->functionPointer;
	asm{
			mr         r12,functionPtr
			mtctr      r12
			bctrl
			mr         tempInt,r3
	}
#elif __GNUC__
	asm{
			lwz			r3,theRegistersPtr->register3
			lwz			r4,theRegistersPtr->register4
			lwz			r5,theRegistersPtr->register5
			lwz			r6,theRegistersPtr->register6
			lwz			r7,theRegistersPtr->register7
			lwz			r8,theRegistersPtr->register8
			lwz			r9,theRegistersPtr->register9
			lwz			r10,theRegistersPtr->register10
			lwz			r12,theMethod->functionPointer
			mtctr		r12
			bctrl
			mr			tempInt,r3
	}
#endif	

	return tempInt;
}
#endif

#if __i386__
enum opTrigger vpx_call_context_method(V_Environment environment, enum boolType *inputRepeat, Nat4 contextClassIndex,Int4 methodConstant,Nat4 numberOfTerminals,Nat4 numberOfRoots, ...)
{
	register long tempInt = 0;
	Nat4			inarity = numberOfTerminals + numberOfRoots;
	V_ClassEntry	theClassEntry = NULL;
	V_Method		theMethod = NULL;

	Nat4 *parameterArea = NULL;
	Nat4 gprCounter = 0;
	Nat4 argument = 0;

	va_list			argList;

	asm( "movl %%esp,%0" : "=r" (tempInt) : /* No inputs */ );	// Get the stack pointer
	parameterArea = (Nat4 *) tempInt;		/* Set the initial parameter area to the stack pointer */
	tempInt = CompilerDummyCall(1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24);	/* Force the compiler to allocate 24 words in the parameter area*/

	va_start(argList,numberOfRoots);

/* Past this point no fiddling with R3! for example by calling a subroutine whose output would be place in R3 */	
	
	theClassEntry = environment->classIndexTable->classes[contextClassIndex];
	theMethod = theClassEntry->methods[pMethodConstantToIndex[methodConstant]];
	while(!theMethod){
		theClassEntry = environment->classIndexTable->classes[theClassEntry->superClasses[0]];
		theMethod = theClassEntry->methods[pMethodConstantToIndex[methodConstant]];
	}
	
	if(theClassEntry->theClass) contextClassIndex = theClassEntry->theClass->classIndex;
	else contextClassIndex = 0;

	gprCounter = 0;
	tempInt = (Nat4) environment;
	*(parameterArea + gprCounter++) = tempInt;
	
	tempInt = (Nat4) inputRepeat;
	*(parameterArea + gprCounter++) = tempInt;
	
	tempInt = (Nat4) contextClassIndex;
	*(parameterArea + gprCounter++) = tempInt;
	
	for(argument = 0; argument < inarity; argument++){
			tempInt = (Nat4) va_arg(argList,V_Object);
			*(parameterArea + gprCounter++) = tempInt;
	} /* End For(argument) Loop */
	
	va_end(argList);
	
	tempInt = (Nat4) theMethod->functionPointer;
	asm( "movl %0,%%eax" : /* No outputs */ : "r" (tempInt) );
	asm( "call *%%eax" : /* No outputs */ : /* No inputs */ );
	asm( "movl %%eax,%0" : "=r" (tempInt) : /* No inputs */ );

	return tempInt;
}
#endif

#if __ppc__
enum opTrigger vpx_call_context_method(V_Environment environment, enum boolType *inputRepeat, Nat4 contextClassIndex,Int4 methodConstant,Nat4 numberOfTerminals,Nat4 numberOfRoots, ...)
{
	register long tempInt = 0;
#ifdef __MWERKS__
	register void* functionPtr = NULL;
#elif __GNUC__
	asm{
		mr tempInt,r1
	}					/* Get the stack pointer */
#endif
	VPL_GPRegisters theRegisters;
	V_GPRegisters theRegistersPtr = &theRegisters;
	Int4			result = kNOERROR;
	Nat4			inarity = numberOfTerminals + numberOfRoots;
	V_ClassEntry	theClassEntry = NULL;
	V_Method		theMethod = NULL;

	Nat4 *parameterArea = NULL;
	Nat4 gprCounter = 0;
	Nat4 argument = 0;

	va_list			argList;

#ifdef __MWERKS__
	asm{
		mr tempInt,r1
	}					/* Get the stack pointer */
#endif
	parameterArea = (Nat4 *) tempInt;		/* Set the initial parameter area to the stack pointer */
	parameterArea += 6;						/* Add 6 words to skip over the linkage area to the start of the parameter area */
	if(result) tempInt = CompilerDummyCall(1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24);	/* Force the compiler to allocate 24 words in the parameter area*/

	va_start(argList,numberOfRoots);

/* Past this point no fiddling with R3! for example by calling a subroutine whose output would be place in R3 */	
	
	theClassEntry = environment->classIndexTable->classes[contextClassIndex];
	theMethod = theClassEntry->methods[pMethodConstantToIndex[methodConstant]];
	while(!theMethod){
		theClassEntry = environment->classIndexTable->classes[theClassEntry->superClasses[0]];
		theMethod = theClassEntry->methods[pMethodConstantToIndex[methodConstant]];
	}
	
	if(theClassEntry->theClass) contextClassIndex = theClassEntry->theClass->classIndex;
	else contextClassIndex = 0;

	gprCounter = 0;
	tempInt = (Nat4) environment;
#ifdef __MWERKS__
	asm{
		mr r3,tempInt
	}
#elif __GNUC__
	theRegistersPtr->register3 = tempInt;
#endif	
	gprCounter++;
	tempInt = (Nat4) inputRepeat;
#ifdef __MWERKS__
	asm{
		mr r4,tempInt
	}
#elif __GNUC__
	theRegistersPtr->register4 = tempInt;
#endif	
	gprCounter++;
	tempInt = (Nat4) contextClassIndex;
#ifdef __MWERKS__
	asm{
		mr r5,tempInt
	}
#elif __GNUC__
	theRegistersPtr->register5 = tempInt;
#endif	
	gprCounter++;

	for(argument = 0; argument < inarity; argument++){
			tempInt = (Nat4) va_arg(argList,V_Object);
			switch(gprCounter){
#ifdef __MWERKS__
					case 3: asm{
								mr r6,tempInt
							}
#elif __GNUC__
					case 3: theRegistersPtr->register6 = tempInt;
#endif	
							gprCounter++; break;
#ifdef __MWERKS__
					case 4: asm{
								mr r7,tempInt
							}
#elif __GNUC__
					case 4: theRegistersPtr->register7 = tempInt;
#endif	
							gprCounter++; break;
#ifdef __MWERKS__
					case 5: asm{
								mr r8,tempInt
							}
#elif __GNUC__
					case 5: theRegistersPtr->register8 = tempInt;
#endif	
							gprCounter++; break;
#ifdef __MWERKS__
					case 6: asm{
								mr r9,tempInt
							}
#elif __GNUC__
					case 6: theRegistersPtr->register9 = tempInt;
#endif	
							gprCounter++; break;
#ifdef __MWERKS__
					case 7: asm{
								mr r10,tempInt
							}
#elif __GNUC__
					case 7: theRegistersPtr->register10 = tempInt;
#endif	
							gprCounter++; break;
					case 8: case 9: case 10: case 11: case 12: case 13: case 14: case 15: case 16: case 17: case 18: case 19: case 20: case 21: case 22: case 23: *(parameterArea + gprCounter++) = tempInt; break;
			}
	} /* End For(argument) Loop */
	va_end(argList);
	
#ifdef __MWERKS__
	functionPtr = theMethod->functionPointer;
	asm{
			mr         r12,functionPtr
			mtctr      r12
			bctrl
			mr         tempInt,r3
	}
#elif __GNUC__
	asm{
			lwz			r3,theRegistersPtr->register3
			lwz			r4,theRegistersPtr->register4
			lwz			r5,theRegistersPtr->register5
			lwz			r6,theRegistersPtr->register6
			lwz			r7,theRegistersPtr->register7
			lwz			r8,theRegistersPtr->register8
			lwz			r9,theRegistersPtr->register9
			lwz			r10,theRegistersPtr->register10
			lwz			r12,theMethod->functionPointer
			mtctr		r12
			bctrl
			mr			tempInt,r3
	}
#endif	

	return tempInt;
}
#endif

#if __i386__
enum opTrigger vpx_call_context_super_method(V_Environment environment, enum boolType *inputRepeat, Nat4 contextClassIndex,Int4 methodConstant,Nat4 numberOfTerminals,Nat4 numberOfRoots, ...)
{
	register long tempInt = 0;
	Nat4			inarity = numberOfTerminals + numberOfRoots;
	V_ClassEntry	theClassEntry = NULL;
	V_Method		theMethod = NULL;

	Nat4 *parameterArea = NULL;
	Nat4 gprCounter = 0;
	Nat4 argument = 0;

	va_list			argList;

	asm( "movl %%esp,%0" : "=r" (tempInt) : /* No inputs */ );	// Get the stack pointer
	parameterArea = (Nat4 *) tempInt;		/* Set the initial parameter area to the stack pointer */
	tempInt = CompilerDummyCall(1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24);	/* Force the compiler to allocate 24 words in the parameter area*/

	va_start(argList,numberOfRoots);

/* Past this point no fiddling with R3! for example by calling a subroutine whose output would be place in R3 */	
	
	theClassEntry = environment->classIndexTable->classes[contextClassIndex];
	theClassEntry = environment->classIndexTable->classes[theClassEntry->superClasses[0]];
	theMethod = theClassEntry->methods[pMethodConstantToIndex[methodConstant]];
	while(!theMethod){
		theClassEntry = environment->classIndexTable->classes[theClassEntry->superClasses[0]];
		theMethod = theClassEntry->methods[pMethodConstantToIndex[methodConstant]];
	}
	
	if(theClassEntry->theClass) contextClassIndex = theClassEntry->theClass->classIndex;
	else contextClassIndex = 0;

	gprCounter = 0;
	tempInt = (Nat4) environment;
	*(parameterArea + gprCounter++) = tempInt;
	
	tempInt = (Nat4) inputRepeat;
	*(parameterArea + gprCounter++) = tempInt;
	
	tempInt = (Nat4) contextClassIndex;
	*(parameterArea + gprCounter++) = tempInt;
	
	for(argument = 0; argument < inarity; argument++){
			tempInt = (Nat4) va_arg(argList,V_Object);
			*(parameterArea + gprCounter++) = tempInt;
	} /* End For(argument) Loop */
	
	va_end(argList);
	
	tempInt = (Nat4) theMethod->functionPointer;
	asm( "movl %0,%%eax" : /* No outputs */ : "r" (tempInt) );
	asm( "call *%%eax" : /* No outputs */ : /* No inputs */ );
	asm( "movl %%eax,%0" : "=r" (tempInt) : /* No inputs */ );

	return tempInt;
}
#endif

#if __ppc__
enum opTrigger vpx_call_context_super_method(V_Environment environment, enum boolType *inputRepeat, Nat4 contextClassIndex,Int4 methodConstant,Nat4 numberOfTerminals,Nat4 numberOfRoots, ...)
{
	register long tempInt = 0;
#ifdef __MWERKS__
	register void* functionPtr = NULL;
#elif __GNUC__
	asm{
		mr tempInt,r1
	}					/* Get the stack pointer */
#endif
	VPL_GPRegisters theRegisters;
	V_GPRegisters theRegistersPtr = &theRegisters;
	Int4			result = kNOERROR;
	Nat4			inarity = numberOfTerminals + numberOfRoots;
	V_ClassEntry	theClassEntry = NULL;
	V_Method		theMethod = NULL;

	Nat4 *parameterArea = NULL;
	Nat4 gprCounter = 0;
	Nat4 argument = 0;

	va_list			argList;

#ifdef __MWERKS__
	asm{
		mr tempInt,r1
	}					/* Get the stack pointer */
#endif
	parameterArea = (Nat4 *) tempInt;		/* Set the initial parameter area to the stack pointer */
	parameterArea += 6;						/* Add 6 words to skip over the linkage area to the start of the parameter area */
	if(result) tempInt = CompilerDummyCall(1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24);	/* Force the compiler to allocate 24 words in the parameter area*/

	va_start(argList,numberOfRoots);

/* Past this point no fiddling with R3! for example by calling a subroutine whose output would be place in R3 */	
	
	theClassEntry = environment->classIndexTable->classes[contextClassIndex];
	theClassEntry = environment->classIndexTable->classes[theClassEntry->superClasses[0]];
	theMethod = theClassEntry->methods[pMethodConstantToIndex[methodConstant]];
	while(!theMethod){
		theClassEntry = environment->classIndexTable->classes[theClassEntry->superClasses[0]];
		theMethod = theClassEntry->methods[pMethodConstantToIndex[methodConstant]];
	}
	
	if(theClassEntry->theClass) contextClassIndex = theClassEntry->theClass->classIndex;
	else contextClassIndex = 0;

	gprCounter = 0;
	tempInt = (Nat4) environment;
#ifdef __MWERKS__
	asm{
		mr r3,tempInt
	}
#elif __GNUC__
	theRegistersPtr->register3 = tempInt;
#endif	
	gprCounter++;
	tempInt = (Nat4) inputRepeat;
#ifdef __MWERKS__
	asm{
		mr r4,tempInt
	}
#elif __GNUC__
	theRegistersPtr->register4 = tempInt;
#endif	
	gprCounter++;
	tempInt = (Nat4) contextClassIndex;
#ifdef __MWERKS__
	asm{
		mr r5,tempInt
	}
#elif __GNUC__
	theRegistersPtr->register5 = tempInt;
#endif	
	gprCounter++;

	for(argument = 0; argument < inarity; argument++){
			tempInt = (Nat4) va_arg(argList,V_Object);
			switch(gprCounter){
#ifdef __MWERKS__
					case 3: asm{
								mr r6,tempInt
							}
#elif __GNUC__
					case 3: theRegistersPtr->register6 = tempInt;
#endif	
							gprCounter++; break;
#ifdef __MWERKS__
					case 4: asm{
								mr r7,tempInt
							}
#elif __GNUC__
					case 4: theRegistersPtr->register7 = tempInt;
#endif	
							gprCounter++; break;
#ifdef __MWERKS__
					case 5: asm{
								mr r8,tempInt
							}
#elif __GNUC__
					case 5: theRegistersPtr->register8 = tempInt;
#endif	
							gprCounter++; break;
#ifdef __MWERKS__
					case 6: asm{
								mr r9,tempInt
							}
#elif __GNUC__
					case 6: theRegistersPtr->register9 = tempInt;
#endif	
							gprCounter++; break;
#ifdef __MWERKS__
					case 7: asm{
								mr r10,tempInt
							}
#elif __GNUC__
					case 7: theRegistersPtr->register10 = tempInt;
#endif	
							gprCounter++; break;
					case 8: case 9: case 10: case 11: case 12: case 13: case 14: case 15: case 16: case 17: case 18: case 19: case 20: case 21: case 22: case 23: *(parameterArea + gprCounter++) = tempInt; break;
			}
	} /* End For(argument) Loop */
	va_end(argList);
	
#ifdef __MWERKS__
	functionPtr = theMethod->functionPointer;
	asm{
			mr         r12,functionPtr
			mtctr      r12
			bctrl
			mr         tempInt,r3
	}
#elif __GNUC__
	asm{
			lwz			r3,theRegistersPtr->register3
			lwz			r4,theRegistersPtr->register4
			lwz			r5,theRegistersPtr->register5
			lwz			r6,theRegistersPtr->register6
			lwz			r7,theRegistersPtr->register7
			lwz			r8,theRegistersPtr->register8
			lwz			r9,theRegistersPtr->register9
			lwz			r10,theRegistersPtr->register10
			lwz			r12,theMethod->functionPointer
			mtctr		r12
			bctrl
			mr			tempInt,r3
	}
#endif	

	return tempInt;
}
#endif

#if __i386__
enum opTrigger vpx_call_inject_get(V_Environment environment, enum boolType *inputRepeat, Nat4 contextClassIndex,Int1 *stringConstant,Nat4 numberOfTerminals,Nat4 numberOfRoots, ...)
{
	register long tempInt = 0;
	register void* functionPtr = NULL;
	Nat4			index = 0;
	
	Nat4			counter = 0;
	Nat4			inarity = numberOfTerminals + numberOfRoots;
	
	Nat4 *parameterArea = NULL;
	Nat4 gprCounter = 0;
	Nat4 argument = 0;

	va_list			argList;

	asm( "movl %%esp,%0" : "=r" (tempInt) : /* No inputs */ );	// Get the stack pointer
	parameterArea = (Nat4 *) tempInt;		/* Set the initial parameter area to the stack pointer */
	tempInt = CompilerDummyCall(1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24);	/* Force the compiler to allocate 24 words in the parameter area*/

	va_start(argList,numberOfRoots);

/* Past this point no fiddling with R3! for example by calling a subroutine whose output would be place in R3 */	
	index = (Nat4) get_node(environment->valuesDictionary,stringConstant);
	while(pValueConstantToIndex[counter++] != index) {}
	counter--;
	
	gprCounter = 0;
	tempInt = (Nat4) environment;
	*(parameterArea + gprCounter++) = tempInt;
	
	tempInt = (Nat4) inputRepeat;
	*(parameterArea + gprCounter++) = tempInt;
	
	tempInt = (Nat4) contextClassIndex;
	*(parameterArea + gprCounter++) = tempInt;

	tempInt = (Nat4) counter;
	*(parameterArea + gprCounter++) = tempInt;

	for(argument = 0; argument < inarity; argument++){
			tempInt = (Nat4) va_arg(argList,V_Object);
			*(parameterArea + gprCounter++) = tempInt;
	} /* End For(argument) Loop */
	
	va_end(argList);
	
	functionPtr = vpx_get;
	tempInt = (Nat4) functionPtr;
	asm( "movl %0,%%eax" : /* No outputs */ : "r" (tempInt) );
	asm( "call *%%eax" : /* No outputs */ : /* No inputs */ );
	asm( "movl %%eax,%0" : "=r" (tempInt) : /* No inputs */ );

	return tempInt;
}
#endif

#if __ppc__
enum opTrigger vpx_call_inject_get(V_Environment environment, enum boolType *inputRepeat, Nat4 contextClassIndex,Int1 *stringConstant,Nat4 numberOfTerminals,Nat4 numberOfRoots, ...)
{
	register long tempInt = 0;
#ifdef __MWERKS__
	register void* functionPtr = NULL;
#elif __GNUC__
	asm{
		mr tempInt,r1
	}					/* Get the stack pointer */
#endif
	VPL_GPRegisters theRegisters;
	V_GPRegisters theRegistersPtr = &theRegisters;
	Nat4			index = 0;
	
	Int4			result = kNOERROR;
	Nat4			counter = 0;
	Nat4			inarity = numberOfTerminals + numberOfRoots;
	
	Nat4 *parameterArea = NULL;
	Nat4 gprCounter = 0;
	Nat4 argument = 0;

	va_list			argList;

#ifdef __MWERKS__
	asm{
		mr tempInt,r1
	}					/* Get the stack pointer */
#endif
	parameterArea = (Nat4 *) tempInt;		/* Set the initial parameter area to the stack pointer */
	parameterArea += 6;						/* Add 6 words to skip over the linkage area to the start of the parameter area */
	if(result) tempInt = CompilerDummyCall(1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24);	/* Force the compiler to allocate 24 words in the parameter area*/

	va_start(argList,numberOfRoots);

/* Past this point no fiddling with R3! for example by calling a subroutine whose output would be place in R3 */	
	index = (Nat4) get_node(environment->valuesDictionary,stringConstant);
	while(pValueConstantToIndex[counter++] != index) {}
	counter--;
	
	gprCounter = 0;
	tempInt = (Nat4) environment;
#ifdef __MWERKS__
	asm{
		mr r3,tempInt
	}
#elif __GNUC__
	theRegistersPtr->register3 = tempInt;
#endif	
	gprCounter++;
	tempInt = (Nat4) inputRepeat;
#ifdef __MWERKS__
	asm{
		mr r4,tempInt
	}
#elif __GNUC__
	theRegistersPtr->register4 = tempInt;
#endif	
	gprCounter++;
	tempInt = (Nat4) contextClassIndex;
#ifdef __MWERKS__
	asm{
		mr r5,tempInt
	}
#elif __GNUC__
	theRegistersPtr->register5 = tempInt;
#endif	
	gprCounter++;
	tempInt = (Nat4) counter;
#ifdef __MWERKS__
	asm{
		mr r6,tempInt
	}
#elif __GNUC__
	theRegistersPtr->register6 = tempInt;
#endif	
	gprCounter++;

	for(argument = 0; argument < inarity; argument++){
			tempInt = (Nat4) va_arg(argList,V_Object);
			switch(gprCounter){
#ifdef __MWERKS__
					case 4: asm{
								mr r7,tempInt
							}
#elif __GNUC__
					case 4: theRegistersPtr->register7 = tempInt;
#endif	
							gprCounter++; break;
#ifdef __MWERKS__
					case 5: asm{
								mr r8,tempInt
							}
#elif __GNUC__
					case 5: theRegistersPtr->register8 = tempInt;
#endif	
							gprCounter++; break;
#ifdef __MWERKS__
					case 6: asm{
								mr r9,tempInt
							}
#elif __GNUC__
					case 6: theRegistersPtr->register9 = tempInt;
#endif	
							gprCounter++; break;
#ifdef __MWERKS__
					case 7: asm{
								mr r10,tempInt
							}
#elif __GNUC__
					case 7: theRegistersPtr->register10 = tempInt;
#endif	
							gprCounter++; break;
					case 8: case 9: case 10: case 11: case 12: case 13: case 14: case 15: case 16: case 17: case 18: case 19: case 20: case 21: case 22: case 23: *(parameterArea + gprCounter++) = tempInt; break;
			}
	} /* End For(argument) Loop */
	va_end(argList);
	
#ifdef __MWERKS__
	functionPtr = vpx_get;
	asm{
			mr         r12,functionPtr
			mtctr      r12
			bctrl
			mr         tempInt,r3
	}
#elif __GNUC__
	asm{
			lwz			r3,theRegistersPtr->register3
			lwz			r4,theRegistersPtr->register4
			lwz			r5,theRegistersPtr->register5
			lwz			r6,theRegistersPtr->register6
			lwz			r7,theRegistersPtr->register7
			lwz			r8,theRegistersPtr->register8
			lwz			r9,theRegistersPtr->register9
			lwz			r10,theRegistersPtr->register10
			bl			vpx_get
			mr			tempInt,r3
	}
#endif	

	return tempInt;
}
#endif

#if __i386__
enum opTrigger vpx_call_inject_set(V_Environment environment, enum boolType *inputRepeat, Nat4 contextClassIndex,Int1 *stringConstant,Nat4 numberOfTerminals,Nat4 numberOfRoots, ...)
{
	register long tempInt = 0;
	register void* functionPtr = NULL;
	Nat4			index = 0;
	
	Nat4			counter = 0;
	Nat4			inarity = numberOfTerminals + numberOfRoots;
	
	Nat4 *parameterArea = NULL;
	Nat4 gprCounter = 0;
	Nat4 argument = 0;

	va_list			argList;

	asm( "movl %%esp,%0" : "=r" (tempInt) : /* No inputs */ );	// Get the stack pointer
	parameterArea = (Nat4 *) tempInt;		/* Set the initial parameter area to the stack pointer */
	tempInt = CompilerDummyCall(1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24);	/* Force the compiler to allocate 24 words in the parameter area*/

	va_start(argList,numberOfRoots);

/* Past this point no fiddling with R3! for example by calling a subroutine whose output would be place in R3 */	
	index = (Nat4) get_node(environment->valuesDictionary,stringConstant);
	while(pValueConstantToIndex[counter++] != index) {}
	counter--;
	
	gprCounter = 0;
	tempInt = (Nat4) environment;
	*(parameterArea + gprCounter++) = tempInt;
	
	tempInt = (Nat4) inputRepeat;
	*(parameterArea + gprCounter++) = tempInt;
	
	tempInt = (Nat4) contextClassIndex;
	*(parameterArea + gprCounter++) = tempInt;

	tempInt = (Nat4) counter;
	*(parameterArea + gprCounter++) = tempInt;

	for(argument = 0; argument < inarity; argument++){
			tempInt = (Nat4) va_arg(argList,V_Object);
			*(parameterArea + gprCounter++) = tempInt;
	} /* End For(argument) Loop */
	
	va_end(argList);
	
	functionPtr = vpx_set;
	tempInt = (Nat4) functionPtr;
	asm( "movl %0,%%eax" : /* No outputs */ : "r" (tempInt) );
	asm( "call *%%eax" : /* No outputs */ : /* No inputs */ );
	asm( "movl %%eax,%0" : "=r" (tempInt) : /* No inputs */ );

	return tempInt;
}
#endif

#if __ppc__
enum opTrigger vpx_call_inject_set(V_Environment environment, enum boolType *inputRepeat, Nat4 contextClassIndex,Int1 *stringConstant,Nat4 numberOfTerminals,Nat4 numberOfRoots, ...)
{
	register long tempInt = 0;
#ifdef __MWERKS__
	register void* functionPtr = NULL;
#elif __GNUC__
	asm{
		mr tempInt,r1
	}					/* Get the stack pointer */
#endif
	VPL_GPRegisters theRegisters;
	V_GPRegisters theRegistersPtr = &theRegisters;
	Nat4			index = 0;
	
	Int4			result = kNOERROR;
	Nat4			counter = 0;
	Nat4			inarity = numberOfTerminals + numberOfRoots;
	
	Nat4 *parameterArea = NULL;
	Nat4 gprCounter = 0;
	Nat4 argument = 0;

	va_list			argList;

#ifdef __MWERKS__
	asm{
		mr tempInt,r1
	}					/* Get the stack pointer */
#endif
	parameterArea = (Nat4 *) tempInt;		/* Set the initial parameter area to the stack pointer */
	parameterArea += 6;						/* Add 6 words to skip over the linkage area to the start of the parameter area */
	if(result) tempInt = CompilerDummyCall(1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24);	/* Force the compiler to allocate 24 words in the parameter area*/

	va_start(argList,numberOfRoots);

/* Past this point no fiddling with R3! for example by calling a subroutine whose output would be place in R3 */	
	index = (Nat4) get_node(environment->valuesDictionary,stringConstant);
	while(pValueConstantToIndex[counter++] != index) {}
	counter--;
	
	gprCounter = 0;
	tempInt = (Nat4) environment;
#ifdef __MWERKS__
	asm{
		mr r3,tempInt
	}
#elif __GNUC__
	theRegistersPtr->register3 = tempInt;
#endif	
	gprCounter++;
	tempInt = (Nat4) inputRepeat;
#ifdef __MWERKS__
	asm{
		mr r4,tempInt
	}
#elif __GNUC__
	theRegistersPtr->register4 = tempInt;
#endif	
	gprCounter++;
	tempInt = (Nat4) contextClassIndex;
#ifdef __MWERKS__
	asm{
		mr r5,tempInt
	}
#elif __GNUC__
	theRegistersPtr->register5 = tempInt;
#endif	
	gprCounter++;
	tempInt = (Nat4) counter;
#ifdef __MWERKS__
	asm{
		mr r6,tempInt
	}
#elif __GNUC__
	theRegistersPtr->register6 = tempInt;
#endif	
	gprCounter++;

	for(argument = 0; argument < inarity; argument++){
			tempInt = (Nat4) va_arg(argList,V_Object);
			switch(gprCounter){
#ifdef __MWERKS__
					case 4: asm{
								mr r7,tempInt
							}
#elif __GNUC__
					case 4: theRegistersPtr->register7 = tempInt;
#endif	
							gprCounter++; break;
#ifdef __MWERKS__
					case 5: asm{
								mr r8,tempInt
							}
#elif __GNUC__
					case 5: theRegistersPtr->register8 = tempInt;
#endif	
							gprCounter++; break;
#ifdef __MWERKS__
					case 6: asm{
								mr r9,tempInt
							}
#elif __GNUC__
					case 6: theRegistersPtr->register9 = tempInt;
#endif	
							gprCounter++; break;
#ifdef __MWERKS__
					case 7: asm{
								mr r10,tempInt
							}
#elif __GNUC__
					case 7: theRegistersPtr->register10 = tempInt;
#endif	
							gprCounter++; break;
					case 8: case 9: case 10: case 11: case 12: case 13: case 14: case 15: case 16: case 17: case 18: case 19: case 20: case 21: case 22: case 23: *(parameterArea + gprCounter++) = tempInt; break;
			}
	} /* End For(argument) Loop */
	va_end(argList);
	
#ifdef __MWERKS__
	functionPtr = vpx_set;
	asm{
			mr         r12,functionPtr
			mtctr      r12
			bctrl
			mr         tempInt,r3
	}
#elif __GNUC__
	asm{
			lwz			r3,theRegistersPtr->register3
			lwz			r4,theRegistersPtr->register4
			lwz			r5,theRegistersPtr->register5
			lwz			r6,theRegistersPtr->register6
			lwz			r7,theRegistersPtr->register7
			lwz			r8,theRegistersPtr->register8
			lwz			r9,theRegistersPtr->register9
			lwz			r10,theRegistersPtr->register10
			bl			vpx_set
			mr			tempInt,r3
	}
#endif	

	return tempInt;
}
#endif

#if __i386__
enum opTrigger vpx_call_inject_persistent(V_Environment environment, enum boolType *inputRepeat, Nat4 contextClassIndex,Int1 *stringConstant,Nat4 numberOfTerminals,Nat4 numberOfRoots, ...)
{
	register long tempInt = 0;
	register void* functionPtr = NULL;
	Nat4			index = 0;
	
	Nat4			counter = 0;
	Nat4			inarity = numberOfTerminals + numberOfRoots;
	
	Nat4 *parameterArea = NULL;
	Nat4 gprCounter = 0;
	Nat4 argument = 0;

	va_list			argList;

	asm( "movl %%esp,%0" : "=r" (tempInt) : /* No inputs */ );	// Get the stack pointer
	parameterArea = (Nat4 *) tempInt;		/* Set the initial parameter area to the stack pointer */
	tempInt = CompilerDummyCall(1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24);	/* Force the compiler to allocate 24 words in the parameter area*/

	va_start(argList,numberOfRoots);

/* Past this point no fiddling with R3! for example by calling a subroutine whose output would be place in R3 */	
	index = (Nat4) get_node(environment->valuesDictionary,stringConstant);
	while(pValueConstantToIndex[counter++] != index) {}
	counter--;
	
	gprCounter = 0;
	tempInt = (Nat4) environment;
	*(parameterArea + gprCounter++) = tempInt;

	tempInt = (Nat4) inputRepeat;
	*(parameterArea + gprCounter++) = tempInt;

	tempInt = (Nat4) contextClassIndex;
	*(parameterArea + gprCounter++) = tempInt;

	tempInt = (Nat4) counter;
	*(parameterArea + gprCounter++) = tempInt;

	tempInt = (Nat4) numberOfTerminals;
	*(parameterArea + gprCounter++) = tempInt;

	tempInt = (Nat4) numberOfRoots;
	*(parameterArea + gprCounter++) = tempInt;

	for(argument = 0; argument < inarity; argument++){
			tempInt = (Nat4) va_arg(argList,V_Object);
			*(parameterArea + gprCounter++) = tempInt;
	} /* End For(argument) Loop */
	
	va_end(argList);
	
	functionPtr = vpx_persistent;
	tempInt = (Nat4) functionPtr;
	asm( "movl %0,%%eax" : /* No outputs */ : "r" (tempInt) );
	asm( "call *%%eax" : /* No outputs */ : /* No inputs */ );
	asm( "movl %%eax,%0" : "=r" (tempInt) : /* No inputs */ );

	return tempInt;
}
#endif

#if __ppc__
enum opTrigger vpx_call_inject_persistent(V_Environment environment, enum boolType *inputRepeat, Nat4 contextClassIndex,Int1 *stringConstant,Nat4 numberOfTerminals,Nat4 numberOfRoots, ...)
{
	register long tempInt = 0;
#ifdef __MWERKS__
	register void* functionPtr = NULL;
#elif __GNUC__
	asm{
		mr tempInt,r1
	}					/* Get the stack pointer */
#endif
	VPL_GPRegisters theRegisters;
	V_GPRegisters theRegistersPtr = &theRegisters;
	Nat4			index = 0;
	
	Int4			result = kNOERROR;
	Nat4			counter = 0;
	Nat4			inarity = numberOfTerminals + numberOfRoots;

	Nat4 *parameterArea = NULL;
	Nat4 gprCounter = 0;
	Nat4 argument = 0;

	va_list			argList;

#ifdef __MWERKS__
	asm{
		mr tempInt,r1
	}					/* Get the stack pointer */
#endif
	parameterArea = (Nat4 *) tempInt;		/* Set the initial parameter area to the stack pointer */
	parameterArea += 6;						/* Add 6 words to skip over the linkage area to the start of the parameter area */
	if(result) tempInt = CompilerDummyCall(1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24);	/* Force the compiler to allocate 24 words in the parameter area*/

	va_start(argList,numberOfRoots);

/* Past this point no fiddling with R3! for example by calling a subroutine whose output would be place in R3 */	
	index = (Nat4) get_node(environment->valuesDictionary,stringConstant);
	while(pValueConstantToIndex[counter++] != index) {}
	counter--;
	
	gprCounter = 0;
	tempInt = (Nat4) environment;
#ifdef __MWERKS__
	asm{
		mr r3,tempInt
	}
#elif __GNUC__
	theRegistersPtr->register3 = tempInt;
#endif	
	gprCounter++;
	tempInt = (Nat4) inputRepeat;
#ifdef __MWERKS__
	asm{
		mr r4,tempInt
	}
#elif __GNUC__
	theRegistersPtr->register4 = tempInt;
#endif	
	gprCounter++;
	tempInt = (Nat4) contextClassIndex;
#ifdef __MWERKS__
	asm{
		mr r5,tempInt
	}
#elif __GNUC__
	theRegistersPtr->register5 = tempInt;
#endif	
	gprCounter++;
	tempInt = (Nat4) counter;
#ifdef __MWERKS__
	asm{
		mr r6,tempInt
	}
#elif __GNUC__
	theRegistersPtr->register6 = tempInt;
#endif	
	gprCounter++;
	tempInt = (Nat4) numberOfTerminals;
#ifdef __MWERKS__
	asm{
		mr r7,tempInt
	} 
#elif __GNUC__
	theRegistersPtr->register7 = tempInt;
#endif	
	gprCounter++;
	tempInt = (Nat4) numberOfRoots;
#ifdef __MWERKS__
	asm{
		mr r8,tempInt
	}
#elif __GNUC__
	theRegistersPtr->register8 = tempInt;
#endif	
	gprCounter++;

	for(argument = 0; argument < inarity; argument++){
			tempInt = (Nat4) va_arg(argList,V_Object);
			switch(gprCounter){
#ifdef __MWERKS__
					case 6: asm{
								mr r9,tempInt
							}
#elif __GNUC__
					case 6: theRegistersPtr->register9 = tempInt;
#endif	
							gprCounter++; break;
#ifdef __MWERKS__
					case 7: asm{
								mr r10,tempInt
							}
#elif __GNUC__
					case 7: theRegistersPtr->register10 = tempInt;
#endif	
							gprCounter++; break;
					case 8: case 9: case 10: case 11: case 12: case 13: case 14: case 15: case 16: case 17: case 18: case 19: case 20: case 21: case 22: case 23: *(parameterArea + gprCounter++) = tempInt; break;
			}
	} /* End For(argument) Loop */
	va_end(argList);
	
#ifdef __MWERKS__
	functionPtr = vpx_persistent;
	asm{
			mr         r12,functionPtr
			mtctr      r12
			bctrl
			mr         tempInt,r3
	}
#elif __GNUC__
	asm{
			lwz			r3,theRegistersPtr->register3
			lwz			r4,theRegistersPtr->register4
			lwz			r5,theRegistersPtr->register5
			lwz			r6,theRegistersPtr->register6
			lwz			r7,theRegistersPtr->register7
			lwz			r8,theRegistersPtr->register8
			lwz			r9,theRegistersPtr->register9
			lwz			r10,theRegistersPtr->register10
			bl			vpx_persistent
			mr			tempInt,r3
	}
#endif	

	return tempInt;
}
#endif

#if __i386__
enum opTrigger vpx_call_inject_instance(V_Environment environment, enum boolType *inputRepeat, Nat4 contextClassIndex,Int1 *stringConstant,Nat4 numberOfTerminals,Nat4 numberOfRoots, ...)
{
	register long tempInt = 0;
	register void* functionPtr = NULL;
	
	Nat4			counter = 0;
	Nat4			inarity = numberOfTerminals + numberOfRoots;
	V_Class			theClass = NULL;

	Nat4 *parameterArea = NULL;
	Nat4 gprCounter = 0;
	Nat4 argument = 0;

	va_list			argList;

	asm( "movl %%esp,%0" : "=r" (tempInt) : /* No inputs */ );	// Get the stack pointer
	parameterArea = (Nat4 *) tempInt;		/* Set the initial parameter area to the stack pointer */
	tempInt = CompilerDummyCall(1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24);	/* Force the compiler to allocate 24 words in the parameter area*/

	va_start(argList,numberOfRoots);

/* Past this point no fiddling with R3! for example by calling a subroutine whose output would be place in R3 */	
	theClass = get_class(environment->classTable,stringConstant);
	while(pClassConstantToIndex[counter++] != theClass->classIndex) {}
	counter--;
	
	gprCounter = 0;
	tempInt = (Nat4) environment;
	*(parameterArea + gprCounter++) = tempInt;

	tempInt = (Nat4) inputRepeat;
	*(parameterArea + gprCounter++) = tempInt;

	tempInt = (Nat4) contextClassIndex;
	*(parameterArea + gprCounter++) = tempInt;

	tempInt = (Nat4) counter;
	*(parameterArea + gprCounter++) = tempInt;

	tempInt = (Nat4) numberOfTerminals;
	*(parameterArea + gprCounter++) = tempInt;

	tempInt = (Nat4) numberOfRoots;
	*(parameterArea + gprCounter++) = tempInt;

	for(argument = 0; argument < inarity; argument++){
			tempInt = (Nat4) va_arg(argList,V_Object);
			*(parameterArea + gprCounter++) = tempInt;
	} /* End For(argument) Loop */
	
	va_end(argList);
	
	functionPtr = vpx_instantiate;
	tempInt = (Nat4) functionPtr;
	asm( "movl %0,%%eax" : /* No outputs */ : "r" (tempInt) );
	asm( "call *%%eax" : /* No outputs */ : /* No inputs */ );
	asm( "movl %%eax,%0" : "=r" (tempInt) : /* No inputs */ );

	return tempInt;
}
#endif

#if __ppc__
enum opTrigger vpx_call_inject_instance(V_Environment environment, enum boolType *inputRepeat, Nat4 contextClassIndex,Int1 *stringConstant,Nat4 numberOfTerminals,Nat4 numberOfRoots, ...)
{
	register long tempInt = 0;
#ifdef __MWERKS__
	register void* functionPtr = NULL;
#elif __GNUC__
	asm{
		mr tempInt,r1
	}					/* Get the stack pointer */
#endif
	VPL_GPRegisters theRegisters;
	V_GPRegisters theRegistersPtr = &theRegisters;
	Int4			result = kNOERROR;
	Nat4			counter = 0;
	Nat4			inarity = numberOfTerminals + numberOfRoots;
	V_Class			theClass = NULL;

	Nat4 *parameterArea = NULL;
	Nat4 gprCounter = 0;
	Nat4 argument = 0;

	va_list			argList;

#ifdef __MWERKS__
	asm{
		mr tempInt,r1
	}					/* Get the stack pointer */
#endif
	parameterArea = (Nat4 *) tempInt;		/* Set the initial parameter area to the stack pointer */
	parameterArea += 6;						/* Add 6 words to skip over the linkage area to the start of the parameter area */
	if(result) tempInt = CompilerDummyCall(1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24);	/* Force the compiler to allocate 24 words in the parameter area*/

	va_start(argList,numberOfRoots);

/* Past this point no fiddling with R3! for example by calling a subroutine whose output would be place in R3 */	
	theClass = get_class(environment->classTable,stringConstant);
	while(pClassConstantToIndex[counter++] != theClass->classIndex) {}
	counter--;
	
	gprCounter = 0;
	tempInt = (Nat4) environment;
#ifdef __MWERKS__
	asm{
		mr r3,tempInt
	}
#elif __GNUC__
	theRegistersPtr->register3 = tempInt;
#endif	
	gprCounter++;
	tempInt = (Nat4) inputRepeat;
#ifdef __MWERKS__
	asm{
		mr r4,tempInt
	}
#elif __GNUC__
	theRegistersPtr->register4 = tempInt;
#endif	
	gprCounter++;
	tempInt = (Nat4) contextClassIndex;
#ifdef __MWERKS__
	asm{
		mr r5,tempInt
	}
#elif __GNUC__
	theRegistersPtr->register5 = tempInt;
#endif	
	gprCounter++;
	tempInt = (Nat4) counter;
#ifdef __MWERKS__
	asm{
		mr r6,tempInt
	}
#elif __GNUC__
	theRegistersPtr->register6 = tempInt;
#endif	
	gprCounter++;
	tempInt = (Nat4) numberOfTerminals;
#ifdef __MWERKS__
	asm{
		mr r7,tempInt
	}
#elif __GNUC__
	theRegistersPtr->register7 = tempInt;
#endif	
	gprCounter++;
	tempInt = (Nat4) numberOfRoots;
#ifdef __MWERKS__
	asm{
		mr r8,tempInt
	}
#elif __GNUC__
	theRegistersPtr->register8 = tempInt;
#endif	
	gprCounter++;

	for(argument = 0; argument < inarity; argument++){
			tempInt = (Nat4) va_arg(argList,V_Object);
			switch(gprCounter){
#ifdef __MWERKS__
					case 6: asm{
								mr r9,tempInt
							}
#elif __GNUC__
					case 6: theRegistersPtr->register9 = tempInt;
#endif	
							gprCounter++; break;
#ifdef __MWERKS__
					case 7: asm{
								mr r10,tempInt
							}
#elif __GNUC__
					case 7: theRegistersPtr->register10 = tempInt;
#endif	
							gprCounter++; break;
					case 8: case 9: case 10: case 11: case 12: case 13: case 14: case 15: case 16: case 17: case 18: case 19: case 20: case 21: case 22: case 23: *(parameterArea + gprCounter++) = tempInt; break;
			}
	} /* End For(argument) Loop */
	va_end(argList);
	
#ifdef __MWERKS__
	functionPtr = vpx_instantiate;
	asm{
			mr         r12,functionPtr
			mtctr      r12
			bctrl
			mr         tempInt,r3
	}
#elif __GNUC__
	asm{
			lwz			r3,theRegistersPtr->register3
			lwz			r4,theRegistersPtr->register4
			lwz			r5,theRegistersPtr->register5
			lwz			r6,theRegistersPtr->register6
			lwz			r7,theRegistersPtr->register7
			lwz			r8,theRegistersPtr->register8
			lwz			r9,theRegistersPtr->register9
			lwz			r10,theRegistersPtr->register10
			bl			vpx_instantiate
			mr			tempInt,r3
	}
#endif	

	return tempInt;
}
#endif

#if __i386__
enum opTrigger vpx_call_inject_method(V_Environment environment, enum boolType *inputRepeat, Nat4 contextClassIndex,Int1 *stringConstant,Nat4 numberOfTerminals,Nat4 numberOfRoots, ...)
{
	register long tempInt = 0;
	register void* functionPtr = NULL;
	Nat4			index = 0;
	
	Nat4			counter = 0;
	Nat4			inarity = numberOfTerminals + numberOfRoots;
	V_Method		theMethod = NULL;
	Nat4			type = 0;

	Nat4 *parameterArea = NULL;
	Nat4 gprCounter = 0;
	Nat4 argument = 0;

	va_list			argList;

	asm( "movl %%esp,%0" : "=r" (tempInt) : /* No inputs */ );	// Get the stack pointer
	parameterArea = (Nat4 *) tempInt;		/* Set the initial parameter area to the stack pointer */
	tempInt = CompilerDummyCall(1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24);	/* Force the compiler to allocate 24 words in the parameter area*/

	va_start(argList,numberOfRoots);

/* Past this point no fiddling with R3! for example by calling a subroutine whose output would be place in R3 */
	if(stringConstant[0] == '/'){
		stringConstant = stringConstant+1;
		type++;
		if(stringConstant[0] == '/'){
			stringConstant = stringConstant+1;
			type++;
		}	
	}	
	index = (Nat4) get_node(environment->methodsDictionary,stringConstant);
	while(pMethodConstantToIndex[counter++] != index) {}
	counter--;
	
	if(type){
		gprCounter = 0;
		tempInt = (Nat4) environment;
		*(parameterArea + gprCounter++) = tempInt;

		tempInt = (Nat4) inputRepeat;
		*(parameterArea + gprCounter++) = tempInt;

		tempInt = (Nat4) contextClassIndex;
		*(parameterArea + gprCounter++) = tempInt;

		tempInt = (Nat4) counter;
		*(parameterArea + gprCounter++) = tempInt;

		tempInt = (Nat4) numberOfTerminals;
		*(parameterArea + gprCounter++) = tempInt;

		tempInt = (Nat4) numberOfRoots;
		*(parameterArea + gprCounter++) = tempInt;

		for(argument = 0; argument < inarity; argument++){
				tempInt = (Nat4) va_arg(argList,V_Object);
				*(parameterArea + gprCounter++) = tempInt;
		} /* End For(argument) Loop */
		
		va_end(argList);
		
		if(type==1) functionPtr = vpx_call_data_method;
		else functionPtr = vpx_call_context_method;
		tempInt = (Nat4) functionPtr;
		asm( "movl %0,%%eax" : /* No outputs */ : "r" (tempInt) );
		asm( "call *%%eax" : /* No outputs */ : /* No inputs */ );
		asm( "movl %%eax,%0" : "=r" (tempInt) : /* No inputs */ );

	} else {
		Nat4			contextClassIndex = vpx_get_class_index(environment,stringConstant);
		V_ClassEntry	theClassEntry = environment->classIndexTable->classes[contextClassIndex];
		Nat4			methodIndex = (Nat4) get_node(environment->methodsDictionary,vpx_get_column_name(environment,stringConstant));

		theMethod = theClassEntry->methods[methodIndex];
		while(!theMethod){
			theClassEntry = environment->classIndexTable->classes[theClassEntry->superClasses[0]];
			theMethod = theClassEntry->methods[methodIndex];
		}
	
		if(theClassEntry->theClass) contextClassIndex = theClassEntry->theClass->classIndex;
		else contextClassIndex = 0;

		gprCounter = 0;
		tempInt = (Nat4) environment;
		*(parameterArea + gprCounter++) = tempInt;

		tempInt = (Nat4) inputRepeat;
		*(parameterArea + gprCounter++) = tempInt;

		tempInt = (Nat4) contextClassIndex;
		*(parameterArea + gprCounter++) = tempInt;

		for(argument = 0; argument < inarity; argument++){
				tempInt = (Nat4) va_arg(argList,V_Object);
				*(parameterArea + gprCounter++) = tempInt;
		} /* End For(argument) Loop */
		
		va_end(argList);
		
		functionPtr = theMethod->functionPointer;
		tempInt = (Nat4) functionPtr;
		asm( "movl %0,%%eax" : /* No outputs */ : "r" (tempInt) );
		asm( "call *%%eax" : /* No outputs */ : /* No inputs */ );
		asm( "movl %%eax,%0" : "=r" (tempInt) : /* No inputs */ );
	}

	return tempInt;
}
#endif

#if __ppc__
enum opTrigger vpx_call_inject_method(V_Environment environment, enum boolType *inputRepeat, Nat4 contextClassIndex,Int1 *stringConstant,Nat4 numberOfTerminals,Nat4 numberOfRoots, ...)
{
	register long tempInt = 0;
#ifdef __MWERKS__
	register void* functionPtr = NULL;
#elif __GNUC__
	asm{
		mr tempInt,r1
	}					/* Get the stack pointer */
#endif
	VPL_GPRegisters theRegisters;
	V_GPRegisters theRegistersPtr = &theRegisters;
	Nat4			index = 0;
	
	Int4			result = kNOERROR;
	Nat4			counter = 0;
	Nat4			inarity = numberOfTerminals + numberOfRoots;
	V_Method		theMethod = NULL;
	Nat4			type = 0;

	Nat4 *parameterArea = NULL;
	Nat4 gprCounter = 0;
	Nat4 argument = 0;

	va_list			argList;

#ifdef __MWERKS__
	asm{
		mr tempInt,r1
	}					/* Get the stack pointer */
#endif
	parameterArea = (Nat4 *) tempInt;		/* Set the initial parameter area to the stack pointer */
	parameterArea += 6;						/* Add 6 words to skip over the linkage area to the start of the parameter area */
	if(result) tempInt = CompilerDummyCall(1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24);	/* Force the compiler to allocate 24 words in the parameter area*/

	va_start(argList,numberOfRoots);

/* Past this point no fiddling with R3! for example by calling a subroutine whose output would be place in R3 */
	if(stringConstant[0] == '/'){
		stringConstant = stringConstant+1;
		type++;
		if(stringConstant[0] == '/'){
			stringConstant = stringConstant+1;
			type++;
		}	
	}	
	index = (Nat4) get_node(environment->methodsDictionary,stringConstant);
	while(pMethodConstantToIndex[counter++] != index) {}
	counter--;
	
	if(type){
	gprCounter = 0;
	tempInt = (Nat4) environment;
#ifdef __MWERKS__
	asm{
		mr r3,tempInt
	}
#elif __GNUC__
	theRegistersPtr->register3 = tempInt;
#endif	
	gprCounter++;
	tempInt = (Nat4) inputRepeat;
#ifdef __MWERKS__
	asm{
		mr r4,tempInt
	}
#elif __GNUC__
	theRegistersPtr->register4 = tempInt;
#endif	
	gprCounter++;
	tempInt = (Nat4) contextClassIndex;
#ifdef __MWERKS__
	asm{
		mr r5,tempInt
	}
#elif __GNUC__
	theRegistersPtr->register5 = tempInt;
#endif	
	gprCounter++;
		tempInt = (Nat4) counter;
#ifdef __MWERKS__
		asm{
			mr r6,tempInt
		}
#elif __GNUC__
	theRegistersPtr->register6 = tempInt;
#endif	
		gprCounter++;
		tempInt = (Nat4) numberOfTerminals;
#ifdef __MWERKS__
		asm{
			mr r7,tempInt
		}
#elif __GNUC__
	theRegistersPtr->register7 = tempInt;
#endif	
		gprCounter++;
		tempInt = (Nat4) numberOfRoots;
#ifdef __MWERKS__
		asm{
			mr r8,tempInt
		}
#elif __GNUC__
	theRegistersPtr->register8 = tempInt;
#endif	
		gprCounter++;

		for(argument = 0; argument < inarity; argument++){
				tempInt = (Nat4) va_arg(argList,V_Object);
				switch(gprCounter){
#ifdef __MWERKS__
					case 6: asm{
								mr r9,tempInt
							}
#elif __GNUC__
					case 6: theRegistersPtr->register9 = tempInt;
#endif	
							gprCounter++; break;
#ifdef __MWERKS__
					case 7: asm{
								mr r10,tempInt
							}
#elif __GNUC__
					case 7: theRegistersPtr->register10 = tempInt;
#endif	
							gprCounter++; break;
					case 8: case 9: case 10: case 11: case 12: case 13: case 14: case 15: case 16: case 17: case 18: case 19: case 20: case 21: case 22: case 23: *(parameterArea + gprCounter++) = tempInt; break;
				}
		} /* End For(argument) Loop */
		va_end(argList);
		
#ifdef __MWERKS__
	if(type==1) functionPtr = vpx_call_data_method;
	else functionPtr = vpx_call_context_method;
	asm{
			mr         r12,functionPtr
			mtctr      r12
			bctrl
			mr         tempInt,r3
	}
#elif __GNUC__
	if(type==1) {
	asm{
			lwz			r3,theRegistersPtr->register3
			lwz			r4,theRegistersPtr->register4
			lwz			r5,theRegistersPtr->register5
			lwz			r6,theRegistersPtr->register6
			lwz			r7,theRegistersPtr->register7
			lwz			r8,theRegistersPtr->register8
			lwz			r9,theRegistersPtr->register9
			lwz			r10,theRegistersPtr->register10
			bl			vpx_call_data_method
			mr			tempInt,r3
	}
	} else {
	asm{
			lwz			r3,theRegistersPtr->register3
			lwz			r4,theRegistersPtr->register4
			lwz			r5,theRegistersPtr->register5
			lwz			r6,theRegistersPtr->register6
			lwz			r7,theRegistersPtr->register7
			lwz			r8,theRegistersPtr->register8
			lwz			r9,theRegistersPtr->register9
			lwz			r10,theRegistersPtr->register10
			bl			vpx_call_context_method
			mr			tempInt,r3
	}
	}
#endif	
	} else {
		Nat4			contextClassIndex = vpx_get_class_index(environment,stringConstant);
		V_ClassEntry	theClassEntry = environment->classIndexTable->classes[contextClassIndex];
		Nat4			methodIndex = (Nat4) get_node(environment->methodsDictionary,vpx_get_column_name(environment,stringConstant));

		theMethod = theClassEntry->methods[methodIndex];
		while(!theMethod){
			theClassEntry = environment->classIndexTable->classes[theClassEntry->superClasses[0]];
			theMethod = theClassEntry->methods[methodIndex];
		}
	
		if(theClassEntry->theClass) contextClassIndex = theClassEntry->theClass->classIndex;
		else contextClassIndex = 0;

	gprCounter = 0;
	tempInt = (Nat4) environment;
#ifdef __MWERKS__
	asm{
		mr r3,tempInt
	}
#elif __GNUC__
	theRegistersPtr->register3 = tempInt;
#endif	
	gprCounter++;
	tempInt = (Nat4) inputRepeat;
#ifdef __MWERKS__
	asm{
		mr r4,tempInt
	}
#elif __GNUC__
	theRegistersPtr->register4 = tempInt;
#endif	
	gprCounter++;
	tempInt = (Nat4) contextClassIndex;
#ifdef __MWERKS__
	asm{
		mr r5,tempInt
	}
#elif __GNUC__
	theRegistersPtr->register5 = tempInt;
#endif	
	gprCounter++;

		for(argument = 0; argument < inarity; argument++){
				tempInt = (Nat4) va_arg(argList,V_Object);
				switch(gprCounter){
#ifdef __MWERKS__
					case 3: asm{
								mr r6,tempInt
							}
#elif __GNUC__
					case 3: theRegistersPtr->register6 = tempInt;
#endif	
							gprCounter++; break;
#ifdef __MWERKS__
					case 4: asm{
								mr r7,tempInt
							}
#elif __GNUC__
					case 4: theRegistersPtr->register7 = tempInt;
#endif	
							gprCounter++; break;
#ifdef __MWERKS__
					case 5: asm{
								mr r8,tempInt
							}
#elif __GNUC__
					case 5: theRegistersPtr->register8 = tempInt;
#endif	
							gprCounter++; break;
#ifdef __MWERKS__
					case 6: asm{
								mr r9,tempInt
							}
#elif __GNUC__
					case 6: theRegistersPtr->register9 = tempInt;
#endif	
							gprCounter++; break;
#ifdef __MWERKS__
					case 7: asm{
								mr r10,tempInt
							}
#elif __GNUC__
					case 7: theRegistersPtr->register10 = tempInt;
#endif	
							gprCounter++; break;
					case 8: case 9: case 10: case 11: case 12: case 13: case 14: case 15: case 16: case 17: case 18: case 19: case 20: case 21: case 22: case 23: *(parameterArea + gprCounter++) = tempInt; break;
				}
		} /* End For(argument) Loop */
		va_end(argList);
		
#ifdef __MWERKS__
	functionPtr = theMethod->functionPointer;
	asm{
			mr         r12,functionPtr
			mtctr      r12
			bctrl
			mr         tempInt,r3
	}
#elif __GNUC__
	asm{
			lwz			r3,theRegistersPtr->register3
			lwz			r4,theRegistersPtr->register4
			lwz			r5,theRegistersPtr->register5
			lwz			r6,theRegistersPtr->register6
			lwz			r7,theRegistersPtr->register7
			lwz			r8,theRegistersPtr->register8
			lwz			r9,theRegistersPtr->register9
			lwz			r10,theRegistersPtr->register10
			lwz			r12,theMethod->functionPointer
			mtctr		r12
			bctrl
			mr			tempInt,r3
	}
#endif	
	}

	return tempInt;
}
#endif

#if __i386__
enum opTrigger vpx_call_inject_procedure(V_Environment environment, enum boolType *inputRepeat, Nat4 contextClassIndex,Int1 *stringConstant,Nat4 numberOfTerminals,Nat4 numberOfRoots, ...)
{
#pragma unused(inputRepeat)
#pragma unused(contextClassIndex)

	register long tempInt = 0;
	float tempFloat = 0.0;
	double tempDouble = 0.0;
	long tempInt2 = 0;

	V_Object object = NULL;
	V_String pointerString = NULL;
	V_ExternalBlock externalBlock = NULL;
	V_ExternalBlock outputBlock = NULL;
	void *tempPointer = NULL;
	Nat4 *tempStructPointer = NULL;
	Nat4 *parameterArea = NULL;
	V_Parameter tempParameter = NULL;
	V_ExtProcedure tempProcedure = NULL;
	V_Input tempInput = NULL;
	VPL_InputList tempInputList;
	Nat4	*inputSizes = NULL;
	
	Nat4 gprCounter = 0;
	Nat4 fpCounter = 0;
	Nat4 argument = 0;
	Nat4 outputCounter = 0;
	Nat4 blockSize = 0;
	Nat4 theParameterType = 0;
	VPL_Input returnInteger;
	V_Input returnIntegerPtr = &returnInteger;
	VPL_Input returnFloat;
	V_Input returnFloatPtr = &returnFloat;
	VPL_Input returnDouble;
	V_Input returnDoublePtr = &returnDouble;
	
	Nat4 procedureInarity = 0;
	Nat4 procedureOutarity = 0;
	V_Object	*theInputObjects = NULL;
	V_Object	**theOutputObjects = NULL;
	
	va_list			argList;
	
	asm( "movl %%esp,%0" : "=r" (tempInt) : /* No inputs */ );	// Get the stack pointer
	parameterArea = (Nat4 *) tempInt;		// Set the initial parameter area to the stack pointer
	tempInt = ExternalDummyCall(1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24);	/* Force the compiler to allocate 24 words in the parameter area*/

	va_start(argList,numberOfRoots);
	theInputObjects = VPXMALLOC(numberOfTerminals,V_Object);
	theOutputObjects = VPXMALLOC(numberOfRoots,V_Object *);
	for(outputCounter = 0; outputCounter < numberOfTerminals; outputCounter++){
		theInputObjects[outputCounter] = va_arg(argList,V_Object);
	}
	for(outputCounter = 0; outputCounter < numberOfRoots; outputCounter++){
		theOutputObjects[outputCounter] = va_arg(argList,V_Object *);
	}
	va_end(argList);

	tempProcedure = get_extProcedure(environment->externalProceduresTable,stringConstant);

	if(tempProcedure->returnParameter != NULL) procedureOutarity++;

	tempParameter = tempProcedure->parameters;
	while( tempParameter != NULL ) {
		if(tempParameter->type == kVoidType) break;
		procedureInarity++;
		if(tempParameter->type == kPointerType && tempParameter->constantFlag == 0) procedureOutarity++;
		tempParameter = tempParameter->next;
	}
	
	outputCounter = 0;
	if(tempProcedure->returnParameter != NULL) outputCounter++;

	tempParameter = tempProcedure->parameters;
	tempInputList.inputs = VPXMALLOC(numberOfTerminals,V_Input);
	inputSizes = VPXMALLOC(numberOfTerminals,Nat4);
	for(argument = 0; argument < numberOfTerminals; argument++){
		tempInput = VPXMALLOC(1,VPL_Input);
		tempInputList.inputs[argument] = tempInput;
		object = theInputObjects[argument];
		theParameterType = tempParameter->type;
		if(theParameterType == kFloatType && tempParameter->size == 8) theParameterType = kDoubleType;
		switch(theParameterType){
			case kVoidType:
				if(object == NULL){
					tempInput->inputInt = 0;
				}else{
					switch(object->type){
						case kBoolean:	tempInput->inputInt = (long) ((V_Boolean) object)->value; inputSizes[argument] = 4; break;
						case kInteger:	tempInput->inputInt = (long) ((V_Integer) object)->value; inputSizes[argument] = 4; break;
						case kReal:		tempInput->inputDouble = (double) ((V_Real) object)->value; inputSizes[argument] = 8; break;
						case kString:	tempInput->inputInt = (long) ((V_String) object)->string; inputSizes[argument] = 4; break;
						case kExternalBlock:	
							externalBlock = (V_ExternalBlock) object;
							if(externalBlock->levelOfIndirection == 0){
								tempInput->inputInt = (long) ((V_ExternalBlock) object)->blockPtr; 
								inputSizes[argument] = 4; 
							}else if(externalBlock->levelOfIndirection == 1){
								tempInput->inputInt = *((Nat4 *) externalBlock->blockPtr);			
								inputSizes[argument] = 4; 
							}else if(externalBlock->levelOfIndirection == 2){
								tempInput->inputInt = **((Nat4 **) externalBlock->blockPtr);			
								inputSizes[argument] = 4; 
							}
							break;
							
						default:
							break;
					}
				}
				break;
			
			case kUnsignedType:
			case kLongType:
			case kShortType:
			case kCharType:
			case kEnumType:
			case kIntType:
				if(object == NULL){
					tempInput->inputInt = 0;
				}else{
					switch(object->type){
						case kInteger:	tempInput->inputInt = ((V_Integer) object)->value; break;
						case kBoolean:	tempInput->inputInt = ((V_Boolean) object)->value; break;
						case kReal:		tempInput->inputInt = ((V_Real) object)->value; break;
						
						default:
							break;
					}
				}
				break;
			
			case kFloatType:
				switch(object->type){
					case kInteger:	tempInput->inputFloat = ((V_Integer) object)->value; break;
					case kBoolean:	tempInput->inputFloat = ((V_Boolean) object)->value; break;
					case kReal:		tempInput->inputFloat = ((V_Real) object)->value; break;
						
					default:
						break;
				}
				break;
			
			case kDoubleType:
				switch(object->type){
					case kInteger:	tempInput->inputDouble = ((V_Integer) object)->value; break;
					case kBoolean:	tempInput->inputDouble = ((V_Boolean) object)->value; break;
					case kReal:		tempInput->inputDouble = ((V_Real) object)->value; break;
						
					default:
						break;
				}
				break;
			
			case kPointerType:
				if(object == NULL){
					tempInput->inputInt = 0;
					if(tempParameter->constantFlag != 1) *theOutputObjects[outputCounter++] = NULL;
				} else if(object->type == kNone){
					increment_count(object);
					decrement_count(environment,object);
					if(tempParameter->indirection == 1) blockSize = tempParameter->size;
					else blockSize = sizeof(Nat4 *);
					tempPointer = X_malloc(blockSize);
					tempInput->inputInt = (long) tempPointer;	

					outputBlock = create_externalBlock(tempParameter->name,tempParameter->size,environment);
					outputBlock->blockPtr = tempPointer;
					outputBlock->levelOfIndirection = tempParameter->indirection - 1;
					*theOutputObjects[outputCounter++] = (V_Object) outputBlock;
				} else if(object->type == kExternalBlock){
					externalBlock = (V_ExternalBlock) object;
					if( externalBlock->levelOfIndirection == 0 && strcmp("void",externalBlock->name) == 0 ){
						if(tempParameter->constantFlag == 1){
							tempInput->inputInt = (long) externalBlock->blockPtr;
						}else{
							blockSize = externalBlock->size;
							tempPointer = X_malloc(blockSize);
							memcpy(tempPointer,externalBlock->blockPtr,blockSize);
							tempInput->inputInt = (long) tempPointer;	

							outputBlock = create_externalBlock(externalBlock->name,blockSize,environment);
							outputBlock->blockPtr = tempPointer;
							*theOutputObjects[outputCounter++] = (V_Object) outputBlock;
						}
					} else if(tempParameter->indirection - externalBlock->levelOfIndirection == -1) {
						if(tempParameter->constantFlag == 1){
							tempInput->inputInt = **((Nat4 **) externalBlock->blockPtr);
						}else{
							blockSize = sizeof(Nat4 **);
							tempPointer = X_malloc(blockSize);
							tempInput->inputInt = **((Nat4 **) externalBlock->blockPtr);			
							*((Nat4 *) tempPointer) = *((Nat4 *) externalBlock->blockPtr);

							outputBlock = create_externalBlock(externalBlock->name,externalBlock->size,environment);
							outputBlock->blockPtr = tempPointer;
							outputBlock->levelOfIndirection = externalBlock->levelOfIndirection;
							*theOutputObjects[outputCounter++] = (V_Object) outputBlock;
						}
					}else if(tempParameter->indirection - externalBlock->levelOfIndirection == 0 ||
						strcmp("VPL_CallbackCodeSegment",externalBlock->name) == 0) {
						if(tempParameter->constantFlag == 1){
							tempInput->inputInt = *((Nat4 *) externalBlock->blockPtr);
						}else{
							blockSize = sizeof(Nat4 *);
							tempPointer = X_malloc(blockSize);
							tempInput->inputInt = *((Nat4 *) externalBlock->blockPtr);			
							*((Nat4 *) tempPointer) = *((Nat4 *) externalBlock->blockPtr);

							outputBlock = create_externalBlock(externalBlock->name,externalBlock->size,environment);
							outputBlock->blockPtr = tempPointer;
							outputBlock->levelOfIndirection = externalBlock->levelOfIndirection;
							*theOutputObjects[outputCounter++] = (V_Object) outputBlock;
						}
					}else if(tempParameter->indirection - externalBlock->levelOfIndirection == 1) {
						if(tempParameter->constantFlag == 1){
							tempInput->inputInt = (long) externalBlock->blockPtr;
						}else{
							if(externalBlock->levelOfIndirection == 0) blockSize = externalBlock->size;
							else blockSize = sizeof(Nat4 *);
							tempPointer = X_malloc(blockSize);
							memcpy(tempPointer,externalBlock->blockPtr,blockSize);
							tempInput->inputInt = (long) tempPointer;	

							outputBlock = create_externalBlock(externalBlock->name,externalBlock->size,environment);
							outputBlock->blockPtr = tempPointer;
							outputBlock->levelOfIndirection = externalBlock->levelOfIndirection;
							*theOutputObjects[outputCounter++] = (V_Object) outputBlock;
						}
					}
				} else if(object->type == kInteger){
						if(tempParameter->constantFlag == 1){
							tempInput->inputInt = ((V_Integer) object)->value;
						}else{
							blockSize = sizeof(Nat4 *);
							tempPointer = X_malloc(blockSize);
							tempInput->inputInt = ((V_Integer) object)->value;
							*((Nat4 *) tempPointer) = tempInput->inputInt;

							outputBlock = create_externalBlock(tempParameter->name,blockSize,environment);
							outputBlock->blockPtr = tempPointer;
							outputBlock->levelOfIndirection = 1;
							*theOutputObjects[outputCounter++] = (V_Object) outputBlock;
						}
				}  else if(object->type == kString){										// Allow strings as pointers
						pointerString = (V_String) object;									// Added by Jack 5/13/05
						if(tempParameter->constantFlag == 1){
							tempInput->inputInt = (long) pointerString->string;
						}else{
							outputBlock = (V_ExternalBlock) create_string(pointerString->string,environment);
							tempInput->inputInt = (long) ((V_String) outputBlock)->string;	
							*theOutputObjects[outputCounter++] = (V_Object) outputBlock;
						} 
				} 
				break;
			
			case kStructureType:
				externalBlock = (V_ExternalBlock) object;
				if(externalBlock->levelOfIndirection == 0) tempInput->inputInt = (long) externalBlock->blockPtr;
				break;

			default:
				break;
			
		}
		if(tempParameter->type != kVoidType) tempParameter = tempParameter->next;
	}

// Past this point no fiddling with R3! for example by calling a subroutine whose output would be place in R3
	
	gprCounter = 0;
	if(tempProcedure->returnParameter != NULL && 
		tempProcedure->returnParameter->type == kStructureType &&
		tempProcedure->returnParameter->size > 8 ){										// If function returns a structure
			tempInt = (long) X_malloc(tempProcedure->returnParameter->size);			// Create a block and get the address
			*(parameterArea + gprCounter++) = tempInt;									// Put the address on the stack
	}
	tempParameter = tempProcedure->parameters;
	for(argument = 0; argument < numberOfTerminals; argument++){
		tempInput = tempInputList.inputs[argument];
		theParameterType = tempParameter->type;
		if(theParameterType == kFloatType && tempParameter->size == 8) theParameterType = kDoubleType;
		switch(theParameterType){
			case kUnsignedType:
			case kLongType:
			case kShortType:
			case kCharType:
			case kEnumType:
			case kPointerType:
			case kIntType:
				tempInt = tempInput->inputInt;
				*(parameterArea + gprCounter++) = tempInt;
				break;

			case kFloatType:
				tempInt = *((Nat4 *) &tempInput->inputFloat);
				*(parameterArea + gprCounter++) = tempInt;
				break;

			case kDoubleType:
				tempInt = *((Nat4 *) &tempInput->inputFloat);
				*(parameterArea + gprCounter++) = tempInt;
				tempInt = *((Nat4 *) (&tempInput->inputFloat + 1));
				*(parameterArea + gprCounter++) = tempInt;
				break;

			case kStructureType:
				tempStructPointer = (Nat4 *) tempInput->inputInt;
				do{
					tempInt = *tempStructPointer;
					*(parameterArea + gprCounter++) = tempInt;
					tempStructPointer++;
				} while((Nat4)tempStructPointer - (Nat4)tempInput->inputInt < tempParameter->size);
			break;

			case kVoidType:
				tempInt = tempInput->inputInt;
				*(parameterArea + gprCounter++) = tempInt;
				break;
				
			default:
				printf("Unhandled parameter type %u\n",(unsigned int) theParameterType);
				break;
		}
		if(tempParameter->type != kVoidType) tempParameter = tempParameter->next;
	} // End For(argument) Loop

	tempInt = (Nat4) tempProcedure->functionPtr;
	asm( "movl %0,%%eax" : /* No outputs */ : "r" (tempInt) );
	asm( "call *%%eax" : /* No outputs */ : /* No inputs */ );
	asm( "movl %%eax,%0" : "=r" (tempInt) : /* No inputs */ );
	tempParameter = tempProcedure->returnParameter;
	if(tempParameter != NULL && tempParameter->type ==kStructureType){
		if(tempParameter->size > 8){
			asm( "subl $4,%%esp" : /* No outputs */ : /* No inputs */ );
		} else {
			asm( "movl %%edx,%0" : "=r" (tempInt2) : /* No inputs */ );
		}
	}

	tempParameter = tempProcedure->returnParameter;
	if(tempParameter != NULL){
		theParameterType = tempParameter->type;
		if(theParameterType == kFloatType && tempParameter->size == 8) theParameterType = kDoubleType;
		switch(theParameterType){
			case kUnsignedType:
			case kLongType:
			case kShortType:
			case kCharType:
			case kEnumType:
			case kIntType:
				*theOutputObjects[0] = (V_Object) int_to_integer(tempInt,environment);
				break;

			case kPointerType:
				if(tempInt == 0){
					*theOutputObjects[0] = NULL;
				} else {
					tempPointer = (Nat4 *) X_malloc(sizeof(Nat4));
					*((Nat4 *)tempPointer) = tempInt;
					outputBlock = create_externalBlock(tempParameter->name,tempParameter->size,environment);
					outputBlock->blockPtr = tempPointer;
					outputBlock->levelOfIndirection = tempParameter->indirection;
					*theOutputObjects[0] = (V_Object) outputBlock;
				}
				break;

			case kStructureType:
				if(tempParameter->size > 8) {
					outputBlock = create_externalBlock(tempParameter->name,tempParameter->size,environment);
					outputBlock->blockPtr = (void *) tempInt;
					outputBlock->levelOfIndirection = 0;
					*theOutputObjects[0] = (V_Object) outputBlock;
				} else {
					long	pseudoStructure[2] = { 0 , 0 };
					pseudoStructure[0] = tempInt;
					pseudoStructure[1] = tempInt2;
				
					outputBlock = create_externalBlock(tempParameter->name,tempParameter->size,environment);
					outputBlock->blockPtr = malloc(tempParameter->size);
					memcpy(outputBlock->blockPtr,pseudoStructure,tempParameter->size);
					outputBlock->levelOfIndirection = 0;
					*theOutputObjects[0] = (V_Object) outputBlock;
				}
				break;

			case kFloatType:
				asm( "fstps %0" : "=m" (tempFloat) : /* No inputs */ );
				*theOutputObjects[0] = (V_Object) float_to_real(tempFloat,environment);
				break;

			case kDoubleType:
				asm( "fstpl %0" : "=m" (tempDouble) : /* No inputs */ );
				*theOutputObjects[0] = (V_Object) float_to_real(tempDouble,environment);
				break;

			default:
				return kHalt;
				break;
		}
	}

	for(argument = 0; argument < numberOfTerminals; argument++){
		X_free(tempInputList.inputs[argument]);
	}
	X_free(tempInputList.inputs);
	X_free(inputSizes);

	return kSuccess;
}
#endif

#if __ppc__
enum opTrigger vpx_call_inject_procedure(V_Environment environment, enum boolType *inputRepeat, Nat4 contextClassIndex,Int1 *stringConstant,Nat4 numberOfTerminals,Nat4 numberOfRoots, ...)
{
#pragma unused(inputRepeat)
#pragma unused(contextClassIndex)

	register long tempInt = 0;
	register float tempFloat = 0.0;
	register double tempDouble = 0.0;
#ifdef __MWERKS__
	register void* functionPtr = NULL;
#endif


	V_Object object = NULL;
	V_String pointerString = NULL;
	V_ExternalBlock externalBlock = NULL;
	V_ExternalBlock outputBlock = NULL;
	void *tempPointer = NULL;
	Nat4 *tempStructPointer = NULL;
	Nat4 *parameterArea = NULL;
	V_Parameter tempParameter = NULL;
	V_ExtProcedure tempProcedure = NULL;
	V_Input tempInput = NULL;
	VPL_InputList tempInputList;
	Nat4	*inputSizes = NULL;
	
	Nat4 gprCounter = 0;
	Nat4 fpCounter = 0;
	Nat4 argument = 0;
	Nat4 outputCounter = 0;
	Nat4 blockSize = 0;
	Nat4 theParameterType = 0;
	VPL_Input returnInteger;
	V_Input returnIntegerPtr = &returnInteger;
	VPL_Input returnFloat;
	V_Input returnFloatPtr = &returnFloat;
	VPL_Input returnDouble;
	V_Input returnDoublePtr = &returnDouble;
	
	Nat4 procedureInarity = 0;
	Nat4 procedureOutarity = 0;
	V_Object	*theInputObjects = NULL;
	V_Object	**theOutputObjects = NULL;
	
	va_list			argList;

	asm{ 
		mr tempInt,r1
	}					// Get the stack pointer
	parameterArea = (Nat4 *) tempInt;		// Set the initial parameter area to the stack pointer
	parameterArea += 6;						// Add 6 words to skip over the linkage area to the start of the parameter area
	tempInt = CompilerDummyCall(1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24);	/* Force the compiler to allocate 24 words in the parameter area*/

	va_start(argList,numberOfRoots);
	theInputObjects = VPXMALLOC(numberOfTerminals,V_Object);
	theOutputObjects = VPXMALLOC(numberOfRoots,V_Object *);
	for(outputCounter = 0; outputCounter < numberOfTerminals; outputCounter++){
		theInputObjects[outputCounter] = va_arg(argList,V_Object);
	}
	for(outputCounter = 0; outputCounter < numberOfRoots; outputCounter++){
		theOutputObjects[outputCounter] = va_arg(argList,V_Object *);
	}
	va_end(argList);
	

	tempProcedure = get_extProcedure(environment->externalProceduresTable,stringConstant);

	if(tempProcedure->returnParameter != NULL) procedureOutarity++;

	tempParameter = tempProcedure->parameters;
	while( tempParameter != NULL ) {
		if(tempParameter->type == kVoidType) break;
		procedureInarity++;
		if(tempParameter->type == kPointerType && tempParameter->constantFlag == 0) procedureOutarity++;
		tempParameter = tempParameter->next;
	}
	
	outputCounter = 0;
	if(tempProcedure->returnParameter != NULL) outputCounter++;

	tempParameter = tempProcedure->parameters;
	tempInputList.inputs = VPXMALLOC(numberOfTerminals,V_Input);
	inputSizes = VPXMALLOC(numberOfTerminals,Nat4);
	for(argument = 0; argument < numberOfTerminals; argument++){
		tempInput = VPXMALLOC(1,VPL_Input);
		tempInputList.inputs[argument] = tempInput;
		object = theInputObjects[argument];
		theParameterType = tempParameter->type;
		if(theParameterType == kFloatType && tempParameter->size == 8) theParameterType = kDoubleType;
		switch(theParameterType){
			case kVoidType:
				if(object == NULL){
					tempInput->inputInt = 0;
				}else{
					switch(object->type){
						case kBoolean:	tempInput->inputInt = (long) ((V_Boolean) object)->value; inputSizes[argument] = 4; break;
						case kInteger:	tempInput->inputInt = (long) ((V_Integer) object)->value; inputSizes[argument] = 4; break;
						case kReal:		tempInput->inputDouble = (double) ((V_Real) object)->value; inputSizes[argument] = 8; break;
						case kString:	tempInput->inputInt = (long) ((V_String) object)->string; inputSizes[argument] = 4; break;
						case kExternalBlock:	tempInput->inputInt = (long) ((V_ExternalBlock) object)->blockPtr; inputSizes[argument] = 4; break;
						
						default:
							break;
					}
				}
				break;
			
			case kUnsignedType:
			case kLongType:
			case kShortType:
			case kCharType:
			case kEnumType:
			case kIntType:
				if(object == NULL){
					tempInput->inputInt = 0;
				}else{
					switch(object->type){
						case kInteger:	tempInput->inputInt = ((V_Integer) object)->value; break;
						case kBoolean:	tempInput->inputInt = ((V_Boolean) object)->value; break;
						case kReal:		tempInput->inputInt = ((V_Real) object)->value; break;
						
						default:
							break;
					}
				}
				break;
			
			case kFloatType:
				switch(object->type){
					case kInteger:	tempInput->inputFloat = ((V_Integer) object)->value; break;
					case kBoolean:	tempInput->inputFloat = ((V_Boolean) object)->value; break;
					case kReal:		tempInput->inputFloat = ((V_Real) object)->value; break;
						
					default:
						break;
				}
				break;
			
			case kDoubleType:
				switch(object->type){
					case kInteger:	tempInput->inputDouble = ((V_Integer) object)->value; break;
					case kBoolean:	tempInput->inputDouble = ((V_Boolean) object)->value; break;
					case kReal:		tempInput->inputDouble = ((V_Real) object)->value; break;
						
					default:
						break;
				}
				break;
			
			case kPointerType:
				if(object == NULL){
					tempInput->inputInt = 0;
					if(tempParameter->constantFlag != 1) *theOutputObjects[outputCounter++] = NULL;
				} else if(object->type == kNone){
					increment_count(object);
					decrement_count(environment,object);
					if(tempParameter->indirection == 1) blockSize = tempParameter->size;
					else blockSize = sizeof(Nat4 *);
					tempPointer = X_malloc(blockSize);
					tempInput->inputInt = (long) tempPointer;	

					outputBlock = create_externalBlock(tempParameter->name,tempParameter->size,environment);
					outputBlock->blockPtr = tempPointer;
					outputBlock->levelOfIndirection = tempParameter->indirection - 1;
					*theOutputObjects[outputCounter++] = (V_Object) outputBlock;
				} else if(object->type == kExternalBlock){
					externalBlock = (V_ExternalBlock) object;
					if( externalBlock->levelOfIndirection == 0 && strcmp("void",externalBlock->name) == 0 ){
						if(tempParameter->constantFlag == 1){
							tempInput->inputInt = (long) externalBlock->blockPtr;
						}else{
							blockSize = externalBlock->size;
							tempPointer = X_malloc(blockSize);
							memcpy(tempPointer,externalBlock->blockPtr,blockSize);
							tempInput->inputInt = (long) tempPointer;	

							outputBlock = create_externalBlock(externalBlock->name,blockSize,environment);
							outputBlock->blockPtr = tempPointer;
							*theOutputObjects[outputCounter++] = (V_Object) outputBlock;
						}
					} else if(tempParameter->indirection - externalBlock->levelOfIndirection == -1) {
						if(tempParameter->constantFlag == 1){
							tempInput->inputInt = **((Nat4 **) externalBlock->blockPtr);
						}else{
							blockSize = sizeof(Nat4 **);
							tempPointer = X_malloc(blockSize);
							tempInput->inputInt = **((Nat4 **) externalBlock->blockPtr);			
							*((Nat4 *) tempPointer) = *((Nat4 *) externalBlock->blockPtr);

							outputBlock = create_externalBlock(externalBlock->name,externalBlock->size,environment);
							outputBlock->blockPtr = tempPointer;
							outputBlock->levelOfIndirection = externalBlock->levelOfIndirection;
							*theOutputObjects[outputCounter++] = (V_Object) outputBlock;
						}
					}else if(tempParameter->indirection - externalBlock->levelOfIndirection == 0 ||
						strcmp("VPL_CallbackCodeSegment",externalBlock->name) == 0) {
						if(tempParameter->constantFlag == 1){
							tempInput->inputInt = *((Nat4 *) externalBlock->blockPtr);
						}else{
							blockSize = sizeof(Nat4 *);
							tempPointer = X_malloc(blockSize);
							tempInput->inputInt = *((Nat4 *) externalBlock->blockPtr);			
							*((Nat4 *) tempPointer) = *((Nat4 *) externalBlock->blockPtr);

							outputBlock = create_externalBlock(externalBlock->name,externalBlock->size,environment);
							outputBlock->blockPtr = tempPointer;
							outputBlock->levelOfIndirection = externalBlock->levelOfIndirection;
							*theOutputObjects[outputCounter++] = (V_Object) outputBlock;
						}
					}else if(tempParameter->indirection - externalBlock->levelOfIndirection == 1) {
						if(tempParameter->constantFlag == 1){
							tempInput->inputInt = (long) externalBlock->blockPtr;
						}else{
							if(externalBlock->levelOfIndirection == 0) blockSize = externalBlock->size;
							else blockSize = sizeof(Nat4 *);
							tempPointer = X_malloc(blockSize);
							memcpy(tempPointer,externalBlock->blockPtr,blockSize);
							tempInput->inputInt = (long) tempPointer;	

							outputBlock = create_externalBlock(externalBlock->name,externalBlock->size,environment);
							outputBlock->blockPtr = tempPointer;
							outputBlock->levelOfIndirection = externalBlock->levelOfIndirection;
							*theOutputObjects[outputCounter++] = (V_Object) outputBlock;
						}
					}
				} else if(object->type == kInteger){
						if(tempParameter->constantFlag == 1){
							tempInput->inputInt = ((V_Integer) object)->value;
						}else{
							blockSize = sizeof(Nat4 *);
							tempPointer = X_malloc(blockSize);
							tempInput->inputInt = ((V_Integer) object)->value;
							*((Nat4 *) tempPointer) = tempInput->inputInt;

							outputBlock = create_externalBlock(tempParameter->name,blockSize,environment);
							outputBlock->blockPtr = tempPointer;
							outputBlock->levelOfIndirection = 1;
							*theOutputObjects[outputCounter++] = (V_Object) outputBlock;
						}
				}  else if(object->type == kString){										// Allow strings as pointers
						pointerString = (V_String) object;									// Added by Jack 5/13/05
						if(tempParameter->constantFlag == 1){
							tempInput->inputInt = (long) pointerString->string;
						}else{
							outputBlock = (V_ExternalBlock) create_string(pointerString->string,environment);
							tempInput->inputInt = (long) ((V_String) outputBlock)->string;	
							*theOutputObjects[outputCounter++] = (V_Object) outputBlock;
						} 
				}
				break;
			
			case kStructureType:
				externalBlock = (V_ExternalBlock) object;
				if(externalBlock->levelOfIndirection == 0) tempInput->inputInt = (long) externalBlock->blockPtr;
				break;

			default:
				break;
			
		}
		if(tempParameter->type != kVoidType) tempParameter = tempParameter->next;
	}

// Past this point no fiddling with R3! for example by calling a subroutine whose output would be place in R3
	
	gprCounter = 0;
	if(tempProcedure->returnParameter != NULL && 
	tempProcedure->returnParameter->type == kStructureType){						// If function returns a structure
		tempInt = (long) X_malloc(tempProcedure->returnParameter->size);			// Create a block and get the address
		asm{
			mr r3,tempInt
		}														// Place the address in register r3
		gprCounter++;																// Increment the current general purpose register
	}
	tempParameter = tempProcedure->parameters;
	for(argument = 0; argument < numberOfTerminals; argument++){
	tempInput = tempInputList.inputs[argument];
	theParameterType = tempParameter->type;
	if(theParameterType == kFloatType && tempParameter->size == 8) theParameterType = kDoubleType;
	switch(theParameterType){
		case kVoidType:
			if(inputSizes[argument] == 4){
				tempInt = tempInput->inputInt;
				switch(gprCounter){
					case 0: asm{ 
								mr r3,tempInt
							}
							gprCounter++; break;
					case 1: asm{
								mr r4,tempInt
							}
							gprCounter++; break;
					case 2: asm{
								mr r5,tempInt
							}
							gprCounter++; break;
					case 3: asm{
								mr r6,tempInt
							}
							gprCounter++; break;
					case 4: asm{
								mr r7,tempInt
							}
							gprCounter++; break;
					case 5: asm{
								mr r8,tempInt
							}
							gprCounter++; break;
					case 6: asm{
								mr r9,tempInt
							}
							gprCounter++; break;
					case 7: asm{
								mr r10,tempInt
							}
							gprCounter++; break;
					case 8: case 9: case 10: case 11: case 12: case 13: case 14: case 15: case 16: case 17: case 18: case 19: case 20: case 21: case 22: case 23: *(parameterArea + gprCounter++) = tempInt; break;
					default:
						break;
				}
			} else {
				tempInt = *(Nat4 *) &tempInput->inputDouble;
				switch(gprCounter){
					case 0: asm{ 
								mr r3,tempInt
							}
							gprCounter++; break;
					case 1: asm{
								mr r4,tempInt
							}
							gprCounter++; break;
					case 2: asm{
								mr r5,tempInt
							}
							gprCounter++; break;
					case 3: asm{
								mr r6,tempInt
							}
							gprCounter++; break;
					case 4: asm{
								mr r7,tempInt
							}
							gprCounter++; break;
					case 5: asm{
								mr r8,tempInt
							}
							gprCounter++; break;
					case 6: asm{
								mr r9,tempInt
							}
							gprCounter++; break;
					case 7: asm{
								mr r10,tempInt
							}
							gprCounter++; break;
					case 8: case 9: case 10: case 11: case 12: case 13: case 14: case 15: case 16: case 17: case 18: case 19: case 20: case 21: case 22: case 23: *(parameterArea + gprCounter++) = tempInt; break;
					default:
						break;
				}
				tempInt = *( (Nat4 *) &tempInput->inputDouble + 1);
				switch(gprCounter){
					case 1: asm{ 
								mr r4,tempInt
							}
							gprCounter++; break;
					case 2: asm{
								mr r5,tempInt
							}
							gprCounter++; break;
					case 3: asm{
								mr r6,tempInt
							}
							gprCounter++; break;
					case 4: asm{
								mr r7,tempInt
							}
							gprCounter++; break;
					case 5: asm{
								mr r8,tempInt
							}
							gprCounter++; break;
					case 6: asm{
								mr r9,tempInt
							}
							gprCounter++; break;
					case 7: asm{
								mr r10,tempInt
							}
							gprCounter++; break;
					case 8: case 9: case 10: case 11: case 12: case 13: case 14: case 15: case 16: case 17: case 18: case 19: case 20: case 21: case 22: case 23: *(parameterArea + gprCounter++) = tempInt; break;
					default:
						break;
				}
			}
			break;

		case kUnsignedType:
		case kLongType:
		case kShortType:
		case kCharType:
		case kEnumType:
		case kPointerType:
		case kIntType:
			tempInt = tempInput->inputInt;
			switch(gprCounter){
				case 0: asm{ 
							mr r3,tempInt
						}
						gprCounter++; break;
				case 1: asm{
							mr r4,tempInt
						}
						gprCounter++; break;
				case 2: asm{
							mr r5,tempInt
						}
						gprCounter++; break;
				case 3: asm{
							mr r6,tempInt
						}
						gprCounter++; break;
				case 4: asm{
							mr r7,tempInt
						}
						gprCounter++; break;
				case 5: asm{
							mr r8,tempInt
						}
						gprCounter++; break;
				case 6: asm{
							mr r9,tempInt
						}
						gprCounter++; break;
				case 7: asm{
							mr r10,tempInt
						}
						gprCounter++; break;
					case 8: case 9: case 10: case 11: case 12: case 13: case 14: case 15: case 16: case 17: case 18: case 19: case 20: case 21: case 22: case 23: *(parameterArea + gprCounter++) = tempInt; break;
				default:
					break;
			}
			break;

		case kStructureType:
				tempStructPointer = (Nat4 *) tempInput->inputInt;
				do{
					tempInt = *tempStructPointer;
					switch(gprCounter){
						case 0: asm{
									mr	r3,tempInt
								}
								gprCounter++; break;
						case 1: asm{
									mr	r4,tempInt
								}
								gprCounter++; break;
						case 2: asm{
									mr	r5,tempInt
								}
								gprCounter++; break;
						case 3: asm{
									mr	r6,tempInt
								}
								gprCounter++; break;
						case 4: asm{
									mr	r7,tempInt
								}
								gprCounter++; break;
						case 5: asm{
									mr	r8,tempInt
								}
								gprCounter++; break;
						case 6: asm{
									mr	r9,tempInt
								}
								gprCounter++; break;
						case 7: asm{
									mr	r10,tempInt
								}
								gprCounter++; break;
					case 8: case 9: case 10: case 11: case 12: case 13: case 14: case 15: case 16: case 17: case 18: case 19: case 20: case 21: case 22: case 23: *(parameterArea + gprCounter++) = tempInt; break;
						default:
							break;
					}
					tempStructPointer++;
				} while((Nat4)tempStructPointer - (Nat4)tempInput->inputInt < tempParameter->size);
			break;

		case kDoubleType:
			tempDouble = tempInput->inputDouble;
			gprCounter++;
			gprCounter++;

			switch(fpCounter++){
#ifdef __MWERKS__
				case 0: asm{ fmr f1,tempDouble }
#elif __GNUC__
				case 0: asm{ 
							lfd f1,tempInput->inputDouble
						}
#endif
						break;
#ifdef __MWERKS__
				case 1: asm{ fmr f2,tempDouble }
#elif __GNUC__
				case 1: asm{
							lfd f2,tempInput->inputDouble
						}
#endif
						break;
#ifdef __MWERKS__
				case 2: asm{ fmr f3,tempDouble }
#elif __GNUC__
				case 2: asm{
							lfd f3,tempInput->inputDouble
						}
#endif
						break;
#ifdef __MWERKS__
				case 3: asm{ fmr f4,tempDouble }
#elif __GNUC__
				case 3: asm{
							lfd f4,tempInput->inputDouble
						}
#endif
						break;
#ifdef __MWERKS__
				case 4: asm{ fmr f5,tempDouble }
#elif __GNUC__
				case 4: asm{
							lfd f5,tempInput->inputDouble
						}
#endif
						break;
#ifdef __MWERKS__
				case 5: asm{ fmr f6,tempDouble }
#elif __GNUC__
				case 5: asm{
							lfd f6,tempInput->inputDouble
						}
#endif
						break;
#ifdef __MWERKS__
				case 6: asm{ fmr f7,tempDouble }
#elif __GNUC__
				case 6: asm{
							lfd f7,tempInput->inputDouble
						}
#endif
						break;
#ifdef __MWERKS__
				case 7: asm{ fmr f8,tempDouble }
#elif __GNUC__
				case 7: asm{
							lfd f8,tempInput->inputDouble
						}
#endif
						break;
			}
			break;

		case kFloatType:
			tempFloat = tempInput->inputFloat;
			gprCounter++;
			switch(fpCounter++){
#ifdef __MWERKS__
				case 0: asm{ fmr f1,tempFloat }
#elif __GNUC__
				case 0: asm{
							lfs f1,tempInput->inputFloat
						}
#endif
						break;
#ifdef __MWERKS__
				case 1: asm{ fmr f2,tempFloat }
#elif __GNUC__
				case 1: asm{
							lfs f2,tempInput->inputFloat
						}
#endif
						break;
#ifdef __MWERKS__
				case 2: asm{ fmr f3,tempFloat }
#elif __GNUC__
				case 2: asm{
							lfs f3,tempInput->inputFloat
						}
#endif
						break;
#ifdef __MWERKS__
				case 3: asm{ fmr f4,tempFloat }
#elif __GNUC__
				case 3: asm{
							lfs f4,tempInput->inputFloat
						}
#endif
						break;
#ifdef __MWERKS__
				case 4: asm{ fmr f5,tempFloat }
#elif __GNUC__
				case 4: asm{
							lfs f5,tempInput->inputFloat
						}
#endif
						break;
#ifdef __MWERKS__
				case 5: asm{ fmr f6,tempFloat }
#elif __GNUC__
				case 5: asm{
							lfs f6,tempInput->inputFloat
						}
#endif
						break;
#ifdef __MWERKS__
				case 6: asm{ fmr f7,tempFloat }
#elif __GNUC__
				case 6: asm{
							lfs f7,tempInput->inputFloat
						}
#endif
						break;
#ifdef __MWERKS__
				case 7: asm{ fmr f8,tempFloat }
#elif __GNUC__
				case 7: asm{
							lfs f8,tempInput->inputFloat
						}
#endif
						break;
			}
			break;

	}
		if(tempParameter->type != kVoidType) tempParameter = tempParameter->next;
	} // End For(argument) Loop

#ifdef __MWERKS__
	functionPtr = tempProcedure->functionPtr;
	asm{
		mr         r12,functionPtr
		mtctr      r12
		bctrl
		mr         tempInt,r3
		fmr        tempFloat,fp1
		fmr        tempDouble,fp1
	}
#elif __GNUC__
	asm{
		lwz			r12,tempProcedure->functionPtr
		mtctr		r12
		bctrl
		stw			r3,returnIntegerPtr->inputInt
		stfs		f1,returnFloatPtr->inputFloat
		stfd		f1,returnDoublePtr->inputDouble
	}
	tempInt = returnIntegerPtr->inputInt;
	tempFloat = returnFloatPtr->inputFloat;
	tempDouble = returnDoublePtr->inputDouble;
#endif
	tempParameter = tempProcedure->returnParameter;
	if(tempParameter != NULL){
		switch(tempParameter->type){
			case kUnsignedType:
			case kLongType:
			case kShortType:
			case kCharType:
			case kEnumType:
			case kIntType:
				*theOutputObjects[0] = (V_Object) int_to_integer(tempInt,environment);
				break;

			case kPointerType:
				if(tempInt == 0){
					*theOutputObjects[0] = NULL;
				} else {
					tempPointer = (Nat4 *) X_malloc(sizeof(Nat4));
					*((Nat4 *)tempPointer) = tempInt;
					outputBlock = create_externalBlock(tempParameter->name,tempParameter->size,environment);
					outputBlock->blockPtr = tempPointer;
					outputBlock->levelOfIndirection = tempParameter->indirection;
					*theOutputObjects[0] = (V_Object) outputBlock;
				}
				break;

			case kStructureType:
				outputBlock = create_externalBlock(tempParameter->name,tempParameter->size,environment);
				outputBlock->blockPtr = (void *) tempInt;
				outputBlock->levelOfIndirection = 0;
				*theOutputObjects[0] = (V_Object) outputBlock;
				break;

			case kFloatType:
				*theOutputObjects[0] = (V_Object) float_to_real(tempFloat,environment);
				break;

			case kDoubleType:
				*theOutputObjects[0] = (V_Object) float_to_real(tempDouble,environment);
				break;

			default:
				return kHalt;
				break;
		}
	}

	for(argument = 0; argument < numberOfTerminals; argument++){
		X_free(tempInputList.inputs[argument]);
	}
	X_free(tempInputList.inputs);
	X_free(inputSizes);
	X_free(theInputObjects);
	X_free(theOutputObjects);

	return kSuccess;
}
#endif

#if __i386__
Int4 vpx_spawn_stack(V_Environment environment,char *initial,V_List inputList, V_List outputList,Int4 *success)
{
	register long tempInt = 0;
	register void* functionPtr = NULL;
	Int4			result = kNOERROR;
	Nat4			numberOfTerminals = 0;
	Nat4			numberOfRoots = 0;
	Nat4			inarity = 0;
	V_Method		theMethod = NULL;
	enum boolType	inputRepeat = kFALSE;
	Nat4			contextClassIndex = 0;

	Nat4 *parameterArea = NULL;
	Nat4 gprCounter = 0;
	Nat4 argument = 0;

	asm( "movl %%esp,%0" : "=r" (tempInt) : /* No inputs */ );	// Get the stack pointer
	parameterArea = (Nat4 *) tempInt;		/* Set the initial parameter area to the stack pointer */
	tempInt = CompilerDummyCall(1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24);	/* Force the compiler to allocate 24 words in the parameter area*/
	
	if(initial[0] == '/') {
		V_Instance		tempInstance = (V_Instance) inputList->objectList[0];
		Nat4			theMethodIndex = 0;
		V_ClassEntry	theClassEntry = environment->classIndexTable->classes[tempInstance->instanceIndex];

		initial = initial + 1;
		theMethodIndex = (Nat4) get_node(environment->methodsDictionary,initial);
		theMethod = theClassEntry->methods[theMethodIndex];
		while(!theMethod){
			theClassEntry = environment->classIndexTable->classes[theClassEntry->superClasses[0]];
			theMethod = theClassEntry->methods[theMethodIndex];
		}
	
		contextClassIndex = theClassEntry->theClass->classIndex;
	} else {
		theMethod = get_method(environment->universalsTable,initial); 
	}

	gprCounter = 0;
	tempInt = (Nat4) environment;
	*(parameterArea + gprCounter++) = tempInt;

	tempInt = (Nat4) &inputRepeat;
	*(parameterArea + gprCounter++) = tempInt;

	tempInt = (Nat4) contextClassIndex;
	*(parameterArea + gprCounter++) = tempInt;

	if(inputList) numberOfTerminals = inputList->listLength;
	else numberOfTerminals = 0;
	if(outputList) numberOfRoots = outputList->listLength;
	else numberOfRoots = 0;
	inarity = numberOfTerminals + numberOfRoots;
	for(argument = 0; argument < inarity; argument++){
				if(argument<numberOfTerminals) tempInt = (Nat4) inputList->objectList[argument];
				else tempInt = (Nat4) &outputList->objectList[argument-numberOfTerminals];
				*(parameterArea + gprCounter++) = tempInt;
	} /* End For(argument) Loop */
		
	functionPtr = theMethod->functionPointer;
	tempInt = (Nat4) functionPtr;
	asm( "movl %0,%%eax" : /* No outputs */ : "r" (tempInt) );
	asm( "call *%%eax" : /* No outputs */ : /* No inputs */ );
	asm( "movl %%eax,%0" : "=r" (tempInt) : /* No inputs */ );

	if(success) *success = tempInt;
	return result;
}
#endif

#if __ppc__
Int4 vpx_spawn_stack(V_Environment environment,char *initial,V_List inputList, V_List outputList,Int4 *success)
{
	register long tempInt = 0;
#ifdef __MWERKS__
	register void* functionPtr = NULL;
#elif __GNUC__
	asm{
		mr tempInt,r1
	}					/* Get the stack pointer */
#endif
	VPL_GPRegisters theRegisters;
	V_GPRegisters theRegistersPtr = &theRegisters;
	Int4			result = kNOERROR;
	Nat4			numberOfTerminals = 0;
	Nat4			numberOfRoots = 0;
	Nat4			inarity = 0;
	V_Method		theMethod = NULL;
	enum boolType	inputRepeat = kFALSE;
	Nat4			contextClassIndex = 0;

	Nat4 *parameterArea = NULL;
	Nat4 gprCounter = 0;
	Nat4 argument = 0;

#ifdef __MWERKS__
	asm{
		mr tempInt,r1
	}					/* Get the stack pointer */
#endif
	parameterArea = (Nat4 *) tempInt;		/* Set the initial parameter area to the stack pointer */
	parameterArea += 6;						/* Add 6 words to skip over the linkage area to the start of the parameter area */
	if(result) tempInt = CompilerDummyCall(1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24);	/* Force the compiler to allocate 24 words in the parameter area*/
	
	if(initial[0] == '/') {
		V_Instance		tempInstance = (V_Instance) inputList->objectList[0];
		Nat4			theMethodIndex = 0;
		V_ClassEntry	theClassEntry = environment->classIndexTable->classes[tempInstance->instanceIndex];

		initial = initial + 1;
		theMethodIndex = (Nat4) get_node(environment->methodsDictionary,initial);
		theMethod = theClassEntry->methods[theMethodIndex];
		while(!theMethod){
			theClassEntry = environment->classIndexTable->classes[theClassEntry->superClasses[0]];
			theMethod = theClassEntry->methods[theMethodIndex];
		}
	
		contextClassIndex = theClassEntry->theClass->classIndex;
	} else {
		theMethod = get_method(environment->universalsTable,initial); 
	}

	gprCounter = 0;
	tempInt = (Nat4) environment;
#ifdef __MWERKS__
	asm{
		mr r3,tempInt
	}
#elif __GNUC__
	theRegistersPtr->register3 = tempInt;
#endif	
	gprCounter++;
	tempInt = (Nat4) &inputRepeat;
#ifdef __MWERKS__
	asm{
		mr r4,tempInt
	}
#elif __GNUC__
	theRegistersPtr->register4 = tempInt;
#endif	
	gprCounter++;
	tempInt = (Nat4) contextClassIndex;
#ifdef __MWERKS__
	asm{
		mr r5,tempInt
	}
#elif __GNUC__
	theRegistersPtr->register5 = tempInt;
#endif	
	gprCounter++;


	if(inputList) numberOfTerminals = inputList->listLength;
	else numberOfTerminals = 0;
	if(outputList) numberOfRoots = outputList->listLength;
	else numberOfRoots = 0;
	inarity = numberOfTerminals + numberOfRoots;
	for(argument = 0; argument < inarity; argument++){
				if(argument<numberOfTerminals) tempInt = (Nat4) inputList->objectList[argument];
				else tempInt = (Nat4) &outputList->objectList[argument-numberOfTerminals];
				switch(gprCounter){
#ifdef __MWERKS__
					case 3: asm{
								mr r6,tempInt
							}
#elif __GNUC__
					case 3: theRegistersPtr->register6 = tempInt;
#endif	
							gprCounter++; break;
#ifdef __MWERKS__
					case 4: asm{
								mr r7,tempInt
							}
#elif __GNUC__
					case 4: theRegistersPtr->register7 = tempInt;
#endif	
							gprCounter++; break;
#ifdef __MWERKS__
					case 5: asm{
								mr r8,tempInt
							}
#elif __GNUC__
					case 5: theRegistersPtr->register8 = tempInt;
#endif	
							gprCounter++; break;
#ifdef __MWERKS__
					case 6: asm{
								mr r9,tempInt
							}
#elif __GNUC__
					case 6: theRegistersPtr->register9 = tempInt;
#endif	
							gprCounter++; break;
#ifdef __MWERKS__
					case 7: asm{
								mr r10,tempInt
							}
#elif __GNUC__
					case 7: theRegistersPtr->register10 = tempInt;
#endif	
							gprCounter++; break;
					case 8: case 9: case 10: case 11: case 12: case 13: case 14: case 15: case 16: case 17: case 18: case 19: case 20: case 21: case 22: case 23: *(parameterArea + gprCounter++) = tempInt; break;
				}
	} /* End For(argument) Loop */
		
#ifdef __MWERKS__
	functionPtr = theMethod->functionPointer;
	asm{
			mr         r12,functionPtr
			mtctr      r12
			bctrl
			mr         tempInt,r3
	}
#elif __GNUC__
	asm{
			lwz			r3,theRegistersPtr->register3
			lwz			r4,theRegistersPtr->register4
			lwz			r5,theRegistersPtr->register5
			lwz			r6,theRegistersPtr->register6
			lwz			r7,theRegistersPtr->register7
			lwz			r8,theRegistersPtr->register8
			lwz			r9,theRegistersPtr->register9
			lwz			r10,theRegistersPtr->register10
			lwz			r12,theMethod->functionPointer
			mtctr		r12
			bctrl
			mr			tempInt,r3
	}
#endif	
	if(success) *success = tempInt;
	return result;
}
#endif

Nat4 vpx_multiplex(Nat4 numberOfTerminals, ...)
{
	Nat4		minLength = ULONG_MAX;
	V_Object	tempTerminal = NULL;
	va_list		argList;

	va_start(argList,numberOfTerminals);
	for( ;numberOfTerminals;numberOfTerminals--){
		tempTerminal = va_arg(argList,V_Object);
		if(tempTerminal && tempTerminal->type == kList && ((V_List) tempTerminal)->listLength < minLength)
			minLength = ((V_List) tempTerminal)->listLength;
	}
	va_end(argList);

	return minLength;
}

V_ListRootNode vpx_create_listRootNode(V_Environment environment,V_ListRootNode node, V_Object listRoot)
{
#pragma unused(environment)
	V_ListRootNode	newNode = NULL;

/* To handle the last element "decrement" in flatten correctly, put all objects (including NONEs) in linked list */

	newNode = (V_ListRootNode) X_malloc(sizeof(VPL_ListRootNode));
	newNode->previous = node;
	newNode->object = vpx_increment_count(listRoot);
	return newNode;
}

V_Object vpx_flatten_listRootNodes(V_Environment environment, V_ListRootNode node)
{
	Nat4			numberOfNodes = 0;
	V_ListRootNode	tempNode = node;
	V_ListRootNode	freeNode = NULL;
	V_List			list = NULL;
	
	if(node) decrement_count(environment,node->object);	// The last root will not have passed through an OUTPUT setting, so must decrement!

	while(tempNode) {
		if(!tempNode->object || tempNode->object->type != kNone) numberOfNodes++;	// Only count non-NONE objects
		tempNode = tempNode->previous;
	}
	
	tempNode = node;
	list = create_list(numberOfNodes,environment);
	while(tempNode){
		if(!tempNode->object || tempNode->object->type != kNone) list->objectList[--numberOfNodes] = tempNode->object;
		else decrement_count(environment,tempNode->object);
		freeNode = tempNode;
		tempNode = tempNode->previous;
		X_free(freeNode);
	}
	
	return (V_Object) list;
}

Int4 vpx_class_map(V_Environment environment, Int4	classConstant, Int1 *className)
{
	V_Class	tempClass = get_class(environment->classTable,className);
	pClassConstantToIndex[classConstant] = tempClass->classIndex;
	return kNOERROR;
}

Int4 vpx_method_map(V_Environment environment, Int4	methodConstant, Int1 *methodName)
{
	Nat4	theIndex = (Nat4) get_node(environment->methodsDictionary,methodName);
	pMethodConstantToIndex[methodConstant] = theIndex;
	return kNOERROR;
}

Int4 vpx_value_map(V_Environment environment, Int4	valueConstant, Int1 *valueName)
{
	Nat4	theIndex = (Nat4) get_node(environment->valuesDictionary,valueName);
	pValueConstantToIndex[valueConstant] = theIndex;
	return kNOERROR;
}

Int4 vpx_method_initialize(V_Environment environment, V_Method tempMethod, void *functionPtr, Int1 *textValue)
{
#pragma unused(environment)
	tempMethod->functionPointer = functionPtr;
	
	method_type_to(tempMethod,environment,textValue);
	return kNOERROR;
}

Int4 vpx_get_integer(V_Object object)
{
	if(object) switch(object->type) { 
		case kBoolean: 
			return ((V_Boolean) object)->value;
			break;
			
		case kInteger:
			return ((V_Integer) object)->value;
			break;

		case kReal:
			return ((V_Real) object)->value;
			break;

	}
	else return 0;
	
	return 0;
}

Real10 vpx_get_real(V_Object object)
{
	if(object) switch(object->type) { 
		case kBoolean:
			return ((V_Boolean) object)->value;
			break;
			
		case kInteger:
			return ((V_Integer) object)->value;
			break;
			
		case kReal:
			return ((V_Real) object)->value;
			break;
	}
	else return 0;
	
	return 0;
}

void *vpx_get_none_pointer(V_Environment environment,Nat4 size,Int1 *type,Int1* level,V_Object *object)
{
	Nat4	blockSize = 0;
	Nat4	indirection = 0;
	void	*tempPointer = NULL;
	V_ExternalBlock	outputBlock = NULL;
	
	
	indirection = strlen(level) - 1;
	if(!indirection) blockSize = size;
	else blockSize = sizeof(Nat4 *);
	tempPointer = X_malloc(blockSize);

	outputBlock = create_externalBlock(type,size,environment);
	outputBlock->blockPtr = tempPointer;
	outputBlock->levelOfIndirection = indirection;

	*object = (V_Object) outputBlock;
	return tempPointer;
}

void *vpx_get_pointer(V_Environment environment,Nat4 size,Int1 *type,Int1* level,V_Object *object,V_Object terminal)
{
	Nat4			returnPointer = 0;
	void			*tempPointer = NULL;
	Nat4			theLevel = strlen(level);
	V_ExternalBlock	outputBlock = NULL;

	if(!terminal) {
		*object = NULL;
		return NULL;			
	}
	switch(terminal->type){
	
		case kExternalBlock:
			{
				V_ExternalBlock externalBlock = (V_ExternalBlock) terminal;
				Nat4			blockSize = 0;
	
					if( externalBlock->levelOfIndirection == 0 && strcmp("void",externalBlock->name) == 0 ) {
							blockSize = externalBlock->size;
							tempPointer = X_malloc(blockSize);
							memcpy(tempPointer,externalBlock->blockPtr,blockSize);
							returnPointer = (Nat4) tempPointer;	

							outputBlock = create_externalBlock(externalBlock->name,blockSize,environment);
							outputBlock->blockPtr = tempPointer;
							*object = (V_Object) outputBlock;
					}else if(theLevel - externalBlock->levelOfIndirection == -1) {
							blockSize = sizeof(Nat4 **);
							tempPointer = X_malloc(blockSize);
							returnPointer = **((Nat4 **) externalBlock->blockPtr);			
							*((Nat4 *) tempPointer) = *((Nat4 *) externalBlock->blockPtr);

							outputBlock = create_externalBlock(externalBlock->name,externalBlock->size,environment);
							outputBlock->blockPtr = tempPointer;
							outputBlock->levelOfIndirection = externalBlock->levelOfIndirection;
							*object = (V_Object) outputBlock;
					}else if(theLevel - externalBlock->levelOfIndirection == 0 ||
						strcmp("VPL_CallbackCodeSegment",externalBlock->name) == 0) {
							blockSize = sizeof(Nat4 *);
							tempPointer = X_malloc(blockSize);
							returnPointer = *((Nat4 *) externalBlock->blockPtr);			
							*((Nat4 *) tempPointer) = *((Nat4 *) externalBlock->blockPtr);

							outputBlock = create_externalBlock(externalBlock->name,externalBlock->size,environment);
							outputBlock->blockPtr = tempPointer;
							outputBlock->levelOfIndirection = externalBlock->levelOfIndirection;
							*object = (V_Object) outputBlock;
					}else if(theLevel - externalBlock->levelOfIndirection == 1) {
							if(externalBlock->levelOfIndirection == 0) blockSize = externalBlock->size;
							else blockSize = sizeof(Nat4 *);
							tempPointer = X_malloc(blockSize);
							memcpy(tempPointer,externalBlock->blockPtr,blockSize);
							returnPointer = (Nat4) tempPointer;	

							outputBlock = create_externalBlock(externalBlock->name,externalBlock->size,environment);
							outputBlock->blockPtr = tempPointer;
							outputBlock->levelOfIndirection = externalBlock->levelOfIndirection;
							*object = (V_Object) outputBlock;
					}
			}
			break;

		case kInteger:
			{
				V_Integer		theInteger = (V_Integer) terminal;
				Nat4			blockSize = 0;
	
							blockSize = sizeof(Nat4 *);
							tempPointer = X_malloc(blockSize);
							returnPointer = (Nat4) theInteger->value;
							*((Nat4 *) tempPointer) = returnPointer;

							outputBlock = create_externalBlock(type,blockSize,environment);
							outputBlock->blockPtr = tempPointer;
							outputBlock->levelOfIndirection = 1;
							*object = (V_Object) outputBlock;
			}
			break;
		
		case kString:
			{
				V_String		theString = (V_String) terminal;

							outputBlock = (V_ExternalBlock) create_string(theString->string,environment);
							returnPointer = (Nat4) ((V_String) outputBlock)->string;	
							*object = (V_Object) outputBlock;
			}
			break;
		
		case kNone:
			return vpx_get_none_pointer(environment,size,type,level,object);
			break;
	}

	return (void *) returnPointer;
}

void *vpx_get_const_pointer(V_Environment environment,Int1* level,V_Object terminal)
{
#pragma unused(environment)
	Nat4	returnPointer = 0;
	Nat4	theLevel = strlen(level);
	
	if(!terminal) return NULL;			
	switch(terminal->type){
	
		case kExternalBlock:
			if(theLevel - ((V_ExternalBlock) terminal)->levelOfIndirection == -1) returnPointer =  **((Nat4 **) (((V_ExternalBlock) terminal)->blockPtr));
			else if(theLevel - ((V_ExternalBlock) terminal)->levelOfIndirection == 0 || strcmp("VPL_CallbackCodeSegment",((V_ExternalBlock) terminal)->name) == 0)
				returnPointer =  *((Nat4 *) ((V_ExternalBlock) terminal)->blockPtr);
			else if(theLevel - ((V_ExternalBlock) terminal)->levelOfIndirection == 1)
				returnPointer = (Nat4) ((V_ExternalBlock) terminal)->blockPtr;
			break;

		case kInteger:
				returnPointer =  (Nat4)((V_Integer) terminal)->value;
			break;
			
		case kString:
				returnPointer =  (Nat4)((V_String) terminal)->string;
			break;
	}

	return (void *) returnPointer;
}

