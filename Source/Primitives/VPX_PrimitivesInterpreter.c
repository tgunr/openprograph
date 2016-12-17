/*
	
	VPL_PrimitivesInterpreter.c
	Copyright 2004 Scott B. Anderson, All Rights Reserved.
	
*/
#ifdef __MWERKS__
#include "VPL_Compiler.h"
#elif __GNUC__
#include "../../Source/Engine/VPL_Compiler.h"
#endif	
#include "InterpreterRoutines.h"
#include "FSCopyObject.h"

Int4	gWriteFileDescriptor = 0;
Int4	gReadFileDescriptor = 0;
Int1	*gWriteFifoName = "/tmp/fifoMacVPLWrite";
Int1	*gReadFifoName = "/tmp/fifoMacVPLRead";
Int1	theReadFifoName[256];
Int1	theWriteFifoName[256];

#pragma mark --------------- Environment Primitives ---------------

Int4 VPLP_create_2D_environment( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_create_2D_environment( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	V_Object		outputObject = NULL;
    FSRef			*theFileRef = NULL;
	V_ExternalBlock		ptrO = NULL;
	V_Environment	theEnvironment = NULL;
	Int4	theWriteFileDescriptor = 0;
	Int4	theReadFileDescriptor = 0;
	FSRef			newRef;

	Int4 result = 0;
	vpl_StringPtr	theMode = NULL;
	Int1*			primName = "create-environment";
	V_Object			block = NULL;
	FSSpec		 		*fsspec = NULL;
	vpl_Boolean		createExecutable = kFALSE;
	
#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 3 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 6 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kString,0,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kBoolean,2,primName, primitive, environment );
	if( result != kNOERROR ) return result;

#endif

	VPLPrimGetInputObjectString( &theMode, 0, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	if(strcmp(theMode,"Process") == 0)
	{
		FSRef		outRef;
		OSStatus	result = noErr;
		OSErr			osErr;
		
		LSLaunchFSRefSpec myLSpec;
		HFSUniStr255	theApplicationName;

		block = VPLPrimGetInputObject(1,primitive,environment);
		if( block == NULL || block->type != kExternalBlock) return kWRONGINPUTTYPE;
		if( strcmp(((V_ExternalBlock)block)->name,"FSSpec") != 0) return kWRONGINPUTTYPE;
		
		fsspec = (FSSpec *) ((V_ExternalBlock)block)->blockPtr;
	
		VPLPrimGetInputObjectBool( &createExecutable, 2, primName, primitive, environment );
		if( result != kNOERROR ) return result;

		if(createExecutable == kFALSE) FSpMakeFSRef(fsspec,&newRef);
		else {
//    		Int1		*applicationName = (Int1 *) X_malloc((fsspec->name[0]+1)*sizeof(Int1));
    		Int4		theNumberOfBytes = 0;
			short		refNum = 0;
			FSSpec		theSpec;
			FSRef		theAppDirectoryRef;
			FSRef		inRef;
			CFBundleRef	mainBundle = CFBundleGetMainBundle();
			CFURLRef	theURLRef = CFBundleCopyResourceURL(mainBundle,CFSTR("Interpreter_d.app"),NULL,NULL);
			Boolean		isGood = CFURLGetFSRef(theURLRef,&inRef);

			osErr = FSpCreate(fsspec,'iVPL','APPL',smSystemScript);
			osErr = FSpMakeFSRef(fsspec,&newRef);
			osErr = FSGetCatalogInfo(&newRef,kFSCatInfoNone,NULL,&theApplicationName,NULL,&theAppDirectoryRef);

		{
			FSRef		delRef;							// First, remove any ".DeleteMe" folder if it exists
			Boolean		isDelGood = false;
			CFURLRef	theDelURL = NULL;
			CFURLRef	theDirURL = CFURLCreateFromFSRef( kCFAllocatorDefault, &theAppDirectoryRef );
			
			if( theDirURL ) theDelURL = CFURLCreateCopyAppendingPathComponent( kCFAllocatorDefault, theDirURL, CFSTR(".DeleteMe"), true );
			if( theDelURL ) isDelGood = CFURLGetFSRef(theDelURL, &delRef);
			if( isDelGood ) osErr = FSDeleteObjects( &delRef );
						
			if( theDelURL ) CFRelease( theDelURL );
			if( theDirURL ) CFRelease( theDirURL );
		}

			osErr = FSCopyObject(&inRef,&theAppDirectoryRef,0,kFSCatInfoNone,kDupeActionReplace,&theApplicationName,true,false,NULL,NULL,&newRef,NULL);

			if( osErr != noErr ) printf( "FSCopyObject result: %d\n", osErr );

		/* Now update the Info.plist file and the InfoPlist.strings file */

			if(theURLRef) CFRelease(theURLRef);
//			if(mainBundle) CFRelease(mainBundle);
			
			theURLRef = CFURLCreateFromFSRef(NULL,&newRef);
			mainBundle = CFBundleCreate(NULL,theURLRef);
			if(theURLRef) CFRelease(theURLRef);
			theURLRef = CFBundleCopyResourceURLForLocalization(mainBundle,CFSTR("InfoPlist.strings"),NULL,NULL,CFSTR("English"));
			isGood = CFURLGetFSRef(theURLRef,&inRef);
			if(theURLRef) CFRelease(theURLRef);
			if(mainBundle) CFRelease(mainBundle);
			FSGetCatalogInfo(&inRef,kFSCatInfoNone,NULL,NULL,&theSpec,NULL);

			osErr = FSpOpenDF(&theSpec,fsCurPerm,&refNum);
		
/*
			result = GetEOF(refNum,&theNumberOfBytes);
			if(result == 0){
    			Int1	*theTextBuffer = (Int1 *) X_malloc(theNumberOfBytes+1);
				if(theNumberOfBytes != NULL){
					result = FSRead(refNum,&theNumberOfBytes,theTextBuffer);
					if(result == 0) {
						Int1	*theOffset = strstr(theTextBuffer,"Interpreter_d");
						theTextBuffer[theNumberOfBytes] = '\0';
						CopyPascalStringToC(fsspec->name,applicationName);
						
						while(theOffset != NULL) {
							Nat4	theNewSize = strlen(applicationName) - strlen("Interpreter_d") + strlen(theTextBuffer);
							Nat4	theLength = theOffset - theTextBuffer;
							Int1	*firstString = (Int1 *) calloc(theNewSize + 1,sizeof(Int1));
							memcpy(firstString,theTextBuffer,theLength);
							memcpy(firstString+theLength,applicationName,strlen(applicationName));
							strcat(firstString,theTextBuffer + theLength + strlen("Interpreter_d"));
							X_free(theTextBuffer);
							theTextBuffer = firstString;
							theOffset = strstr(theTextBuffer,"Interpreter_d");
						}
						theNumberOfBytes = strlen(theTextBuffer);
						result = SetFPos(refNum,fsFromStart,0);
						if(result == 0){
							result = FSWrite(refNum,&theNumberOfBytes,theTextBuffer);
							if(result == 0){
								result = SetEOF(refNum,theNumberOfBytes);
							}
						}
						X_free(theTextBuffer);
					}
				}
			}
			osErr = FSClose(refNum);
*/

			result = GetEOF(refNum,&theNumberOfBytes);
			if(result == 0){
    			UInt8	*theTextBuffer = (UInt8 *) X_malloc(theNumberOfBytes*sizeof(UInt8));
				if(theNumberOfBytes != 0){
					result = FSRead(refNum,&theNumberOfBytes,theTextBuffer);
					if(result == 0) {
//						CFStringRef	theNameRef = CFStringCreateWithPascalString(NULL,fsspec->name,kCFStringEncodingMacHFS);
						CFStringRef	theNameRef = CFStringCreateWithCharacters(NULL,theApplicationName.unicode,theApplicationName.length);
						CFIndex		theNameRefLength = CFStringGetLength(theNameRef);
						CFStringRef	theInterpreterRef = CFSTR("Interpreter_d");
						CFStringRef	theTextRef = CFStringCreateWithBytes(NULL,theTextBuffer,theNumberOfBytes,kCFStringEncodingUnicode,true);
						CFIndex		theTextRefLength = CFStringGetLength(theTextRef);
						CFStringRef	theApplicationRef;
						
						CFRange		theRange = CFStringFind(theTextRef,theInterpreterRef,0);
						CFRange		theAppRange = CFStringFind(theNameRef,CFSTR(".app"),0);

						theAppRange.length = theAppRange.location;
						theAppRange.location = 0;
						theApplicationRef = CFStringCreateWithSubstring(NULL,theNameRef,theAppRange);
						theNameRefLength = CFStringGetLength(theApplicationRef);
						
						CFRelease(theNameRef);
						theNameRef = theApplicationRef;

						X_free(theTextBuffer);

						while(theRange.length != 0) {
							CFStringRef	theFirstStringRef;
							CFStringRef	theLastStringRef;
							CFStringRef theConcatenatedStringRef;
							CFRange		thePrefix;
							CFRange		theSuffix;

							thePrefix.location = 0;
							thePrefix.length = theRange.location;
						
							theSuffix.location = theRange.location + theRange.length;
							theSuffix.length = theTextRefLength - theSuffix.location;
						
							theFirstStringRef = CFStringCreateWithSubstring(NULL,theTextRef,thePrefix);
							theLastStringRef = CFStringCreateWithSubstring(NULL,theTextRef,theSuffix);
							theConcatenatedStringRef = CFStringCreateWithFormat(NULL,NULL,CFSTR("%@%@%@"),theFirstStringRef,theNameRef,theLastStringRef);
							CFRelease(theFirstStringRef);
							CFRelease(theLastStringRef);
							CFRelease(theTextRef);
							theTextRef = theConcatenatedStringRef;
							theTextRefLength = CFStringGetLength(theTextRef);
							theRange = CFStringFind(theTextRef,theInterpreterRef,0);
						}
						
						CFRelease(theNameRef);
						CFRelease(theInterpreterRef);
						theTextRefLength = CFStringGetLength(theTextRef);
						theRange.location = 0;
						theRange.length = theTextRefLength;
						theNumberOfBytes = CFStringGetMaximumSizeForEncoding(theTextRefLength,kCFStringEncodingUnicode);
						theTextBuffer = (UInt8 *) X_malloc(theNumberOfBytes*sizeof(UInt8));
						CFStringGetBytes(theTextRef,theRange,kCFStringEncodingUnicode,0,true,theTextBuffer,theNumberOfBytes,NULL);
						CFRelease(theTextRef);
						result = SetFPos(refNum,fsFromStart,0);
						if(result == 0){
							result = FSWrite(refNum,&theNumberOfBytes,theTextBuffer);
							if(result == 0){
								result = SetEOF(refNum,theNumberOfBytes);
							}
						}
						X_free(theTextBuffer);
					}
				}
			}
			osErr = FSClose(refNum);

		}

		myLSpec.appRef = &newRef;
		myLSpec.numDocs = 0;
		myLSpec.itemRefs = NULL;
		myLSpec.passThruParams = NULL;
		myLSpec.launchFlags = kLSLaunchDontAddToRecents | kLSLaunchDontSwitch | kLSLaunchNoParams | kLSLaunchNewInstance | kLSLaunchAsync;
		myLSpec.asyncRefCon = NULL;

		result = LSOpenFromRefSpec( &myLSpec, &outRef );
		
		if( result != noErr ) printf( "LSOpenFromRefSpec result: %ld\n", result );


		if(mkfifo(gWriteFifoName, S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH) < 0 && errno != EEXIST) printf("Can't create FIFO");
		if(mkfifo(gReadFifoName, S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH) < 0 && errno != EEXIST) printf("Can't create FIFO");
		
		theWriteFileDescriptor = open(gWriteFifoName,O_WRONLY);
		if(theWriteFileDescriptor == -1){
			unlink(gWriteFifoName);
			unlink(gReadFifoName);
			perror("Open Write Descriptor FIFO failure");
			*trigger = kFailure;	
			return kNOERROR;
		}
		theReadFileDescriptor = open(gReadFifoName,O_RDONLY);
		if(theReadFileDescriptor == -1){
			unlink(gWriteFifoName);
			unlink(gReadFifoName);
			perror("Open Read Descriptor FIFO failure");
			*trigger = kFailure;	
			return kNOERROR;
		}
		
	 } else {
		ThreadID	theThreadID = 0;
		ThreadEntryUPP	theThreadEntryUPP = NULL;
		int			pipeError = 0;
		int			fileDescriptors[2];
		OSErr		threadError = noErr;
		
		theEnvironment = createEnvironment();
		theEnvironment->callbackHandler = InterpreterCallbackHandler;
		theEnvironment->stackSpawner = command_spawn_stack;
		theEnvironment->interpreterMode = kThread;
		theEnvironment->compiled = kFALSE;
		GetCurrentThread(&theThreadID);
		theEnvironment->editorThreadID = theThreadID;
		theThreadEntryUPP = NewThreadEntryUPP(&thread_entry_routine);
		NewThread(kCooperativeThread,theThreadEntryUPP,theEnvironment,0,kCreateIfNeeded,NULL,&theThreadID);
		theEnvironment->interpreterThreadID = theThreadID;
		
		pipeError = pipe(fileDescriptors);
		theEnvironment->pipeWriteFileDescriptor = fileDescriptors[0];
		theWriteFileDescriptor = fileDescriptors[1];
		pipeError = pipe(fileDescriptors);
		theEnvironment->pipeReadFileDescriptor = fileDescriptors[1];
		theReadFileDescriptor = fileDescriptors[0];
		threadError = YieldToThread(theEnvironment->interpreterThreadID);
		
	 }


/* Interpreter Command */
	{
		OSErr				threadError = noErr;
		Nat4				bufferSize = 0;
		ProcessSerialNumber	process;
		pid_t				processID = 0;
		pid_t				EditorProcessID = 0;
		pid_t				InterpreterProcessID = 0;
		
		vpx_ipc_write_byteorder(theEnvironment,kInterpreter,theWriteFileDescriptor);

		Nat4	command = kCommandEnvironmentProcessSerialNumbers;
		vpx_ipc_write_word(theEnvironment,kInterpreter,theWriteFileDescriptor,&command);
		
		GetCurrentProcess(&process);
		GetProcessPID(&process,&processID);
		EditorProcessID = processID;
		bufferSize = processID;
		vpx_ipc_write_word(theEnvironment,kInterpreter,theWriteFileDescriptor,&bufferSize);

		vpx_ipc_read_word(theEnvironment,kInterpreter,theReadFileDescriptor,&bufferSize);
		processID = bufferSize;
		InterpreterProcessID = processID;
		snprintf(theWriteFifoName,sizeof(theWriteFifoName), "/tmp/fifoInterpreterWrite_%ld_%ld",(long int) EditorProcessID,(long int) InterpreterProcessID);
		snprintf(theReadFifoName,sizeof(theReadFifoName), "/tmp/fifoInterpreterRead_%ld_%ld",(long int) EditorProcessID,(long int) InterpreterProcessID);

	if(strcmp(theMode,"Process") == 0)
	{
		close(theReadFileDescriptor);
		unlink(gReadFifoName);
		

		if(mkfifo(theWriteFifoName, S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH) < 0 && errno != EEXIST) printf("Can't create FIFO");
		if(mkfifo(theReadFifoName, S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH) < 0 && errno != EEXIST) printf("Can't create FIFO");
	}

		bufferSize = kTRUE;
		if(theEnvironment && theEnvironment->interpreterMode == kThread) threadError = YieldToThread(environment->interpreterThreadID);
		vpx_ipc_write_word(theEnvironment,kInterpreter,theWriteFileDescriptor,&bufferSize);

		if(strcmp(theMode,"Process") == 0) {
			theWriteFileDescriptor = open(theWriteFifoName,O_WRONLY);
			theReadFileDescriptor = open(theReadFifoName,O_RDONLY);
		}
	}

		outputObject = (V_Object) int_to_integer((Nat4) theEnvironment,environment);
		VPLPrimSetOutputObject(environment,primInArity,0,primitive, (V_Object) outputObject);

		outputObject = (V_Object) create_string(theWriteFifoName,environment);
		VPLPrimSetOutputObject(environment,primInArity,1,primitive, (V_Object) outputObject);

		outputObject = (V_Object) create_string(theReadFifoName,environment);
		VPLPrimSetOutputObject(environment,primInArity,2,primitive, (V_Object) outputObject);

		outputObject = (V_Object) int_to_integer(theWriteFileDescriptor,environment);
		VPLPrimSetOutputObject(environment,primInArity,3,primitive, (V_Object) outputObject);

		outputObject = (V_Object) int_to_integer(theReadFileDescriptor,environment);
		VPLPrimSetOutputObject(environment,primInArity,4,primitive, (V_Object) outputObject);

	if(strcmp(theMode,"Process") == 0)
	{
		theFileRef = (FSRef *) X_malloc(sizeof (FSRef));
		*theFileRef = newRef;
		ptrO = create_externalBlock("FSRef",sizeof (FSRef),environment);
		ptrO->blockPtr = (void *) theFileRef;
		VPLPrimSetOutputObject(environment,primInArity,5,primitive, (V_Object) ptrO);
	} else {
		VPLPrimSetOutputObjectNULL(environment,primInArity,5,primitive);
	}

	*trigger = kSuccess;	

	return kNOERROR;
}

Int4 VPLP_post_2D_load( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_post_2D_load( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	vpl_Integer		interpreterEnvironment = 0;
	Int1			*primName = "post-load";
	vpl_Integer		theWriteDescriptor = 0;
	vpl_Integer		theReadDescriptor = 0;
	
	Int4 result = 0;
	
#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 3 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 0 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,0,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,1,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,2,primName, primitive, environment );
	if( result != kNOERROR ) return result;

#endif

	VPLPrimGetInputObjectInteger( &interpreterEnvironment, 0, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theWriteDescriptor, 1, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theReadDescriptor, 2, primName, primitive, environment );
	if( result != kNOERROR ) return result;

/* Interpreter Command */
	if(theReadDescriptor)
	{
		OSErr	threadError = noErr;
		
		Int4 interpreterResult = 0;
		Nat4 command = kCommandEnvironmentPostLoad;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&command);
		
		vpx_ipc_read_word((V_Environment) interpreterEnvironment,kInterpreter,theReadDescriptor,&interpreterResult);

		*trigger = interpreterResult;	
		if((V_Environment) interpreterEnvironment && ((V_Environment) interpreterEnvironment)->interpreterMode == kThread) threadError = YieldToThread(((V_Environment) interpreterEnvironment)->interpreterThreadID);
	}
/* End Interpreter Command */

	return kNOERROR;
}

Int4 VPLP_load_2D_bundle( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_load_2D_bundle( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	vpl_Integer		interpreterEnvironment = 0;
	Int1			*primName = "load-bundle";
	vpl_Integer		theWriteDescriptor = 0;
	vpl_Integer		theReadDescriptor = 0;
	Int4 			result = 0;
	
	V_Object			block = NULL;
	FSSpec		 		*fsspec = NULL;
	vpl_StringPtr		filePath = NULL;

    vpl_StringPtr		newString = NULL;

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 5 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 0 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,0,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,1,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,2,primName, primitive, environment );
	if( result != kNOERROR ) return result;

//	result = VPLPrimCheckInputObjectType( kExternalBlock,3,primName, primitive, environment );
	result = VPLPrimCheckInputObjectType( kString,3,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kString,4,primName, primitive, environment );
	if( result != kNOERROR ) return result;

#endif

	VPLPrimGetInputObjectInteger( &interpreterEnvironment, 0, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimGetInputObjectInteger( &theWriteDescriptor, 1, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimGetInputObjectInteger( &theReadDescriptor, 2, primName, primitive, environment );
	if( result != kNOERROR ) return result;

//	block = VPLPrimGetInputObject(3,primitive,environment);
//	if( strcmp(((V_ExternalBlock)block)->name,"FSSpec") != 0) return kWRONGINPUTTYPE;
//	
//	fsspec = (FSSpec *) ((V_ExternalBlock)block)->blockPtr;

	result = VPLPrimGetInputObjectString( &filePath, 3, primName, primitive, environment);
	if( result != kNOERROR ) return result;

	result = VPLPrimGetInputObjectString( &newString, 4, primName, primitive, environment);
	if( result != kNOERROR ) return result;
	
/* Interpreter Command */
	if(theReadDescriptor)
	{
		OSErr	threadError = noErr;
		
		Int4 interpreterResult = 0;
		Nat4 command = kCommandEnvironmentLoadBundles;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&command);
		
//		vpx_ipc_write_block((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,fsspec,sizeof(FSSpec));
		vpx_ipc_write_string((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,filePath);

		vpx_ipc_write_string((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,newString);

		vpx_ipc_read_word((V_Environment) interpreterEnvironment,kInterpreter,theReadDescriptor,&interpreterResult);

		*trigger = interpreterResult;	
		if((V_Environment) interpreterEnvironment && ((V_Environment) interpreterEnvironment)->interpreterMode == kThread) threadError = YieldToThread(((V_Environment) interpreterEnvironment)->interpreterThreadID);
	}
/* End Interpreter Command */

	return kNOERROR;
}

Int4 VPLP_bundle_2D_primitives( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_bundle_2D_primitives( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	vpl_Integer		interpreterEnvironment = 0;
	V_Object		outputObject = NULL;
	Int1			*primName = "bundle-primitives";
	vpl_Integer		theWriteDescriptor = 0;
	vpl_Integer		theReadDescriptor = 0;
	Int4 			result = 0;

/* Variables to handle inputs */
	
	vpl_StringPtr		bundleName = NULL;

/* Variables to handle internal processing */
	
/* Variables to handle output processing */
	

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 4 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,0,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,1,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,2,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kString,3,primName, primitive, environment );
	if( result != kNOERROR ) return result;

#endif

	VPLPrimGetInputObjectInteger( &interpreterEnvironment, 0, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theWriteDescriptor, 1, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theReadDescriptor, 2, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectString( &bundleName, 3, primName, primitive, environment );
	if( result != kNOERROR ) return result;

/* Interpreter Command */
	if(theReadDescriptor)
	{
		OSErr	threadError = noErr;
		Nat4		bufferSize = 0;
		Int1		*stringBuffer = NULL;
		V_List		theList = NULL;
		Nat4		counter = 0;
		Nat4		numberOfPrimitives = 0;
		
		Int4 interpreterResult = 0;
		Nat4 command = kCommandEnvironmentBundlePrimitives;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&command);
		
		vpx_ipc_write_string((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,bundleName);

		vpx_ipc_read_word((V_Environment) interpreterEnvironment,kInterpreter,theReadDescriptor,&interpreterResult);

		vpx_ipc_read_word((V_Environment) interpreterEnvironment,kInterpreter,theReadDescriptor,&bufferSize);
		numberOfPrimitives = bufferSize;

		theList = create_list(numberOfPrimitives,environment);
		for(counter = 0;counter<numberOfPrimitives;counter++){
			vpx_ipc_read_string((V_Environment) interpreterEnvironment,kInterpreter,theReadDescriptor,&stringBuffer);
			if(stringBuffer){
				outputObject = (V_Object) create_string(stringBuffer,environment);
				X_free(stringBuffer);
			} else {
				outputObject = NULL;
			}
			theList->objectList[counter] = outputObject;
		}

		VPLPrimSetOutputObject(environment,primInArity,0,primitive,(V_Object) theList);
		*trigger = interpreterResult;	
		if((V_Environment) interpreterEnvironment && ((V_Environment) interpreterEnvironment)->interpreterMode == kThread) threadError = YieldToThread(((V_Environment) interpreterEnvironment)->interpreterThreadID);
	}
/* End Interpreter Command */

	return kNOERROR;
}

Int4 VPLP_dispose_2D_environment( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_dispose_2D_environment( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	vpl_Integer		interpreterEnvironment = 0;
	Int1			*primName = "dispose-environment";
	vpl_StringPtr	theWriteName = NULL;
	vpl_StringPtr	theReadName = NULL;
	vpl_Integer		theWriteDescriptor = 0;
	vpl_Integer		theReadDescriptor = 0;
	FSRef			*theFileRefPtr = NULL;
	V_Object		block = NULL;

	Int4 result = 0;
	
#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 6 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 0 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,0,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kString,1,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kString,2,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,3,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,4,primName, primitive, environment );
	if( result != kNOERROR ) return result;

#endif

	VPLPrimGetInputObjectInteger( &interpreterEnvironment, 0, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimGetInputObjectString( &theWriteName, 1, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimGetInputObjectString( &theReadName, 2, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theWriteDescriptor, 3, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theReadDescriptor, 4, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	block = VPLPrimGetInputObject(5,primitive,environment);
	if( block == NULL) theFileRefPtr = NULL;
	else if(block->type != kExternalBlock) return record_error("dispose-environment: Input 1 type not externalBlock! - ",NULL,kWRONGINPUTTYPE,environment);
	else if( strcmp(((V_ExternalBlock)block)->name,"FSRef") != 0) return record_error("extract-file-specification: Input 1 external not type FSRef! - ",NULL,kWRONGINPUTTYPE,environment);
	else theFileRefPtr = (FSRef *) ((V_ExternalBlock)block)->blockPtr;
	
/* Interpreter Command */
	if(theReadDescriptor)
	{
		OSErr	threadError = noErr;

		Int4 interpreterResult = 0;
		Nat4 command = kCommandExit;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&command);
		
		vpx_ipc_read_word((V_Environment) interpreterEnvironment,kInterpreter,theReadDescriptor,&interpreterResult);

		if(!interpreterEnvironment || ((V_Environment)interpreterEnvironment)->interpreterMode == kProcess){
			close(theWriteDescriptor);
		
			unlink(theWriteName);

			close(theReadDescriptor);
		
			unlink(theReadName);
//			osErr = FSDeleteObjects( theFileRefPtr );
		}

		*trigger = kSuccess;	
		if((V_Environment) interpreterEnvironment && ((V_Environment) interpreterEnvironment)->interpreterMode == kThread) threadError = YieldToThread(((V_Environment) interpreterEnvironment)->interpreterThreadID);
	}
/* End Interpreter Command */

	return kNOERROR;
}

Int4 VPLP_get_2D_post_2D_load( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_get_2D_post_2D_load( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	vpl_Integer		interpreterEnvironment = 0;
	Int1			*primName = "get-errors";
	vpl_Integer		theWriteDescriptor = 0;
	vpl_Integer		theReadDescriptor = 0;
	
	Int4 result = 0;
	
#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 3 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArityMax(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,0,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,1,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,2,primName, primitive, environment );
	if( result != kNOERROR ) return result;

#endif

	VPLPrimGetInputObjectInteger( &interpreterEnvironment, 0, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theWriteDescriptor, 1, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theReadDescriptor, 2, primName, primitive, environment );
	if( result != kNOERROR ) return result;

/* Interpreter Command */
	if(theReadDescriptor)
	{
		OSErr	threadError = noErr;
		Nat4	bufferSize = 0;
		Int4 interpreterResult = 0;
		vpl_Boolean		postLoad = kFALSE;
		
		Nat4 command = kCommandEnvironmentGetPostLoad;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&command);
		
		vpx_ipc_read_word((V_Environment) interpreterEnvironment,kInterpreter,theReadDescriptor,&interpreterResult);

		vpx_ipc_read_word((V_Environment) interpreterEnvironment,kInterpreter,theReadDescriptor,&bufferSize);
		postLoad = bufferSize;

		result = VPLPrimSetOutputObjectBoolOrFail( environment, trigger, primInArity, primOutArity, primitive, postLoad );

		if((V_Environment) interpreterEnvironment && ((V_Environment) interpreterEnvironment)->interpreterMode == kThread) threadError = YieldToThread(((V_Environment) interpreterEnvironment)->interpreterThreadID);
	}
/* End Interpreter Command */

	return kNOERROR;
}

Int4 VPLP_set_2D_post_2D_load( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_set_2D_post_2D_load( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	vpl_Integer		interpreterEnvironment = 0;
	Int1			*primName = "set-post-load";
	vpl_Integer		theWriteDescriptor = 0;
	vpl_Integer		theReadDescriptor = 0;
	Int4 			result = 0;
	
    vpl_Boolean		postLoad = kFALSE;

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 4 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 0 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,0,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,1,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,2,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kBoolean,3,primName, primitive, environment );
	if( result != kNOERROR ) return result;

#endif

	VPLPrimGetInputObjectInteger( &interpreterEnvironment, 0, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimGetInputObjectInteger( &theWriteDescriptor, 1, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimGetInputObjectInteger( &theReadDescriptor, 2, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimGetInputObjectBool( &postLoad, 3, primName, primitive, environment);
	if( result != kNOERROR ) return result;
	
/* Interpreter Command */
	if(theReadDescriptor)
	{
		OSErr	threadError = noErr;
		Nat4	bufferSize = 0;
		
		Int4 interpreterResult = 0;
		Nat4 command = kCommandEnvironmentSetPostLoad;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&command);
		
		bufferSize = postLoad;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&bufferSize);

		vpx_ipc_read_word((V_Environment) interpreterEnvironment,kInterpreter,theReadDescriptor,&interpreterResult);

		*trigger = interpreterResult;	
		if((V_Environment) interpreterEnvironment && ((V_Environment) interpreterEnvironment)->interpreterMode == kThread) threadError = YieldToThread(((V_Environment) interpreterEnvironment)->interpreterThreadID);
	}
/* End Interpreter Command */

	return kNOERROR;
}

Int4 VPLP_unmark_2D_heap( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_unmark_2D_heap( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	vpl_Integer		interpreterEnvironment = 0;
	Int1			*primName = "unmark-heap";
	vpl_Integer		theWriteDescriptor = 0;
	vpl_Integer		theReadDescriptor = 0;
	
	Int4 result = 0;
	
#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 3 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 0 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,0,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,1,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,2,primName, primitive, environment );
	if( result != kNOERROR ) return result;

#endif

	VPLPrimGetInputObjectInteger( &interpreterEnvironment, 0, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theWriteDescriptor, 1, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theReadDescriptor, 2, primName, primitive, environment );
	if( result != kNOERROR ) return result;

/* Interpreter Command */
	if(theReadDescriptor)
	{
		OSErr	threadError = noErr;
		
		Int4 interpreterResult = 0;
		Nat4 command = kCommandEnvironmentUnmarkHeap;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&command);
		
		vpx_ipc_read_word((V_Environment) interpreterEnvironment,kInterpreter,theReadDescriptor,&interpreterResult);

		*trigger = interpreterResult;	
		if((V_Environment) interpreterEnvironment && ((V_Environment) interpreterEnvironment)->interpreterMode == kThread) threadError = YieldToThread(((V_Environment) interpreterEnvironment)->interpreterThreadID);
	}
/* End Interpreter Command */

	return kNOERROR;
}

Int4 VPLP_resources_2D_changed( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_resources_2D_changed( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	vpl_Integer		interpreterEnvironment = 0;
	Int1			*primName = "post-load";
	vpl_Integer		theWriteDescriptor = 0;
	vpl_Integer		theReadDescriptor = 0;
	
	Int4 result = 0;
	
#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 3 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 0 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,0,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,1,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,2,primName, primitive, environment );
	if( result != kNOERROR ) return result;

#endif

	VPLPrimGetInputObjectInteger( &interpreterEnvironment, 0, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theWriteDescriptor, 1, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theReadDescriptor, 2, primName, primitive, environment );
	if( result != kNOERROR ) return result;

/* Interpreter Command */
	if(theReadDescriptor)
	{
		OSErr	threadError = noErr;
		
		Int4 interpreterResult = 0;
		Nat4 command = kCommandEnvironmentResourcesChanged;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&command);
		
		vpx_ipc_read_word((V_Environment) interpreterEnvironment,kInterpreter,theReadDescriptor,&interpreterResult);

		*trigger = interpreterResult;	
		if((V_Environment) interpreterEnvironment && ((V_Environment) interpreterEnvironment)->interpreterMode == kThread) threadError = YieldToThread(((V_Environment) interpreterEnvironment)->interpreterThreadID);
	}
/* End Interpreter Command */

	return kNOERROR;
}

Int4 VPLP_abort_2D_processing( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_abort_2D_processing( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	vpl_Integer		interpreterEnvironment = 0;
	V_Object		outputObject = NULL;
	Int1			*primName = "abort-processing";
	vpl_Integer		theWriteDescriptor = 0;
	vpl_Integer		theReadDescriptor = 0;
	Int4 			result = 0;

/* Variables to handle inputs */
	
//	vpl_Integer		stack = 0;
//	vpl_Integer		theFrame = 0;
//	vpl_Integer		index = 0;

/* Variables to handle internal processing */
	
/* Variables to handle output processing */

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 3 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,0,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,1,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,2,primName, primitive, environment );
	if( result != kNOERROR ) return result;

#endif

	VPLPrimGetInputObjectInteger( &interpreterEnvironment, 0, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theWriteDescriptor, 1, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theReadDescriptor, 2, primName, primitive, environment );
	if( result != kNOERROR ) return result;

/* Interpreter Command */
	if(theReadDescriptor)
	{
		OSErr	threadError = noErr;
		Int4 interpreterResult = 0;
/*		
		Nat4	bufferSize = 0;
		Nat4		*theBlock = NULL;
		V_List		theList = NULL;
		Nat4		counter = 0;

		Nat4 command = kCommandEnvironmentAbort;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&command);
		
		vpx_ipc_read_word((V_Environment) interpreterEnvironment,kInterpreter,theReadDescriptor,&interpreterResult);

		vpx_ipc_read_word((V_Environment) interpreterEnvironment,kInterpreter,theReadDescriptor,&bufferSize);
		theList = create_list(bufferSize,environment);
		if(bufferSize) {
			theBlock = VPXMALLOC(bufferSize,Nat4);
			vpx_ipc_read_block((V_Environment) interpreterEnvironment,kInterpreter,theReadDescriptor,theBlock,bufferSize*sizeof(Nat4));
			for(counter=0;counter<bufferSize;counter++){
				outputObject = (V_Object) *(theBlock+counter);
				put_nth(environment,theList,counter+1,outputObject);
			}
			X_free(theBlock);
		}
		outputObject = (V_Object) theList;
*/
		VPLPrimSetOutputObject(environment,primInArity,0,primitive,(V_Object) outputObject);
		*trigger = interpreterResult;	
		if((V_Environment) interpreterEnvironment && ((V_Environment) interpreterEnvironment)->interpreterMode == kThread) threadError = YieldToThread(((V_Environment) interpreterEnvironment)->interpreterThreadID);
	}
/* End Interpreter Command */

	return kNOERROR;
}

#pragma mark --------------- Stack Primitives ---------------

Int4 VPLP_initialize_2D_stack( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_initialize_2D_stack( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	vpl_Integer		interpreterEnvironment = 0;
	V_Object		outputObject = NULL;
	Int1			*primName = "initialize-stack";
	vpl_Integer		theWriteDescriptor = 0;
	vpl_Integer		theReadDescriptor = 0;
	Int4 			result = 0;

	V_Object		block = NULL;

/* Variables to handle inputs */
	
	Int1			*methodName = NULL;

/* Variables to handle internal processing */

	V_List			inputList = NULL;
	
/* Variables to handle output processing */
	
#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 5 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 2 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,0,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,1,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,2,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kString,3,primName, primitive, environment );
	if( result != kNOERROR ) return result;

#endif

	VPLPrimGetInputObjectInteger( &interpreterEnvironment, 0, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theWriteDescriptor, 1, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theReadDescriptor, 2, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectString( &methodName, 3, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	block = VPLPrimGetInputObject( 4,primitive,environment);
	if( block == NULL ) inputList = NULL;
	else if(block->type != kList) return record_error("initialize-stack: Input 3 not list!",primName,kWRONGINPUTTYPE,environment);
	else inputList = (V_List) block;
	
/* Interpreter Command */
	if(theReadDescriptor)
	{
		OSErr	threadError = noErr;
		Nat4		outputAddress = 0;
		V_Archive	tempArchive = NULL;
		Int4		archiveSize = 0;
		
		Int4 interpreterResult = 0;
		Nat4 command = kCommandStackCreate;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&command);
		
		vpx_ipc_write_string((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,methodName);

		if(inputList) {
			tempArchive = archive_object(environment,(V_Object) inputList,&archiveSize);
		} else {
			tempArchive = NULL;
		}
		vpx_ipc_write_archive((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,tempArchive);

		vpx_ipc_read_word((V_Environment) interpreterEnvironment,kInterpreter,theReadDescriptor,&interpreterResult);

		vpx_ipc_read_word((V_Environment) interpreterEnvironment,kInterpreter,theReadDescriptor,&outputAddress);
		outputObject = (V_Object) int_to_integer(outputAddress,environment);
		VPLPrimSetOutputObject(environment,primInArity,0,primitive,(V_Object) outputObject);

		vpx_ipc_read_word((V_Environment) interpreterEnvironment,kInterpreter,theReadDescriptor,&outputAddress);
		outputObject = (V_Object) int_to_integer(outputAddress,environment);
		VPLPrimSetOutputObject(environment,primInArity,1,primitive, (V_Object) outputObject);

		*trigger = interpreterResult;	
		if((V_Environment) interpreterEnvironment && ((V_Environment) interpreterEnvironment)->interpreterMode == kThread) threadError = YieldToThread(((V_Environment) interpreterEnvironment)->interpreterThreadID);
	}
	else
	{
		V_Environment	theEnvironment = (V_Environment) theWriteDescriptor;
		Nat4			interpreterResult = 0;
		Nat4			outputAddress = 0;

		V_Stack	stack = NULL;
		V_List	outputList = NULL;
				
		result = stack_create(theEnvironment,methodName,inputList,&stack,&outputList);

		outputAddress = (Nat4) stack;
		outputObject = (V_Object) int_to_integer(outputAddress,environment);
		VPLPrimSetOutputObject(environment,primInArity,0,primitive,(V_Object) outputObject);

		outputAddress = (Nat4) outputList;
		outputObject = (V_Object) int_to_integer(outputAddress,environment);
		VPLPrimSetOutputObject(environment,primInArity,1,primitive, (V_Object) outputObject);

		interpreterResult = kSuccess;
		*trigger = interpreterResult;	
	}
/* End Interpreter Command */

	return kNOERROR;
}

Int4 VPLP_advance_2D_stack( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_advance_2D_stack( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	vpl_Integer		interpreterEnvironment = 0;
	V_Object		outputObject = NULL;
	Int1			*primName = "advance-stack";
	vpl_Integer		theWriteDescriptor = 0;
	vpl_Integer		theReadDescriptor = 0;
	Int4 			result = 0;

/* Variables to handle inputs */
	
	vpl_Integer		stack = 0;

/* Variables to handle internal processing */

	ProcessSerialNumber	process;
	
/* Variables to handle output processing */

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 4 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 6 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,0,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,1,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,2,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,3,primName, primitive, environment );
	if( result != kNOERROR ) return result;

#endif

	VPLPrimGetInputObjectInteger( &interpreterEnvironment, 0, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theWriteDescriptor, 1, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theReadDescriptor, 2, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &stack, 3, primName, primitive, environment );
	if( result != kNOERROR ) return result;

/* Interpreter Command */
	if(theReadDescriptor)
	{
		OSErr	threadError = noErr;
		Nat4	bufferSize = 0;
		Int4 interpreterResult = 0;
		Int1	*stringBuffer = NULL;
		
		Nat4 command = kCommandStackAdvance;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&command);
		
		bufferSize = stack;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&bufferSize);

		vpx_ipc_read_word((V_Environment) interpreterEnvironment,kInterpreter,theReadDescriptor,&interpreterResult);

		vpx_ipc_read_word((V_Environment) interpreterEnvironment,kInterpreter,theReadDescriptor,&bufferSize);
		outputObject = (V_Object) bool_to_boolean(bufferSize,environment);
		VPLPrimSetOutputObject(environment,primInArity,0,primitive,(V_Object) outputObject);

		vpx_ipc_read_word((V_Environment) interpreterEnvironment,kInterpreter,theReadDescriptor,&bufferSize);
		outputObject = (V_Object) int_to_integer(bufferSize,environment);
		VPLPrimSetOutputObject(environment,primInArity,1,primitive, (V_Object) outputObject);

		vpx_ipc_read_word((V_Environment) interpreterEnvironment,kInterpreter,theReadDescriptor,&bufferSize);
		outputObject = (V_Object) bufferSize;
		increment_count(outputObject);
		VPLPrimSetOutputObject(environment,primInArity,2,primitive, (V_Object) outputObject);

		vpx_ipc_read_string((V_Environment) interpreterEnvironment,kInterpreter,theReadDescriptor,&stringBuffer);
		if(stringBuffer) {
			outputObject = (V_Object) create_string(stringBuffer,environment);
			X_free(stringBuffer);
		} else outputObject = NULL;
		VPLPrimSetOutputObject(environment,primInArity,3,primitive, (V_Object) outputObject);

		vpx_ipc_read_word((V_Environment) interpreterEnvironment,kInterpreter,theReadDescriptor,&bufferSize);
		outputObject = (V_Object) int_to_integer(bufferSize,environment);
		VPLPrimSetOutputObject(environment,primInArity,4,primitive, (V_Object) outputObject);

		vpx_ipc_read_word((V_Environment) interpreterEnvironment,kInterpreter,theReadDescriptor,&bufferSize);
		outputObject = (V_Object) int_to_integer(bufferSize,environment);
		VPLPrimSetOutputObject(environment,primInArity,5,primitive, (V_Object) outputObject);

		*trigger = interpreterResult;	
		GetCurrentProcess(&process);
		SetFrontProcess(&process);
		if((V_Environment) interpreterEnvironment && ((V_Environment) interpreterEnvironment)->interpreterMode == kThread) threadError = YieldToThread(((V_Environment) interpreterEnvironment)->interpreterThreadID);
	}
/* End Interpreter Command */

	return kNOERROR;
}

Int4 VPLP_finalize_2D_stack( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_finalize_2D_stack( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	vpl_Integer		interpreterEnvironment = 0;
	V_Object		outputObject = NULL;
	Int1			*primName = "finalize-stack";
	vpl_Integer		theWriteDescriptor = 0;
	vpl_Integer		theReadDescriptor = 0;
	Int4 			result = 0;

/* Variables to handle inputs */
	
	vpl_Integer		stack = 0;
	vpl_Integer		outputList = 0;

/* Variables to handle internal processing */
	
/* Variables to handle output processing */

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 5 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,0,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,1,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,2,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,3,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,4,primName, primitive, environment );
	if( result != kNOERROR ) return result;

#endif

	VPLPrimGetInputObjectInteger( &interpreterEnvironment, 0, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theWriteDescriptor, 1, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theReadDescriptor, 2, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &stack, 3, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &outputList, 4, primName, primitive, environment );
	if( result != kNOERROR ) return result;

/* Interpreter Command */
	if(theReadDescriptor)
	{
		OSErr	threadError = noErr;
		Nat4	bufferSize = 0;
		Int4 interpreterResult = 0;
		V_Object	outputObject = NULL;
		V_List		theList = NULL;
		Nat4*		theBlock = NULL;
		Nat4		counter = 0;
		V_Environment	theEnvironment = (V_Environment) interpreterEnvironment;
		
		Nat4 command = kCommandStackRemove;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&command);
		
		bufferSize = stack;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&bufferSize);

		bufferSize = outputList;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&bufferSize);

		vpx_ipc_read_word((V_Environment) interpreterEnvironment,kInterpreter,theReadDescriptor,&interpreterResult);

		vpx_ipc_read_word((V_Environment) interpreterEnvironment,kInterpreter,theReadDescriptor,&bufferSize);
		theList = create_list(bufferSize,environment);
		if(bufferSize) {
			theBlock = (Nat4 *) X_malloc(bufferSize*sizeof(Nat4));
			vpx_ipc_read_block((V_Environment) interpreterEnvironment,kInterpreter,theReadDescriptor,theBlock,bufferSize*sizeof(Nat4));
			for(counter=0;counter<bufferSize;counter++){
				outputObject = (V_Object) int_to_integer(*(theBlock+counter),environment);
				put_nth(environment,theList,counter+1,outputObject);
				decrement_count(environment,outputObject);
			}
			X_free(theBlock);
		}
		outputObject = (V_Object) theList;

		VPLPrimSetOutputObject(environment,primInArity,0,primitive, (V_Object) outputObject);
		*trigger = interpreterResult;
		if(theEnvironment && theEnvironment->interpreterMode == kThread) threadError = YieldToThread(theEnvironment->interpreterThreadID);
	}
	else
	{
		V_Environment	theEnvironment = (V_Environment) theWriteDescriptor;
		Nat4			interpreterResult = 0;
		V_List			theOutputList = (V_List) outputList;
		V_List			theList = NULL;
		Nat4			counter = 0;

		result = destroy_stack(theEnvironment,((V_Stack)stack));	

		if(outputList) {
			theList = create_list(theOutputList->listLength,environment);
			for(counter=0;counter<theOutputList->listLength;counter++){
				outputObject = theOutputList->objectList[counter];
				X_increment_count(outputObject);
				outputObject = (V_Object) int_to_integer((Nat4) outputObject,environment);
				put_nth(environment,theList,counter+1,outputObject);
				decrement_count(environment,outputObject);
			}
			outputObject = (V_Object) theList;
		} else {
			outputObject = NULL;
		}

		decrement_count(theEnvironment,(V_Object) theOutputList);

		VPLPrimSetOutputObject(environment,primInArity,0,primitive, (V_Object) outputObject);

		interpreterResult = kSuccess;
		*trigger = interpreterResult;	
	}
/* End Interpreter Command */

	return kNOERROR;
}

Int4 VPLP_previous_2D_stack( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_previous_2D_stack( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	vpl_Integer		interpreterEnvironment = 0;
	V_Object		outputObject = NULL;
	Int1			*primName = "previous-stack";
	vpl_Integer		theWriteDescriptor = 0;
	vpl_Integer		theReadDescriptor = 0;
	Int4 			result = 0;

/* Variables to handle inputs */
	
	vpl_Integer		theFrame = 0;

/* Variables to handle internal processing */
	
/* Variables to handle output processing */

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 4 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 5 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,0,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,1,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,2,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,3,primName, primitive, environment );
	if( result != kNOERROR ) return result;

#endif

	VPLPrimGetInputObjectInteger( &interpreterEnvironment, 0, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theWriteDescriptor, 1, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theReadDescriptor, 2, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theFrame, 3, primName, primitive, environment );
	if( result != kNOERROR ) return result;

/* Interpreter Command */
	if(theReadDescriptor)
	{
		OSErr	threadError = noErr;
		Nat4	bufferSize = 0;
		Int4 interpreterResult = 0;
		Int1	*stringBuffer = NULL;
		
		Nat4 command = kCommandFramePreviousFrame;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&command);
		
		bufferSize = theFrame;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&bufferSize);

		vpx_ipc_read_word((V_Environment) interpreterEnvironment,kInterpreter,theReadDescriptor,&interpreterResult);

		vpx_ipc_read_word((V_Environment) interpreterEnvironment,kInterpreter,theReadDescriptor,&bufferSize);
		outputObject = (V_Object) int_to_integer(bufferSize,environment);
		VPLPrimSetOutputObject(environment,primInArity,0,primitive,(V_Object) outputObject);

		vpx_ipc_read_word((V_Environment) interpreterEnvironment,kInterpreter,theReadDescriptor,&bufferSize);
		outputObject = (V_Object) bufferSize;
		increment_count(outputObject);
		VPLPrimSetOutputObject(environment,primInArity,1,primitive, (V_Object) outputObject);

		vpx_ipc_read_string((V_Environment) interpreterEnvironment,kInterpreter,theReadDescriptor,&stringBuffer);
		if(stringBuffer) {
			outputObject = (V_Object) create_string(stringBuffer,environment);
			X_free(stringBuffer);
		} else outputObject = NULL;
		VPLPrimSetOutputObject(environment,primInArity,2,primitive, (V_Object) outputObject);

		vpx_ipc_read_word((V_Environment) interpreterEnvironment,kInterpreter,theReadDescriptor,&bufferSize);
		outputObject = (V_Object) int_to_integer(bufferSize,environment);
		VPLPrimSetOutputObject(environment,primInArity,3,primitive, (V_Object) outputObject);

		vpx_ipc_read_word((V_Environment) interpreterEnvironment,kInterpreter,theReadDescriptor,&bufferSize);
		outputObject = (V_Object) int_to_integer(bufferSize,environment);
		VPLPrimSetOutputObject(environment,primInArity,4,primitive, (V_Object) outputObject);

		*trigger = interpreterResult;	
		if((V_Environment) interpreterEnvironment && ((V_Environment) interpreterEnvironment)->interpreterMode == kThread) threadError = YieldToThread(((V_Environment) interpreterEnvironment)->interpreterThreadID);
	}
/* End Interpreter Command */

	return kNOERROR;
}

#pragma mark --------------- Interpreter Control Primitives ---------------

Int4 VPLP_get_2D_debug_2D_window( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_get_2D_debug_2D_window( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	vpl_Integer		interpreterEnvironment = 0;
	V_Object		outputObject = NULL;
	Int1			*primName = "get-debug-window";
	vpl_Integer		theWriteDescriptor = 0;
	vpl_Integer		theReadDescriptor = 0;
	Int4 			result = 0;

/* Variables to handle inputs */
	
	vpl_Integer			theFrame = 0;

/* Variables to handle internal processing */
	
/* Variables to handle output processing */
	

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 4 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,0,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,1,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,2,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,3,primName, primitive, environment );
	if( result != kNOERROR ) return result;

#endif

	VPLPrimGetInputObjectInteger( &interpreterEnvironment, 0, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theWriteDescriptor, 1, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theReadDescriptor, 2, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theFrame, 3, primName, primitive, environment );
	if( result != kNOERROR ) return result;

/* Interpreter Command */
	if(theReadDescriptor)
	{
		OSErr	threadError = noErr;
		Nat4	bufferSize = 0;
		Nat4	outputAddress = 0;
		
		Int4 interpreterResult = 0;
		Nat4 command = kCommandFrameGetWindow;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&command);
		
		bufferSize = theFrame;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&bufferSize);

		vpx_ipc_read_word((V_Environment) interpreterEnvironment,kInterpreter,theReadDescriptor,&interpreterResult);
		vpx_ipc_read_word((V_Environment) interpreterEnvironment,kInterpreter,theReadDescriptor,&outputAddress);

		if(outputAddress) outputObject = (V_Object) outputAddress;
		else outputObject = NULL;
		increment_count(outputObject);
		VPLPrimSetOutputObject(environment,primInArity,0,primitive,(V_Object) outputObject);
		*trigger = interpreterResult;	
		if((V_Environment) interpreterEnvironment && ((V_Environment) interpreterEnvironment)->interpreterMode == kThread) threadError = YieldToThread(((V_Environment) interpreterEnvironment)->interpreterThreadID);
	}
/* End Interpreter Command */

	return kNOERROR;
}

Int4 VPLP_set_2D_debug_2D_window( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_set_2D_debug_2D_window( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	vpl_Integer		interpreterEnvironment = 0;
	Int1			*primName = "set-debug-window";
	vpl_Integer		theWriteDescriptor = 0;
	vpl_Integer		theReadDescriptor = 0;
	Int4 			result = 0;

	V_Object		block = NULL;

/* Variables to handle inputs */
	
	vpl_Integer		theFrame = 0;

/* Variables to handle internal processing */
	
/* Variables to handle output processing */

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 5 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 0 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,0,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,1,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,2,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,3,primName, primitive, environment );
	if( result != kNOERROR ) return result;

#endif

	VPLPrimGetInputObjectInteger( &interpreterEnvironment, 0, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theWriteDescriptor, 1, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theReadDescriptor, 2, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theFrame, 3, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	block = VPLPrimGetInputObject( 4,primitive,environment);
	if( block != NULL && block->type != kInstance) return record_error("set-debug-window: Input 4 type not instance!",primName,kWRONGINPUTTYPE,environment);
	
/* Interpreter Command */
	if(theReadDescriptor)
	{
		OSErr	threadError = noErr;
		Nat4	bufferSize = 0;
		
		Int4 interpreterResult = 0;
		Nat4 command = kCommandFrameSetWindow;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&command);
		
		bufferSize = theFrame;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&bufferSize);

		bufferSize = (Nat4) block;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&bufferSize);

		vpx_ipc_read_word((V_Environment) interpreterEnvironment,kInterpreter,theReadDescriptor,&interpreterResult);

		*trigger = interpreterResult;	
		if((V_Environment) interpreterEnvironment && ((V_Environment) interpreterEnvironment)->interpreterMode == kThread) threadError = YieldToThread(((V_Environment) interpreterEnvironment)->interpreterThreadID);
	}
/* End Interpreter Command */

	return kNOERROR;
}

Int4 VPLP_get_2D_current_2D_operation( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_get_2D_current_2D_operation( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	vpl_Integer		interpreterEnvironment = 0;
	V_Object		outputObject = NULL;
	Int1			*primName = "get-current-operation";
	vpl_Integer		theWriteDescriptor = 0;
	vpl_Integer		theReadDescriptor = 0;
	Int4 			result = 0;

/* Variables to handle inputs */
	
	vpl_Integer			theFrame = 0;

/* Variables to handle internal processing */
	
/* Variables to handle output processing */
	

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 4 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,0,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,1,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,2,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,3,primName, primitive, environment );
	if( result != kNOERROR ) return result;

#endif

	VPLPrimGetInputObjectInteger( &interpreterEnvironment, 0, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theWriteDescriptor, 1, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theReadDescriptor, 2, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theFrame, 3, primName, primitive, environment );
	if( result != kNOERROR ) return result;

/* Interpreter Command */
	if(theReadDescriptor)
	{
		OSErr	threadError = noErr;
		Nat4	bufferSize = 0;
		V_List	theList = NULL;
		Nat4	*theBlock = NULL;
		Nat4	counter = 0;
		
		Int4 interpreterResult = 0;
		Nat4 command = kCommandFrameGetCurrentOperation;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&command);
		
		bufferSize = theFrame;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&bufferSize);

		vpx_ipc_read_word((V_Environment) interpreterEnvironment,kInterpreter,theReadDescriptor,&interpreterResult);

		vpx_ipc_read_word((V_Environment) interpreterEnvironment,kInterpreter,theReadDescriptor,&bufferSize);
		theList = create_list(bufferSize,environment);
		if(bufferSize) {
			theBlock = (Nat4 *) X_malloc(bufferSize*sizeof(Nat4));
			vpx_ipc_read_block((V_Environment) interpreterEnvironment,kInterpreter,theReadDescriptor,theBlock,bufferSize*sizeof(Nat4));
			for(counter=0;counter<bufferSize;counter++){
				outputObject = (V_Object) *(theBlock+counter);
				put_nth(environment,theList,counter+1,outputObject);
			}
			X_free(theBlock);
		}
		outputObject = (V_Object) theList;

		VPLPrimSetOutputObject(environment,primInArity,0,primitive,(V_Object) outputObject);
		*trigger = interpreterResult;	
		if((V_Environment) interpreterEnvironment && ((V_Environment) interpreterEnvironment)->interpreterMode == kThread) threadError = YieldToThread(((V_Environment) interpreterEnvironment)->interpreterThreadID);
	}
/* End Interpreter Command */

	return kNOERROR;
}

Int4 VPLP_set_2D_current_2D_operation( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_set_2D_current_2D_operation( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	vpl_Integer		interpreterEnvironment = 0;
	V_Object		outputObject = NULL;
	Int1			*primName = "set-current-operation";
	vpl_Integer		theWriteDescriptor = 0;
	vpl_Integer		theReadDescriptor = 0;
	Int4 			result = 0;

/* Variables to handle inputs */
	
	vpl_Integer		stack = 0;
	vpl_Integer		theFrame = 0;
	vpl_Integer		index = 0;

/* Variables to handle internal processing */
	
/* Variables to handle output processing */

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 6 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,0,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,1,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,2,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,3,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,4,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,5,primName, primitive, environment );
	if( result != kNOERROR ) return result;

#endif

	VPLPrimGetInputObjectInteger( &interpreterEnvironment, 0, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theWriteDescriptor, 1, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theReadDescriptor, 2, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &stack, 3, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theFrame, 4, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &index, 5, primName, primitive, environment );
	if( result != kNOERROR ) return result;

/* Interpreter Command */
	if(theReadDescriptor)
	{
		OSErr	threadError = noErr;
		Nat4	bufferSize = 0;
		Int4 interpreterResult = 0;
		Nat4		*theBlock = NULL;
		V_List		theList = NULL;
		Nat4		counter = 0;
		
		Nat4 command = kCommandFrameSetCurrentOperation;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&command);
		
		bufferSize = stack;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&bufferSize);

		bufferSize = theFrame;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&bufferSize);

		bufferSize = index;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&bufferSize);

		vpx_ipc_read_word((V_Environment) interpreterEnvironment,kInterpreter,theReadDescriptor,&interpreterResult);

		vpx_ipc_read_word((V_Environment) interpreterEnvironment,kInterpreter,theReadDescriptor,&bufferSize);
		theList = create_list(bufferSize,environment);
		if(bufferSize) {
			theBlock = VPXMALLOC(bufferSize,Nat4);
			vpx_ipc_read_block((V_Environment) interpreterEnvironment,kInterpreter,theReadDescriptor,theBlock,bufferSize*sizeof(Nat4));
			for(counter=0;counter<bufferSize;counter++){
				outputObject = (V_Object) *(theBlock+counter);
				put_nth(environment,theList,counter+1,outputObject);
			}
			X_free(theBlock);
		}
		outputObject = (V_Object) theList;

		VPLPrimSetOutputObject(environment,primInArity,0,primitive,(V_Object) outputObject);
		*trigger = interpreterResult;	
		if((V_Environment) interpreterEnvironment && ((V_Environment) interpreterEnvironment)->interpreterMode == kThread) threadError = YieldToThread(((V_Environment) interpreterEnvironment)->interpreterThreadID);
	}
