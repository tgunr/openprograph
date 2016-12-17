/*
	
	VPL_Execution.c
	Copyright 2000 Scott B. Anderson, All Rights Reserved.
	
*/

#include "VPL_Execution.h"
#include <string.h>
#include <stdlib.h>

Int4 attribute_offset( V_Class tempClass , Int1 *tempOString )
{
	V_Dictionary		tempDictionary = NULL;
	Nat4				counter = 0;
	V_DictionaryNode	nodePtr = NULL;

	tempDictionary = tempClass->attributes;
	for(counter = 0;counter < tempDictionary->numberOfNodes;counter++){
		nodePtr = tempDictionary->nodes[counter];
		if(strcmp(tempOString,nodePtr->name) == 0) {
			return counter;
		}
	}
	return -1;
}

Int4 execute_get( V_Environment environment,V_Stack stack)
{
	V_Frame		currentFrame = stack->currentFrame;
	V_Operation	currentOperation = currentFrame->operation;

	V_Object	possibleInstance = NULL;
	V_Instance	tempInstance = NULL;
	V_Class		tempClass = NULL;
	V_Object	tempObject = NULL;
	Int1		*tempOString = "";
	V_Dictionary	tempDictionary = NULL;
	Int4		counter = 0;

	V_Value		ptrM = NULL;
	Int1		*tempAString = "";
	Int1		*tempClassName = "";

	Int1	*moduleName = module_name(currentOperation,environment);

	vpl_StringPtr		primName = "get";
	Int4		result = kNOERROR;

#ifdef VPL_VERBOSE_ENGINE
	result = VPLEngineCheckInputArity( 1, primName, currentFrame, environment );
	if( result != kNOERROR ) return result;

	result = VPLEngineCheckOutputArity( 2, primName, currentFrame, environment );
	if( result != kNOERROR ) return result;

	result = VPLEngineGetInputObjectType( kInstance,0, currentFrame, environment );
	if( result != kNOERROR ) {
		result = VPLEngineGetInputObjectType( kString,0, currentFrame, environment );
		if( result != kNOERROR ) return result;
	}

#endif

	possibleInstance = VPLEngineGetInputObject(0,currentFrame,environment);

/*--------*/
	if(currentOperation->columnIndex != -1 && currentOperation->inject == 0){
		Nat4			theClassIndex = currentOperation->classIndex;
		V_ClassEntry	theClassEntry = NULL;
		if(theClassIndex == 0){
			if(possibleInstance->type == kInstance && possibleInstance->instanceIndex){
				theClassIndex = possibleInstance->instanceIndex;
				tempInstance = (V_Instance) possibleInstance;
			}
		} else theClassIndex = -1;
		if(theClassIndex != -1){
			theClassEntry = environment->classIndexTable->classes[theClassIndex];
			if(theClassEntry->values[currentOperation->columnIndex]) {
				V_WatchpointNode	tempWatchpointNode = theClassEntry->values[currentOperation->columnIndex]->watchpointList;
				
				if(!environment->compiled && !environment->stopNext && theClassIndex != (Nat4) -1){
					while(tempWatchpointNode){
						if(tempWatchpointNode->theInstance == tempInstance){
							record_fault(environment,kWatchpoint,"NULL","NULL","NULL",moduleName);
							return kHalt;
						}
						tempWatchpointNode = tempWatchpointNode->previous;
					}
				}

				if(theClassEntry->values[currentOperation->columnIndex]->type == kAttributeNode){
					counter = theClassEntry->values[currentOperation->columnIndex]->attributeOffset;
					tempObject = tempInstance->objectList[counter];
				} else {
					tempObject = theClassEntry->values[currentOperation->columnIndex]->value->value;
				}
				increment_count(tempObject);
				X_set_frame_root_object(environment,currentFrame,1,tempObject);
			
				increment_count(possibleInstance);
				X_set_frame_root_object(environment,currentFrame,0,possibleInstance);
	
				return kSuccess;
			}
		}
	}
/*----------*/
	
	if(currentOperation->inject == 0){
		record_error("get: Non-inject operation! Current Operation Column Index not set",tempOString,kERROR,environment);
	}
	if( possibleInstance->type == kInstance){
		tempInstance = (V_Instance) possibleInstance;
		tempClassName = tempInstance->name;
		tempClass = get_class(environment->classTable,tempClassName);
	} else if( possibleInstance->type == kString){
		tempClassName = ((V_String) possibleInstance)->string;
		tempClass = get_class(environment->classTable,tempClassName);
	}
	
	if(tempClass != NULL){
		Nat4	columnIndex = -1;
		tempOString = X_operation_name(environment,stack->currentFrame);
		if(tempOString == NULL){
			record_error("get: NULL Operation name: ",moduleName,kERROR,environment);
			return kHalt;
		}
		if(tempOString[0] == '/') {
			tempAString = (Int1 *) X_malloc(strlen(tempOString));
			strcpy(tempAString,tempOString+1);
			X_free(tempOString);
			tempOString = tempAString;
		}
		counter = attribute_offset(tempClass,tempOString);
		if(counter == -1){
/*	Try interpreting it as a class attribute: ie: persistent */
			columnIndex = (Nat4) get_node(environment->valuesDictionary,tempOString);
			tempAString = new_cat_string("/",tempOString,environment);
			X_free(tempOString);
			tempOString = new_cat_string(tempClassName,tempAString,environment);
			X_free(tempAString);
			ptrM = get_persistentNode(environment->persistentsTable,tempOString);
			if(ptrM != NULL){
				X_free(tempOString);
				
				if(!environment->compiled && !environment->stopNext){
					V_ClassEntry	theClassEntry = environment->classIndexTable->classes[tempClass->classIndex];
					if(theClassEntry && theClassEntry->values[columnIndex]) {
						V_WatchpointNode	tempWatchpointNode = theClassEntry->values[columnIndex]->watchpointList;
				
						while(tempWatchpointNode){
							if(tempWatchpointNode->theInstance == tempInstance){
								record_fault(environment,kWatchpoint,"NULL","NULL","NULL",moduleName);
								return kHalt;
							}
							tempWatchpointNode = tempWatchpointNode->previous;
						}
					}	
				}

				tempObject = ptrM->value;
				increment_count(tempObject);
				X_set_frame_root_object(environment,currentFrame,1,tempObject);

				increment_count(possibleInstance);
				X_set_frame_root_object(environment,currentFrame,0,possibleInstance);

				return kSuccess;	
			} else {
				record_error("get: Attribute: ",tempOString,kERROR,environment);
				record_error("get: Attribute not found for: ",tempClassName,kERROR,environment);
				record_error("get: Attribute not found in module: ",moduleName,kERROR,environment);
				record_fault(environment,kNonexistentAttribute,tempOString,tempClassName,primName,moduleName);
				X_free(tempOString);
				return kHalt;
			}
		}
		if(environment->compiled && possibleInstance->type != kInstance){
				record_error("get: Attribute: ",tempOString,kERROR,environment);
				record_error("get: Attempted to get attribute as default for instance: ",tempClassName,kERROR,environment);
				record_error("get: Attribute not fetched in module since running compiled: ",moduleName,kERROR,environment);
				record_fault(environment,kIncorrectType,"Instance","NULL",primName,moduleName);
				X_free(tempOString);
				return kHalt;
		}
		tempDictionary = tempClass->attributes;
		if(possibleInstance->type == kInstance && tempDictionary != NULL && tempDictionary->numberOfNodes != tempInstance->listLength){
			record_error("get: Attribute: ",tempOString,kERROR,environment);
			record_error("get: Attribute out of range for: ",tempClassName,kERROR,environment);
			record_error("get: Attribute out of range in module: ",moduleName,kERROR,environment);
			record_fault(environment,kNonexistentAttribute,tempOString,tempClassName,primName,moduleName);
			X_free(tempOString);
			return kHalt;
		}
		columnIndex = (Nat4) get_node(environment->valuesDictionary,tempOString);
		
		X_free(tempOString);

		if(!environment->compiled && !environment->stopNext){
			V_ClassEntry	theClassEntry = environment->classIndexTable->classes[tempClass->classIndex];
			if(theClassEntry && theClassEntry->values[columnIndex]) {
				V_WatchpointNode	tempWatchpointNode = theClassEntry->values[columnIndex]->watchpointList;
				
				while(tempWatchpointNode){
					if(tempWatchpointNode->theInstance == tempInstance){
						record_fault(environment,kWatchpoint,"NULL","NULL","NULL",moduleName);
						return kHalt;
					}
					tempWatchpointNode = tempWatchpointNode->previous;
				}
			}	
		}
		
		if(possibleInstance->type == kInstance){
			tempObject = tempInstance->objectList[counter];
			increment_count(tempObject);
			X_set_frame_root_object(environment,currentFrame,1,tempObject);
		} else {
			V_DictionaryNode	tempNode = NULL;
			V_Value				tempValue = NULL;
			tempNode = tempDictionary->nodes[counter];
			tempValue = (V_Value) tempNode->object;
			tempObject = tempValue->value;
			increment_count(tempObject);
			X_set_frame_root_object(environment,currentFrame,1,tempObject);
		}
		
		increment_count(possibleInstance);
		X_set_frame_root_object(environment,currentFrame,0,possibleInstance);

		return kSuccess;
	}else{ // tempClass == NULL
		record_error("get: Class not found: ",moduleName,kERROR,environment);
		return record_fault(environment,kNonexistentClass,tempClassName,"NULL",primName,moduleName);
	}
}

