/*
	
	Marten_Headers.h
	Copyright 2005 Andescotia LLC, All Rights Reserved.
	
*/

#ifndef MARTENHEADERS
#define MARTENHEADERS

#ifndef __VPL_PLATFORM_DARWIN__
#define __VPL_PLATFORM_DARWIN__		1
#endif
#ifndef __VPL_DISATCH_USES_FFI__
#define __VPL_DISATCH_USES_FFI__	1
#endif

#define CARBON
#define VPL_VERBOSE_ENGINE

#ifdef __cplusplus
extern "C" {
#endif

#ifndef TRUE
#define TRUE 1
#endif
#ifndef FALSE
#define FALSE 0
#endif

#ifdef __GNUC__
	#ifndef NULL
	#define NULL ((void *) 0)
	#endif
#endif

#define VPXMALLOC(x,y) ( y * ) X_calloc(x,sizeof(y))
#define VPXREALLOC(x,y,z) ( z * ) X_realloc(x,y,sizeof(z))


typedef char			Int1;			/* integer 1 byte */
typedef short			Int2;			/* integer 2 byte */
typedef long			Int4;			/* integer 4 byte */
typedef unsigned char		Nat1;			/* natural 1 byte */
typedef unsigned short		Nat2;			/* natural 2 byte */
typedef unsigned long		Nat4;			/* natural 4 byte */
typedef float			Real4;			/* real 4 byte */
typedef double			Real10;			/* real 10 byte */
typedef Nat2			Bool;			/* boolean 2 byte */

#pragma mark * General types *

typedef		Int4		vpl_Status;
typedef		Nat4		vpl_Arity;
typedef		Int4		vpl_RetainCount;
typedef		Nat4		vpl_ObjectType;
typedef		Int1*		vpl_StringPtr;
typedef		Nat4		vpl_StringLen;
typedef		Int1		vpl_Char;
typedef		Int4		vpl_Integer;
typedef		Real10		vpl_Real;
typedef		Bool		vpl_Boolean;
typedef		void*		vpl_BlockPtr;
typedef		Nat4		vpl_BlockSize;
typedef		Nat4		vpl_BlockLevel;
typedef		Nat4		vpl_ListLength;
typedef		Nat4		vpl_ListItemIndex;

enum boolType {
	kFALSE = 0,
	kTRUE = 1
};

enum errorType {
	kNOERROR = 0,
	kERROR = 1,
	kWRONGINARITY = 2,
	kWRONGOUTARITY = 3,
	kWRONGINPUTTYPE = 4
};

enum interpreterModeType {
	kThread,
	kProcess
};

enum opAction {
	kNextCase,
	kTerminate,
	kFinish,
	kContinue,
	kFail
};

enum ioMode {
	iSimple = 0,
	iList,
	iLoop,
	iTrue,
	iFalse
};

enum opValueType {
	kNormal,
	kDebug,
	kSkip
};

enum parameterType{
	kIntType,
	kFloatType,
	kDoubleType,
	kEnumType,
	kCharType,
	kShortType,
	kUnsignedType,
	kLongType,
	kPointerType,
	kStructureType,
	kVoidType
};

enum dataType {
	kObject,
	kUndefined,
	kNone,
	kBoolean,
	kInteger,
	kReal,
	kString,
	kList,
	kInstance,
	kExternalBlock
};

enum {
	kNull = 0xFFFF
};

enum controlType {
	kContinueOnSuccess,
	kContinueOnFailure,
	kFinishOnSuccess,
	kFinishOnFailure,
	kTerminateOnSuccess,
	kTerminateOnFailure,
	kNextCaseOnSuccess,
	kNextCaseOnFailure,
	kFailOnSuccess,
	kFailOnFailure
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

#define		vpl_StringTerminator	'\0'
#define		vpl_EmptyString			""
#define		vpl_EmptyChar			'\0'
#define		vpl_CharSize			sizeof(vpl_Char)

enum {
	kvpl_BlockLevelBlock	= 0,
	kvpl_BlockLevelPointer	= 1,
	kvpl_BlockLevelHandle	= 2
};

typedef enum {
	kvpl_StackRuntime = 1,
	kvpl_StackInline
} vpl_StackModel;

typedef Nat4 vpl_StringEncoding;					// CFStringEncoding;
// kCFStringEncodingUTF8 = 0x08000100, /* kTextEncodingUnicodeDefault + kUnicodeUTF8Format */
#define vpl_Default_StringEncoding	0x08000100

void *X_malloc(Nat4 size);
void *X_calloc(Nat4 number, Nat4 size);
void *X_realloc(void *theBlock, Nat4 number, Nat4 size);
void X_free(void *block);

//typedef struct VPL_Dictionary *V_Dictionary;
typedef struct VPL_Environment *V_Environment;
typedef struct VPL_Object *V_Object;
//typedef struct VPL_None *V_None;
//typedef struct VPL_Integer *V_Integer;
//typedef struct VPL_String *V_String;
//typedef struct VPL_List *V_List;
typedef struct VPL_Method *V_Method;
//typedef struct VPL_Instance *V_Instance;
typedef struct VPL_Class *V_Class;
typedef struct VPL_Value *V_Value;
typedef struct VPL_Case *V_Case;
typedef struct VPL_Operation *V_Operation;
typedef struct VPL_Terminal *V_Terminal;
typedef struct VPL_Root *V_Root;
//typedef struct VPL_ExternalBlock *V_ExternalBlock;

typedef struct VPL_Fault *V_Fault;
typedef struct VPL_ErrorNode *V_ErrorNode;
typedef struct VPL_Heap *V_Heap;
typedef struct VPL_Stack *V_Stack;
typedef struct VPL_ClassIndexTable *V_ClassIndexTable;
typedef struct VPL_CallbackCodeSegment *V_CallbackCodeSegment;
typedef struct VPL_Archive *V_Archive;

typedef struct
{
	Int1	*name;
	void	*object;
}	VPL_DictionaryNode, *V_DictionaryNode;

typedef struct
{
	Nat4				numberOfNodes;
	V_DictionaryNode	*nodes;
}	VPL_Dictionary, *V_Dictionary;

typedef struct VPL_ExtConstant *V_ExtConstant;
typedef struct VPL_ExtPrimitive *V_ExtPrimitive;
typedef struct VPL_ExtPrimitive
{
	Int1 *section;
	Int1 *name;
	Nat4 inarity;
	Nat4 outarity;
	enum controlType defaultControl;
	void * functionPtr;
} VPL_ExtPrimitive;

typedef struct VPL_Class
{
	Int1			*name;
	V_Dictionary	attributes;
	Nat4			numberOfSuperClasses;
	Int1			**superClassNames;
	Nat4			classIndex;
}	VPL_Class;

typedef struct VPL_ExtConstant
{
	Int1		*name;
	Int4		enumInteger;
	Int1		*defineString;
}	VPL_ExtConstant;

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
	Nat4 lccSize;
	Nat4 sizeOfSize;
} VPL_ExtStructure, *V_ExtStructure;

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

enum systemBits {
	kSystemUsed = 1,
	kSystemWatched = 2,
	kSystemReservedA = 4,
	kSystemReservedB = 8,
	kSystemReservedC = 16,
	kSystemReservedD = 32,
	kSystemReservedE = 64,
	kSystemReservedF = 128,
};

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
	Nat2	instanceIndex;
	Nat1	system;
	Nat1	type;
	Nat4	mark;
	Nat4	use;
	V_Object	previous;
	V_Object	next;
}	VPL_Undefined, *V_Undefined;

