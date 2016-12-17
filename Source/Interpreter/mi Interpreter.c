/* A VPL Project File */
/*

Regression Project.c
Copyright: 2004 Scott B. Anderson

*/

#include "InterpreterRoutines.h"

Int1	*vpl_MAIN = NULL;
Int1	*vpl_INIT = NULL;


Int4	list_data_close(V_Environment environment,V_Instance itemData);
Int4	list_data_close(V_Environment environment,V_Instance itemData)
{
#pragma unused(environment)
#pragma unused(itemData)
	return kNOERROR;
}

Int4	item_data_close(V_Environment environment,V_Instance itemData);
Int4	item_data_close(V_Environment environment,V_Instance itemData)
{
#pragma unused(environment)
#pragma unused(itemData)
	return kNOERROR;
}

Int4	helper_data_close(V_Environment environment,V_Instance itemData);
Int4	helper_data_close(V_Environment environment,V_Instance itemData)
{
#pragma unused(environment)
#pragma unused(itemData)
	return kNOERROR;
}

V_List	item_data_get_list_datum(V_Environment environment,V_Instance itemData,Nat4 offset);
V_List	item_data_get_list_datum(V_Environment environment,V_Instance itemData,Nat4 offset)
{
#pragma unused(environment)
	V_List		listDataList = (V_List) itemData->objectList[2];
	V_Instance	listDatum = (V_Instance) listDataList->objectList[offset];
	V_List		listDatumList = (V_List) listDatum->objectList[2];

	return listDatumList;
}

V_Instance	item_data_get_helper(V_Environment environment,V_Instance itemData);
V_Instance	item_data_get_helper(V_Environment environment,V_Instance itemData)
{
#pragma unused(environment)
	V_Instance	helper = (V_Instance) itemData->objectList[1];

	return helper;
}

Int4	method_helper_open(V_Environment environment,V_Instance methodHelper,V_Method *method,V_Class theClass);
Int4	method_helper_open(V_Environment environment,V_Instance methodHelper,V_Method *method,V_Class theClass)
{
	V_String	methodName = (V_String) methodHelper->objectList[1];
	Int1		*stringText = NULL;
	Int1		*theName = NULL;
	Int1		*oldName = NULL;
	
	if(methodHelper->objectList[2]) stringText = ((V_String) methodHelper->objectList[2])->string;
	
	if(stringText && strcmp(stringText,"MAIN") == 0) vpl_MAIN = new_string(methodName->string,environment);
	if(stringText && strcmp(stringText,"INIT") == 0) vpl_INIT = new_string(methodName->string,environment);

	if(theClass) {
		oldName = new_cat_string(theClass->name,"/",environment);
		theName = new_cat_string(oldName,methodName->string,environment);
	}
	else theName = new_string(methodName->string,environment);

	method_create(environment, theName,method);
	X_free(theName);
	method_set(environment,*method,stringText);
	
	return kNOERROR;
}

Int4	case_helper_open(V_Environment environment,V_Instance caseHelper,V_Method method,V_Case *theCase);
Int4	case_helper_open(V_Environment environment,V_Instance caseHelper,V_Method method,V_Case *theCase)
{
#pragma unused(caseHelper)
	return case_create(environment,method,0,0,theCase);
}