Int4 execute_set( V_Environment environment,V_Stack stack)
{
	V_Frame		currentFrame = stack->currentFrame;
	V_Operation	currentOperation = currentFrame->operation;

	V_Object	possibleInstance = NULL;
	V_Instance	tempInstance = NULL;
	V_Class		tempClass = NULL;
	V_Object	tempObject = NULL;
	V_Object	previousObject = NULL;
	Int1		*tempOString = NULL;
	V_Dictionary	tempDictionary = NULL;
	Int4		counter = 0;
	
	V_Value		ptrM = NULL;
	Int1		*tempAString = "";
	Int1		*tempClassName = "";

	Int1	*moduleName = module_name(currentOperation,environment);

	vpl_StringPtr		primName = "set";
	Int4		result = kNOERROR;

#ifdef VPL_VERBOSE_ENGINE
	result = VPLEngineCheckInputArity( 2, primName, currentFrame, environment );
	if( result != kNOERROR ) return result;

	result = VPLEngineCheckOutputArity( 1, primName, currentFrame, environment );
	if( result != kNOERROR ) return result;

	result = VPLEngineGetInputObjectType( kInstance,0, currentFrame, environment );
	if( result != kNOERROR ) {
		result = VPLEngineGetInputObjectType( kString,0, currentFrame, environment );
		if( result != kNOERROR ) return result;
	}

#endif

	possibleInstance = VPLEngineGetInputObject(0,currentFrame,environment);
	tempObject = VPLEngineGetInputObject(1,currentFrame,environment);
	
/*--------*/
	if(currentOperation->columnIndex != -1 && currentOperation->inject == 0){
		Nat4			theClassIndex = currentOperation->classIndex;
		V_ClassEntry	theClassEntry = NULL;
		if(theClassIndex == 0){
			if(possibleInstance->type == kInstance && possibleInstance->instanceIndex){
				theClassIndex = possibleInstance->instanceIndex;
				tempInstance = (V_Instance) possibleInstance;
			}
		} else theClassIndex = -1;
		if(theClassIndex != -1){
			theClassEntry = environment->classIndexTable->classes[theClassIndex];
			if(theClassEntry && theClassEntry->values[currentOperation->columnIndex]) {
				V_WatchpointNode	tempWatchpointNode = theClassEntry->values[currentOperation->columnIndex]->watchpointList;
				
				if(!environment->compiled && !environment->stopNext){
					while(tempWatchpointNode){
						if(tempWatchpointNode->theInstance == tempInstance){
							record_fault(environment,kWatchpoint,"NULL","NULL","NULL",moduleName);
							return kHalt;
						}
						tempWatchpointNode = tempWatchpointNode->previous;
					}
				}

				if(theClassEntry->values[currentOperation->columnIndex]->type == kAttributeNode){
					counter = theClassEntry->values[currentOperation->columnIndex]->attributeOffset;
					previousObject = tempInstance->objectList[counter];
					increment_count(tempObject);
					decrement_count(environment,previousObject);
					tempInstance->objectList[counter] = tempObject;
				} else {
					previousObject = theClassEntry->values[currentOperation->columnIndex]->value->value;
					increment_count(tempObject);
					decrement_count(environment,previousObject);
					theClassEntry->values[currentOperation->columnIndex]->value->value = tempObject;
				}
		
				increment_count(possibleInstance);
				X_set_frame_root_object(environment,currentFrame,0,possibleInstance);
						
				return kSuccess;
			}	
		}
	}
/*----------*/

	if(currentOperation->inject == 0){
		record_error("set: Non-inject operation! Current Operation Column Index not set",tempOString,kERROR,environment);
	}
	if( possibleInstance->type == kInstance){
		tempInstance = (V_Instance) possibleInstance;
		tempClassName = tempInstance->name;
		tempClass = get_class(environment->classTable,tempClassName);
	} else if( possibleInstance->type == kString){
		tempClassName = ((V_String) possibleInstance)->string;
		tempClass = get_class(environment->classTable,tempClassName);
	}

	if(tempClass != NULL){
		Nat4	columnIndex = -1;
		tempOString = X_operation_name(environment,stack->currentFrame);
		if(tempOString == NULL){
			record_error("set: NULL Operation name: ",moduleName,kERROR,environment);
			return kHalt;
		}
		if(tempOString[0] == '/') {
			tempAString = (Int1 *) X_malloc(strlen(tempOString));
			strcpy(tempAString,tempOString+1);
			X_free(tempOString);
			tempOString = tempAString;
		}
		counter = attribute_offset(tempClass,tempOString);
		if(counter == -1){
/*	Try interpreting it as a class attribute: ie: persistent */
			columnIndex = (Nat4) get_node(environment->valuesDictionary,tempOString);
			tempAString = new_cat_string("/",tempOString,environment);
			X_free(tempOString);
			tempOString = new_cat_string(tempClassName,tempAString,environment);
			X_free(tempAString);
			ptrM = get_persistentNode(environment->persistentsTable,tempOString);
			if(ptrM != NULL){
				X_free(tempOString);

				if(!environment->compiled && !environment->stopNext){
					V_ClassEntry	theClassEntry = environment->classIndexTable->classes[tempClass->classIndex];
					if(theClassEntry && theClassEntry->values[columnIndex]) {
						V_WatchpointNode	tempWatchpointNode = theClassEntry->values[columnIndex]->watchpointList;
				
						while(tempWatchpointNode){
							if(tempWatchpointNode->theInstance == tempInstance){
								record_fault(environment,kWatchpoint,"NULL","NULL","NULL",moduleName);
								return kHalt;
							}
							tempWatchpointNode = tempWatchpointNode->previous;
						}
					}	
				}

				previousObject = ptrM->value;
				increment_count(tempObject);
				decrement_count(environment,previousObject);
				ptrM->value = tempObject;

				increment_count(possibleInstance);
				X_set_frame_root_object(environment,currentFrame,0,possibleInstance);

				return kSuccess;	
			} else {
				record_error("set: Attribute: ",tempOString,kERROR,environment);
				record_error("set: Attribute not found for: ",tempClassName,kERROR,environment);
				record_error("set: Attribute not found in module: ",moduleName,kERROR,environment);
				record_fault(environment,kNonexistentAttribute,tempOString,tempClassName,primName,moduleName);
				X_free(tempOString);
				return kHalt;
			}
		}
		if(environment->compiled && possibleInstance->type != kInstance){
				record_error("set: Attribute: ",tempOString,kERROR,environment);
				record_error("set: Attempted to set attribute as default for instance: ",tempClassName,kERROR,environment);
				record_error("set: Attribute not set in module since running compiled: ",moduleName,kERROR,environment);
				record_fault(environment,kIncorrectType,"Instance","NULL",primName,moduleName);
				X_free(tempOString);
				return kHalt;
		}
		tempDictionary = tempClass->attributes;
		if(possibleInstance->type == kInstance && tempDictionary != NULL && tempDictionary->numberOfNodes != tempInstance->listLength){
			record_error("set: Attribute: ",tempOString,kERROR,environment);
			record_error("set: Attribute out of range for: ",tempClassName,kERROR,environment);
			record_error("set: Attribute out of range in module: ",moduleName,kERROR,environment);
			record_fault(environment,kNonexistentAttribute,tempOString,tempClassName,primName,moduleName);
			X_free(tempOString);
			return kHalt;
		}
		columnIndex = (Nat4) get_node(environment->valuesDictionary,tempOString);
		
		X_free(tempOString);

		if(!environment->compiled && !environment->stopNext){
			V_ClassEntry	theClassEntry = environment->classIndexTable->classes[tempClass->classIndex];
			if(theClassEntry && theClassEntry->values[columnIndex]) {
				V_WatchpointNode	tempWatchpointNode = theClassEntry->values[columnIndex]->watchpointList;
				
				while(tempWatchpointNode){
					if(tempWatchpointNode->theInstance == tempInstance){
						record_fault(environment,kWatchpoint,"NULL","NULL","NULL",moduleName);
						return kHalt;
					}
					tempWatchpointNode = tempWatchpointNode->previous;
				}
			}	
		}

		if(possibleInstance->type == kInstance){
			previousObject = tempInstance->objectList[counter];
			increment_count(tempObject);
			decrement_count(environment,previousObject);
			tempInstance->objectList[counter] = tempObject;
		} else {
			V_DictionaryNode	tempNode = NULL;
			V_Value				tempValue = NULL;
			tempNode = tempDictionary->nodes[counter];
			tempValue = (V_Value) tempNode->object;
			previousObject = tempValue->value;
			increment_count(tempObject);
			decrement_count(environment,previousObject);
			tempValue->value = tempObject;
		}

		increment_count(possibleInstance);
		X_set_frame_root_object(environment,currentFrame,0,possibleInstance);

		return kSuccess;	
	}else{ // tempClass == NULL
		record_error("set: Class not found: ",moduleName,kERROR,environment);
		return record_fault(environment,kNonexistentClass,tempClassName,"NULL",primName,moduleName);
	}
}

Int4 execute_extget( V_Environment environment,V_Stack stack)
{
	V_Frame		currentFrame = stack->currentFrame;
	V_Operation	currentOperation = currentFrame->operation;

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
	Int1		*tempOString = NULL;
	Int1		*tempAString = NULL;
	Nat4		pointer = 0;
	vpl_Integer		inputOffset = 0;
	Bool		modeArray = kFALSE;
	Bool		modeAddress = kFALSE;
	enum parameterType	effectiveType = kIntType;

	Int1	*moduleName = module_name(currentOperation,environment);
	
	vpl_StringPtr	primName = "extget";
	vpl_Status		result = kNOERROR;

#ifdef VPL_VERBOSE_ENGINE
	result = VPLEngineCheckInputArityMin( 1, primName, currentFrame, environment );
	if( result != kNOERROR ) return kHalt;

	result = VPLEngineCheckInputArityMax( 2, primName, currentFrame, environment );
	if( result != kNOERROR ) return kHalt;

	result = VPLEngineCheckOutputArity( 2, primName, currentFrame, environment );
	if( result != kNOERROR ) return kHalt;

	result = VPLEngineGetInputObjectType( kExternalBlock,0, currentFrame, environment );
	if( result != kNOERROR ) return kHalt;

#endif

	possibleStructure = VPLEngineGetInputObject(0,currentFrame,environment);
	if(VPLEngineGetInputArity(currentFrame) == 2) {
		result = VPLEngineGetInputObjectInteger(&inputOffset,1,primName,currentFrame,environment);
		if( result != kNOERROR ) return kHalt;
		modeArray = kTRUE;
	}
		
	tempStructure = (V_ExternalBlock) possibleStructure;
	
	extStructure = get_extStructure(environment->externalStructsTable,tempStructure->name);

	if(extStructure != NULL){
		tempOString = X_operation_name(environment,stack->currentFrame);
		if(tempOString == NULL){
			record_error("extget: NULL Operation name: ",moduleName,kERROR,environment);
			return kHalt;
		}
		if(tempOString[0] == '&') {
			tempAString = (Int1 *) X_malloc(strlen(tempOString));
			strcpy(tempAString,tempOString+1);
			X_free(tempOString);
			tempOString = tempAString;
			modeAddress = kTRUE;
		}
		tempField = get_extField(extStructure,tempOString);
		if( tempField == NULL ) {
			record_error("extget: Could not find field! - ",moduleName,kWRONGINPUTTYPE,environment);
			record_error("extget: Field Name is: ",tempOString,kWRONGINPUTTYPE,environment);
			record_fault(environment,kNonexistentField,tempOString,extStructure->name,"NULL",currentFrame->methodName);
			X_free(tempOString);
			return kHalt;
		}
		X_free(tempOString);
		if(tempField != NULL){
			size = tempField->size;
			offset = tempField->offset + size*inputOffset;
			if(tempStructure->levelOfIndirection == 0) pointer = (Nat4) tempStructure->blockPtr;
			else if(tempStructure->levelOfIndirection == 1) pointer = *(Nat4 *) tempStructure->blockPtr;
			else if(tempStructure->levelOfIndirection == 2) pointer = **(Nat4 **) tempStructure->blockPtr;
			else{
				record_error("extget: Input 1 structure level of indirection is too high! - ",moduleName,kWRONGINPUTTYPE,environment);
				return kHalt;
			}
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

							default:
								record_error("extget: Unhandled field type! - ",moduleName,kWRONGINPUTTYPE,environment);
								return kHalt;
								break;
                        }
			}
		}
		/* ToDo - else record error */


		X_set_frame_root_object(environment,currentFrame,1,tempObject);
		
		increment_count(possibleStructure);
		X_set_frame_root_object(environment,currentFrame,0,possibleStructure);

		return kSuccess;
	}else{
		record_error("extget: Could not find structure! - ",moduleName,kERROR,environment);
		return kHalt;
	}
}

