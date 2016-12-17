/*
	
	VPL_Environment.h
	Copyright 2000 Scott B. Anderson, All Rights Reserved.
	
*/

#ifndef VPLENVIRONMENT
#define VPLENVIRONMENT

#define MAXSTACKDEPTH 200

#include "VPL_Dictionary.h"

#include <unistd.h>
#ifdef _POSIX_THREADS
#include <pthread.h>
static pthread_mutex_t gHeapLock; 
static pthread_mutex_t gStackLock; 
static pthread_mutex_t gCallbackLock; 
static pthread_mutex_t gThreadsLock;
#endif

enum errorType {
	kNOERROR = 0,
	kERROR = 1,
	kWRONGINARITY = 2,
	kWRONGOUTARITY = 3,
	kWRONGINPUTTYPE = 4
};

enum multiplexType {
	kEmptyList = 0,
	kSingleton = 1,
	kPlural = 2
};

enum interpreterModeType {
	kThread,
	kProcess
};

typedef struct VPL_Environment *V_Environment;
typedef struct VPL_Object *V_Object;
typedef struct VPL_List *V_List;
typedef struct VPL_Case *V_Case;
typedef struct VPL_Operation *V_Operation;
typedef struct VPL_Stack *V_Stack;
typedef struct VPL_ErrorNode *V_ErrorNode;
typedef struct VPL_Frame *V_Frame;
typedef struct VPL_RootNode *V_RootNode;
typedef struct VPL_Root *V_Root;
typedef struct VPL_Method *V_Method;
typedef struct VPL_ThreadSpace *V_ThreadSpace;

enum opTrigger {
	kHalt = -1,		/* kHalt signals perform_action to return FALSE, stopping the run loop */
	kNoAction = 0,	/* kNoAction must be zero for quick tests of methodSuccess */
	kFailure = 1,	/* kFailure must be aligned (+1) with kFALSE for match execution */
	kSuccess = 2	/* kSuccess must be aligned (+1) with kTRUE  for match execution */
};

enum faultCode {
	kUnknownFault = 0,
	kNonexistentClass,
	kNonexistentMethod,
	kNonexistentPersistent,
	kNonexistentAttribute,
	kNonexistentPrimitive,
	kNonexistentConstant,
	kNonexistentField,
	kNonexistentProcedure,
	kIncorrectInarity,
	kIncorrectOutarity,
	kIncorrectType,
	kIncorrectCases,
	kIncorrectListInput,
	kNoControl,
	kWatchpoint,
	kSignalInterrupt
};

typedef struct VPL_Fault *V_Fault;
typedef struct VPL_Fault
{
	Nat4			theFaultCode;	/* Must be cast as Nat4 because will be used as an index into an array */
	Int1			*primaryString;
	Int1			*secondaryString;
	Int1			*operationName;
	Int1			*moduleName;
}	VPL_Fault;

typedef struct VPL_Object
{
	Nat2	instanceIndex;
	Nat1	system;
	Nat1	type;
	Nat4	mark;
	Nat4	use;
	V_Object	previous;
	V_Object	next;
}	VPL_Object;

typedef struct
{
	Int1 **pointerLocation;
	struct VPL_PointerLocation	*next;
}	VPL_PointerLocation, *V_PointerLocation;

typedef struct
{
	Int1 *newPointer;
	Int1 *oldPointer;
	struct VPL_PointerRecord *next;
}	VPL_PointerRecord, *V_PointerRecord;

typedef struct
{
	V_PointerLocation	locations;
	Nat4				objectSize;
	Int1				*objectStart;
	Nat4				numberOfPositions;
	Int1				***positions;
}	VPL_Archive, *V_Archive;

typedef struct VPL_Value *V_Value;
typedef struct VPL_Value
{
	Int1			*objectName;
	Nat4			classIndex;
	Nat4			columnIndex;
	V_Archive		valueArchive;
	V_Object		value;
}	VPL_Value;

enum valueNodeType {
	kUnknownNode,
	kAttributeNode,
	kPersistentNode
};

typedef struct VPL_Instance *V_Instance;
typedef struct VPL_CallbackCodeSegment *V_CallbackCodeSegment;

