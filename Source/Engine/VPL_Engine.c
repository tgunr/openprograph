/*
	
	VPL_Engine.c
	Copyright 2000 Scott B. Anderson, All Rights Reserved.
	
*/
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/* #include "VPL_Engine.h" */
#include "VPL_Execution.h"
#include "VPL_Externals.h"
#include "VPL_Errors.h"
#include "VPL_PrimUtility.h"

#define MAX_HEAP_SIZE 30000

extern Nat4 destroy_persistentsTable(V_Dictionary ptrT,V_Environment environment);
extern void MacVPLCallbackHandler(void);

Nat4 vpx_get_class_index(V_Environment environment,Int1 *stringConstant)
{
	Nat4				slashPosition = 0;
	Int1*				className = NULL;
	Nat4				classIndex = 0;
	
	if(!stringConstant) return classIndex;
	
	slashPosition = strcspn(stringConstant,"/");
	if(!(slashPosition == strlen(stringConstant))){
			className = (Int1 *)X_malloc((slashPosition + 1)*sizeof(Int1));
			className = strncpy(className,stringConstant,slashPosition);
			className[slashPosition] = '\0';
			classIndex = VPL_get_class_index(environment,className,kFALSE);
			X_free(className);
	}
	
	return classIndex;
}

Int1 *vpx_get_column_name(V_Environment environment,Int1 *stringConstant)
{
#pragma unused(environment)
	Nat4				slashPosition = 0;
	Int1*				valueName = NULL;
	
	if(!stringConstant) return valueName;
	
	slashPosition = strcspn(stringConstant,"/");
	if(slashPosition == strlen(stringConstant)) valueName = stringConstant;
	else valueName = stringConstant+slashPosition+1;
	
	return valueName;
}

vpl_Status		VPLEngineRecordArityError( vpl_Arity wantArity, vpl_Status err, vpl_StringPtr fillString, vpl_StringPtr primName, V_Frame primitive, V_Environment environment )
{
#pragma unused(primitive)

	vpl_StringPtr	moduleName = NULL;
	vpl_StringPtr	tempString = vpl_EmptyString;
	vpl_StringLen	tempLength = 256;  // 10 (no more than 9999999999 in arity please) + 1

	if(primName && fillString) tempLength = strlen( primName ) + strlen( fillString ) + 11;  // 10 (no more than 9999999999 in arity please) + 1

	tempString = X_malloc( tempLength );
	if (tempString != NULL) {
		if(primName && fillString) sprintf( tempString, "%s%s%d", primName, fillString, (int) wantArity );
		else sprintf( tempString, "Unknown primName and fillString - arity = %d", primName, fillString, (int) wantArity );
		err = record_error( tempString, moduleName, err, environment );
		X_free(tempString );
	}
	return err;
}

Nat4		VPLEngineGetInputArity(V_Frame inputFrame)
{
	Nat4	arity = inputFrame->operation->inarity;
	
	if( inputFrame->operation->inject ) arity--;
	
	return arity;
}

vpl_Status		VPLEngineCheckInputArity( vpl_Arity wantArity, vpl_StringPtr primName, V_Frame inputFrame, V_Environment environment )
{
	vpl_Status		err = kWRONGINARITY;
	vpl_StringPtr	fillString = ": Inarity not ";
	Nat4 			primInArity = VPLEngineGetInputArity(inputFrame);
	
	if( wantArity == primInArity ) return kNOERROR;
	
	{
		Int1	*expectedArity = integer2string(wantArity);
		Int1	*foundArity = integer2string(primInArity);

		record_fault(environment,
			kIncorrectInarity,		// Fault Code
			primName,				// Primary String - usually primitive name
			"Normal",				// Arity Check Mode
			expectedArity,			// Expected Arity
			foundArity);			// Found Arity
		X_free(expectedArity);
		X_free(foundArity);
	}
	VPLEngineRecordArityError( wantArity, err, fillString, primName, inputFrame, environment );

	return err;
}

vpl_Status		VPLEngineCheckInputArityMin( vpl_Arity wantArity, vpl_StringPtr primName, V_Frame inputFrame, V_Environment environment )
{
	vpl_Status		err = kWRONGINARITY;
	vpl_StringPtr	fillString = ": Inarity under ";
	Nat4 			primInArity = VPLEngineGetInputArity(inputFrame);
	
	if( wantArity <= primInArity ) return kNOERROR;
	
	{
		Int1	*expectedArity = integer2string(wantArity);
		Int1	*foundArity = integer2string(primInArity);

		record_fault(environment,
			kIncorrectInarity,		// Fault Code
			primName,				// Primary String - usually primitive name
			"Minimum",				// Arity Check Mode
			expectedArity,			// Expected Arity
			foundArity);			// Found Arity
		X_free(expectedArity);
		X_free(foundArity);
	}
	VPLEngineRecordArityError( wantArity, err, fillString, primName, inputFrame, environment );

	return err;
}

vpl_Status		VPLEngineCheckInputArityMax( vpl_Arity wantArity, vpl_StringPtr primName, V_Frame inputFrame, V_Environment environment )
{
	vpl_Status		err = kWRONGINARITY;
	vpl_StringPtr	fillString = ": Inarity over ";
	Nat4 			primInArity = VPLEngineGetInputArity(inputFrame);
	
	if( wantArity >= primInArity ) return kNOERROR;
	
	{
		Int1	*expectedArity = integer2string(wantArity);
		Int1	*foundArity = integer2string(primInArity);

		record_fault(environment,
			kIncorrectInarity,		// Fault Code
			primName,				// Primary String - usually primitive name
			"Maximum",				// Arity Check Mode
			expectedArity,			// Expected Arity
			foundArity);			// Found Arity
		X_free(expectedArity);
		X_free(foundArity);
	}
	VPLEngineRecordArityError( wantArity, err, fillString, primName, inputFrame, environment );

	return err;
}

vpl_Status		VPLEngineCheckOutputArity( vpl_Arity wantArity, vpl_StringPtr primName, V_Frame inputFrame, V_Environment environment )
{
	vpl_Status		err = kWRONGOUTARITY;
	vpl_StringPtr	fillString = ": Outarity not ";
	Nat4 			primOutArity = inputFrame->operation->outarity;
	
	if( wantArity == primOutArity ) return kNOERROR;
	
	{
		Int1	*expectedArity = integer2string(wantArity);
		Int1	*foundArity = integer2string(primOutArity);

		record_fault(environment,
			kIncorrectOutarity,		// Fault Code
			primName,				// Primary String - usually primitive name
			"Normal",				// Arity Check Mode
			expectedArity,			// Expected Arity
			foundArity);			// Found Arity
		X_free(expectedArity);
		X_free(foundArity);
	}
	VPLEngineRecordArityError( wantArity, err, fillString, primName, inputFrame, environment );

	return err;
}

vpl_Status		VPLEngineCheckOutputArityMin( vpl_Arity wantArity, vpl_StringPtr primName, V_Frame inputFrame, V_Environment environment )
{
	vpl_Status		err = kWRONGOUTARITY;
	vpl_StringPtr	fillString = ": Outarity under ";
	Nat4 			primOutArity = inputFrame->operation->outarity;
	
	if( wantArity <= primOutArity ) return kNOERROR;
	
	{
		Int1	*expectedArity = integer2string(wantArity);
		Int1	*foundArity = integer2string(primOutArity);

		record_fault(environment,
			kIncorrectOutarity,		// Fault Code
			primName,				// Primary String - usually primitive name
			"Minimum",				// Arity Check Mode
			expectedArity,			// Expected Arity
			foundArity);			// Found Arity
		X_free(expectedArity);
		X_free(foundArity);
	}
	VPLEngineRecordArityError( wantArity, err, fillString, primName, inputFrame, environment );

	return err;
}

vpl_Status		VPLEngineCheckOutputArityMax( vpl_Arity wantArity, vpl_StringPtr primName, V_Frame inputFrame, V_Environment environment )
{
	vpl_Status		err = kWRONGOUTARITY;
	vpl_StringPtr	fillString = ": Outarity over ";
	Nat4 			primOutArity = inputFrame->operation->outarity;
	
	if( wantArity >= primOutArity ) return kNOERROR;
	
	{
		Int1	*expectedArity = integer2string(wantArity);
		Int1	*foundArity = integer2string(primOutArity);

		record_fault(environment,
			kIncorrectOutarity,		// Fault Code
			primName,				// Primary String - usually primitive name
			"Maximum",				// Arity Check Mode
			expectedArity,			// Expected Arity
			foundArity);			// Found Arity
		X_free(expectedArity);
		X_free(foundArity);
	}
	VPLEngineRecordArityError( wantArity, err, fillString, primName, inputFrame, environment );

	return err;
}

Int1* VPLTypeToString(vpl_ObjectType theVType)
{
	Int1	*tempCString = NULL;
	
		switch(theVType){
		
			case kNull:
				tempCString = "null";
				break;
			
			case kUndefined:
				tempCString = "undefined";
				break;
			
			case kNone:
				tempCString = "none";
				break;
			
			case kBoolean:
				tempCString = "boolean";
				break;
			
			case kInteger:
				tempCString = "integer";
				break;
			
			case kReal:
				tempCString = "real";
				break;
			
			case kString:
				tempCString = "string";
				break;
			
			case kList:
				tempCString = "list";
				break;
			
			case kInstance:
				tempCString = "instance";
				break;
			
			case kExternalBlock:
				tempCString = "external";
				break;
			
			default:
				tempCString = "UNRECOGNIZED!";
				break;
		}
	return tempCString;
}

vpl_Status		VPLEngineGetInputObjectType( vpl_ObjectType theVType, vpl_Arity theNode, V_Frame inputFrame, V_Environment environment )
{
	vpl_ObjectType	theFoundType = 0;
	V_Object		theObject = NULL;
	
	theObject = VPLEngineGetInputObject( theNode, inputFrame, environment );
	
	theFoundType = VPLObjectGetType(theObject);
	
	if(theFoundType == theVType) return kNOERROR;
	else
	{
		Int1	*terminalIndex =integer2string( theNode + 1 );
		Int1	*expectedType = VPLTypeToString(theVType);
		Int1	*foundType = VPLTypeToString(theFoundType);

		record_fault(environment,
			kIncorrectType,			// Fault Code
			inputFrame->operation->objectName,				// Primary String - usually primitive name
			terminalIndex,			// Terminal Index = theNode + 1
			expectedType,			// Expected Type
			foundType);				// Found Type
		X_free(terminalIndex);
		return VPLPrimRecordObjectTypeError( theFoundType, theVType, theNode++, inputFrame->operation->objectName, NULL, environment );
	}

}

V_Object		VPLEngineGetInputObject( vpl_Arity theNode, V_Frame inputFrame, V_Environment environment )
{
	V_Object	tempObject = NULL;
	Int4		result = kNOERROR;
	
	if(theNode >= inputFrame->operation->inject - 1) {
		theNode++;
	}
	
	result = X_get_frame_terminal_object(environment,inputFrame,theNode,&tempObject);
	return tempObject;
}

