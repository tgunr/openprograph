/*
	
	VPL_Primitives.c
	Copyright 2000 Scott B. Anderson, All Rights Reserved.
	
*/
#ifndef INTERPRETERROUTINES
#define INTERPRETERROUTINES

#ifdef __MWERKS__
#include "VPL_Compiler.h"
#elif __GNUC__
//#include "../Engine/VPL_Compiler.h"
//#include <MartenEngine/MartenEngine.h>
#include <MartenEngine/VPL_Compiler.h>
#endif	

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <limits.h>

#define PIPE_LIMIT 4096

enum whichThread {
	kEditor,
	kInterpreter,
	kAny
};

enum interpreterCommand {
	kCommandExit = 0,
	kCommandNoop,
	kCommandExecute,
	kCommandEnvironmentProcessSerialNumbers,
	kCommandEnvironmentGetErrors,
	kCommandEnvironmentNullErrors,
	kCommandEnvironmentPostLoad,
	kCommandEnvironmentLoadBundles,
	kCommandEnvironmentBundlePrimitives,
	kCommandEnvironmentStep,
	kCommandEnvironmentGetPostLoad,
	kCommandEnvironmentSetPostLoad,
	kCommandEnvironmentUnmarkHeap,
	kCommandEnvironmentFindOperation,
	kCommandEnvironmentResourcesChanged,
//	kCommandEnvironmentAbort,
	kCommandClassCreate,
	kCommandClassRemove,
	kCommandClassSet,
	kCommandClassRename,
	kCommandClassOrderAttributes,
	kCommandClassHasInstances,
	kCommandClassMarkInstances,
	kCommandMethodCreate,
	kCommandMethodRemove,
	kCommandMethodSet,
	kCommandMethodRename,
	kCommandMethodOrderCases,
	kCommandCaseInsert,
	kCommandCaseRemove,
	kCommandCaseOrderOperations,
	kCommandOperationInsert,
	kCommandOperationRemove,
	kCommandOperationSet,
	kCommandOperationOrderInputs,
	kCommandOperationOrderOutputs,
	kCommandOperationGetPrimitiveArity,
	kCommandOperationGetProcedureArity,
	kCommandOperationGetMethodArity,
	kCommandOperationGetProcedureInfo,
	kCommandOperationGetPrimitiveInfo,
	kCommandOperationGetConstantInfo,
	kCommandOperationGetStructureInfo,
	kCommandRootInsert,
	kCommandRootRemove,
	kCommandRootSet,
	kCommandTerminalInsert,
	kCommandTerminalRemove,
	kCommandTerminalSet,
	kCommandPersistentCreate,
	kCommandPersistentRemove,
	kCommandPersistentRename,
	kCommandAttributeInsert,
	kCommandAttributeRemove,
	kCommandAttributeRename,
	kCommandElementUnarchiveValue,
	kCommandElementGetValue,
	kCommandElementGetInteger,
	kCommandElementSetValue,
	kCommandStackCreate,
	kCommandStackRemove,
	kCommandStackAdvance,
	kCommandFrameGetWindow,
	kCommandFrameSetWindow,
	kCommandFrameGetCurrentOperation,
	kCommandFrameSetCurrentOperation,
	kCommandFrameStepOut,
	kCommandFrameGetIOValue,
	kCommandFrameSetIOValue,
	kCommandFramePreviousFrame,
	kCommandFrameSetBreakpoint,
	kCommandWatchpointGet,
	kCommandWatchpointSet,
	kCommandWatchpointGetInstances,
	kCommandWatchpointClearAll,
	kCommandValueGetType,
	kCommandValueGetMark,
	kCommandValueGetList,
	kCommandValueGetString,
	kCommandValueGetClassName,
	kCommandValueGetArchive,
	kCommandValueInstanceSetAttribute,
	kCommandValueInstanceToValue,
	kCommandValueStringToValue,
	kCommandValueListToValue,
	kCommandValueValueToValue,
	kCommandValueArchiveToValue,
	kCommandValueDecrement,
	kCommandValueIncrement
};

enum {
	kvpl_CommandNone,
	kvpl_CommandRunning,
	kvpl_CommandReading,
};

void EnableCommandBadge( Boolean drawBadge );

Int4 attribute_offset( V_Class tempClass , Int1 *tempOString );

Int4 environment_set_current_operation(V_Environment environment,V_Frame theFrame,Nat4 index,Nat4** theBlock,Nat4* theNumberOfFrames);

Int4 rename_class_methods( V_Environment environment,Int1* oldName, Int1* newName);
Int4 rename_class_persistents( V_Environment environment,Int1* oldName, Int1* newName);

enum opTrigger class_create(V_Environment environment, Int1 *className, V_Class *tempClass);
enum opTrigger class_remove(V_Environment environment, V_Class tempClass);
enum opTrigger class_set(V_Environment environment, V_Class tempClass, Int1 *superClass);
enum opTrigger class_rename(V_Environment environment, Int1 *oldName, Int1 *provisionalName);

enum opTrigger mark_instances(V_Environment environment,V_Class theUpdatedClass);