typedef	void (*vpl_WatchpointGetCallbackProc)( const void* userData, const V_Instance thisInstance, const Int1* attributeName, const V_Object attributeValue ); 
typedef	void (*vpl_WatchpointSetCallbackProc)( const void* userData, const V_Instance thisInstance, const Int1* attributeName, const V_Object attributeValue, const V_Object newValue ); 

typedef struct VPL_WatchpointObserver *V_WatchpointObserver;
typedef struct VPL_WatchpointObserver
{
	V_CallbackCodeSegment	theGetCallback;
	V_CallbackCodeSegment	theSetCallback;
	void*					theGetUserData;
	void*					theSetUserData;
	
	V_WatchpointObserver	nextObserver;
	V_WatchpointObserver	previousObserver;
} VPL_WatchpointObserver;

typedef struct VPL_WatchpointNode *V_WatchpointNode;
typedef struct VPL_WatchpointNode
{
	V_WatchpointNode		previous;
	V_WatchpointNode		next;
	V_Instance				theInstance;
	Nat4					doFault;
	V_WatchpointObserver	theObserverList;
}	VPL_WatchpointNode;

typedef struct VPL_ValueNode *V_ValueNode;
typedef struct VPL_ValueNode
{
	Nat4				type;
	Nat4				attributeOffset;
	V_Value				value;
	V_WatchpointNode	watchpointList;
}	VPL_ValueNode;

typedef struct VPL_Class *V_Class;
typedef struct VPL_Class
{
	Int1			*name;
	V_Dictionary	attributes;
	Nat4			numberOfSuperClasses;
	Int1			**superClassNames;
	Nat4			classIndex;
	Nat4			numberOfChildren;
	Int1			**childrenNames;
	Nat4			numberOfDescendants;
	Int1			**descendantNames;
}	VPL_Class;


typedef struct VPL_ClassEntry *V_ClassEntry;
typedef struct VPL_ClassEntry
{
	Nat4			valid;
	Nat4			constructorIndex;
	Nat4			destructorIndex;
	Nat4			numberOfSuperClasses;
	Nat4			*superClasses;
	V_Class			theClass;
	V_Method		*methods;
	V_ValueNode		*values;
}	VPL_ClassEntry;

typedef struct VPL_ClassIndexTable *V_ClassIndexTable;
typedef struct VPL_ClassIndexTable
{
	Nat4			numberOfClasses;
	V_ClassEntry	*classes;
}	VPL_ClassIndexTable;

typedef struct VPL_RootNode
{
	V_RootNode		previousNode;
	V_RootNode		nextNode;
	V_Root			root;
	V_Object		object;
}	VPL_RootNode;

typedef struct VPL_Frame
{
	V_Frame		previousFrame;
	V_List		inputList;
	V_List		outputList;
	V_Case		frameCase;		/* For use in the interpreter */
	Int1		*methodName;	/* For use in calling "super" data driven methods and interpreter */
	Nat4		dataDriver;		/* For use in calling "super" data driven methods and interpreter */
	Nat4		vplEditor;		/* For use in the interpreter */
	V_Operation	operation;
	Nat1		repeatFlag;
	Nat1		methodSuccess;
	Nat1		stopNow;
	Nat1		stopNext;
	Nat4		caseCounter;
	Nat4		repeatCounter;
	V_RootNode	roots;
}	VPL_Frame;

typedef struct VPL_Stack
{
	V_Stack		previousStack;
	V_Stack		nextStack;
	Int4		stackDepth;
	Nat4		maxStackDepth;
	V_Frame		currentFrame;
	V_Object	vplStack;		/* For use in the interpreter */
}	VPL_Stack;

typedef struct
{
	Nat2	instanceIndex;
	Nat1	system;
	Nat1	type;
	Nat4	mark;
	Nat4	use;
	V_Object	previous;
	V_Object	next;
	Nat4	listLength;
	Nat4	maxLength;
}	VPL_Heap, *V_Heap;

typedef struct VPL_ErrorNode
{
	V_ErrorNode	previous;
	Int1		*errorString;
	Int4		errorCode;
}	VPL_ErrorNode;

typedef struct VPL_Parameter *V_Parameter;