vpl_Status		VPLEngineGetInputObjectInteger( vpl_Integer* theValue, vpl_Arity theNode, vpl_StringPtr primName, V_Frame inputFrame, V_Environment environment )
{
#pragma unused(primName)

	vpl_Status		err = kNOERROR;
	V_Object		theVObject = NULL;

	err = VPLEngineGetInputObjectType(kInteger, theNode, inputFrame, environment );
	
	if( err == kNOERROR ) {
		theVObject = VPLEngineGetInputObject(theNode, inputFrame, environment );
		*theValue = ((V_Integer) theVObject)->value;
	}

	return err;
}

V_Object X_increment_count( V_Object object)
{
	if(object) object->use++;
	return object;
}

V_RootNode X_get_root_node( V_Frame frame,V_Root root)
{
	V_RootNode	theRootNode = frame->roots;
	
	if(!root) return NULL;
	
	while(theRootNode && theRootNode->root != root) {
		theRootNode = theRootNode->previousNode;
	}
	return theRootNode;
}

void X_destroy_root_node(V_Environment environment, V_Frame frame, V_RootNode theRootNode)
{
	if(theRootNode){
		if(frame->roots == theRootNode) frame->roots = theRootNode->previousNode;
		decrement_count(environment,theRootNode->object);
		if(theRootNode->previousNode) theRootNode->previousNode->nextNode = theRootNode->nextNode;
		if(theRootNode->nextNode) theRootNode->nextNode->previousNode = theRootNode->previousNode;
		X_free(theRootNode);
	}
}

V_Object X_get_frame_root_object( V_Frame frame,Nat4 offset);
V_Object X_get_frame_root_object( V_Frame frame,Nat4 offset)
{
	V_Operation	currentOperation = frame->operation;
	V_Root		theRoot = currentOperation->outputList[offset];
	V_RootNode	theRootNode = X_get_root_node(frame,theRoot);
	
	if(theRootNode) return theRootNode->object;
	else return NULL;

}

V_Object X_set_frame_root_object( V_Environment environment, V_Frame frame,Nat4 offset,V_Object object)
{
	V_Operation	currentOperation = frame->operation;
	enum ioMode	mode = iSimple;
	V_Root		theRoot = NULL;
	V_RootNode	theRootNode = NULL;

	if(currentOperation->outputList) {
		theRoot = currentOperation->outputList[offset];
		mode = theRoot->mode;
		theRootNode = X_get_root_node(frame,theRoot);
	} else {
		record_error("set_frame_root_object: NULL Object in list terminal!",NULL,kERROR,environment);
		record_fault(environment,kIncorrectOutarity,currentOperation->objectName,"NULL","NULL",frame->methodName);
		return NULL;
	}

	if(!theRootNode){
		V_RootNode	currentRoot = frame->roots;
					
		theRootNode = (V_RootNode) X_malloc(sizeof(VPL_RootNode));
		theRootNode->previousNode = currentRoot;
		theRootNode->nextNode = NULL;
		theRootNode->root = theRoot;
		theRootNode->object = NULL;
		if(currentRoot) currentRoot->nextNode = theRootNode;
		frame->roots = theRootNode;
	}

	if(mode == iSimple || mode == iLoop) {
		decrement_count(environment,theRootNode->object);
		theRootNode->object = object;
	} else if (mode == iList) {

		V_List	tempList = NULL;
		
		if(!theRootNode->object) theRootNode->object = (V_Object) create_list(0,environment);
		if(object && object->type == kNone) {
			decrement_count(environment,object);
			return NULL;
		}
		tempList = (V_List) theRootNode->object;															/* Get old list */
		theRootNode->object = (V_Object) clone_list(0,0,tempList, tempList->listLength + 1,environment);	/* New "heaped" list */
		((V_List) theRootNode->object)->objectList[tempList->listLength] = object;							/* Insert object at end of new list */
		decrement_count(environment,(V_Object)tempList);																/* Decrement count of old root */
	}

	return object;
}

Int4 X_get_frame_terminal_object(V_Environment environment, V_Frame frame,Nat4 offset,V_Object *returnObject)
{
	V_Operation	currentOperation = frame->operation;
	enum ioMode mode = iSimple;
	V_Terminal	theTerminal = NULL;
	V_Root		theRoot = NULL;
	V_RootNode	theRootNode = NULL;
	
	if(currentOperation->inputList) {
		theTerminal = currentOperation->inputList[offset];
		mode = theTerminal->mode;
		theRoot = theTerminal->root;
		theRootNode = X_get_root_node(frame,theRoot);
	} else {
		record_error("get_frame_terminal_object: NULL Object in list terminal!",NULL,kERROR,environment);
		record_fault(environment,kIncorrectInarity,currentOperation->objectName,"NULL","NULL",frame->methodName);
		*returnObject = NULL;
		return kERROR;
	}

	switch(mode) {

		case iList:
			if(!theRootNode || !theRootNode->object) {
				record_error("get_frame_terminal_object: NULL Object in list terminal!",NULL,kERROR,environment);
	{
		Int1	*terminalIndex =integer2string( offset + 1 );
		Int1	*expectedType = VPLTypeToString(kList);
		Int1	*foundType = VPLTypeToString(kNull);
		
		record_fault(environment,
			kIncorrectListInput,			// Fault Code
			currentOperation->objectName,	// Primary String - usually primitive name
			terminalIndex,					// Terminal Index = theNode + 1
			expectedType,					// Expected Type
			foundType);						// Found Type
		X_free(terminalIndex);
		VPLPrimRecordObjectTypeError( kNull, kList, offset + 1, currentOperation->objectName, NULL, environment );
	}
				*returnObject = NULL;
				return kERROR;
			} else if( theRootNode->object->type != kList){
				record_error("get_frame_terminal_object: Non-list Object in list terminal!!",NULL,kERROR,environment);
	{
		Int1	*terminalIndex =integer2string( offset + 1 );
		Int1	*expectedType = VPLTypeToString(kList);
		Int1	*foundType = VPLTypeToString(theRootNode->object->type);
		
		record_fault(environment,
			kIncorrectListInput,			// Fault Code
			currentOperation->objectName,	// Primary String - usually primitive name
			terminalIndex,					// Terminal Index = theNode + 1
			expectedType,					// Expected Type
			foundType);						// Found Type
		X_free(terminalIndex);
		VPLPrimRecordObjectTypeError( theRootNode->object->type, kList, offset + 1, currentOperation->objectName, NULL, environment );
	}
				*returnObject = NULL;
				return kERROR;
			}

			*returnObject = ((V_List) theRootNode->object)->objectList[frame->repeatCounter];
			break;

		case iLoop:
			if(frame->repeatCounter) theRootNode = X_get_root_node(frame,theTerminal->loopRoot);
		case iSimple:
			if(theRootNode) {
				*returnObject = theRootNode->object;
			} else {
				V_Object tempObject = (V_Object) create_none(environment);
				tempObject->use = 0;
				*returnObject = tempObject;
			}
			break;
		
		default:
			break;
		
	}

	return kNOERROR;
}

Int1 *X_operation_name( V_Environment environment,V_Frame currentFrame)
{

	V_Operation	operation = currentFrame->operation;

	V_Object	tempObject = NULL;
	V_Operation	tempUniversal = NULL;
	V_Class		ptrK = NULL;
	Int1		*tempString = NULL;
	Int1		*tempAString = NULL;
	Int1		*tempCString = NULL;
	Int1		*tempOperationName = NULL;
	Nat4		length = 0;
	Nat4		inject = 0;
	Nat4		index = 0;
	V_Dictionary ptrC = NULL;
	Int4		result = 0;

	if(environment != NULL) ptrC = environment->classTable;

	if(operation == NULL){
		record_error("operation_name: Operation NULL!"," Yikes!",kERROR,environment);
		return NULL;
	}
	tempAString = operation->objectName;
	inject = operation->inject;
	if(tempAString == NULL && inject != 0){
		if(operation->inarity > 0){
			result = X_get_frame_terminal_object(environment,currentFrame,inject - 1,&tempObject);
			if(tempObject != NULL && tempObject->type == kString){
				tempAString = ((V_String) tempObject)->string;
				if(tempAString == NULL){
					record_error("operation_name: Inject value NULL!",tempAString,kERROR,environment);
					record_fault(environment,kIncorrectType,"Not String","NULL","NULL","NULL");
					return NULL;
				}
			}else{
				record_error("operation_name: Inject type not String!",NULL,kERROR,environment);
				record_fault(environment,kIncorrectType,"Not String","NULL","NULL","NULL");
				return NULL;
			}
		}
	}
	if(tempAString == NULL){
		record_error("operation_name: NULL Operation Name!",NULL,kERROR,environment);
		 return NULL;
	} 
	length = strlen(tempAString);
	if(operation->type == kUniversal && tempAString[0] == '/'){
		if(tempAString[1] == '/'){
//			while(currentFrame && currentFrame->operation->type != kUniversal) currentFrame = currentFrame->previousFrame;
			while(currentFrame && currentFrame->methodName == NULL) currentFrame = currentFrame->previousFrame;
			tempOperationName = currentFrame->methodName;
			if(tempOperationName){
				index = strcspn(tempOperationName,"/");
				if(index == 0){
					record_error("operation_name: No class prefix!",tempAString,kERROR,environment);
					return NULL;
				}
				tempString = (Int1 *)calloc(index+1,sizeof(Int1));
				tempString = strncpy(tempString,tempOperationName,index);
				tempString[index] = '\0';

				tempUniversal = (V_Operation) operation;
				if(tempUniversal->callSuper == kTRUE){
					ptrK = get_class( ptrC, tempString);
					X_free(tempString);
					if(ptrK == NULL || ptrK->superClassNames == NULL) return NULL;
					index = strlen(ptrK->superClassNames[0]);
					tempString = (Int1 *)X_malloc((index+1)*sizeof(Int1));
					tempString = strcpy(tempString,ptrK->superClassNames[0]);
					tempString[index] = '\0';
				}

				length += index;
				tempCString = (Int1 *)X_malloc(length*sizeof(Int1));
				tempCString = strncpy(tempCString,tempString,index);
				X_free(tempString);
				tempCString[index] = '\0';
				tempCString = strcat(tempCString,tempAString+1);
				return tempCString;
			}
		}else if(operation->inarity > 0){
			tempObject = VPLEngineGetInputObject(0,currentFrame,environment);
			if(tempObject != NULL && tempObject->type == kInstance){
				tempString = ((V_Instance) tempObject)->name;
				length += strlen(tempString);
				tempCString = (Int1 *)X_malloc((length+1)*sizeof(Int1));
				tempCString = strcpy(tempCString,tempString);
				tempCString = strcat(tempCString,tempAString);
				return tempCString;
			}else{
				record_error("operation_name: First input is not instance!",NULL,kERROR,environment);
				record_error("operation_name: The string was: ",tempAString,kERROR,environment);
				record_fault(environment,kIncorrectType,"Not Instance","Input 1","NULL","NULL");
				return NULL;
			}
		}
	}else{
		tempCString = (Int1 *)X_malloc((length+1)*sizeof(Int1));
		tempCString = strcpy(tempCString,tempAString);
		return tempCString;
	}
	return NULL;
}