Int4	terminal_open(V_Environment environment,V_Instance terminal,V_Operation theOperation);
Int4	terminal_open(V_Environment environment,V_Instance terminal,V_Operation theOperation)
{
	V_Terminal	tempTerminal;
	Nat4		theMode = iSimple;
	Nat4		rootIndex = 0;
	Nat4		rootOperation = 0;
	Nat4		loopRootIndex = 0;
	Int1		*mode = ((V_String) terminal->objectList[3])->string;
	V_Case		theCase = theOperation->owner;
	V_Instance	theRoot = NULL;
	V_Instance	theLoopRoot = NULL;

	if( strcmp(mode,"Normal") == 0) theMode = iSimple;
	else if( strcmp(mode,"List") == 0) theMode = iList; 
	else if( strcmp(mode,"Loop") == 0) theMode = iLoop;
	
	theRoot = (V_Instance) terminal->objectList[4];
	if(theRoot){
		Nat4	outputsCounter = 0;
		V_Instance	theParentOperation = (V_Instance) theRoot->objectList[0];
		V_List		theParentOutputs = (V_List) theParentOperation->objectList[4];
		V_Instance	theParentOperationItem = (V_Instance) theParentOperation->objectList[0];
		V_Instance	theParentCaseList = (V_Instance) theParentOperationItem->objectList[0];
		V_List		theOperationsList = (V_List) theParentCaseList->objectList[2];

		for(outputsCounter=0;outputsCounter<theParentOutputs->listLength;outputsCounter++){
			if(theRoot == (V_Instance) theParentOutputs->objectList[outputsCounter]) break;
		}
		rootIndex = outputsCounter + 1;

		for(outputsCounter=0;outputsCounter<theOperationsList->listLength;outputsCounter++){
			if(theParentOperationItem == (V_Instance) theOperationsList->objectList[outputsCounter]) break;
		}
		rootOperation = outputsCounter;
	}

	theLoopRoot = (V_Instance) terminal->objectList[5];
	if(theLoopRoot){
		Nat4	outputsCounter = 0;
		V_Instance	theParentOperation = (V_Instance) theRoot->objectList[0];
		V_List		theParentOutputs = (V_List) theParentOperation->objectList[4];

		theParentOperation = (V_Instance) terminal->objectList[0];
		theParentOutputs = (V_List) theParentOperation->objectList[4];
		for(outputsCounter=0;outputsCounter<theParentOutputs->listLength;outputsCounter++){
			if(theLoopRoot == (V_Instance) theParentOutputs->objectList[outputsCounter]) break;
		}
		loopRootIndex = outputsCounter + 1;
	}

	terminal_create(environment,theOperation,0,&tempTerminal);
	tempTerminal->mode = theMode;
	if(theRoot) connect_to_terminal( theCase, tempTerminal, rootIndex, rootOperation);
	if(theLoopRoot) {
		tempTerminal->loopRoot = (*(theOperation->outputList + (loopRootIndex-1)));
		tempTerminal->mode = iLoop;
		tempTerminal->loopRootIndex = loopRootIndex;
		(*(theOperation->outputList + (loopRootIndex-1)))->mode = iLoop;
	}

	return kNOERROR;
}

Int4	root_open(V_Environment environment,V_Instance root,V_Operation theOperation);
Int4	root_open(V_Environment environment,V_Instance root,V_Operation theOperation)
{
	V_Root	tempRoot;
	Nat4	theMode = iSimple;
	Int1	*mode = ((V_String) root->objectList[3])->string;

	if( strcmp(mode,"Normal") == 0) theMode = iSimple;
	else if( strcmp(mode,"List") == 0) theMode = iList; 
	else if( strcmp(mode,"Loop") == 0) theMode = iLoop;
	
	root_create(environment,theOperation,0,&tempRoot);
	tempRoot->mode = theMode;
	return kNOERROR;
}

Int4	case_item_open(V_Environment environment,V_Instance caseItem,V_Method method);