typedef struct
{
	Nat2	instanceIndex;
	Nat1	system;
	Nat1	type;
	Nat4	mark;
	Nat4	use;
	V_Object	previous;
	V_Object	next;
}	VPL_None, *V_None;

typedef struct
{
	Nat2	instanceIndex;
	Nat1	system;
	Nat1	type;
	Nat4	mark;
	Nat4	use;
	V_Object	previous;
	V_Object	next;
	Bool	value;
}	VPL_Boolean, *V_Boolean;

typedef struct
{
	Nat2	instanceIndex;
	Nat1	system;
	Nat1	type;
	Nat4	mark;
	Nat4	use;
	V_Object	previous;
	V_Object	next;
	Int4	value;
}	VPL_Integer, *V_Integer;

typedef struct
{
	Nat2	instanceIndex;
	Nat1	system;
	Nat1	type;
	Nat4	mark;
	Nat4	use;
	V_Object	previous;
	V_Object	next;
	Real10	value;
}	VPL_Real, *V_Real;

typedef struct
{
	Nat2	instanceIndex;
	Nat1	system;
	Nat1	type;
	Nat4	mark;
	Nat4	use;
	V_Object	previous;
	V_Object	next;
	Int1	*string;
	Nat4	length;
}	VPL_String, *V_String;

typedef struct VPL_List
{
	Nat2	instanceIndex;
	Nat1	system;
	Nat1	type;
	Nat4	mark;
	Nat4	use;
	V_Object	previous;
	V_Object	next;
	V_Object	*objectList;
	Nat4	listLength;
}	VPL_List, *V_List;

typedef struct VPL_Instance
{
	Nat2	instanceIndex;
	Nat1	system;
	Nat1	type;
	Nat4	mark;
	Nat4	use;
	V_Object	previous;
	V_Object	next;
	V_Object	*objectList;
	Nat4	listLength;
	Int1	*name;
}	VPL_Instance, *V_Instance;

typedef struct
{
	Nat2	instanceIndex;
	Nat1	system;
	Nat1	type;
	Nat4	mark;
	Nat4	use;
	V_Object	previous;
	V_Object	next;
	Int1	*name;
	Nat4	size;
	void	*blockPtr;
	Nat4	levelOfIndirection;
}	VPL_ExternalBlock, *V_ExternalBlock;

typedef		V_Object	*vpl_VObjectArray;
typedef		V_Object	*vpl_PrimitiveInputs;

typedef struct VPL_Value
{
	Int1			*objectName;
	Nat4			classIndex;
	Nat4			columnIndex;
	V_Archive		valueArchive;
	V_Object		value;
}	VPL_Value;

#if __VPL_DISATCH_USES_FFI__
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
			
			ffi_cif					ffiseg_cif;
			ffi_closure*			ffiseg_closure;
			Nat1					ffiseg_InArity;
			ffi_type*				ffiseg_ReturnType;
			ffi_type*				ffiseg_ArgumentTypes[8];
			
		}	VPL_CallbackCodeSegment;
	
#else
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
#endif
	
	
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
	enum interpreterModeType	interpreterMode;
	Nat4				editorThreadID;
	Nat4				interpreterThreadID;
	Nat4				pipeWriteFileDescriptor;
	Nat4				pipeReadFileDescriptor;
}	VPL_Environment;

enum opTrigger {
	kHalt = -1,		/* kHalt signals perform_action to return FALSE, stopping the run loop */
	kNoAction = 0,	/* kNoAction must be zero for quick tests of methodSuccess */
	kFailure = 1,	/* kFailure must be aligned (+1) with kFALSE for match execution */
	kSuccess = 2	/* kSuccess must be aligned (+1) with kTRUE  for match execution */
};


#if __VPL_DISATCH_USES_FFI__
	extern void ffiVPLCallbackHandler( ffi_cif* cif, void* result, void** args, void* userdata );
#else
	extern void MacVPLCallbackHandler(void);
#endif // __VPL_DISATCH_USES_FFI__
	
#if __VPL_PLATFORM_DARWIN__	
typedef struct OpaqueMenuRef OpaqueMenuRef;
typedef struct OpaqueWindowPtr OpaqueWindowPtr;
typedef struct OpaqueControlRef OpaqueControlRef;
typedef struct __CFString __CFString;
typedef struct __CFAllocator __CFAllocator;
typedef struct OpaqueEventRef OpaqueEventRef;
typedef struct OpaqueEventTargetRef OpaqueEventTargetRef;
typedef struct OpaqueEventHandlerRef OpaqueEventHandlerRef;
typedef struct __CFURL __CFURL;
typedef struct __CFBoolean __CFBoolean;
typedef struct __CFData __CFData;
typedef struct __CFDate __CFDate;
typedef struct __CFNumber __CFNumber;
typedef struct __CFUUID __CFUUID;
typedef struct __CFDictionary __CFDictionary;
typedef struct CGPath CGPath;
typedef struct __CFTimeZone __CFTimeZone;
typedef struct __CFArray __CFArray;
typedef struct __CFLocale __CFLocale;
typedef struct __HIShape __HIShape;
typedef struct __AXUIElement __AXUIElement;
#endif // __VPL_PLATFORM_DARWIN__