Int1 *X_operation_name_instance( V_Environment environment,Int1* tempAString, V_Object tempObject)
{
	Int1		*tempString = NULL;
	Int1		*tempCString = NULL;
	Nat4		length = 0;
	V_Dictionary ptrC = NULL;

	if(environment != NULL) ptrC = environment->classTable;

	if(tempAString == NULL){
		record_error("operation_name_instance: NULL Operation Name!",NULL,kERROR,environment);
		return NULL;
	} 
	length = strlen(tempAString);
	if(tempAString[0] == '/'){
		if(tempAString[1] == '/'){
			record_error("operation_name_instance: Data driven operation Name!",NULL,kERROR,environment);
			return NULL;
		}else if(tempObject){
			if(tempObject != NULL && tempObject->type == kInstance){
				tempString = ((V_Instance) tempObject)->name;
				length += strlen(tempString);
				tempCString = (Int1 *)X_malloc((length+1)*sizeof(Int1));
				tempCString = strcpy(tempCString,tempString);
				tempCString = strcat(tempCString,tempAString);
				return tempCString;
			}else{
				record_error("operation_name_instance: Instance input is not instance!",tempAString,kERROR,environment);
				record_error("operation_name_instance: The string was: ",tempAString,kERROR,environment);
				return NULL;
			}
		}
	}else{
		tempCString = (Int1 *)X_malloc((length+1)*sizeof(Int1));
		tempCString = strcpy(tempCString,tempAString);
		return tempCString;
	}
	return NULL;
}

V_Case *X_obtain_cases_by_name( V_Environment environment,V_Dictionary universalsTable,Int1 *methodName,Nat4 numberOfInputs, Nat4 numberOfOutputs)
{
	Int1			*tempFullString = NULL;
	Int1			*tempCString = NULL;
	Int1			*tempString = NULL;
	Int1			*tempClassName = NULL;
	V_Method		ptrU = NULL;
	V_Class			ptrK = NULL;
	Nat4			length = 0;
	Nat4			index = 0;

	V_Dictionary	ptrC = environment->classTable;
	Int1			*tempOString = new_string(methodName,environment);
	
#ifdef VPL_VERBOSE_ENGINE
	if(tempOString == NULL){
		record_error("X_obtain_cases_by_name: NULL operation name!",NULL,kERROR,environment);
		return NULL;
	}
#endif
	index = strcspn(tempOString,"/");
	if(index == strlen(tempOString)){
		ptrU = get_method(universalsTable,tempOString);
#ifdef VPL_VERBOSE_ENGINE
		if(ptrU == NULL){
			Int1	*tempInarity = X_malloc( 4 );
			Int1	*tempOutarity = X_malloc( 4 );
			record_error("X_obtain_cases_by_name: Method could not be found!",tempOString,kERROR,environment);
			if (tempInarity != NULL && tempOutarity) {
				sprintf( tempInarity, "%u",(unsigned int) numberOfInputs );
				sprintf( tempOutarity, "%u",(unsigned int) numberOfOutputs );
				record_fault(environment,kNonexistentMethod,tempOString,tempInarity,tempOutarity,"NULL");
			} else record_fault(environment,kNonexistentMethod,tempOString,"NULL","NULL","NULL");
			X_free(tempInarity);
			X_free(tempOutarity);
			X_free(tempOString);
			return NULL;
		}
#endif
		X_free(tempOString);
		return ptrU->casesList; /* To do: check for arity once method stores it */
	}
	tempCString = (Int1 *)X_malloc((index + 1)*sizeof(Int1));
	tempCString = strncpy(tempCString,tempOString,index);
	tempCString[index] = '\0';
	ptrK = get_class( ptrC, tempCString);
#ifdef VPL_VERBOSE_ENGINE
	if(ptrK == NULL) {
		record_error("obtain_universal: Could not obtain class!",tempOString,kERROR,environment);
		X_free(tempCString);
		X_free(tempOString);
		return NULL;
	}
#endif
	X_free(tempCString);
	tempClassName = ptrK->name;
	tempFullString = new_string(tempOString,environment);
	while(ptrU == NULL){
		ptrU = get_method(universalsTable,tempOString);
		if(ptrU != NULL) {
			X_free(tempOString);
			return ptrU->casesList;
		}
		length = strlen(tempOString);
		index = strcspn(tempOString,"/");
		if(index == 0){
			X_free(tempOString);
			return NULL;
		}

		length -= index;
		tempCString = (Int1 *)X_malloc((index + 1)*sizeof(Int1));
		tempCString = strncpy(tempCString,tempOString,index);
		tempCString[index] = '\0';
		ptrK = get_class( ptrC, tempCString);
#ifdef VPL_VERBOSE_ENGINE
		if(ptrK == NULL) {
			record_error("obtain_universal: Could not obtain class!",tempCString,kERROR,environment);
			X_free(tempCString);
			return NULL;
		}
		if( ptrK->superClassNames == NULL) {
			Int1	*tempInarity = X_malloc( 4 );
			Int1	*tempOutarity = X_malloc( 4 );
			record_error("obtain_cases: No super class!",tempCString,kERROR,environment);
			record_error("obtain_cases: Class method could not be found!",tempOString,kERROR,environment);
			if (tempInarity != NULL && tempOutarity) {
				sprintf( tempInarity, "%u",(unsigned int) numberOfInputs );
				sprintf( tempOutarity, "%u",(unsigned int) numberOfOutputs );
				record_fault(environment,kNonexistentMethod,tempFullString,tempInarity,tempOutarity,"NULL");
			} else record_fault(environment,kNonexistentMethod,tempFullString,"NULL","NULL","NULL");
			X_free(tempInarity);
			X_free(tempOutarity);
			X_free(tempOString);
			X_free(tempFullString);
			return NULL;
		}
#endif
		X_free(tempCString);

		tempString = ptrK->superClassNames[0];
		if(tempString == NULL){
			X_free(tempOString);
			return NULL;
		}

		length += strlen(tempString);
		tempCString = (Int1 *)X_malloc((length+1)*sizeof(Int1));
		tempCString = strcpy(tempCString,tempString);
		tempCString = strcat(tempCString,tempOString + index);
		X_free(tempOString);
		tempOString = tempCString;
		
	}
	
	return NULL;
}

V_Case *X_obtain_cases( V_Environment environment,V_Dictionary universalsTable,V_Frame currentFrame,Int1 **methodName,Nat4 *dataDriver,Nat4 *numberOfCases);
V_Case *X_obtain_cases( V_Environment environment,V_Dictionary universalsTable,V_Frame currentFrame,Int1 **methodName,Nat4 *dataDriver,Nat4 *numberOfCases)
{
	V_Operation		operation = currentFrame->operation;
	Int1			*tempFullString = NULL;
	Int1			*tempOString = NULL;
	Int1			*tempCString = NULL;
	Int1			*tempString = NULL;
	Int1			*tempClassName = NULL;
	V_Method		ptrU = NULL;
	V_Class			ptrK = NULL;
	Nat4			length = 0;
	Nat4			index = 0;
	V_Method		theMethod = NULL;
	
	V_Dictionary	ptrC = environment->classTable;
	
	*dataDriver = 0;

	if(operation->type == kLocal) {
		*methodName = currentFrame->operation->objectName;
		*dataDriver = currentFrame->dataDriver;
		*numberOfCases = operation->numberOfCases;
		return operation->casesList;
	}

	if(operation->columnIndex != -1){
		Nat4			theClassIndex = operation->classIndex;
		V_ClassEntry	theClassEntry = NULL;
		if(theClassIndex == -1){
			if(operation->objectName[0] == '/'){
				if(operation->objectName[1] == '/'){
					if(currentFrame->dataDriver && currentFrame->dataDriver != -1) {
						if(operation->callSuper){
							theClassEntry = environment->classIndexTable->classes[currentFrame->dataDriver];
							if(theClassEntry && theClassEntry->superClasses) *dataDriver = theClassIndex = theClassEntry->superClasses[0];
							else record_error("obtain_cases: No super class for frame calling // method!",operation->objectName,kERROR,environment);
						} else {
							*dataDriver = theClassIndex = currentFrame->dataDriver;
						}
					} else {
						record_error("obtain_cases: No data driver for frame calling // method!",operation->objectName,kERROR,environment);
					}
				} else {
					V_Object	tempObject = VPLEngineGetInputObject(0,currentFrame,environment);
					if(tempObject != NULL && tempObject->type == kInstance && tempObject->instanceIndex){
						theClassIndex = tempObject->instanceIndex;
					}
				}
			}
		}
		if(theClassIndex != -1){
			theClassEntry = environment->classIndexTable->classes[theClassIndex];
			theMethod = theClassEntry->methods[operation->columnIndex];
			while(!theMethod && theClassEntry->superClasses){
				theClassIndex = theClassEntry->superClasses[0];
				theClassEntry = environment->classIndexTable->classes[theClassIndex];
				theMethod = theClassEntry->methods[operation->columnIndex];
			}
		}
		if(theMethod){
			*methodName = theMethod->objectName;
			*dataDriver = theClassIndex;
			*numberOfCases = theMethod->numberOfCases;
			return theMethod->casesList; /* To do: check for arity once method stores it */
		}
	}

	tempOString = X_operation_name(environment,currentFrame);
	if(operation->inject == 0){
		record_error("obtain_universal: Non-inject operation!",tempOString,kERROR,environment);
	}
	if(tempOString == NULL){
		record_error("obtain_universal: NULL operation name!",operation->objectName,kERROR,environment);
		return NULL;
	}
	index = strcspn(tempOString,"/");
	if(index == strlen(tempOString)){
		ptrU = get_method(universalsTable,tempOString);
		if(ptrU == NULL){
			Int1	*tempInarity = X_malloc( 4 );
			Int1	*tempOutarity = X_malloc( 4 );
			record_error("obtain_cases: No such method!",tempOString,kERROR,environment);
			if (tempInarity != NULL && tempOutarity) {
				sprintf( tempInarity, "%u",(unsigned int) operation->inarity );
				sprintf( tempOutarity, "%u",(unsigned int) operation->outarity );
				record_fault(environment,kNonexistentMethod,tempOString,tempInarity,tempOutarity,currentFrame->methodName);
			} else record_fault(environment,kNonexistentMethod,tempOString,"NULL","NULL",currentFrame->methodName);
			X_free(tempInarity);
			X_free(tempOutarity);
			X_free(tempOString);
			return NULL;
		}
		X_free(tempOString);
		if(theMethod && ptrU != theMethod){
			record_error("obtain_cases: Unequal methods!",operation->objectName,kERROR,environment);
		}
		*methodName = ptrU->objectName;
		*dataDriver = 0;
		*numberOfCases = ptrU->numberOfCases;
		return ptrU->casesList; /* To do: check for arity once method stores it */
	}
	tempCString = (Int1 *)X_malloc((index + 1)*sizeof(Int1));
	tempCString = strncpy(tempCString,tempOString,index);
	tempCString[index] = '\0';
	ptrK = get_class( ptrC, tempCString);
#ifdef VPL_VERBOSE_ENGINE
	if(ptrK == NULL) {
		record_error("obtain_universal: Could not obtain class!",tempOString,kERROR,environment);
		X_free(tempCString);
		X_free(tempOString);
		return NULL;
	}
#endif
	X_free(tempCString);
	tempClassName = ptrK->name;
	tempFullString = new_string(tempOString,environment);
	while(ptrU == NULL){
		ptrU = get_method(universalsTable,tempOString);
		if(ptrU != NULL) {
			X_free(tempOString);
			X_free(tempFullString);
			if(theMethod && ptrU != theMethod){
				record_error("obtain_cases: Unequal methods!",operation->objectName,kERROR,environment);
			}
			*methodName = ptrU->objectName;
			*dataDriver = vpx_get_class_index(environment,ptrU->objectName);
			*numberOfCases = ptrU->numberOfCases;
			return ptrU->casesList;
		}
		length = strlen(tempOString);
		index = strcspn(tempOString,"/");
		if(index == 0){
			record_error("obtain_cases: No slash mark!",tempCString,kERROR,environment);
			X_free(tempOString);
			X_free(tempFullString);
			return NULL;
		}

		length -= index;
		tempCString = (Int1 *)X_malloc((index + 1)*sizeof(Int1));
		tempCString = strncpy(tempCString,tempOString,index);
		tempCString[index] = '\0';
		ptrK = get_class( ptrC, tempCString);
		if(ptrK == NULL) {
			record_error("obtain_cases: Could not obtain class!",tempCString,kERROR,environment);
			X_free(tempCString);
			X_free(tempFullString);
			return NULL;
		}
		if( ptrK->superClassNames == NULL) {
			Int1	*tempInarity = X_malloc( 4 );
			Int1	*tempOutarity = X_malloc( 4 );
			record_error("obtain_cases: No super class!",tempCString,kERROR,environment);
			record_error("obtain_cases: Class method could not be found!",tempOString,kERROR,environment);
			if (tempInarity != NULL && tempOutarity) {
				sprintf( tempInarity, "%u",(unsigned int) operation->inarity );
				sprintf( tempOutarity, "%u",(unsigned int) operation->outarity );
				record_fault(environment,kNonexistentMethod,tempFullString,tempInarity,tempOutarity,currentFrame->methodName);
			} else record_fault(environment,kNonexistentMethod,tempFullString,"NULL","NULL",currentFrame->methodName);
			X_free(tempInarity);
			X_free(tempOutarity);
			X_free(tempOString);
			X_free(tempFullString);
			return NULL;
		}
		X_free(tempCString);

		tempString = ptrK->superClassNames[0];
		if(tempString == NULL){
			record_error("obtain_cases: NULL super class name!",tempCString,kERROR,environment);
			record_fault(environment,kNonexistentMethod,tempOString,ptrK->name,"NULL",currentFrame->methodName);
			X_free(tempOString);
			X_free(tempFullString);
			return NULL;
		}

		length += strlen(tempString);
		tempCString = (Int1 *)X_malloc((length+1)*sizeof(Int1));
		tempCString = strcpy(tempCString,tempString);
		tempCString = strcat(tempCString,tempOString + index);
		X_free(tempOString);
		tempOString = tempCString;
		
	}
	
	return NULL;
}