/* End Interpreter Command */

	return kNOERROR;
}

Int4 VPLP_set_2D_frame_2D_breakpoint( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_set_2D_frame_2D_breakpoint( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	vpl_Integer		interpreterEnvironment = 0;
	Int1			*primName = "set-frame-breakpoint";
	vpl_Integer		theWriteDescriptor = 0;
	vpl_Integer		theReadDescriptor = 0;
	Int4 			result = 0;

/* Variables to handle inputs */
	
	vpl_Integer		theFrame = 0;
	vpl_Boolean		state = 0;
	vpl_Boolean		flag = 0;

/* Variables to handle internal processing */
	
/* Variables to handle output processing */

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 6 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 0 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,0,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,1,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,2,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,3,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kBoolean,4,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kBoolean,5,primName, primitive, environment );
	if( result != kNOERROR ) return result;

#endif

	VPLPrimGetInputObjectInteger( &interpreterEnvironment, 0, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theWriteDescriptor, 1, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theReadDescriptor, 2, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theFrame, 3, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectBool( &state, 4, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectBool( &flag, 5, primName, primitive, environment );
	if( result != kNOERROR ) return result;

/* Interpreter Command */
	if(theReadDescriptor)
	{
		OSErr	threadError = noErr;
		Nat4	bufferSize = 0;
		Int4 interpreterResult = 0;
		
		Nat4 command = kCommandFrameSetBreakpoint;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&command);
		
		bufferSize = theFrame;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&bufferSize);

		bufferSize = state;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&bufferSize);

		bufferSize = flag;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&bufferSize);

		vpx_ipc_read_word((V_Environment) interpreterEnvironment,kInterpreter,theReadDescriptor,&interpreterResult);

		*trigger = interpreterResult;	
		if((V_Environment) interpreterEnvironment && ((V_Environment) interpreterEnvironment)->interpreterMode == kThread) threadError = YieldToThread(((V_Environment) interpreterEnvironment)->interpreterThreadID);
	}