Int4 execute_extset( V_Environment environment,V_Stack stack)
{
	V_Frame		currentFrame = stack->currentFrame;
	V_Operation	currentOperation = currentFrame->operation;

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
	Int1		*tempOString = NULL;
	Nat4		pointer = 0;
	void		*voidPointer = NULL;
	vpl_Integer		inputOffset = 0;
	Bool		modeArray = kFALSE;
	enum parameterType	effectiveType = kIntType;

	Int1	*moduleName = module_name(currentOperation,environment);

	vpl_StringPtr	primName = "extset";
	vpl_Status		result = kNOERROR;

#ifdef VPL_VERBOSE_ENGINE
	result = VPLEngineCheckInputArityMin( 2, primName, currentFrame, environment );
	if( result != kNOERROR ) return kHalt;

	result = VPLEngineCheckInputArityMax( 3, primName, currentFrame, environment );
	if( result != kNOERROR ) return kHalt;

	result = VPLEngineCheckOutputArity( 1, primName, currentFrame, environment );
	if( result != kNOERROR ) return kHalt;

	result = VPLEngineGetInputObjectType( kExternalBlock,0, currentFrame, environment );
	if( result != kNOERROR ) return kHalt;

#endif

	possibleStructure = VPLEngineGetInputObject(0,currentFrame,environment);
	block = VPLEngineGetInputObject(1,currentFrame,environment);
	if(VPLEngineGetInputArity(currentFrame) == 3) {
		result = VPLEngineGetInputObjectInteger(&inputOffset,2,primName,currentFrame,environment);
		if( result != kNOERROR ) return kHalt;
		modeArray = kTRUE;
	}
	
	tempStructure = (V_ExternalBlock) possibleStructure;
	extStructure = get_extStructure(environment->externalStructsTable,tempStructure->name);

	if(extStructure != NULL){
		tempOString = X_operation_name(environment,stack->currentFrame);
		if(tempOString == NULL){
			record_error("extset: NULL Operation name: ",moduleName,kERROR,environment);
			return kHalt;
		}
		tempField = get_extField(extStructure,tempOString);
		if( tempField == NULL ) {
			record_error("extget: Could not find field! - ",moduleName,kWRONGINPUTTYPE,environment);
			record_error("extget: Field Name is: ",tempOString,kWRONGINPUTTYPE,environment);
			record_fault(environment,kNonexistentField,tempOString,extStructure->name,"NULL",currentFrame->methodName);
			X_free(tempOString);
			return kHalt;
		}
		X_free(tempOString);
		if(tempField != NULL){
			size = tempField->size;
			offset = tempField->offset+size*inputOffset;
			if(tempStructure->levelOfIndirection == 0) pointer = (Nat4) tempStructure->blockPtr;
			else if(tempStructure->levelOfIndirection == 1) pointer = *(Nat4 *) tempStructure->blockPtr;
			else if(tempStructure->levelOfIndirection == 2) pointer = **(Nat4 **) tempStructure->blockPtr;
			else{
				record_error("extset: Input 1 structure level of indirection is too high! - ",moduleName,kWRONGINPUTTYPE,environment);
				return kHalt;
			}
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
									default:
										record_error("extget: Input 2 type neither integer or boolean! - ",moduleName,kWRONGINPUTTYPE,environment);
										return kHalt;
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
									default:
										record_error("extget: Input 2 type neither integer or boolean! - ",moduleName,kWRONGINPUTTYPE,environment);	
										return kHalt;
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
									default:
										record_error("extget: Input 2 type neither integer or boolean! - ",moduleName,kWRONGINPUTTYPE,environment);
										return kHalt;
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
								if(block == NULL) {
									*(Nat4 *) pointer = 0;
									break;
								} else {
                            	if(block->type != kExternalBlock && block->type != kString) {
									record_error("extset: Input 2 type not external block nor string! - ",moduleName,kWRONGINPUTTYPE,environment);	
									return kHalt;
									break;
                            	}
                            	}
                            	switch(block->type) {
									case kExternalBlock:
										externalBlock = (V_ExternalBlock) block;
										if( strcmp(externalBlock->name,tempField->pointerTypeName) != 0) {
											record_error("extset: Input 2 external not correct type! - ",moduleName,kWRONGINPUTTYPE,environment);
											return kHalt;
										}
										voidPointer = externalBlock->blockPtr;
										if(externalBlock->levelOfIndirection == 0) {
											*(Nat4 *) pointer = (Nat4) VPXMALLOC(externalBlock->size,char);
											memcpy((char *) (*(Nat4 *) pointer),voidPointer,externalBlock->size);
										}
										else if(externalBlock->levelOfIndirection == 1) *(Nat4 *) pointer = *(Nat4 *) voidPointer;
										else if(externalBlock->levelOfIndirection == 2) *(Nat4 *) pointer = **(Nat4 **) voidPointer;
										else{
											record_error("extset: Input 2 structure level of indirection too high! - ",moduleName,kWRONGINPUTTYPE,environment);
											return kHalt;
										}
										break;
									case kString:
										voidPointer = ( (V_String) block)->string;
										*(Nat4 *) pointer = (Nat4) VPXMALLOC(strlen(voidPointer)+1,char);
										memcpy((char *) (*(Nat4 *) pointer),voidPointer,strlen(voidPointer)+1);
										break;
								}
                                break;

                            case kStructure:
                            	if(block == NULL || block->type != kExternalBlock) {
									record_error("extset: Input 2 type not external block! - ",moduleName,kWRONGINPUTTYPE,environment);	
									return kHalt;
									break;
                            	}
								externalBlock = (V_ExternalBlock) block;
								if( strcmp(externalBlock->name,tempField->typeName) != 0) {
									record_error("extset: Input 2 external not correct type! - ",moduleName,kWRONGINPUTTYPE,environment);
									return kHalt;
								}
								voidPointer = externalBlock->blockPtr;
								if(externalBlock->levelOfIndirection == 0) memcpy((void *) pointer,voidPointer,tempField->size);
								else{
									record_error("extset: Input 2 structure level of indirection is not 0! - ",moduleName,kWRONGINPUTTYPE,environment);
									return kHalt;
								}
                                break;
							default:
								record_error("extset: Unhandled field type! - ",moduleName,kWRONGINPUTTYPE,environment);	
								return kHalt;
								break;
                        }
		}
		increment_count(possibleStructure);
		X_set_frame_root_object(environment,currentFrame,0,possibleStructure);

		return kSuccess;	
	}else{
		record_error("extget: Could not find structure! - ",moduleName,kERROR,environment);
		return kHalt;
	}
}

long ExternalDummyCall(	long intA, long intB, long intc, long intd, long inte, long intf, long intg, long inth,
						long int1, long int2, long int3, long int4, long int5, long int6, long int7, long int8,
						long int9, long int10, long int11, long int12, long int13, long int14, long int15, long int16);
long ExternalDummyCall(	long intA, long intB, long intc, long intd, long inte, long intf, long intg, long inth,
						long int1, long int2, long int3, long int4, long int5, long int6, long int7, long int8,
						long int9, long int10, long int11, long int12, long int13, long int14, long int15, long int16)
{

	long result = 0;
	
	result = intA + intB + intc + intd + inte + intf + intg + inth
	+	int1 + int2 + int3 + int4 + int5 + int6 + int7 + int8
	+	int9 + int10 + int11 + int12 + int13 + int14 + int15 + int16;
	return result;
	
}