void X_destroy_frame( V_Environment environment,V_Frame newFrame )
{
	V_RootNode	tempRootNode = NULL;
	V_RootNode	theRootNode = newFrame->roots;
	
	while(theRootNode) {
		decrement_count(environment,theRootNode->object);
		tempRootNode = theRootNode->previousNode;
		X_free(theRootNode);
		theRootNode = tempRootNode;
	}

	decrement_count(environment,(V_Object) newFrame->inputList);
	decrement_count(environment,(V_Object) newFrame->outputList);
/*
	newFrame->previousFrame = NULL;
	newFrame->inputList = NULL;
	newFrame->outputList = NULL;
	newFrame->frameCase = NULL;
	newFrame->vplEditor = NULL;
	newFrame->operation = NULL;
	newFrame->methodSuccess = kNoAction;
	newFrame->caseCounter = 0;
	newFrame->repeatFlag = kFALSE;
	newFrame->repeatCounter = 0;
*/
	X_free(newFrame);	

}

V_Frame X_create_frame( V_Environment environment,V_Stack stack,V_Case currentCase,V_List inputList,V_List outputList,Int1 *methodName,Nat4 dataDriver)
{
#pragma unused(environment)

	V_Frame		newFrame = (V_Frame) X_malloc(sizeof(VPL_Frame));
	
	newFrame->previousFrame = stack->currentFrame;
	newFrame->inputList = inputList;
	newFrame->outputList = outputList;
	newFrame->frameCase = currentCase;
	newFrame->methodName = methodName;
	newFrame->dataDriver = dataDriver;
	newFrame->vplEditor = 0;
	if(currentCase && currentCase->operationsList) newFrame->operation = currentCase->operationsList[0];
	else newFrame->operation = NULL;
	if(newFrame->operation) newFrame->repeatFlag = newFrame->operation->repeat;
	else newFrame->repeatFlag = kFALSE;
	newFrame->methodSuccess = kNoAction;
	newFrame->caseCounter = 0;
	newFrame->repeatCounter = 0;
	newFrame->roots = NULL;
	newFrame->stopNow = kFALSE;
	if(newFrame->operation) newFrame->stopNext = newFrame->operation->breakPoint;
	
	return newFrame;
}

enum opTrigger X_call_operation( V_Environment environment,V_Stack stack)
{
	V_Object	tempObject = NULL;
	V_Object	previousObject = NULL;
	V_Case		*casesList = NULL;
	V_Case		currentCase = NULL;
	V_Frame		newFrame = NULL;
	Int1		*operationName = NULL;
	V_Class		tempClass = NULL;
	V_Frame		currentFrame = stack->currentFrame;
	V_Operation	currentOperation = currentFrame->operation;
	Nat4		counter = 0;
	V_List		inputList = NULL;
	V_List		outputList = NULL;
	enum opTrigger		result = kNoAction;
	Nat4		arity = 0;
	V_Value		tempValue = NULL;
	