#define DECLARE_ENVIRONMENT 	Int4 result = 0;V_List parameterList = NULL;V_List inputList = NULL;V_List outputList = NULL;Nat4 counter = 0;Int4 (*spawnPtr)(V_Environment,char *,V_List , V_List ,Int4 *);

#if __VPL_DISATCH_USES_FFI__
	#define INITIALIZE_ENVIRONMENT 	pClassConstantToIndex=gClassConstantToIndex;pMethodConstantToIndex=gMethodConstantToIndex;pValueConstantToIndex=gValueConstantToIndex;environment->callbackHandler = ffiVPLCallbackHandler;environment->stackSpawner = vpx_spawn_stack;environment->compiled = kTRUE;environment->logging = kFALSE;result = post_load(environment);
#else
	#define INITIALIZE_ENVIRONMENT 	pClassConstantToIndex=gClassConstantToIndex;pMethodConstantToIndex=gMethodConstantToIndex;pValueConstantToIndex=gValueConstantToIndex;environment->callbackHandler = MacVPLCallbackHandler;environment->stackSpawner = vpx_spawn_stack;environment->compiled = kTRUE;environment->logging = kFALSE;result = post_load(environment);
#endif // __VPL_DISATCH_USES_FFI__
	
#define EXECUTE_ENVIRONMENT 	parameterList = (V_List)create_list(argc,environment);for(counter=0;counter<argc;counter++) parameterList->objectList[counter] = (V_Object) create_string(argv[counter],environment);inputList = (V_List)create_list(1,environment);inputList->objectList[0] = (V_Object) parameterList;\
outputList = (V_List)create_list(1,environment);spawnPtr = environment->stackSpawner;result = spawnPtr(environment,vpl_MAIN,inputList,outputList,NULL);decrement_count(environment,(V_Object)inputList);decrement_count(environment,(V_Object)outputList);destroy_environment(environment,kFALSE,kFALSE);

#define LOOP(a) root[input[a]]
#define LIST(a) ((V_List) root[a])->objectList[counter]
#define ROOT(a) &root[a]
#define TERMINAL(a) root[a]
#define NONE vpx_none
#define INJECT(a) ((V_String) root[a])->string

#define LOOPTERMINAL(x,y,z) if(counter) input[x] = (Nat4)z; else input[x] = (Nat4)y;
#define LISTROOT(x,y) rootNode[y] = vpx_create_listRootNode(environment,rootNode[y],root[x]);

#define HEADER(x) 	Nat4 repeatLimit = 0; enum boolType	repeat = kFALSE; Nat4 counter = 0;  Bool nextCase = kFALSE; enum opTrigger theOutcome = kSuccess; enum opTrigger result = kSuccess; Nat4 contextClassIndex = contextIndex; V_Object root[x]; for(counter=0;counter<x;counter++) root[counter] = NULL; counter = 0;
#define HEADERWITHNONE(x) 	Nat4 repeatLimit = 0; enum boolType	repeat = kFALSE; Nat4 counter = 0;  Bool nextCase = kFALSE; enum opTrigger theOutcome = kSuccess; enum opTrigger result = kSuccess; Nat4 contextClassIndex = contextIndex; V_Object vpx_none = NULL; V_Object	root[x]; for(counter=0;counter<x;counter++) root[counter] = NULL; counter = 0; vpx_none = (V_Object) create_none(environment);

#define DECREMENT(x) 	for(counter=0;counter<x;counter++) decrement_count(environment,root[counter]); counter = 0;
#define FOOTER(x) 	THEFINISH: DECREMENT(x) *outcome = theOutcome; return nextCase;
#define FOOTERWITHNONE(x) 	THEFINISH: DECREMENT(x) decrement_count(environment,vpx_none); *outcome = theOutcome; return nextCase;
#define FOOTERSINGLECASE(x) 	THEFINISH: DECREMENT(x) return theOutcome;
#define FOOTERSINGLECASEWITHNONE(x) 	THEFINISH: DECREMENT(x) decrement_count(environment,vpx_none); return theOutcome;

#define REPEATBEGIN repeat=kTRUE; counter=0; while(repeat){
#define REPEATBEGINWITHCOUNTER repeat=kTRUE; counter=0; while(repeat && counter < repeatLimit){
#define REPEATFINISH  counter++; } counter = 0;
#define LOOPTERMINALBEGIN(x) Nat4 input[x];
#define LISTROOTBEGIN(x) { V_ListRootNode rootNode[x]; for(counter=0;counter<x;counter++) rootNode[counter] = NULL; counter = 0;
#define LISTROOTFINISH(x,y) root[x] = vpx_flatten_listRootNodes(environment,rootNode[y]);
#define LISTROOTEND }

#define ROOTNULL(x,y) root[x] = vpx_increment_count(y);
#define ROOTEMPTY(x) root[x] = (V_Object) create_list(0,environment);

#define PARAMETERS environment,&repeat,contextClassIndex
#define UNKNOWNOPERATION ;

#define TERMINATEONFAILURE if(result == kFailure) { *inputRepeat = kFALSE; nextCase = kFALSE; goto THEFINISH; }
#define TERMINATEONSUCCESS if(result == kSuccess) { *inputRepeat = kFALSE; nextCase = kFALSE; goto THEFINISH; }
#define FAILONFAILURE if(result == kFailure) { theOutcome = kFailure; *inputRepeat = kFALSE; nextCase = kFALSE; goto THEFINISH; }
#define FAILONSUCCESS if(result == kSuccess) { theOutcome = kFailure; *inputRepeat = kFALSE; nextCase = kFALSE; goto THEFINISH; }
#define CONTINUEONFAILURE if(result == kFailure) { }
#define CONTINUEONSUCCESS if(result == kSuccess) { }
#define FINISHONFAILURE if(result == kFailure) { *inputRepeat = kFALSE; }
#define FINISHONSUCCESS if(result == kSuccess) { *inputRepeat = kFALSE; }
#define NEXTCASEONFAILURE if(result == kFailure) { nextCase = kTRUE; goto THEFINISH; }
#define NEXTCASEONSUCCESS if(result == kSuccess) { nextCase = kTRUE; goto THEFINISH; }