typedef struct VPL_Parameter {
	Nat4 type;
	Nat4 size;
	Int1 *name;
	Nat4 indirection;
	Nat4 constantFlag;
	V_Parameter next;
} VPL_Parameter;

typedef struct {
	Int1 *name;
	void * functionPtr;
	V_Parameter parameters;
	V_Parameter returnParameter;
} VPL_ExtProcedure, *V_ExtProcedure;

typedef struct VPL_ExtField *V_ExtField;

typedef struct VPL_ExtField {
	Int1 *name;
	Nat4 offset;
	Nat4 size;
	Nat4 type;
	Int1 *pointerTypeName;
	Nat4 indirection;
	Nat4 pointerTypeSize;
	Int1 *typeName;
	V_ExtField next;
} VPL_ExtField;

typedef struct {
	Int1 *name;
	V_ExtField fields;
	Nat4 size;
} VPL_ExtStructure, *V_ExtStructure;

typedef struct VPL_CallbackCodeSegment
{
	Nat4					loadHighAddress;
	Nat4					orAddress;
	Nat4					loadHighOp;
	Nat4					orOp;
	Nat4					mtctrOp;
	Nat4					branchOp;
	Int1					*vplRoutine;
	V_ExtProcedure			callbackFunction;
	V_Environment			theEnvironment;
	Nat4					listInput;
	V_Object				object;
	V_CallbackCodeSegment	previous;
	V_CallbackCodeSegment	next;
	Nat4					use;
}	VPL_CallbackCodeSegment;

typedef struct VPL_ThreadSpace
{
	Nat4					thisThread;
	V_Fault					theFault;
	V_ErrorNode				lastError;
	V_Heap					heap;
	V_Stack					stack;
	V_CallbackCodeSegment	segments;
	Bool					stopNext;
	V_Environment			threadEnvironment;
	V_ThreadSpace			previousThread;
	V_ThreadSpace			nextThread;
}	VPL_ThreadSpace;

typedef struct VPL_Environment
{
	V_Fault				theFault;
	V_ErrorNode			lastError;
	V_Heap				heap;
	V_Stack				stack;
	V_Dictionary		classTable;
	V_Dictionary		universalsTable;
	V_Dictionary		persistentsTable;
	V_Dictionary		methodsDictionary;
	V_Dictionary		valuesDictionary;
	V_Dictionary		externalConstantsTable;
	V_Dictionary		externalStructsTable;
	V_Dictionary		externalGlobalsTable;
	V_Dictionary		externalProceduresTable;
	V_Dictionary		externalPrimitivesTable;
	V_Dictionary		externalTypesTable;
	V_ClassIndexTable	classIndexTable;
	Nat4				totalMethods;
	Nat4				totalValues;
	void				*callbackHandler;
	void				*stackSpawner;
	Int1				*interpreterCallbackHandler;
	V_CallbackCodeSegment	segments;
	Bool				stopNext;
	Bool				postLoad;
	Bool				compiled;
	Bool				logging;
	Bool				profiling;
	Nat4				interpreterMode;
	Nat4				editorThreadID;
	Nat4				interpreterThreadID;
	Nat4				pipeWriteFileDescriptor;
	Nat4				pipeReadFileDescriptor;
	
	V_ThreadSpace		threads;
}	VPL_Environment;

#ifdef __cplusplus
extern "C" {
#endif

Int1 *new_string( Int1 *string , V_Environment environment );
Int1 *new_cat_string( Int1 *firstString, Int1 *secondString , V_Environment environment );

Int4 record_error(Int1 *error, Int1 *module, Int4 errorCode, V_Environment environment);
Int4 dispose_fault(V_Environment environment);
enum opTrigger record_fault(V_Environment environment, enum faultCode faultCode, Int1 *primaryString, Int1 *secondaryString, Int1 *operationName, Int1 *moduleName);
V_Stack createStack(void);
Nat4 addStack(V_Environment ptrE, V_Stack stack);
V_Environment createEnvironment(void);
V_Heap createHeap(void);
Nat4 sort_dictionaries(V_Environment environment );

V_ThreadSpace acquireThread(V_Environment environment);
	
#ifdef __cplusplus
}
#endif

#endif