	if(currentOperation){
		Int4		operationType = currentOperation->type;
		Nat4		inarity = currentOperation->inarity;
		Nat4		outarity = currentOperation->outarity;
		Int1		*methodName = NULL;

/* Here we need to update inputs, for lists and loops */

		if(currentOperation->valueType == kSkip || ( environment->compiled && currentOperation->valueType == kDebug ) ) operationType = kSkipped;
		else if(currentFrame->repeatFlag){
			Nat4	multiplexSize = 0;
				
			arity = currentOperation->inarity;
			for(counter = 0;counter < arity;counter++) {
				if(currentOperation->inputList[counter]->mode == iList){
					V_RootNode	theRootNode = X_get_root_node(currentFrame,currentOperation->inputList[counter]->root);
					if(theRootNode && theRootNode->object && theRootNode->object->type == kList){
						multiplexSize = ((V_List) theRootNode->object)->listLength;
						if( multiplexSize == 0) {
							operationType = kNullList;
							currentFrame->repeatFlag = kFALSE;
							break;
						}else if(multiplexSize - currentFrame->repeatCounter == 1) currentFrame->repeatFlag = kFALSE;
					} else {
						record_error("List terminal does not have list input: ",currentOperation->objectName,kERROR,environment);
	{
		Int1	*terminalIndex =integer2string( counter + 1 );
		Int1	*expectedType = VPLTypeToString(kList);
		Int1	*foundType = "NULL";
		Nat4	theFoundType = kNull;
		
		if(theRootNode && theRootNode->object) theFoundType = theRootNode->object->type;
		foundType = VPLTypeToString(theFoundType);

		record_fault(environment,
			kIncorrectListInput,			// Fault Code
			currentOperation->objectName,	// Primary String - usually primitive name
			terminalIndex,					// Terminal Index = theNode + 1
			expectedType,					// Expected Type
			foundType);						// Found Type
		X_free(terminalIndex);
		VPLPrimRecordObjectTypeError( theFoundType, kList, counter + 1, currentOperation->objectName, NULL, environment );
	}
						return kHalt;
					}
				}
			}
		}

/* Here we execute the appropriate operation */

		switch(operationType){
			case kSkipped:
				for(counter = 0;counter < outarity;counter++)
					X_set_frame_root_object(environment,currentFrame,counter,(V_Object) create_undefined(environment));

				return kSuccess;
				break;

			case kNullList:
				for(counter = 0;counter < inarity;counter++)
					if(currentOperation->inputList[counter]->mode == iLoop) {
						result = X_get_frame_terminal_object(environment,currentFrame,counter,&tempObject);
						if(result != kNOERROR) return kHalt;
						X_set_frame_root_object(environment,currentFrame,currentOperation->inputList[counter]->loopRootIndex-1,X_increment_count(tempObject));
					}

				for(counter = 0;counter < outarity;counter++)
					if(currentOperation->outputList[counter]->mode == iList) {
						V_RootNode	theRootNode = X_get_root_node(currentFrame,currentOperation->outputList[counter]);
						if(!theRootNode){
							V_RootNode	currentRoot = currentFrame->roots;
					
							theRootNode = (V_RootNode) X_malloc(sizeof(VPL_RootNode));
							theRootNode->previousNode = currentRoot;
							theRootNode->nextNode = NULL;
							theRootNode->root = currentOperation->outputList[counter];
							theRootNode->object = NULL;
							if(currentRoot) currentRoot->nextNode = theRootNode;
							currentFrame->roots = theRootNode;
						}
						decrement_count(environment,theRootNode->object);
						theRootNode->object = (V_Object) create_list(0,environment);
					}
					else if(currentOperation->outputList[counter]->mode == iSimple) X_set_frame_root_object(environment,currentFrame,counter,NULL);

				return kSuccess;
				break;

			case kInputBar:
				{
					Nat4 inputCounter = 0;

					for(counter=0;counter<outarity;counter++) {
						if(stack->currentFrame->previousFrame && inputCounter == stack->currentFrame->previousFrame->operation->inject - 1) {
							inputCounter++;
						}
						X_set_frame_root_object(environment,currentFrame,counter,X_increment_count(stack->currentFrame->inputList->objectList[inputCounter++]));
					}
				}
				return kSuccess;
				break;
			
			case kOutputBar:
				for(counter=0;counter<inarity;counter++) {
					result = X_get_frame_terminal_object(environment,currentFrame,counter,&tempObject);
					if(result != kNOERROR) return kHalt;
					stack->currentFrame->outputList->objectList[counter] =  X_increment_count(tempObject);
				}
				return kSuccess;
				break;
			
			case kConstant:
				increment_count(tempObject = currentOperation->object);
//				tempObject = string_to_object(currentOperation->stringValue,environment);
				X_set_frame_root_object(environment,currentFrame,0,tempObject);
				return kSuccess;
				break;
			
			case kMatch:
//				tempObject = currentOperation->object;
//				tempObject = string_to_object(currentOperation->stringValue,environment);
				result = X_get_frame_terminal_object(environment,currentFrame,0,&tempObject);
				if(result != kNOERROR) return kHalt;
				result = object_identity(currentOperation->object, tempObject);
//				decrement_count(environment,tempObject);
				if(result) return kSuccess;
				else return kFailure;
				break;
			
			case kPrimitive:
				{
					Int4		(*functionPtr)( V_Environment , enum opTrigger * , Nat4 , Nat4 , vpl_PrimitiveInputs );
					enum opTrigger	trigger = kSuccess;
					Nat4		primInArity = 0;
					V_Object	inputArray[32] = { NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,
													NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL,NULL };
					

					if(currentOperation->inject || currentOperation->functionPtr == NULL) {
						V_ExtPrimitive	thePrimitive = NULL;
						operationName = X_operation_name(environment,stack->currentFrame);
						thePrimitive = get_extPrimitive(environment->externalPrimitivesTable,operationName);
						X_free(operationName);
						if(thePrimitive) currentOperation->functionPtr = thePrimitive->functionPtr;
						else {
							record_error("Primitive not found: ",currentOperation->objectName,kERROR,environment);
							record_fault(environment,kNonexistentPrimitive,currentOperation->objectName,"NULL","NULL",currentFrame->methodName);
							return kHalt;
						}
					};
					functionPtr = currentOperation->functionPtr;
					primInArity = VPLEngineGetInputArity(currentFrame);
					for(counter=0;counter<primInArity;counter++){
						inputArray[counter] = VPLEngineGetInputObject(counter,currentFrame,environment);
					}
					result = (functionPtr)(environment,&trigger,primInArity,outarity,inputArray);
					for(counter=0;counter<outarity;counter++){
						X_set_frame_root_object(environment,currentFrame,counter,inputArray[counter+primInArity]);
					}
					if(result != kNOERROR) return kHalt;

					return trigger;
				}
				break;
			
			case kPersistent:

#ifdef VPL_VERBOSE_ENGINE
				result = VPLEngineCheckInputArityMin( 0, "persistent", currentFrame, environment );
				if( result != kNOERROR ) return kHalt;

				result = VPLEngineCheckInputArityMax( 1, "persistent", currentFrame, environment );
				if( result != kNOERROR ) return kHalt;

				result = VPLEngineCheckOutputArityMin( 0, "persistent", currentFrame, environment );
				if( result != kNOERROR ) return kHalt;

				result = VPLEngineCheckOutputArityMax( 1, "persistent", currentFrame, environment );
				if( result != kNOERROR ) return kHalt;
#endif

				if(VPLEngineGetInputArity(currentFrame) == 1) {
					tempObject = VPLEngineGetInputObject(0,currentFrame,environment);
//					result = X_get_frame_terminal_object(environment,currentFrame,0,&tempObject);
//					if(result != kNOERROR) return kHalt;
					if(currentOperation->columnIndex != -1 && currentOperation->inject == 0){
						Nat4			theClassIndex = currentOperation->classIndex;
						V_ClassEntry	theClassEntry = NULL;
						if(theClassIndex != -1){
							theClassEntry = environment->classIndexTable->classes[theClassIndex];
							if(theClassEntry->values[currentOperation->columnIndex] && theClassEntry->values[currentOperation->columnIndex]->type == kPersistentNode){
								previousObject = theClassEntry->values[currentOperation->columnIndex]->value->value;
								increment_count(tempObject);
								decrement_count(environment,previousObject);
								theClassEntry->values[currentOperation->columnIndex]->value->value = tempObject;
							} else {
								operationName = X_operation_name(environment,stack->currentFrame);
								tempValue = get_persistentNode(environment->persistentsTable,operationName); /* ToDo: Check for failure */
								if(tempValue == NULL){
									operationName = X_operation_name(environment,currentFrame);
									record_fault(environment,kNonexistentPersistent,operationName,"NULL","NULL",currentFrame->methodName);
									X_free(operationName);
									return kHalt;
								}
								previousObject = tempValue->value;
								increment_count(tempObject);
								decrement_count(environment,previousObject);
								result = set_persistent(environment,operationName,tempObject);
								X_free(operationName);
							}
						} else {
							operationName = X_operation_name(environment,stack->currentFrame);
							tempValue = get_persistentNode(environment->persistentsTable,operationName); /* ToDo: Check for failure */
							if(tempValue == NULL){
									operationName = X_operation_name(environment,currentFrame);
									record_fault(environment,kNonexistentPersistent,operationName,"NULL","NULL",currentFrame->methodName);
									X_free(operationName);
									return kHalt;
							}
							previousObject = tempValue->value;
							increment_count(tempObject);
							decrement_count(environment,previousObject);
							result = set_persistent(environment,operationName,tempObject);
							X_free(operationName);
						}
					} else {
						operationName = X_operation_name(environment,stack->currentFrame);
						tempValue = get_persistentNode(environment->persistentsTable,operationName); /* ToDo: Check for failure */
						if(tempValue == NULL){
									operationName = X_operation_name(environment,currentFrame);
									record_fault(environment,kNonexistentPersistent,operationName,"NULL","NULL",currentFrame->methodName);
									X_free(operationName);
									return kHalt;
						}
						previousObject = tempValue->value;
						increment_count(tempObject);
						decrement_count(environment,previousObject);
						result = set_persistent(environment,operationName,tempObject);
						X_free(operationName);
					}
				}
				if(currentOperation->outarity == 1){
					if(currentOperation->columnIndex != -1 && currentOperation->inject == 0){
						Nat4			theClassIndex = currentOperation->classIndex;
						V_ClassEntry	theClassEntry = NULL;
						if(theClassIndex != -1){
							theClassEntry = environment->classIndexTable->classes[theClassIndex];
							if(theClassEntry->values[currentOperation->columnIndex] && theClassEntry->values[currentOperation->columnIndex]->type == kPersistentNode){
								tempObject = theClassEntry->values[currentOperation->columnIndex]->value->value;

								increment_count(tempObject);
								X_set_frame_root_object(environment,currentFrame,0,tempObject);
		
								return kSuccess;
							}
						}
					}
					operationName = X_operation_name(environment,stack->currentFrame);
					tempValue = get_persistentNode(environment->persistentsTable,operationName); /* ToDo: Check for failure */
					if(tempValue == NULL){
									operationName = X_operation_name(environment,currentFrame);
									record_fault(environment,kNonexistentPersistent,operationName,"NULL","NULL",currentFrame->methodName);
									X_free(operationName);
									return kHalt;
					}
					tempObject = tempValue->value;
					X_free(operationName);
					X_set_frame_root_object(environment,currentFrame,0,X_increment_count(tempObject));
				}
				return kSuccess;
				break;
			
			case kInstantiate:
#ifdef VPL_VERBOSE_ENGINE
				result = VPLEngineCheckInputArityMin( 0, "instance", currentFrame, environment );
				if( result != kNOERROR ) return kHalt;

				result = VPLEngineCheckInputArityMax( 1, "instance", currentFrame, environment );
				if( result != kNOERROR ) return kHalt;

				result = VPLEngineCheckOutputArity( 1, "instance", currentFrame, environment );
				if( result != kNOERROR ) return kHalt;
#endif

				tempClass = NULL;
				if(currentOperation->classIndex != 0 && currentOperation->inject == 0){
					V_ClassEntry theClassEntry = environment->classIndexTable->classes[currentOperation->classIndex];
					if(theClassEntry->valid == kTRUE) tempClass = environment->classIndexTable->classes[currentOperation->classIndex]->theClass;
				} else {
					operationName = X_operation_name(environment,currentFrame);
					tempClass = get_class(environment->classTable,operationName);
					X_free(operationName);
					if(tempClass != NULL) currentOperation->classIndex = tempClass->classIndex;
				}
				if(tempClass == NULL){
					operationName = X_operation_name(environment,currentFrame);
					record_fault(environment,kNonexistentClass,operationName,"NULL","NULL",currentFrame->methodName);
					X_free(operationName);
					return kHalt;
				}
				tempObject = (V_Object) construct_instance(tempClass,environment);
				if(VPLEngineGetInputArity(currentFrame) == 1) {
					V_Object	theInputObject = VPLEngineGetInputObject(0,currentFrame,environment);
//					result = X_get_frame_terminal_object(environment,currentFrame,0,&theInputObject);
//					if(result != kNOERROR) return kHalt;
					if(theInputObject == NULL){
						operationName = X_operation_name(environment,currentFrame);
						record_fault(environment,kIncorrectType,operationName,"NULL","NULL",currentFrame->methodName);
						X_free(operationName);
						return kHalt;
					}
					if(theInputObject->type != kNone && theInputObject->type != kList){
						operationName = X_operation_name(environment,currentFrame);
						record_fault(environment,kIncorrectType,operationName,"NULL","NULL",currentFrame->methodName);
						X_free(operationName);
						return kHalt;
					}
					if(theInputObject->type == kNone){
						decrement_count(environment,theInputObject);
					} else {
						V_List	theTempList = (V_List) theInputObject;
						Nat4	theListLength = theTempList->listLength;
						for(counter=0;counter<theListLength;counter++){
							Nat4		attributeOffset = 0;
							V_Object	theTempObject = theTempList->objectList[counter];
							V_List		theInternalList = NULL;
							V_Object	theAttributeObject = NULL;
							V_Object	theObjectToSet = NULL;
							Int1		*theAttribute = NULL;
							V_Instance	tempInstance = (V_Instance) tempObject;
							Nat4	columnIndex = -1;

							if(theTempObject == NULL || theTempObject->type != kList){
								operationName = X_operation_name(environment,currentFrame);
								record_fault(environment,kIncorrectType,operationName,"NULL","NULL",currentFrame->methodName);
								X_free(operationName);
								return kHalt;
							}
							theInternalList = (V_List) theTempObject;
							if(theInternalList->listLength != 2){
								operationName = X_operation_name(environment,currentFrame);
								record_fault(environment,kIncorrectType,operationName,"NULL","NULL",currentFrame->methodName);
								X_free(operationName);
								return kHalt;
							}
							theAttributeObject = theInternalList->objectList[0];
							theObjectToSet = theInternalList->objectList[1];
							if(theAttributeObject == NULL || theAttributeObject->type != kString){
								operationName = X_operation_name(environment,currentFrame);
								record_fault(environment,kIncorrectType,operationName,"NULL","NULL",currentFrame->methodName);
								X_free(operationName);
								return kHalt;
							}
							theAttribute = ((V_String) theAttributeObject)->string;
							if(theAttribute == NULL){
								operationName = X_operation_name(environment,currentFrame);
								record_fault(environment,kIncorrectType,operationName,"NULL","NULL",currentFrame->methodName);
								X_free(operationName);
								return kHalt;
							}
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
								if(ptrM != NULL){
									X_free(tempOString);

									if(!environment->compiled && !environment->stopNext){
										V_ClassEntry	theClassEntry = environment->classIndexTable->classes[tempClass->classIndex];
										if(theClassEntry && theClassEntry->values[columnIndex]) {
											V_WatchpointNode	tempWatchpointNode = theClassEntry->values[columnIndex]->watchpointList;
				
											while(tempWatchpointNode){
												if(tempWatchpointNode->theInstance == tempInstance){
													record_fault(environment,kWatchpoint,"NULL","NULL","NULL","NULL");
													return kHalt;
												}
												tempWatchpointNode = tempWatchpointNode->previous;
											}
										}	
									}

									previousObject = ptrM->value;
									increment_count(theObjectToSet);
									decrement_count(environment,previousObject);
									ptrM->value = theObjectToSet;

								} else {
									record_error("set: Attribute: ",theAttribute,kERROR,environment);
									record_error("set: Attribute not found for: ",tempClass->name,kERROR,environment);
									record_error("set: Attribute not found in module: ","NULL",kERROR,environment);
									record_fault(environment,kNonexistentAttribute,theAttribute,tempClass->name,"NULL","NULL");
									return kHalt;
								}
							} else {
								V_Dictionary	tempDictionary = tempClass->attributes;
								Nat4			columnIndex = 0;
								V_Object		previousObject = NULL;
								if(tempDictionary != NULL && tempDictionary->numberOfNodes != tempInstance->listLength){
									record_error("set: Attribute: ",theAttribute,kERROR,environment);
									record_error("set: Attribute out of range for: ",tempClass->name,kERROR,environment);
									record_error("set: Attribute out of range in module: ","NULL",kERROR,environment);
									record_fault(environment,kNonexistentAttribute,theAttribute,tempClass->name,"NULL","NULL");
									return kHalt;
								}
								columnIndex = (Nat4) get_node(environment->valuesDictionary,theAttribute);
			
								if(!environment->compiled && !environment->stopNext){
									V_ClassEntry	theClassEntry = environment->classIndexTable->classes[tempClass->classIndex];
									if(theClassEntry && theClassEntry->values[columnIndex]) {
										V_WatchpointNode	tempWatchpointNode = theClassEntry->values[columnIndex]->watchpointList;
					
										while(tempWatchpointNode){
											if(tempWatchpointNode->theInstance == tempInstance){
												record_fault(environment,kWatchpoint,"NULL","NULL","NULL","NULL");
												return kHalt;
											}
											tempWatchpointNode = tempWatchpointNode->previous;
										}
									}	
								}	

								previousObject = tempInstance->objectList[attributeOffset];
								increment_count(theObjectToSet);
								decrement_count(environment,previousObject);
								tempInstance->objectList[attributeOffset] = theObjectToSet;
							}
						}
					}
				}
				{
					V_ClassEntry theClassEntry = environment->classIndexTable->classes[tempClass->classIndex];
					while(theClassEntry && theClassEntry->constructorIndex == -1){
						if(theClassEntry->numberOfSuperClasses) theClassEntry = environment->classIndexTable->classes[theClassEntry->superClasses[0]];
						else theClassEntry = NULL;
					}
					if(theClassEntry && theClassEntry->constructorIndex != -1) {
						V_Instance	tempInstance = (V_Instance) tempObject;
						V_Case		*initialCases = NULL;
						Int4	(*spawnPtr)(V_Environment,char *,V_List , V_List ,Int4 *);
						V_Method theConstructor = theClassEntry->methods[theClassEntry->constructorIndex];

						inputList = create_list(1,environment); // Create object, add to heap, set refcount
						put_nth(environment,inputList,1,tempObject);
						outputList = create_list(1,environment); // Create object, add to heap, set refcount

						initialCases = X_obtain_cases_by_name(environment,environment->universalsTable,theConstructor->objectName,1,1);
						if(!initialCases) {
							record_error("call_operation: Method not found: ",theConstructor->objectName,kERROR,environment);
							record_fault(environment,kNonexistentMethod,theConstructor->objectName,"NULL","NULL",currentFrame->methodName);
							return kHalt;
						}
						if(initialCases[0]->operationsList[0]->outarity != 1) {
							record_error("call_operation: Number of inputs does not match inarity of: ",theConstructor->objectName,kERROR,environment);
							record_fault(environment,kIncorrectInarity,theConstructor->objectName,"NULL","NULL",currentFrame->methodName);
							return kHalt;
						}
						if(initialCases[0]->operationsList[initialCases[0]->numberOfOperations-1]->inarity != 1) {
							record_error("call_operation: Number of outputs does not match outarity of: ",theConstructor->objectName,kERROR,environment);
							record_fault(environment,kIncorrectOutarity,theConstructor->objectName,"NULL","NULL",currentFrame->methodName);
							return kHalt;
						}
						spawnPtr = environment->stackSpawner;
						result = spawnPtr(environment,theConstructor->objectName,inputList,outputList,NULL);
						tempObject = outputList->objectList[0];
						increment_count(tempObject);
						decrement_count(environment,(V_Object) tempInstance);
						decrement_count(environment,(V_Object) inputList);
						decrement_count(environment,(V_Object) outputList);	
					}
				}
				X_set_frame_root_object(environment,currentFrame,0,tempObject);
				return kSuccess;
				break;
			
			case kLocal:
			case kUniversal:
				if(currentFrame->methodSuccess){
					currentFrame->caseCounter = 0;
					result = currentFrame->methodSuccess;
					currentFrame->methodSuccess = kNoAction;
					return result;
				} else {
					Nat4	dataDriver = 0;
					Nat4	numberOfCases = 0;
					Nat4	effectiveInarity = inarity;
					if(currentOperation->inject) effectiveInarity--;
					casesList = X_obtain_cases(environment,environment->universalsTable,stack->currentFrame,&methodName,&dataDriver,&numberOfCases);
					if(!casesList) {
						record_error("call_operation: NULL casesList!",currentOperation->objectName,kERROR,environment);
						return kHalt;
					}
					if(effectiveInarity != casesList[0]->operationsList[0]->outarity) {
						record_error("call_operation: Number of inputs does not match inarity of: ",methodName,kERROR,environment);
						record_fault(environment,kIncorrectInarity,methodName,"NULL","NULL",currentFrame->methodName);
						return kHalt;
					}
					if(casesList[0]->operationsList[casesList[0]->numberOfOperations-1]->inarity != outarity) {
						record_error("call_operation: Number of outputs does not match outarity of: ",methodName,kERROR,environment);
						record_fault(environment,kIncorrectOutarity,methodName,"NULL","NULL",currentFrame->methodName);
						return kHalt;
					}
					if(currentFrame->caseCounter >= numberOfCases) {
						record_error("call_operation: Case counter exceeds number of cases: ",methodName,kERROR,environment);
						record_fault(environment,kIncorrectCases,methodName,"NULL","NULL",currentFrame->methodName);
						return kHalt;
					}
					
					currentCase = casesList[currentFrame->caseCounter];
					inputList = create_list(inarity,environment);
					if(outarity) outputList = create_list(outarity,environment);
			
					for(counter=0;counter<inarity;counter++) {
						result = X_get_frame_terminal_object(environment,currentFrame,counter,&tempObject);
						if(result != kNOERROR) return kHalt;
						inputList->objectList[counter] = X_increment_count(tempObject);
					}

					stack->currentFrame = X_create_frame(environment,stack,currentCase,inputList,outputList,methodName,dataDriver);
					return kNoAction;
				}
				break;
			
			case kExtConstant:
				if(!currentOperation->object) {
					V_ExtConstant	extConstant =  get_extConstant(environment->externalConstantsTable,currentOperation->objectName);
					if(extConstant == NULL){
						record_fault(environment,kNonexistentConstant,currentOperation->objectName,"NULL","NULL",currentFrame->methodName);
						return kHalt;
					}
					if(extConstant->defineString != NULL) tempObject = string_to_object(extConstant->defineString,environment);
					else tempObject = currentOperation->object = (V_Object)int_to_integer(extConstant->enumInteger,environment);
				} else tempObject = currentOperation->object;
				increment_count(tempObject);
				X_set_frame_root_object(environment,currentFrame,0,tempObject);
				return kSuccess;
				break;
			
			case kExtMatch:
			{
				V_Object theObject = NULL;
				if(!currentOperation->object) {
					V_ExtConstant	extConstant = get_extConstant(environment->externalConstantsTable,currentOperation->objectName);
					if(extConstant == NULL){
						record_fault(environment,kNonexistentConstant,currentOperation->objectName,"NULL","NULL",currentFrame->methodName);
						return kHalt;
					}
					if(extConstant->defineString != NULL) tempObject = currentOperation->object = string_to_object(extConstant->defineString,environment);
					else tempObject = currentOperation->object = (V_Object) int_to_integer(extConstant->enumInteger,environment);
				} else tempObject = currentOperation->object;
				result = X_get_frame_terminal_object(environment,currentFrame,0,&theObject);
				if(result != kNOERROR) return kHalt;
				result = object_identity( theObject,tempObject);
				if(result) return kSuccess;
				else return kFailure;
			}
				break;
			
				case kGet:
					return result = execute_get( environment , stack );
					break;
				case kSet:
					return result = execute_set( environment , stack );
					break;
				case kEvaluate:
					return result = execute_evaluate( environment , stack );
					break;
				case kExtGet:
					return result = execute_extget( environment , stack );
					break;
				case kExtSet:
					return result = execute_extset( environment , stack );
					break;
				case kExtProcedure:
					return result = execute_extprocedure( environment , stack );
					break;

			default:
				break;
		}
	
	} else {
		if(stack->currentFrame->previousFrame) {
			currentFrame = stack->currentFrame->previousFrame;
			if(currentFrame->methodSuccess){
				if(stack->currentFrame->methodSuccess == kSuccess) {
				arity = currentFrame->operation->outarity;
				for(counter=0;counter<arity;counter++)
					X_set_frame_root_object(environment,currentFrame,counter,X_increment_count(stack->currentFrame->outputList->objectList[counter]));
				}
			}
		}

		newFrame = stack->currentFrame;
		stack->currentFrame = newFrame->previousFrame;
		
		X_destroy_frame(environment,newFrame);

		return kNoAction;
	}
	
	return kNoAction;
}


