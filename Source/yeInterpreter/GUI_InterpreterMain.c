/*
 *  InterpreterMain.c
 *  MartenInterpreterApp
 *
 *  Created by Jack Small on 10/23/09.
 *  Copyright 2009 Jack Small. All rights reserved.
 *
 */

#include "Interpreter.h"

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
		
		EnableCommandBadge( TRUE );
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
		if( !isGood ) goto REMOTEHOST;
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
	
REMOTEHOST:
	{
		EventAvail( everyEvent, &dockEvent );				// This will stop the icon bouncing in the dock
		EnableCommandBadge( TRUE );
		DrawCommandBadge( kvpl_CommandListening, kCommandNoop, environment );
		
		VPLLogEngineError( "Launched For Marten", TRUE, environment );
		
		result = VPLOpenHostSocket( 2222, (int*)&writeFileDescriptor, (int*)&readFileDescriptor, environment );
		if( result != 0 ) return result;
		
		environment->callbackHandler = InterpreterCallbackHandler;
		environment->stackSpawner = command_spawn_stack;
		environment->compiled = kFALSE;
		environment->logging = kTRUE;
		environment->interpreterMode = kProcess;
		environment->pipeWriteFileDescriptor = writeFileDescriptor;
		environment->pipeReadFileDescriptor = readFileDescriptor;
		
		result = vpx_ipc_read_byteorder(environment,kEditor,writeFileDescriptor);	// read stream byte order
		if(result != kNOERROR) return result;
		
		
		command_loop(environment,NULL);
	}
	
	return noErr;
}