/* End Interpreter Command */

	return kNOERROR;
}

Int4 VPLP_get_2D_io_2D_value( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_get_2D_io_2D_value( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	vpl_Integer		interpreterEnvironment = 0;
	V_Object		outputObject = NULL;
	Int1			*primName = "get-io-value";
	vpl_Integer		theWriteDescriptor = 0;
	vpl_Integer		theReadDescriptor = 0;
	Int4 			result = 0;

/* Variables to handle inputs */
	
	vpl_Integer		theFrame = 0;
	vpl_Integer		inputOutput = 0;
	vpl_Boolean		isRoot = kTRUE;

/* Variables to handle internal processing */
	
/* Variables to handle output processing */

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 6 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,0,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,1,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,2,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,3,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,4,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kBoolean,5,primName, primitive, environment );
	if( result != kNOERROR ) return result;

#endif

	VPLPrimGetInputObjectInteger( &interpreterEnvironment, 0, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theWriteDescriptor, 1, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theReadDescriptor, 2, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theFrame, 3, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &inputOutput, 4, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectBool( &isRoot, 5, primName, primitive, environment );
	if( result != kNOERROR ) return result;

/* Interpreter Command */
	if(theReadDescriptor)
	{
		OSErr	threadError = noErr;
		Nat4	bufferSize = 0;
		Int4 interpreterResult = 0;
		Nat4	outputAddress = 0;
		
		Nat4 command = kCommandFrameGetIOValue;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&command);
		
		bufferSize = theFrame;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&bufferSize);

		bufferSize = inputOutput;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&bufferSize);

		bufferSize = isRoot;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&bufferSize);

		vpx_ipc_read_word((V_Environment) interpreterEnvironment,kInterpreter,theReadDescriptor,&interpreterResult);
		vpx_ipc_read_word((V_Environment) interpreterEnvironment,kInterpreter,theReadDescriptor,&outputAddress);

		outputObject = (V_Object) int_to_integer(outputAddress,environment);
		VPLPrimSetOutputObject(environment,primInArity,0,primitive,(V_Object) outputObject);
		*trigger = interpreterResult;	
		if((V_Environment) interpreterEnvironment && ((V_Environment) interpreterEnvironment)->interpreterMode == kThread) threadError = YieldToThread(((V_Environment) interpreterEnvironment)->interpreterThreadID);
	}
/* End Interpreter Command */

	return kNOERROR;
}

Int4 VPLP_set_2D_io_2D_value( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_set_2D_io_2D_value( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	vpl_Integer		interpreterEnvironment = 0;
	Int1			*primName = "set-io-value";
	vpl_Integer		theWriteDescriptor = 0;
	vpl_Integer		theReadDescriptor = 0;
	Int4 			result = 0;

/* Variables to handle inputs */
	
	vpl_Integer		theFrame = 0;
	vpl_Integer		inputOutput = 0;
	vpl_Boolean		isRoot = kTRUE;
	vpl_Integer		theValue = 0;

/* Variables to handle internal processing */
	
/* Variables to handle output processing */

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 7 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 0 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,0,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,1,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,2,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,3,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,4,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kBoolean,5,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,6,primName, primitive, environment );
	if( result != kNOERROR ) return result;

#endif

	VPLPrimGetInputObjectInteger( &interpreterEnvironment, 0, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theWriteDescriptor, 1, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theReadDescriptor, 2, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theFrame, 3, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &inputOutput, 4, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectBool( &isRoot, 5, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theValue, 6, primName, primitive, environment );
	if( result != kNOERROR ) return result;

/* Interpreter Command */
	if(theReadDescriptor)
	{
		OSErr	threadError = noErr;
		Nat4	bufferSize = 0;
		Int4 interpreterResult = 0;
		
		Nat4 command = kCommandFrameSetIOValue;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&command);
		
		bufferSize = theFrame;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&bufferSize);

		bufferSize = inputOutput;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&bufferSize);

		bufferSize = isRoot;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&bufferSize);

		bufferSize = theValue;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&bufferSize);

		vpx_ipc_read_word((V_Environment) interpreterEnvironment,kInterpreter,theReadDescriptor,&interpreterResult);

		*trigger = interpreterResult;	
		if((V_Environment) interpreterEnvironment && ((V_Environment) interpreterEnvironment)->interpreterMode == kThread) threadError = YieldToThread(((V_Environment) interpreterEnvironment)->interpreterThreadID);
	}
/* End Interpreter Command */

	return kNOERROR;
}

Int4 VPLP_step_2D_environment( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_step_2D_environment( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	vpl_Integer		interpreterEnvironment = 0;
	Int1			*primName = "step-environment";
	vpl_Integer		theWriteDescriptor = 0;
	vpl_Integer		theReadDescriptor = 0;
	
	Int4 result = 0;
	
#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 3 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 0 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,0,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,1,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,2,primName, primitive, environment );
	if( result != kNOERROR ) return result;

#endif

	VPLPrimGetInputObjectInteger( &interpreterEnvironment, 0, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theWriteDescriptor, 1, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theReadDescriptor, 2, primName, primitive, environment );
	if( result != kNOERROR ) return result;

/* Interpreter Command */
	if(theReadDescriptor)
	{
		OSErr	threadError = noErr;
		
		Int4 interpreterResult = 0;
		Nat4 command = kCommandEnvironmentStep;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&command);
		
		vpx_ipc_read_word((V_Environment) interpreterEnvironment,kInterpreter,theReadDescriptor,&interpreterResult);

		*trigger = interpreterResult;	
		if((V_Environment) interpreterEnvironment && ((V_Environment) interpreterEnvironment)->interpreterMode == kThread) threadError = YieldToThread(((V_Environment) interpreterEnvironment)->interpreterThreadID);
	}
/* End Interpreter Command */

	return kNOERROR;
}

Int4 VPLP_set_2D_step_2D_out( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_set_2D_step_2D_out( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	vpl_Integer		interpreterEnvironment = 0;
	Int1			*primName = "set-step-out";
	vpl_Integer		theWriteDescriptor = 0;
	vpl_Integer		theReadDescriptor = 0;
	Int4 			result = 0;

/* Variables to handle inputs */
	
	vpl_Integer			theFrame = 0;

/* Variables to handle internal processing */
	
/* Variables to handle output processing */
	

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 4 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 0 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,0,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,1,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,2,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,3,primName, primitive, environment );
	if( result != kNOERROR ) return result;

#endif

	VPLPrimGetInputObjectInteger( &interpreterEnvironment, 0, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theWriteDescriptor, 1, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theReadDescriptor, 2, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theFrame, 3, primName, primitive, environment );
	if( result != kNOERROR ) return result;

/* Interpreter Command */
	if(theReadDescriptor)
	{
		OSErr	threadError = noErr;
		Nat4	bufferSize = 0;
		
		Int4 interpreterResult = 0;
		Nat4 command = kCommandFrameStepOut;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&command);
		
		bufferSize = theFrame;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&bufferSize);

		vpx_ipc_read_word((V_Environment) interpreterEnvironment,kInterpreter,theReadDescriptor,&interpreterResult);

		*trigger = interpreterResult;	
		if((V_Environment) interpreterEnvironment && ((V_Environment) interpreterEnvironment)->interpreterMode == kThread) threadError = YieldToThread(((V_Environment) interpreterEnvironment)->interpreterThreadID);
	}
/* End Interpreter Command */

	return kNOERROR;
}