enum boolType X_perform_action( V_Environment environment,V_Stack stack, Int4 result)
{
	V_Frame		currentFrame = stack->currentFrame;
	V_Operation	currentOperation = NULL;

	if(currentFrame) currentOperation = currentFrame->operation;

	if(result == kNoAction) {
		if(currentFrame) return kTRUE;
		else return kFALSE;
	} else if (result == kHalt){
		return kFALSE;
	} else if(result == kFailure && currentOperation->trigger == kSuccess && currentOperation->action == kContinue){
		record_error("Execute universal-Failure but no action: ",currentOperation->objectName,kERROR,environment);
		if(currentFrame->previousFrame) record_fault(environment,kNoControl,currentFrame->previousFrame->methodName,"NULL","NULL",currentFrame->methodName);
		else record_fault(environment,kNoControl,"Top of stack","NULL","NULL",currentFrame->methodName);
		return kFALSE;
	} else if(result == currentOperation->trigger){

		switch(currentOperation->action){
			case kNextCase:
				if(currentFrame->previousFrame) currentFrame->previousFrame->caseCounter++;
				if(currentFrame->previousFrame && currentFrame->previousFrame->caseCounter >= currentFrame->frameCase->parentMethod->numberOfCases) {
						record_error("call_operation: Case counter exceeds number of cases: ",currentFrame->previousFrame->methodName,kERROR,environment);
						record_fault(environment,kIncorrectCases,currentFrame->previousFrame->methodName,"NULL","NULL",currentFrame->methodName);
						currentFrame->previousFrame->caseCounter--;	// Need to reset the caseCounter especially during debugging
						return kFALSE;
				}
				currentFrame->operation = NULL;
				currentFrame->methodSuccess = kFailure;
				return kTRUE;
				break;

			case kFail:

/* Set the parent method success to Fail, then stop the execution of the case and instruct the parent method to stop repeating. */

				if(currentFrame->previousFrame) {
					currentFrame->previousFrame->methodSuccess = kFailure;
					currentFrame->previousFrame->repeatFlag = kFALSE;
				}
				currentFrame->operation = NULL;
				currentFrame->methodSuccess = kFailure;
				return kTRUE;
				break;

			case kTerminate:

/* Stop the execution of the case and instruct the parent method to stop repeating. */

				if(currentFrame->previousFrame) {
					currentFrame->previousFrame->methodSuccess = kSuccess;
					currentFrame->previousFrame->repeatFlag = kFALSE;
				}
				currentFrame->operation = NULL;
				currentFrame->methodSuccess = kFailure;
				return kTRUE;
				break;

			case kFinish:

/* Instruct the parent method to stop repeating, but allow the case operation pointer to
continue to increment or repeat. */

				if(currentFrame->previousFrame) currentFrame->previousFrame->repeatFlag = kFALSE;
			case kContinue:

/* If repeating, increment the counter, otherwise go to the next operation block. */

				if(currentFrame->repeatFlag && currentOperation->repeat) currentFrame->repeatCounter++;
				else {
					currentFrame->repeatCounter = 0; /* ToDo: Find a better place for this */
					{
						V_Case		theCase = currentFrame->frameCase;
						Nat4		counter = 0;
						
						while(theCase->operationsList[counter++] != currentOperation) {}
						if(counter < theCase->numberOfOperations) {
							currentOperation = currentFrame->operation = theCase->operationsList[counter];
							currentFrame->methodSuccess = kNoAction;
							currentFrame->caseCounter = 0;
							currentFrame->repeatFlag = currentOperation->repeat;
							currentFrame->repeatCounter = 0;
							if(currentOperation->breakPoint == kTRUE) currentFrame->stopNext = currentOperation->breakPoint;
						} else {
							currentOperation = currentFrame->operation = NULL;
//							currentFrame->methodSuccess = kNoAction;
							currentFrame->methodSuccess = kSuccess;
							currentFrame->caseCounter = 0;
							currentFrame->repeatFlag = kFALSE;
							currentFrame->repeatCounter = 0;
							currentFrame->stopNext = kFALSE;
						}
					}
				}
				if(!currentOperation && currentFrame->previousFrame) currentFrame->previousFrame->methodSuccess = kSuccess;

				return kTRUE;
				break;
			
			default:
				break;
		}
	} else {

/* If repeating, increment the counter, otherwise go to the next operation block. */

				if(currentFrame->repeatFlag && currentOperation->repeat) currentFrame->repeatCounter++;
				else {
					currentFrame->repeatCounter = 0; /* ToDo: Find a better place for this */
					{
						V_Case		theCase = currentFrame->frameCase;
						Nat4		counter = 0;
						
						while(theCase->operationsList[counter++] != currentOperation) {}
						if(counter < theCase->numberOfOperations) {
							currentOperation = currentFrame->operation = theCase->operationsList[counter];
							currentFrame->methodSuccess = kNoAction;
							currentFrame->caseCounter = 0;
							currentFrame->repeatFlag = currentOperation->repeat;
							currentFrame->repeatCounter = 0;
							if(currentOperation->breakPoint == kTRUE) currentFrame->stopNext = currentOperation->breakPoint;
						} else {
							currentOperation = currentFrame->operation = NULL;
//							currentFrame->methodSuccess = kNoAction;
							currentFrame->methodSuccess = kSuccess;
							currentFrame->caseCounter = 0;
							currentFrame->repeatFlag = kFALSE;
							currentFrame->repeatCounter = 0;
							currentFrame->stopNext = kFALSE;
						}
					}
				}
				if(!currentOperation && currentFrame->previousFrame) currentFrame->previousFrame->methodSuccess = kSuccess;

		return kTRUE;
	}
	return kFALSE;
}