#if __i386__
Int4 execute_extprocedure( V_Environment environment,V_Stack stack)
{
	V_Frame		currentFrame = stack->currentFrame;
	V_Operation	currentOperation = currentFrame->operation;
	Nat4		inarity = VPLEngineGetInputArity(currentFrame);
	Nat4		outarity = currentOperation->outarity;

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
	Int1		*operationName = NULL;
	
	asm( "movl %%esp,%0" : "=r" (tempInt) : /* No inputs */ );	// Get the stack pointer
	parameterArea = (Nat4 *) tempInt;		// Set the initial parameter area to the stack pointer
	tempInt = ExternalDummyCall(1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24);	/* Force the compiler to allocate 24 words in the parameter area*/

	if (currentOperation->inject != 0){
		V_Object	tempObject = NULL;
		Int4		result = 0;
		if(currentOperation->inarity > 0){
			result = X_get_frame_terminal_object(environment,stack->currentFrame,currentOperation->inject - 1,&tempObject);
			if(tempObject != NULL && tempObject->type == kString){
				operationName = X_operation_name(environment,stack->currentFrame);
				tempProcedure = get_extProcedure(environment->externalProceduresTable,operationName);
				if(tempProcedure == NULL) {
					record_error("extprocedure: Could not find procedure! - ",operationName,kERROR,environment);
					record_fault(environment,kNonexistentProcedure,operationName,"NULL","NULL",currentFrame->methodName);
					X_free(operationName);
					return kHalt;
				}
				X_free(operationName);
			}else if(tempObject != NULL && tempObject->type == kExternalBlock){
				V_ExternalBlock inputExternalBlock = (V_ExternalBlock) tempObject;
				if(inputExternalBlock->levelOfIndirection == 0) tempProcedure = (V_ExtProcedure) inputExternalBlock->blockPtr;
				else if(inputExternalBlock->levelOfIndirection == 1) tempProcedure = *(V_ExtProcedure *) inputExternalBlock->blockPtr;
				else if(inputExternalBlock->levelOfIndirection == 2) tempProcedure = **(V_ExtProcedure **) inputExternalBlock->blockPtr;
				else {
					record_error("extprocedure: Inject external block level of indirection greater than 2! - ",operationName,kERROR,environment);
					record_fault(environment,kNonexistentProcedure,operationName,"NULL","NULL",currentFrame->methodName);
					return kHalt;
				}
			}else{
				record_error("extprocedure: Inject object neither string or external Block! - ",operationName,kERROR,environment);
				record_fault(environment,kNonexistentProcedure,operationName,"NULL","NULL",currentFrame->methodName);
				return kHalt;
			}
		}
	}else if(currentOperation->functionPtr == NULL){
		operationName = X_operation_name(environment,stack->currentFrame);
		tempProcedure = get_extProcedure(environment->externalProceduresTable,operationName);
		if(tempProcedure == NULL) {
			record_error("extprocedure: Could not find procedure! - ",operationName,kERROR,environment);
			record_fault(environment,kNonexistentProcedure,operationName,"NULL","NULL",currentFrame->methodName);
			X_free(operationName);
			return kHalt;
		}
		X_free(operationName);
	}else tempProcedure = (V_ExtProcedure) currentOperation->functionPtr;

	if(tempProcedure->returnParameter != NULL) procedureOutarity++;

	tempParameter = tempProcedure->parameters;
	while( tempParameter != NULL ) {
		if(tempParameter->type == kVoidType) break;
		procedureInarity++;
		if(tempParameter->type == kPointerType && tempParameter->constantFlag == 0) procedureOutarity++;
		tempParameter = tempParameter->next;
	}
	
	if(tempParameter != NULL && tempParameter->type == kVoidType) {
		if(procedureInarity > inarity){
			record_error("extprocedure: Variable Argument Procedure has wrong inarity",currentOperation->objectName,kERROR,environment);
			record_fault(environment,kIncorrectInarity,currentOperation->objectName,"NULL","NULL",currentFrame->methodName);
			return kHalt;
		}
	} else {
		if(procedureInarity != inarity){
			record_error("extprocedure: Procedure has wrong inarity",currentOperation->objectName,kERROR,environment);
			record_fault(environment,kIncorrectInarity,currentOperation->objectName,"NULL","NULL",currentFrame->methodName);
			return kHalt;
		}
	}
	

	if(procedureOutarity != outarity){
		record_error("extprocedure: Procedure has wrong outarity",currentOperation->objectName,kERROR,environment);
		record_fault(environment,kIncorrectOutarity,currentOperation->objectName,"NULL","NULL",currentFrame->methodName);
		return kHalt;
	}

	outputCounter = 0;
	if(tempProcedure->returnParameter != NULL) outputCounter++;

	tempParameter = tempProcedure->parameters;
	tempInputList.inputs = VPXMALLOC(inarity,V_Input);
	inputSizes = VPXMALLOC(inarity,Nat4);
	for(argument = 0; argument < inarity; argument++){
		if(tempParameter == NULL) {
			record_error("extprocedure: NULL parameter for valid input! - ",currentOperation->objectName,kERROR,environment);
			return kHalt;
		}
		tempInput = (V_Input) X_malloc(sizeof(VPL_Input));
		tempInputList.inputs[argument] = tempInput;
		object = VPLEngineGetInputObject(argument,currentFrame,environment);
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
							record_error("extprocedure: IntegerType input is not integer nor real! - ",currentOperation->objectName,kWRONGINPUTTYPE,environment);
							record_fault(environment,kIncorrectType,currentOperation->objectName,"NULL","NULL",currentFrame->methodName);
							return kHalt;
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
							record_error("extprocedure: IntegerType input is not integer! - ",currentOperation->objectName,kWRONGINPUTTYPE,environment);
							record_fault(environment,kIncorrectType,currentOperation->objectName,"NULL","NULL",currentFrame->methodName);
							return kHalt;
						break;
					}
				}
				break;
			
			case kFloatType:
				if(object == NULL){
					record_error("extprocedure: FloatType input is null! - ",currentOperation->objectName,kWRONGINPUTTYPE,environment);
					record_fault(environment,kIncorrectType,currentOperation->objectName,"NULL","NULL",currentFrame->methodName);
					return kHalt;
				}
				switch(object->type){
					case kInteger:	tempInput->inputFloat = ((V_Integer) object)->value; break;
					case kBoolean:	tempInput->inputFloat = ((V_Boolean) object)->value; break;
					case kReal:		tempInput->inputFloat = ((V_Real) object)->value; break;
						
					default:
						record_error("extprocedure: FloatType input is not real! - ",currentOperation->objectName,kWRONGINPUTTYPE,environment);
						record_fault(environment,kIncorrectType,currentOperation->objectName,"NULL","NULL",currentFrame->methodName);
						return kHalt;
					break;
				}
				break;
			
			case kDoubleType:
				if(object == NULL){
					record_error("extprocedure: DoubleType input is null! - ",currentOperation->objectName,kWRONGINPUTTYPE,environment);
					record_fault(environment,kIncorrectType,currentOperation->objectName,"NULL","NULL",currentFrame->methodName);
					return kHalt;
				}
				switch(object->type){
					case kInteger:	tempInput->inputDouble = ((V_Integer) object)->value; break;
					case kBoolean:	tempInput->inputDouble = ((V_Boolean) object)->value; break;
					case kReal:		tempInput->inputDouble = ((V_Real) object)->value; break;
						
					default:
						record_error("extprocedure: DoubleType input is not real! - ",currentOperation->objectName,kWRONGINPUTTYPE,environment);
						record_fault(environment,kIncorrectType,currentOperation->objectName,"NULL","NULL",currentFrame->methodName);
						return kHalt;
					break;
				}
				break;
			
			case kPointerType:
				if(object == NULL){
					tempInput->inputInt = 0;
					if(tempParameter->constantFlag != 1) X_set_frame_root_object(environment,currentFrame,outputCounter++,NULL);
				} else if(object->type == kNone){
					if(tempParameter->constantFlag == 1){
						record_error("extprocedure: PointerType input is none and constant! - ",currentOperation->objectName,kWRONGINPUTTYPE,environment);
						record_fault(environment,kIncorrectType,currentOperation->objectName,"NULL","NULL",currentFrame->methodName);
						return kHalt;
					}
					increment_count(object);
					decrement_count(environment,object);
					if(tempParameter->indirection == 1) blockSize = tempParameter->size;
					else blockSize = sizeof(Nat4 *);
					tempPointer = X_malloc(blockSize);
					tempInput->inputInt = (long) tempPointer;	

					outputBlock = create_externalBlock(tempParameter->name,tempParameter->size,environment);
					outputBlock->blockPtr = tempPointer;
					outputBlock->levelOfIndirection = tempParameter->indirection - 1;
					X_set_frame_root_object(environment,currentFrame,outputCounter++,(V_Object) outputBlock);
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
							X_set_frame_root_object(environment,currentFrame,outputCounter++,(V_Object) outputBlock);
						}
					} else if( strcmp("void",tempParameter->name) != 0 &&
					 	strcmp("VPL_CallbackCodeSegment",externalBlock->name) != 0 &&
						strcmp(externalBlock->name,tempParameter->name) != 0) {
						record_error("extprocedure: Input external wrong type! - ",currentOperation->objectName,kWRONGINPUTTYPE,environment);
						record_fault(environment,kIncorrectType,currentOperation->objectName,"NULL","NULL",currentFrame->methodName);
						return kHalt;
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
							X_set_frame_root_object(environment,currentFrame,outputCounter++,(V_Object) outputBlock);
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
							X_set_frame_root_object(environment,currentFrame,outputCounter++,(V_Object) outputBlock);
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
							X_set_frame_root_object(environment,currentFrame,outputCounter++,(V_Object) outputBlock);
						}
					}else{
						record_error("extprocedure: Input level of indirection too high! - ",currentOperation->objectName,kWRONGINPUTTYPE,environment);
						record_fault(environment,kIncorrectType,currentOperation->objectName,"NULL","NULL",currentFrame->methodName);
						return kHalt;
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
							X_set_frame_root_object(environment,currentFrame,outputCounter++,(V_Object) outputBlock);
						}
				}  else if(object->type == kString){										// Allow strings as pointers
						pointerString = (V_String) object;									// Added by Jack 5/13/05
						if(tempParameter->constantFlag == 1){
							tempInput->inputInt = (long) pointerString->string;
						}else{
							outputBlock = (V_ExternalBlock) create_string(pointerString->string,environment);
							tempInput->inputInt = (long) ((V_String) outputBlock)->string;	
							X_set_frame_root_object(environment,currentFrame,outputCounter++,(V_Object) outputBlock);
						} 
				} else {
					record_error("extprocedure: Input is not valid pointer! - ",currentOperation->objectName,kWRONGINPUTTYPE,environment);
					record_fault(environment,kIncorrectType,currentOperation->objectName,"NULL","NULL",currentFrame->methodName);
					return kHalt;
				}
				break;
			
			case kStructureType:
				if(object == NULL || object->type != kExternalBlock){
					record_error("extprocedure: Input is not externalBlock! - ",currentOperation->objectName,kWRONGINPUTTYPE,environment);
					record_fault(environment,kIncorrectType,currentOperation->objectName,"NULL","NULL",currentFrame->methodName);
					return kHalt;
				}
				externalBlock = (V_ExternalBlock) object;
				if( strcmp(externalBlock->name,tempParameter->name) != 0) {
					record_error("extprocedure: Input external wrong type! - ",currentOperation->objectName,kWRONGINPUTTYPE,environment);
					record_fault(environment,kIncorrectType,currentOperation->objectName,"NULL","NULL",currentFrame->methodName);
					return kHalt;
				}
				if(externalBlock->levelOfIndirection == 0) tempInput->inputInt = (long) externalBlock->blockPtr;
				else{
					record_error("extprocedure: Input structure level of indirection is not 0! - ",currentOperation->objectName,kWRONGINPUTTYPE,environment);
					record_fault(environment,kIncorrectType,currentOperation->objectName,"NULL","NULL",currentFrame->methodName);
					return kHalt;
				}
				break;

			default:
				record_error("extprocedure: Input is unrecognized type! - ",currentOperation->objectName,kWRONGINPUTTYPE,environment);
				record_fault(environment,kIncorrectType,currentOperation->objectName,"NULL","NULL",currentFrame->methodName);
				return kHalt;
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
	for(argument = 0; argument < inarity; argument++){
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

			default:
				printf("Unhandled parameter type %i\n",theParameterType);
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
				X_set_frame_root_object(environment,currentFrame,0,(V_Object) int_to_integer(tempInt,environment));
				break;

			case kPointerType:
				if(tempInt == 0){
					X_set_frame_root_object(environment,currentFrame,0,NULL);
				} else {
					tempPointer = (Nat4 *) X_malloc(sizeof(Nat4));
					*((Nat4 *)tempPointer) = tempInt;
					outputBlock = create_externalBlock(tempParameter->name,tempParameter->size,environment);
					outputBlock->blockPtr = tempPointer;
					outputBlock->levelOfIndirection = tempParameter->indirection;
					X_set_frame_root_object(environment,currentFrame,0,(V_Object) outputBlock);
				}
				break;

			case kStructureType:
				if(tempParameter->size > 8) {
					outputBlock = create_externalBlock(tempParameter->name,tempParameter->size,environment);
					outputBlock->blockPtr = (void *) tempInt;
					outputBlock->levelOfIndirection = 0;
					X_set_frame_root_object(environment,currentFrame,0,(V_Object) outputBlock);
				} else {
					long	pseudoStructure[2] = { 0 , 0 };
					pseudoStructure[0] = tempInt;
					pseudoStructure[1] = tempInt2;
				
					outputBlock = create_externalBlock(tempParameter->name,tempParameter->size,environment);
					outputBlock->blockPtr = malloc(tempParameter->size);
					memcpy(outputBlock->blockPtr,pseudoStructure,tempParameter->size);
					outputBlock->levelOfIndirection = 0;
					X_set_frame_root_object(environment,currentFrame,0,(V_Object) outputBlock);
				}
				break;

			case kFloatType:
				asm( "fstps %0" : "=m" (tempFloat) : /* No inputs */ );
				X_set_frame_root_object(environment,currentFrame,0,(V_Object) float_to_real(tempFloat,environment));
				break;

			case kDoubleType:
				asm( "fstpl %0" : "=m" (tempDouble) : /* No inputs */ );
				X_set_frame_root_object(environment,currentFrame,0,(V_Object) float_to_real(tempDouble,environment));
				break;

			default:
				record_error("extprocedure: Unrecognized return type! - ",currentOperation->objectName,kWRONGINPUTTYPE,environment);
				return kHalt;
				break;
		}
	}

	for(argument = 0; argument < inarity; argument++){
		X_free(tempInputList.inputs[argument]);
	}
	X_free(tempInputList.inputs);
	X_free(inputSizes);

	return kSuccess;
}
#endif