Int4	operation_helper_open(V_Environment environment,V_Instance operationHelper,V_Case theCase,V_Operation *theOperation);
Int4	operation_helper_open(V_Environment environment,V_Instance operationHelper,V_Case theCase,V_Operation *theOperation)
{

	V_List			terminalList = NULL;
	V_Instance		terminal = NULL;
	Nat4			terminalCounter = 0;
	V_Instance		theInjectTerminal = NULL;

	V_List			rootList = NULL;
	V_Instance		root = NULL;
	Nat4			rootCounter = 0;

	Nat4 			theType = kOperation;
	Nat4 			theAction = kContinue;
	enum opTrigger	theControl = kSuccess;
	enum opValueType	theValue = kNormal;

	Int1 *operationType = ((V_String) operationHelper->objectList[2])->string;
	Nat4 operationControl = ((V_Boolean) operationHelper->objectList[5])->value;
	Int1 *operationAction = ((V_String) operationHelper->objectList[6])->string;
	Nat4 theRepeat = ((V_Boolean) operationHelper->objectList[7])->value;
	Int1 *stringText = NULL;
	Nat4 theInject = 0;
	Nat4 theSuper = ((V_Boolean) operationHelper->objectList[12])->value;
	Int1 *operationValue = NULL;
	
	if(operationHelper->objectList[8]) stringText = ((V_String) operationHelper->objectList[8])->string;
	if(operationHelper->objectList[14]) operationValue = ((V_String) operationHelper->objectList[14])->string;

	if(!operationValue) theValue = kNormal;
	else if( strcmp(operationValue,"Normal") == 0) theValue = kNormal;
	else if( strcmp(operationValue,"Debug") == 0) theAction = kDebug; 
	else if( strcmp(operationValue,"Skip") == 0) theAction = kSkip; 
	
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

	operation_create(environment,theCase,0,0,theOperation);

// Must open roots first so that when terminals are opened, the "linked" roots can be found.
	
	rootList = (V_List) operationHelper->objectList[4];
	for(rootCounter=0;rootCounter<rootList->listLength;rootCounter++){
		root = (V_Instance) rootList->objectList[rootCounter];
		root_open(environment,root,*theOperation);
	}

	theInjectTerminal = (V_Instance) operationHelper->objectList[11];
	terminalList = (V_List) operationHelper->objectList[3];
	for(terminalCounter=0;terminalCounter<terminalList->listLength;terminalCounter++){
		terminal = (V_Instance) terminalList->objectList[terminalCounter];
		terminal_open(environment,terminal,*theOperation);
		if(terminal == theInjectTerminal) {
			theInject = terminalCounter+1;
		}
	}
		
	operation_set(environment,*theOperation,theType,theControl,theAction,theRepeat,stringText,theInject,theSuper,FALSE,theValue);
	if(theType == kLocal){
		V_Instance	ownerItem = (V_Instance) operationHelper->objectList[0];
		V_List		caseList = item_data_get_list_datum(environment,ownerItem,0);
		Nat4		caseCounter = 0;
		V_Instance	caseItem = NULL;

		for(caseCounter=0;caseCounter<caseList->listLength;caseCounter++){
			caseItem = (V_Instance) caseList->objectList[caseCounter];
			case_item_open(environment,caseItem,(V_Method) *theOperation);
		}
	}

	return kNOERROR;
			
}

Int4	case_item_open(V_Environment environment,V_Instance caseItem,V_Method method)
{
	V_Case		theCase = NULL;
	V_Instance	caseHelper = NULL;

	V_Instance	operationItem = NULL;
	V_List		operationList = NULL;
	V_Instance	operationHelper = NULL;

	Nat4		operationCounter = 0;

	caseHelper = item_data_get_helper(environment,caseItem);
	case_helper_open(environment,caseHelper,method,&theCase);

	operationList = item_data_get_list_datum(environment,caseItem,0);
	for(operationCounter=0;operationCounter<operationList->listLength;operationCounter++){
		V_Operation		theOperation = NULL;

		operationItem = (V_Instance) operationList->objectList[operationCounter];
		operationHelper = item_data_get_helper(environment,operationItem);
		operation_helper_open(environment,operationHelper,theCase,&theOperation);
	}
	
	return kNOERROR;
}

Int4	method_item_open(V_Environment environment,V_Instance methodItem,V_Class theClass);
Int4	method_item_open(V_Environment environment,V_Instance methodItem,V_Class theClass)
{
	V_Method	method = NULL;
	V_Instance	methodHelper = NULL;

	V_Instance	caseItem = NULL;
	V_List		caseList = NULL;

	Nat4		caseCounter = 0;

	methodHelper = item_data_get_helper(environment,methodItem);
	method_helper_open(environment,methodHelper,&method,theClass);
			
	caseList = item_data_get_list_datum(environment,methodItem,0);
	for(caseCounter=0;caseCounter<caseList->listLength;caseCounter++){
		caseItem = (V_Instance) caseList->objectList[caseCounter];
		case_item_open(environment,caseItem,method);
	}
	
	return kNOERROR;
}

Int4	persistent_helper_open(V_Environment environment,V_Instance persistentHelper,V_Class theClass);
Int4	persistent_helper_open(V_Environment environment,V_Instance persistentHelper,V_Class theClass)
{
	V_String		persistentName = (V_String) persistentHelper->objectList[1];
	V_ExternalBlock	persistentArchive = (V_ExternalBlock) persistentHelper->objectList[2];
	V_Value			persistentValue = NULL;
	V_Archive		archivePtr = NULL;
	Int1			*theName = NULL;
	Int1			*oldName = NULL;
	
	if(persistentArchive) archivePtr = persistentArchive->blockPtr;
	
	if(theClass) {
		oldName = new_cat_string(theClass->name,"/",environment);
		theName = new_cat_string(oldName,persistentName->string,environment);
	}
	else theName = new_string(persistentName->string,environment);

	persistent_create(environment, theName,archivePtr,&persistentValue);
	X_free(theName);
	
	return kNOERROR;
}

