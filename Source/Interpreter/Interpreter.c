/* A VPL Project File */
/*

Interpreter.c
Copyright: 2004 Scott B. Anderson

*/

#include "InterpreterPlatform.h"
#include "InterpreterRoutines.h"
#include "InterpreterOpen.c"

int main(int argc, char *argv[])
{
	Bool						isIDELaunch = FALSE;
	
	const char*					ideToken = "--ide";
	char*						ideType = NULL;
	
	Bool						isCLILaunch = FALSE;
	char*						iCLIPath = NULL;
	Int1						paramSkipCount = 0;
	
	//	On Mac OS X GUI Apps have -psn=xxxxx as argv[1]
	if( argc >= 3 ) {		
		if( (strcmp(argv[2], ideToken)) == 0 )
		{
			isIDELaunch = TRUE;
			ideType = argv[3];
		}
	}
	
	return interpreterMain( isIDELaunch, ideType, isCLILaunch, iCLIPath, argc-paramSkipCount, &argv[paramSkipCount] );	
}

/*
int main(int argc, char *argv[])
{
	Int4						result = 0;
	Int1						*readFifoName = "/tmp/fifoMacVPLWrite";
	Int1						*writeFifoName = "/tmp/fifoMacVPLRead";
	Int4						readFileDescriptor = 0;
	Int4						writeFileDescriptor = 0;
	ProcessSerialNumber			thisProcess;
	ProcessSerialNumber			parentProcess;
	ProcessInfoRec				theProcessInfoRecord;
	EventRecord					dockEvent;
	
	V_Environment				environment = createEnvironment();
	
	if( environment == NULL ) printf("BOGUS ENVIRONS!!\n"); 
	
	GetCurrentProcess(&thisProcess);
	theProcessInfoRecord.processInfoLength = sizeof(ProcessInfoRec);
	theProcessInfoRecord.processName = NULL;
	theProcessInfoRecord.processAppSpec = NULL;
	
	GetProcessInformation(&thisProcess,&theProcessInfoRecord);
	
	parentProcess = theProcessInfoRecord.processLauncher;
	
	GetProcessInformation(&parentProcess,&theProcessInfoRecord);
	if(theProcessInfoRecord.processSignature == 'mVPL' || theProcessInfoRecord.processSignature == 'iVPL') {
		VPLLogEngineError( "Launched by Marten", TRUE, environment );
		
		writeFileDescriptor = open(readFifoName,O_RDONLY);
		readFileDescriptor = open(writeFifoName,O_WRONLY);
	
		environment->callbackHandler = InterpreterCallbackHandler;
		environment->stackSpawner = command_spawn_stack;
		environment->compiled = kFALSE;
		environment->logging = kTRUE;
		environment->interpreterMode = kProcess;
		environment->pipeWriteFileDescriptor = writeFileDescriptor;
		environment->pipeReadFileDescriptor = readFileDescriptor;
		
		EventAvail( everyEvent, &dockEvent );				// This will stop the icon bouncing in the dock

		result = vpx_ipc_read_byteorder(environment,kEditor,writeFileDescriptor);	// read stream byte order
		if(result != kNOERROR) return result;

		platformEnableCommandBadge( kTRUE, environment );
		command_loop(environment,NULL);

	} else {
		FSRef		inRef;
		CFBundleRef	mainBundle;
		CFURLRef	theURLRef;
		Boolean		isGood = kFALSE;

		short			theRefNum;
    	Int4			theNumberOfBytes = 0;
    	Int1			*theObjectBuffer = NULL;
		V_Object 		object = NULL;
    	FSSpec			theSpec;
 
    	V_List			bundlesList = NULL;
    	V_Instance		bundleItem = NULL;
    	V_Instance		bundleHelper = NULL;
    	Nat4			bundlesCounter = 0;
    	CFStringRef		bundleStringRef;
    	Int1			*bundleName = NULL;
    	Int1			*newString = NULL;
		Int1			*filePath = NULL;

		// printf("Signature of launcher is %u\n",(unsigned int) theProcessInfoRecord.processSignature);

		mainBundle = CFBundleGetMainBundle();
		theURLRef = CFBundleCopyResourceURL(mainBundle,CFSTR("Application.vpz"),NULL,NULL);
		isGood = CFURLGetFSRef(theURLRef,&inRef);
		FSGetCatalogInfo(&inRef,kFSCatInfoNone,NULL,NULL,&theSpec,NULL);
		
		result = FSpOpenDF(&theSpec, fsRdPerm, &theRefNum);

		if(result == 0){
			result = GetEOF(theRefNum,&theNumberOfBytes);
			if(result == 0){
				theObjectBuffer = (Int1 *) X_malloc(theNumberOfBytes);
				if(theObjectBuffer != NULL){
					result = FSRead(theRefNum,&theNumberOfBytes,theObjectBuffer);
					if(result == 0) {
						object = unarchive_object(environment,(V_Archive)theObjectBuffer);
						X_free(theObjectBuffer);
					}else{
						X_free(theObjectBuffer);
						result = 1;
					}
				}else result = 1;
			}else result = 1;
		
			result = FSClose(theRefNum);
		}
		if(result == 0) result = project_item_data_open(environment,(V_Instance) object);

	bundlesList = item_data_get_list_datum(environment,(V_Instance) object,0);
	for(bundlesCounter=0;bundlesCounter<bundlesList->listLength;bundlesCounter++){
		bundleItem = (V_Instance) bundlesList->objectList[bundlesCounter];
		bundleHelper = item_data_get_helper(environment,bundleItem);
		bundleName = ((V_String) bundleHelper->objectList[1])->string;
		newString = new_cat_string("load_",bundleName,environment);
//		bundleName = new_cat_string(bundleName,".bundle",environment);	// no longer necessary
		bundleStringRef = CFStringCreateWithCString(NULL,bundleName,kCFStringEncodingUTF8);
//		CFShow(bundleStringRef);
		
		theURLRef = CFBundleCopyResourceURL(mainBundle,bundleStringRef,NULL,NULL);
		CFRelease(bundleStringRef);
//		isGood = CFURLGetFSRef(theURLRef,&inRef);
		filePath = (Int1 *) X_malloc( 4096 );
		isGood = CFURLGetFileSystemRepresentation(theURLRef, TRUE, (UInt8*)filePath, 4096);
		if(isGood) {
//			FSGetCatalogInfo(&inRef,kFSCatInfoNone,NULL,NULL,&theSpec,NULL);
//			result = environment_load_bundles(environment,&theSpec,newString);
			result = environment_load_bundles_path(environment,filePath,newString);
		}
		CFRelease(theURLRef);
	}

		result = post_load(environment);

		environment->callbackHandler = MacVPLCallbackHandler;
		environment->stackSpawner = X_spawn_stack;
		environment->compiled = kTRUE;
		environment->logging = kFALSE;
		environment->interpreterMode = kProcess;

		EventAvail( everyEvent, &dockEvent );				// This will stop the icon bouncing in the dock
		result = VPLEnvironmentInit(environment,vpl_INIT);
		result = VPLEnvironmentMain(environment,vpl_MAIN,argc,argv);
	}
	
	return noErr;

}
*/