Int4 VPLP_get_2D_watchpoint( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_get_2D_watchpoint( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	vpl_Integer		interpreterEnvironment = 0;
	V_Object		outputObject = NULL;
	Int1			*primName = "get-watchpoint";
	vpl_Integer		theWriteDescriptor = 0;
	vpl_Integer		theReadDescriptor = 0;
	Int4 			result = 0;

/* Variables to handle inputs */
	
	vpl_Integer		instanceAddress = 0;
	vpl_StringPtr	attributeName = NULL;

/* Variables to handle internal processing */
	
/* Variables to handle output processing */
	
#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 5 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,0, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,1, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,2, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,3, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kString,4, primName, primitive, environment );
	if( result != kNOERROR ) return result;

#endif

	VPLPrimGetInputObjectInteger( &interpreterEnvironment, 0, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theWriteDescriptor, 1, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theReadDescriptor, 2, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &instanceAddress, 3, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectString( &attributeName, 4, primName, primitive, environment );
	if( result != kNOERROR ) return result;

/* Interpreter Command */
	if(theReadDescriptor)
	{
		OSErr	threadError = noErr;
		Int4 interpreterResult = 0;
		Nat4	outputAddress = 0;
		Nat4	theWord = 0;

		Nat4 command = kCommandWatchpointGet;
		if( (result = vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&command)) != kNOERROR) return result;
		
		theWord = instanceAddress;
		if( (result = vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&theWord)) != kNOERROR) return result;
		
		if( (result = vpx_ipc_write_string((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,attributeName)) != kNOERROR) return result;

		vpx_ipc_read_word((V_Environment) interpreterEnvironment,kInterpreter,theReadDescriptor,&interpreterResult);

		vpx_ipc_read_word((V_Environment) interpreterEnvironment,kInterpreter,theReadDescriptor,&outputAddress);

		outputObject =  (V_Object) bool_to_boolean(outputAddress,environment);
		VPLPrimSetOutputObject(environment,primInArity,0,primitive, (V_Object) outputObject);
		*trigger = interpreterResult;	
		if((V_Environment) interpreterEnvironment && ((V_Environment) interpreterEnvironment)->interpreterMode == kThread) threadError = YieldToThread(((V_Environment) interpreterEnvironment)->interpreterThreadID);
	}
/* End Interpreter Command */

	return kNOERROR;
}

Int4 VPLP_set_2D_watchpoint( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_set_2D_watchpoint( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	vpl_Integer		interpreterEnvironment = 0;
	Int1			*primName = "set-watchpoint";
	vpl_Integer		theWriteDescriptor = 0;
	vpl_Integer		theReadDescriptor = 0;
	Int4 			result = 0;

/* Variables to handle inputs */
	
	vpl_Integer		instanceAddress = 0;
	vpl_StringPtr	attributeName = NULL;
	vpl_Boolean		watchState = kFALSE;


/* Variables to handle internal processing */
	
/* Variables to handle output processing */
	
#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 6 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 0 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,0, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,1, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,2, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,3, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kString,4, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kBoolean,5, primName, primitive, environment );
	if( result != kNOERROR ) return result;

#endif

	VPLPrimGetInputObjectInteger( &interpreterEnvironment, 0, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theWriteDescriptor, 1, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theReadDescriptor, 2, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &instanceAddress, 3, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectString( &attributeName, 4, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectBool( &watchState, 5, primName, primitive, environment );
	if( result != kNOERROR ) return result;

/* Interpreter Command */
	if(theReadDescriptor)
	{
		OSErr	threadError = noErr;
		Int4 interpreterResult = 0;
		Nat4	theWord = 0;

		Nat4 command = kCommandWatchpointSet;
		if( (result = vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&command)) != kNOERROR) return result;
		
		theWord = instanceAddress;
		if( (result = vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&theWord)) != kNOERROR) return result;
		
		if( (result = vpx_ipc_write_string((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,attributeName)) != kNOERROR) return result;

		theWord = watchState;
		if( (result = vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&theWord)) != kNOERROR) return result;
		
		vpx_ipc_read_word((V_Environment) interpreterEnvironment,kInterpreter,theReadDescriptor,&interpreterResult);

		*trigger = interpreterResult;	
		if((V_Environment) interpreterEnvironment && ((V_Environment) interpreterEnvironment)->interpreterMode == kThread) threadError = YieldToThread(((V_Environment) interpreterEnvironment)->interpreterThreadID);
	}
/* End Interpreter Command */

	return kNOERROR;
}

Int4 VPLP_get_2D_watchpoints( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_get_2D_watchpoints( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	vpl_Integer		interpreterEnvironment = 0;
	V_Object		outputObject = NULL;
	Int1			*primName = "get-watchpoints";
	vpl_Integer		theWriteDescriptor = 0;
	vpl_Integer		theReadDescriptor = 0;
	Int4 			result = 0;

/* Variables to handle inputs */
	
/* Variables to handle internal processing */
	
/* Variables to handle output processing */
	
#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 3 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,0, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,1, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,2, primName, primitive, environment );
	if( result != kNOERROR ) return result;

#endif

	VPLPrimGetInputObjectInteger( &interpreterEnvironment, 0, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theWriteDescriptor, 1, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theReadDescriptor, 2, primName, primitive, environment );
	if( result != kNOERROR ) return result;

/* Interpreter Command */
	if(theReadDescriptor)
	{
		OSErr	threadError = noErr;
		Int4 interpreterResult = 0;
		Nat4	outputAddress = 0;

		Nat4 command = kCommandWatchpointGetInstances;
		if( (result = vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&command)) != kNOERROR) return result;
		
		vpx_ipc_read_word((V_Environment) interpreterEnvironment,kInterpreter,theReadDescriptor,&interpreterResult);

		vpx_ipc_read_word((V_Environment) interpreterEnvironment,kInterpreter,theReadDescriptor,&outputAddress);

		outputObject = (V_Object) int_to_integer(outputAddress,environment);
		VPLPrimSetOutputObject(environment,primInArity,0,primitive, (V_Object) outputObject);
		*trigger = interpreterResult;	
		if((V_Environment) interpreterEnvironment && ((V_Environment) interpreterEnvironment)->interpreterMode == kThread) threadError = YieldToThread(((V_Environment) interpreterEnvironment)->interpreterThreadID);
	}
/* End Interpreter Command */

	return kNOERROR;
}

Int4 VPLP_clear_2D_watchpoints( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_clear_2D_watchpoints( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	vpl_Integer		interpreterEnvironment = 0;
	Int1			*primName = "clear-watchpoints";
	vpl_Integer		theWriteDescriptor = 0;
	vpl_Integer		theReadDescriptor = 0;
	Int4 			result = 0;

/* Variables to handle inputs */
	
/* Variables to handle internal processing */
	
/* Variables to handle output processing */
	
#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 3 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 0 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,0, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,1, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,2, primName, primitive, environment );
	if( result != kNOERROR ) return result;

#endif

	VPLPrimGetInputObjectInteger( &interpreterEnvironment, 0, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theWriteDescriptor, 1, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theReadDescriptor, 2, primName, primitive, environment );
	if( result != kNOERROR ) return result;

/* Interpreter Command */
	if(theReadDescriptor)
	{
		OSErr	threadError = noErr;
		Int4 interpreterResult = 0;

		Nat4 command = kCommandWatchpointClearAll;
		if( (result = vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&command)) != kNOERROR) return result;
		
		vpx_ipc_read_word((V_Environment) interpreterEnvironment,kInterpreter,theReadDescriptor,&interpreterResult);

		*trigger = interpreterResult;	
		if((V_Environment) interpreterEnvironment && ((V_Environment) interpreterEnvironment)->interpreterMode == kThread) threadError = YieldToThread(((V_Environment) interpreterEnvironment)->interpreterThreadID);
	}
/* End Interpreter Command */

	return kNOERROR;
}

#pragma mark --------------- Information Primitives ---------------

Int4 VPLP_get_2D_procedure_2D_info( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_get_2D_procedure_2D_info( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	vpl_Integer		interpreterEnvironment = 0;
	V_Object		outputObject = NULL;
	Int1			*primName = "get-procedure-info";
	vpl_Integer		theWriteDescriptor = 0;
	vpl_Integer		theReadDescriptor = 0;
	Int4 			result = 0;

/* Variables to handle inputs */
	
	vpl_StringPtr	tempString = NULL;

/* Variables to handle internal processing */
	
/* Variables to handle output processing */
	

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 4 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,0,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,1,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,2,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kString,3,primName, primitive, environment );
	if( result != kNOERROR ) return result;

#endif

	VPLPrimGetInputObjectInteger( &interpreterEnvironment, 0, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theWriteDescriptor, 1, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theReadDescriptor, 2, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectString( &tempString, 3, primName, primitive, environment );
	if( result != kNOERROR ) return result;

/* Interpreter Command */
	if(theReadDescriptor)
	{
		OSErr		threadError = noErr;
		Int4		interpreterResult = 0;
		V_Archive	tempArchive = NULL;
		
		Nat4 command = kCommandOperationGetProcedureInfo;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&command);
		
		vpx_ipc_write_string((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,tempString);

		vpx_ipc_read_word((V_Environment) interpreterEnvironment,kInterpreter,theReadDescriptor,&interpreterResult);

		if( (result = vpx_ipc_read_archive((V_Environment) interpreterEnvironment,kInterpreter,theReadDescriptor,&tempArchive)) == kNOERROR) {
			if(tempArchive) {
				outputObject = unarchive_object(environment,tempArchive);
				X_free(tempArchive);
			} else {
				outputObject = NULL;
			}
		} else {
			outputObject = NULL;
		}

		VPLPrimSetOutputObject(environment,primInArity,0,primitive, (V_Object) outputObject);
		*trigger = interpreterResult;	
		if((V_Environment) interpreterEnvironment && ((V_Environment) interpreterEnvironment)->interpreterMode == kThread) threadError = YieldToThread(((V_Environment) interpreterEnvironment)->interpreterThreadID);
	}
/* End Interpreter Command */

	return kNOERROR;
}

Int4 VPLP_get_2D_constant_2D_info( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_get_2D_constant_2D_info( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	vpl_Integer		interpreterEnvironment = 0;
	V_Object		outputObject = NULL;
	Int1			*primName = "get-constant-info";
	vpl_Integer		theWriteDescriptor = 0;
	vpl_Integer		theReadDescriptor = 0;
	Int4 			result = 0;

/* Variables to handle inputs */
	
	vpl_StringPtr	tempString = NULL;

/* Variables to handle internal processing */
	
/* Variables to handle output processing */
	

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 4 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,0,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,1,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,2,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kString,3,primName, primitive, environment );
	if( result != kNOERROR ) return result;

#endif

	VPLPrimGetInputObjectInteger( &interpreterEnvironment, 0, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theWriteDescriptor, 1, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theReadDescriptor, 2, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectString( &tempString, 3, primName, primitive, environment );
	if( result != kNOERROR ) return result;

/* Interpreter Command */
	if(theReadDescriptor)
	{
		OSErr		threadError = noErr;
		Int4		interpreterResult = 0;
		V_Archive	tempArchive = NULL;
		
		Nat4 command = kCommandOperationGetConstantInfo;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&command);
		
		vpx_ipc_write_string((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,tempString);

		vpx_ipc_read_word((V_Environment) interpreterEnvironment,kInterpreter,theReadDescriptor,&interpreterResult);

		if( (result = vpx_ipc_read_archive((V_Environment) interpreterEnvironment,kInterpreter,theReadDescriptor,&tempArchive)) == kNOERROR) {
			if(tempArchive) {
				outputObject = unarchive_object(environment,tempArchive);
				X_free(tempArchive);
			} else {
				outputObject = NULL;
			}
		} else {
			outputObject = NULL;
		}

		VPLPrimSetOutputObject(environment,primInArity,0,primitive, (V_Object) outputObject);
		*trigger = interpreterResult;	
		if((V_Environment) interpreterEnvironment && ((V_Environment) interpreterEnvironment)->interpreterMode == kThread) threadError = YieldToThread(((V_Environment) interpreterEnvironment)->interpreterThreadID);
	}

/* End Interpreter Command */

	return kNOERROR;
}

Int4 VPLP_get_2D_structure_2D_info( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_get_2D_structure_2D_info( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	vpl_Integer		interpreterEnvironment = 0;
	V_Object		outputObject = NULL;
	Int1			*primName = "get-structure-info";
	vpl_Integer		theWriteDescriptor = 0;
	vpl_Integer		theReadDescriptor = 0;
	Int4 			result = 0;

/* Variables to handle inputs */
	
	vpl_StringPtr	tempString = NULL;

/* Variables to handle internal processing */
	
/* Variables to handle output processing */
	

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 4 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,0,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,1,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,2,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kString,3,primName, primitive, environment );
	if( result != kNOERROR ) return result;

#endif

	VPLPrimGetInputObjectInteger( &interpreterEnvironment, 0, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theWriteDescriptor, 1, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theReadDescriptor, 2, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectString( &tempString, 3, primName, primitive, environment );
	if( result != kNOERROR ) return result;

/* Interpreter Command */
	if(theReadDescriptor)
	{
		OSErr		threadError = noErr;
		Int4		interpreterResult = 0;
		V_Archive	tempArchive = NULL;
		
		Nat4 command = kCommandOperationGetStructureInfo;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&command);
		
		vpx_ipc_write_string((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,tempString);

		vpx_ipc_read_word((V_Environment) interpreterEnvironment,kInterpreter,theReadDescriptor,&interpreterResult);

		if( (result = vpx_ipc_read_archive((V_Environment) interpreterEnvironment,kInterpreter,theReadDescriptor,&tempArchive)) == kNOERROR) {
			if(tempArchive) {
				outputObject = unarchive_object(environment,tempArchive);
				X_free(tempArchive);
			} else {
				outputObject = NULL;
			}
		} else {
			outputObject = NULL;
		}

		VPLPrimSetOutputObject(environment,primInArity,0,primitive, (V_Object) outputObject);
		*trigger = interpreterResult;	
		if((V_Environment) interpreterEnvironment && ((V_Environment) interpreterEnvironment)->interpreterMode == kThread) threadError = YieldToThread(((V_Environment) interpreterEnvironment)->interpreterThreadID);
	}
/* End Interpreter Command */

	return kNOERROR;
}

Int4 VPLP_get_2D_primitive_2D_info( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_get_2D_primitive_2D_info( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	vpl_Integer		interpreterEnvironment = 0;
	V_Object		outputObject = NULL;
	Int1			*primName = "get-primitive-info";
	vpl_Integer		theWriteDescriptor = 0;
	vpl_Integer		theReadDescriptor = 0;
	Int4 			result = 0;

/* Variables to handle inputs */
	
	vpl_StringPtr	tempString = NULL;

/* Variables to handle internal processing */
	
/* Variables to handle output processing */
	

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 4 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,0,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,1,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,2,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kString,3,primName, primitive, environment );
	if( result != kNOERROR ) return result;

#endif

	VPLPrimGetInputObjectInteger( &interpreterEnvironment, 0, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theWriteDescriptor, 1, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theReadDescriptor, 2, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectString( &tempString, 3, primName, primitive, environment );
	if( result != kNOERROR ) return result;

/* Interpreter Command */
	if(theReadDescriptor)
	{
		OSErr		threadError = noErr;
		Int4		interpreterResult = 0;
		V_Archive	tempArchive = NULL;
		
		Nat4 command = kCommandOperationGetPrimitiveInfo;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&command);
		
		vpx_ipc_write_string((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,tempString);

		vpx_ipc_read_word((V_Environment) interpreterEnvironment,kInterpreter,theReadDescriptor,&interpreterResult);

		if( (result = vpx_ipc_read_archive((V_Environment) interpreterEnvironment,kInterpreter,theReadDescriptor,&tempArchive)) == kNOERROR) {
			if(tempArchive) {
				outputObject = unarchive_object(environment,tempArchive);
				X_free(tempArchive);
			} else {
				outputObject = NULL;
			}
		} else {
			outputObject = NULL;
		}

		VPLPrimSetOutputObject(environment,primInArity,0,primitive, (V_Object) outputObject);
		*trigger = interpreterResult;	
		if((V_Environment) interpreterEnvironment && ((V_Environment) interpreterEnvironment)->interpreterMode == kThread) threadError = YieldToThread(((V_Environment) interpreterEnvironment)->interpreterThreadID);
	}

/* End Interpreter Command */

	return kNOERROR;
}

Int4 VPLP_get_2D_primitive_2D_arity( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_get_2D_primitive_2D_arity( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	vpl_Integer		interpreterEnvironment = 0;
	V_Object		outputObject = NULL;
	Int1			*primName = "get-primitive-arity";
	vpl_Integer		theWriteDescriptor = 0;
	vpl_Integer		theReadDescriptor = 0;
	Int4 			result = 0;

/* Variables to handle inputs */
	
	vpl_StringPtr	primitiveName = NULL;

/* Variables to handle internal processing */
	
/* Variables to handle output processing */
	
#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 4 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 3 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,0,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,1,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,2,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kString,3,primName, primitive, environment );
	if( result != kNOERROR ) return result;

#endif

	VPLPrimGetInputObjectInteger( &interpreterEnvironment, 0, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theWriteDescriptor, 1, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theReadDescriptor, 2, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectString( &primitiveName, 3, primName, primitive, environment );
	if( result != kNOERROR ) return result;

/* Interpreter Command */
	if(theReadDescriptor)
	{
		OSErr	threadError = noErr;
		Nat4	outputAddress = 0;
		
		Int4 interpreterResult = 0;
		Nat4 command = kCommandOperationGetPrimitiveArity;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&command);
		
		vpx_ipc_write_string((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,primitiveName);

		vpx_ipc_read_word((V_Environment) interpreterEnvironment,kInterpreter,theReadDescriptor,&interpreterResult);
		*trigger = interpreterResult;	

		vpx_ipc_read_word((V_Environment) interpreterEnvironment,kInterpreter,theReadDescriptor,&outputAddress);
		outputObject = (V_Object) int_to_integer(outputAddress,environment);
		VPLPrimSetOutputObject(environment,primInArity,0,primitive,(V_Object) outputObject);

		vpx_ipc_read_word((V_Environment) interpreterEnvironment,kInterpreter,theReadDescriptor,&outputAddress);
		outputObject = (V_Object) int_to_integer(outputAddress,environment);
		VPLPrimSetOutputObject(environment,primInArity,1,primitive, (V_Object) outputObject);

		vpx_ipc_read_word((V_Environment) interpreterEnvironment,kInterpreter,theReadDescriptor,&outputAddress);
		outputObject = (V_Object) int_to_integer(outputAddress,environment);
		VPLPrimSetOutputObject(environment,primInArity,2,primitive, (V_Object) outputObject);

		if((V_Environment) interpreterEnvironment && ((V_Environment) interpreterEnvironment)->interpreterMode == kThread) threadError = YieldToThread(((V_Environment) interpreterEnvironment)->interpreterThreadID);
	}
/* End Interpreter Command */

	return kNOERROR;
}

Int4 VPLP_get_2D_procedure_2D_arity( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_get_2D_procedure_2D_arity( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	vpl_Integer		interpreterEnvironment = 0;
	V_Object		outputObject = NULL;
	Int1			*primName = "get-procedure-arity";
	vpl_Integer		theWriteDescriptor = 0;
	vpl_Integer		theReadDescriptor = 0;
	Int4 			result = 0;


/* Variables to handle inputs */
	
	vpl_StringPtr	procedureName = NULL;

/* Variables to handle internal processing */
	
/* Variables to handle output processing */
	
#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 4 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 2 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,0,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,1,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,2,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kString,3,primName, primitive, environment );
	if( result != kNOERROR ) return result;

#endif

	VPLPrimGetInputObjectInteger( &interpreterEnvironment, 0, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theWriteDescriptor, 1, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theReadDescriptor, 2, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectString( &procedureName, 3, primName, primitive, environment );
	if( result != kNOERROR ) return result;

/* Interpreter Command */
	if(theReadDescriptor)
	{
		OSErr	threadError = noErr;
		Nat4	outputAddress = 0;
		
		Int4 interpreterResult = 0;
		Nat4 command = kCommandOperationGetProcedureArity;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&command);
		
		vpx_ipc_write_string((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,procedureName);

		vpx_ipc_read_word((V_Environment) interpreterEnvironment,kInterpreter,theReadDescriptor,&interpreterResult);
		*trigger = interpreterResult;	

		vpx_ipc_read_word((V_Environment) interpreterEnvironment,kInterpreter,theReadDescriptor,&outputAddress);
		outputObject = (V_Object) int_to_integer(outputAddress,environment);
		VPLPrimSetOutputObject(environment,primInArity,0,primitive,(V_Object) outputObject);

		vpx_ipc_read_word((V_Environment) interpreterEnvironment,kInterpreter,theReadDescriptor,&outputAddress);
		outputObject = (V_Object) int_to_integer(outputAddress,environment);
		VPLPrimSetOutputObject(environment,primInArity,1,primitive, (V_Object) outputObject);
		if((V_Environment) interpreterEnvironment && ((V_Environment) interpreterEnvironment)->interpreterMode == kThread) threadError = YieldToThread(((V_Environment) interpreterEnvironment)->interpreterThreadID);
	}
/* End Interpreter Command */

	return kNOERROR;
}

Int4 VPLP_get_2D_method_2D_arity( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_get_2D_method_2D_arity( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	vpl_Integer		interpreterEnvironment = 0;
	V_Object		outputObject = NULL;
	Int1			*primName = "get-method-arity";
	vpl_Integer		theWriteDescriptor = 0;
	vpl_Integer		theReadDescriptor = 0;
	Int4 			result = 0;


/* Variables to handle inputs */
	
	vpl_StringPtr	procedureName = NULL;

/* Variables to handle internal processing */
	
/* Variables to handle output processing */
	
#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 4 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 3 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,0,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,1,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,2,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kString,3,primName, primitive, environment );
	if( result != kNOERROR ) return result;

#endif

	VPLPrimGetInputObjectInteger( &interpreterEnvironment, 0, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theWriteDescriptor, 1, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theReadDescriptor, 2, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectString( &procedureName, 3, primName, primitive, environment );
	if( result != kNOERROR ) return result;

/* Interpreter Command */
	if(theReadDescriptor)
	{
		OSErr	threadError = noErr;
		Nat4	outputAddress = 0;
		
		Int4 interpreterResult = 0;
		Nat4 command = kCommandOperationGetMethodArity;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&command);
		
		vpx_ipc_write_string((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,procedureName);

		vpx_ipc_read_word((V_Environment) interpreterEnvironment,kInterpreter,theReadDescriptor,&interpreterResult);
		*trigger = interpreterResult;	

		vpx_ipc_read_word((V_Environment) interpreterEnvironment,kInterpreter,theReadDescriptor,&outputAddress);
		outputObject = (V_Object) int_to_integer(outputAddress,environment);
		VPLPrimSetOutputObject(environment,primInArity,0,primitive,(V_Object) outputObject);

		vpx_ipc_read_word((V_Environment) interpreterEnvironment,kInterpreter,theReadDescriptor,&outputAddress);
		outputObject = (V_Object) int_to_integer(outputAddress,environment);
		VPLPrimSetOutputObject(environment,primInArity,1,primitive, (V_Object) outputObject);

		vpx_ipc_read_word((V_Environment) interpreterEnvironment,kInterpreter,theReadDescriptor,&outputAddress);
		outputObject = (V_Object) bool_to_boolean(outputAddress,environment);
		VPLPrimSetOutputObject(environment,primInArity,2,primitive, (V_Object) outputObject);

		if((V_Environment) interpreterEnvironment && ((V_Environment) interpreterEnvironment)->interpreterMode == kThread) threadError = YieldToThread(((V_Environment) interpreterEnvironment)->interpreterThreadID);
	}
/* End Interpreter Command */

	return kNOERROR;
}

Int4 VPLP_get_2D_errors( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_get_2D_errors( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	vpl_Integer		interpreterEnvironment = 0;
	V_Object		outputObject = NULL;
	Int1			*primName = "get-errors";
	vpl_Integer		theWriteDescriptor = 0;
	vpl_Integer		theReadDescriptor = 0;
	
	Int4 result = 0;
	
#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 3 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,0,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,1,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,2,primName, primitive, environment );
	if( result != kNOERROR ) return result;

#endif

	VPLPrimGetInputObjectInteger( &interpreterEnvironment, 0, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theWriteDescriptor, 1, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theReadDescriptor, 2, primName, primitive, environment );
	if( result != kNOERROR ) return result;

/* Interpreter Command */
	if(theReadDescriptor)
	{
		OSErr	threadError = noErr;
		Nat4	bufferSize = 0;
		Int4 interpreterResult = 0;
		V_List	errorList = NULL;
		Nat4	numberOfErrors = 0;
		Nat4	counter = 0;
		Int1	*stringBuffer = NULL;
		
		Nat4 command = kCommandEnvironmentGetErrors;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&command);
		
		vpx_ipc_read_word((V_Environment) interpreterEnvironment,kInterpreter,theReadDescriptor,&interpreterResult);

		vpx_ipc_read_word((V_Environment) interpreterEnvironment,kInterpreter,theReadDescriptor,&bufferSize);
		numberOfErrors = bufferSize;

		errorList = create_list(numberOfErrors,environment);
		for(counter = 0;counter<numberOfErrors;counter++){
			vpx_ipc_read_string((V_Environment) interpreterEnvironment,kInterpreter,theReadDescriptor,&stringBuffer);
			if(stringBuffer){
				outputObject = (V_Object) create_string(stringBuffer,environment);
				X_free(stringBuffer);
			} else {
				outputObject = NULL;
			}
			errorList->objectList[counter] = outputObject;
		}

		VPLPrimSetOutputObject(environment,primInArity,0,primitive, (V_Object) errorList);
		*trigger = interpreterResult;	
		if((V_Environment) interpreterEnvironment && ((V_Environment) interpreterEnvironment)->interpreterMode == kThread) threadError = YieldToThread(((V_Environment) interpreterEnvironment)->interpreterThreadID);
	}
/* End Interpreter Command */

	return kNOERROR;
}

Int4 VPLP_null_2D_errors( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_null_2D_errors( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	vpl_Integer		interpreterEnvironment = 0;
	Int1			*primName = "null-errors";
	vpl_Integer		theWriteDescriptor = 0;
	vpl_Integer		theReadDescriptor = 0;
	
	Int4 result = 0;
	
#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 3 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 0 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,0,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,1,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,2,primName, primitive, environment );
	if( result != kNOERROR ) return result;

#endif

	VPLPrimGetInputObjectInteger( &interpreterEnvironment, 0, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theWriteDescriptor, 1, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theReadDescriptor, 2, primName, primitive, environment );
	if( result != kNOERROR ) return result;

/* Interpreter Command */
	if(theReadDescriptor)
	{
		OSErr	threadError = noErr;
		Int4 interpreterResult = 0;
		
		Nat4 command = kCommandEnvironmentNullErrors;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&command);
		
		vpx_ipc_read_word((V_Environment) interpreterEnvironment,kInterpreter,theReadDescriptor,&interpreterResult);

		*trigger = interpreterResult;	
		if((V_Environment) interpreterEnvironment && ((V_Environment) interpreterEnvironment)->interpreterMode == kThread) threadError = YieldToThread(((V_Environment) interpreterEnvironment)->interpreterThreadID);
	}
/* End Interpreter Command */

	return kNOERROR;
}

Int4 VPLP_has_2D_instances_3F_( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_has_2D_instances_3F_( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	vpl_Integer		interpreterEnvironment = 0;
	Int1			*primName = "has-instances?";
	vpl_Integer		theWriteDescriptor = 0;
	vpl_Integer		theReadDescriptor = 0;
	Int4 			result = 0;

/* Variables to handle inputs */
	
	vpl_Integer		tempClass = 0;

/* Variables to handle internal processing */
	
/* Variables to handle output processing */
	
#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 4 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArityMax(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;
	
	result = VPLPrimCheckInputObjectType( kInteger,0,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,1,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,2,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,3,primName, primitive, environment );
	if( result != kNOERROR ) return result;

#endif

	VPLPrimGetInputObjectInteger( &interpreterEnvironment, 0, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theWriteDescriptor, 1, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theReadDescriptor, 2, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &tempClass, 3, primName, primitive, environment );
	if( result != kNOERROR ) return result;

/* Interpreter Command */
	if(theReadDescriptor)
	{
		OSErr	threadError = noErr;
		Nat4	bufferSize = 0;
		Int4 interpreterResult = 0;
		
		Nat4 command = kCommandClassHasInstances;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&command);
		
		bufferSize = tempClass;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&bufferSize);

		vpx_ipc_read_word((V_Environment) interpreterEnvironment,kInterpreter,theReadDescriptor,&interpreterResult);

		result = VPLPrimSetOutputObjectBoolOrFail( environment, trigger, primInArity, primOutArity, primitive, interpreterResult );
		if((V_Environment) interpreterEnvironment && ((V_Environment) interpreterEnvironment)->interpreterMode == kThread) threadError = YieldToThread(((V_Environment) interpreterEnvironment)->interpreterThreadID);
	}
/* End Interpreter Command */

	return result;
}

Int4 VPLP_mark_2D_instances( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_mark_2D_instances( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	vpl_Integer		interpreterEnvironment = 0;
	Int1			*primName = "mark-instances";
	vpl_Integer		theWriteDescriptor = 0;
	vpl_Integer		theReadDescriptor = 0;
	Int4 			result = 0;

/* Variables to handle inputs */
	
	vpl_Integer		tempClass = 0;

/* Variables to handle internal processing */
	
/* Variables to handle output processing */
	
#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 4 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 0 );
	if( result != kNOERROR ) return result;
	
	result = VPLPrimCheckInputObjectType( kInteger,0,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,1,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,2,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,3,primName, primitive, environment );
	if( result != kNOERROR ) return result;

#endif

	VPLPrimGetInputObjectInteger( &interpreterEnvironment, 0, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theWriteDescriptor, 1, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theReadDescriptor, 2, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &tempClass, 3, primName, primitive, environment );
	if( result != kNOERROR ) return result;

/* Interpreter Command */
	if(theReadDescriptor)
	{
		OSErr	threadError = noErr;
		Nat4	bufferSize = 0;
		Int4 interpreterResult = 0;
		
		Nat4 command = kCommandClassMarkInstances;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&command);
		
		bufferSize = tempClass;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&bufferSize);

		vpx_ipc_read_word((V_Environment) interpreterEnvironment,kInterpreter,theReadDescriptor,&interpreterResult);

		*trigger = interpreterResult;	
		if((V_Environment) interpreterEnvironment && ((V_Environment) interpreterEnvironment)->interpreterMode == kThread) threadError = YieldToThread(((V_Environment) interpreterEnvironment)->interpreterThreadID);
	}
/* End Interpreter Command */

	return result;
}

Int4 VPLP_find_2D_operations( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_find_2D_operations( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	vpl_Integer		interpreterEnvironment = 0;
	V_Object		outputObject = NULL;
	Int1			*primName = "string-to-value";
	vpl_Integer		theWriteDescriptor = 0;
	vpl_Integer		theReadDescriptor = 0;
	Int4 			result = 0;

/* Variables to handle inputs */
	
	Int1			*theString = NULL;
	vpl_Integer		theType = kOperation;
	vpl_Boolean		theSubstring = kFALSE;
	vpl_Boolean		theCase = kFALSE;

/* Variables to handle internal processing */
	
	V_List			theList = NULL;
	Nat4			*theBlock = NULL;
	Nat4			counter = 0;

/* Variables to handle output processing */
	
#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArityMin(environment,primName, primInArity, 5 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputArityMax(environment,primName, primInArity, 7 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,0,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,1,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,2,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kString,3,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,4,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	if(primInArity > 5) {
		result = VPLPrimCheckInputObjectType( kBoolean,5,primName, primitive, environment );
		if( result != kNOERROR ) return result;

		if(primInArity > 6) {
			result = VPLPrimCheckInputObjectType( kBoolean,6,primName, primitive, environment );
			if( result != kNOERROR ) return result;
		}
	}

#endif

	VPLPrimGetInputObjectInteger( &interpreterEnvironment, 0, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theWriteDescriptor, 1, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theReadDescriptor, 2, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectString( &theString, 3, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theType, 4, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	if(primInArity > 5) {
		VPLPrimGetInputObjectBool( &theSubstring, 5, primName, primitive, environment );
		if( result != kNOERROR ) return result;
		if(primInArity > 6) {
			VPLPrimGetInputObjectBool( &theCase, 6, primName, primitive, environment );
			if( result != kNOERROR ) return result;
		}
	}
				
/* Interpreter Command */
	if(theReadDescriptor)
	{
		OSErr	threadError = noErr;
		Nat4	bufferSize = 0;
		
		Int4 interpreterResult = 0;
		Nat4 command = kCommandEnvironmentFindOperation;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&command);
		
		bufferSize = theType;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&bufferSize);

		bufferSize = theSubstring;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&bufferSize);

		bufferSize = theCase;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&bufferSize);

		vpx_ipc_write_string((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,theString);

		vpx_ipc_read_word((V_Environment) interpreterEnvironment,kInterpreter,theReadDescriptor,&interpreterResult);

		vpx_ipc_read_word((V_Environment) interpreterEnvironment,kInterpreter,theReadDescriptor,&bufferSize);
		theList = create_list(bufferSize,environment);
		if(bufferSize) {
			theBlock = (Nat4 *) X_malloc(bufferSize*sizeof(Nat4));
			vpx_ipc_read_block((V_Environment) interpreterEnvironment,kInterpreter,theReadDescriptor,theBlock,bufferSize*sizeof(Nat4));
			for(counter=0;counter<bufferSize;counter++){
				outputObject = (V_Object) *(theBlock+counter);
				put_nth(environment,theList,counter+1,outputObject);
			}
			X_free(theBlock);
		}
		outputObject = (V_Object) theList;

		VPLPrimSetOutputObject(environment,primInArity,0,primitive,(V_Object) outputObject);
		*trigger = interpreterResult;	
		if((V_Environment) interpreterEnvironment && ((V_Environment) interpreterEnvironment)->interpreterMode == kThread) threadError = YieldToThread(((V_Environment) interpreterEnvironment)->interpreterThreadID);
	}
/* End Interpreter Command */

	return kNOERROR;
}

#pragma mark --------------- Object Primitives ---------------

Int4 VPLP_create_2D_class( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_create_2D_class( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	vpl_Integer		interpreterEnvironment = 0;
	V_Object		outputObject = NULL;
	Int1			*primName = "create-class";
	vpl_Integer		theWriteDescriptor = 0;
	vpl_Integer		theReadDescriptor = 0;
	Int4 			result = 0;

/* Variables to handle inputs */
	
	Int1			*className = NULL;

/* Variables to handle internal processing */
	
/* Variables to handle output processing */
	
#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 4 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,0,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,1,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,2,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kString,3,primName, primitive, environment );
	if( result != kNOERROR ) return result;

#endif

	VPLPrimGetInputObjectInteger( &interpreterEnvironment, 0, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theWriteDescriptor, 1, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theReadDescriptor, 2, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectString( &className, 3, primName, primitive, environment );
	if( result != kNOERROR ) return result;

/* Interpreter Command */
	if(theReadDescriptor)
	{
		OSErr	threadError = noErr;
		Nat4	outputAddress = 0;

		Int4 interpreterResult = 0;
		Nat4 command = kCommandClassCreate;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&command);
		
		vpx_ipc_write_string((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,className);

		vpx_ipc_read_word((V_Environment) interpreterEnvironment,kInterpreter,theReadDescriptor,&interpreterResult);
		vpx_ipc_read_word((V_Environment) interpreterEnvironment,kInterpreter,theReadDescriptor,&outputAddress);

		outputObject = (V_Object) int_to_integer(outputAddress,environment);
		VPLPrimSetOutputObject(environment,primInArity,0,primitive,(V_Object) outputObject);
		*trigger = interpreterResult;	
		if((V_Environment) interpreterEnvironment && ((V_Environment) interpreterEnvironment)->interpreterMode == kThread) threadError = YieldToThread(((V_Environment) interpreterEnvironment)->interpreterThreadID);
	}
	else
	{
		V_Environment	theEnvironment = (V_Environment) theWriteDescriptor;
		Nat4			interpreterResult = 0;
		V_Class			tempClass = NULL;

		interpreterResult = class_create(theEnvironment,className,&tempClass);

		outputObject = (V_Object) int_to_integer((Nat4) tempClass,environment);
		VPLPrimSetOutputObject(environment,primInArity,0,primitive,(V_Object) outputObject);

		*trigger = interpreterResult;	
	}
/* End Interpreter Command */

	return kNOERROR;
}

Int4 VPLP_set_2D_class( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_set_2D_class( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	vpl_Integer		interpreterEnvironment = 0;
	Int1			*primName = "set-class";
	vpl_Integer		theWriteDescriptor = 0;
	vpl_Integer		theReadDescriptor = 0;
	Int4 			result = 0;

	V_Object		block = NULL;

/* Variables to handle inputs */
	
	vpl_Integer		tempClass = 0;
	vpl_StringPtr	superClassName = NULL;

/* Variables to handle internal processing */
	
/* Variables to handle output processing */
	
#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 5 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 0 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,0,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,1,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,2,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,3,primName, primitive, environment );
	if( result != kNOERROR ) return result;

#endif

	VPLPrimGetInputObjectInteger( &interpreterEnvironment, 0, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theWriteDescriptor, 1, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theReadDescriptor, 2, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &tempClass, 3, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	block = VPLPrimGetInputObject( 4,primitive,environment);
	if( block == NULL) superClassName = NULL;
	else if (block->type == kString) superClassName = ((V_String)block)->string;
	else return record_error("set-class: Input 4 type not null nor string!",primName,kWRONGINPUTTYPE,environment);
	

/* Interpreter Command */
	if(theReadDescriptor)
	{
		OSErr	threadError = noErr;
		Nat4	bufferSize = 0;
		Int4 interpreterResult = 0;
		
		Nat4 command = kCommandClassSet;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&command);
		
		bufferSize = tempClass;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&bufferSize);

		vpx_ipc_write_string((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,superClassName);

		vpx_ipc_read_word((V_Environment) interpreterEnvironment,kInterpreter,theReadDescriptor,&interpreterResult);

		*trigger = interpreterResult;	
		if((V_Environment) interpreterEnvironment && ((V_Environment) interpreterEnvironment)->interpreterMode == kThread) threadError = YieldToThread(((V_Environment) interpreterEnvironment)->interpreterThreadID);
	}
	else
	{
		V_Environment	theEnvironment = (V_Environment) theWriteDescriptor;
		Nat4			interpreterResult = 0;

		interpreterResult = class_set(theEnvironment,(V_Class)tempClass,superClassName);


		*trigger = interpreterResult;	
	}
/* End Interpreter Command */

	return kNOERROR;
}

Int4 VPLP_remove_2D_class( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_remove_2D_class( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	vpl_Integer		interpreterEnvironment = 0;
	Int1			*primName = "remove-class";
	vpl_Integer		theWriteDescriptor = 0;
	vpl_Integer		theReadDescriptor = 0;
	Int4 			result = 0;

/* Variables to handle inputs */
	
	vpl_Integer		tempClass = 0;

/* Variables to handle internal processing */
	
/* Variables to handle output processing */
	
#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 4 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 0 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,0,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,1,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,2,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,3,primName, primitive, environment );
	if( result != kNOERROR ) return result;

#endif

	VPLPrimGetInputObjectInteger( &interpreterEnvironment, 0, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theWriteDescriptor, 1, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theReadDescriptor, 2, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &tempClass, 3, primName, primitive, environment );
	if( result != kNOERROR ) return result;

/* Interpreter Command */
	if(theReadDescriptor)
	{
		OSErr	threadError = noErr;
		Nat4	bufferSize = 0;
		Int4 interpreterResult = 0;
		
		Nat4 command = kCommandClassRemove;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&command);
		
		bufferSize = tempClass;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&bufferSize);

		vpx_ipc_read_word((V_Environment) interpreterEnvironment,kInterpreter,theReadDescriptor,&interpreterResult);

		*trigger = interpreterResult;	
		if((V_Environment) interpreterEnvironment && ((V_Environment) interpreterEnvironment)->interpreterMode == kThread) threadError = YieldToThread(((V_Environment) interpreterEnvironment)->interpreterThreadID);
	}
	else
	{
		V_Environment	theEnvironment = (V_Environment) theWriteDescriptor;
		Nat4			interpreterResult = 0;

				interpreterResult = class_remove(theEnvironment,(V_Class)tempClass);

		*trigger = interpreterResult;	
	}
/* End Interpreter Command */

	return kNOERROR;
}

Int4 VPLP_create_2D_method( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_create_2D_method( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	vpl_Integer		interpreterEnvironment = 0;
	V_Object		outputObject = NULL;
	Int1			*primName = "create-method";
	vpl_Integer		theWriteDescriptor = 0;
	vpl_Integer		theReadDescriptor = 0;
	Int4 			result = 0;

/* Variables to handle inputs */
	
	Int1			*methodName = NULL;

/* Variables to handle internal processing */
	
/* Variables to handle output processing */
	
#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 4 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,0,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,1,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,2,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kString,3,primName, primitive, environment );
	if( result != kNOERROR ) return result;

#endif

	VPLPrimGetInputObjectInteger( &interpreterEnvironment, 0, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theWriteDescriptor, 1, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theReadDescriptor, 2, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectString( &methodName, 3, primName, primitive, environment );
	if( result != kNOERROR ) return result;

/* Interpreter Command */
	if(theReadDescriptor)
	{
		OSErr	threadError = noErr;
		Nat4	outputAddress = 0;
		
		Int4 interpreterResult = 0;
		Nat4 command = kCommandMethodCreate;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&command);
		
		vpx_ipc_write_string((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,methodName);

		vpx_ipc_read_word((V_Environment) interpreterEnvironment,kInterpreter,theReadDescriptor,&interpreterResult);
		vpx_ipc_read_word((V_Environment) interpreterEnvironment,kInterpreter,theReadDescriptor,&outputAddress);

		outputObject =  (V_Object) int_to_integer(outputAddress,environment);
		VPLPrimSetOutputObject(environment,primInArity,0,primitive, (V_Object) outputObject);
		*trigger = interpreterResult;	
		if((V_Environment) interpreterEnvironment && ((V_Environment) interpreterEnvironment)->interpreterMode == kThread) threadError = YieldToThread(((V_Environment) interpreterEnvironment)->interpreterThreadID);
	}
/* End Interpreter Command */

	return kNOERROR;
}

Int4 VPLP_set_2D_method( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_set_2D_method( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	vpl_Integer		interpreterEnvironment = 0;
	Int1			*primName = "set-class";
	vpl_Integer		theWriteDescriptor = 0;
	vpl_Integer		theReadDescriptor = 0;
	Int4 			result = 0;

	V_Object		block = NULL;

/* Variables to handle inputs */
	
	vpl_Integer		tempMethod = 0;
	vpl_StringPtr	textValue = NULL;

/* Variables to handle internal processing */
	
/* Variables to handle output processing */
	
#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 5 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 0 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,0,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,1,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,2,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,3,primName, primitive, environment );
	if( result != kNOERROR ) return result;

#endif

	VPLPrimGetInputObjectInteger( &interpreterEnvironment, 0, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theWriteDescriptor, 1, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theReadDescriptor, 2, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &tempMethod, 3, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	block = VPLPrimGetInputObject( 4,primitive,environment);
	if( block == NULL) textValue = NULL;
	else if (block->type == kString) textValue = ((V_String)block)->string;
	else return record_error("set-method: Input 4 type not null nor string!",primName,kWRONGINPUTTYPE,environment);
	

/* Interpreter Command */
	if(theReadDescriptor)
	{
		OSErr	threadError = noErr;
		Nat4	bufferSize = 0;
		Int4 interpreterResult = 0;
		
		Nat4 command = kCommandMethodSet;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&command);
		
		bufferSize = tempMethod;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&bufferSize);

		vpx_ipc_write_string((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,textValue);

		vpx_ipc_read_word((V_Environment) interpreterEnvironment,kInterpreter,theReadDescriptor,&interpreterResult);

		*trigger = interpreterResult;	
		if((V_Environment) interpreterEnvironment && ((V_Environment) interpreterEnvironment)->interpreterMode == kThread) threadError = YieldToThread(((V_Environment) interpreterEnvironment)->interpreterThreadID);
	}
	else
	{
		V_Environment	theEnvironment = (V_Environment) theWriteDescriptor;
		Nat4			interpreterResult = 0;

		interpreterResult = method_set(theEnvironment,(V_Method)tempMethod,textValue);


		*trigger = interpreterResult;	
	}
/* End Interpreter Command */

	return kNOERROR;
}

Int4 VPLP_remove_2D_method( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_remove_2D_method( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	vpl_Integer		interpreterEnvironment = 0;
	Int1			*primName = "remove-method";
	vpl_Integer		theWriteDescriptor = 0;
	vpl_Integer		theReadDescriptor = 0;
	Int4 			result = 0;

/* Variables to handle inputs */
	
	vpl_Integer		tempMethod = 0;

/* Variables to handle internal processing */
	
/* Variables to handle output processing */
	
#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 4 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 0 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,0,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,1,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,2,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,3,primName, primitive, environment );
	if( result != kNOERROR ) return result;

#endif

	VPLPrimGetInputObjectInteger( &interpreterEnvironment, 0, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theWriteDescriptor, 1, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theReadDescriptor, 2, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &tempMethod, 3, primName, primitive, environment );
	if( result != kNOERROR ) return result;

/* Interpreter Command */
	if(theReadDescriptor)
	{
		OSErr	threadError = noErr;
		Nat4	bufferSize = 0;
		Int4 interpreterResult = 0;
		
		Nat4 command = kCommandMethodRemove;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&command);
		
		bufferSize = tempMethod;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&bufferSize);

		vpx_ipc_read_word((V_Environment) interpreterEnvironment,kInterpreter,theReadDescriptor,&interpreterResult);

		*trigger = interpreterResult;	
		if((V_Environment) interpreterEnvironment && ((V_Environment) interpreterEnvironment)->interpreterMode == kThread) threadError = YieldToThread(((V_Environment) interpreterEnvironment)->interpreterThreadID);
	}
	else
	{
		V_Environment	theEnvironment = (V_Environment) theWriteDescriptor;
		Nat4			interpreterResult = 0;

				interpreterResult = method_remove(theEnvironment,(V_Method)tempMethod);

		*trigger = interpreterResult;	
	}
/* End Interpreter Command */

	return kNOERROR;
}

Int4 VPLP_create_2D_persistent( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_create_2D_persistent( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	vpl_Integer		interpreterEnvironment = 0;
	V_Object		outputObject = NULL;
	Int1			*primName = "create-persistent";
	vpl_Integer		theWriteDescriptor = 0;
	vpl_Integer		theReadDescriptor = 0;
	Int4 			result = 0;

	V_Object		block = NULL;

/* Variables to handle inputs */
	
	Int1			*persistentName = NULL;

/* Variables to handle internal processing */
	
	V_Archive			archivePtr = NULL;

/* Variables to handle output processing */
	
#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 5 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,0,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,1,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,2,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kString,3,primName, primitive, environment );
	if( result != kNOERROR ) return result;

#endif

	VPLPrimGetInputObjectInteger( &interpreterEnvironment, 0, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theWriteDescriptor, 1, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theReadDescriptor, 2, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	block = VPLPrimGetInputObject( 3,primitive,environment);
	if( block == NULL || block->type != kString) return record_error("create-persistent: Input 2 type not string!",primName,kWRONGINPUTTYPE,environment);
	
	persistentName = ((V_String)block)->string;
	
	block = VPLPrimGetInputObject( 4,primitive,environment);
	if( block == NULL) archivePtr = NULL;
	else if(block->type != kExternalBlock) return record_error("create-persistent: Input 3 type not externalBlock!",primName,kWRONGINPUTTYPE,environment);
	else if( strcmp(((V_ExternalBlock)block)->name,"VPL_Archive") != 0) return record_error("create-persistent: Input 3 external not type VPL_Archive! - ",primName,kWRONGINPUTTYPE,environment);
	else archivePtr = (V_Archive) ((V_ExternalBlock)block)->blockPtr;

/* Interpreter Command */
	if(theReadDescriptor)
	{
		OSErr	threadError = noErr;
		Int4 interpreterResult = 0;
		Nat4	outputAddress = 0;

		Nat4 command = kCommandPersistentCreate;
		if( (result = vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&command)) != kNOERROR) return result;
		
		if( (result = vpx_ipc_write_string((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,persistentName)) != kNOERROR) return result;

		if( (result = vpx_ipc_write_archive((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,archivePtr)) != kNOERROR) return result;
		
		vpx_ipc_read_word((V_Environment) interpreterEnvironment,kInterpreter,theReadDescriptor,&interpreterResult);

		vpx_ipc_read_word((V_Environment) interpreterEnvironment,kInterpreter,theReadDescriptor,&outputAddress);

		outputObject =  (V_Object) int_to_integer(outputAddress,environment);
		VPLPrimSetOutputObject(environment,primInArity,0,primitive, (V_Object) outputObject);
		*trigger = interpreterResult;	
		if((V_Environment) interpreterEnvironment && ((V_Environment) interpreterEnvironment)->interpreterMode == kThread) threadError = YieldToThread(((V_Environment) interpreterEnvironment)->interpreterThreadID);
	}
/* End Interpreter Command */

	return kNOERROR;
}

Int4 VPLP_remove_2D_persistent( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_remove_2D_persistent( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	vpl_Integer		interpreterEnvironment = 0;
	Int1			*primName = "remove-persistent";
	vpl_Integer		theWriteDescriptor = 0;
	vpl_Integer		theReadDescriptor = 0;
	Int4 			result = 0;

/* Variables to handle inputs */
	
	vpl_Integer		tempPersistent = 0;

/* Variables to handle internal processing */
	
/* Variables to handle output processing */
	
#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 4 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 0 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,0,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,1,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,2,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,3,primName, primitive, environment );
	if( result != kNOERROR ) return result;

#endif

	VPLPrimGetInputObjectInteger( &interpreterEnvironment, 0, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theWriteDescriptor, 1, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theReadDescriptor, 2, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &tempPersistent, 3, primName, primitive, environment );
	if( result != kNOERROR ) return result;

/* Interpreter Command */
	if(theReadDescriptor)
	{
		OSErr	threadError = noErr;
		Nat4	bufferSize = 0;
		Int4 interpreterResult = 0;
		
		Nat4 command = kCommandPersistentRemove;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&command);
		
		bufferSize = tempPersistent;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&bufferSize);

		vpx_ipc_read_word((V_Environment) interpreterEnvironment,kInterpreter,theReadDescriptor,&interpreterResult);

		*trigger = interpreterResult;	
		if((V_Environment) interpreterEnvironment && ((V_Environment) interpreterEnvironment)->interpreterMode == kThread) threadError = YieldToThread(((V_Environment) interpreterEnvironment)->interpreterThreadID);
	}
	else
	{
		V_Environment	theEnvironment = (V_Environment) theWriteDescriptor;
		Nat4			interpreterResult = 0;

		interpreterResult = persistent_remove(theEnvironment,((V_Value)tempPersistent)->objectName);

		*trigger = interpreterResult;	
	}
/* End Interpreter Command */

	return kNOERROR;
}

Int4 VPLP_insert_2D_attribute( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_insert_2D_attribute( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	vpl_Integer		interpreterEnvironment = 0;
	V_Object		outputObject = NULL;
	Int1			*primName = "insert-attribute";
	vpl_Integer		theWriteDescriptor = 0;
	vpl_Integer		theReadDescriptor = 0;
	Int4 			result = 0;

	V_Object		block = NULL;

/* Variables to handle inputs */
	
	vpl_Integer		tempClass = 0;
	vpl_Integer		attributePosition = 0;
	vpl_StringPtr	attributeName = NULL;
	V_Archive		archivePtr = NULL;

/* Variables to handle internal processing */
	
/* Variables to handle output processing */

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 7 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,0,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,1,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,2,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,3,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,4,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kString,5,primName, primitive, environment );
	if( result != kNOERROR ) return result;

#endif

	VPLPrimGetInputObjectInteger( &interpreterEnvironment, 0, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theWriteDescriptor, 1, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theReadDescriptor, 2, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &tempClass, 3, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &attributePosition, 4, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectString( &attributeName, 5, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	block = VPLPrimGetInputObject( 6,primitive,environment);
	if( block == NULL ) archivePtr = NULL;
	else if(block->type != kExternalBlock) return record_error("insert-attribute: Input 5 type not externalBlock!",primName,kWRONGINPUTTYPE,environment);
	else if( strcmp(((V_ExternalBlock)block)->name,"VPL_Archive") != 0) return record_error("insert-attribute: Input 5 external not type VPL_Archive! - ",primName,kWRONGINPUTTYPE,environment);
	else archivePtr = (V_Archive) ((V_ExternalBlock)block)->blockPtr;
	
/* Interpreter Command */
	if(theReadDescriptor)
	{
		OSErr	threadError = noErr;
		Nat4	bufferSize = 0;
		Int4 interpreterResult = 0;
		Nat4	outputAddress = 0;
		
		Nat4 command = kCommandAttributeInsert;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&command);
		
		bufferSize = tempClass;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&bufferSize);

		vpx_ipc_write_string((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,attributeName);

		bufferSize = attributePosition;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&bufferSize);

		if( (result = vpx_ipc_write_archive((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,archivePtr)) != kNOERROR) return result;

		vpx_ipc_read_word((V_Environment) interpreterEnvironment,kInterpreter,theReadDescriptor,&interpreterResult);
		vpx_ipc_read_word((V_Environment) interpreterEnvironment,kInterpreter,theReadDescriptor,&outputAddress);

		outputObject = (V_Object) int_to_integer(outputAddress,environment);
		VPLPrimSetOutputObject(environment,primInArity,0,primitive, (V_Object) outputObject);
		*trigger = interpreterResult;	
		if((V_Environment) interpreterEnvironment && ((V_Environment) interpreterEnvironment)->interpreterMode == kThread) threadError = YieldToThread(((V_Environment) interpreterEnvironment)->interpreterThreadID);
	}
	else
	{
		V_Environment	theEnvironment = (V_Environment) theWriteDescriptor;
		Nat4			interpreterResult = 0;
		V_Value			tempValue = NULL;
		
		archivePtr = archive_copy(environment,archivePtr);
		interpreterResult = attribute_create(theEnvironment,(V_Class)tempClass,attributeName,attributePosition,archivePtr,&tempValue);
		
		outputObject = (V_Object) int_to_integer((Nat4) tempValue,environment);
		VPLPrimSetOutputObject(environment,primInArity,0,primitive, (V_Object) outputObject);
		
		*trigger = interpreterResult;	
	}
/* End Interpreter Command */

	return kNOERROR;
}

Int4 VPLP_dispose_2D_attribute( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_dispose_2D_attribute( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	vpl_Integer		interpreterEnvironment = 0;
	Int1			*primName = "dispose-attribute";
	vpl_Integer		theWriteDescriptor = 0;
	vpl_Integer		theReadDescriptor = 0;
	Int4 			result = 0;

/* Variables to handle inputs */
	
	vpl_Integer		tempAttribute = 0;

/* Variables to handle internal processing */
	
/* Variables to handle output processing */

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 4 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 0 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,0,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,1,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,2,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,3,primName, primitive, environment );
	if( result != kNOERROR ) return result;

#endif

	VPLPrimGetInputObjectInteger( &interpreterEnvironment, 0, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theWriteDescriptor, 1, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theReadDescriptor, 2, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &tempAttribute, 3, primName, primitive, environment );
	if( result != kNOERROR ) return result;

/* Interpreter Command */
	if(theReadDescriptor)
	{
		OSErr	threadError = noErr;
		Nat4	bufferSize = 0;
		Int4 interpreterResult = 0;
		
		Nat4 command = kCommandAttributeRemove;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&command);
		
		bufferSize = tempAttribute;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&bufferSize);

		vpx_ipc_read_word((V_Environment) interpreterEnvironment,kInterpreter,theReadDescriptor,&interpreterResult);
		*trigger = interpreterResult;	
		if((V_Environment) interpreterEnvironment && ((V_Environment) interpreterEnvironment)->interpreterMode == kThread) threadError = YieldToThread(((V_Environment) interpreterEnvironment)->interpreterThreadID);
	}
	else
	{
		V_Environment	theEnvironment = (V_Environment) theWriteDescriptor;
		Nat4			interpreterResult = 0;

				destroy_classAttribute((V_Value)tempAttribute,theEnvironment);

				interpreterResult = kSuccess;

		*trigger = interpreterResult;	
	}
/* End Interpreter Command */

	return kNOERROR;
}

Int4 VPLP_insert_2D_case( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_insert_2D_case( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	vpl_Integer		interpreterEnvironment = 0;
	V_Object		outputObject = NULL;
	Int1			*primName = "insert-case";
	vpl_Integer		theWriteDescriptor = 0;
	vpl_Integer		theReadDescriptor = 0;
	Int4 			result = 0;

	V_Object		block = NULL;

/* Variables to handle inputs */
	
	vpl_Integer		tempMethod = 0;
	vpl_Integer		casePosition = 0;

/* Variables to handle internal processing */
	
/* Variables to handle output processing */

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 6 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,0,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,1,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,2,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,3,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,4,primName, primitive, environment );
	if( result != kNOERROR ) return result;

#endif

	VPLPrimGetInputObjectInteger( &interpreterEnvironment, 0, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theWriteDescriptor, 1, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theReadDescriptor, 2, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &tempMethod, 3, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &casePosition, 4, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	block = VPLPrimGetInputObject( 5,primitive,environment);
	if( block != NULL && block->type != kInstance) return record_error("insert-case: Input 4 type not instance!",primName,kWRONGINPUTTYPE,environment);

/* Interpreter Command */
	if(theReadDescriptor)
	{
		OSErr	threadError = noErr;
		Nat4	bufferSize = 0;
		Int4 interpreterResult = 0;
		Nat4	outputAddress = 0;
		
		Nat4 command = kCommandCaseInsert;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&command);
		
		bufferSize = tempMethod;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&bufferSize);

		bufferSize = casePosition;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&bufferSize);

		bufferSize = (Nat4) block;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&bufferSize);

		vpx_ipc_read_word((V_Environment) interpreterEnvironment,kInterpreter,theReadDescriptor,&interpreterResult);
		vpx_ipc_read_word((V_Environment) interpreterEnvironment,kInterpreter,theReadDescriptor,&outputAddress);

		outputObject =  (V_Object) int_to_integer(outputAddress,environment);
		VPLPrimSetOutputObject(environment,primInArity,0,primitive, (V_Object) outputObject);
		*trigger = interpreterResult;	
		if((V_Environment) interpreterEnvironment && ((V_Environment) interpreterEnvironment)->interpreterMode == kThread) threadError = YieldToThread(((V_Environment) interpreterEnvironment)->interpreterThreadID);
	}
	else
	{
		V_Environment	theEnvironment = (V_Environment) theWriteDescriptor;
		Nat4			interpreterResult = 0;
		V_Case			tempCase = NULL;

				interpreterResult = case_create(theEnvironment,(V_Method)tempMethod,casePosition,(Nat4) block,&tempCase);

		outputObject =  (V_Object) int_to_integer((Nat4) tempCase,environment);
		VPLPrimSetOutputObject(environment,primInArity,0,primitive, (V_Object) outputObject);

		*trigger = interpreterResult;	
	}
/* End Interpreter Command */

	return kNOERROR;
}

Int4 VPLP_dispose_2D_case( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_dispose_2D_case( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	vpl_Integer		interpreterEnvironment = 0;
	Int1			*primName = "dispose-case";
	vpl_Integer		theWriteDescriptor = 0;
	vpl_Integer		theReadDescriptor = 0;
	Int4 			result = 0;

/* Variables to handle inputs */
	
	vpl_Integer		tempCase = 0;

/* Variables to handle internal processing */
	
/* Variables to handle output processing */

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 4 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 0 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,0,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,1,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,2,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,3,primName, primitive, environment );
	if( result != kNOERROR ) return result;

#endif

	VPLPrimGetInputObjectInteger( &interpreterEnvironment, 0, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theWriteDescriptor, 1, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theReadDescriptor, 2, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &tempCase, 3, primName, primitive, environment );
	if( result != kNOERROR ) return result;

/* Interpreter Command */
	if(theReadDescriptor)
	{
		OSErr	threadError = noErr;
		Nat4	bufferSize = 0;
		Int4 interpreterResult = 0;
		
		Nat4 command = kCommandCaseRemove;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&command);
		
		bufferSize = tempCase;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&bufferSize);

		vpx_ipc_read_word((V_Environment) interpreterEnvironment,kInterpreter,theReadDescriptor,&interpreterResult);
		*trigger = interpreterResult;	
		if((V_Environment) interpreterEnvironment && ((V_Environment) interpreterEnvironment)->interpreterMode == kThread) threadError = YieldToThread(((V_Environment) interpreterEnvironment)->interpreterThreadID);
	}
	else
	{
		V_Environment	theEnvironment = (V_Environment) theWriteDescriptor;
		Nat4			interpreterResult = 0;

				destroy_case(theEnvironment,(V_Case)tempCase);

				interpreterResult = kSuccess;

		*trigger = interpreterResult;	
	}
/* End Interpreter Command */

	return kNOERROR;
}

Int4 VPLP_insert_2D_operation( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_insert_2D_operation( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	vpl_Integer		interpreterEnvironment = 0;
	V_Object		outputObject = NULL;
	Int1			*primName = "insert-operation";
	vpl_Integer		theWriteDescriptor = 0;
	vpl_Integer		theReadDescriptor = 0;
	Int4 			result = 0;

	V_Object		block = NULL;

/* Variables to handle inputs */
	
	vpl_Integer		tempCase = 0;
	vpl_Integer		operationPosition = 0;

/* Variables to handle internal processing */
	
/* Variables to handle output processing */

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 6 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,0,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,1,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,2,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,3,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,4,primName, primitive, environment );
	if( result != kNOERROR ) return result;

#endif

	VPLPrimGetInputObjectInteger( &interpreterEnvironment, 0, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theWriteDescriptor, 1, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theReadDescriptor, 2, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &tempCase, 3, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &operationPosition, 4, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	block = VPLPrimGetInputObject( 5,primitive,environment);
	if( block != NULL && block->type != kInstance) return record_error("insert-case: Input 4 type not instance!",primName,kWRONGINPUTTYPE,environment);

/* Interpreter Command */
	if(theReadDescriptor)
	{
		OSErr	threadError = noErr;
		Nat4	bufferSize = 0;
		Int4 interpreterResult = 0;
		Nat4	outputAddress = 0;
		
		Nat4 command = kCommandOperationInsert;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&command);
		
		bufferSize = tempCase;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&bufferSize);

		bufferSize = operationPosition;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&bufferSize);

		bufferSize = (Nat4) block;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&bufferSize);

		vpx_ipc_read_word((V_Environment) interpreterEnvironment,kInterpreter,theReadDescriptor,&interpreterResult);
		vpx_ipc_read_word((V_Environment) interpreterEnvironment,kInterpreter,theReadDescriptor,&outputAddress);

		outputObject =  (V_Object) int_to_integer(outputAddress,environment);
		VPLPrimSetOutputObject(environment,primInArity,0,primitive, (V_Object) outputObject);
		*trigger = interpreterResult;	
		if((V_Environment) interpreterEnvironment && ((V_Environment) interpreterEnvironment)->interpreterMode == kThread) threadError = YieldToThread(((V_Environment) interpreterEnvironment)->interpreterThreadID);
	}
/* End Interpreter Command */

	return kNOERROR;
}

Int4 VPLP_set_2D_operation( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_set_2D_operation( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	vpl_Integer		interpreterEnvironment = 0;
	Int1			*primName = "set-operation";
	vpl_Integer		theWriteDescriptor = 0;
	vpl_Integer		theReadDescriptor = 0;
	Int4 			result = 0;

	V_Object		block = NULL;

/* Variables to handle inputs */
	
	vpl_Integer		tempOperation = 0;
	vpl_StringPtr	operationType = NULL;
	vpl_Boolean		operationControl = kTRUE;
	vpl_StringPtr	operationAction = NULL;
	vpl_Boolean		operationRepeat = kFALSE;
	Int1			*operationText = NULL;
	Nat4			operationInject = 0;
	vpl_Boolean		operationSuper = kFALSE;
	vpl_Boolean		operationBreak = kFALSE;
	vpl_StringPtr	operationValue = NULL;

/* Variables to handle internal processing */
	
	Nat4 			theType = kOperation;
	Nat4 			theAction = kContinue;
	enum opTrigger	theControl = kSuccess;
	enum opValueType	theValue = kNormal;

/* Variables to handle output processing */

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 13 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 0 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,0,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,1,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,2,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,3,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kString,4,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kBoolean,5,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kString,6,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kBoolean,7,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kBoolean,10,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kBoolean,11,primName, primitive, environment );
	if( result != kNOERROR ) return result;

#endif

	VPLPrimGetInputObjectInteger( &interpreterEnvironment, 0, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theWriteDescriptor, 1, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theReadDescriptor, 2, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &tempOperation, 3, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectString( &operationType, 4, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectBool( &operationControl, 5, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectString( &operationAction, 6, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectBool( &operationRepeat, 7, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	block = VPLPrimGetInputObject( 8,primitive,environment);
	if( block == NULL) operationText = NULL;
	else if(block->type != kString) return record_error("set-operation: Input 6 type not string!",primName,kWRONGINPUTTYPE,environment);
	else operationText = ((V_String)block)->string;
	
	block = VPLPrimGetInputObject( 9,primitive,environment);
	if( block == NULL) operationInject = 0;
	else if(block->type != kInteger) return record_error("set-operation: Input 7 type not integer!",primName,kWRONGINPUTTYPE,environment);
	else operationInject = ((V_Integer)block)->value;
	
	VPLPrimGetInputObjectBool( &operationSuper, 10, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectBool( &operationBreak, 11, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	block = VPLPrimGetInputObject( 12,primitive,environment);
	if( block == NULL) operationValue = 0;
	else if(block->type != kString) return record_error("set-operation: Input 13 type not string!",primName,kWRONGINPUTTYPE,environment);
	else operationValue = ((V_String)block)->string;

	if(!operationValue) theValue = kNormal;
	else if( strcmp(operationValue,"Normal") == 0) theValue = kNormal;
	else if( strcmp(operationValue,"Debug") == 0) theValue = kDebug; 
	else if( strcmp(operationValue,"Skip") == 0) theValue = kSkip; 
	
	if( strcmp(operationType,"constant") == 0) theType = kConstant;
	else if( strcmp(operationType,"input_bar") == 0) theType = kInputBar; 
	else if( strcmp(operationType,"output_bar") == 0) theType = kOutputBar; 
	else if( strcmp(operationType,"match") == 0) theType = kMatch; 
	else if( strcmp(operationType,"persistent") == 0) theType = kPersistent; 
	else if( strcmp(operationType,"instance") == 0) theType = kInstantiate; 
	else if( strcmp(operationType,"get") == 0) theType = kGet; 
	else if( strcmp(operationType,"set") == 0) theType = kSet; 
	else if( strcmp(operationType,"local") == 0) theType = kLocal; 
	else if( strcmp(operationType,"universal") == 0) theType = kUniversal; 
	else if( strcmp(operationType,"primitive") == 0) theType = kPrimitive; 
	else if( strcmp(operationType,"evaluate") == 0) theType = kEvaluate; 
	else if( strcmp(operationType,"extconstant") == 0) theType = kExtConstant; 
	else if( strcmp(operationType,"extmatch") == 0) theType = kExtMatch; 
	else if( strcmp(operationType,"extset") == 0) theType = kExtSet; 
	else if( strcmp(operationType,"extprocedure") == 0) theType = kExtProcedure; 
	else if( strcmp(operationType,"extget") == 0) theType = kExtGet; 

	if( strcmp(operationAction,"Next Case") == 0) theAction = kNextCase;
	else if( strcmp(operationAction,"Terminate") == 0) theAction = kTerminate; 
	else if( strcmp(operationAction,"Continue") == 0) theAction = kContinue; 
	else if( strcmp(operationAction,"Finish") == 0) theAction = kFinish; 
	else if( strcmp(operationAction,"Fail") == 0) theAction = kFail;
	
	if( operationControl == kTRUE) theControl = kSuccess;
	else theControl = kFailure;
	
/* Interpreter Command */
	if(theReadDescriptor)
	{
		OSErr	threadError = noErr;
		Nat4	bufferSize = 0;
		Int4 interpreterResult = 0;
		
		Nat4 command = kCommandOperationSet;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&command);
		
		bufferSize = tempOperation;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&bufferSize);

		bufferSize = theType;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&bufferSize);
		
		bufferSize = theControl;						/* In the new engine, triggers are booleans + 1 */
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&bufferSize);

		bufferSize = theAction;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&bufferSize);

		bufferSize = operationRepeat;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&bufferSize);

		vpx_ipc_write_string((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,operationText);

		bufferSize = operationInject;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&bufferSize);

		bufferSize = operationSuper;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&bufferSize);

		bufferSize = operationBreak;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&bufferSize);

		bufferSize = theValue;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&bufferSize);

		vpx_ipc_read_word((V_Environment) interpreterEnvironment,kInterpreter,theReadDescriptor,&interpreterResult);

		*trigger = interpreterResult;	
		if((V_Environment) interpreterEnvironment && ((V_Environment) interpreterEnvironment)->interpreterMode == kThread) threadError = YieldToThread(((V_Environment) interpreterEnvironment)->interpreterThreadID);
	}
/* End Interpreter Command */

	return kNOERROR;
}

Int4 VPLP_dispose_2D_operation( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_dispose_2D_operation( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	vpl_Integer		interpreterEnvironment = 0;
	V_Object		outputObject = NULL;
	Int1			*primName = "dispose-operation";
	vpl_Integer		theWriteDescriptor = 0;
	vpl_Integer		theReadDescriptor = 0;
	Int4 			result = 0;

/* Variables to handle inputs */
	
	vpl_Integer		tempOperation = 0;

/* Variables to handle internal processing */
	
/* Variables to handle output processing */

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 4 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,0,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,1,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,2,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,3,primName, primitive, environment );
	if( result != kNOERROR ) return result;

#endif

	VPLPrimGetInputObjectInteger( &interpreterEnvironment, 0, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theWriteDescriptor, 1, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theReadDescriptor, 2, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &tempOperation, 3, primName, primitive, environment );
	if( result != kNOERROR ) return result;

/* Interpreter Command */
	if(theReadDescriptor)
	{
		OSErr	threadError = noErr;
		Nat4	bufferSize = 0;
		Int4 interpreterResult = 0;
		V_List	theList = NULL;
		Nat4	*theBlock = NULL;
		Nat4	counter = 0;
		
		Nat4 command = kCommandOperationRemove;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&command);
		
		bufferSize = tempOperation;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&bufferSize);

		vpx_ipc_read_word((V_Environment) interpreterEnvironment,kInterpreter,theReadDescriptor,&interpreterResult);

		vpx_ipc_read_word((V_Environment) interpreterEnvironment,kInterpreter,theReadDescriptor,&bufferSize);
		theList = create_list(bufferSize,environment);
		if(bufferSize) {
			theBlock = (Nat4 *) X_malloc(bufferSize*sizeof(Nat4));
			vpx_ipc_read_block((V_Environment) interpreterEnvironment,kInterpreter,theReadDescriptor,theBlock,bufferSize*sizeof(Nat4));
			for(counter=0;counter<bufferSize;counter++){
				outputObject = (V_Object) *(theBlock+counter);
				put_nth(environment,theList,counter+1,outputObject);
			}
			X_free(theBlock);
		}
		outputObject = (V_Object) theList;

		VPLPrimSetOutputObject(environment,primInArity,0,primitive,(V_Object) outputObject);
		*trigger = interpreterResult;	
		if((V_Environment) interpreterEnvironment && ((V_Environment) interpreterEnvironment)->interpreterMode == kThread) threadError = YieldToThread(((V_Environment) interpreterEnvironment)->interpreterThreadID);
	}
/* End Interpreter Command */

	return kNOERROR;
}

Int4 VPLP_insert_2D_terminal( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_insert_2D_terminal( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	vpl_Integer		interpreterEnvironment = 0;
	V_Object		outputObject = NULL;
	Int1			*primName = "insert-terminal";
	vpl_Integer		theWriteDescriptor = 0;
	vpl_Integer		theReadDescriptor = 0;
	Int4 			result = 0;

/* Variables to handle inputs */
	
	vpl_Integer		tempOperation = 0;
	vpl_Integer		index = 0;

/* Variables to handle internal processing */
	
/* Variables to handle output processing */

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 5 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,0,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,1,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,2,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,3,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,4,primName, primitive, environment );
	if( result != kNOERROR ) return result;

#endif

	VPLPrimGetInputObjectInteger( &interpreterEnvironment, 0, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theWriteDescriptor, 1, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theReadDescriptor, 2, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &tempOperation, 3, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &index, 4, primName, primitive, environment );
	if( result != kNOERROR ) return result;

/* Interpreter Command */
	if(theReadDescriptor)
	{
		OSErr	threadError = noErr;
		Nat4	bufferSize = 0;
		Int4 interpreterResult = 0;
		Nat4	outputAddress = 0;
		
		Nat4 command = kCommandTerminalInsert;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&command);
		
		bufferSize = tempOperation;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&bufferSize);

		bufferSize = index;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&bufferSize);

		vpx_ipc_read_word((V_Environment) interpreterEnvironment,kInterpreter,theReadDescriptor,&interpreterResult);
		vpx_ipc_read_word((V_Environment) interpreterEnvironment,kInterpreter,theReadDescriptor,&outputAddress);

		outputObject =  (V_Object) int_to_integer(outputAddress,environment);
		VPLPrimSetOutputObject(environment,primInArity,0,primitive, (V_Object) outputObject);
		*trigger = interpreterResult;	
		if((V_Environment) interpreterEnvironment && ((V_Environment) interpreterEnvironment)->interpreterMode == kThread) threadError = YieldToThread(((V_Environment) interpreterEnvironment)->interpreterThreadID);
	}
