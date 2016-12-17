/* A VPL Project File */
/*

Regression Project.c
Copyright: 2004 Scott B. Anderson

*/

#define __VPL_INTERPRETER_VERSION_STRING__				"1.5"
#define __VPL_INTERPRETER_BUILD_STRING__				"1500"

#define __VPL_LOAD_WITH_SOCKET__	1

#if __VPL_LOAD_WITH_SOCKET__
#include "InterpreterSocket.h"
#endif	//	__VPL_LOAD_WITH_SOCKET__

#include "Interpreter.h"

void print_usage( char* cli_name );
void run_banger( char* cli_name, int argCount, char* args[] );

Bool	platformIDELaunch( Bool isIDELaunch, V_Environment environment );
int	interpreterMain( Bool isIDELaunch, char* ideType, Bool isCLILaunch, Bool doEnvReport, char* iCLIPath, int argc, char *argv[] );

void print_usage( char* cli_name )
{
	char	versLine[180];
	
	sprintf( versLine, "Version: %s   Build: %s\n", __VPL_INTERPRETER_VERSION_STRING__, __VPL_INTERPRETER_BUILD_STRING__ );
	
	printf( "\n" );
	printf( "**** Marten Command Line Interpreter\n" );
	printf( "**** %s", versLine );
	printf( "**** (C) 2008 - 2010 Andescotia, LLC.\n" );
	printf( "\n" );
	printf( "Usage: %s [--help] [--x] <path-to-vpz> [parameters to pass]\n", cli_name );
	printf( "\n" );
	printf( "This utility runs a Marten Interpreter script, which is\n" );
	printf( "typically designated with a .vpz file extension.\n" );
	printf( "\n" );
	printf( "You can also create executable versions of a script by passing\n" );
	printf( "the --x token.  \n" );

	return;
}

void run_banger( char* cli_name, int argCount, char* args[] )
{
	const char*					bangExecutableSuffix = "-al";
	char*						bangerPath;
	int							index;
	
	bangerPath = (char*) malloc( 4192 );
	if( bangerPath == NULL ) return;

	sprintf( bangerPath, "%s%s", cli_name, bangExecutableSuffix );
	
	for( index=0; index<argCount; index++ )
		sprintf( bangerPath, "%s '%s'",bangerPath, args[index] );
	
//	printf( "Running tool:\n\t%s\n", bangerPath );
	system( bangerPath );
	
	return;
}

int main(int argc, char *argv[])
{
//	Int4						result = 0;
	Bool						isCLILaunch = FALSE;
	Bool						isIDELaunch = FALSE;
	Bool						logEnvReport = kFALSE;

	Int1						paramSkipCount = 1;

	char*						iCLIPath = NULL;
	char*						ideType = NULL;
	char*						stdioPath;
	
	const char*					helpToken = "--help";
	const char*					bangToken = "--x";
	const char*					ideToken = "--ide";
	const char*					stdioToken = "--stdio";	
	const char*					logToken = "--log";
	
	if( argc == 1 ) {
		print_usage( argv[0] );
		return kNOERROR;
	}
	
	if( argc >= 2 ) {
		if( (strcmp(argv[1], helpToken)) == 0 ) {
			print_usage( argv[0] );
			return kNOERROR;
		}
		else if( (strcmp(argv[1], bangToken)) == 0 ) {
			run_banger( argv[0],argc-2, &argv[2] );
			return kNOERROR;
		}
		if( (strcmp(argv[paramSkipCount], logToken)) == 0 )
		{
			logEnvReport = kTRUE;
			paramSkipCount += 1;
		}
		if( (strcmp(argv[paramSkipCount], stdioToken)) == 0 )
		{
			paramSkipCount += 1;
			stdioPath = argv[paramSkipCount];
			freopen( stdioPath, "w", stdout );
			if( freopen( stdioPath, "a+", stdin ) == NULL ) fprintf( stderr, "Couldn't reopen stdin: \n", stdioPath );
		} 
		if( (strcmp(argv[paramSkipCount], ideToken)) == 0 )
		{
			isIDELaunch = kTRUE;
			paramSkipCount += 1;
			if( argc > 1 + paramSkipCount) {
				ideType = argv[paramSkipCount];
				paramSkipCount += 1;
			} 
		} else
		{
			isCLILaunch = kTRUE;
			if( argc >= paramSkipCount) {
				iCLIPath = argv[paramSkipCount];
				paramSkipCount += 1;
			}
		}
	} else {
		print_usage( argv[0] );
		return kNOERROR;
	}
	
	return interpreterMain( isIDELaunch, ideType, isCLILaunch, logEnvReport, iCLIPath, argc - paramSkipCount, &argv[paramSkipCount] );
}
	
Bool	platformIDELaunch( Bool isIDELaunch, V_Environment environment )
{
	ProcessSerialNumber			thisProcess;
	ProcessSerialNumber			parentProcess;
	ProcessInfoRec				theProcessInfoRecord;
	Bool						didMartenLaunch = isIDELaunch;
	
	if( !didMartenLaunch ) {
		GetCurrentProcess(&thisProcess);
		theProcessInfoRecord.processInfoLength = sizeof(ProcessInfoRec);
		theProcessInfoRecord.processName = NULL;
		theProcessInfoRecord.processAppSpec = NULL;
		
		GetProcessInformation(&thisProcess,&theProcessInfoRecord);
		
		parentProcess = theProcessInfoRecord.processLauncher;
		
		GetProcessInformation(&parentProcess,&theProcessInfoRecord);
		if(theProcessInfoRecord.processSignature == 'mVPL' || theProcessInfoRecord.processSignature == 'iVPL') {
			didMartenLaunch = kTRUE;
			VPLLogEngineError( "Launched by Marten", TRUE, environment );
		}
	}
	
	return didMartenLaunch;
}