/*
int main(int argc, char *argv[])
{
	Int4						result = 0;
	Int1						*readFifoName = "/tmp/fifoMacVPLWrite";
	Int1						*writeFifoName = "/tmp/fifoMacVPLRead";
	Int4						readFileDescriptor = 0;
	Int4						writeFileDescriptor = 0;
	
	Bool						isIDELaunch = FALSE;
	
	Int1						shebangOffset = 0;
	const char*					shebangToken = "#!";
	int							shebangNewLine = 10;
	
	const char*					ideToken = "--ide";
	char*						ideType = NULL;

	Bool						isCLILaunch = FALSE;
	char*						iCLIPath = NULL;
	Int1						paramSkipCount = 0;
	
	V_Environment				environment = createEnvironment();
	
	if( environment == NULL ) printf("BOGUS ENVIRONS!!\n"); 
	
	if( argc >= 3 ) {
		if( (strcmp(argv[2], ideToken)) == 0 )
		{
			isIDELaunch = TRUE;
			ideType = argv[3];
		}
	}
	
	isIDELaunch = platformIsIDELaunch( isIDELaunch, environment );
	
	if( isIDELaunch ) {
		VPLLogEngineError( "Launched by Marten", TRUE, environment );
		
		writeFileDescriptor = open(readFifoName,O_RDONLY);
		readFileDescriptor = open(writeFifoName,O_WRONLY);
		
		environment->callbackHandler = InterpreterCallbackHandler;
		environment->stackSpawner = command_spawn_stack;
		environment->compiled = kFALSE;
		environment->logging = kTRUE;
		environment->interpreterMode = kProcess;
		environment->pipeWriteFileDescriptor = writeFileDescriptor;
		environment->pipeReadFileDescriptor = readFileDescriptor;
		
		platformLaunchComplete( environment );
		
		result = vpx_ipc_read_byteorder(environment,kEditor,writeFileDescriptor);	// read stream byte order
		if(result != kNOERROR) return result;
		
		command_loop(environment,NULL);
	} else {
		Boolean		isGood = kFALSE;

		Int4			runBufferFile = 0;
    	Int4			theNumberOfBytes = 0;
     	Int4			actualNumberOfBytes = 0;
		Int1			*theObjectBuffer = NULL;
    	Int1			*theRunBuffer = NULL;
		V_Object 		object = NULL;
		
    	V_List			bundlesList = NULL;
    	V_Instance		bundleItem = NULL;
    	V_Instance		bundleHelper = NULL;
    	Nat4			bundlesCounter = 0;
    	Int1			*bundleName = NULL;
    	Int1			*newString = NULL;
		Int1			*filePath = NULL;
		
		if( !isCLILaunch )
			iCLIPath = platformPathToRunObject( environment );
		
		if( iCLIPath )
			runBufferFile = open( iCLIPath, O_RDONLY );
		
		if( runBufferFile ){
			theNumberOfBytes = lseek( runBufferFile, 0, SEEK_END );
			lseek( runBufferFile, 0, SEEK_SET );
			if(theNumberOfBytes > 0){
				theObjectBuffer = (Int1 *) X_malloc(theNumberOfBytes);
				if(theObjectBuffer != NULL){
					actualNumberOfBytes = read( runBufferFile, theObjectBuffer, theNumberOfBytes );
					if( actualNumberOfBytes == theNumberOfBytes )
					{
						if( (strncmp( (const char*)theObjectBuffer, shebangToken, strlen(shebangToken)) == 0 )) {
							newString = memchr( theObjectBuffer, shebangNewLine, 256 );
							if( newString != NULL ) shebangOffset = (newString - theObjectBuffer)+1;
						}
						
						theRunBuffer = theObjectBuffer + shebangOffset;	
						
						object = unarchive_object(environment,(V_Archive)theRunBuffer);
						X_free(theObjectBuffer);					
					}else{
						X_free(theObjectBuffer);
						result = 1;
					}
				}else result = 1;
			}else result = 1;
			
//			printf("File Path: %s\nRun Object Actual: %ld, Requested: %ld\nError: %ld\n", iCLIPath, actualNumberOfBytes, theNumberOfBytes, errno );
			
			close( runBufferFile );
			X_free( iCLIPath );
		}
		
		
		if( object == NULL ) {
			printf("Invalid Run Object!\n");
			return 0;
		}
		
		if(result == 0) result = project_item_data_open(environment,(V_Instance) object);
		else {
			printf("Error reading object data: %d\n", result);
			return 0;
		}
		
		bundlesList = item_data_get_list_datum(environment,(V_Instance) object,0);
		for(bundlesCounter=0;bundlesCounter<bundlesList->listLength;bundlesCounter++)
		{
			bundleItem = (V_Instance) bundlesList->objectList[bundlesCounter];
			bundleHelper = item_data_get_helper(environment,bundleItem);
			bundleName = ((V_String) bundleHelper->objectList[1])->string;

			isGood = platformPathToLibrary( isCLILaunch, bundleName, &newString, &filePath, environment );
			
			if( isGood ) 
				result = environment_load_bundles_path( environment, filePath, newString );
			
			if( filePath )	X_free( filePath );
			if( newString )	X_free( newString );
		}
		
		result = post_load( environment );
		
#if __VPL_DISATCH_USES_FFI__
		environment->callbackHandler = ffiVPLCallbackHandler;
#else
		environment->callbackHandler = MacVPLCallbackHandler;
#endif // __VPL_DISATCH_USES_FFI__
		
		environment->stackSpawner = X_spawn_stack;
		environment->compiled = kTRUE;
		environment->logging = kFALSE;
		environment->interpreterMode = kProcess;
		
		platformLaunchComplete( environment );
		
		result = VPLEnvironmentInit(environment,vpl_INIT);
		result = VPLEnvironmentMain(environment,vpl_MAIN,argc-paramSkipCount,(char**)&argv[paramSkipCount]);
	}
	
	return result;
	
}

*/