#if __ppc__
Int4 execute_extprocedure( V_Environment environment,V_Stack stack)
{
	V_Frame		currentFrame = stack->currentFrame;
	V_Operation	currentOperation = currentFrame->operation;
	Nat4		inarity = VPLEngineGetInputArity(currentFrame);
	Nat4		outarity = currentOperation->outarity;

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
	Int1		*operationName = NULL;
	
	asm{ 
		mr tempInt,r1
	}					// Get the stack pointer
	parameterArea = (Nat4 *) tempInt;		// Set the initial parameter area to the stack pointer
	parameterArea += 6;						// Add 6 words to skip over the linkage area to the start of the parameter area
	tempInt = ExternalDummyCall(1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24);	/* Force the compiler to allocate 24 words in the parameter area*/

	if (currentOperation->inject != 0){
		V_Object	tempObject = NULL;
		Int4		result = 0;
		if(currentOperation->inarity > 0){
			result = X_get_frame_terminal_object(environment,stack->currentFrame,currentOperation->inject - 1,&tempObject);
			if(tempObject != NULL && tempObject->type == kString){
				operationName = X_operation_name(environment,stack->currentFrame);
				tempProcedure = get_extProcedure(environment->externalProceduresTable,operationName);
				if(tempProcedure == NULL) {
					record_error("extprocedure: Could not find procedure! - ",operationName,kERROR,environment);
					record_fault(environment,kNonexistentProcedure,operationName,"NULL","NULL",currentFrame->methodName);
					X_free(operationName);
					return kHalt;
				}
				X_free(operationName);
			}else if(tempObject != NULL && tempObject->type == kExternalBlock){
				V_ExternalBlock inputExternalBlock = (V_ExternalBlock) tempObject;
				if(inputExternalBlock->levelOfIndirection == 0) tempProcedure = (V_ExtProcedure) inputExternalBlock->blockPtr;
				else if(inputExternalBlock->levelOfIndirection == 1) tempProcedure = *(V_ExtProcedure *) inputExternalBlock->blockPtr;
				else if(inputExternalBlock->levelOfIndirection == 2) tempProcedure = **(V_ExtProcedure **) inputExternalBlock->blockPtr;
				else {
					record_error("extprocedure: Inject external block level of indirection greater than 2! - ",operationName,kERROR,environment);
					record_fault(environment,kNonexistentProcedure,operationName,"NULL","NULL",currentFrame->methodName);
					return kHalt;
				}
			}else{
				record_error("extprocedure: Inject object neither string or external Block! - ",operationName,kERROR,environment);
				record_fault(environment,kNonexistentProcedure,operationName,"NULL","NULL",currentFrame->methodName);
				return kHalt;
			}
		}
	}else if(currentOperation->functionPtr == NULL){
		operationName = X_operation_name(environment,stack->currentFrame);
		tempProcedure = get_extProcedure(environment->externalProceduresTable,operationName);
		if(tempProcedure == NULL) {
			record_error("extprocedure: Could not find procedure! - ",operationName,kERROR,environment);
			record_fault(environment,kNonexistentProcedure,operationName,"NULL","NULL",currentFrame->methodName);
			X_free(operationName);
			return kHalt;
		}
		X_free(operationName);
	}else tempProcedure = (V_ExtProcedure) currentOperation->functionPtr;

	if(tempProcedure->returnParameter != NULL) procedureOutarity++;

	tempParameter = tempProcedure->parameters;
	while( tempParameter != NULL ) {
		if(tempParameter->type == kVoidType) break;
		procedureInarity++;
		if(tempParameter->type == kPointerType && tempParameter->constantFlag == 0) procedureOutarity++;
		tempParameter = tempParameter->next;
	}
	
	if(tempParameter != NULL && tempParameter->type == kVoidType) {
		if(procedureInarity > inarity){
			record_error("extprocedure: Variable Argument Procedure has wrong inarity",currentOperation->objectName,kERROR,environment);
			record_fault(environment,kIncorrectInarity,currentOperation->objectName,"NULL","NULL",currentFrame->methodName);
			return kHalt;
		}
	} else {
		if(procedureInarity != inarity){
			record_error("extprocedure: Procedure has wrong inarity",currentOperation->objectName,kERROR,environment);
			record_fault(environment,kIncorrectInarity,currentOperation->objectName,"NULL","NULL",currentFrame->methodName);
			return kHalt;
		}
	}
	

	if(procedureOutarity != outarity){
		record_error("extprocedure: Procedure has wrong outarity",currentOperation->objectName,kERROR,environment);
		record_fault(environment,kIncorrectOutarity,currentOperation->objectName,"NULL","NULL",currentFrame->methodName);
		return kHalt;
	}

	outputCounter = 0;
	if(tempProcedure->returnParameter != NULL) outputCounter++;

	tempParameter = tempProcedure->parameters;
	tempInputList.inputs = VPXMALLOC(inarity,V_Input);
	inputSizes = VPXMALLOC(inarity,Nat4);
	for(argument = 0; argument < inarity; argument++){
		if(tempParameter == NULL) {
			record_error("extprocedure: NULL parameter for valid input! - ",currentOperation->objectName,kERROR,environment);
			return kHalt;
		}
		tempInput = (V_Input) X_malloc(sizeof(VPL_Input));
		tempInputList.inputs[argument] = tempInput;
		object = VPLEngineGetInputObject(argument,currentFrame,environment);
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
							record_error("extprocedure: IntegerType input is not integer nor real! - ",currentOperation->objectName,kWRONGINPUTTYPE,environment);
							record_fault(environment,kIncorrectType,currentOperation->objectName,"NULL","NULL",currentFrame->methodName);
							return kHalt;
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
							record_error("extprocedure: IntegerType input is not integer! - ",currentOperation->objectName,kWRONGINPUTTYPE,environment);
							record_fault(environment,kIncorrectType,currentOperation->objectName,"NULL","NULL",currentFrame->methodName);
							return kHalt;
						break;
					}
				}
				break;
			
			case kFloatType:
				if(object == NULL){
					record_error("extprocedure: FloatType input is null! - ",currentOperation->objectName,kWRONGINPUTTYPE,environment);
					record_fault(environment,kIncorrectType,currentOperation->objectName,"NULL","NULL",currentFrame->methodName);
					return kHalt;
				}
				switch(object->type){
					case kInteger:	tempInput->inputFloat = ((V_Integer) object)->value; break;
					case kBoolean:	tempInput->inputFloat = ((V_Boolean) object)->value; break;
					case kReal:		tempInput->inputFloat = ((V_Real) object)->value; break;
						
					default:
						record_error("extprocedure: FloatType input is not real! - ",currentOperation->objectName,kWRONGINPUTTYPE,environment);
						record_fault(environment,kIncorrectType,currentOperation->objectName,"NULL","NULL",currentFrame->methodName);
						return kHalt;
					break;
				}
				break;
			
			case kDoubleType:
				if(object == NULL){
					record_error("extprocedure: DoubleType input is null! - ",currentOperation->objectName,kWRONGINPUTTYPE,environment);
					record_fault(environment,kIncorrectType,currentOperation->objectName,"NULL","NULL",currentFrame->methodName);
					return kHalt;
				}
				switch(object->type){
					case kInteger:	tempInput->inputDouble = ((V_Integer) object)->value; break;
					case kBoolean:	tempInput->inputDouble = ((V_Boolean) object)->value; break;
					case kReal:		tempInput->inputDouble = ((V_Real) object)->value; break;
						
					default:
						record_error("extprocedure: DoubleType input is not real! - ",currentOperation->objectName,kWRONGINPUTTYPE,environment);
						record_fault(environment,kIncorrectType,currentOperation->objectName,"NULL","NULL",currentFrame->methodName);
						return kHalt;
					break;
				}
				break;
			
			case kPointerType:
				if(object == NULL){
					tempInput->inputInt = 0;
					if(tempParameter->constantFlag != 1) X_set_frame_root_object(environment,currentFrame,outputCounter++,NULL);
				} else if(object->type == kNone){
					if(tempParameter->constantFlag == 1){
						record_error("extprocedure: PointerType input is none and constant! - ",currentOperation->objectName,kWRONGINPUTTYPE,environment);
						record_fault(environment,kIncorrectType,currentOperation->objectName,"NULL","NULL",currentFrame->methodName);
						return kHalt;
					}
					increment_count(object);
					decrement_count(environment,object);
					if(tempParameter->indirection == 1) blockSize = tempParameter->size;
					else blockSize = sizeof(Nat4 *);
					tempPointer = X_malloc(blockSize);
					tempInput->inputInt = (long) tempPointer;	

					outputBlock = create_externalBlock(tempParameter->name,tempParameter->size,environment);
					outputBlock->blockPtr = tempPointer;
					outputBlock->levelOfIndirection = tempParameter->indirection - 1;
					X_set_frame_root_object(environment,currentFrame,outputCounter++,(V_Object) outputBlock);
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
							X_set_frame_root_object(environment,currentFrame,outputCounter++,(V_Object) outputBlock);
						}
					} else if( strcmp("void",tempParameter->name) != 0 &&
					 	strcmp("VPL_CallbackCodeSegment",externalBlock->name) != 0 &&
						strcmp(externalBlock->name,tempParameter->name) != 0) {
						record_error("extprocedure: Input external wrong type! - ",currentOperation->objectName,kWRONGINPUTTYPE,environment);
						record_fault(environment,kIncorrectType,currentOperation->objectName,"NULL","NULL",currentFrame->methodName);
						return kHalt;
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
							X_set_frame_root_object(environment,currentFrame,outputCounter++,(V_Object) outputBlock);
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
							X_set_frame_root_object(environment,currentFrame,outputCounter++,(V_Object) outputBlock);
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
							X_set_frame_root_object(environment,currentFrame,outputCounter++,(V_Object) outputBlock);
						}
					}else{
						record_error("extprocedure: Input level of indirection too high! - ",currentOperation->objectName,kWRONGINPUTTYPE,environment);
						record_fault(environment,kIncorrectType,currentOperation->objectName,"NULL","NULL",currentFrame->methodName);
						return kHalt;
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
							X_set_frame_root_object(environment,currentFrame,outputCounter++,(V_Object) outputBlock);
						}
				}  else if(object->type == kString){										// Allow strings as pointers
						pointerString = (V_String) object;									// Added by Jack 5/13/05
						if(tempParameter->constantFlag == 1){
							tempInput->inputInt = (long) pointerString->string;
						}else{
							outputBlock = (V_ExternalBlock) create_string(pointerString->string,environment);
							tempInput->inputInt = (long) ((V_String) outputBlock)->string;	
							X_set_frame_root_object(environment,currentFrame,outputCounter++,(V_Object) outputBlock);
						} 
				} else {
					record_error("extprocedure: Input is not valid pointer! - ",currentOperation->objectName,kWRONGINPUTTYPE,environment);
					record_fault(environment,kIncorrectType,currentOperation->objectName,"NULL","NULL",currentFrame->methodName);
					return kHalt;
				}
				break;
			
			case kStructureType:
				if(object == NULL || object->type != kExternalBlock){
					record_error("extprocedure: Input is not externalBlock! - ",currentOperation->objectName,kWRONGINPUTTYPE,environment);
					record_fault(environment,kIncorrectType,currentOperation->objectName,"NULL","NULL",currentFrame->methodName);
					return kHalt;
				}
				externalBlock = (V_ExternalBlock) object;
				if( strcmp(externalBlock->name,tempParameter->name) != 0) {
					record_error("extprocedure: Input external wrong type! - ",currentOperation->objectName,kWRONGINPUTTYPE,environment);
					record_fault(environment,kIncorrectType,currentOperation->objectName,"NULL","NULL",currentFrame->methodName);
					return kHalt;
				}
				if(externalBlock->levelOfIndirection == 0) tempInput->inputInt = (long) externalBlock->blockPtr;
				else{
					record_error("extprocedure: Input structure level of indirection is not 0! - ",currentOperation->objectName,kWRONGINPUTTYPE,environment);
					record_fault(environment,kIncorrectType,currentOperation->objectName,"NULL","NULL",currentFrame->methodName);
					return kHalt;
				}
				break;

			default:
				record_error("extprocedure: Input is unrecognized type! - ",currentOperation->objectName,kWRONGINPUTTYPE,environment);
				record_fault(environment,kIncorrectType,currentOperation->objectName,"NULL","NULL",currentFrame->methodName);
				return kHalt;
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
	for(argument = 0; argument < inarity; argument++){
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
						record_error("extprocedure: Parameter area greater than 24 words! - ",currentOperation->objectName,kWRONGINPUTTYPE,environment);
						return kHalt;
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
						record_error("extprocedure: Parameter area greater than 24 words! - ",currentOperation->objectName,kWRONGINPUTTYPE,environment);
						return kHalt;
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
						record_error("extprocedure: Parameter area greater than 24 words! - ",currentOperation->objectName,kWRONGINPUTTYPE,environment);
						return kHalt;
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
					record_error("extprocedure: Parameter area greater than 24 words! - ",currentOperation->objectName,kWRONGINPUTTYPE,environment);
					return kHalt;
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
							record_error("extprocedure: Parameter area greater than 24 words! - ",currentOperation->objectName,kWRONGINPUTTYPE,environment);
							return kHalt;
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
				X_set_frame_root_object(environment,currentFrame,0,(V_Object) int_to_integer(tempInt,environment));
				break;

			case kPointerType:
				if(tempInt == 0){
					X_set_frame_root_object(environment,currentFrame,0,NULL);
				} else {
					tempPointer = (Nat4 *) X_malloc(sizeof(Nat4));
					*((Nat4 *)tempPointer) = tempInt;
					outputBlock = create_externalBlock(tempParameter->name,tempParameter->size,environment);
					outputBlock->blockPtr = tempPointer;
					outputBlock->levelOfIndirection = tempParameter->indirection;
					X_set_frame_root_object(environment,currentFrame,0,(V_Object) outputBlock);
				}
				break;

			case kStructureType:
				outputBlock = create_externalBlock(tempParameter->name,tempParameter->size,environment);
				outputBlock->blockPtr = (void *) tempInt;
				outputBlock->levelOfIndirection = 0;
				X_set_frame_root_object(environment,currentFrame,0,(V_Object) outputBlock);
				break;

			case kFloatType:
				X_set_frame_root_object(environment,currentFrame,0,(V_Object) float_to_real(tempFloat,environment));
				break;

			case kDoubleType:
				X_set_frame_root_object(environment,currentFrame,0,(V_Object) float_to_real(tempDouble,environment));
				break;

			default:
				record_error("extprocedure: Unrecognized return type! - ",currentOperation->objectName,kWRONGINPUTTYPE,environment);
				return kHalt;
				break;
		}
	}

	for(argument = 0; argument < inarity; argument++){
		X_free(tempInputList.inputs[argument]);
	}
	X_free(tempInputList.inputs);
	X_free(inputSizes);

	return kSuccess;
}
#endif

