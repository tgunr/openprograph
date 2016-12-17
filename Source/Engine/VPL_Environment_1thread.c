/*
	
	VPL_Environment.c
	Copyright 2000 Scott B. Anderson, All Rights Reserved.
	
*/
#include <stdlib.h>
#include <string.h>

#include "VPL_Environment.h"

extern	void MacVPLCallbackHandler(void);
extern V_ClassEntry VPL_classEntry_create(V_Environment environment,V_Class theClass,Nat4 valid);

Int1 *new_string( Int1 *string , V_Environment environment )
{
#pragma unused(environment)

	Int1	*tempCString = NULL;
	Nat4	length = 0;

	if(string == NULL) return NULL;
	length = strlen(string);
	if(length != 0){
		tempCString = (Int1 *)X_malloc((length+1)*sizeof(Int1));
		strcpy(tempCString,string);
	} else {
		tempCString = (Int1 *)X_malloc(sizeof(Int1));
		tempCString[0] = '\0';
	}
	
	return tempCString;
}

Int1 *new_cat_string( Int1 *error, Int1 *module , V_Environment environment )
{
	Int1	*tempCString = NULL;
	Nat4	length = 0;

	if(module != NULL){
		length = strlen(error);
		length += strlen(module);
		tempCString = (Int1 *)X_malloc((length+1)*sizeof(Int1));
		tempCString = strcpy(tempCString,error);
		tempCString = strcat(tempCString,module);
	} else tempCString = new_string(error,environment);
	
	return tempCString;
}

Int4 record_error(Int1 *error, Int1 *module, Int4 errorCode, V_Environment environment)
{
	V_ErrorNode	ptrA = NULL;
	Nat4		length = 0;
	
	ptrA = (V_ErrorNode) X_malloc(sizeof (VPL_ErrorNode));
	if(module != NULL){
		length = strlen(error);
		length += strlen(module);
		ptrA->errorString = (Int1 *)X_malloc((length+1)*sizeof(Int1));
		ptrA->errorString = strcpy(ptrA->errorString,error);
		ptrA->errorString = strcat(ptrA->errorString,module);
	} else ptrA->errorString = new_string(error,environment);
//	printf("\n# Record Error: %s\n",  ptrA->errorString);
	if( environment->logging == kTRUE ) VPLLogEngineError( ptrA->errorString, !environment->compiled, environment );
	ptrA->errorCode = errorCode;
	ptrA->previous = (struct VPL_ErrorNode *) environment->lastError;
	environment->lastError = ptrA;

	return errorCode;
}

Int4 dispose_fault(V_Environment environment)
{
	if(environment->theFault){
		X_free(environment->theFault->primaryString);
		X_free(environment->theFault->secondaryString);
		X_free(environment->theFault->operationName);
		X_free(environment->theFault->moduleName);
	}
	X_free(environment->theFault);
	environment->theFault = NULL;
	
	return kNOERROR;
}

enum opTrigger record_fault(V_Environment environment, enum faultCode faultCode, Int1 *primaryString, Int1 *secondaryString, Int1 *operationName, Int1 *moduleName)
{
	dispose_fault(environment);

	environment->theFault = X_malloc(sizeof(VPL_Fault));
	environment->theFault->theFaultCode = faultCode;
	if(primaryString) environment->theFault->primaryString = new_string(primaryString,environment); else environment->theFault->primaryString = new_string("NULL",environment);
	if(secondaryString) environment->theFault->secondaryString = new_string(secondaryString,environment); else environment->theFault->secondaryString = new_string("NULL",environment);
	if(operationName) environment->theFault->operationName = new_string(operationName,environment); else environment->theFault->operationName = new_string("NULL",environment);
	if(moduleName) environment->theFault->moduleName = new_string(moduleName,environment); else environment->theFault->moduleName = new_string("NULL",environment);
	
	return kHalt;
}

V_Stack createStack(void)
{
	V_Stack ptrA = (V_Stack) X_malloc(sizeof (VPL_Stack));
	ptrA->previousStack = NULL;
	ptrA->nextStack = NULL;
	ptrA->stackDepth = 0;
	ptrA->maxStackDepth = 0;
	ptrA->currentFrame = NULL;

	return ptrA;
}

