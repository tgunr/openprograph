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

#ifdef _POSIX_THREADS
void __VPLExitThread(void* space)
{
	V_ThreadSpace	theThread = (V_ThreadSpace)space;
	
	if (theThread) {
		V_ThreadSpace	lastThread = theThread->previousThread;
		V_ThreadSpace	replaceThread = theThread->nextThread;
		
		pthread_mutex_lock(&gThreadsLock);

		if( lastThread == NULL )
			theThread->threadEnvironment->threads = replaceThread;
		else {
			lastThread->nextThread = replaceThread;
			replaceThread->previousThread = lastThread;
		}

		pthread_mutex_unlock(&gThreadsLock);
		
		/* TODO: Merge in lists to main? */
		
		X_free( theThread );
	}
}
#endif

V_ThreadSpace createThread(V_Environment environment)
{
	V_ThreadSpace	theThread = (V_ThreadSpace) X_malloc(sizeof(VPL_ThreadSpace));
	Nat4			theThreadID = 0;
	
	if( theThread ) {
#ifdef _POSIX_THREADS
		theThreadID = (Nat4)pthread_self();
#endif
	
		theThread->thisThread = theThreadID;
		theThread->theFault = NULL;
		theThread->lastError = NULL;
		theThread->heap = createHeap();
		theThread->stack = NULL;
		theThread->segments = NULL;
		theThread->stopNext = kFALSE;
		theThread->threadEnvironment = environment;
		theThread->previousThread = NULL;
		theThread->nextThread = NULL;

#ifdef _POSIX_THREADS
	pthread_cleanup_push( __VPLExitThread, theThread )

		return theThread;
			
	pthread_cleanup_pop( FALSE )
#endif
	}
	return theThread;
}

V_ThreadSpace acquireThread(V_Environment environment)
{
	V_ThreadSpace	outSpace = environment->threads;
	
#ifdef _POSIX_THREADS
{
	Nat4			ourID = (Nat4) pthread_self();
	V_ThreadSpace	workThread = outSpace;
	V_ThreadSpace	foundThread = NULL;
	
	/* First try and find our thread */

	while( (foundThread == NULL) && (workThread != NULL)) 
	{
		if( workThread->thisThread == ourID )
			foundThread = workThread;
		else
			workThread = workThread->nextThread;
	}
	
	/* Didn't find it so make and insert a new one */
	
	if (foundThread == NULL)
	{
		foundThread = createThread(environment);
		workThread = outSpace;
		
		pthread_mutex_lock(&gThreadsLock);
		
		while (workThread != NULL) 
			if (workThread->nextThread == NULL) {
				workThread->nextThread = foundThread;
				foundThread->previousThread = workThread;
				workThread == NULL;
			} else 
				workThread = workThread->nextThread;

		pthread_mutex_unlock(&gThreadsLock);
	}
	
	outSpace = foundThread;
}	
#endif
	
	return outSpace;
}

typedef int *vpl_IterateHeapProc(V_ThreadSpace theSpace, V_Heap theHeap, void* procData);
int	iterateHeaps( V_Environment	environment, int doReversed, vpl_IterateHeapProc* doProc, void* procData );

int	iterateHeaps( V_Environment	environment, int doReversed, vpl_IterateHeapProc* doProc, void* procData )
{
	int				outStatus = 1;
	int				procStatus = 0;
	V_ThreadSpace	thisSpace = acquireThread(environment);
	V_ThreadSpace	currentSpace = thisSpace;
	V_Heap			currentHeap = currentSpace->heap;
	V_Heap			workHeap = currentHeap;
	int				doNext = 1;
	int				firstPass = 1;
	
	if( doProc == NULL ) return procStatus;
	
	if( doReversed ) {
		while (workHeap != NULL) {
			currentHeap = (V_Heap)workHeap->next;
			if (currentHeap == NULL) {
				currentHeap = workHeap;
				workHeap = NULL;
			} else 
				workHeap = currentHeap;
		}
		currentHeap = workHeap;
	}
	
	while( (procStatus == 0) && (currentSpace) )
	{
		if( currentHeap )
			procStatus = (int)doProc( currentSpace, currentHeap, procData );
		
		if( procStatus == 0 )
		{
			if (doReversed && currentHeap)
				currentHeap = (V_Heap)currentHeap->previous;
			else 
				currentHeap = (V_Heap)currentHeap->next;
			
			if (currentHeap == NULL) {
				if (firstPass) {
					firstPass = 0;

					pthread_mutex_lock(&gThreadsLock);

					currentSpace = environment->threads;
					currentHeap = currentSpace->heap;
				} else {
					currentSpace = currentSpace->nextThread;
					if (currentSpace == NULL)
						currentHeap = NULL;
					else 
						currentHeap = currentSpace->heap;
					
					if( currentSpace == thisSpace )
						currentHeap = NULL;
				}
				
				workHeap = currentHeap;
				
				if( doReversed ) {
					while (workHeap != NULL) {
						currentHeap = (V_Heap)workHeap->next;
						if (currentHeap == NULL) {
							currentHeap = workHeap;
							workHeap = NULL;
						} else 
							workHeap = currentHeap;
					}
					currentHeap = workHeap;
				}
			}
		}
		outStatus = procStatus;
	}
	
	if (!firstPass) 
		pthread_mutex_unlock(&gThreadsLock);
	
	return outStatus;
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
	ptrE->threads = createThread(ptrE);
	
#ifdef _POSIX_THREADS
	pthread_mutex_init(&gHeapLock, NULL);
	pthread_mutex_init(&gStackLock, NULL);
	pthread_mutex_init(&gCallbackLock, NULL);
	pthread_mutex_init(&gThreadsLock, NULL);
#endif

	return ptrE;
}

Nat4 addStack(V_Environment ptrE, V_Stack stack)
{
/*
What could happen is that addStack is interrupted as so: Let ptrE->stack = stackC initially

	(ptrE->stack)->previousStack = (struct VPL_Stack *) stackA;        stackC->previous = stackA
	stackA->nextStack = (struct VPL_Stack *) ptrE->stack;              stackA->next = stackC
		(ptrE->stack)->previousStack = (struct VPL_Stack *) stackB;    stackC->previous = stackB
		stackB->nextStack = (struct VPL_Stack *) ptrE->stack;          stackB->next = stackC
		ptrE->stack = stackB;                                          ptrE->stack = stackB
		stackB->previousStack = NULL;                                  stackB->previous = NULL
	ptrE->stack = stackA;                                              ptrE->stack = stackA
	stackA->previousStack = NULL;                                      stackA->previous = NULL
			
which would leave stackA pointing to stackC but stackC pointing back to stackB!
		
*/
	
#ifdef _POSIX_THREADS
	pthread_mutex_lock(&gStackLock);
#endif

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

#ifdef _POSIX_THREADS
	pthread_mutex_unlock(&gStackLock);
#endif

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