Int1 *module_name( V_Operation operation , V_Environment environment )
{
#pragma unused(environment)
#pragma unused(operation)


	Int1		*moduleName = "Module Name not implemented yet!";
	return moduleName;
}

Int1 *full_name( V_Operation operation , V_Environment environment )
{
#pragma unused(environment)
#pragma unused(operation)

	Int1		*fullName = "FullName";
	return fullName;
}

void MacVPLCallbackHandler(void);

#if __i386__
void MacVPLCallbackHandler(void)
{
	long register result;
	long register stackPointer;
	asm( "movl %%edx,%0" : "=r" (result) : /* No inputs */ );	// Get the structure block
	asm( "movl %%ebp,%0" : "=r" (stackPointer) : /* No inputs */ );	// Get the stack pointer

	VPL_GPRegisters theRegisters;
	V_GPRegisters theRegistersPtr = &theRegisters;
	
	Nat4 counter = 0;
	Nat4 inputCounter = 0;
	V_CallbackCodeSegment currentSegment = NULL;
	V_Environment theEnvironment = NULL;
	
	V_List				inputList = NULL;
	V_List				parameterList = NULL;
	V_List				outputList = NULL;
	V_ExternalBlock		outputBlock = NULL;
	V_Object			block = NULL;

	V_ExtProcedure	tempProcedure = NULL;
	V_Parameter		tempParameter = NULL;
	Nat4			procedureInarity = 0;
	Nat4			theParameterType = 0;

	register long tempInt = 0;
	register float tempFloat = 0.0;
	register double tempDouble = 0.0;

	Nat4 gprCounter = 0;
	Nat4 fpCounter = 0;
	
	Nat4 parameterArea[8] = { 0,0,0,0,0,0,0,0 };
	void *tempPointer = NULL;
	VPL_Input	tempInput;
	V_Input		tempInputPtr = &tempInput;

	Int4	(*spawnPtr)(V_Environment,char *,V_List , V_List ,Int4 *);

	currentSegment = (V_CallbackCodeSegment) result;
	tempProcedure = currentSegment->callbackFunction;
	theEnvironment = currentSegment->theEnvironment;
	stackPointer = *((Nat4 *)stackPointer);
	stackPointer += 8;	//Calling through the code segment has subtracted 12 bytes from the original stack pointer

	tempParameter = tempProcedure->parameters;
	while( tempParameter != NULL ) {
		procedureInarity++;
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
			parameterArea[gprCounter++] = *((Nat4 *) stackPointer);
			stackPointer +=4;
			break;

	}
		tempParameter = tempParameter->next;
	} // End For(argument) Loop

//	printf( "Begin engine callback handler: %s @0x%08x\n", currentSegment->vplRoutine, currentSegment );
//	printf( "\tHandler has links?  Previous: 0x%08x Next: 0x%08x\n",  currentSegment->previous, currentSegment->next);

//	currentSegment->use++;		//	Increase the callback use count 

	VPLEnvironmentCallbackRetain( currentSegment );

	inputCounter = 0;
	if(currentSegment->object != NULL && currentSegment->listInput == kFALSE) {
		parameterList = create_list(procedureInarity+1,theEnvironment);
		increment_count(currentSegment->object);
		*parameterList->objectList = currentSegment->object;
		inputCounter++;
	}
	else parameterList = create_list(procedureInarity,theEnvironment);

	if(currentSegment->listInput == kFALSE) {
		inputList = parameterList;
	} else if(currentSegment->object != NULL) {
		inputList = create_list(2,theEnvironment);
		increment_count(currentSegment->object);
		inputList->objectList[0] = currentSegment->object;
		inputList->objectList[1] = (V_Object) parameterList;
	} else {
		inputList = create_list(1,theEnvironment);
		inputList->objectList[0] = (V_Object) parameterList;
	}
	
	if(tempProcedure->returnParameter != NULL) {
		outputList = create_list(1,theEnvironment);
	} else {
		outputList = create_list(0,theEnvironment);
	}


	tempParameter = tempProcedure->parameters;
	for(counter=0;counter<procedureInarity;counter++){
		theParameterType = tempParameter->type;
		if(theParameterType == kFloatType && tempParameter->size == 8) theParameterType = kDoubleType;
		switch(theParameterType){
			case kUnsignedType:
			case kLongType:
			case kShortType:
			case kCharType:
			case kEnumType:
			case kIntType:
				*(parameterList->objectList + inputCounter++) = (V_Object) int_to_integer(parameterArea[counter],theEnvironment);
				break;

			case kPointerType:
				tempPointer = (Nat4 *) X_malloc(sizeof(Nat4));
				*((Nat4 *)tempPointer) = parameterArea[counter];
				outputBlock = create_externalBlock(tempParameter->name,tempParameter->size,theEnvironment);
				outputBlock->blockPtr = tempPointer;
				outputBlock->levelOfIndirection = tempParameter->indirection;
				*(parameterList->objectList + inputCounter++) = (V_Object) outputBlock;
				break;

			case kStructureType:
				record_error("MacVPLCallbackHandler: Input is a structure! - ","MacVPLCallbackHandler",kERROR,theEnvironment);
				return;
				break;

			case kFloatType:
				*(parameterList->objectList + inputCounter++) = (V_Object) float_to_real(*((float *) &parameterArea[counter]),theEnvironment);
				break;

			case kDoubleType:
				*(parameterList->objectList + inputCounter++) = (V_Object) float_to_real(*((double *) &parameterArea[counter]),theEnvironment);
				break;

			case kVoidType:
				*(parameterList->objectList + inputCounter++) = (V_Object) int_to_integer((Int4) &parameterArea[counter],theEnvironment);
				break;

			default:
				record_error("MacVPLCallbackHandler: Input is an unrecognized type! - ","MacVPLCallbackHandler",kERROR,theEnvironment);
				return;
				break;
		}
		tempParameter = tempParameter->next;
	}
	
	spawnPtr = theEnvironment->stackSpawner;
	result = spawnPtr(theEnvironment,currentSegment->vplRoutine,inputList,outputList,NULL);
    