Int4	persistent_item_open(V_Environment environment,V_Instance persistentItem,V_Class theClass);
Int4	persistent_item_open(V_Environment environment,V_Instance persistentItem,V_Class theClass)
{
	V_Instance	persistentHelper = NULL;

	persistentHelper = item_data_get_helper(environment,persistentItem);
	persistent_helper_open(environment,persistentHelper,theClass);
	
	return kNOERROR;
}

Int4	attribute_helper_open(V_Environment environment,V_Instance attributeHelper,V_Class theClass);
Int4	attribute_helper_open(V_Environment environment,V_Instance attributeHelper,V_Class theClass)
{
	V_String		attributeName = (V_String) attributeHelper->objectList[1];
	V_ExternalBlock	attributeArchive = (V_ExternalBlock) attributeHelper->objectList[2];
	V_Value			attributeValue = NULL;
	V_Archive		archivePtr = NULL;
	
	if(attributeArchive) archivePtr = attributeArchive->blockPtr;
	
	return attribute_create(environment,theClass,attributeName->string,0,archivePtr,&attributeValue);
}

Int4	attribute_item_open(V_Environment environment,V_Instance classItem,V_Class theClass);
Int4	attribute_item_open(V_Environment environment,V_Instance classItem,V_Class theClass)
{
	V_Instance	attributeHelper = NULL;

	attributeHelper = item_data_get_helper(environment,classItem);
	attribute_helper_open(environment,attributeHelper,theClass);
	
	return kNOERROR;
}

Int4	class_helper_open(V_Environment environment,V_Instance classHelper,V_Class *theClass);
Int4	class_helper_open(V_Environment environment,V_Instance classHelper,V_Class *theClass)
{
	V_String	className = (V_String) classHelper->objectList[1];
	Int1		*stringText = NULL;
	
	if(classHelper->objectList[2]) stringText = ((V_String) classHelper->objectList[2])->string;
	
	class_create(environment, className->string,theClass);
	class_set(environment,*theClass,stringText);
	
	return kNOERROR;
}

Int4	class_item_open(V_Environment environment,V_Instance classItem);
Int4	class_item_open(V_Environment environment,V_Instance classItem)
{
	V_Class		theClass = NULL;
	V_Instance	classHelper = NULL;

	V_Instance	attributeItem = NULL;
	V_List		attributeList = NULL;

	V_Instance	methodItem = NULL;
	V_List		methodList = NULL;

	V_Instance	persistentItem = NULL;
	V_List		persistentList = NULL;
	
	Nat4		attributeCounter = 0;
	Nat4		methodCounter = 0;
	Nat4		persistentCounter = 0;

	classHelper = item_data_get_helper(environment,classItem);
	class_helper_open(environment,classHelper,&theClass);
			
	attributeList = item_data_get_list_datum(environment,classItem,0);
	for(attributeCounter=0;attributeCounter<attributeList->listLength;attributeCounter++){
		attributeItem = (V_Instance) attributeList->objectList[attributeCounter];
		attribute_item_open(environment,attributeItem,theClass);
	}
	
	methodList = item_data_get_list_datum(environment,classItem,1);
	for(methodCounter=0;methodCounter<methodList->listLength;methodCounter++){
		methodItem = (V_Instance) methodList->objectList[methodCounter];
		method_item_open(environment,methodItem,theClass);
	}

	persistentList = item_data_get_list_datum(environment,classItem,2);
	for(persistentCounter=0;persistentCounter<persistentList->listLength;persistentCounter++){
		persistentItem = (V_Instance) persistentList->objectList[persistentCounter];
		persistent_item_open(environment,persistentItem,theClass);
	}
	
	return kNOERROR;
}