/* End Interpreter Command */

	return kNOERROR;
}

Int4 VPLP_set_2D_terminal( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_set_2D_terminal( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	vpl_Integer		interpreterEnvironment = 0;
	Int1			*primName = "set-terminal";
	vpl_Integer		theWriteDescriptor = 0;
	vpl_Integer		theReadDescriptor = 0;
	Int4 			result = 0;

	V_Object		block = NULL;

/* Variables to handle inputs */
	
	vpl_Integer		tempTerminal = 0;
	vpl_StringPtr	mode = NULL;
	vpl_Integer		tempRoot = 0;
	vpl_Integer		rootIndex = 0;
	vpl_Integer		rootOperation = 0;
	vpl_Integer		tempLoopRoot = 0;
	vpl_Integer		loopRootIndex = 0;

/* Variables to handle internal processing */
	
	Nat4			theMode = iSimple;

/* Variables to handle output processing */

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 10 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 0 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,0,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,1,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,2,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,3,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kString,4,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,6,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,7,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,9,primName, primitive, environment );
	if( result != kNOERROR ) return result;

#endif

	VPLPrimGetInputObjectInteger( &interpreterEnvironment, 0, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theWriteDescriptor, 1, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theReadDescriptor, 2, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &tempTerminal, 3, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectString( &mode, 4, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	block = VPLPrimGetInputObject( 5,primitive,environment);
	if( block == NULL) tempRoot = 0;
	else if(block->type != kInteger) return record_error("set-terminal: Input 3 type not integer!",primName,kWRONGINPUTTYPE,environment);
	else tempRoot = ((V_Integer)block)->value;

	VPLPrimGetInputObjectInteger( &rootIndex, 6, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &rootOperation, 7, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	block = VPLPrimGetInputObject( 8,primitive,environment);
	if( block == NULL) tempLoopRoot = 0;
	else if(block->type != kInteger) return record_error("insert-case: Input 6 type not integer!",primName,kWRONGINPUTTYPE,environment);
	else tempLoopRoot = ((V_Integer)block)->value;

	VPLPrimGetInputObjectInteger( &loopRootIndex, 9, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	if( strcmp(mode,"Normal") == 0) theMode = iSimple;
	else if( strcmp(mode,"List") == 0) theMode = iList; 
	else if( strcmp(mode,"Loop") == 0) theMode = iLoop; 

/* Interpreter Command */
	if(theReadDescriptor)
	{
		OSErr	threadError = noErr;
		Nat4	bufferSize = 0;
		Int4 interpreterResult = 0;
		
		Nat4 command = kCommandTerminalSet;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&command);
		
		bufferSize = tempTerminal;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&bufferSize);

		bufferSize = theMode;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&bufferSize);

		bufferSize = tempRoot;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&bufferSize);

		bufferSize = rootIndex;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&bufferSize);

		bufferSize = rootOperation;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&bufferSize);

		bufferSize = tempLoopRoot;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&bufferSize);

		bufferSize = loopRootIndex;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&bufferSize);

		vpx_ipc_read_word((V_Environment) interpreterEnvironment,kInterpreter,theReadDescriptor,&interpreterResult);

		*trigger = interpreterResult;	
		if((V_Environment) interpreterEnvironment && ((V_Environment) interpreterEnvironment)->interpreterMode == kThread) threadError = YieldToThread(((V_Environment) interpreterEnvironment)->interpreterThreadID);
	}