//	printf( "End engine callback handler: %s @0x%08x\n", currentSegment->vplRoutine, currentSegment );

	if( (tempParameter = tempProcedure->returnParameter) != NULL){
		block = outputList->objectList[0];
		theParameterType = tempParameter->type;
		if(theParameterType == kFloatType && tempParameter->size == 8) theParameterType = kDoubleType;
		switch(theParameterType){
			case kUnsignedType:
			case kLongType:
			case kShortType:
			case kCharType:
			case kEnumType:
			case kIntType:
				if(block == NULL) tempInput.inputInt = 0;
				else{
					switch(block->type){
						case kBoolean:
						tempInput.inputInt = ((V_Boolean) block)->value;
						break;
						
						case kInteger:
						tempInput.inputInt = ((V_Integer) block)->value;
						break;
						
					}
				}
				break;

			case kPointerType:
				if(block == NULL) tempInput.inputInt = 0;
				else{
					switch(block->type){
						case kExternalBlock:
						tempInput.inputInt = (Nat4) ((V_ExternalBlock) block)->blockPtr;
						break;
						
						case kString:
						tempInput.inputInt = (Nat4) ((V_String) block)->string;
						break;
						
					}
				}
				break;

			case kStructureType:

//				errorOffset += sprintf(&errorString[errorOffset],"extprocedure: Return is a structure! - ");
//				return record_error(errorString,moduleName,kERROR,environment);

				break;

			case kFloatType:
				if(block == NULL) tempInput.inputFloat = 0.0;
				else{
					switch(block->type){
						case kInteger:
						tempInput.inputFloat = ((V_Integer) block)->value;
						break;
						
						case kReal:
						tempInput.inputFloat = ((V_Real) block)->value;
						break;
						
					}
				}
				break;

			case kDoubleType:
				if(block == NULL) tempInput.inputDouble = 0.0;
				else{
					switch(block->type){
						case kInteger:
						tempInput.inputDouble = ((V_Integer) block)->value;
						break;
						
						case kReal:
						tempInput.inputDouble = ((V_Real) block)->value;
						break;
						
					}
				}
				break;

			default:
				break;
		}
	}


	decrement_count(theEnvironment,(V_Object) inputList);
	decrement_count(theEnvironment,(V_Object) outputList);	

//	currentSegment->use--;										// Free the callback if necessary
//	if(currentSegment->use <= 0) X_free(currentSegment);

	VPLEnvironmentCallbackRelease( currentSegment );

	if( (tempParameter = tempProcedure->returnParameter) != NULL){
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
				tempInt = tempInput.inputInt;
				asm( "movl %0,%%eax" : /* No outputs */ : "r" (tempInt) );
				break;

		} // End Switch 
	} // End if return parameter

}
#endif

#if __ppc__
void MacVPLCallbackHandler(void)
{
	long register result = 0;
	VPL_GPRegisters theRegisters;
	V_GPRegisters theRegistersPtr = &theRegisters;
#ifdef __GNUC__
	asm{
		stw r3,theRegistersPtr->register3
		stw r4,theRegistersPtr->register4
		stw r5,theRegistersPtr->register5
		stw r6,theRegistersPtr->register6
		stw r7,theRegistersPtr->register7
		stw r8,theRegistersPtr->register8
		stw r9,theRegistersPtr->register9
		stw r10,theRegistersPtr->register10
		mr result,r11
	}
#endif
	
	Nat4 counter = 0;
	Nat4 inputCounter = 0;
	V_CallbackCodeSegment currentSegment = NULL;
	V_Environment theEnvironment = NULL;
	
	V_List				inputList = NULL;
	V_List				parameterList = NULL;
	V_List				outputList = NULL;
	V_ExternalBlock		outputBlock = NULL;
	V_Object			block = NULL;

	V_ExtProcedure	tempProcedure = NULL;
	V_Parameter		tempParameter = NULL;
	Nat4			procedureInarity = 0;
	Nat4			theParameterType = 0;

	register long tempInt = 0;
	register float tempFloat = 0.0;
	register double tempDouble = 0.0;

	Nat4 gprCounter = 0;
	Nat4 fpCounter = 0;
	
	Nat4 parameterArea[8] = { 0,0,0,0,0,0,0,0 };
	void *tempPointer = NULL;
	VPL_Input	tempInput;
	V_Input		tempInputPtr = &tempInput;

	Int4	(*spawnPtr)(V_Environment,char *,V_List , V_List ,Int4 *);

#ifdef __MWERKS__
	asm{
		mr result,r11
	}
#endif
	currentSegment = (V_CallbackCodeSegment) result;
	tempProcedure = currentSegment->callbackFunction;
	theEnvironment = currentSegment->theEnvironment;

// Past this point no fiddling with R3! for example by calling a subroutine whose output would be place in R3
	
	tempParameter = tempProcedure->parameters;
	while( tempParameter != NULL ) {
		procedureInarity++;
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
			switch(gprCounter){
#ifdef __MWERKS__
				case 0: asm{ mr	tempInt,r3 }
#elif __GNUC__
				case 0: tempInt = theRegistersPtr->register3;
#endif
						break;
#ifdef __MWERKS__
				case 1: asm{ mr	tempInt,r4 }
#elif __GNUC__
				case 1: tempInt = theRegistersPtr->register4;
#endif
						break;
#ifdef __MWERKS__
				case 2: asm{ mr	tempInt,r5 }
#elif __GNUC__
				case 2: tempInt = theRegistersPtr->register5;
#endif
						break;
#ifdef __MWERKS__
				case 3: asm{ mr	tempInt,r6 }
#elif __GNUC__
				case 3: tempInt = theRegistersPtr->register6;
#endif
						break;
#ifdef __MWERKS__
				case 4: asm{ mr	tempInt,r7 }
#elif __GNUC__
				case 4: tempInt = theRegistersPtr->register7;
#endif
						break;
#ifdef __MWERKS__
				case 5: asm{ mr	tempInt,r8 }
#elif __GNUC__
				case 5: tempInt = theRegistersPtr->register8;
#endif
						break;
#ifdef __MWERKS__
				case 6: asm{ mr	tempInt,r9 }
#elif __GNUC__
				case 6: tempInt = theRegistersPtr->register9;
#endif
						break;
#ifdef __MWERKS__
				case 7: asm{ mr	tempInt,r10 }
#elif __GNUC__
				case 7: tempInt = theRegistersPtr->register10;
#endif
						break;
			}
			parameterArea[gprCounter++] = tempInt;
			break;

		case kVoidType:
			switch(gprCounter){
#ifdef __MWERKS__
				case 0: asm{ mr	tempInt,r3 }
#elif __GNUC__
				case 0: tempInt = theRegistersPtr->register3;
#endif
				parameterArea[gprCounter++] = tempInt;
#ifdef __MWERKS__
				case 1: asm{ mr	tempInt,r4 }
#elif __GNUC__
				case 1: tempInt = theRegistersPtr->register4;
#endif
				parameterArea[gprCounter++] = tempInt;
#ifdef __MWERKS__
				case 2: asm{ mr	tempInt,r5 }
#elif __GNUC__
				case 2: tempInt = theRegistersPtr->register5;
#endif
				parameterArea[gprCounter++] = tempInt;
#ifdef __MWERKS__
				case 3: asm{ mr	tempInt,r6 }
#elif __GNUC__
				case 3: tempInt = theRegistersPtr->register6;
#endif
				parameterArea[gprCounter++] = tempInt;
#ifdef __MWERKS__
				case 4: asm{ mr	tempInt,r7 }
#elif __GNUC__
				case 4: tempInt = theRegistersPtr->register7;
#endif
				parameterArea[gprCounter++] = tempInt;
#ifdef __MWERKS__
				case 5: asm{ mr	tempInt,r8 }
#elif __GNUC__
				case 5: tempInt = theRegistersPtr->register8;
#endif
				parameterArea[gprCounter++] = tempInt;
#ifdef __MWERKS__
				case 6: asm{ mr	tempInt,r9 }
#elif __GNUC__
				case 6: tempInt = theRegistersPtr->register9;
#endif
				parameterArea[gprCounter++] = tempInt;
#ifdef __MWERKS__
				case 7: asm{ mr	tempInt,r10 }
#elif __GNUC__
				case 7: tempInt = theRegistersPtr->register10;
#endif
				parameterArea[gprCounter++] = tempInt;
			}
			break;

		case kStructureType:
/*
			if(tempParameter->size >= 4){
				tempStructPointer = (Nat4 *) tempInput->inputInt;
				do{
					tempInt = *tempStructPointer;
					switch(gprCounter){
						case 0: asm{ mr	tempInt,r3 } break;
						case 1: asm{ mr	tempInt,r4 } break;
						case 2: asm{ mr	tempInt,r5 } break;
						case 3: asm{ mr	tempInt,r6 } break;
						case 4: asm{ mr	tempInt,r7 } break;
						case 5: asm{ mr	tempInt,r8 } break;
						case 6: asm{ mr	tempInt,r9 } break;
						case 7: asm{ mr	tempInt,r10 } break;
					}
					gprCounter++;
					tempStructPointer++;
				} while((Nat4)tempStructPointer - (Nat4)tempInput->inputInt < tempParameter->size);
			}else{
				errorOffset += sprintf(&errorString[errorOffset],"extprocedure: Input %u structure size is %u! - ",argument+1,tempParameter->size);
				return record_error(errorString,moduleName,kWRONGINPUTTYPE,environment);
			}
*/
			break;

		case kDoubleType:
			tempInput.inputDouble = 7.3;
			switch(fpCounter){
#ifdef __MWERKS__
				case 0: asm{ fmr tempDouble,fp1 }
#elif __GNUC__
				case 0: asm{
								stfd f1,tempInputPtr->inputDouble
							}
						tempDouble = tempInput.inputDouble;
#endif
						break;
#ifdef __MWERKS__
				case 1: asm{ fmr tempDouble,fp2 }
#elif __GNUC__
				case 1: asm{
								stfd f2,tempInputPtr->inputDouble
							}
						tempDouble = tempInput.inputDouble;
#endif
						break;
#ifdef __MWERKS__
				case 2: asm{ fmr tempDouble,fp3 }
#elif __GNUC__
				case 2: asm{
								stfd f3,tempInputPtr->inputDouble
							}
						tempDouble = tempInput.inputDouble;
#endif
						break;
#ifdef __MWERKS__
				case 3: asm{ fmr tempDouble,fp4 }
#elif __GNUC__
				case 3: asm{
								stfd f4,tempInputPtr->inputDouble
							}
						tempDouble = tempInput.inputDouble;
#endif
						break;
#ifdef __MWERKS__
				case 4: asm{ fmr tempDouble,fp5 }
#elif __GNUC__
				case 4: asm{
								stfd f5,tempInputPtr->inputDouble
							}
						tempDouble = tempInput.inputDouble;
#endif
						break;
#ifdef __MWERKS__
				case 5: asm{ fmr tempDouble,fp6 }
#elif __GNUC__
				case 5: asm{
								stfd f6,tempInputPtr->inputDouble
							}
						tempDouble = tempInput.inputDouble;
#endif
						break;
#ifdef __MWERKS__
				case 6: asm{ fmr tempDouble,fp7 }
#elif __GNUC__
				case 6: asm{
								stfd f7,tempInputPtr->inputDouble
							}
						tempDouble = tempInput.inputDouble;
#endif
						break;
#ifdef __MWERKS__
				case 7: asm{ fmr tempDouble,fp8 }
#elif __GNUC__
				case 7: asm{
								stfd f8,tempInputPtr->inputDouble
							}
						tempDouble = tempInput.inputDouble;
#endif
						break;
			}
			*((double *) &parameterArea[gprCounter++]) = tempDouble;
			fpCounter++;
			gprCounter++;
			break;

		case kFloatType:
			tempInput.inputFloat = 7.3;
			switch(fpCounter){
#ifdef __MWERKS__
				case 0: asm{ fmr tempFloat,fp1 }
#elif __GNUC__
				case 0: asm{
								stfs f1,tempInputPtr->inputFloat
							}
						tempFloat = tempInput.inputFloat;
#endif
						break;
#ifdef __MWERKS__
				case 1: asm{ fmr tempFloat,fp2 }
#elif __GNUC__
				case 1: asm{
								stfs f2,tempInputPtr->inputFloat
							}
						tempFloat = tempInput.inputFloat;
#endif
						break;
#ifdef __MWERKS__
				case 2: asm{ fmr tempFloat,fp3 }
#elif __GNUC__
				case 2: asm{
								stfs f3,tempInputPtr->inputFloat
							}
						tempFloat = tempInput.inputFloat;
#endif
						break;
#ifdef __MWERKS__
				case 3: asm{ fmr tempFloat,fp4 }
#elif __GNUC__
				case 3: asm{
								stfs f4,tempInputPtr->inputFloat
							}
						tempFloat = tempInput.inputFloat;
#endif
						break;
#ifdef __MWERKS__
				case 4: asm{ fmr tempFloat,fp5 }
#elif __GNUC__
				case 4: asm{
								stfs f5,tempInputPtr->inputFloat
							}
						tempFloat = tempInput.inputFloat;
#endif
						break;
#ifdef __MWERKS__
				case 5: asm{ fmr tempFloat,fp6 }
#elif __GNUC__
				case 5: asm{
								stfs f6,tempInputPtr->inputFloat
							}
						tempFloat = tempInput.inputFloat;
#endif
						break;
#ifdef __MWERKS__
				case 6: asm{ fmr tempFloat,fp7 }
#elif __GNUC__
				case 6: asm{
								stfs f7,tempInputPtr->inputFloat
							}
						tempFloat = tempInput.inputFloat;
#endif
						break;
#ifdef __MWERKS__
				case 7: asm{ fmr tempFloat,fp8 }
#elif __GNUC__
				case 7: asm{
								stfs f8,tempInputPtr->inputFloat
							}
						tempFloat = tempInput.inputFloat;
#endif
						break;
			}
			fpCounter++;
			*((float *) &parameterArea[gprCounter++]) = tempFloat;
			break;
	}
		tempParameter = tempParameter->next;
	} // End For(argument) Loop