#define INPUT(x,y) root[x] = vpx_increment_count(terminal ## y);
#define OUTPUT(x,y) decrement_count(environment,*root ## x); *root ## x = vpx_increment_count(y);

#define GETINTEGER(x) vpx_get_integer(x)
#define GETREAL(x) vpx_get_real(x)
#define GETPOINTER(v,w,x,y,z) ( void * ) vpx_get_pointer(environment,v,#w,#x,y,z)
#define GETCONSTPOINTER(x,y,z) ( const x y ) vpx_get_const_pointer(environment,#y,z)
#define GETSTRUCTURE(x,y,z) *(( y *) ((V_ExternalBlock) z)->blockPtr)

#define PUTINTEGER(x,y) root[y] = (V_Object) int_to_integer(x,environment);
#define PUTREAL(x,y) root[y] = (V_Object) float_to_real(x,environment);
#define PUTPOINTER(w,x,y,z) root[z] = (V_Object) pointer_to_block(#w,0,strlen(#x),(Nat4) y,environment);
#define PUTSTRUCTURE(w,x,y,z) root[z] = (V_Object) create_externalBlock(#x,w,environment); ((V_ExternalBlock) root[z])->blockPtr = X_malloc(w); *((x *) ((V_ExternalBlock) root[z])->blockPtr) = y;

typedef struct VPL_ListRootNode *V_ListRootNode;

Int1 *new_string( Int1 *string , V_Environment environment );
Nat4 add_nodes( V_Dictionary dictionary, Nat4 arraySize, VPL_DictionaryNode nodeArray[] );
Int4 record_error(Int1 *error, Int1 *module, Int4 errorCode, V_Environment environment);
enum opTrigger record_fault(V_Environment environment, enum faultCode faultCode, Int1 *primaryString, Int1 *secondaryString, Int1 *operationName, Int1 *moduleName);

void 		VPLLogError( Int1* outStr, V_Environment environment );
void		VPLLogString( Int1* outStr, V_Environment environment );
void 		VPLLogStringReturn( Int1* outStr, V_Environment environment );

#pragma mark * General Object Functions *
V_Object		VPLObjectCreate( vpl_ObjectType aVType, V_Environment environment );
V_Object		VPLObjectCreateInstance( vpl_StringPtr theClassName, V_Environment environment );
V_Object		VPLObjectCreateList( Nat4 initialLength, V_Environment environment );
V_Object		VPLObjectCreateListCopy( V_Object originalList, Nat4 startItem, Nat4 endItem, V_Environment environment );
V_Object		VPLObjectCreateListJoin( V_Object leftList, V_Object rightList, V_Environment environment );
V_Object		VPLObjectCreateListFromObjects( vpl_ListLength theArraySize, vpl_VObjectArray theObjectArray, V_Environment environment );
V_Object		VPLObjectCreateFromString( vpl_StringPtr aString, V_Environment environment );
vpl_Status		VPLObjectGetType( V_Object	theVObject );
V_Object		VPLObjectRetain( V_Object theVObject, V_Environment environment );
vpl_RetainCount VPLObjectGetRetainCount( V_Object theVObject );
void			VPLObjectRelease( V_Object theVObject, V_Environment environment );
vpl_StringPtr	VPLObjectToString( V_Object theVObject, V_Environment environment );
vpl_StringPtr	VPLObjectTypeToTypeString( vpl_ObjectType aVType );

#pragma mark * Object Get Functions *
vpl_Boolean		VPLObjectGetValueBool( V_Object theVObject );
vpl_Integer		VPLObjectGetValueInteger( V_Object theVObject );
vpl_Real		VPLObjectGetValueReal( V_Object theVObject );
vpl_StringPtr	VPLObjectGetValueString( V_Object theVObject );
vpl_StringPtr	VPLObjectGetValueStringCopy( V_Object theVObject, V_Environment environment );
vpl_StringPtr	VPLObjectGetExternalBlockName( V_Object theVObject );
vpl_BlockPtr	VPLObjectGetExternalBlockPtr( V_Object theVObject );
vpl_BlockLevel	VPLObjectGetExternalBlockLevel( V_Object theVObject );
vpl_BlockSize	VPLObjectGetExternalBlockSize( V_Object theVObject );
vpl_StringPtr	VPLObjectGetInstanceType( V_Object theVObject );
vpl_Status		VPLObjectGetInstanceAttribute( V_Object* theValue, vpl_StringPtr theName, V_Object theVObject, V_Environment environment );
vpl_ListLength	VPLObjectGetListLength( V_Object theVObject );
V_Object		VPLObjectGetListItem( V_Object theVObject, vpl_ListItemIndex theItemIndex );


#pragma mark * Object Set Functions *
vpl_Status 		VPLObjectSetValueBool( V_Object theVObject, vpl_Boolean theValue );
vpl_Status 		VPLObjectSetValueInteger( V_Object theVObject, vpl_Integer theValue );
vpl_Status		VPLObjectSetValueReal( V_Object theVObject, vpl_Real theValue );
vpl_Status		VPLObjectSetValueString( V_Object theVObject, vpl_StringPtr theValue );
vpl_Status		VPLObjectSetValueStringCopy( V_Object theVObject, vpl_StringPtr theValue, V_Environment environment );
vpl_Status		VPLObjectSetExternalBlockName( V_Object theVObject, vpl_StringPtr theBlockName );
vpl_Status		VPLObjectSetExternalBlockNameCopy( V_Object theVObject, vpl_StringPtr theBlockName, V_Environment environment );
vpl_Status		VPLObjectSetExternalBlockPtr( V_Object theVObject, vpl_BlockPtr theBlockPtr );
vpl_Status		VPLObjectSetExternalBlockLevel( V_Object theVObject, vpl_BlockLevel theBlockLevel );
vpl_Status		VPLObjectSetInstanceAttribute( V_Object theValue, vpl_StringPtr theName, V_Object theVObject, V_Environment environment );
vpl_Status		VPLObjectSetListItem( V_Object theVObject, V_Object theValue, vpl_ListItemIndex theItemIndex, V_Environment environment );