enum errorType X_execute_stack( V_Environment environment,V_Stack stack)
{
	enum opTrigger	result = kNoAction;
	enum boolType	dontStop = kTRUE;
	while(dontStop) {
		result = X_call_operation(environment,stack);
		dontStop = X_perform_action(environment,stack,result);
	}
	if(result == kHalt) return kERROR;
	else return kNOERROR;
}

V_Case X_create_shell_case_for_universal(V_Environment environment,char *initial,V_List inputList, V_List outputList)
{
	Int4		result = 0;
	V_Case		ptrA = NULL;
	Nat4		counter = 0;
	V_Operation			tempOperation = NULL;
	V_Operation			tempInputBar = NULL;
	V_Operation			tempOutputBar = NULL;
	V_Root				tempRoot = NULL;
	V_Terminal			tempTerminal = NULL;

	ptrA = create_case(0);

	tempInputBar = operation_add(ptrA,environment);
	tempInputBar = operation_to_input_bar(tempInputBar,environment);
	if(inputList != NULL){
		for(counter = 0; counter < inputList->listLength; counter++) {
			tempRoot = output_insert(0,tempInputBar,environment);
		}
	}
	
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_universal(tempOperation,environment,initial);
	if(inputList != NULL){
		for(counter = 0; counter < inputList->listLength; counter++){
			tempTerminal = input_insert(0,tempOperation,environment);	
		}
	}
	if(outputList != NULL){
		for(counter = 0; counter < outputList->listLength; counter++) {
			tempRoot = output_insert(0,tempOperation,environment);
		}
	}

	tempOutputBar = operation_add(ptrA,environment);
	tempOutputBar = operation_to_output_bar(tempOutputBar,environment);
	if(outputList != NULL){
		for(counter = 0; counter < outputList->listLength; counter++){
			tempTerminal = input_insert(0,tempOutputBar,environment);	
		}
	}

	if(inputList != NULL){
		for(counter = 0; counter < inputList->listLength; counter++) {
			result = connect_root_to_terminal(ptrA,counter+1,0,counter+1,1);
		}
	}
	if(outputList != NULL){
		for(counter = 0; counter < outputList->listLength; counter++) {
			result = connect_root_to_terminal(ptrA,counter+1,1,counter+1,2);
		}
	}

	return ptrA;
}

Int4 X_spawn_stack(V_Environment environment,char *initial,V_List inputList, V_List outputList,Int4 *success)
{ 
	enum errorType	result = kNOERROR;
	
	V_Case		initialCase = NULL;
	

	V_Stack		stack = createStack();
	
	addStack(environment,stack);

	initialCase = X_create_shell_case_for_universal(environment,initial,inputList,outputList);
				
	stack->currentFrame = X_create_frame(environment,stack,initialCase,inputList,outputList,NULL,0);
	X_increment_count((V_Object) inputList);	/* When X_execute_stack pops the final frame, the list will be decremented */
	X_increment_count((V_Object) outputList);	/* so "pre-increment" to avoid garbage collection */

/* Execute Stack */
	result = X_execute_stack(environment,stack);
	if(result != kNOERROR) return result;

/* Clean Up */
	result = destroy_stack(environment,stack);
	if(result != kNOERROR) return result;
	result = destroy_case(environment,initialCase);
	if(result != kNOERROR) return result;
	
	if(success) *success = kSuccess;
	
	return kNOERROR;
}
/*
extern Int4 vpx_spawn_stack(V_Environment environment,char *initial,V_List inputList, V_List outputList,Int4 *success);

Int4 initialize_environment(V_Environment environment, int stackType, char *initial)
{ 
	Int4		result = 0;
	V_List		inputList = NULL;
	V_List		outputList = NULL;
	Int4		(*spawnPtr)(V_Environment,char *,V_List , V_List ,Int4 *);
	
	if( environment->postLoad == kFALSE )
		result = post_load(environment);

	if( stackType == 1) sort_dictionaries(environment);			// kvpl_StackRuntime only
	
	if( environment->callbackHandler == NULL ) environment->callbackHandler = MacVPLCallbackHandler;
	if( environment->stackSpawner == NULL ) {
		switch (stackType) {
		case 1:			//kvpl_StackRuntime
			environment->stackSpawner = X_spawn_stack;
			break;
			
		case 2:			//kvpl_StackInline
			environment->stackSpawner = vpx_spawn_stack;
			environment->logging = kFALSE;		// turn off logging for inlines!
			break;
		
		default:
			return kERROR;
		}
	}
	environment->compiled = kTRUE;
		
	if( initial != NULL ) {
		inputList = create_list(0,environment);	
		outputList = create_list(0,environment);

	// Execute Stack 
		spawnPtr = environment->stackSpawner;
		result = spawnPtr(environment,initial,inputList,outputList,NULL);

		decrement_count(environment,(V_Object) inputList);
		decrement_count(environment,(V_Object) outputList);	
	}
	
	return kNOERROR;
}
*/