/* End Interpreter Command */

	return kNOERROR;
}

Int4 VPLP_dispose_2D_terminal( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_dispose_2D_terminal( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	vpl_Integer		interpreterEnvironment = 0;
	Int1			*primName = "dispose-terminal";
	vpl_Integer		theWriteDescriptor = 0;
	vpl_Integer		theReadDescriptor = 0;
	Int4 			result = 0;

/* Variables to handle inputs */
	
	vpl_Integer		tempTerminal = 0;

/* Variables to handle internal processing */
	
/* Variables to handle output processing */

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 4 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 0 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,0,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,1,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,2,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,3,primName, primitive, environment );
	if( result != kNOERROR ) return result;

#endif

	VPLPrimGetInputObjectInteger( &interpreterEnvironment, 0, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theWriteDescriptor, 1, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theReadDescriptor, 2, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &tempTerminal, 3, primName, primitive, environment );
	if( result != kNOERROR ) return result;

/* Interpreter Command */
	if(theReadDescriptor)
	{
		OSErr	threadError = noErr;
		Nat4	bufferSize = 0;
		Int4 interpreterResult = 0;
		
		Nat4 command = kCommandTerminalRemove;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&command);
		
		bufferSize = tempTerminal;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&bufferSize);

		vpx_ipc_read_word((V_Environment) interpreterEnvironment,kInterpreter,theReadDescriptor,&interpreterResult);
		*trigger = interpreterResult;	
		if((V_Environment) interpreterEnvironment && ((V_Environment) interpreterEnvironment)->interpreterMode == kThread) threadError = YieldToThread(((V_Environment) interpreterEnvironment)->interpreterThreadID);
	}
/* End Interpreter Command */

	return kNOERROR;
}

Int4 VPLP_insert_2D_root( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_insert_2D_root( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	vpl_Integer		interpreterEnvironment = 0;
	V_Object		outputObject = NULL;
	Int1			*primName = "insert-terminal";
	vpl_Integer		theWriteDescriptor = 0;
	vpl_Integer		theReadDescriptor = 0;
	Int4 			result = 0;

/* Variables to handle inputs */
	
	vpl_Integer		tempOperation = 0;
	vpl_Integer		index = 0;

/* Variables to handle internal processing */
	
/* Variables to handle output processing */

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 5 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,0,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,1,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,2,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,3,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,4,primName, primitive, environment );
	if( result != kNOERROR ) return result;

#endif

	VPLPrimGetInputObjectInteger( &interpreterEnvironment, 0, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theWriteDescriptor, 1, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theReadDescriptor, 2, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &tempOperation, 3, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &index, 4, primName, primitive, environment );
	if( result != kNOERROR ) return result;

/* Interpreter Command */
	if(theReadDescriptor)
	{
		OSErr	threadError = noErr;
		Nat4	bufferSize = 0;
		Int4 interpreterResult = 0;
		Nat4	outputAddress = 0;
		
		Nat4 command = kCommandRootInsert;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&command);
		
		bufferSize = tempOperation;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&bufferSize);

		bufferSize = index;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&bufferSize);

		vpx_ipc_read_word((V_Environment) interpreterEnvironment,kInterpreter,theReadDescriptor,&interpreterResult);
		vpx_ipc_read_word((V_Environment) interpreterEnvironment,kInterpreter,theReadDescriptor,&outputAddress);

		outputObject =  (V_Object) int_to_integer(outputAddress,environment);
		VPLPrimSetOutputObject(environment,primInArity,0,primitive, (V_Object) outputObject);
		*trigger = interpreterResult;	
		if((V_Environment) interpreterEnvironment && ((V_Environment) interpreterEnvironment)->interpreterMode == kThread) threadError = YieldToThread(((V_Environment) interpreterEnvironment)->interpreterThreadID);
	}
	else
	{
		V_Environment	theEnvironment = (V_Environment) theWriteDescriptor;
		Nat4			interpreterResult = 0;
		V_Root			tempRoot = NULL;

				interpreterResult = root_create(theEnvironment,(V_Operation)tempOperation,index,&tempRoot);

		outputObject =  (V_Object) int_to_integer((Nat4) tempRoot,environment);
		VPLPrimSetOutputObject(environment,primInArity,0,primitive, (V_Object) outputObject);

		*trigger = interpreterResult;	
	}
/* End Interpreter Command */

	return kNOERROR;
}

Int4 VPLP_set_2D_root( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_set_2D_root( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	vpl_Integer		interpreterEnvironment = 0;
	Int1			*primName = "set-terminal";
	vpl_Integer		theWriteDescriptor = 0;
	vpl_Integer		theReadDescriptor = 0;
	Int4 			result = 0;

/* Variables to handle inputs */
	
	vpl_Integer		tempRoot = 0;
	vpl_StringPtr	mode = NULL;

/* Variables to handle internal processing */
	
	Nat4			theMode = iSimple;

/* Variables to handle output processing */

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 5 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 0 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,0,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,1,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,2,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,3,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kString,4,primName, primitive, environment );
	if( result != kNOERROR ) return result;

#endif

	VPLPrimGetInputObjectInteger( &interpreterEnvironment, 0, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theWriteDescriptor, 1, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theReadDescriptor, 2, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &tempRoot, 3, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectString( &mode, 4, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	if( strcmp(mode,"Normal") == 0) theMode = iSimple;
	else if( strcmp(mode,"List") == 0) theMode = iList; 
	else if( strcmp(mode,"Loop") == 0) theMode = iLoop; 
	
/* Interpreter Command */
	if(theReadDescriptor)
	{
		OSErr	threadError = noErr;
		Nat4	bufferSize = 0;
		Int4 interpreterResult = 0;
		
		Nat4 command = kCommandRootSet;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&command);
		
		bufferSize = tempRoot;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&bufferSize);

		bufferSize = theMode;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&bufferSize);

		vpx_ipc_read_word((V_Environment) interpreterEnvironment,kInterpreter,theReadDescriptor,&interpreterResult);

		*trigger = interpreterResult;	
		if((V_Environment) interpreterEnvironment && ((V_Environment) interpreterEnvironment)->interpreterMode == kThread) threadError = YieldToThread(((V_Environment) interpreterEnvironment)->interpreterThreadID);
	}
/* End Interpreter Command */

	return kNOERROR;
}

Int4 VPLP_dispose_2D_root( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_dispose_2D_root( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	vpl_Integer		interpreterEnvironment = 0;
	Int1			*primName = "dispose-root";
	vpl_Integer		theWriteDescriptor = 0;
	vpl_Integer		theReadDescriptor = 0;
	Int4 			result = 0;

/* Variables to handle inputs */
	
	vpl_Integer		tempRoot = 0;

/* Variables to handle internal processing */
	
/* Variables to handle output processing */

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 4 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 0 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,0,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,1,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,2,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,3,primName, primitive, environment );
	if( result != kNOERROR ) return result;

#endif

	VPLPrimGetInputObjectInteger( &interpreterEnvironment, 0, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theWriteDescriptor, 1, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theReadDescriptor, 2, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &tempRoot, 3, primName, primitive, environment );
	if( result != kNOERROR ) return result;

/* Interpreter Command */
	if(theReadDescriptor)
	{
		OSErr	threadError = noErr;
		Nat4	bufferSize = 0;
		Int4 interpreterResult = 0;
		
		Nat4 command = kCommandRootRemove;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&command);
		
		bufferSize = tempRoot;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&bufferSize);

		vpx_ipc_read_word((V_Environment) interpreterEnvironment,kInterpreter,theReadDescriptor,&interpreterResult);
		*trigger = interpreterResult;	
		if((V_Environment) interpreterEnvironment && ((V_Environment) interpreterEnvironment)->interpreterMode == kThread) threadError = YieldToThread(((V_Environment) interpreterEnvironment)->interpreterThreadID);
	}
/* End Interpreter Command */

	return kNOERROR;
}

#pragma mark --------------- Object Value Primitives ---------------

Int4 VPLP_get_2D_class_2D_instance( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_get_2D_class_2D_instance( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	vpl_Integer		interpreterEnvironment = 0;
	V_Object		outputObject = NULL;
	Int1			*primName = "get-class-instance";
	vpl_Integer		theWriteDescriptor = 0;
	vpl_Integer		theReadDescriptor = 0;
	Int4 			result = 0;

/* Variables to handle inputs */
	
	vpl_Integer		tempClass = 0;

/* Variables to handle internal processing */
	
/* Variables to handle output processing */
	
#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 4 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,0,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,1,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,2,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,3,primName, primitive, environment );
	if( result != kNOERROR ) return result;

#endif

	VPLPrimGetInputObjectInteger( &interpreterEnvironment, 0, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theWriteDescriptor, 1, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theReadDescriptor, 2, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &tempClass, 3, primName, primitive, environment );
	if( result != kNOERROR ) return result;

/* Interpreter Command */
	if(theReadDescriptor)
	{
		OSErr	threadError = noErr;
		Nat4	outputAddress = 0;
		
		Int4 interpreterResult = 0;
		Nat4 command = kCommandValueInstanceToValue;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&command);
		
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&tempClass);

		vpx_ipc_read_word((V_Environment) interpreterEnvironment,kInterpreter,theReadDescriptor,&interpreterResult);
		vpx_ipc_read_word((V_Environment) interpreterEnvironment,kInterpreter,theReadDescriptor,&outputAddress);

		outputObject = (V_Object) int_to_integer(outputAddress,environment);
		VPLPrimSetOutputObject(environment,primInArity,0,primitive,(V_Object) outputObject);
		*trigger = interpreterResult;	
		if((V_Environment) interpreterEnvironment && ((V_Environment) interpreterEnvironment)->interpreterMode == kThread) threadError = YieldToThread(((V_Environment) interpreterEnvironment)->interpreterThreadID);
	}
/* End Interpreter Command */

	return kNOERROR;
}

extern Int4 attribute_offset( V_Class tempClass , Int1 *tempOString );

Int4 VPLP_set_2D_instance_2D_attribute_2D_value( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_set_2D_instance_2D_attribute_2D_value( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	vpl_Integer		interpreterEnvironment = 0;
	Int1			*primName = "set-instance-attribute-value";
	vpl_Integer		theWriteDescriptor = 0;
	vpl_Integer		theReadDescriptor = 0;
	Int4 			result = 0;

/* Variables to handle inputs */
	
	vpl_Integer		tempClass = 0;
	vpl_Integer		tempInstance = 0;
	vpl_StringPtr	tempName = NULL;
	vpl_Integer		tempValue = 0;

/* Variables to handle internal processing */
	
/* Variables to handle output processing */

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 7 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 0 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,0,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,1,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,2,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,3,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,4,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kString,5,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,6,primName, primitive, environment );
	if( result != kNOERROR ) return result;

#endif

	VPLPrimGetInputObjectInteger( &interpreterEnvironment, 0, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theWriteDescriptor, 1, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theReadDescriptor, 2, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &tempClass, 3, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &tempInstance, 4, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectString( &tempName, 5, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &tempValue, 6, primName, primitive, environment );
	if( result != kNOERROR ) return result;

/* Interpreter Command */
	if(theReadDescriptor)
	{
		OSErr	threadError = noErr;
		Nat4	bufferSize = 0;
		Int4 interpreterResult = 0;
		
		Nat4 command = kCommandValueInstanceSetAttribute;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&command);
		
		bufferSize = tempClass;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&bufferSize);

		bufferSize = tempInstance;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&bufferSize);

		vpx_ipc_write_string((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,tempName);

		bufferSize = tempValue;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&bufferSize);

		vpx_ipc_read_word((V_Environment) interpreterEnvironment,kInterpreter,theReadDescriptor,&interpreterResult);

		*trigger = interpreterResult;	
		if((V_Environment) interpreterEnvironment && ((V_Environment) interpreterEnvironment)->interpreterMode == kThread) threadError = YieldToThread(((V_Environment) interpreterEnvironment)->interpreterThreadID);
	}
	else
	{
		V_Environment	theEnvironment = (V_Environment) theWriteDescriptor;
		Nat4			interpreterResult = 0;
		V_Class			theClass = (V_Class) tempClass;
		V_Instance		theInstance = (V_Instance) tempInstance;
		V_Object		tempObject = (V_Object) tempValue;
				V_Object	oldValue = NULL;
				Int4		counter = 0;

				if(theInstance == NULL || theInstance->type != kInstance) {
					printf("CommandValueInstanceSetAttribute: Temp Instance not type instance!\n");
					tempInstance = 0;
				}

				if(theClass != NULL && tempName != NULL){
					counter = attribute_offset(theClass,tempName);
					if(counter < 0) {
						printf("CommandValueInstanceSetAttribute: Attribute %s not found for class %s\n",tempName,theClass->name);
					} else {
						oldValue = theInstance->objectList[counter];
						increment_count(tempObject);
						theInstance->objectList[counter] = tempObject;
						decrement_count(theEnvironment,oldValue);
					}
				}else{
					printf("CommandValueInstanceSetAttribute: NULL class, instance, or name\n");
				}

				interpreterResult = kSuccess;

		*trigger = interpreterResult;	
	}
/* End Interpreter Command */

	return kNOERROR;
}

Int4 VPLP_get_2D_element_2D_value( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_get_2D_element_2D_value( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	vpl_Integer		interpreterEnvironment = 0;
	V_Object		outputObject = NULL;
	Int1			*primName = "get-element-value";
	vpl_Integer		theWriteDescriptor = 0;
	vpl_Integer		theReadDescriptor = 0;
	Int4 			result = 0;

/* Variables to handle inputs */
	
	vpl_Integer			tempValue = 0;

/* Variables to handle internal processing */
	
/* Variables to handle output processing */
	

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 4 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,0,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,1,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,2,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,3,primName, primitive, environment );
	if( result != kNOERROR ) return result;

#endif

	VPLPrimGetInputObjectInteger( &interpreterEnvironment, 0, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theWriteDescriptor, 1, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theReadDescriptor, 2, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &tempValue, 3, primName, primitive, environment );
	if( result != kNOERROR ) return result;

/* Interpreter Command */
	if(theReadDescriptor)
	{
		OSErr	threadError = noErr;
		Nat4	bufferSize = 0;
		Int4 interpreterResult = 0;
		V_Archive	tempArchive = NULL;
		
		Nat4 command = kCommandElementGetValue;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&command);
		
		bufferSize = tempValue;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&bufferSize);

		vpx_ipc_read_word((V_Environment) interpreterEnvironment,kInterpreter,theReadDescriptor,&interpreterResult);

		if( (result = vpx_ipc_read_archive((V_Environment) interpreterEnvironment,kInterpreter,theReadDescriptor,&tempArchive)) == kNOERROR) {
			if(tempArchive) {
				bufferSize = archive_size(environment,tempArchive);
				outputObject = (V_Object) create_externalBlock("VPL_Archive",bufferSize,environment);
				((V_ExternalBlock)outputObject)->blockPtr = (void *) tempArchive;
			} else {
				outputObject = NULL;
			}
		} else {
			outputObject = NULL;
		}

		VPLPrimSetOutputObject(environment,primInArity,0,primitive, (V_Object) outputObject);
		*trigger = interpreterResult;	
		if((V_Environment) interpreterEnvironment && ((V_Environment) interpreterEnvironment)->interpreterMode == kThread) threadError = YieldToThread(((V_Environment) interpreterEnvironment)->interpreterThreadID);
	}
	else
	{
		V_Environment	theEnvironment = (V_Environment) theWriteDescriptor;
		Nat4			interpreterResult = 0;
		V_Value			theValue = (V_Value) tempValue;
		Int4			archiveSize = 0;
		V_Archive		archivePtr = NULL;

				if(theValue->value) {
					archivePtr = archive_object(theEnvironment,theValue->value,&archiveSize);
					outputObject = (V_Object) create_externalBlock("VPL_Archive",archiveSize,environment);
					((V_ExternalBlock)outputObject)->blockPtr = (void *) archivePtr;
				} else {
					outputObject = NULL;
				}

		VPLPrimSetOutputObject(environment,primInArity,0,primitive, (V_Object) outputObject);

				interpreterResult = kSuccess;

		*trigger = interpreterResult;	
	}
/* End Interpreter Command */

	return kNOERROR;
}

Int4 VPLP_get_2D_element_2D_integer( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_get_2D_element_2D_integer( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	vpl_Integer		interpreterEnvironment = 0;
	V_Object		outputObject = NULL;
	Int1			*primName = "get-element-integer";
	vpl_Integer		theWriteDescriptor = 0;
	vpl_Integer		theReadDescriptor = 0;
	Int4 			result = 0;

/* Variables to handle inputs */
	
	vpl_Integer			tempValue = 0;

/* Variables to handle internal processing */
	
/* Variables to handle output processing */
	

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 4 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,0,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,1,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,2,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,3,primName, primitive, environment );
	if( result != kNOERROR ) return result;

#endif

	VPLPrimGetInputObjectInteger( &interpreterEnvironment, 0, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theWriteDescriptor, 1, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theReadDescriptor, 2, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &tempValue, 3, primName, primitive, environment );
	if( result != kNOERROR ) return result;

/* Interpreter Command */
	if(theReadDescriptor)
	{
		OSErr	threadError = noErr;
		Nat4	bufferSize = 0;
		Int4 interpreterResult = 0;
		
		Nat4 command = kCommandElementGetInteger;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&command);
		
		bufferSize = tempValue;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&bufferSize);

		vpx_ipc_read_word((V_Environment) interpreterEnvironment,kInterpreter,theReadDescriptor,&interpreterResult);
		vpx_ipc_read_word((V_Environment) interpreterEnvironment,kInterpreter,theReadDescriptor,&bufferSize);
		outputObject = (V_Object) int_to_integer(bufferSize,environment);
		
		VPLPrimSetOutputObject(environment,primInArity,0,primitive, (V_Object) outputObject);
		*trigger = interpreterResult;	
		if((V_Environment) interpreterEnvironment && ((V_Environment) interpreterEnvironment)->interpreterMode == kThread) threadError = YieldToThread(((V_Environment) interpreterEnvironment)->interpreterThreadID);
	}
/* End Interpreter Command */

	return kNOERROR;
}

Int4 VPLP_set_2D_element_2D_value( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_set_2D_element_2D_value( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	vpl_Integer		interpreterEnvironment = 0;
	Int1			*primName = "set-element-value";
	vpl_Integer		theWriteDescriptor = 0;
	vpl_Integer		theReadDescriptor = 0;
	Int4 			result = 0;

/* Variables to handle inputs */
	
	vpl_Integer			tempValue = 0;
	vpl_Integer			tempObject = 0;

/* Variables to handle internal processing */
	
/* Variables to handle output processing */
	

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 5 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 0 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,0,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,1,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,2,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,3,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,4,primName, primitive, environment );
	if( result != kNOERROR ) return result;

#endif

	VPLPrimGetInputObjectInteger( &interpreterEnvironment, 0, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theWriteDescriptor, 1, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theReadDescriptor, 2, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &tempValue, 3, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &tempObject, 4, primName, primitive, environment );
	if( result != kNOERROR ) return result;

/* Interpreter Command */
	if(theReadDescriptor)
	{
		OSErr	threadError = noErr;
		Nat4	bufferSize = 0;
		Int4 interpreterResult = 0;
		
		Nat4 command = kCommandElementSetValue;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&command);
		
		bufferSize = tempValue;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&bufferSize);

		bufferSize = tempObject;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&bufferSize);

		vpx_ipc_read_word((V_Environment) interpreterEnvironment,kInterpreter,theReadDescriptor,&interpreterResult);

		*trigger = interpreterResult;	
		if((V_Environment) interpreterEnvironment && ((V_Environment) interpreterEnvironment)->interpreterMode == kThread) threadError = YieldToThread(((V_Environment) interpreterEnvironment)->interpreterThreadID);
	}
	else
	{
		V_Environment	theEnvironment = (V_Environment) theWriteDescriptor;
		Nat4			interpreterResult = 0;
		V_Value			theValue = (V_Value) tempValue;
		V_Object		theObject = (V_Object) tempObject;
		V_Object		oldValue = NULL;


				oldValue = theValue->value;
				increment_count(theObject);
				theValue->value = theObject;
				decrement_count(theEnvironment,oldValue);

				interpreterResult = kSuccess;

		*trigger = interpreterResult;	
	}
/* End Interpreter Command */

	return kNOERROR;
}

#pragma mark --------------- Interpreter To Value Primitives ---------------

Int4 VPLP_string_2D_to_2D_value( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_string_2D_to_2D_value( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	vpl_Integer		interpreterEnvironment = 0;
	V_Object		outputObject = NULL;
	Int1			*primName = "string-to-value";
	vpl_Integer		theWriteDescriptor = 0;
	vpl_Integer		theReadDescriptor = 0;
	Int4 			result = 0;

/* Variables to handle inputs */
	
	Int1			*theString = NULL;

/* Variables to handle internal processing */
	
/* Variables to handle output processing */
	
#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 4 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,0,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,1,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,2,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kString,3,primName, primitive, environment );
	if( result != kNOERROR ) return result;

#endif

	VPLPrimGetInputObjectInteger( &interpreterEnvironment, 0, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theWriteDescriptor, 1, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theReadDescriptor, 2, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectString( &theString, 3, primName, primitive, environment );
	if( result != kNOERROR ) return result;

/* Interpreter Command */
	if(theReadDescriptor)
	{
		OSErr	threadError = noErr;
		Nat4	outputAddress = 0;
		Int4 interpreterResult = 0;
		Nat4 command = kCommandValueStringToValue;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&command);
		
		vpx_ipc_write_string((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,theString);

		vpx_ipc_read_word((V_Environment) interpreterEnvironment,kInterpreter,theReadDescriptor,&interpreterResult);
		vpx_ipc_read_word((V_Environment) interpreterEnvironment,kInterpreter,theReadDescriptor,&outputAddress);

		outputObject = (V_Object) int_to_integer(outputAddress,environment);
		VPLPrimSetOutputObject(environment,primInArity,0,primitive,(V_Object) outputObject);
		*trigger = interpreterResult;	
		if((V_Environment) interpreterEnvironment && ((V_Environment) interpreterEnvironment)->interpreterMode == kThread) threadError = YieldToThread(((V_Environment) interpreterEnvironment)->interpreterThreadID);
	}
/* End Interpreter Command */

	return kNOERROR;
}

Int4 VPLP_list_2D_to_2D_value( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_list_2D_to_2D_value( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	vpl_Integer		interpreterEnvironment = 0;
	V_Object		outputObject = NULL;
	Int1			*primName = "list-to-value";
	vpl_Integer		theWriteDescriptor = 0;
	vpl_Integer		theReadDescriptor = 0;
	Int4 			result = 0;

	V_Object		block = NULL;

/* Variables to handle inputs */
	
	V_List			theList = NULL;

/* Variables to handle internal processing */

	Nat4			counter = 0;
	Nat4			*theBlock = NULL;
	Nat4			tempValue = 0;
	
/* Variables to handle output processing */

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 4 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,0,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,1,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,2,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kList,3,primName, primitive, environment );
	if( result != kNOERROR ) return result;

#endif

	VPLPrimGetInputObjectInteger( &interpreterEnvironment, 0, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theWriteDescriptor, 1, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theReadDescriptor, 2, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	block = VPLPrimGetInputObject( 3,primitive,environment);
	theList = (V_List) block;

/* Interpreter Command */
	if(theReadDescriptor)
	{
		OSErr	threadError = noErr;
		Nat4	bufferSize = 0;
		Nat4	outputAddress = 0;
		
		Int4 interpreterResult = 0;
		Nat4 command = kCommandValueListToValue;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&command);
		
		if(theList->listLength) bufferSize = theList->listLength;
		else bufferSize = 0;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&bufferSize);

		if(bufferSize){
			theBlock = (Nat4 *) X_malloc(bufferSize*sizeof(Nat4));
			for( counter=0; counter<bufferSize; counter++){
				block = theList->objectList[counter];
				if( block == NULL || block->type != kInteger) {
					record_error("list-to-value: List element type not integer!",primName,kWRONGINPUTTYPE,environment);
					tempValue = 0;
				} else tempValue = ((V_Integer) block)->value;
				*(theBlock+counter) = tempValue;
			}
			vpx_ipc_write_block((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,theBlock,bufferSize*sizeof(Nat4));
			X_free(theBlock);
		}

		vpx_ipc_read_word((V_Environment) interpreterEnvironment,kInterpreter,theReadDescriptor,&interpreterResult);
		vpx_ipc_read_word((V_Environment) interpreterEnvironment,kInterpreter,theReadDescriptor,&outputAddress);

		outputObject = (V_Object) int_to_integer(outputAddress,environment);
		VPLPrimSetOutputObject(environment,primInArity,0,primitive,(V_Object) outputObject);
		*trigger = interpreterResult;	
		if((V_Environment) interpreterEnvironment && ((V_Environment) interpreterEnvironment)->interpreterMode == kThread) threadError = YieldToThread(((V_Environment) interpreterEnvironment)->interpreterThreadID);
	}
	else
	{
		V_Environment	theEnvironment = (V_Environment) theWriteDescriptor;
		Nat4			interpreterResult = 0;
		V_List			outputList = NULL;
		V_Object	tempObject = NULL;

				if(theList->listLength) {
					outputList = create_list(theList->listLength,theEnvironment);
					outputList->use = 0;
					for(counter=0;counter<theList->listLength;counter++){
						tempObject = theList->objectList[counter];
						if( tempObject == NULL || tempObject->type != kInteger) {
							record_error("list-to-value: List element type not integer!",primName,kWRONGINPUTTYPE,environment);
							tempObject = NULL;
						} else tempObject = (V_Object) ((V_Integer) tempObject)->value;
						put_nth(theEnvironment,outputList,counter+1,tempObject);
					}
				} else {
					outputList = NULL;
				}

				interpreterResult = kSuccess;

		outputObject = (V_Object) int_to_integer((Nat4) outputList,environment);
		VPLPrimSetOutputObject(environment,primInArity,0,primitive,(V_Object) outputObject);

		*trigger = interpreterResult;	
	}
/* End Interpreter Command */

	return kNOERROR;
}

Int4 VPLP_value_2D_to_2D_value( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_value_2D_to_2D_value( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	vpl_Integer		interpreterEnvironment = 0;
	V_Object		outputObject = NULL;
	Int1			*primName = "value-to-value";
	vpl_Integer		theWriteDescriptor = 0;
	vpl_Integer		theReadDescriptor = 0;
	Int4 			result = 0;


/* Variables to handle inputs */
	
	vpl_Integer		tempValue = 0;

/* Variables to handle internal processing */
	
/* Variables to handle output processing */

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 4 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,0,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,1,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,2,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,3,primName, primitive, environment );
	if( result != kNOERROR ) return result;

#endif

	VPLPrimGetInputObjectInteger( &interpreterEnvironment, 0, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theWriteDescriptor, 1, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theReadDescriptor, 2, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &tempValue, 3, primName, primitive, environment );
	if( result != kNOERROR ) return result;

/* Interpreter Command */
	if(theReadDescriptor)
	{
		OSErr	threadError = noErr;
		Nat4	bufferSize = 0;
		Nat4	outputAddress = 0;
		
		Int4 interpreterResult = 0;
		Nat4 command = kCommandValueValueToValue;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&command);
		
		bufferSize = tempValue;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&bufferSize);

		vpx_ipc_read_word((V_Environment) interpreterEnvironment,kInterpreter,theReadDescriptor,&interpreterResult);
		vpx_ipc_read_word((V_Environment) interpreterEnvironment,kInterpreter,theReadDescriptor,&outputAddress);

		outputObject = (V_Object) int_to_integer(outputAddress,environment);
		VPLPrimSetOutputObject(environment,primInArity,0,primitive,(V_Object) outputObject);
		*trigger = interpreterResult;	
		if((V_Environment) interpreterEnvironment && ((V_Environment) interpreterEnvironment)->interpreterMode == kThread) threadError = YieldToThread(((V_Environment) interpreterEnvironment)->interpreterThreadID);
	}
	else
	{
		V_Environment	theEnvironment = (V_Environment) theWriteDescriptor;
		Nat4			interpreterResult = 0;
		V_Object		tempObject = NULL;

				tempObject = copy(theEnvironment,(V_Object) tempValue);
				if(tempObject) tempObject->use = 0;

				interpreterResult = kSuccess;

		outputObject = (V_Object) int_to_integer((Nat4) tempObject,environment);
		VPLPrimSetOutputObject(environment,primInArity,0,primitive,(V_Object) outputObject);

		*trigger = interpreterResult;	
	}
/* End Interpreter Command */

	return kNOERROR;
}