//	currentSegment->use++;		//	Increase the callback use count 
	VPLEnvironmentCallbackRetain( currentSegment );

	inputCounter = 0;
	if(currentSegment->object != NULL && currentSegment->listInput == kFALSE) {
		parameterList = create_list(procedureInarity+1,theEnvironment);
		increment_count(currentSegment->object);
		*parameterList->objectList = currentSegment->object;
		inputCounter++;
	}
	else parameterList = create_list(procedureInarity,theEnvironment);

	if(currentSegment->listInput == kFALSE) {
		inputList = parameterList;
	} else if(currentSegment->object != NULL) {
		inputList = create_list(2,theEnvironment);
		increment_count(currentSegment->object);
		inputList->objectList[0] = currentSegment->object;
		inputList->objectList[1] = (V_Object) parameterList;
	} else {
		inputList = create_list(1,theEnvironment);
		inputList->objectList[0] = (V_Object) parameterList;
	}
	
	if(tempProcedure->returnParameter != NULL) {
		outputList = create_list(1,theEnvironment);
	} else {
		outputList = create_list(0,theEnvironment);
	}


	tempParameter = tempProcedure->parameters;
	for(counter=0;counter<procedureInarity;counter++){
		theParameterType = tempParameter->type;
		if(theParameterType == kFloatType && tempParameter->size == 8) theParameterType = kDoubleType;
		switch(theParameterType){
			case kUnsignedType:
			case kLongType:
			case kShortType:
			case kCharType:
			case kEnumType:
			case kIntType:
				*(parameterList->objectList + inputCounter++) = (V_Object) int_to_integer(parameterArea[counter],theEnvironment);
				break;

			case kPointerType:
				tempPointer = (Nat4 *) X_malloc(sizeof(Nat4));
				*((Nat4 *)tempPointer) = parameterArea[counter];
				outputBlock = create_externalBlock(tempParameter->name,tempParameter->size,theEnvironment);
				outputBlock->blockPtr = tempPointer;
				outputBlock->levelOfIndirection = tempParameter->indirection;
				*(parameterList->objectList + inputCounter++) = (V_Object) outputBlock;
				break;

			case kStructureType:
				record_error("MacVPLCallbackHandler: Input is a structure! - ","MacVPLCallbackHandler",kERROR,theEnvironment);
				return;
				break;

			case kFloatType:
				*(parameterList->objectList + inputCounter++) = (V_Object) float_to_real(*((float *) &parameterArea[counter]),theEnvironment);
				break;

			case kDoubleType:
				*(parameterList->objectList + inputCounter++) = (V_Object) float_to_real(*((double *) &parameterArea[counter]),theEnvironment);
				break;

			case kVoidType:
				*(parameterList->objectList + inputCounter++) = (V_Object) int_to_integer((Int4) &parameterArea[counter],theEnvironment);
				break;

			default:
				record_error("MacVPLCallbackHandler: Input is an unrecognized type! - ","MacVPLCallbackHandler",kERROR,theEnvironment);
				return;
				break;
		}
		tempParameter = tempParameter->next;
	}
	
	spawnPtr = theEnvironment->stackSpawner;
	result = spawnPtr(theEnvironment,currentSegment->vplRoutine,inputList,outputList,NULL);
    
	if( (tempParameter = tempProcedure->returnParameter) != NULL){
		block = outputList->objectList[0];
		theParameterType = tempParameter->type;
		if(theParameterType == kFloatType && tempParameter->size == 8) theParameterType = kDoubleType;
		switch(theParameterType){
			case kUnsignedType:
			case kLongType:
			case kShortType:
			case kCharType:
			case kEnumType:
			case kIntType:
				if(block == NULL) tempInput.inputInt = 0;
				else{
					switch(block->type){
						case kBoolean:
						tempInput.inputInt = ((V_Boolean) block)->value;
						break;
						
						case kInteger:
						tempInput.inputInt = ((V_Integer) block)->value;
						break;
						
					}
				}
				break;

			case kPointerType:
				if(block == NULL) tempInput.inputInt = 0;
				else{
					switch(block->type){
						case kExternalBlock:
						if(((V_ExternalBlock) block)->levelOfIndirection == 0) tempInput.inputInt = (Nat4) ((V_ExternalBlock) block)->blockPtr;
						if(((V_ExternalBlock) block)->levelOfIndirection == 1) tempInput.inputInt = *(Nat4*) ((V_ExternalBlock) block)->blockPtr;
						if(((V_ExternalBlock) block)->levelOfIndirection == 2) tempInput.inputInt = **(Nat4**) ((V_ExternalBlock) block)->blockPtr;
						break;
						
						case kString:
						tempInput.inputInt = (Nat4) ((V_String) block)->string;
						break;
						
						case kInteger:
						tempInput.inputInt = ((V_Integer) block)->value;
						break;
						
					}
				}
				break;

			case kStructureType:

//				errorOffset += sprintf(&errorString[errorOffset],"extprocedure: Return is a structure! - ");
//				return record_error(errorString,moduleName,kERROR,environment);

				break;

			case kFloatType:
				if(block == NULL) tempInput.inputFloat = 0.0;
				else{
					switch(block->type){
						case kInteger:
						tempInput.inputFloat = ((V_Integer) block)->value;
						break;
						
						case kReal:
						tempInput.inputFloat = ((V_Real) block)->value;
						break;
						
					}
				}
				break;

			case kDoubleType:
				if(block == NULL) tempInput.inputDouble = 0.0;
				else{
					switch(block->type){
						case kInteger:
						tempInput.inputDouble = ((V_Integer) block)->value;
						break;
						
						case kReal:
						tempInput.inputDouble = ((V_Real) block)->value;
						break;
						
					}
				}
				break;

			default:
				break;
		}
	}


	decrement_count(theEnvironment,(V_Object) inputList);
	decrement_count(theEnvironment,(V_Object) outputList);	

//	currentSegment->use--;										// Free the callback if necessary
//	if(currentSegment->use <= 0) X_free(currentSegment);
	VPLEnvironmentCallbackRelease( currentSegment );

	if( (tempParameter = tempProcedure->returnParameter) != NULL){
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
			tempInt = tempInput.inputInt;
			asm{
				mr	r3,tempInt
			}
			break;

		case kStructureType:
			break;
		case kDoubleType:
			tempDouble = tempInput.inputDouble;
#ifdef __MWERKS__
			asm{ fmr fp1,tempDouble }
#elif __GNUC__
			asm{
					lfd f1,tempInputPtr->inputDouble
				}
#endif
			break;

		case kFloatType:
			tempFloat = tempInput.inputFloat;
#ifdef __MWERKS__
			asm{ fmr fp1,tempFloat }
#elif __GNUC__
			asm{
					lfs f1,tempInputPtr->inputFloat
				}
#endif
			break;

	} // End Switch 
	} // End if return parameter
}
#endif

Int4 execute_evaluate( V_Environment environment,V_Stack stack)
{
	V_Frame		currentFrame = stack->currentFrame;
	V_Operation	currentOperation = currentFrame->operation;
	Nat4		outarity = currentOperation->outarity;

	Int1		*tempString = NULL;

	V_EvalTokenList theInitialTokenList;
	V_EvalToken		theFinalToken = NULL;
	V_EvalToken		theLastToken = NULL;
	V_Object		tempObject = NULL;

	Int1	*moduleName = module_name(currentOperation,environment);

	if(outarity != 1) {
		record_error("evaluate: Outarity not 1: ",moduleName,kWRONGINARITY,environment);
		return kHalt;
	}
	tempString = X_operation_name(environment,currentFrame);
	if(!tempString) {
		record_error("evaluate: NULL operation name: ",moduleName,kWRONGINARITY,environment);
		return kHalt;
	}
	theInitialTokenList = parse_string(environment,stack,tempString);
	if(!theInitialTokenList) {
		record_error("evaluate: parse_string error: ",moduleName,kWRONGINARITY,environment);
		return kHalt;
	}
	theFinalToken = reduce_complex(theInitialTokenList->first,theLastToken);
	if(!theFinalToken) {
		record_error("evaluate: reduce_complex error: ",moduleName,kWRONGINARITY,environment);
		return kHalt;
	}
	theInitialTokenList->first = NULL;
	theInitialTokenList->last = NULL;
	add_token(theInitialTokenList,theFinalToken);
	theFinalToken = execute_tokenList(theInitialTokenList->first);
	
	if(theFinalToken->type == kTokenTypeIntegerConstant) tempObject = (V_Object) int_to_integer(theFinalToken->integerValue,environment);
	else if(theFinalToken->type == kTokenTypeRealConstant) tempObject = (V_Object) float_to_real(theFinalToken->realValue,environment);
	else {
		record_error("evaluate: Invalid result: ",moduleName,kERROR,environment);
		return kHalt;
	}

	X_set_frame_root_object(environment,currentFrame,0,tempObject);

	return kSuccess;

}