Int4 execute_environment(V_Environment environment,char *initial,int argc, char *argv[])
{ 
	Int4	result = 0;
	
	V_List				argumentList = NULL;
	V_List				inputList = NULL;
	V_List				outputList = NULL;
	Int4				err = kNOERROR;
	Nat4				counter = 0;
	Int4	(*spawnPtr)(V_Environment,char *,V_List , V_List ,Int4 *);
	V_Object			outputValue;
	
//	sort_dictionaries(environment);
//	environment->callbackHandler = MacVPLCallbackHandler;
//	environment->stackSpawner = X_spawn_stack;
//	environment->compiled = kTRUE;

	if( environment->stackSpawner == NULL ) return kERROR;
//		initialize_environment( environment, 1, NULL );
	
	argumentList = create_list(argc,environment);
	for(counter = 0;counter<argc;counter++) {
		*(argumentList->objectList+counter) = (V_Object) create_string(argv[counter],environment);
	}
	
	inputList = create_list(1,environment);
	*inputList->objectList = (V_Object) argumentList;
	
	outputList = create_list(1,environment);

/* Execute Stack */
	spawnPtr = environment->stackSpawner;
	result = spawnPtr(environment,initial,inputList,outputList,NULL);

/* Extract Output? */
	if( outputList->listLength >= 1 ) {
		outputValue = (V_Object) outputList->objectList[0];
		if( outputValue != NULL ) {
		switch( outputValue->type ) {
			case kInteger:
				err = ((V_Integer) outputValue)->value;
				break;
			case kBoolean:
				err = (Int4)((V_Boolean) outputValue)->value;
				break;
			case kReal:
				err = (Int4)((V_Real) outputValue)->value;
				break;
			case kString:
				err = atol( ((V_String) outputValue)->string );
				break;
			default:
				err = kNOERROR;
				break;
			}
		}
	}
				
/* Clean Up */
	decrement_count(environment,(V_Object) inputList);
	decrement_count(environment,(V_Object) outputList);	

//	result = destroy_environment(environment,kFALSE,kFALSE);
	result = destroy_environment(environment,environment->logging,kFALSE);

	return err;
}

Int4 destroy_stack(V_Environment environment, V_Stack stack)
{

	V_Frame			theFrame = NULL;
	Int1			*stringBuffer = NULL;
	
	if(stack == NULL){
		record_error("NULL stack: "," in environment",kERROR,environment);
		return kNOERROR;
	}
	
/*
What could happen is that destroy_stack is interrupted as: Let stackZ->next = stackA and stackA->next = stackB and stackB->next == stackC initially

	(stackA->previousStack))->nextStack = stackA->nextStack;                            stackZ->next = stackB
		(stackB->previousStack))->nextStack = stackB->nextStack;                        stackA->next = stackC
		(stackB->nextStack))->previousStack = stackB->previousStack;                    stackC->previous = stackA
	(stackA->nextStack))->previousStack = stackA->previousStack;                        stackC->previous = stackZ
			
which would leave stackZ pointing to non-existent stackB and stackC pointing back correctly to stackZ!
		
*/
	

#ifdef _POSIX_THREADS
	pthread_mutex_lock(&gStackLock);
#endif

	if(stack->previousStack != NULL){
				( (V_Stack) (stack->previousStack))->nextStack = stack->nextStack;
	}
	if(stack->nextStack != NULL){
				( (V_Stack) (stack->nextStack))->previousStack = stack->previousStack;
	}
	if(environment->stack == stack){
				environment->stack = ( V_Stack) stack->nextStack;
	}


#ifdef _POSIX_THREADS
	pthread_mutex_unlock(&gStackLock);
#endif

	while(stack->currentFrame != NULL) {
		theFrame = stack->currentFrame;
		if(theFrame && theFrame->methodName) stringBuffer = theFrame->methodName;
		else if(theFrame && theFrame->previousFrame && theFrame->previousFrame->operation->type == kLocal) stringBuffer = theFrame->previousFrame->operation->objectName;
		else stringBuffer = "Local";
		record_error("Frame: ",stringBuffer,kERROR,environment);
		stack->currentFrame = theFrame->previousFrame;
		X_destroy_frame(environment,theFrame);
	}

	X_free(stack);
	return kNOERROR;
}

Int4 destroy_environment(V_Environment environment, V_Bool printFlag, V_Bool interpreterFlag)
{
	Nat4		finalHeapSize = 0;
	Int4		result = 0;

	V_Stack			stack = NULL;	
	V_Stack			nextStack = NULL;	
	V_CallbackCodeSegment			currentSegment = NULL;	
	V_CallbackCodeSegment			tempSegment = NULL;	

	V_Object		tempObject = NULL;
	Int1			*tempString = NULL;
	
	nextStack = stack = environment->stack;
	while(nextStack != NULL) {
			nextStack = (V_Stack) stack->nextStack;
			if(nextStack != NULL) nextStack->previousStack = NULL;
			destroy_stack(environment,stack);
			stack = nextStack;
	}

	environment->stack = NULL;

	destroy_persistentsTable(environment->persistentsTable,environment);
	environment->persistentsTable = NULL;

	destroy_classTable(environment->classTable,environment);
	environment->classTable = NULL;

	destroy_methodsTable(environment,environment->universalsTable);
	environment->universalsTable = NULL;

	{
		V_DictionaryNode	*tempPersistentPtr = NULL;
		Nat4		counter = 0;

		if(environment->methodsDictionary->numberOfNodes != 0){
			tempPersistentPtr = environment->methodsDictionary->nodes;
			for(counter = 0; counter < environment->methodsDictionary->numberOfNodes; counter++)
			{
				if(*tempPersistentPtr != NULL) {
					X_free((*tempPersistentPtr)->name);
					X_free(*tempPersistentPtr++);
				}
			}
		}
		X_free(environment->methodsDictionary->nodes);
		X_free(environment->methodsDictionary);
	}
	environment->methodsDictionary = NULL;
	
	{
		V_DictionaryNode	*tempPersistentPtr = NULL;
		Nat4		counter = 0;

		if(environment->valuesDictionary->numberOfNodes != 0){
			tempPersistentPtr = environment->valuesDictionary->nodes;
			for(counter = 0; counter < environment->valuesDictionary->numberOfNodes; counter++)
			{
				if(*tempPersistentPtr != NULL) {
					X_free((*tempPersistentPtr)->name);
					X_free(*tempPersistentPtr++);
				}
			}
		}
		X_free(environment->valuesDictionary->nodes);
		X_free(environment->valuesDictionary);
	}
	environment->valuesDictionary = NULL;
	
	destroy_extConstantTable(environment->externalConstantsTable,environment);
	environment->externalConstantsTable = NULL;

	destroy_extStructureTable(environment->externalStructsTable,environment);
	environment->externalStructsTable = NULL;

	destroy_extProcedureTable(environment->externalProceduresTable,environment);
	environment->externalProceduresTable = NULL;

	destroy_extPrimitiveTable(environment->externalPrimitivesTable,environment);
	environment->externalPrimitivesTable = NULL;

	destroy_extTypeTable(environment->externalTypesTable,environment);
	environment->externalTypesTable = NULL;
	
	destroy_classIndexTable(environment->classIndexTable,environment);
	environment->classIndexTable = NULL;
	
	currentSegment = environment->segments;
	while(currentSegment != NULL)
	{
		tempSegment = currentSegment;
		currentSegment = currentSegment->next;
		X_free(tempSegment);
	}
	environment->segments = NULL;

	tempObject = environment->heap->previous;
	if(tempObject == NULL) finalHeapSize = 0;
	else{
		finalHeapSize = 0;
		while(tempObject->previous != NULL && finalHeapSize < MAX_HEAP_SIZE) {
/*			object_details(environment,tempObject); */
			tempObject = (V_Object) tempObject->previous;
			finalHeapSize++;
		}
		object_details(environment,tempObject);
	finalHeapSize++;
	}
	
	if(finalHeapSize != 0){
		tempString = integer2string( finalHeapSize );
		record_error("Objects left in heap: ",tempString,kERROR,environment);
		X_free(tempString);
		tempString = NULL;
	}
	X_free(environment->heap);
	environment->heap = NULL;
	
	if(environment->theFault){
		X_free(environment->theFault->primaryString);
		X_free(environment->theFault->secondaryString);
		X_free(environment->theFault->moduleName);
	}
	X_free(environment->theFault);

	VPLLog_Environment_Report( printFlag, interpreterFlag, environment );

/*
	ptrR = environment->lastError;
	if(ptrR != NULL){
		while(ptrR != NULL) {
			ptrQ = (V_ErrorNode) ptrR->previous;
			if(printFlag == kTRUE && interpreterFlag == kTRUE) printf("\n? Engine error: %s\n", ptrR->errorString);
			if(printFlag == kTRUE && interpreterFlag == kFALSE) printf("\n< %s\n", ptrR->errorString);
			X_free(ptrR->errorString);
			X_free(ptrR);
			ptrR = ptrQ;
		}
	}
*/
	X_free(environment);

#ifdef _POSIX_THREADS
	pthread_mutex_destroy(&gHeapLock);
	pthread_mutex_destroy(&gStackLock);
	pthread_mutex_destroy(&gCallbackLock);
#endif
	return result;
}

Int4 object_details( V_Environment environment, V_Object object )
{

	V_Undefined 		undefined = NULL;
	V_None		 		none = NULL;
	V_Boolean	 		boolean = NULL;
	V_Integer	 		integer = NULL;
	V_Real		 		real = NULL;
	V_String	 		string = NULL;
	V_List		 		list = NULL;
	V_Instance	 		instance = NULL;
	V_ExternalBlock 	external = NULL;
	Int1				*tempString = "address";

	if(object != NULL){
	switch(object->type){
		case kObject:
			break;
		case kUndefined:
			undefined = (V_Undefined) object;
			record_error("Object is Undefined: ",tempString,kERROR,environment);
			break;
		case kNone:
			none = (V_None) object;
			record_error("Object is None: ",tempString,kERROR,environment);
			break;
		case kBoolean:
			boolean = (V_Boolean) object;
			record_error("Object is Boolean: ",tempString,kERROR,environment);
			break;
		case kInteger:
			integer = (V_Integer) object;
			record_error("Object is Integer: ",tempString,kERROR,environment);
			break;
		case kReal:
			real = (V_Real) object;
			record_error("Object is Real: ",tempString,kERROR,environment);
			break;
		case kString:
			string = (V_String) object;
			record_error("Object is String: ",string->string,kERROR,environment);
			break;
		case kList:
			list = (V_List) object;
			record_error("Object is List: ",tempString,kERROR,environment);
			break;
		case kInstance:
			instance = (V_Instance) object;
			record_error("Object is Instance: ",instance->name,kERROR,environment);
			break;
		case kExternalBlock:
			external = (V_ExternalBlock) object;
			record_error("Object is ExternalBlock: ",tempString,kERROR,environment);
			break;
	}
	}

	return kNOERROR;
}

Int4 post_load( V_Environment environment)
{
	Nat4			counter = 0;
	V_Class			tempClass = NULL;
	V_Value			tempPersistent = NULL;
	V_Dictionary	classTable = environment->classTable;
	V_Dictionary	persistentTable = environment->persistentsTable;

	for(counter = 0;counter<classTable->numberOfNodes;counter++){
		tempClass = (V_Class) classTable->nodes[counter]->object;
		tempClass = class_unarchive(tempClass,environment);
	}

	for(counter = 0;counter<persistentTable->numberOfNodes;counter++){
		tempPersistent = (V_Value) persistentTable->nodes[counter]->object;
		tempPersistent = persistent_unarchive(tempPersistent,environment);
	}

	environment->postLoad = kTRUE;
	
	return kNOERROR;
}