V_Environment createEnvironment(void)
{
	V_Environment ptrE = (V_Environment) X_malloc(sizeof (VPL_Environment));

	ptrE->theFault = NULL;
	ptrE->lastError = NULL;
	ptrE->heap = createHeap();
	ptrE->stack = NULL;
	ptrE->classTable = create_dictionary(0);
	ptrE->universalsTable = create_dictionary(0);
	ptrE->persistentsTable = create_dictionary(0);
	ptrE->methodsDictionary = create_dictionary(0);
	ptrE->valuesDictionary = create_dictionary(0);
	ptrE->externalConstantsTable = create_dictionary(0);
	ptrE->externalStructsTable = create_dictionary(0);
	ptrE->externalGlobalsTable = create_dictionary(0);
	ptrE->externalProceduresTable = create_dictionary(0);
	ptrE->externalPrimitivesTable = create_dictionary(0);
	ptrE->externalTypesTable = create_dictionary(0);

	ptrE->totalMethods = 0; // Must be initialized before creation of the class index table
	ptrE->totalValues = 0;

	ptrE->classIndexTable = (V_ClassIndexTable) X_malloc(sizeof(VPL_ClassIndexTable));
	ptrE->classIndexTable->numberOfClasses = 0;
	ptrE->classIndexTable->classes = (V_ClassEntry *) X_malloc(sizeof(V_ClassEntry));
	ptrE->classIndexTable->classes[0] = VPL_classEntry_create(ptrE,NULL,kTRUE);
	ptrE->classIndexTable->numberOfClasses = 1;

	ptrE->callbackHandler = NULL;
	ptrE->stackSpawner = NULL;
	ptrE->interpreterCallbackHandler = NULL;
	ptrE->segments = NULL;
	ptrE->stopNext = kFALSE;
	ptrE->postLoad = kFALSE;
	ptrE->interpreterMode = kProcess;
	ptrE->editorThreadID = 0;
	ptrE->interpreterThreadID = 0;
	ptrE->pipeWriteFileDescriptor = 0;
	ptrE->pipeReadFileDescriptor = 0;

	return ptrE;
}

Nat4 addStack(V_Environment ptrE, V_Stack stack)
{
	if(ptrE->stack == NULL){
		ptrE->stack = stack;
		stack->previousStack = NULL;
		stack->nextStack = NULL;
	}else{
		(ptrE->stack)->previousStack = (struct VPL_Stack *) stack;
		stack->nextStack = (struct VPL_Stack *) ptrE->stack;
		ptrE->stack = stack;
		stack->previousStack = NULL;
	}

	return FALSE;
}

V_Heap createHeap(void)
{
	V_Heap ptrA = (V_Heap) X_malloc(sizeof (VPL_Heap));
	ptrA->next = NULL;
	ptrA->previous = NULL;
	ptrA->listLength = 0;
	ptrA->maxLength = 0;

	return ptrA;
}

Nat4 sort_dictionaries(V_Environment ptrE )
{
	V_Dictionary	tempDictionary = NULL;

	tempDictionary = ptrE->classTable;
	sort_dictionary(tempDictionary);

	tempDictionary = ptrE->universalsTable;
	sort_dictionary(tempDictionary);

	tempDictionary = ptrE->persistentsTable;
	sort_dictionary(tempDictionary);

	tempDictionary = ptrE->methodsDictionary;
	sort_dictionary(tempDictionary);

	tempDictionary = ptrE->valuesDictionary;
	sort_dictionary(tempDictionary);

	tempDictionary = ptrE->externalConstantsTable;
	sort_dictionary(tempDictionary);

	tempDictionary = ptrE->externalStructsTable;
	sort_dictionary(tempDictionary);

	tempDictionary = ptrE->externalProceduresTable;
	sort_dictionary(tempDictionary);

	tempDictionary = ptrE->externalPrimitivesTable;
	sort_dictionary(tempDictionary);

	tempDictionary = ptrE->externalTypesTable;
	sort_dictionary(tempDictionary);

	return 0;
}