#pragma mark * Record Error Functions *
vpl_Status 		VPLPrimRecordArityError( vpl_Arity wantArity, vpl_Status err, vpl_StringPtr fillString, vpl_StringPtr primName, vpl_PrimitiveInputs primitive, V_Environment environment );
vpl_Status		VPLPrimRecordObjectTypeError( vpl_ObjectType gotType, vpl_ObjectType wantType, vpl_Arity theNode, vpl_StringPtr primName, vpl_PrimitiveInputs primitive, V_Environment environment );
vpl_Status		VPLPrimRecordExternalTypeError( vpl_StringPtr gotType, vpl_StringPtr wantType, vpl_Arity theNode, vpl_StringPtr primName, vpl_PrimitiveInputs primitive, V_Environment environment );

#pragma mark * Check Arity Functions *
vpl_Status		VPLPrimCheckInputArity(V_Environment environment, vpl_StringPtr primName, Nat4 primInArity, vpl_Arity wantArity );
vpl_Status		VPLPrimCheckInputArityMin(V_Environment environment, vpl_StringPtr primName, Nat4 primInArity, vpl_Arity wantArity );
vpl_Status		VPLPrimCheckInputArityMax(V_Environment environment, vpl_StringPtr primName, Nat4 primInArity, vpl_Arity wantArity );
vpl_Status		VPLPrimCheckOutputArity(V_Environment environment, vpl_StringPtr primName, Nat4 primOutArity, vpl_Arity wantArity );
vpl_Status		VPLPrimCheckOutputArityMin(V_Environment environment, vpl_StringPtr primName, Nat4 primOutArity, vpl_Arity wantArity );
vpl_Status		VPLPrimCheckOutputArityMax(V_Environment environment, vpl_StringPtr primName, Nat4 primOutArity, vpl_Arity wantArity );

#pragma mark * Check Input Functions *
vpl_Status		VPLPrimCheckInputObjectType(  vpl_ObjectType theVType, vpl_Arity theNode, vpl_StringPtr primName, vpl_PrimitiveInputs primitive, V_Environment environment );
vpl_Status		VPLPrimCheckInputObjectTypes( vpl_Arity theNode, vpl_StringPtr primName, vpl_PrimitiveInputs primitive, V_Environment environment, Nat4 numberOfTypes, ... );

#pragma mark * Input Get Functions *
V_Object		VPLPrimGetInputObject( vpl_Arity theNode, vpl_PrimitiveInputs primitive, V_Environment environment );
vpl_Status		VPLPrimGetInputObjectType( vpl_ObjectType theVType, vpl_Arity theNode, vpl_PrimitiveInputs primitive, V_Environment environment );
vpl_Status		VPLPrimGetInputObjectCheckType( V_Object* theObject, vpl_ObjectType theVType, vpl_Arity theNode, vpl_StringPtr primName, vpl_PrimitiveInputs primitive, V_Environment environment );

vpl_Status		VPLPrimGetInputObjectNULL( vpl_Arity theNode, vpl_StringPtr primName, vpl_PrimitiveInputs primitive, V_Environment environment );
vpl_Status		VPLPrimGetInputObjectNONE( vpl_Arity theNode, vpl_StringPtr primName, vpl_PrimitiveInputs primitive, V_Environment environment );
vpl_Status		VPLPrimGetInputObjectUNDEFINED( vpl_Arity theNode, vpl_StringPtr primName, vpl_PrimitiveInputs primitive, V_Environment environment );
vpl_Status		VPLPrimGetInputObjectBool( vpl_Boolean* theValue, vpl_Arity theNode, vpl_StringPtr primName, vpl_PrimitiveInputs primitive, V_Environment environment );
vpl_Status		VPLPrimGetInputObjectInteger( vpl_Integer* theValue, vpl_Arity theNode, vpl_StringPtr primName, vpl_PrimitiveInputs primitive, V_Environment environment );
vpl_Status		VPLPrimGetInputObjectReal( vpl_Real* theValue, vpl_Arity theNode, vpl_StringPtr primName, vpl_PrimitiveInputs primitive, V_Environment environment );
vpl_Status		VPLPrimGetInputObjectString( vpl_StringPtr* theString, vpl_Arity theNode, vpl_StringPtr primName, vpl_PrimitiveInputs primitive, V_Environment environment );
vpl_Status		VPLPrimGetInputObjectStringCopy( vpl_StringPtr* theString, vpl_Arity theNode, vpl_StringPtr primName, vpl_PrimitiveInputs primitive, V_Environment environment );
vpl_Status		VPLPrimGetInputObjectStringCoerceCopy( vpl_StringPtr* theString, vpl_Arity theNode, vpl_StringPtr primName, vpl_PrimitiveInputs primitive, V_Environment environment );
vpl_Status		VPLPrimGetInputObjectStringCoalesce( vpl_StringPtr* theString, vpl_Arity theStartNode, vpl_Arity theEndNode, vpl_StringPtr primName, vpl_PrimitiveInputs primitive, V_Environment environment );
vpl_Status		VPLPrimGetInputObjectEBlockPtr( vpl_BlockPtr* theValue, vpl_StringPtr blockName, vpl_Arity theNode, vpl_StringPtr primName, vpl_PrimitiveInputs primitive, V_Environment environment );
vpl_Status		VPLPrimGetInputObjectEBlockName( vpl_StringPtr* blockName, vpl_Arity theNode, vpl_StringPtr primName, vpl_PrimitiveInputs primitive, V_Environment environment );
vpl_Status		VPLPrimGetInputObjectEBlockPtrCoerce( vpl_BlockPtr* theValue, vpl_StringPtr blockName, vpl_Arity theNode, vpl_StringPtr primName, vpl_PrimitiveInputs primitive, V_Environment environment );
vpl_Status		VPLPrimGetInputObjectBaseClassName( vpl_StringPtr* theBaseName, vpl_Arity theNode, vpl_StringPtr primName, vpl_PrimitiveInputs primitive, V_Environment environment );
vpl_Status		VPLPrimGetInputObjectBaseClass( V_Class* theBaseClass, vpl_Arity theNode, vpl_StringPtr primName, vpl_PrimitiveInputs primitive, V_Environment environment );