Int4 VPLP_archive_2D_to_2D_value( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_archive_2D_to_2D_value( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	vpl_Integer		interpreterEnvironment = 0;
	V_Object		outputObject = NULL;
	Int1			*primName = "archive-to-value";
	vpl_Integer		theWriteDescriptor = 0;
	vpl_Integer		theReadDescriptor = 0;
	Int4 			result = 0;

	V_Object		block = NULL;

/* Variables to handle inputs */
	
/* Variables to handle internal processing */
	
	V_Archive			archivePtr = NULL;

/* Variables to handle output processing */
	
#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 4 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,0,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,1,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,2,primName, primitive, environment );
	if( result != kNOERROR ) return result;

#endif

	VPLPrimGetInputObjectInteger( &interpreterEnvironment, 0, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theWriteDescriptor, 1, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theReadDescriptor, 2, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	block = VPLPrimGetInputObject( 3,primitive,environment);
	if( block == NULL ) archivePtr = NULL;
	else if(block->type != kExternalBlock) return record_error("archive-to-value: Input 1 type not externalBlock!",primName,kWRONGINPUTTYPE,environment);
	else if( strcmp(((V_ExternalBlock)block)->name,"VPL_Archive") != 0) return record_error("archive-to-value: Input 1 external not type VPL_Archive! - ",primName,kWRONGINPUTTYPE,environment);
	else archivePtr = (V_Archive) ((V_ExternalBlock)block)->blockPtr;
	
/* Interpreter Command */
	if(theReadDescriptor)
	{
		OSErr	threadError = noErr;
		Nat4	outputAddress = 0;
		
		Int4 interpreterResult = 0;
		Nat4 command = kCommandValueArchiveToValue;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&command);

		if( (result = vpx_ipc_write_archive((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,archivePtr)) != kNOERROR) return result;

		vpx_ipc_read_word((V_Environment) interpreterEnvironment,kInterpreter,theReadDescriptor,&interpreterResult);
		vpx_ipc_read_word((V_Environment) interpreterEnvironment,kInterpreter,theReadDescriptor,&outputAddress);

		outputObject = (V_Object) int_to_integer(outputAddress,environment);
		VPLPrimSetOutputObject(environment,primInArity,0,primitive,(V_Object) outputObject);
		*trigger = interpreterResult;	
		if((V_Environment) interpreterEnvironment && ((V_Environment) interpreterEnvironment)->interpreterMode == kThread) threadError = YieldToThread(((V_Environment) interpreterEnvironment)->interpreterThreadID);
	}
	else
	{
		V_Environment	theEnvironment = (V_Environment) theWriteDescriptor;
		Nat4			interpreterResult = 0;
		V_Object		tempObject = NULL;

					interpreterResult = kSuccess;
					tempObject = unarchive_object(theEnvironment,archivePtr);
					tempObject->use = 0;

		outputObject = (V_Object) int_to_integer((Nat4) tempObject,environment);
		VPLPrimSetOutputObject(environment,primInArity,0,primitive,(V_Object) outputObject);

		*trigger = interpreterResult;	
	}
/* End Interpreter Command */

	return kNOERROR;
}

Int4 VPLP_unarchive_2D_value( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_unarchive_2D_value( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	vpl_Integer		interpreterEnvironment = 0;
	Int1			*primName = "unarchive-value";
	vpl_Integer		theWriteDescriptor = 0;
	vpl_Integer		theReadDescriptor = 0;
	Int4 			result = 0;

/* Variables to handle inputs */
	
	vpl_Integer		tempValue = 0;

/* Variables to handle internal processing */
	
/* Variables to handle output processing */
	
#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 4 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 0 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,0,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,1,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,2,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,3,primName, primitive, environment );
	if( result != kNOERROR ) return result;

#endif

	VPLPrimGetInputObjectInteger( &interpreterEnvironment, 0, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theWriteDescriptor, 1, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theReadDescriptor, 2, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &tempValue, 3, primName, primitive, environment );
	if( result != kNOERROR ) return result;

/* Interpreter Command */
	if(theReadDescriptor)
	{
		OSErr	threadError = noErr;
		Nat4	bufferSize = 0;
		Int4 interpreterResult = 0;

		Nat4 command = kCommandElementUnarchiveValue;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&command);
		
		bufferSize = tempValue;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&bufferSize);

		vpx_ipc_read_word((V_Environment) interpreterEnvironment,kInterpreter,theReadDescriptor,&interpreterResult);

		*trigger = interpreterResult;	
		if((V_Environment) interpreterEnvironment && ((V_Environment) interpreterEnvironment)->interpreterMode == kThread) threadError = YieldToThread(((V_Environment) interpreterEnvironment)->interpreterThreadID);
	}
	else
	{
		V_Environment	theEnvironment = (V_Environment) theWriteDescriptor;
		Nat4			interpreterResult = 0;
		V_Value			theValue = (V_Value) tempValue;

		theValue->value = unarchive_object(theEnvironment,theValue->valueArchive);

		interpreterResult = kSuccess;

		*trigger = interpreterResult;	
	}
/* End Interpreter Command */

	return kNOERROR;
}

#pragma mark --------------- Rename Object Primitives ---------------

Int4 VPLP_rename_2D_attribute( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_rename_2D_attribute( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	vpl_Integer		interpreterEnvironment = 0;
	Int1			*primName = "rename-attribute";
	vpl_Integer		theWriteDescriptor = 0;
	vpl_Integer		theReadDescriptor = 0;
	Int4 			result = 0;

/* Variables to handle inputs */
	
	vpl_Integer		tempClass = 0;
	vpl_StringPtr	oldName = NULL;
	vpl_StringPtr	newName = NULL;

/* Variables to handle internal processing */
	
/* Variables to handle output processing */

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 6 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 0 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,0,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,1,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,2,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,3,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kString,4,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kString,5,primName, primitive, environment );
	if( result != kNOERROR ) return result;

#endif

	VPLPrimGetInputObjectInteger( &interpreterEnvironment, 0, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theWriteDescriptor, 1, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theReadDescriptor, 2, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &tempClass, 3, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectString( &oldName, 4, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectString( &newName, 5, primName, primitive, environment );
	if( result != kNOERROR ) return result;

/* Interpreter Command */
	if(theReadDescriptor)
	{
		OSErr	threadError = noErr;
		Nat4	bufferSize = 0;
		
		Int4 interpreterResult = 0;
		Nat4 command = kCommandAttributeRename;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&command);
		
		bufferSize = tempClass;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&bufferSize);

		vpx_ipc_write_string((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,oldName);

		vpx_ipc_write_string((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,newName);

		vpx_ipc_read_word((V_Environment) interpreterEnvironment,kInterpreter,theReadDescriptor,&interpreterResult);
		*trigger = interpreterResult;	
		if((V_Environment) interpreterEnvironment && ((V_Environment) interpreterEnvironment)->interpreterMode == kThread) threadError = YieldToThread(((V_Environment) interpreterEnvironment)->interpreterThreadID);
	}
/* End Interpreter Command */

	return kNOERROR;
}

Int4 VPLP_rename_2D_class( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_rename_2D_class( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	vpl_Integer		interpreterEnvironment = 0;
	Int1			*primName = "rename-class";
	vpl_Integer		theWriteDescriptor = 0;
	vpl_Integer		theReadDescriptor = 0;
	Int4 			result = 0;


/* Variables to handle inputs */
	
	vpl_StringPtr	oldName = NULL;
	vpl_StringPtr	newName = NULL;

/* Variables to handle internal processing */
	
/* Variables to handle output processing */
	
#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 5 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 0 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,0,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,1,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,2,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kString,3,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kString,4,primName, primitive, environment );
	if( result != kNOERROR ) return result;

#endif

	VPLPrimGetInputObjectInteger( &interpreterEnvironment, 0, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theWriteDescriptor, 1, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theReadDescriptor, 2, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectString( &oldName, 3, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectString( &newName, 4, primName, primitive, environment );
	if( result != kNOERROR ) return result;

/* Interpreter Command */
	if(theReadDescriptor)
	{
		OSErr	threadError = noErr;
		
		Int4 interpreterResult = 0;
		Nat4 command = kCommandClassRename;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&command);
		
		vpx_ipc_write_string((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,oldName);

		vpx_ipc_write_string((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,newName);

		vpx_ipc_read_word((V_Environment) interpreterEnvironment,kInterpreter,theReadDescriptor,&interpreterResult);
		*trigger = interpreterResult;	
		if((V_Environment) interpreterEnvironment && ((V_Environment) interpreterEnvironment)->interpreterMode == kThread) threadError = YieldToThread(((V_Environment) interpreterEnvironment)->interpreterThreadID);
	}
/* End Interpreter Command */

	return kNOERROR;
}

Int4 VPLP_rename_2D_method( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_rename_2D_method( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	vpl_Integer		interpreterEnvironment = 0;
	Int1			*primName = "rename-method";
	vpl_Integer		theWriteDescriptor = 0;
	vpl_Integer		theReadDescriptor = 0;
	Int4 			result = 0;

/* Variables to handle inputs */
	
	vpl_StringPtr	oldName = NULL;
	vpl_StringPtr	newName = NULL;

/* Variables to handle internal processing */
	
/* Variables to handle output processing */
	
#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 5 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 0 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,0,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,1,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,2,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kString,3,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kString,4,primName, primitive, environment );
	if( result != kNOERROR ) return result;

#endif

	VPLPrimGetInputObjectInteger( &interpreterEnvironment, 0, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theWriteDescriptor, 1, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theReadDescriptor, 2, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectString( &oldName, 3, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectString( &newName, 4, primName, primitive, environment );
	if( result != kNOERROR ) return result;


/* Interpreter Command */
	if(theReadDescriptor)
	{
		OSErr	threadError = noErr;
		
		Int4 interpreterResult = 0;
		Nat4 command = kCommandMethodRename;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&command);
		
		vpx_ipc_write_string((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,oldName);

		vpx_ipc_write_string((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,newName);

		vpx_ipc_read_word((V_Environment) interpreterEnvironment,kInterpreter,theReadDescriptor,&interpreterResult);
		*trigger = interpreterResult;	
		if((V_Environment) interpreterEnvironment && ((V_Environment) interpreterEnvironment)->interpreterMode == kThread) threadError = YieldToThread(((V_Environment) interpreterEnvironment)->interpreterThreadID);
	}
	else
	{
		V_Environment	theEnvironment = (V_Environment) theWriteDescriptor;
		Nat4			interpreterResult = 0;
		V_Method		tempMethod = NULL;

				V_DictionaryNode	tempNode = NULL;

				tempNode = find_node(theEnvironment->universalsTable,newName);
	
				if(tempNode == NULL){
					tempNode = find_node(theEnvironment->universalsTable,oldName);
					if(tempNode != NULL){
						tempMethod = (V_Method) tempNode->object;
						X_free(tempMethod->objectName);
						newName = new_string(newName,theEnvironment);
						tempNode->name = newName;
						tempMethod->objectName = newName;
						sort_dictionary(theEnvironment->universalsTable);
					}
					interpreterResult = kSuccess;
				}else interpreterResult = kFailure;

		*trigger = interpreterResult;	
	}
/* End Interpreter Command */

	return kNOERROR;
}

Int4 VPLP_rename_2D_persistent( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_rename_2D_persistent( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	vpl_Integer		interpreterEnvironment = 0;
	Int1			*primName = "rename-persistent";
	vpl_Integer		theWriteDescriptor = 0;
	vpl_Integer		theReadDescriptor = 0;
	Int4 			result = 0;

/* Variables to handle inputs */
	
	vpl_StringPtr	oldName = NULL;
	vpl_StringPtr	newName = NULL;

/* Variables to handle internal processing */
	
/* Variables to handle output processing */
	
#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 5 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 0 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,0,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,1,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,2,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kString,3,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kString,4,primName, primitive, environment );
	if( result != kNOERROR ) return result;

#endif

	VPLPrimGetInputObjectInteger( &interpreterEnvironment, 0, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theWriteDescriptor, 1, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theReadDescriptor, 2, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectString( &oldName, 3, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectString( &newName, 4, primName, primitive, environment );
	if( result != kNOERROR ) return result;


/* Interpreter Command */
	if(theReadDescriptor)
	{
		OSErr	threadError = noErr;
		
		Int4 interpreterResult = 0;
		Nat4 command = kCommandPersistentRename;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&command);
		
		vpx_ipc_write_string((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,oldName);

		vpx_ipc_write_string((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,newName);

		vpx_ipc_read_word((V_Environment) interpreterEnvironment,kInterpreter,theReadDescriptor,&interpreterResult);
		*trigger = interpreterResult;	
		if((V_Environment) interpreterEnvironment && ((V_Environment) interpreterEnvironment)->interpreterMode == kThread) threadError = YieldToThread(((V_Environment) interpreterEnvironment)->interpreterThreadID);
	}
/* End Interpreter Command */

	return kNOERROR;
}

#pragma mark --------------- Reorder Object Primitives ---------------

Int4 VPLP_order_2D_attributes( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_order_2D_attributes( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	vpl_Integer		interpreterEnvironment = 0;
	Int1			*primName = "order-attributes";
	vpl_Integer		theWriteDescriptor = 0;
	vpl_Integer		theReadDescriptor = 0;
	Int4 			result = 0;

	V_Object		block = NULL;

/* Variables to handle inputs */
	
	vpl_Integer		tempClass = 0;
	V_List			tempList = NULL;

/* Variables to handle internal processing */

	Nat4			counter = 0;
	
/* Variables to handle output processing */

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 5 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 0 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,0,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,1,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,2,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,3,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kList,4,primName, primitive, environment );
	if( result != kNOERROR ) return result;

#endif

	VPLPrimGetInputObjectInteger( &interpreterEnvironment, 0, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theWriteDescriptor, 1, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theReadDescriptor, 2, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &tempClass, 3, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	block = VPLPrimGetInputObject( 4,primitive,environment);
	tempList = (V_List) block;

/* Interpreter Command */
	if(theReadDescriptor)
	{
		OSErr	threadError = noErr;
		Nat4	bufferSize = 0;
		Nat4	*theBlock = NULL;
		Nat4	tempValue = 0;
		
		Int4 interpreterResult = 0;
		Nat4 command = kCommandClassOrderAttributes;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&command);
		
		bufferSize = tempClass;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&bufferSize);

		if(tempList->listLength) bufferSize = tempList->listLength;
		else bufferSize = 0;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&bufferSize);

		if(bufferSize){
			theBlock = (Nat4 *) X_malloc(bufferSize*sizeof(Nat4));
			for( counter=0; counter<bufferSize; counter++){
				block = tempList->objectList[counter];
				if( block == NULL || block->type != kInteger) {
					record_error("order-attributes: List element type not integer!",primName,kWRONGINPUTTYPE,environment);
					tempValue = 0;
				} else tempValue = ((V_Integer) block)->value;
				*(theBlock+counter) = tempValue;
			}
			vpx_ipc_write_block((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,theBlock,bufferSize*sizeof(Nat4));
			X_free(theBlock);
		}

		vpx_ipc_read_word((V_Environment) interpreterEnvironment,kInterpreter,theReadDescriptor,&interpreterResult);
		*trigger = interpreterResult;	
		if((V_Environment) interpreterEnvironment && ((V_Environment) interpreterEnvironment)->interpreterMode == kThread) threadError = YieldToThread(((V_Environment) interpreterEnvironment)->interpreterThreadID);
	}
	else
	{
		V_Environment	theEnvironment = (V_Environment) theWriteDescriptor;
		Nat4			interpreterResult = 0;
		V_Class			theClass = (V_Class) tempClass;
		Nat4			tempValue = 0;

				V_Dictionary	oldDictionary = NULL;
				Int4			counter = 0;
	
				theClass->attributes = create_dictionary(0);

				if(tempList->listLength) {
					for(counter = 0; counter < tempList->listLength; counter++){
						block = tempList->objectList[counter];
						if( block == NULL || block->type != kInteger) {
							record_error("order-attributes: List element type not integer!",primName,kWRONGINPUTTYPE,environment);
							tempValue = 0;
						} else tempValue = ((V_Integer) block)->value;
						add_node(theClass->attributes,((V_Value)tempValue)->objectName,(V_Value)tempValue);
					}
				}
				
				reorder_instances(theEnvironment,oldDictionary,theClass);

				if(oldDictionary != NULL){
					for(counter = 0;counter<oldDictionary->numberOfNodes;counter++){
						oldDictionary->nodes[counter]->name = NULL;
						oldDictionary->nodes[counter]->object = NULL;
						X_free(oldDictionary->nodes[counter]);
					}
					if(oldDictionary->nodes != NULL) X_free(oldDictionary->nodes);
					oldDictionary->nodes = NULL;
					oldDictionary->numberOfNodes = 0;
					X_free(oldDictionary);
					oldDictionary = NULL;
				}

				interpreterResult = kSuccess;

		*trigger = interpreterResult;	
	}
/* End Interpreter Command */

	return kNOERROR;
}

Int4 VPLP_order_2D_operations( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_order_2D_operations( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	vpl_Integer		interpreterEnvironment = 0;
	Int1			*primName = "order-operations";
	vpl_Integer		theWriteDescriptor = 0;
	vpl_Integer		theReadDescriptor = 0;
	Int4 			result = 0;

	V_Object		block = NULL;

/* Variables to handle inputs */
	
	vpl_Integer		tempCase = 0;
	V_List			tempList = NULL;

/* Variables to handle internal processing */

	Nat4			counter = 0;
	
/* Variables to handle output processing */

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 5 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 0 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,0,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,1,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,2,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,3,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kList,4,primName, primitive, environment );
	if( result != kNOERROR ) return result;

#endif

	VPLPrimGetInputObjectInteger( &interpreterEnvironment, 0, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theWriteDescriptor, 1, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theReadDescriptor, 2, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &tempCase, 3, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	block = VPLPrimGetInputObject( 4,primitive,environment);
	tempList = (V_List) block;

/* Interpreter Command */
	if(theReadDescriptor)
	{
		OSErr	threadError = noErr;
		Nat4	bufferSize = 0;
		Nat4	*theBlock = NULL;
		Nat4	tempValue = 0;
		
		Int4 interpreterResult = 0;
		Nat4 command = kCommandCaseOrderOperations;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&command);
		
		bufferSize = tempCase;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&bufferSize);

		if(tempList->listLength) bufferSize = tempList->listLength;
		else bufferSize = 0;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&bufferSize);

		if(bufferSize){
			theBlock = (Nat4 *) X_malloc(bufferSize*sizeof(Nat4));
			for( counter=0; counter<bufferSize; counter++){
				block = tempList->objectList[counter];
				if( block == NULL || block->type != kInteger) {
					record_error("order-operations: List element type not integer!",primName,kWRONGINPUTTYPE,environment);
					tempValue = 0;
				} else tempValue = ((V_Integer) block)->value;
				*(theBlock+counter) = tempValue;
			}
			vpx_ipc_write_block((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,theBlock,bufferSize*sizeof(Nat4));
			X_free(theBlock);
		}

		vpx_ipc_read_word((V_Environment) interpreterEnvironment,kInterpreter,theReadDescriptor,&interpreterResult);
		*trigger = interpreterResult;	
		if((V_Environment) interpreterEnvironment && ((V_Environment) interpreterEnvironment)->interpreterMode == kThread) threadError = YieldToThread(((V_Environment) interpreterEnvironment)->interpreterThreadID);
	}
/* End Interpreter Command */

	return kNOERROR;
}

Int4 VPLP_order_2D_cases( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_order_2D_cases( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	vpl_Integer		interpreterEnvironment = 0;
	Int1			*primName = "order-cases";
	vpl_Integer		theWriteDescriptor = 0;
	vpl_Integer		theReadDescriptor = 0;
	Int4 			result = 0;

	V_Object		block = NULL;

/* Variables to handle inputs */
	
	vpl_Integer		tempMethod = 0;
	V_List			tempList = NULL;

/* Variables to handle internal processing */

	Nat4			counter = 0;
	
/* Variables to handle output processing */

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 5 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 0 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,0,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,1,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,2,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,3,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kList,4,primName, primitive, environment );
	if( result != kNOERROR ) return result;

#endif

	VPLPrimGetInputObjectInteger( &interpreterEnvironment, 0, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theWriteDescriptor, 1, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theReadDescriptor, 2, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &tempMethod, 3, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	block = VPLPrimGetInputObject( 4,primitive,environment);
	tempList = (V_List) block;

/* Interpreter Command */
	if(theReadDescriptor)
	{
		OSErr	threadError = noErr;
		Nat4	bufferSize = 0;
		Nat4	*theBlock = NULL;
		Nat4	tempValue = 0;
		
		Int4 interpreterResult = 0;
		Nat4 command = kCommandMethodOrderCases;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&command);
		
		bufferSize = tempMethod;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&bufferSize);

		if(tempList->listLength) bufferSize = tempList->listLength;
		else bufferSize = 0;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&bufferSize);

		if(bufferSize){
			theBlock = (Nat4 *) X_malloc(bufferSize*sizeof(Nat4));
			for( counter=0; counter<bufferSize; counter++){
				block = tempList->objectList[counter];
				if( block == NULL || block->type != kInteger) {
					record_error("order-cases: List element type not integer!",primName,kWRONGINPUTTYPE,environment);
					tempValue = 0;
				} else tempValue = ((V_Integer) block)->value;
				*(theBlock+counter) = tempValue;
			}
			vpx_ipc_write_block((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,theBlock,bufferSize*sizeof(Nat4));
			X_free(theBlock);
		}

		vpx_ipc_read_word((V_Environment) interpreterEnvironment,kInterpreter,theReadDescriptor,&interpreterResult);
		*trigger = interpreterResult;	
		if((V_Environment) interpreterEnvironment && ((V_Environment) interpreterEnvironment)->interpreterMode == kThread) threadError = YieldToThread(((V_Environment) interpreterEnvironment)->interpreterThreadID);
	}
/* End Interpreter Command */

	return kNOERROR;
}

Int4 VPLP_order_2D_inputs( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_order_2D_inputs( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	vpl_Integer		interpreterEnvironment = 0;
	Int1			*primName = "order-inputs";
	vpl_Integer		theWriteDescriptor = 0;
	vpl_Integer		theReadDescriptor = 0;
	Int4 			result = 0;

	V_Object		block = NULL;

/* Variables to handle inputs */
	
	vpl_Integer		tempOperation = 0;
	V_List			tempList = NULL;

/* Variables to handle internal processing */

	Nat4			counter = 0;
	
/* Variables to handle output processing */

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 5 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 0 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,0,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,1,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,2,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,3,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kList,4,primName, primitive, environment );
	if( result != kNOERROR ) return result;

#endif

	VPLPrimGetInputObjectInteger( &interpreterEnvironment, 0, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theWriteDescriptor, 1, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theReadDescriptor, 2, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &tempOperation, 3, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	block = VPLPrimGetInputObject(4,primitive,environment);
	tempList = (V_List) block;

/* Interpreter Command */
	if(theReadDescriptor)
	{
		OSErr	threadError = noErr;
		Nat4	bufferSize = 0;
		Nat4	*theBlock = NULL;
		Nat4	tempValue = 0;
		
		Int4 interpreterResult = 0;
		Nat4 command = kCommandOperationOrderInputs;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&command);
		
		bufferSize = tempOperation;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&bufferSize);

		if(tempList->listLength) bufferSize = tempList->listLength;
		else bufferSize = 0;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&bufferSize);

		if(bufferSize){
			theBlock = (Nat4 *) X_malloc(bufferSize*sizeof(Nat4));
			for( counter=0; counter<bufferSize; counter++){
				block = tempList->objectList[counter];
				if( block == NULL || block->type != kInteger) {
					record_error("order-inputs: List element type not integer!",primName,kWRONGINPUTTYPE,environment);
					tempValue = 0;
				} else tempValue = ((V_Integer) block)->value;
				*(theBlock+counter) = tempValue;
			}
			vpx_ipc_write_block((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,theBlock,bufferSize*sizeof(Nat4));
			X_free(theBlock);
		}

		vpx_ipc_read_word((V_Environment) interpreterEnvironment,kInterpreter,theReadDescriptor,&interpreterResult);
		*trigger = interpreterResult;	
		if((V_Environment) interpreterEnvironment && ((V_Environment) interpreterEnvironment)->interpreterMode == kThread) threadError = YieldToThread(((V_Environment) interpreterEnvironment)->interpreterThreadID);
	}
/* End Interpreter Command */

	return kNOERROR;
}

Int4 VPLP_order_2D_outputs( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_order_2D_outputs( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	vpl_Integer		interpreterEnvironment = 0;
	Int1			*primName = "order-outputs";
	vpl_Integer		theWriteDescriptor = 0;
	vpl_Integer		theReadDescriptor = 0;
	Int4 			result = 0;

	V_Object		block = NULL;

/* Variables to handle inputs */
	
	vpl_Integer		tempOperation = 0;
	V_List			tempList = NULL;

/* Variables to handle internal processing */

	Nat4			counter = 0;
	
/* Variables to handle output processing */

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 5 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 0 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,0,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,1,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,2,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,3,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kList,4,primName, primitive, environment );
	if( result != kNOERROR ) return result;

#endif

	VPLPrimGetInputObjectInteger( &interpreterEnvironment, 0, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theWriteDescriptor, 1, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theReadDescriptor, 2, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &tempOperation, 3, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	block = VPLPrimGetInputObject( 4,primitive,environment);
	tempList = (V_List) block;

/* Interpreter Command */
	if(theReadDescriptor)
	{
		OSErr	threadError = noErr;
		Nat4	bufferSize = 0;
		Nat4	*theBlock = NULL;
		Nat4	tempValue = 0;
		
		Int4 interpreterResult = 0;
		Nat4 command = kCommandOperationOrderOutputs;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&command);
		
		bufferSize = tempOperation;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&bufferSize);

		if(tempList->listLength) bufferSize = tempList->listLength;
		else bufferSize = 0;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&bufferSize);

		if(bufferSize){
			theBlock = (Nat4 *) X_malloc(bufferSize*sizeof(Nat4));
			for( counter=0; counter<bufferSize; counter++){
				block = tempList->objectList[counter];
				if( block == NULL || block->type != kInteger) {
					record_error("order-outputs: List element type not integer!",primName,kWRONGINPUTTYPE,environment);
					tempValue = 0;
				} else tempValue = ((V_Integer) block)->value;
				*(theBlock+counter) = tempValue;
			}
			vpx_ipc_write_block((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,theBlock,bufferSize*sizeof(Nat4));
			X_free(theBlock);
		}

		vpx_ipc_read_word((V_Environment) interpreterEnvironment,kInterpreter,theReadDescriptor,&interpreterResult);
		*trigger = interpreterResult;	
		if((V_Environment) interpreterEnvironment && ((V_Environment) interpreterEnvironment)->interpreterMode == kThread) threadError = YieldToThread(((V_Environment) interpreterEnvironment)->interpreterThreadID);
	}
/* End Interpreter Command */

	return kNOERROR;
}

#pragma mark --------------- Interpreter Value Primitives ---------------

Int4 VPLP_get_2D_value_2D_type( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_get_2D_value_2D_type( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	vpl_Integer		interpreterEnvironment = 0;
	V_Object		outputObject = NULL;
	Int1			*primName = "get-value-type";
	vpl_Integer		theWriteDescriptor = 0;
	vpl_Integer		theReadDescriptor = 0;
	Int4 			result = 0;

/* Variables to handle inputs */
	
	vpl_Integer			tempValue = 0;

/* Variables to handle internal processing */
	
/* Variables to handle output processing */
	

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 4 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,0,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,1,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,2,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,3,primName, primitive, environment );
	if( result != kNOERROR ) return result;

#endif

	VPLPrimGetInputObjectInteger( &interpreterEnvironment, 0, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theWriteDescriptor, 1, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theReadDescriptor, 2, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &tempValue, 3, primName, primitive, environment );
	if( result != kNOERROR ) return result;

/* Interpreter Command */
	if(theReadDescriptor)
	{
		OSErr	threadError = noErr;
		Nat4	bufferSize = 0;
		Int1	*stringBuffer;
		
		Int4 interpreterResult = 0;
		Nat4 command = kCommandValueGetType;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&command);
		
		bufferSize = tempValue;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&bufferSize);

		vpx_ipc_read_word((V_Environment) interpreterEnvironment,kInterpreter,theReadDescriptor,&interpreterResult);

		vpx_ipc_read_word((V_Environment) interpreterEnvironment,kInterpreter,theReadDescriptor,&bufferSize);
		switch(bufferSize){
			case kObject:
				stringBuffer = "null";
				break;
				
			case kUndefined:
				stringBuffer = "undefined";
				break;
				
			case kNone:
				stringBuffer = "none";
				break;
				
			case kBoolean:
				stringBuffer = "boolean";
				break;
				
			case kInteger:
				stringBuffer = "integer";
				break;
				
			case kReal:
				stringBuffer = "real";
				break;
				
			case kString:
				stringBuffer = "string";
				break;
				
			case kList:
				stringBuffer = "list";
				break;
				
			case kInstance:
				stringBuffer = "instance";
				break;
				
			case kExternalBlock:
				stringBuffer = "externalBlock";
				break;
				
			
		}

		outputObject = (V_Object) create_string(stringBuffer,environment);
		VPLPrimSetOutputObject(environment,primInArity,0,primitive,(V_Object) outputObject);
		*trigger = interpreterResult;	
		if((V_Environment) interpreterEnvironment && ((V_Environment) interpreterEnvironment)->interpreterMode == kThread) threadError = YieldToThread(((V_Environment) interpreterEnvironment)->interpreterThreadID);
	}
/* End Interpreter Command */

	return kNOERROR;
}

Int4 VPLP_get_2D_value_2D_mark( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_get_2D_value_2D_mark( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	vpl_Integer		interpreterEnvironment = 0;
	V_Object		outputObject = NULL;
	Int1			*primName = "get-value-mark";
	vpl_Integer		theWriteDescriptor = 0;
	vpl_Integer		theReadDescriptor = 0;
	Int4 			result = 0;

/* Variables to handle inputs */
	
	vpl_Integer			tempValue = 0;

/* Variables to handle internal processing */
	
/* Variables to handle output processing */
	

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 4 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,0,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,1,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,2,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,3,primName, primitive, environment );
	if( result != kNOERROR ) return result;

#endif

	VPLPrimGetInputObjectInteger( &interpreterEnvironment, 0, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theWriteDescriptor, 1, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theReadDescriptor, 2, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &tempValue, 3, primName, primitive, environment );
	if( result != kNOERROR ) return result;

/* Interpreter Command */
	if(theReadDescriptor)
	{
		OSErr	threadError = noErr;
		Nat4	bufferSize = 0;
		
		Int4 interpreterResult = 0;
		Nat4 command = kCommandValueGetMark;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&command);
		
		bufferSize = tempValue;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&bufferSize);

		vpx_ipc_read_word((V_Environment) interpreterEnvironment,kInterpreter,theReadDescriptor,&interpreterResult);

		vpx_ipc_read_word((V_Environment) interpreterEnvironment,kInterpreter,theReadDescriptor,&bufferSize);

		outputObject = (V_Object) bool_to_boolean(bufferSize,environment);
		VPLPrimSetOutputObject(environment,primInArity,0,primitive,(V_Object) outputObject);
		*trigger = interpreterResult;	
		if((V_Environment) interpreterEnvironment && ((V_Environment) interpreterEnvironment)->interpreterMode == kThread) threadError = YieldToThread(((V_Environment) interpreterEnvironment)->interpreterThreadID);
	}
/* End Interpreter Command */

	return kNOERROR;
}

Int4 VPLP_get_2D_value_2D_list( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_get_2D_value_2D_list( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	vpl_Integer		interpreterEnvironment = 0;
	V_Object		outputObject = NULL;
	Int1			*primName = "get-value-list";
	vpl_Integer		theWriteDescriptor = 0;
	vpl_Integer		theReadDescriptor = 0;
	Int4 			result = 0;

/* Variables to handle inputs */
	
	vpl_Integer			tempValue = 0;

/* Variables to handle internal processing */
	
/* Variables to handle output processing */
	

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 4 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,0,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,1,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,2,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,3,primName, primitive, environment );
	if( result != kNOERROR ) return result;

#endif

	VPLPrimGetInputObjectInteger( &interpreterEnvironment, 0, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theWriteDescriptor, 1, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theReadDescriptor, 2, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &tempValue, 3, primName, primitive, environment );
	if( result != kNOERROR ) return result;

/* Interpreter Command */
	if(theReadDescriptor)
	{
		OSErr	threadError = noErr;
		Nat4		bufferSize = 0;
		Nat4		*theBlock = NULL;
		V_List		theList = NULL;
		Nat4		counter = 0;
		
		Int4 interpreterResult = 0;
		Nat4 command = kCommandValueGetList;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&command);
		
		bufferSize = tempValue;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&bufferSize);

		vpx_ipc_read_word((V_Environment) interpreterEnvironment,kInterpreter,theReadDescriptor,&interpreterResult);

		vpx_ipc_read_word((V_Environment) interpreterEnvironment,kInterpreter,theReadDescriptor,&bufferSize);
		theList = create_list(bufferSize,environment);
		if(bufferSize) {
			theBlock = (Nat4 *) X_malloc(bufferSize*sizeof(Nat4));
			vpx_ipc_read_block((V_Environment) interpreterEnvironment,kInterpreter,theReadDescriptor,theBlock,bufferSize*sizeof(Nat4));
			for(counter=0;counter<bufferSize;counter++){
				outputObject = (V_Object) int_to_integer(*(theBlock+counter),environment);
				put_nth(environment,theList,counter+1,outputObject);
				decrement_count(environment,outputObject);
			}
			X_free(theBlock);
		}
		outputObject = (V_Object) theList;

		VPLPrimSetOutputObject(environment,primInArity,0,primitive,(V_Object) outputObject);
		*trigger = interpreterResult;	
		if((V_Environment) interpreterEnvironment && ((V_Environment) interpreterEnvironment)->interpreterMode == kThread) threadError = YieldToThread(((V_Environment) interpreterEnvironment)->interpreterThreadID);
	}
/* End Interpreter Command */

	return kNOERROR;
}

Int4 VPLP_get_2D_value_2D_string( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_get_2D_value_2D_string( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	vpl_Integer		interpreterEnvironment = 0;
	V_Object		outputObject = NULL;
	Int1			*primName = "get-value-string";
	vpl_Integer		theWriteDescriptor = 0;
	vpl_Integer		theReadDescriptor = 0;
	Int4 			result = 0;

/* Variables to handle inputs */
	
	vpl_Integer			tempValue = 0;

/* Variables to handle internal processing */
	
/* Variables to handle output processing */
	

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 4 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,0,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,1,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,2,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,3,primName, primitive, environment );
	if( result != kNOERROR ) return result;

#endif

	VPLPrimGetInputObjectInteger( &interpreterEnvironment, 0, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theWriteDescriptor, 1, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theReadDescriptor, 2, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &tempValue, 3, primName, primitive, environment );
	if( result != kNOERROR ) return result;

/* Interpreter Command */
	if(theReadDescriptor)
	{
		OSErr	threadError = noErr;
		Nat4	bufferSize = 0;
		Int1	*stringBuffer = NULL;
		
		Int4 interpreterResult = 0;
		Nat4 command = kCommandValueGetString;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&command);
		
		bufferSize = tempValue;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&bufferSize);

		vpx_ipc_read_word((V_Environment) interpreterEnvironment,kInterpreter,theReadDescriptor,&interpreterResult);

		vpx_ipc_read_string((V_Environment) interpreterEnvironment,kInterpreter,theReadDescriptor,&stringBuffer);

		if(stringBuffer) {
			outputObject = (V_Object) create_string(stringBuffer,environment);
			X_free(stringBuffer);
		} else outputObject = NULL;

		VPLPrimSetOutputObject(environment,primInArity,0,primitive,(V_Object) outputObject);
		*trigger = interpreterResult;	
		if((V_Environment) interpreterEnvironment && ((V_Environment) interpreterEnvironment)->interpreterMode == kThread) threadError = YieldToThread(((V_Environment) interpreterEnvironment)->interpreterThreadID);
	}
/* End Interpreter Command */

	return kNOERROR;
}

Int4 VPLP_get_2D_value_2D_class_2D_name( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_get_2D_value_2D_class_2D_name( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	vpl_Integer		interpreterEnvironment = 0;
	V_Object		outputObject = NULL;
	Int1			*primName = "get-value-class-name";
	vpl_Integer		theWriteDescriptor = 0;
	vpl_Integer		theReadDescriptor = 0;
	Int4 			result = 0;

/* Variables to handle inputs */
	
	vpl_Integer			tempValue = 0;

/* Variables to handle internal processing */
	
/* Variables to handle output processing */
	

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 4 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,0,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,1,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,2,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,3,primName, primitive, environment );
	if( result != kNOERROR ) return result;

#endif

	VPLPrimGetInputObjectInteger( &interpreterEnvironment, 0, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theWriteDescriptor, 1, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theReadDescriptor, 2, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &tempValue, 3, primName, primitive, environment );
	if( result != kNOERROR ) return result;

/* Interpreter Command */
	if(theReadDescriptor)
	{
		OSErr	threadError = noErr;
		Nat4	bufferSize = 0;
		Int1	*stringBuffer = NULL;
		
		Int4 interpreterResult = 0;
		Nat4 command = kCommandValueGetClassName;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&command);
		
		bufferSize = tempValue;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&bufferSize);

		vpx_ipc_read_word((V_Environment) interpreterEnvironment,kInterpreter,theReadDescriptor,&interpreterResult);

		vpx_ipc_read_string((V_Environment) interpreterEnvironment,kInterpreter,theReadDescriptor,&stringBuffer);
		if(stringBuffer){
			outputObject = (V_Object) create_string(stringBuffer,environment);
			X_free(stringBuffer);
		} else {
			outputObject = NULL;
		}

		VPLPrimSetOutputObject(environment,primInArity,0,primitive,(V_Object) outputObject);
		*trigger = interpreterResult;	
		if((V_Environment) interpreterEnvironment && ((V_Environment) interpreterEnvironment)->interpreterMode == kThread) threadError = YieldToThread(((V_Environment) interpreterEnvironment)->interpreterThreadID);
	}
/* End Interpreter Command */

	return kNOERROR;
}