int	interpreterMain( Bool isIDELaunch, char* ideType, Bool isCLILaunch, Bool doEnvReport, char* iCLIPath, int argc, char *argv[] )
{
	Int4						result = 0;
	Int4						readFileDescriptor = 0;
	Int4						writeFileDescriptor = 0;
	EventRecord					dockEvent;

#if !__VPL_LOAD_WITH_SOCKET__
	Int1						*readFifoName = "/tmp/fifoMacVPLWrite";
	Int1						*writeFifoName = "/tmp/fifoMacVPLRead";
#endif
	
	Int1						shebangOffset = 0;
	const char*					shebangToken = "#!";
	int							shebangNewLine = 10;
	
	V_Environment				environment = createEnvironment();
	
	if( environment == NULL ) printf("BOGUS ENVIRONS!!\n"); 
	
	isIDELaunch = platformIDELaunch( isIDELaunch, environment );
	
	if( isIDELaunch ) {
		environment->stackSpawner = command_spawn_stack;
		environment->compiled = kFALSE;
		environment->logging = kTRUE;
		environment->interpreterMode = kProcess;
		environment->callbackHandler = InterpreterCallbackHandler;

#if !__VPL_LOAD_WITH_SOCKET__
		writeFileDescriptor = open(readFifoName,O_RDONLY);
		readFileDescriptor = open(writeFifoName,O_WRONLY);
#else	
		result = VPLOpenHostSocket( kVPXIDEServerPort, (int*)&writeFileDescriptor, (int*)&readFileDescriptor, environment );
		if( result != 0 ) return result;
#endif	//	__VPL_LOAD_WITH_SOCKET__
		
		environment->pipeWriteFileDescriptor = writeFileDescriptor;
		environment->pipeReadFileDescriptor = readFileDescriptor;
		
		EventAvail( everyEvent, &dockEvent );				// This will stop the icon bouncing in the dock

		result = vpx_ipc_read_byteorder(environment,kEditor,writeFileDescriptor);	// read stream byte order
		if(result != kNOERROR) return result;

		command_loop(environment,NULL);
	} else {
		FSRef		inRef;
		CFBundleRef	mainBundle;
		CFURLRef	theURLRef, theBaseURLRef;
		Boolean		isGood = kFALSE;
		
		OSStatus		errStatus = 0;

		short			theRefNum;
    	Int4			theNumberOfBytes = 0;
    	Int1			*theObjectBuffer = NULL;
    	Int1			*theRunBuffer = NULL;
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

		if( isCLILaunch == TRUE ) {
			errStatus = FSPathMakeRef( (const UInt8*) iCLIPath, &inRef, NULL );
		} else {
			mainBundle = CFBundleGetMainBundle();
			theURLRef = CFBundleCopyResourceURL(mainBundle,CFSTR("Application.vpz"),NULL,NULL);
			isGood = CFURLGetFSRef(theURLRef,&inRef);
		}
		FSGetCatalogInfo(&inRef,kFSCatInfoNone,NULL,NULL,&theSpec,NULL);
		
		result = FSpOpenDF(&theSpec, fsRdPerm, &theRefNum);

		if(result == 0){
			result = GetEOF(theRefNum,&theNumberOfBytes);
			if(result == 0){
				theObjectBuffer = (Int1 *) X_malloc(theNumberOfBytes);
				if(theObjectBuffer != NULL){
					result = FSRead(theRefNum,&theNumberOfBytes,theObjectBuffer);
					
					// if( isCLILaunch == TRUE ) theObjectBuffer += 19;		
							
					if( (strncmp( (const char*)theObjectBuffer, shebangToken, strlen(shebangToken)) == 0 )) {
						newString = memchr( theObjectBuffer, shebangNewLine, 256 );
						if( newString != NULL ) shebangOffset = (newString - theObjectBuffer)+1;
					}
					
					theRunBuffer = theObjectBuffer + shebangOffset;	
					
					if(result == 0) {
						object = unarchive_object(environment,(V_Archive)theRunBuffer);
						X_free(theObjectBuffer);
					}else{
						X_free(theObjectBuffer);
						result = 1;
					}
				}else result = 1;
			}else result = 1;
		
			result = FSClose(theRefNum);
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


	if( isCLILaunch == TRUE ) {
		// bundleStringRef = CFStringCreateWithCString( NULL, "Library/Frameworks", kCFStringEncodingUTF8 );
		theBaseURLRef = CFURLCreateWithString( NULL, CFSTR("/Library/Frameworks"), NULL );
	}
		

	bundlesList = item_data_get_list_datum(environment,(V_Instance) object,0);
	for(bundlesCounter=0;bundlesCounter<bundlesList->listLength;bundlesCounter++){
		bundleItem = (V_Instance) bundlesList->objectList[bundlesCounter];
		bundleHelper = item_data_get_helper(environment,bundleItem);
		bundleName = ((V_String) bundleHelper->objectList[1])->string;
		newString = new_cat_string("load_",bundleName,environment);
//		bundleName = new_cat_string(bundleName,".bundle",environment);	// no longer necessary
		bundleStringRef = CFStringCreateWithCString(NULL,bundleName,kCFStringEncodingUTF8);
//		CFShow(bundleStringRef);
		if( isCLILaunch == TRUE ) 
			theURLRef = CFURLCreateCopyAppendingPathComponent( NULL, theBaseURLRef, bundleStringRef, TRUE );
		else
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
		free(filePath);
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
		result = VPLEnvironmentMain(environment,vpl_MAIN,argc,(char**)&argv);
	}
	
	return result;

}