Int4	project_item_data_open(V_Environment environment,V_Instance project);
Int4	project_item_data_open(V_Environment environment,V_Instance project)
{
	V_Instance	sectionItem = NULL;
	V_List		sectionList = NULL;

	V_Instance	classItem = NULL;
	V_List		classList = NULL;

	V_Instance	methodItem = NULL;
	V_List		methodList = NULL;

	V_Instance	persistentItem = NULL;
	V_List		persistentList = NULL;
	
	Nat4		sectionCounter = 0;
	Nat4		classCounter = 0;
	Nat4		methodCounter = 0;
	Nat4		persistentCounter = 0;
	
	sectionList = item_data_get_list_datum(environment,project,1);
	for(sectionCounter=0;sectionCounter<sectionList->listLength;sectionCounter++){
		sectionItem = (V_Instance) sectionList->objectList[sectionCounter];

		classList = item_data_get_list_datum(environment,sectionItem,0);
		for(classCounter=0;classCounter<classList->listLength;classCounter++){
			classItem = (V_Instance) classList->objectList[classCounter];
			class_item_open(environment,classItem);
		}

		methodList = item_data_get_list_datum(environment,sectionItem,1);
		for(methodCounter=0;methodCounter<methodList->listLength;methodCounter++){
			methodItem = (V_Instance) methodList->objectList[methodCounter];
			method_item_open(environment,methodItem,NULL);
		}

		persistentList = item_data_get_list_datum(environment,sectionItem,2);
		for(persistentCounter=0;persistentCounter<persistentList->listLength;persistentCounter++){
			persistentItem = (V_Instance) persistentList->objectList[persistentCounter];
			persistent_item_open(environment,persistentItem,NULL);
		}
	}
	
	return kNOERROR;
}

void print_usage( char* cli_name );
void print_usage( char* cli_name )
{
	printf( "\n" );
	printf( "**** Marten Command Line Interpreter\n" );
	printf( "**** (C) 2008 Andescotia, LLC.\n" );
	printf( "\n" );
	printf( "Usage: %s [-help] [-x] <path-to-vpz> [parameters to pass]\n", cli_name );
	printf( "\n" );
	printf( "This utility runs a Marten Interpreter script, which is\n" );
	printf( "typically designated with a .vpz file extension.\n" );
	printf( "\n" );
	printf( "You can also create executable versions of a script by passing\n" );
	printf( "the -x token.  \n" );

	return;
}

void run_banger( char* cli_name, int argCount, char* args[] );
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
	Int4						result = 0;
	Int1						*readFifoName = "/tmp/fifoMacVPLWrite";
	Int1						*writeFifoName = "/tmp/fifoMacVPLRead";
	Int4						readFileDescriptor = 0;
	Int4						writeFileDescriptor = 0;
	ProcessSerialNumber			thisProcess;
	ProcessSerialNumber			parentProcess;
	ProcessInfoRec				theProcessInfoRecord;
	EventRecord					dockEvent;
	
	Bool						isCLILaunch = FALSE;
	char*						iCLIPath = NULL;
	const char*					isCLIToken = "-r";
	Int1						paramSkipCount = 1;
	
	Int1						shebangOffset = 0;
	const char*					shebangToken = "#!";
	int							shebangNewLine = 10;
	
	const char*					helpToken = "-help";
	const char*					bangToken = "-x";
	
	const char*					stdioToken = "--stdio";
	char*						stdioPath;
	
	V_Environment				environment = createEnvironment();
	
	if( environment == NULL ) printf("BOGUS ENVIRONS!!\n"); 
	
	if( argc == 1 ) {
		print_usage( argv[0] );
		return kNOERROR;
	}
	
	if( argc >= 2 ) {
		if( (strcmp(argv[1], helpToken)) == 0 ) {
			print_usage( argv[0] );
			return kNOERROR;
		}
		if( (strcmp(argv[1], bangToken)) == 0 ) {
			run_banger( argv[0],argc-2, &argv[2] );
			return kNOERROR;
		}
		if( (strcmp(argv[1], stdioToken)) == 0 )
			{
				isCLILaunch = TRUE;
				iCLIPath = argv[3];
				stdioPath = argv[2];
				freopen( stdioPath, "w", stdout );
				if( freopen( stdioPath, "a+", stdin ) == NULL ) fprintf( stderr, "Couldn't reopen stdin.\n" );
			} else {
				isCLILaunch = TRUE;
				iCLIPath = argv[1];
			}
		} else {
			print_usage( argv[0] );
			return kNOERROR;
		}

		
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
		result = VPLEnvironmentMain(environment,vpl_MAIN,argc-paramSkipCount,(char**)&argv[paramSkipCount]);
	}
	
	return result;

}