Int4 VPLP_get_2D_value_2D_archive( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_get_2D_value_2D_archive( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	vpl_Integer		interpreterEnvironment = 0;
	V_Object		outputObject = NULL;
	Int1			*primName = "get-value-archive";
	vpl_Integer		theWriteDescriptor = 0;
	vpl_Integer		theReadDescriptor = 0;
	Int4 			result = 0;

/* Variables to handle inputs */
	
	vpl_Integer			tempValue = 0;

/* Variables to handle internal processing */
	
/* Variables to handle output processing */
	

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 4 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,0,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,1,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,2,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,3,primName, primitive, environment );
	if( result != kNOERROR ) return result;

#endif

	VPLPrimGetInputObjectInteger( &interpreterEnvironment, 0, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theWriteDescriptor, 1, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theReadDescriptor, 2, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &tempValue, 3, primName, primitive, environment );
	if( result != kNOERROR ) return result;

/* Interpreter Command */
	if(theReadDescriptor)
	{
		OSErr	threadError = noErr;
		Nat4	bufferSize = 0;
		Int4 interpreterResult = 0;
		V_Archive	tempArchive = NULL;
		
		Nat4 command = kCommandValueGetArchive;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&command);
		
		bufferSize = tempValue;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&bufferSize);

		vpx_ipc_read_word((V_Environment) interpreterEnvironment,kInterpreter,theReadDescriptor,&interpreterResult);

		if( (result = vpx_ipc_read_archive((V_Environment) interpreterEnvironment,kInterpreter,theReadDescriptor,&tempArchive)) == kNOERROR) {
			if(tempArchive) {
//				bufferSize = archive_size(environment,tempArchive);
				bufferSize = archive_size(NULL,tempArchive);
				outputObject = (V_Object) create_externalBlock("VPL_Archive",bufferSize,environment);
				((V_ExternalBlock)outputObject)->blockPtr = (void *) tempArchive;
			} else {
				outputObject = NULL;
			}
		} else {
			outputObject = NULL;
		}

		VPLPrimSetOutputObject(environment,primInArity,0,primitive, (V_Object) outputObject);
		*trigger = interpreterResult;	
		if((V_Environment) interpreterEnvironment && ((V_Environment) interpreterEnvironment)->interpreterMode == kThread) threadError = YieldToThread(((V_Environment) interpreterEnvironment)->interpreterThreadID);
	}
/* End Interpreter Command */

	return kNOERROR;
}

Int4 VPLP_get_2D_value_2D_decrement( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_get_2D_value_2D_decrement( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	vpl_Integer		interpreterEnvironment = 0;
	Int1			*primName = "get-value-decrement";
	vpl_Integer		theWriteDescriptor = 0;
	vpl_Integer		theReadDescriptor = 0;
	Int4 			result = 0;

/* Variables to handle inputs */
	
	vpl_Integer			tempValue = 0;

/* Variables to handle internal processing */
	
/* Variables to handle output processing */
	

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 4 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 0 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,0,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,1,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,2,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,3,primName, primitive, environment );
	if( result != kNOERROR ) return result;

#endif

	VPLPrimGetInputObjectInteger( &interpreterEnvironment, 0, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theWriteDescriptor, 1, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theReadDescriptor, 2, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &tempValue, 3, primName, primitive, environment );
	if( result != kNOERROR ) return result;

/* Interpreter Command */
	if(theReadDescriptor)
	{
		OSErr	threadError = noErr;
		Nat4	bufferSize = 0;
		Int4 interpreterResult = 0;
		Nat4 command = kCommandValueDecrement;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&command);
		
		bufferSize = tempValue;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&bufferSize);

		vpx_ipc_read_word((V_Environment) interpreterEnvironment,kInterpreter,theReadDescriptor,&interpreterResult);

		*trigger = interpreterResult;	
		if((V_Environment) interpreterEnvironment && ((V_Environment) interpreterEnvironment)->interpreterMode == kThread) threadError = YieldToThread(((V_Environment) interpreterEnvironment)->interpreterThreadID);
	}
/* End Interpreter Command */

	return kNOERROR;
}

Int4 VPLP_get_2D_value_2D_increment( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_get_2D_value_2D_increment( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	vpl_Integer		interpreterEnvironment = 0;
	Int1			*primName = "get-value-increment";
	vpl_Integer		theWriteDescriptor = 0;
	vpl_Integer		theReadDescriptor = 0;
	Int4 			result = 0;

/* Variables to handle inputs */
	
	vpl_Integer			tempValue = 0;

/* Variables to handle internal processing */
	
/* Variables to handle output processing */
	

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 4 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArity(environment,primName, primOutArity, 0 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,0,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,1,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,2,primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kInteger,3,primName, primitive, environment );
	if( result != kNOERROR ) return result;

#endif

	VPLPrimGetInputObjectInteger( &interpreterEnvironment, 0, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theWriteDescriptor, 1, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &theReadDescriptor, 2, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	VPLPrimGetInputObjectInteger( &tempValue, 3, primName, primitive, environment );
	if( result != kNOERROR ) return result;

/* Interpreter Command */
	if(theReadDescriptor)
	{
		OSErr	threadError = noErr;
		Nat4	bufferSize = 0;
		
		Int4 interpreterResult = 0;
		Nat4 command = kCommandValueIncrement;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&command);
		
		bufferSize = tempValue;
		vpx_ipc_write_word((V_Environment) interpreterEnvironment,kInterpreter,theWriteDescriptor,&bufferSize);

		vpx_ipc_read_word((V_Environment) interpreterEnvironment,kInterpreter,theReadDescriptor,&interpreterResult);

		*trigger = interpreterResult;	
		if((V_Environment) interpreterEnvironment && ((V_Environment) interpreterEnvironment)->interpreterMode == kThread) threadError = YieldToThread(((V_Environment) interpreterEnvironment)->interpreterThreadID);
	}
/* End Interpreter Command */

	return kNOERROR;
}

#pragma mark --------------- External Constants ---------------

VPL_ExtConstant _kContinueOnSuccess_C = {"kContinueOnSuccess",kContinueOnSuccess,NULL};
VPL_ExtConstant _kContinueOnFailure_C = {"kContinueOnFailure",kContinueOnFailure,NULL};
VPL_ExtConstant _kFinishOnSuccess_C = {"kFinishOnSuccess",kFinishOnSuccess,NULL};
VPL_ExtConstant _kFinishOnFailure_C = {"kFinishOnFailure",kFinishOnFailure,NULL};
VPL_ExtConstant _kTerminateOnSuccess_C = {"kTerminateOnSuccess",kTerminateOnSuccess,NULL};
VPL_ExtConstant _kTerminateOnFailure_C = {"kTerminateOnFailure",kTerminateOnFailure,NULL};
VPL_ExtConstant _kNextCaseOnSuccess_C = {"kNextCaseOnSuccess",kNextCaseOnSuccess,NULL};
VPL_ExtConstant _kNextCaseOnFailure_C = {"kNextCaseOnFailure",kNextCaseOnFailure,NULL};
VPL_ExtConstant _kFailOnSuccess_C = {"kFailOnSuccess",kFailOnSuccess,NULL};
VPL_ExtConstant _kFailOnFailure_C = {"kFailOnFailure",kFailOnFailure,NULL};

VPL_ExtConstant _kMethodTypeSimple_C = {"kMethodTypeSimple",kMethodTypeSimple,NULL};
VPL_ExtConstant _kMethodTypeMAIN_C = {"kMethodTypeMAIN",kMethodTypeMAIN,NULL};
VPL_ExtConstant _kMethodTypeTool_C = {"kMethodTypeTool",kMethodTypeTool,NULL};
VPL_ExtConstant _kMethodTypeEditor_C = {"kMethodTypeEditor",kMethodTypeEditor,NULL};
VPL_ExtConstant _kMethodTypeConstructor_C = {"kMethodTypeConstructor",kMethodTypeConstructor,NULL};
VPL_ExtConstant _kMethodTypeDestructor_C = {"kMethodTypeDestructor",kMethodTypeDestructor,NULL};
VPL_ExtConstant _kMethodTypeGet_C = {"kMethodTypeGet",kMethodTypeGet,NULL};
VPL_ExtConstant _kMethodTypeSet_C = {"kMethodTypeSet",kMethodTypeSet,NULL};

VPL_DictionaryNode VPX_Interpreter_Constants[] =	{
	{"kContinueOnSuccess", &_kContinueOnSuccess_C},
	{"kContinueOnFailure", &_kContinueOnFailure_C},
	{"kFinishOnSuccess", &_kFinishOnSuccess_C},
	{"kFinishOnFailure", &_kFinishOnFailure_C},
	{"kTerminateOnSuccess", &_kTerminateOnSuccess_C},
	{"kTerminateOnFailure", &_kTerminateOnFailure_C},
	{"kNextCaseOnSuccess", &_kNextCaseOnSuccess_C},
	{"kNextCaseOnFailure", &_kNextCaseOnFailure_C},
	{"kFailOnSuccess", &_kFailOnSuccess_C},
	{"kFailOnFailure", &_kFailOnFailure_C},

	{"kMethodTypeSimple", &_kMethodTypeSimple_C},
	{"kMethodTypeMAIN", &_kMethodTypeMAIN_C},
	{"kMethodTypeTool", &_kMethodTypeTool_C},
	{"kMethodTypeEditor", &_kMethodTypeEditor_C},
	{"kMethodTypeConstructor", &_kMethodTypeConstructor_C},
	{"kMethodTypeDestructor", &_kMethodTypeDestructor_C},
	{"kMethodTypeGet", &_kMethodTypeGet_C},
	{"kMethodTypeSet", &_kMethodTypeSet_C}
};

Nat4	VPX_Interpreter_Constants_Number = 16;


#pragma mark --------------- Load Routines ---------------

Nat4	loadConstants_VPX_PrimitivesInterpreter(V_Environment environment,char *bundleID);
Nat4	loadConstants_VPX_PrimitivesInterpreter(V_Environment environment,char *bundleID)
{
#pragma unused(bundleID)

		Nat4	result = 0;
        V_Dictionary	dictionary = NULL;
		
		dictionary = environment->externalConstantsTable;
		result = add_nodes(dictionary,VPX_Interpreter_Constants_Number,VPX_Interpreter_Constants);
		
        return kNOERROR;
}

Nat4	loadStructures_VPX_PrimitivesInterpreter(V_Environment environment,char *bundleID);
Nat4	loadStructures_VPX_PrimitivesInterpreter(V_Environment environment,char *bundleID)
{
#pragma unused(environment)
#pragma unused(bundleID)

        
        return kNOERROR;

}

Nat4	loadProcedures_VPX_PrimitivesInterpreter(V_Environment environment,char *bundleID);
Nat4	loadProcedures_VPX_PrimitivesInterpreter(V_Environment environment,char *bundleID)
{
#pragma unused(environment)
#pragma unused(bundleID)

        
        return kNOERROR;

}

Nat4	loadPrimitives_VPX_PrimitivesInterpreter(V_Environment environment,char *bundleID);
Nat4	loadPrimitives_VPX_PrimitivesInterpreter(V_Environment environment,char *bundleID)
{
        V_ExtPrimitive	result = NULL;
        V_Dictionary	dictionary = environment->externalPrimitivesTable;

        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"create-environment",dictionary,3,6,VPLP_create_2D_environment)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"post-load",dictionary,3,0,VPLP_post_2D_load)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"load-bundle",dictionary,5,0,VPLP_load_2D_bundle)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"bundle-primitives",dictionary,4,1,VPLP_bundle_2D_primitives)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"dispose-environment",dictionary,6,0,VPLP_dispose_2D_environment)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kNextCaseOnFailure,"get-post-load",dictionary,3,0,VPLP_get_2D_post_2D_load)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"set-post-load",dictionary,4,0,VPLP_set_2D_post_2D_load)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"unmark-heap",dictionary,1,0,VPLP_unmark_2D_heap)) == NULL) return kERROR;

        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"initialize-stack",dictionary,5,2,VPLP_initialize_2D_stack)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"advance-stack",dictionary,4,6,VPLP_advance_2D_stack)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"finalize-stack",dictionary,5,1,VPLP_finalize_2D_stack)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"previous-stack",dictionary,4,5,VPLP_previous_2D_stack)) == NULL) return kERROR;

        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"resources-changed",dictionary,3,0,VPLP_resources_2D_changed)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"abort-processing",dictionary,3,1,VPLP_abort_2D_processing)) == NULL) return kERROR;

        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"get-debug-window",dictionary,4,1,VPLP_get_2D_debug_2D_window)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"set-debug-window",dictionary,5,0,VPLP_set_2D_debug_2D_window)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"get-current-operation",dictionary,4,1,VPLP_get_2D_current_2D_operation)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"set-current-operation",dictionary,6,1,VPLP_set_2D_current_2D_operation)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"set-frame-breakpoint",dictionary,6,0,VPLP_set_2D_frame_2D_breakpoint)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"get-io-value",dictionary,6,1,VPLP_get_2D_io_2D_value)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"set-io-value",dictionary,4,0,VPLP_set_2D_io_2D_value)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"step-environment",dictionary,3,0,VPLP_step_2D_environment)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"set-step-out",dictionary,4,0,VPLP_set_2D_step_2D_out)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"get-watchpoint",dictionary,5,1,VPLP_get_2D_watchpoint)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"set-watchpoint",dictionary,6,0,VPLP_set_2D_watchpoint)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"get-watchpoints",dictionary,3,1,VPLP_get_2D_watchpoints)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"clear-watchpoints",dictionary,3,0,VPLP_clear_2D_watchpoints)) == NULL) return kERROR;

        if((result = extPrimitive_new(bundleID,kNextCaseOnFailure,"has-instances?",dictionary,4,0,VPLP_has_2D_instances_3F_)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"mark-instances",dictionary,4,0,VPLP_mark_2D_instances)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"get-primitive-arity",dictionary,4,3,VPLP_get_2D_primitive_2D_arity)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"get-procedure-arity",dictionary,4,2,VPLP_get_2D_procedure_2D_arity)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"get-method-arity",dictionary,4,3,VPLP_get_2D_method_2D_arity)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"get-errors",dictionary,3,1,VPLP_get_2D_errors)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"null-errors",dictionary,3,0,VPLP_null_2D_errors)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"get-procedure-info",dictionary,4,1,VPLP_get_2D_procedure_2D_info)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"get-constant-info",dictionary,4,1,VPLP_get_2D_constant_2D_info)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"get-structure-info",dictionary,4,1,VPLP_get_2D_structure_2D_info)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"get-primitive-info",dictionary,4,1,VPLP_get_2D_primitive_2D_info)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"find-operations",dictionary,5,1,VPLP_find_2D_operations)) == NULL) return kERROR;

        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"create-class",dictionary,4,1,VPLP_create_2D_class)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"set-class",dictionary,5,0,VPLP_set_2D_class)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"rename-class",dictionary,5,0,VPLP_rename_2D_class)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"remove-class",dictionary,4,0,VPLP_remove_2D_class)) == NULL) return kERROR;

        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"create-method",dictionary,5,1,VPLP_create_2D_method)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"set-method",dictionary,5,0,VPLP_set_2D_method)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"rename-method",dictionary,5,0,VPLP_rename_2D_method)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"remove-method",dictionary,4,0,VPLP_remove_2D_method)) == NULL) return kERROR;

        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"create-persistent",dictionary,5,1,VPLP_create_2D_persistent)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"rename-persistent",dictionary,5,0,VPLP_rename_2D_persistent)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"remove-persistent",dictionary,4,0,VPLP_remove_2D_persistent)) == NULL) return kERROR;

        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"insert-attribute",dictionary,7,1,VPLP_insert_2D_attribute)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"rename-attribute",dictionary,6,0,VPLP_rename_2D_attribute)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"dispose-attribute",dictionary,4,0,VPLP_dispose_2D_attribute)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"order-attributes",dictionary,5,0,VPLP_order_2D_attributes)) == NULL) return kERROR;

        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"insert-case",dictionary,6,1,VPLP_insert_2D_case)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"dispose-case",dictionary,4,0,VPLP_dispose_2D_case)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"order-cases",dictionary,5,0,VPLP_order_2D_cases)) == NULL) return kERROR;

        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"insert-operation",dictionary,6,1,VPLP_insert_2D_operation)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"set-operation",dictionary,13,0,VPLP_set_2D_operation)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"dispose-operation",dictionary,4,1,VPLP_dispose_2D_operation)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"order-operations",dictionary,5,0,VPLP_order_2D_operations)) == NULL) return kERROR;

        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"insert-terminal",dictionary,5,1,VPLP_insert_2D_terminal)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"set-terminal",dictionary,10,0,VPLP_set_2D_terminal)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"dispose-terminal",dictionary,4,0,VPLP_dispose_2D_terminal)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"order-inputs",dictionary,5,0,VPLP_order_2D_inputs)) == NULL) return kERROR;

        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"insert-root",dictionary,5,1,VPLP_insert_2D_root)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"set-root",dictionary,5,0,VPLP_set_2D_root)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"dispose-root",dictionary,4,0,VPLP_dispose_2D_root)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"order-outputs",dictionary,5,0,VPLP_order_2D_outputs)) == NULL) return kERROR;

        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"get-class-instance",dictionary,4,1,VPLP_get_2D_class_2D_instance)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"set-instance-attribute-value",dictionary,7,0,VPLP_set_2D_instance_2D_attribute_2D_value)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"get-element-value",dictionary,4,1,VPLP_get_2D_element_2D_value)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"get-element-integer",dictionary,4,1,VPLP_get_2D_element_2D_integer)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"set-element-value",dictionary,5,0,VPLP_set_2D_element_2D_value)) == NULL) return kERROR;

        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"string-to-value",dictionary,4,1,VPLP_string_2D_to_2D_value)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"list-to-value",dictionary,4,1,VPLP_list_2D_to_2D_value)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"value-to-value",dictionary,4,1,VPLP_value_2D_to_2D_value)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"archive-to-value",dictionary,4,1,VPLP_archive_2D_to_2D_value)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"unarchive-value",dictionary,4,0,VPLP_unarchive_2D_value)) == NULL) return kERROR;

        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"get-value-type",dictionary,4,1,VPLP_get_2D_value_2D_type)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"get-value-mark",dictionary,4,1,VPLP_get_2D_value_2D_mark)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"get-value-list",dictionary,4,1,VPLP_get_2D_value_2D_list)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"get-value-string",dictionary,4,1,VPLP_get_2D_value_2D_string)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"get-value-class-name",dictionary,4,1,VPLP_get_2D_value_2D_class_2D_name)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"get-value-archive",dictionary,4,1,VPLP_get_2D_value_2D_archive)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"get-value-decrement",dictionary,4,0,VPLP_get_2D_value_2D_decrement)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"get-value-increment",dictionary,4,0,VPLP_get_2D_value_2D_increment)) == NULL) return kERROR;		

        return kNOERROR;

}

Nat4	load_VPX_PrimitivesInterpreter(V_Environment environment,char *bundleID);
Nat4	load_VPX_PrimitivesInterpreter(V_Environment environment,char *bundleID)
{
		Nat4	result = 0;
		
		result = loadConstants_VPX_PrimitivesInterpreter(environment,bundleID);
		result = loadStructures_VPX_PrimitivesInterpreter(environment,bundleID);
		result = loadProcedures_VPX_PrimitivesInterpreter(environment,bundleID);
		result = loadPrimitives_VPX_PrimitivesInterpreter(environment,bundleID);
		
		return result;
}