#pragma mark * Output Set Functions *
vpl_Status		VPLPrimSetOutputObject( V_Environment environment , vpl_Arity inArity , vpl_Arity node , vpl_PrimitiveInputs primitive, V_Object value );

vpl_Status		VPLPrimSetOutputObjectNULL( V_Environment environment , vpl_Arity inArity , vpl_Arity node , vpl_PrimitiveInputs primitive );
vpl_Status		VPLPrimSetOutputObjectNONE( V_Environment environment , vpl_Arity inArity , vpl_Arity node , vpl_PrimitiveInputs primitive );
vpl_Status		VPLPrimSetOutputObjectUNDEFINED( V_Environment environment , vpl_Arity inArity , vpl_Arity node , vpl_PrimitiveInputs primitive );
vpl_Status		VPLPrimSetOutputObjectBool( V_Environment environment , vpl_Arity inArity , vpl_Arity node , vpl_PrimitiveInputs primitive, vpl_Boolean value );
vpl_Status		VPLPrimSetOutputObjectBoolOrFail( V_Environment environment , enum opTrigger *trigger , vpl_Arity inArity , vpl_Arity outarity , vpl_PrimitiveInputs primitive, vpl_Boolean value );
vpl_Status		VPLPrimSetOutputObjectInteger( V_Environment environment , vpl_Arity inArity , vpl_Arity node , vpl_PrimitiveInputs primitive, vpl_Integer value );
vpl_Status		VPLPrimSetOutputObjectReal( V_Environment environment , vpl_Arity inArity , vpl_Arity node , vpl_PrimitiveInputs primitive, vpl_Real value );
vpl_Status		VPLPrimSetOutputObjectString( V_Environment environment , vpl_Arity inArity , vpl_Arity node , vpl_PrimitiveInputs primitive, vpl_StringPtr value );
vpl_Status		VPLPrimSetOutputObjectStringCopy( V_Environment environment , vpl_Arity inArity , vpl_Arity node , vpl_PrimitiveInputs primitive, vpl_StringPtr value );
vpl_Status		VPLPrimSetOutputObjectEBlockPtr( V_Environment environment , vpl_Arity inArity , vpl_Arity node , vpl_PrimitiveInputs primitive, vpl_BlockPtr blockPtr, vpl_StringPtr blockName, vpl_BlockSize blockSize, vpl_BlockLevel blockLevel );
vpl_Status		VPLPrimSetOutputObjectFromInputObject( V_Environment environment, Nat4 primInArity, Nat4 outNode, vpl_PrimitiveInputs primitive, Nat4 inNode, V_Object* theVObject );

#pragma mark * Environment Functions *
/*
V_Environment	VPLEnvironmentGetMainEnvironment();														// returns MAIN or call createEnvironment() * push.
V_Environment	VPLEnvironmentFindEnvironmentName( vpl_StringPtr testName );								// returns stack of testName
void			VPLEnvironmentStackEnvironmentName( V_Environment theEnv, vpl_StringPtr newName );		// sets an environment on stack to name,
																										// theEnv=NULL will clear name from stack.
vpl_Boolean		VPLEnvironmentIsLoaded( V_Environment theEnv );											// returns environment->postLoad
vpl_Status		VPLEnvironmentInit( V_Environment theEnv, vpl_StackModel stackType, vpl_StringPtr initMethod );	// inits environment
vpl_Status		VPLEnvironmentMain( V_Environment theEnv, vpl_StringPtr mainMethod, int argc, char* argv[] );
*/

V_Environment	VPLEnvironmentCreate( vpl_StringPtr uniqueID, vpl_StackModel stackType, vpl_Boolean outputLog );
vpl_Status		VPLEnvironmentDispose( V_Environment theEnv, vpl_Boolean outputLog );
vpl_Status		VPLEnvironmentInit( V_Environment theEnv, vpl_StringPtr initMethod );
vpl_Status		VPLEnvironmentMain( V_Environment theEnv, vpl_StringPtr mainMethod, int argc, char* argv[] );

//vpl_BlockSize	VPLEnvironmentLookupExternalBlockSize( vpl_StringPtr theBlockName, vpl_StringPtr* outBlockActualName, vpl_BlockLevel* outBlockLevel, V_Environment environment );
vpl_Status		VPLEnvironmentLookupExternalBlockSize( vpl_StringPtr theBlockName, vpl_StringPtr* outBlockActualName, vpl_BlockLevel* outBlockLevel, vpl_BlockSize* outBlockSize, vpl_BlockSize* outBlockCount, V_Environment environment );

void *			VPLEnvironmentCallbackCreate( V_Environment environment, vpl_StringPtr theMethodName, vpl_StringPtr theTypeName, V_Object theObject, Bool isListInputs );
V_Object		VPLEnvironmentCallbackDispose( V_Environment environment, V_CallbackCodeSegment structure );
V_CallbackCodeSegment	VPLEnvironmentCallbackRetain( V_CallbackCodeSegment theCallback );
void					VPLEnvironmentCallbackRelease( V_CallbackCodeSegment theCallback );

vpl_StringPtr	VPLStringCoerceEncoding( vpl_StringPtr inString, vpl_StringLen inStringLength, vpl_StringEncoding inEncoding, vpl_StringEncoding outEncoding, V_Environment environment );

#pragma mark * Engine Functions *

V_ExtPrimitive extPrimitive_new(Int1 *section,enum controlType defaultControl, Int1 *name,V_Dictionary dictionary,Nat4 inarity,Nat4 outarity,void *functionPtr);
V_ExtProcedure get_extProcedure( V_Dictionary ptrT, Int1 *name );
V_ExtConstant get_extConstant( V_Dictionary ptrT, Int1 *name );
V_ExtStructure get_extStructure( V_Dictionary ptrT, Int1 *name );

Bool object_identity( V_Object objectA , V_Object objectB );
Int4 object_compare( V_Object objectA , V_Object objectB , Int1 *attribute, V_Environment environment);