enum opTrigger attribute_create(V_Environment environment, V_Class tempClass, Int1 *attributeName, Nat4 attributePosition, V_Archive archivePtr, V_Value *tempAttribute);
enum opTrigger attribute_rename(V_Environment environment, V_Class tempClass, Int1 *oldName, Int1 *provisionalName);

enum opTrigger method_create(V_Environment environment, Int1 *methodName, V_Method *tempMethod);
enum opTrigger method_remove(V_Environment environment, V_Method tempMethod);
enum opTrigger method_set(V_Environment environment, V_Method tempMethod, Int1 *textValue);
enum opTrigger method_rename(V_Environment environment, Int1 *oldName, Int1 *provisionalName);

enum opTrigger case_create(V_Environment environment, V_Method tempMethod, Nat4 casePosition, Nat4 editorCase, V_Case *tempCase);
enum opTrigger operation_create(V_Environment environment, V_Case tempCase, Nat4 operationPosition, Nat4 editorOperation, V_Operation *tempOperation);
Nat4 *operation_destroy(V_Environment environment, V_Operation tempOperation, Nat4 *blockSize);
enum opTrigger operation_set(V_Environment environment,V_Operation tempOperation,Nat4 theType,Nat4 operationControl,Nat4 theAction,Nat4 operationRepeat,Int1 *operationText,Nat4 operationInject,Nat4 operationSuper,Nat4 operationBreak,Nat4 operationValue);
enum opTrigger root_create(V_Environment environment, V_Operation tempOperation, Nat4 rootPosition, V_Root *tempRoot);
enum opTrigger terminal_create(V_Environment environment, V_Operation tempOperation, Nat4 terminalPosition, V_Terminal *tempTerminal);

enum opTrigger persistent_create(V_Environment environment, Int1 *persistentName, V_Archive archivePtr, V_Value *tempPersistent);
enum opTrigger persistent_remove(V_Environment environment, Int1 *persistentName);
enum opTrigger persistent_rename(V_Environment environment, Int1 *oldName, Int1 *provisionalName);

OSErr FindApplicationPackageDirectory(short *theVRefNum, long *theParID);
OSErr CreateBundleFromFSSpec(FSSpec *theSpec, CFBundleRef *theBundle);
enum opTrigger environment_load_bundles(V_Environment environment, FSSpec *fsspec, Int1 *newString);
OSErr CreateBundleFromFilePath(vpl_StringPtr thePath, CFBundleRef *theBundle);
enum opTrigger environment_load_bundles_path(V_Environment environment, vpl_StringPtr filePath, Int1 *newString);
enum opTrigger stack_create(V_Environment environment, Int1* theMethod, V_List inputList,V_Stack *stack,V_List *outputList);
Nat4 user_cancel(void);
Nat4 stack_advance(V_Environment environment, V_Stack stack);
Int4 command_spawn_stack(V_Environment environment,char *initial,V_List inputList, V_List outputList,Int4 *success);
Int4 command_loop(V_Environment environment,V_Stack initialStack);
pascal voidPtr thread_entry_routine(void *environmentBlock);

#if __VPL_DISATCH_USES_FFI__
void InterpreterCallbackHandler( ffi_cif* cif, void* result, void** args, void* userdata );
#else
void InterpreterCallbackHandler(void);
#endif // __VPL_DISATCH_USES_FFI__

Int4	vpx_ipc_write_block(V_Environment environment,enum whichThread theThread,Int4 writeFileDescriptor,void* block,Nat4 blockSize);
Int4	vpx_ipc_read_block(V_Environment environment,enum whichThread theThread,Int4 readFileDescriptor,void* block,Nat4 blockSize);
Int4	vpx_ipc_write_word(V_Environment environment,enum whichThread theThread,Int4 writeFileDescriptor,void* word);
Int4	vpx_ipc_read_word(V_Environment environment,enum whichThread theThread,Int4 readFileDescriptor,void* word);
Int4	vpx_ipc_write_string(V_Environment environment,enum whichThread theThread,Int4 writeFileDescriptor,Int1* theString);
Int4	vpx_ipc_read_string(V_Environment environment,enum whichThread theThread,Int4 readFileDescriptor,Int1** theString);
Int4	vpx_ipc_write_archive(V_Environment environment,enum whichThread theThread,Int4 writeFileDescriptor,V_Archive archive);
Int4	vpx_ipc_read_archive(V_Environment environment,enum whichThread theThread,Int4 readFileDescriptor,V_Archive *archive);

Int4	vpx_ipc_read_byteorder(V_Environment environment,enum whichThread theThread,Int4 readFileDescriptor);
Int4	vpx_ipc_write_byteorder(V_Environment environment,enum whichThread theThread,Int4 writeFileDescriptor);
Int4	vpx_ipc_read_swapped_block(V_Environment environment,enum whichThread theThread,Int4 readFileDescriptor,void* block,Nat4 blockSize,Int1 byteSize);
Int4	vpx_ipc_write_swapped_block(V_Environment environment,enum whichThread theThread,Int4 writeFileDescriptor,void* block,Nat4 blockSize,Int1 byteSize);
void	vpx_ipc_swap_block(void* block,Nat4 blockSize, Int1 byteSize);
UInt8	vpx_SwapInt8( UInt8 swapInt );
UInt8	vpx_SwapInt8HostToBig( UInt8 swapInt );

#endif