Int1 *object_to_string( V_Object object , V_Environment environment );
V_Object string_to_object( Int1 *string , V_Environment environment);
V_Undefined create_undefined(V_Environment environment);
V_None create_none(V_Environment environment);

V_Boolean create_boolean( Int1 *string , V_Environment environment );
V_Boolean bool_to_boolean( Bool aValue, V_Environment environment );

V_Integer create_integer( Int1 *string , V_Environment environment );
V_Integer int_to_integer( Int4 value , V_Environment environment );

V_Real create_real( Int1 *string , V_Environment environment );
V_Real float_to_real( Real10 value , V_Environment environment);

V_String create_string( Int1 *string , V_Environment environment );
V_String install_string( Int1 *string , V_Environment environment);

V_ExternalBlock create_externalBlock( Int1 *name,Nat4 size, V_Environment environment );
V_ExternalBlock pointer_to_block( Int1 *name, Nat4 size , Nat4 level , Nat4 tempInt , V_Environment environment);

V_List create_list( Nat4 length , V_Environment environment );
V_List clone_list(Nat4 fromOffset,Nat4 toOffset,V_List fromList,Nat4 length,V_Environment environment);
V_List join_list(V_Environment environment, V_List listA, V_List listB);

V_Instance create_instance( Int1 *string , Nat4 length, V_Environment environment);
V_Instance construct_instance( V_Class tempClass , V_Environment environment );

V_Object decrement_count(V_Environment environment,V_Object ptrO);
Nat4 increment_count(V_Object ptrO);
Nat4 put_nth( V_Environment environment,V_List list, Nat4 index, V_Object ptrO );
V_Archive archive_object(V_Environment environment, V_Object object, Int4 *archiveSize);
V_Object unarchive_object(V_Environment environment, V_Archive archive);
V_Object shallow_copy(V_Environment environment, V_Object inputObject);
V_Object copy(V_Environment environment, V_Object inputObject);
V_Archive archive_copy(V_Environment environment, V_Archive archive);
Nat4 archive_size(V_Environment environment, V_Archive archive);

V_Value attribute_add(Int1 *attribute,V_Class inputClass,Nat4 archiveList[],V_Environment environment);
V_Class class_new(Int1 *name,V_Environment environment);
V_Class get_class( V_Dictionary ptrT, Int1 *name );

V_Method method_new(Int1 *name,V_Environment environment);
V_Method method_type_to(V_Method inputMethod,V_Environment environment,Int1 *typeName);
V_Case case_insert(Nat4 index,V_Method method,V_Environment environment);
V_Case case_open(V_Case opCase,V_Operation owner,V_Environment environment);
V_Operation operation_add(V_Case opCase,V_Environment environment);
V_Operation operation_to_input_bar(V_Operation operation,V_Environment environment);
V_Operation operation_to_output_bar(V_Operation operation,V_Environment environment);
V_Operation operation_to_constant(V_Operation operation,V_Environment environment,Int1 *string);
V_Operation operation_to_match(V_Operation operation,V_Environment environment,Int1 *string);
V_Operation operation_to_primitive(V_Operation operation,V_Environment environment,Nat4 inarity,Nat4 outarity,Int1	*function);
V_Operation operation_to_persistent(V_Operation operation,V_Environment environment,Int1 *name);
V_Operation operation_to_local(V_Operation operation,V_Environment environment,Int1 *name);
V_Operation operation_to_universal(V_Operation operation,V_Environment environment,Int1 *name);
V_Operation operation_to_instance(V_Operation operation,V_Environment environment,Int1 *name);
V_Operation operation_to_get(V_Operation operation,V_Environment environment,Int1 *name);
V_Operation operation_to_set(V_Operation operation,V_Environment environment,Int1 *name);
V_Operation operation_to_evaluate(V_Operation operation,V_Environment environment,Int1 *name);
V_Operation operation_to_extconstant(V_Operation operation,V_Environment environment,Int1 *string);
V_Operation operation_to_extmatch(V_Operation operation,V_Environment environment,Int1 *string);
V_Operation operation_to_extget(V_Operation operation,V_Environment environment,Int1 *name);
V_Operation operation_to_extset(V_Operation operation,V_Environment environment,Int1 *name);
V_Operation operation_to_extprocedure(V_Operation operation,V_Environment environment,Nat4 inarity,Nat4 outarity,Int1 *function);

V_Operation operation_repeat_to(V_Operation operation,V_Environment environment,Bool mode);
V_Operation operation_super_to(V_Operation operation,V_Environment environment,Bool mode);
V_Operation operation_breakpoint_to(V_Operation operation,V_Environment environment,Bool mode);
V_Operation operation_value_to(V_Operation operation,V_Environment environment,enum opValueType mode);
V_Operation operation_action_to(V_Operation operation,V_Environment environment,Nat2 action,Bool trigger);
V_Operation operation_inject_to(V_Operation operation,V_Environment environment,Nat4 index);
V_Operation operation_input_to(V_Operation operation,V_Environment environment,Nat4 index,Nat4 mode);
V_Operation operation_output_to(V_Operation operation,V_Environment environment,Nat4 index,Nat4 mode);

V_Terminal input_insert(Nat4 index,V_Operation operation,V_Environment environment);
V_Terminal input_to_simple(V_Terminal terminal,V_Environment environment);
V_Terminal input_to_inject(V_Terminal terminal,V_Environment environment);
V_Terminal input_mode_to(V_Terminal terminal,V_Environment environment,Nat4 mode);

V_Root output_insert(Nat4 index,V_Operation operation,V_Environment environment);
V_Root output_mode_to(V_Root root,V_Environment environment,Nat4 mode);

Nat4 connect_root_to_terminal( V_Case ptrA, Nat4 rootdex, Nat4 upstreamIndex, Nat4 termdex, Nat4 downstreamIndex );
V_Class class_superClass_to(V_Class inputClass,V_Environment environment,Int1 *superClass);
Nat4 add_node( V_Dictionary dictionary, Int1 *name, void *object );
V_Value create_persistentNode(Int1 *name,Nat4 archiveList[],V_Environment environment);
V_Environment createEnvironment(void);
Int4 initialize_environment(V_Environment environment,char *initial);
Int4 execute_environment(V_Environment environment,char *initial,int argc, char *argv[]);
Int4 post_load(V_Environment environment);
Int1 *X_operation_name_instance( V_Environment environment,Int1* tempAString, V_Object tempObject);

enum opTrigger vpx_constant(V_Environment environment, enum boolType *repeat, Nat4 contextClassIndex, Int1 *stringValue, V_Object *root);
enum opTrigger vpx_match(V_Environment environment, enum boolType *repeat, Nat4 contextClassIndex, Int1 *stringValue, V_Object terminal);
enum opTrigger vpx_instantiate(V_Environment environment, enum boolType *repeat, Nat4 contextClassIndex, Int4 classConstant,Nat4 numberOfTerminals,Nat4 numberOfRoots, ...);
enum opTrigger vpx_get(V_Environment environment, enum boolType *repeat, Nat4 contextClassIndex, Int4 classConstant, V_Object terminal, V_Object *root0, V_Object *root1);
enum opTrigger vpx_set(V_Environment environment, enum boolType *repeat, Nat4 contextClassIndex, Int4 valueConstant, V_Object terminal0, V_Object terminal1, V_Object *root0);
enum opTrigger vpx_persistent(V_Environment environment, enum boolType *repeat, Nat4 contextClassIndex, Int4 valueConstant,Nat4 numberOfTerminals,Nat4 numberOfRoots, ...);
enum opTrigger vpx_call_primitive(V_Environment environment, enum boolType *inputRepeat, Nat4 contextClassIndex,void *functionPtr,Nat4 numberOfTerminals,Nat4 numberOfRoots, ...);

enum opTrigger vpx_extconstant(V_Environment environment, enum boolType *repeat, Nat4 contextClassIndex, Int4 enumValue, V_Object *root);
enum opTrigger vpx_extmatch(V_Environment environment, enum boolType *repeat, Nat4 contextClassIndex, Int4 enumValue, V_Object terminal);
enum opTrigger vpx_extget(V_Environment environment, enum boolType *repeat, Nat4 contextClassIndex, Int1 *tempOString,Nat4 numberOfTerminals,Nat4 numberOfRoots, ...);
enum opTrigger vpx_extset(V_Environment environment, enum boolType *repeat, Nat4 contextClassIndex, Int1 *tempOString,Nat4 numberOfTerminals,Nat4 numberOfRoots, ...);

enum opTrigger vpx_call_data_method(V_Environment environment, enum boolType *inputRepeat, Nat4 contextClassIndex,Int4 methodConstant,Nat4 numberOfTerminals,Nat4 numberOfRoots, ...);
enum opTrigger vpx_call_context_method(V_Environment environment, enum boolType *inputRepeat, Nat4 contextClassIndex,Int4 methodConstant,Nat4 numberOfTerminals,Nat4 numberOfRoots, ...);
enum opTrigger vpx_call_context_super_method(V_Environment environment, enum boolType *inputRepeat, Nat4 contextClassIndex,Int4 methodConstant,Nat4 numberOfTerminals,Nat4 numberOfRoots, ...);
enum opTrigger vpx_call_evaluate(V_Environment environment, enum boolType *inputRepeat, Nat4 contextClassIndex,Int1 *inputString,Nat4 numberOfTerminals,Nat4 numberOfRoots, ...);

enum opTrigger vpx_call_inject_get(V_Environment environment, enum boolType *inputRepeat, Nat4 contextClassIndex,Int1 *stringConstant,Nat4 numberOfTerminals,Nat4 numberOfRoots, ...);
enum opTrigger vpx_call_inject_set(V_Environment environment, enum boolType *inputRepeat, Nat4 contextClassIndex,Int1 *stringConstant,Nat4 numberOfTerminals,Nat4 numberOfRoots, ...);
enum opTrigger vpx_call_inject_persistent(V_Environment environment, enum boolType *inputRepeat, Nat4 contextClassIndex,Int1 *stringConstant,Nat4 numberOfTerminals,Nat4 numberOfRoots, ...);
enum opTrigger vpx_call_inject_instance(V_Environment environment, enum boolType *inputRepeat, Nat4 contextClassIndex,Int1 *stringConstant,Nat4 numberOfTerminals,Nat4 numberOfRoots, ...);
enum opTrigger vpx_call_inject_method(V_Environment environment, enum boolType *inputRepeat, Nat4 contextClassIndex,Int1 *stringConstant,Nat4 numberOfTerminals,Nat4 numberOfRoots, ...);
enum opTrigger vpx_call_inject_procedure(V_Environment environment, enum boolType *inputRepeat, Nat4 contextClassIndex,Int1 *stringConstant,Nat4 numberOfTerminals,Nat4 numberOfRoots, ...);

Int4 vpx_spawn_stack(V_Environment environment,char *initial,V_List inputList, V_List outputList,Int4 *success);

Nat4 vpx_multiplex(Nat4 numberOfTerminals, ...);
V_ListRootNode vpx_create_listRootNode(V_Environment environment,V_ListRootNode node, V_Object listRoot);
V_Object vpx_flatten_listRootNodes(V_Environment environment, V_ListRootNode node);
V_Object vpx_increment_count(V_Object object);

Int4 vpx_class_map(V_Environment environment, Int4	classConstant, Int1 *className);
Int4 vpx_method_map(V_Environment environment, Int4	methodConstant, Int1 *methodName);
Int4 vpx_value_map(V_Environment environment, Int4	valueConstant, Int1 *valueName);
Int4 vpx_method_initialize(V_Environment environment, V_Method tempMethod, void *functionPtr, Int1 *textValue);
void *vpx_get_const_pointer(V_Environment environment,Int1* level,V_Object terminal);
void *vpx_get_pointer(V_Environment environment,Nat4 size,Int1 *type,Int1* level,V_Object *object,V_Object terminal);
Real10 vpx_get_real(V_Object object);
Int4 vpx_get_integer(V_Object object);
void *vpx_get_none_pointer(V_Environment environment,Nat4 size,Int1 *type,Int1* level,V_Object *object);

#ifdef __cplusplus
}
#endif

#endif



