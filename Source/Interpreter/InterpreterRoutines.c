/*
	
	VPL_Primitives.c
	Copyright 2000 Scott B. Anderson, All Rights Reserved.
	
*/
#include "InterpreterRoutines.h"
#include <signal.h>

#include <objc/runtime.h>



#define	PARAMETERAREASIZE 8

/* This list MUST be kept in sync with enum faultCode in VPL_Environment.h */

Int1* faultCodes[] = {
	"Unknown Fault",
	"Nonexistent Class",
	"Nonexistent Method",
	"Nonexistent Persistent",
	"Nonexistent Attribute",
	"Nonexistent Primitive",
	"Nonexistent Constant",
	"Nonexistent Field",
	"Nonexistent Procedure",
	"Incorrect Inarity",
	"Incorrect Outarity",
	"Incorrect Type",
	"Incorrect Cases",
	"Incorrect List Input",
	"No Control Annotation",
	"Watchpoint triggered",
	"Signal Interrupt"
};

Int1* signalCodes[] = {
	"SIGHUP",
	"SIGINT",
	"SIGQUIT",
	"SIGILL",
	"SIGTRAP",
	"SIGABRT",
	"SIGEMT",
	"SIGFPE",
	"SIGKILL",
	"SIGBUS",
	"SIGSEGV",
	"SIGSYS",
	"SIGPIPE",
	"SIGALRM",
	"SIGTERM",
	"SIGURG",
	"SIGSTOP",
	"SIGTSTP",
	"SIGCONT",
	"SIGCHLD",
	"SIGTTIN",
	"SIGTTOU",
	"SIGIO",
	"SIGXCPU",
	"SIGXFSZ",
	"SIGVTALRM",
	"SIGPROF",
	"SIGWINCH",
	"SIGINFO",
	"SIGUSR1",
	"SIGUSR2",
};

Int1* signalNames[] = {
	"Hangup",
	"Interrupt",
	"Quit",
	"Illegal Instruction",
	"Trace Trap",
	"Abort",
	"EMT Instruction",
	"Floating Point Exception",
	"Kill",
	"Bus Error",
	"Segment Violation",
	"Invalid Parameter",
	"Unconnected Write Pipe",
	"Alarm",
	"Terminate",
	"Urgent IO condition",
	"Stop",
	"tty Stop",
	"Continue",
	"Child Exit",
	"tty Read",
	"tty Write",
	"Input/Output",
	"Exceeded CPU Time Limit",
	"Exceeded File Size Limit",
	"Virtual Time Alarm",
	"Profiling Time Alarm",
	"Window Size CHanges",
	"Information Request",
	"User Signal 1",
	"User Signal 2",
};

Int1 dockDrawCommands[] = {
	kCommandNoop,
	kCommandExecute,
	kCommandEnvironmentPostLoad,
	kCommandEnvironmentStep,
	kCommandStackAdvance,
	kCommandFrameStepOut,
};

const Int1 dockDrawCommandCount = 5;

// This function is internal to CoreFoundation framework and not defined in the standard headers.
// It is used when the bundle Resources folder has been modified.

extern void _CFBundleFlushCaches( void );


#pragma mark ------- Globals -------

Int4			readFileDescriptor = 0;
Int4			writeFileDescriptor = 0;
sigjmp_buf		jumpBuffer;
vpl_Boolean		signalJump = kFALSE;		// if kTRUE, it's OK to jump to our buffer.
Int1*			signalName = NULL;
// int				signalID = 0;

Boolean			gPrintPedanticDebug = FALSE;
Boolean			gFirstCommandPass = TRUE;
Boolean			gSwapPipeBytes = FALSE;
Boolean			gDrawCommandBadge = FALSE;

Int1			gLastDrawCommand = kvpl_CommandNone;
Boolean			gLoadDrawCommand = TRUE;
//Boolean			gStopDrawCommand = FALSE;
const float		k90DegreesRad = 1.0; // 90 * (M_PI/180);

#pragma mark ------- UI Enhancements -------

void EnableCommandBadge( Boolean drawBadge )
{
	gDrawCommandBadge = drawBadge;
	return;
}

void DrawCommandBadge( Int1 CommandState, Int1 theCommand, V_Environment environment );
void DrawCommandBadge( Int1 CommandState, Int1 theCommand, V_Environment environment )
{
	CGContextRef	docktileContext;
	float			badgeX		= 10.0;
	float			badgeY		= 10.0;
	float			badgeWidth	= 40.0;
	float			badgeHeight	= 40.0;
	CGRect			badgeFrame = CGRectMake( badgeX, badgeY, badgeWidth, badgeHeight );
	CGRect			badgeFrameInset = CGRectInset(badgeFrame, (badgeWidth/10), (badgeHeight/10));
	
	Int1			checkIndex = 0;
	Boolean			checkNow = FALSE;
	Boolean			drawStop = TRUE;
				
	if( gLastDrawCommand == CommandState ) return;
	for( checkIndex = 0; checkIndex < dockDrawCommandCount; checkIndex++ )
		if( dockDrawCommands[checkIndex] == theCommand ) {
			checkNow = TRUE;
			break;
		}
		
	if( !checkNow ) return;
	gLastDrawCommand = CommandState;
	
	if( gLoadDrawCommand )
		if( theCommand == kCommandEnvironmentPostLoad ) gLoadDrawCommand = FALSE;
	
	if( environment->stack )
		drawStop = ( environment->stack->currentFrame == NULL );
		
	RestoreApplicationDockTileImage();
	docktileContext = BeginCGContextForApplicationDockTile();
	
	switch(CommandState) 
	{
		case kvpl_CommandReading:
			if( gLoadDrawCommand )	{
				CGContextSetRGBFillColor( docktileContext, 0.1, 0.1, 0.78, 0.8 );	// Blue
				CGContextAddRect( docktileContext, badgeFrameInset );
			} else if( drawStop )	{
				CGContextSetRGBFillColor( docktileContext, 0.78, 0.1, 0.1, 0.8 );	// Red
				CGContextMoveToPoint( docktileContext, badgeX+(badgeWidth/2), badgeY );
				CGContextAddLineToPoint( docktileContext, badgeX, badgeY+(badgeHeight/2) );
				CGContextAddLineToPoint( docktileContext, badgeX+(badgeWidth/2), badgeY+badgeHeight );
				CGContextAddLineToPoint( docktileContext, badgeX+badgeWidth, badgeY+(badgeHeight/2) );
				CGContextClosePath( docktileContext );
			} else 					{
				CGContextSetRGBFillColor( docktileContext, 1.0, 1.0, 0.0, 0.8 );	// Yellow
				CGContextAddEllipseInRect( docktileContext, badgeFrame );
			};
			break;
	
		default:
			CGContextSetRGBFillColor( docktileContext, 0.1, 0.78, 0.1, 0.8 );								// Green
			CGContextMoveToPoint( docktileContext, badgeX, badgeY );
			CGContextAddLineToPoint( docktileContext, badgeX, badgeY+badgeHeight );
			CGContextAddLineToPoint( docktileContext, badgeX+badgeWidth, badgeY+(badgeHeight/2) );
			CGContextClosePath( docktileContext );
			break;
	}
	CGContextSetRGBStrokeColor( docktileContext, 0.0, 0.0, 0.0, 1.0 );
	CGContextDrawPath( docktileContext, kCGPathFillStroke );

	CGContextFlush( docktileContext );
	EndCGContextForApplicationDockTile( docktileContext );
		
	return;
}	

#pragma mark ------- Interpreter routines -------

Nat4	operation_match(Int1* theOperationName, Nat4 theOperationType, Int1* theTextToMatch, Nat4 theType, Nat4 theSubstring, Nat4 theCase);
Nat4	operation_match(Int1* theOperationName, Nat4 theOperationType, Int1* theTextToMatch, Nat4 theType, Nat4 theSubstring, Nat4 theCase)
{
	Nat4	result = kFALSE;
	Int1	*operationString = theOperationName;
	Int1	*textString = theTextToMatch;

	if(!theOperationName) return result;
	if(!theTextToMatch) return result;
	
	if(theCase){
		Nat4	length = strlen(theOperationName);
		Nat4	counter = 0;
		
		operationString = (Int1 *) calloc(length+1,sizeof(Int1));
		for(counter = 0;counter<length;counter++) operationString[counter] = tolower(theOperationName[counter]);
		length = strlen(theTextToMatch);
		textString = (Int1 *) calloc(length+1,sizeof(Int1));
		for(counter = 0;counter<length;counter++) textString[counter] = tolower(theTextToMatch[counter]);
	}


	if(kOperation&theType) {
		if(theSubstring){
			if(strstr(operationString,textString)) result = kTRUE;
		} else {
			if(!strcmp(operationString,textString)) result = kTRUE;
		}
	} else if(theOperationType&theType) {
		if(theSubstring){
			if(strstr(operationString,textString)) result = kTRUE;
		} else {
			if(!strcmp(operationString,textString)) result = kTRUE;
		}
	}
	
	if(theCase){
		X_free(operationString);
		X_free(textString);
	}

	return result;
}

Nat4	case_find_operation(Nat4 **theBlockPtr, Nat4 numberOfOperations, V_Case currentCase, Int1 *operationText, Nat4 theType, Nat4 theSubstring, Nat4 theCase);
Nat4	case_find_operation(Nat4 **theBlockPtr, Nat4 numberOfOperations, V_Case currentCase, Int1 *operationText, Nat4 theType, Nat4 theSubstring, Nat4 theCase)
{
	Nat4	counter = 0;
	Nat4	caseCounter = 0;
	Nat4	*theBlock = NULL;
	
	for(counter = 0; counter < currentCase->numberOfOperations; counter++) {
		if(currentCase->operationsList[counter]->type == kLocal) {
			for(caseCounter = 0; caseCounter<currentCase->operationsList[counter]->numberOfCases; caseCounter++){
				numberOfOperations = case_find_operation(theBlockPtr,numberOfOperations,currentCase->operationsList[counter]->casesList[caseCounter],operationText,theType,theSubstring,theCase);
			}
		}
	}

	theBlock = *theBlockPtr;

	for(counter = 0; counter < currentCase->numberOfOperations; counter++) {
		if(operation_match(currentCase->operationsList[counter]->objectName,currentCase->operationsList[counter]->type,operationText,theType,theSubstring,theCase)) {
			theBlock = *theBlockPtr  = VPXREALLOC(theBlock,numberOfOperations + 1,Nat4);
			*(theBlock+numberOfOperations) = currentCase->operationsList[counter]->vplOperation;
			numberOfOperations++;
		}
	}

	return numberOfOperations;

}

V_List	get_procedure_info(V_Environment environment,Int1* theTestName);
V_List	get_procedure_info(V_Environment environment,Int1* theTestName){
	Nat4			procedureInarity = 0;
	Nat4			procedureOutarity = 0;
	V_String		tempString = NULL;
	char			constructString[1024] = "";
	long			constructStringOffset = 0;
	
	V_List			outputList = NULL;
	V_ExtProcedure tempProcedure = NULL;
	V_Parameter tempParameter = NULL;
	Int1			*tempType = "";

	tempProcedure = get_extProcedure(environment->externalProceduresTable,theTestName);
	if(tempProcedure == NULL) return NULL;

	if(tempProcedure->returnParameter != NULL) procedureOutarity++;

	tempParameter = tempProcedure->parameters;
	while( tempParameter != NULL ) {
		procedureInarity++;
		if(tempParameter->type == kPointerType && tempParameter->constantFlag == 0) procedureOutarity++;
		tempParameter = tempParameter->next;
	}
	
	outputList = create_list(procedureInarity+procedureOutarity,environment);
	
	procedureInarity = 0;
	tempParameter = tempProcedure->parameters;
	while( tempParameter != NULL ) {
		switch(tempParameter->type){
			case kUnsignedType:		tempType = "Unsigned"; break;
			case kLongType:			tempType = "Long"; break;
			case kShortType:		tempType = "Short"; break;
			case kCharType:			tempType = "Character"; break;
			case kEnumType:			tempType = "Enumeration"; break;
			case kIntType:			tempType = "Integer"; break;
			case kFloatType:		tempType = "Float"; break;
			case kDoubleType:		tempType = "Double"; break;
			case kPointerType:		tempType = "Pointer"; break;
			case kStructureType:	tempType = "Structure"; break;
			case kVoidType:			tempType = "Void"; break;
		}
		if(tempParameter->type == kPointerType)
			constructStringOffset += sprintf(&constructString[constructStringOffset],
				"Input %u: %s:%u:%s:%u:%u",
					(unsigned int) procedureInarity+1,tempType,(unsigned int) tempParameter->size,tempParameter->name,(unsigned int) tempParameter->indirection,(unsigned int) tempParameter->constantFlag);
		else if(tempParameter->type == kStructureType)
			constructStringOffset += sprintf(&constructString[constructStringOffset],
				"Input %u: %s:%u:%s",
					(unsigned int) procedureInarity+1,tempType,(unsigned int) tempParameter->size,tempParameter->name);
		else
			constructStringOffset += sprintf(&constructString[constructStringOffset],
				"Input %u: %s:%u",
					(unsigned int) procedureInarity+1,tempType,(unsigned int) tempParameter->size);
		tempString = create_string(constructString,environment);
		outputList->objectList[procedureInarity++] = (V_Object)tempString;
		tempParameter = tempParameter->next;
		constructStringOffset = 0;
	}
	
	procedureOutarity = 1;
	if(tempProcedure->returnParameter != NULL){
		tempParameter = tempProcedure->returnParameter;
		switch(tempParameter->type){
			case kUnsignedType:		tempType = "Unsigned"; break;
			case kLongType:			tempType = "Long"; break;
			case kShortType:		tempType = "Short"; break;
			case kCharType:			tempType = "Character"; break;
			case kEnumType:			tempType = "Enumeration"; break;
			case kIntType:			tempType = "Integer"; break;
			case kFloatType:		tempType = "Float"; break;
			case kDoubleType:		tempType = "Double"; break;
			case kPointerType:		tempType = "Pointer"; break;
			case kStructureType:	tempType = "Structure"; break;
		}
		if(tempParameter->type == kPointerType)
			constructStringOffset += sprintf(&constructString[constructStringOffset],
				"Return Output %u: %s:%u:%s:%u:%u",
					(unsigned int) procedureOutarity++,tempType,(unsigned int) tempParameter->size,tempParameter->name,(unsigned int) tempParameter->indirection,(unsigned int) tempParameter->constantFlag);
		else if(tempParameter->type == kStructureType)
			constructStringOffset += sprintf(&constructString[constructStringOffset],
				"Return Output %u:%s:%u:%s",
					(unsigned int) procedureOutarity++,tempType,(unsigned int) tempParameter->size,tempParameter->name);
		else
			constructStringOffset += sprintf(&constructString[constructStringOffset],
				"Return Output %u:%s:%u",
					(unsigned int) procedureOutarity++,tempType,(unsigned int) tempParameter->size);
		tempString = create_string(constructString,environment);
		outputList->objectList[procedureInarity++] = (V_Object)tempString;
		constructStringOffset = 0;
	}
	
	tempParameter = tempProcedure->parameters;
	while( tempParameter != NULL ) {
		switch(tempParameter->type){
			case kUnsignedType:		tempType = "Unsigned"; break;
			case kLongType:			tempType = "Long"; break;
			case kShortType:		tempType = "Short"; break;
			case kCharType:			tempType = "Character"; break;
			case kEnumType:			tempType = "Enumeration"; break;
			case kIntType:			tempType = "Integer"; break;
			case kFloatType:		tempType = "Float"; break;
			case kDoubleType:		tempType = "Double"; break;
			case kPointerType:		tempType = "Pointer"; break;
			case kStructureType:	tempType = "Structure"; break;
		}
		if(tempParameter->type == kPointerType && tempParameter->constantFlag == 0){
			constructStringOffset += sprintf(&constructString[constructStringOffset],
				"Output %u: %s:%u:%s:%u:%u",
					(unsigned int) procedureOutarity++,tempType,(unsigned int) tempParameter->size,tempParameter->name,(unsigned int) tempParameter->indirection,(unsigned int) tempParameter->constantFlag);
			tempString = create_string(constructString,environment);
			outputList->objectList[procedureInarity++] = (V_Object)tempString;
		}
		tempParameter = tempParameter->next;
		constructStringOffset = 0;
	}
	
	return outputList;
}

V_String	get_primitive_info(V_Environment environment,Int1* theTestName);
V_String	get_primitive_info(V_Environment environment,Int1* theTestName){
	V_String		outputObject = NULL;
	
	V_ExtPrimitive	tempPrimitive = get_extPrimitive(environment->externalPrimitivesTable,theTestName);

	if(tempPrimitive == NULL) return NULL;
	else if(tempPrimitive->section == NULL) {
		outputObject = create_string("No information available yet.",environment);
	} else {
		outputObject = create_string(tempPrimitive->section,environment);
	}
	
	return outputObject;
}

V_List	get_structure_info(V_Environment environment,Int1* theTestName);
V_List	get_structure_info(V_Environment environment,Int1* theTestName){
	Nat4			numberOfFields = 0;
	V_String		tempString = NULL;
	char			constructString[1024] = "";
	long			constructStringOffset = 0;
	
	V_List			outputList = NULL;
	V_ExtStructure	tempStructure = NULL;
	V_ExtField		tempField = NULL;
	Int1			*tempType = "";

	tempStructure = get_extStructure(environment->externalStructsTable,theTestName);
	if(tempStructure == NULL) return NULL;

	tempField = tempStructure->fields;
	while( tempField != NULL ) {
		numberOfFields++;
		tempField = tempField->next;
	}
	
	outputList = create_list(numberOfFields,environment);
	
	numberOfFields = 0;
	tempField = tempStructure->fields;
	while( tempField != NULL ) {
		switch(tempField->type){
			case kUnsignedType:		tempType = "Unsigned"; break;
			case kLongType:			tempType = "Long"; break;
			case kShortType:		tempType = "Short"; break;
			case kCharType:			tempType = "Character"; break;
			case kEnumType:			tempType = "Enumeration"; break;
			case kIntType:			tempType = "Integer"; break;
			case kFloatType:		tempType = "Float"; break;
			case kDoubleType:		tempType = "Double"; break;
			case kPointerType:		tempType = "Pointer"; break;
			case kStructureType:	tempType = "Structure"; break;
		}
		constructStringOffset += sprintf(&constructString[constructStringOffset],
			"Field %u: %s:%u:%u:%s:%s:%u:%u:%s",
				(unsigned int) numberOfFields,tempField->name,(unsigned int) tempField->offset,(unsigned int) tempField->size,tempType,
				tempField->pointerTypeName,(unsigned int) tempField->indirection,(unsigned int) tempField->pointerTypeSize,tempField->typeName);
		tempString = create_string(constructString,environment);
		outputList->objectList[numberOfFields++] = (V_Object)tempString;
		tempField = tempField->next;
		constructStringOffset = 0;
	}
	
	return outputList;
}

V_String	get_constant_info(V_Environment environment,Int1* theTestName);
V_String	get_constant_info(V_Environment environment,Int1* theTestName){
	V_String		outputObject = NULL;
	
	char			constructString[1024] = "";
	long			constructStringOffset = 0;
	
	V_ExtConstant	 tempConstant = NULL;

	tempConstant = get_extConstant(environment->externalConstantsTable,theTestName);
	if(tempConstant == NULL) return NULL;
	else
		constructStringOffset += sprintf(&constructString[constructStringOffset],
			"External Constant \"%s\" has the value: %u",
					theTestName,(unsigned int) tempConstant->enumInteger);

	outputObject = create_string(constructString,environment);

	return outputObject;
}

Int4 environment_set_current_operation(V_Environment environment,V_Frame theFrame,Nat4 index,Nat4** theBlockPtr,Nat4* theNumberOfFrames)
{
	V_Stack	stack = NULL;
	V_Frame	tempFrame = NULL;
	V_Frame	nextFrame = NULL;
	Nat4	currentOperationOffset = 0;
	V_Operation	currentOperation = NULL;
	Nat4	counter = 0;
	Nat4	numberOfFrames = 0;
	V_Stack		currentStack = environment->stack;
	V_Frame 	currentFrame = NULL;
	Nat4*		theBlock = NULL;


	while(currentStack) {
		currentFrame = currentStack->currentFrame;
		while(currentFrame && currentFrame != theFrame) {
			currentFrame = currentFrame->previousFrame;
		}
		if(currentFrame) break;
		currentStack = currentStack->nextStack;
	}
				
	if(!currentFrame) return kERROR;
	
	stack = currentStack;

				numberOfFrames = 0;
				tempFrame = stack->currentFrame;
				while(tempFrame != theFrame){
					tempFrame = tempFrame->previousFrame;
					numberOfFrames++;
				}
				
				if(numberOfFrames){
					tempFrame = stack->currentFrame;
					theBlock = *theBlockPtr = VPXMALLOC(numberOfFrames,Nat4);
					counter = 0;
					for(counter = 0;counter<numberOfFrames;counter++){
						*(theBlock+counter) = tempFrame->vplEditor;
						nextFrame = tempFrame->previousFrame;
						X_destroy_frame(environment,tempFrame);
						tempFrame = nextFrame;
					}
				}

				stack->currentFrame = theFrame;

				currentOperationOffset = 0;
				while(theFrame->frameCase->operationsList[currentOperationOffset++] != theFrame->operation) {}
				currentOperationOffset--;

	
				if(currentOperationOffset < index - 1){
					for(; currentOperationOffset < index - 1; currentOperationOffset++){
						currentOperation = theFrame->frameCase->operationsList[currentOperationOffset];
						theFrame->operation = currentOperation;
						for(counter = 0; counter < currentOperation->outarity; counter++) {
							X_set_frame_root_object(environment,theFrame,counter,(V_Object) create_undefined(environment));
						}
					}
					currentOperation = theFrame->frameCase->operationsList[currentOperationOffset];
					theFrame->operation = currentOperation;
					theFrame->methodSuccess = kNoAction;
					theFrame->caseCounter = 0;
					theFrame->repeatFlag = currentOperation->repeat;
					theFrame->repeatCounter = 0;
					theFrame->stopNow = kTRUE;
				} else if(currentOperationOffset >= index - 1){
					do{
						currentOperation = theFrame->frameCase->operationsList[currentOperationOffset];
						theFrame->operation = currentOperation;
						for(counter = 0; counter < currentOperation->outarity; counter++) {
							X_destroy_root_node(environment,theFrame,X_get_root_node(theFrame,currentOperation->outputList[counter]));
						}
					} while (currentOperationOffset-- > index - 1);
					currentOperationOffset++;
					currentOperation = theFrame->frameCase->operationsList[currentOperationOffset];
					theFrame->operation = currentOperation;
					theFrame->methodSuccess = kNoAction;
					theFrame->caseCounter = 0;
					theFrame->repeatFlag = currentOperation->repeat;
					theFrame->repeatCounter = 0;
					theFrame->stopNow = kTRUE;
				}
				
	*theNumberOfFrames = numberOfFrames;
	return kNOERROR;
}

Int4 environment_abort(V_Environment environment,Nat4** theBlockPtr,Nat4* theNumberOfFrames);
Int4 environment_abort(V_Environment environment,Nat4** theBlockPtr,Nat4* theNumberOfFrames)
{
	V_Stack	stack = NULL;
	V_Frame	tempFrame = NULL;
	V_Frame	previousFrame = NULL;
	Nat4	counter = 0;
	Nat4	numberOfFrames = 0;
	V_Stack		currentStack = environment->stack;
	Nat4*		theBlock = NULL;


	numberOfFrames = 0;
	while(currentStack) {
		stack = currentStack;
		tempFrame = stack->currentFrame;
		while(tempFrame){
			tempFrame = tempFrame->previousFrame;
			numberOfFrames++;
		}
		currentStack = currentStack->nextStack;
	}

	if(numberOfFrames){
		currentStack = environment->stack;
		theBlock = *theBlockPtr = VPXMALLOC(numberOfFrames,Nat4);
		counter = 0;
		while(currentStack) {
			stack = currentStack;
			tempFrame = stack->currentFrame;
			while(tempFrame){
				*(theBlock+counter++) = tempFrame->vplEditor;
				previousFrame = tempFrame->previousFrame;
				X_destroy_frame(environment,tempFrame);
				tempFrame = previousFrame;
			}
			currentStack->currentFrame = NULL;
			currentStack = currentStack->nextStack;
		}
	}

	*theNumberOfFrames = numberOfFrames;
	return kNOERROR;
}

Int4 rename_class_methods( V_Environment environment,Int1* oldName, Int1* newName)
{
	V_Dictionary		methodsDictionary = NULL;
	V_DictionaryNode	tempNode = NULL;
	Nat4				counter = 0;
	Nat4				length = 0;
	V_Method			tempMethod = NULL;
	Int1*				tempString = NULL;

	if(environment != NULL) methodsDictionary = environment->universalsTable;
	
	for(counter = 0; counter < methodsDictionary->numberOfNodes; counter++) {
		tempNode = methodsDictionary->nodes[counter];
		length = strlen(oldName);
		if(strstr(tempNode->name,oldName) != NULL && tempNode->name[length] == '/'){
			tempString = tempNode->name;
			tempString = tempString + length;
			tempString = new_cat_string(newName,tempString,environment);
			tempMethod = (V_Method) tempNode->object;
			X_free(tempMethod->objectName);
			tempNode->name = tempString;
			tempMethod->objectName = tempString;
		}
	}
	sort_dictionary(methodsDictionary);
	

	return kNOERROR;
}

Int4 rename_class_persistents( V_Environment environment,Int1* oldName, Int1* newName)
{
	V_Dictionary		dictionary = NULL;
	V_DictionaryNode	tempNode = NULL;
	Nat4				counter = 0;
	Nat4				length = 0;
	V_Value				tempPersistent = NULL;
	Int1*				tempString = NULL;

	if(environment != NULL) dictionary = environment->persistentsTable;
	
	for(counter = 0; counter < dictionary->numberOfNodes; counter++) {
		tempNode = dictionary->nodes[counter];
		length = strlen(oldName);
		if(strstr(tempNode->name,oldName) != NULL && tempNode->name[length] == '/'){
			tempString = tempNode->name;
			tempString = tempString + length;
			tempString = new_cat_string(newName,tempString,environment);
			tempPersistent = (V_Value) tempNode->object;
			X_free(tempPersistent->objectName);
			tempNode->name = tempString;
			tempPersistent->objectName = tempString;
		}
	}
	sort_dictionary(dictionary);
	

	return kNOERROR;
}

enum opTrigger class_create(V_Environment environment, Int1 *className, V_Class *tempClass)
{
	V_DictionaryNode	tempNode = NULL;

	tempNode = find_node(environment->classTable,className);
	
	if(tempNode == NULL){
		*tempClass = class_new(className,environment);
		if(*tempClass != NULL){
			return kSuccess;
		}else{
			printf("Could not create class\n");
			return kSuccess;
		}
	}else{
		V_Class			theClass = (V_Class) tempNode->object;
		V_ClassEntry	theClassEntry = environment->classIndexTable->classes[theClass->classIndex];
		if(theClassEntry->valid == kFALSE){
			*tempClass = class_new(className,environment);
			if(*tempClass != NULL){
				return kSuccess;
			}else{
				printf("Could not create class\n");
				return kSuccess;
			}
		} else {
			return kFailure;
		}
	}
}

enum opTrigger class_remove(V_Environment environment, V_Class tempClass)
{
	V_ClassEntry		theClassEntry = NULL;
	V_ClassIndexTable	theTable = environment->classIndexTable;
	Nat4				numberOfMethods = environment->totalMethods;
	Nat4				numberOfValues = environment->totalValues;

	remove_node(environment->classTable,tempClass->name);

	theClassEntry = theTable->classes[tempClass->classIndex];
	theClassEntry->valid = kFALSE;
	theClassEntry->constructorIndex = -1;
	theClassEntry->destructorIndex = -1;
	theClassEntry->numberOfSuperClasses = 0;
	theClassEntry->superClasses = NULL;
	theClassEntry->theClass = NULL;

	if(numberOfMethods) memset(theClassEntry->methods,0,numberOfMethods*sizeof(V_Method));

	if(numberOfValues) {
		Nat4	counter = 0;
		for(counter=0;counter<numberOfValues;counter++){
			if(theClassEntry->values[counter]){
				V_WatchpointNode watchpointNode = theClassEntry->values[counter]->watchpointList;
				while(watchpointNode){
					V_WatchpointNode tempWatchpointNode = watchpointNode->previous;
					X_free(watchpointNode);
					watchpointNode = tempWatchpointNode;
				}
			}
			X_free(theClassEntry->values[counter]);
		}
		memset(theClassEntry->values,0,numberOfValues*sizeof(V_ValueNode));
	}

	destroy_class(tempClass,environment);

	return kSuccess;
}

enum opTrigger class_set(V_Environment environment, V_Class tempClass, Int1 *superClass)
{

	if(tempClass){
		class_superClass_to(tempClass,environment,superClass);
		return kSuccess;
	}else{
		printf("NULL class in class set\n");
		return kSuccess;
	}
}

enum opTrigger mark_instances(V_Environment environment,V_Class theUpdatedClass)
{
	Nat4		oldCounter = 0;
	V_Instance	theInstance = NULL;
	V_Object	currentObject = environment->heap->previous;
	V_Object	*oldObjectList = NULL;
	Nat4		oldLength = 0;
	Bool		didMark = kFALSE;

	if(!environment->postLoad) return kSuccess;
//LOCKHEAP
	while(currentObject != NULL){
		if(currentObject->type == kInstance && strcmp(((V_Instance) currentObject)->name,theUpdatedClass->name) == 0){
			theInstance = (V_Instance) currentObject;
			didMark = kTRUE;
			theInstance->mark = kTRUE;
		}
		currentObject = currentObject->previous;
	}
	
	while(didMark){
		didMark = kFALSE;
		currentObject = environment->heap->previous;
		while(currentObject != NULL){
			if(currentObject->type == kList || currentObject->type == kInstance){
				oldObjectList = ((V_List) currentObject)->objectList;
				oldLength = ((V_List) currentObject)->listLength;
				for(oldCounter = 0;oldCounter<oldLength;oldCounter++){
					if(oldObjectList[oldCounter] && oldObjectList[oldCounter]->mark == kTRUE && currentObject->mark == kFALSE){
						currentObject->mark = kTRUE;
						didMark = kTRUE;
					}
				}
			}
			currentObject = currentObject->previous;
		}
	}
//UNLOCKHEAP
	
	return kSuccess;
}

enum opTrigger class_rename(V_Environment environment, Int1 *oldName, Int1 *provisionalName)
{
	V_DictionaryNode	tempNode = NULL;
	V_Class				tempClass = NULL;
	Int1				*newName = NULL;
	enum opTrigger		interpreterResult = kFailure;
	V_ClassEntry		oldClassEntry = NULL;
	V_ClassEntry		newClassEntry = NULL;
	V_ClassIndexTable	theTable = environment->classIndexTable;
	Nat4				numberOfClassEntries = theTable->numberOfClasses;
	Nat4				numberOfMethods = environment->totalMethods;
	Nat4				numberOfValues = environment->totalValues;
	Nat4				counter = 0;
	Bool				rename = kFALSE;

	tempNode = find_node(environment->classTable,provisionalName);
	
	if(tempNode == NULL){
		rename = kTRUE;
	} else {
		V_Class	provisionalClass = (V_Class) tempNode->object;
		V_ClassEntry	provisionalEntry = theTable->classes[provisionalClass->classIndex];
		if(!provisionalEntry->valid) {
			tempNode = remove_node(environment->classTable,provisionalName);
			destroy_class((V_Class) tempNode->object,environment);
			X_free(tempNode);
			rename = kTRUE;
		}
		else rename = kFALSE;
	}

	if(rename == kTRUE){
		tempNode = find_node(environment->classTable,oldName);
		if(tempNode != NULL){
			tempClass = (V_Class) tempNode->object;
			X_free(tempClass->name);
			newName = new_string(provisionalName,environment);
			tempNode->name = newName;
			tempClass->name = newName;
			sort_dictionary(environment->classTable);

			rename_instances(environment,oldName,newName);
			rename_class_methods(environment,oldName,newName);
			rename_class_persistents(environment,oldName,newName);

			oldClassEntry = theTable->classes[tempClass->classIndex];

			newClassEntry = (V_ClassEntry) X_malloc(sizeof (VPL_ClassEntry));
			newClassEntry->valid = kTRUE;
			newClassEntry->constructorIndex = oldClassEntry->constructorIndex;
			newClassEntry->destructorIndex = oldClassEntry->destructorIndex;
			newClassEntry->numberOfSuperClasses = oldClassEntry->numberOfSuperClasses;
			newClassEntry->superClasses = oldClassEntry->superClasses;
			newClassEntry->theClass = oldClassEntry->theClass;
			newClassEntry->methods = oldClassEntry->methods;
			newClassEntry->values = oldClassEntry->values;

			tempClass->classIndex = numberOfClassEntries;
			for(counter=0;counter<tempClass->attributes->numberOfNodes;counter++){
				((V_Value) tempClass->attributes->nodes[counter]->object)->classIndex = numberOfClassEntries;
			}
			
			for(counter=0;counter<numberOfMethods;counter++){
				if(newClassEntry->methods[counter]) newClassEntry->methods[counter]->classIndex = numberOfClassEntries;
			}
			
			for(counter=0;counter<numberOfValues;counter++){
				if(newClassEntry->values[counter] && newClassEntry->values[counter]->type == kPersistentNode) newClassEntry->values[counter]->value->classIndex = numberOfClassEntries;
			}
			
			numberOfClassEntries++;
			theTable->classes = VPXREALLOC(theTable->classes,numberOfClassEntries,V_ClassEntry);
			theTable->classes[tempClass->classIndex] = newClassEntry;
			theTable->numberOfClasses = numberOfClassEntries;

			oldClassEntry->valid = kFALSE;
			oldClassEntry->constructorIndex = -1;
			oldClassEntry->destructorIndex = -1;
			oldClassEntry->numberOfSuperClasses = 0;
			oldClassEntry->superClasses = NULL;
			oldClassEntry->theClass = NULL;

			if(numberOfMethods) {
				oldClassEntry->methods = VPXMALLOC(numberOfMethods,V_Method);
				memset(oldClassEntry->methods,0,numberOfMethods*sizeof(V_Method));
			}
			else oldClassEntry->methods = NULL;

			if(numberOfValues) {
				oldClassEntry->values = VPXMALLOC(numberOfValues,V_ValueNode);
				memset(oldClassEntry->values,0,numberOfValues*sizeof(V_ValueNode));
			}
			else oldClassEntry->values = NULL;


		}
		interpreterResult = kSuccess;
	} else interpreterResult = kFailure;

	return interpreterResult;
}

enum opTrigger attribute_create(V_Environment environment, V_Class tempClass, Int1 *attributeName, Nat4 attributePosition, V_Archive archivePtr, V_Value *tempAttribute)
{
	V_DictionaryNode	tempNode = NULL;
	V_Dictionary		oldDictionary = NULL;
	V_Dictionary		dictionary = NULL;
	V_DictionaryNode	node = NULL;
	Nat4				counter = 0;
	Nat4				columnIndex = 0;
	Int1				*tempName = NULL;

	V_ClassEntry		theClassEntry = NULL;

	tempNode = find_node(tempClass->attributes,attributeName);
	if(tempNode == NULL){
		Int1	*theName = NULL;
		Int1	*persistentName = new_string(tempClass->name,environment);
		theName = new_cat_string(persistentName,"/",environment);
		X_free(persistentName);
		persistentName = new_cat_string(theName,attributeName,environment);
		X_free(theName);
		tempNode = find_node(environment->persistentsTable,persistentName);
		X_free(persistentName);
	}
	
	if(tempNode == NULL){

		oldDictionary = tempClass->attributes;

		*tempAttribute = create_attribute(attributeName,environment);
	
	    if(attributePosition){
			dictionary = (V_Dictionary) X_malloc(sizeof (VPL_Dictionary));
			dictionary->numberOfNodes = oldDictionary->numberOfNodes+1;
			dictionary->nodes = (V_DictionaryNode *) calloc(dictionary->numberOfNodes,sizeof (V_DictionaryNode));

			node = (V_DictionaryNode) X_malloc(sizeof (VPL_DictionaryNode));
			node->name = (*tempAttribute)->objectName;
			node->object = *tempAttribute;
	        
			for(counter = 0;counter < attributePosition - 1;counter++){
				dictionary->nodes[counter] = oldDictionary->nodes[counter];
			}
			dictionary->nodes[counter++] = node;
			for(;counter < dictionary->numberOfNodes;counter++){
				dictionary->nodes[counter] = oldDictionary->nodes[counter-1];
			}

			tempClass->attributes = dictionary;
	
			reorder_instances(environment,oldDictionary,tempClass);
	
			if(oldDictionary != NULL){
				if(oldDictionary->nodes != NULL) X_free(oldDictionary->nodes);
				oldDictionary->nodes = NULL;
				oldDictionary->numberOfNodes = 0;
				X_free(oldDictionary);
				oldDictionary = NULL;
			}
		} else {
			add_node(oldDictionary,(*tempAttribute)->objectName,*tempAttribute);
		}
		
		if(*tempAttribute != NULL){
			(*tempAttribute)->valueArchive = archivePtr;
			if(environment->postLoad == kTRUE) (*tempAttribute)->value = unarchive_object(environment,archivePtr);

			(*tempAttribute)->classIndex = tempClass->classIndex;

			columnIndex = (*tempAttribute)->columnIndex = get_value_index(environment,attributeName);
			
			dictionary = tempClass->attributes;
			theClassEntry = environment->classIndexTable->classes[(*tempAttribute)->classIndex];
			
			for(counter=0;counter<dictionary->numberOfNodes;counter++) {
				tempName = dictionary->nodes[counter]->name;
				columnIndex = get_value_index(environment,tempName);
				X_free(theClassEntry->values[columnIndex]);
				theClassEntry->values[columnIndex] = VPXMALLOC(1,VPL_ValueNode);
				theClassEntry->values[columnIndex]->type = kAttributeNode;
				theClassEntry->values[columnIndex]->attributeOffset = attribute_offset(tempClass,tempName);
				theClassEntry->values[columnIndex]->value = NULL;
				theClassEntry->values[columnIndex]->watchpointList = NULL;
			}

			return kSuccess;
		}else{
			printf("Could not create attribute\n");
			return kSuccess;
		}
	}else{
		return kFailure;
	}
}

enum opTrigger attribute_rename(V_Environment environment, V_Class tempClass, Int1 *oldName, Int1 *provisionalName)
{
	V_DictionaryNode	tempNode = NULL;
	V_Value				tempValue = NULL;
	Int1				*newName = NULL;
	enum opTrigger		interpreterResult = kFailure;
	
	V_Dictionary		tempDictionary = NULL;
	Nat4				counter = 0;
	Nat4				newIndex = -1;
	V_ClassEntry		tempClassEntry = NULL;

	tempNode = find_node(tempClass->attributes,provisionalName);
	if(tempNode == NULL){
		Int1	*tempName = NULL;
		Int1	*persistentName = new_string(tempClass->name,environment);
		tempName = new_cat_string(persistentName,"/",environment);
		X_free(persistentName);
		persistentName = new_cat_string(tempName,provisionalName,environment);
		X_free(tempName);
		tempNode = find_node(environment->persistentsTable,persistentName);
		X_free(persistentName);
	}
	
	if(tempNode == NULL){
		tempDictionary = tempClass->attributes;
		for(counter = 0;counter < tempDictionary->numberOfNodes;counter++){
			tempNode = tempDictionary->nodes[counter];
			if(strcmp(oldName,tempNode->name) == 0) {
				tempValue = (V_Value) tempNode->object;
				X_free(tempValue->objectName);
				newName = new_string(provisionalName,environment);
				tempNode->name = newName;
				tempValue->objectName = newName;

				newIndex = get_value_index(environment,newName);
				tempClassEntry = environment->classIndexTable->classes[tempValue->classIndex];
				X_free(tempClassEntry->values[newIndex]);
				tempClassEntry->values[newIndex] = VPXMALLOC(1,VPL_ValueNode);
				tempClassEntry->values[newIndex]->type = tempClassEntry->values[tempValue->columnIndex]->type;
				tempClassEntry->values[newIndex]->attributeOffset = tempClassEntry->values[tempValue->columnIndex]->attributeOffset;
				tempClassEntry->values[newIndex]->value = tempClassEntry->values[tempValue->columnIndex]->value;
				tempClassEntry->values[newIndex]->watchpointList = tempClassEntry->values[tempValue->columnIndex]->watchpointList;
				X_free(tempClassEntry->values[tempValue->columnIndex]);
				tempClassEntry->values[tempValue->columnIndex] = NULL;
				tempValue->columnIndex = newIndex;

			}
		}
		interpreterResult = kSuccess;
	}else interpreterResult = kFailure;
	
	return interpreterResult;
}

enum opTrigger method_create(V_Environment environment, Int1 *methodName, V_Method *tempMethod)
{
	V_DictionaryNode	tempNode = NULL;

	tempNode = find_node(environment->universalsTable,methodName);
	
	if(tempNode == NULL){
		*tempMethod = method_new(methodName,environment);
		if(*tempMethod != NULL){
			return kSuccess;
		}else{
			printf("Could not create method\n");
			return kSuccess;
		}
	}else{
		return kFailure;
	}
}

enum opTrigger method_remove(V_Environment environment, V_Method tempMethod)
{
	V_ClassEntry theClassEntry = environment->classIndexTable->classes[tempMethod->classIndex];
	theClassEntry->methods[tempMethod->columnIndex] = NULL;

	method_type_to(tempMethod,environment,NULL);
	remove_node(environment->universalsTable,tempMethod->objectName);

	destroy_method(environment,tempMethod);

	return kSuccess;
}

enum opTrigger method_set(V_Environment environment, V_Method tempMethod, Int1 *textValue)
{

	if(tempMethod){
		method_type_to(tempMethod,environment,textValue);
		return kSuccess;
	}else{
		printf("NULL class in class set\n");
		return kSuccess;
	}
}

enum opTrigger method_rename(V_Environment environment, Int1 *oldName, Int1 *provisionalName)
{
	V_DictionaryNode	tempNode = NULL;
	V_Method			tempMethod = NULL;
	Int1				*newName = NULL;
	enum opTrigger		interpreterResult = kFailure;
	
	Nat4				newIndex = -1;
	V_ClassEntry		tempClassEntry = NULL;

	Nat4				slashPosition = 0;
	Int1				*name = provisionalName;
	Int1*				methodName = NULL;

	tempNode = find_node(environment->universalsTable,provisionalName);
	
	if(tempNode == NULL){
		tempNode = find_node(environment->universalsTable,oldName);
		if(tempNode != NULL){
			tempMethod = (V_Method) tempNode->object;
			X_free(tempMethod->objectName);
			newName = new_string(provisionalName,environment);
			tempNode->name = newName;
			tempMethod->objectName = newName;
			sort_dictionary(environment->universalsTable);
			
		slashPosition = strcspn(name,"/");
		if(slashPosition == strlen(name)){
			methodName = name;
		} else if(name[0] == '/') {
			name = name + 1;
			if(name[0] == '/') name = name + 1;
			methodName = name;
		} else {
			methodName = name+slashPosition+1;
		}

			newIndex = get_method_index(environment,methodName);
			tempClassEntry = environment->classIndexTable->classes[tempMethod->classIndex];
			tempClassEntry->methods[newIndex] = tempClassEntry->methods[tempMethod->columnIndex];
			tempClassEntry->methods[tempMethod->columnIndex] = NULL;
			if(tempClassEntry->constructorIndex == tempMethod->columnIndex) tempClassEntry->constructorIndex = newIndex;
			if(tempClassEntry->destructorIndex == tempMethod->columnIndex) tempClassEntry->destructorIndex = newIndex;
			tempMethod->columnIndex = newIndex;

		}
		interpreterResult = kSuccess;
	}else interpreterResult = kFailure;

	return interpreterResult;
}

enum opTrigger case_create(V_Environment environment, V_Method tempMethod, Nat4 casePosition, Nat4 editorCase, V_Case *tempCase)
{
	*tempCase = case_insert(casePosition,tempMethod,environment);
	
	if(*tempCase != NULL){
		(*tempCase)->vplCase = editorCase; /* ToDo: Set to editorCase here */
		return kSuccess;
	}else{
		printf("Could not create case\n");
		return kSuccess;
	}
}

enum opTrigger operation_create(V_Environment environment, V_Case tempCase, Nat4 operationPosition, Nat4 editorOperation, V_Operation *tempOperation)
{
	V_Operation	*tempOperationsList = NULL;
	Nat4		counter = 0;


	if(operationPosition == 0) *tempOperation = operation_add(tempCase,environment);
	else{
		tempOperationsList = (V_Operation *) calloc(tempCase->numberOfOperations+1,sizeof (V_Operation));
		for(counter = 0; counter < operationPosition - 1; counter++)
		{
			tempOperationsList[counter] = tempCase->operationsList[counter];
		}
		*tempOperation = create_operation(counter,tempCase);
		tempOperationsList[counter] = *tempOperation;
		for(; counter < tempCase->numberOfOperations; counter++)
		{
			tempOperationsList[counter+1] = tempCase->operationsList[counter];
		}

		if(tempCase->operationsList != NULL) X_free(tempCase->operationsList);
		tempCase->operationsList = tempOperationsList;
		tempCase->numberOfOperations++;
	}

	if(*tempOperation != NULL){
		(*tempOperation)->vplOperation = editorOperation; /* ToDo: Set to editorCase here */
		return kSuccess;
	}else{
		printf("Could not create operation\n");
		return kSuccess;
	}

}

Nat4 *operation_destroy(V_Environment environment, V_Operation tempOperation, Nat4 *blockSizePtr)
{
	V_Stack	currentStack = environment->stack;
	Nat4	*theBlock;
	Nat4	blockSize = 0;
	
	while(currentStack) {
		Nat4		counter = 0;
		Nat4		numberOfFrames = 0;
		V_Frame		tempFrame = NULL;
		V_Operation	currentOperation = NULL;
		Nat4		currentOperationOffset = 0;
		V_Frame 	currentFrame = currentStack->currentFrame;

		while(currentFrame) {
			counter++;
			if(currentFrame->operation == tempOperation) numberOfFrames = counter;
			currentFrame = currentFrame->previousFrame;
		}
				
		if(numberOfFrames){
			if(numberOfFrames - 1){
				if(blockSize == 0) {
					theBlock = (Nat4 *) X_malloc((numberOfFrames-1)*sizeof(Nat4));
				} else {
					theBlock = VPXREALLOC(theBlock,blockSize + (numberOfFrames-1),Nat4);
				}
				for(counter = blockSize;counter<blockSize + (numberOfFrames-1);counter++){
					tempFrame = currentStack->currentFrame;
					*(theBlock+counter) = tempFrame->vplEditor;
					currentStack->currentFrame = tempFrame->previousFrame;
					X_destroy_frame(environment,tempFrame);
				}
				blockSize += (numberOfFrames-1);
			}
			currentFrame = currentStack->currentFrame;
			currentOperationOffset = 0;
			while(currentFrame->frameCase->operationsList[currentOperationOffset++] != tempOperation) {}

			for(counter = 0; counter < tempOperation->outarity; counter++) {
				V_RootNode	theRootNode = X_get_root_node(currentFrame,tempOperation->outputList[counter]);
				if(theRootNode){
					V_RootNode	previous = theRootNode->previousNode;
					V_RootNode	next = theRootNode->nextNode;
					if(next) next->previousNode = previous;
					if(previous) previous->nextNode = next;
					if(currentFrame->roots == theRootNode) currentFrame->roots = previous;
					decrement_count(environment,theRootNode->object);
					X_free(theRootNode);
				}
			}

			currentOperation = currentFrame->frameCase->operationsList[currentOperationOffset];
			currentFrame->operation = currentOperation;
			currentFrame->methodSuccess = kNoAction;
			currentFrame->caseCounter = 0;
			currentFrame->repeatFlag = currentOperation->repeat;
			currentFrame->repeatCounter = 0;
		}

		currentStack = currentStack->nextStack;
	}
	
	*blockSizePtr = blockSize;
	
	destroy_operation(environment,tempOperation);
	return theBlock;
}

enum opTrigger operation_set(V_Environment environment,V_Operation tempOperation,Nat4 theType,Nat4 operationControl,Nat4 theAction,Nat4 operationRepeat,Int1 *operationText,Nat4 operationInject,Nat4 operationSuper,Nat4 operationBreak,Nat4 operationValue)
{
	V_ExtConstant	extConstant = NULL;

	tempOperation->type = theType;
	tempOperation->trigger = operationControl;
	tempOperation->action = theAction;
	tempOperation->repeat = operationRepeat;
	tempOperation->callSuper = operationSuper;
	tempOperation->breakPoint = operationBreak;
	tempOperation->valueType = operationValue;

/* Reset fields used in execution */
	tempOperation->functionPtr = NULL;
	tempOperation->classIndex = 0;
	tempOperation->columnIndex = 0;

	switch(theType){
		case kInputBar:
		case kOutputBar:
			break;

		case kConstant:
		case kMatch:
			X_free(tempOperation->objectName);
			tempOperation->objectName = new_string(operationText,environment);
			decrement_count(environment,tempOperation->object);
			tempOperation->object = string_to_object(operationText,environment);
			break;

		case kExtMatch:
		case kExtConstant:
			tempOperation->objectName = new_string(operationText,environment);
			extConstant =  get_extConstant(environment->externalConstantsTable,operationText);
			if(extConstant) {
				decrement_count(environment,tempOperation->object);
				if(extConstant->defineString != NULL) tempOperation->object = string_to_object(extConstant->defineString,environment);
				else tempOperation->object = (V_Object)int_to_integer(extConstant->enumInteger,environment);
			}
			break;

		case kUniversal:
			tempOperation->inject = operationInject;
			X_free(tempOperation->objectName);
			tempOperation->objectName = new_string(operationText,NULL);
			install_universal_indices((V_Value) tempOperation,environment,operationText);
			break;

		case kPersistent:
			tempOperation->inject = operationInject;
			X_free(tempOperation->objectName);
			tempOperation->objectName = new_string(operationText,NULL);
			install_persistent_indices((V_Value) tempOperation,environment,operationText);
			break;

		case kGet:
		case kSet:
			tempOperation->inject = operationInject;
			X_free(tempOperation->objectName);
			tempOperation->objectName = new_string(operationText,NULL);
			install_getset_indices((V_Value) tempOperation,environment,operationText);
			break;

		case kInstantiate:
			tempOperation->inject = operationInject;
			X_free(tempOperation->objectName);
			tempOperation->objectName = new_string(operationText,NULL);
			if(tempOperation->objectName) tempOperation->classIndex = VPL_get_class_index(environment,tempOperation->objectName,kFALSE);
			else tempOperation->classIndex = 0;
			break;

		case kLocal:
		case kExtSet:
		case kExtGet:
		case kExtProcedure:
		case kPrimitive:
		case kEvaluate:
			tempOperation->inject = operationInject;
			X_free(tempOperation->objectName);
			tempOperation->objectName = new_string(operationText,NULL);
			break;
			
	}
	return kSuccess;
}

enum opTrigger root_create(V_Environment environment, V_Operation tempOperation, Nat4 rootPosition, V_Root *tempRoot)
{

	*tempRoot = output_insert(rootPosition,tempOperation,environment);
	
	if(*tempRoot != NULL){
		return kSuccess;
	}else{
		printf("Could not create root\n");
		return kSuccess;
	}

}

enum opTrigger terminal_create(V_Environment environment, V_Operation tempOperation, Nat4 terminalPosition, V_Terminal *tempTerminal)
{

	*tempTerminal = input_insert(terminalPosition,tempOperation,environment);
	
	if(*tempTerminal != NULL){
		return kSuccess;
	}else{
		printf("Could not create terminal\n");
		return kSuccess;
	}

}

enum opTrigger terminal_set(V_Environment environment, V_Terminal tempTerminal, Nat4 theMode, V_Root tempRoot, Nat4 rootIndex, Nat4	rootOperation,V_Root tempLoopRoot,Nat4 loopRootIndex);
enum opTrigger terminal_set(V_Environment environment, V_Terminal tempTerminal, Nat4 theMode, V_Root tempRoot, Nat4 rootIndex, Nat4	rootOperation,V_Root tempLoopRoot,Nat4 loopRootIndex)
{
#pragma unused(environment)

	if(tempTerminal != NULL){
		tempTerminal->mode = theMode;
		if(tempLoopRoot != NULL){
			tempTerminal->loopRoot = tempLoopRoot;
			tempTerminal->mode = iLoop;
			tempTerminal->loopRootIndex = loopRootIndex;
		} else {
			tempTerminal->loopRoot = NULL;
			tempTerminal->loopRootIndex = 0;
		}
		if(tempRoot != NULL){
			tempTerminal->root = tempRoot;
			tempTerminal->rootIndex = rootIndex;
			tempTerminal->rootOperation = rootOperation;
		} else {
			tempTerminal->root = NULL;
			tempTerminal->rootIndex = 0;
			tempTerminal->rootOperation = 0;
		}
	}
	return kSuccess;
}

enum opTrigger persistent_create(V_Environment environment, Int1 *persistentName, V_Archive archivePtr, V_Value *tempPersistent)
{
	V_DictionaryNode	tempNode = NULL;
	Nat4				classIndex = vpx_get_class_index(environment,persistentName);

	tempNode = find_node(environment->persistentsTable,persistentName);
	if(tempNode == NULL && classIndex != 0){
		V_Class	tempClass = environment->classIndexTable->classes[classIndex]->theClass;
		tempNode = find_node(tempClass->attributes,vpx_get_column_name(environment,persistentName));
	}
	
	if(tempNode == NULL){
		*tempPersistent = create_persistentNode(persistentName,NULL,environment);
		if(*tempPersistent != NULL){
			(*tempPersistent)->valueArchive = archivePtr;
			if(environment->postLoad == kTRUE) persistent_unarchive(*tempPersistent,environment);
			add_node(environment->persistentsTable,(*tempPersistent)->objectName,*tempPersistent);
			return kSuccess;
		}else{
			printf("Could not create persistent\n");
			return kSuccess;
		}
	}else{
		return kFailure;
	}
}

enum opTrigger persistent_remove(V_Environment environment, Int1 *persistentName)
{
	V_Value	tempPersistent = get_persistentNode(environment->persistentsTable,persistentName);

	remove_node(environment->persistentsTable,persistentName);

	destroy_persistentNode(tempPersistent,environment);

	return kSuccess;
}

enum opTrigger persistent_rename(V_Environment environment, Int1 *oldName, Int1 *provisionalName)
{
	V_DictionaryNode	tempNode = NULL;
	V_Value				tempValue = NULL;
	Int1				*newName = NULL;
	enum opTrigger		interpreterResult = kFailure;
	
	Nat4				newIndex = -1;
	V_ClassEntry		tempClassEntry = NULL;

	Nat4				slashPosition = 0;
	Int1				*name = provisionalName;
	Int1*				valueName = NULL;
	Nat4				classIndex = vpx_get_class_index(environment,provisionalName);

	tempNode = find_node(environment->persistentsTable,provisionalName);
	if(tempNode == NULL && classIndex != 0){
		V_Class	tempClass = environment->classIndexTable->classes[classIndex]->theClass;
		tempNode = find_node(tempClass->attributes,vpx_get_column_name(environment,provisionalName));
	}
	
	if(tempNode == NULL){
		tempNode = find_node(environment->persistentsTable,oldName);
		if(tempNode != NULL){
			tempValue = (V_Value) tempNode->object;
			X_free(tempValue->objectName);
			newName = new_string(provisionalName,environment);
			tempNode->name = newName;
			tempValue->objectName = newName;
			sort_dictionary(environment->persistentsTable);

		slashPosition = strcspn(name,"/");
		if(slashPosition == strlen(name)){
			valueName = name;
		} else {
			valueName = name+slashPosition+1;
		}

			newIndex = get_value_index(environment,valueName);
			tempClassEntry = environment->classIndexTable->classes[tempValue->classIndex];
			X_free(tempClassEntry->values[newIndex]);
			tempClassEntry->values[newIndex] = VPXMALLOC(1,VPL_ValueNode);
			tempClassEntry->values[newIndex]->type = tempClassEntry->values[tempValue->columnIndex]->type;
			tempClassEntry->values[newIndex]->attributeOffset = tempClassEntry->values[tempValue->columnIndex]->attributeOffset;
			tempClassEntry->values[newIndex]->value = tempClassEntry->values[tempValue->columnIndex]->value;
			tempClassEntry->values[newIndex]->watchpointList = tempClassEntry->values[tempValue->columnIndex]->watchpointList;
			X_free(tempClassEntry->values[tempValue->columnIndex]);
			tempClassEntry->values[tempValue->columnIndex] = NULL;
			tempValue->columnIndex = newIndex;

		}
		interpreterResult = kSuccess;
	}else interpreterResult = kFailure;

	return interpreterResult;
}

OSErr FindApplicationPackageDirectory(short *theVRefNum, long *theParID)
{
	OSErr theErr;
	ProcessSerialNumber thePSN;
	ProcessInfoRec theInfo;
	FSSpec theSpec;
	
	thePSN.highLongOfPSN = 0;
	thePSN.lowLongOfPSN = kCurrentProcess;
	
	theInfo.processInfoLength = sizeof(theInfo);
	theInfo.processName = NULL;
	theInfo.processAppSpec = &theSpec;
	
	/* Find the application FSSpec */
	theErr = GetProcessInformation(&thePSN, &theInfo);
	
	/* Find the "Contents" (the parent of the "MacOS" directory) */
	if (theErr == noErr)
		theErr = FSMakeFSSpec(theSpec.vRefNum, theSpec.parID, "\p", &theSpec);
	
	/* Find the parent Bundle folder (the parent of the "Contents" directory) */
	if (theErr == noErr)
		theErr = FSMakeFSSpec(theSpec.vRefNum, theSpec.parID, "\p", &theSpec);
	
	/* Find the parent of the Bundle folder */
	if (theErr == noErr)
		theErr = FSMakeFSSpec(theSpec.vRefNum, theSpec.parID, "\p", &theSpec);
	
	if (theErr == noErr)
	{
		/* Return the folder which contains the application package */
		*theVRefNum = theSpec.vRefNum;
		*theParID = theSpec.parID;
	}
	
	return theErr;
}

enum opTrigger stack_create(V_Environment environment, Int1* theMethod, V_List inputList,V_Stack *stack,V_List *outputList)
{
	V_Object	theInstance = NULL;
	Int1		*methodName = NULL;
	Nat4		inarity = 0;
	Nat4		numberOfOperations = 0;
	Nat4		numberOfOutputs = 0;
	Nat4		numberOfInputs = 0;
	V_Case		shellCase = NULL;
	V_Object	tempObject = NULL;
	Nat4		counter = 0;
	V_List		tempList = NULL;
	V_Case		*initialCases = NULL;

	if(inputList && inputList->objectList) theInstance = (V_Object) ((V_Integer)inputList->objectList[0])->value;
	methodName = X_operation_name_instance(environment,theMethod, theInstance);
	if(!methodName) return kFailure;
	if(inputList) numberOfInputs = inputList->listLength;
	initialCases = X_obtain_cases_by_name(environment,environment->universalsTable,methodName,numberOfInputs,numberOfOutputs);
	if(!initialCases) return kFailure;
	inarity = initialCases[0]->operationsList[0]->outarity;
	numberOfOperations = initialCases[0]->numberOfOperations;
	numberOfOutputs = initialCases[0]->operationsList[numberOfOperations-1]->inarity;
	*stack = createStack();
	*outputList = create_list(numberOfOutputs,environment);

	X_free(methodName);

	addStack(environment,*stack);

	tempList = clone_list(0,0,inputList,inarity,environment);

	for(counter=0;counter<tempList->listLength;counter++){
		tempObject = tempList->objectList[counter];
		if( tempObject != NULL) {
			if(tempObject->type != kInteger) {
				record_error("initialize-stack: List element type not integer!",NULL,kWRONGINPUTTYPE,environment);
				tempObject = NULL;
			} else tempObject = (V_Object) ((V_Integer) tempObject)->value;
		}
		put_nth(environment,tempList,counter+1,tempObject);
	}
		
	shellCase = X_create_shell_case_for_universal(environment,theMethod,tempList,*outputList);
				
	(*stack)->currentFrame = X_create_frame(environment,*stack,shellCase,tempList,*outputList,NULL,0);
	increment_count((V_Object) *outputList);	/* "Pre-increment" to avoid garbage collection */

	return kSuccess;
}

OSErr CreateBundleFromFSSpec(FSSpec *theSpec, CFBundleRef *theBundle)
{
	OSErr theErr;
	FSRef theRef;
	CFURLRef theBundleURL;
	
	/* Turn the FSSpec pointing to the Bundle into a FSRef */
	theErr = FSpMakeFSRef(theSpec, &theRef);
	
	/* Turn the FSRef into a CFURL */
	theBundleURL = CFURLCreateFromFSRef(kCFAllocatorSystemDefault, &theRef);
	
	if (theBundleURL != NULL)
	{
		/* Turn the CFURL into a bundle reference */
		*theBundle = CFBundleCreate(kCFAllocatorSystemDefault, theBundleURL);
		
		CFRelease(theBundleURL);
	}
	
	return theErr;
}

enum opTrigger environment_load_bundles(V_Environment environment, FSSpec *fsspec, Int1 *newString)
{
    // Typedef for the function pointer.
    typedef Nat4 (*LoadPrimitiveFunctionPtr)(V_Environment); 

    // Function pointer.
    LoadPrimitiveFunctionPtr loadPrimitive = NULL;

    // Flag that indicates the status returned when 
    //  attempting to load a bundleÕs executable code.
    Boolean didLoad = false;
	
    // Value returned from the loaded function.
    long result;

    CFBundleRef myBundle = NULL;
    
	CFStringRef	tempCFString;

    result = CreateBundleFromFSSpec(fsspec, &myBundle);

    // Try to load the executable from my bundle.
    if(myBundle) didLoad = CFBundleLoadExecutable( myBundle );
    else printf("Could not create bundle from FSSpec\n");

    // If the code was successfully loaded, look for our function.
    if (didLoad) {
        // Now that the code is loaded, search for 
        // the function we want by name.

		tempCFString = CFBundleGetValueForInfoDictionaryKey( myBundle, CFSTR("MartenLoadFunction") );
        if( tempCFString == NULL ) tempCFString = CFStringCreateWithCString(NULL,newString,kCFStringEncodingUTF8);

        if(tempCFString) loadPrimitive = (void*)CFBundleGetFunctionPointerForName(myBundle, tempCFString );
//    	else printf("Could not create CFString from C string\n");
    	
        // If our function was found in the loaded code, 
        // call it.
        if (loadPrimitive) {
            result = loadPrimitive ( environment );
            sort_dictionaries(environment);
        }
//    	else printf("Could not get function pointer for name\n");

        
        // Unload the bundleÕs executable code. 
//        CFBundleUnloadExecutable( myBundle );
        if(tempCFString) CFRelease(tempCFString);
    }
	else printf("Could not load executable from bundle\n");


    // Any CF objects returned from functions with "create" or 
    // "copy" in their names must be released by us!
//    if(myBundle) CFRelease( myBundle );
	return kSuccess;
}

OSErr CreateBundleFromFilePath(vpl_StringPtr thePath, CFBundleRef *theBundle)
{
	OSErr theErr;
	CFURLRef theBundleURL;
		
	/* Turn the file path into a CFURL */
	theBundleURL = CFURLCreateFromFileSystemRepresentation(kCFAllocatorSystemDefault, (UInt8*)thePath, strlen(thePath), TRUE);
	
	if (theBundleURL != NULL)
	{
		/* Turn the CFURL into a bundle reference */
		*theBundle = CFBundleCreate(kCFAllocatorSystemDefault, theBundleURL);
		
		CFRelease(theBundleURL);
	}
	
	return theErr;
}

enum opTrigger environment_load_bundles_path(V_Environment environment, Int1 *filePath, Int1 *newString)
{
    // Typedef for the function pointer.
    typedef Nat4 (*LoadPrimitiveFunctionPtr)(V_Environment); 

    // Function pointer.
    LoadPrimitiveFunctionPtr loadPrimitive = NULL;

    // Flag that indicates the status returned when 
    //  attempting to load a bundleÕs executable code.
    Boolean didLoad = false;
	
    // Value returned from the loaded function.
    long result;

    CFBundleRef myBundle = NULL;
    
	CFStringRef	tempCFString;

    result = CreateBundleFromFilePath(filePath, &myBundle);

    // Try to load the executable from my bundle.
    if(myBundle) didLoad = CFBundleLoadExecutable( myBundle );
    else printf("Could not create bundle from file path: %s\n", filePath);

    // If the code was successfully loaded, look for our function.
    if (didLoad) {
        // Now that the code is loaded, search for 
        // the function we want by name.

		tempCFString = CFBundleGetValueForInfoDictionaryKey( myBundle, CFSTR("MartenLoadFunction") );
        if( tempCFString == NULL ) tempCFString = CFStringCreateWithCString(NULL,newString,kCFStringEncodingUTF8);

        if(tempCFString) loadPrimitive = (void*)CFBundleGetFunctionPointerForName(myBundle, tempCFString );
//    	else printf("Could not create CFString from C string\n");
    	
        // If our function was found in the loaded code, 
        // call it.
        if (loadPrimitive) {
            result = loadPrimitive ( environment );
            sort_dictionaries(environment);
        }
    	else printf("Interpreter could not get function pointer for symbol: %s\n", newString);

        
        // Unload the bundleÕs executable code. 
//        CFBundleUnloadExecutable( myBundle );
        if(tempCFString) CFRelease(tempCFString);
    }
	else printf("Could not load executable from bundle\n");


    // Any CF objects returned from functions with "create" or 
    // "copy" in their names must be released by us!
//    if(myBundle) CFRelease( myBundle );
	return kSuccess;
}

Nat4 user_cancel(void)
{
	return (Nat4)CheckEventQueueForUserCancel();
}

/*
	KeyMap		myKeyMap;
	short		byteIndex = 0;
	short		keyCode = 0;
	char		theByte;
	char		theBit;
	char		theAnd;
	char		*thePointer = NULL;
	short		theCommandKey = 55;
	short		thePeriodKey = 47;
	
	GetKeys(myKeyMap);
	if(myKeyMap[1] == 8421376) return kTRUE;
	byteIndex = theCommandKey >> 3;
	thePointer = (char *)&myKeyMap[0];
	theByte = *(char *)(thePointer + byteIndex);
	theBit = 1L<<(keyCode&7);
	theAnd = theByte & theBit;
	if(theAnd != 0){
		byteIndex = thePeriodKey >> 3;
		thePointer = (char *)&myKeyMap[0];
		theByte = *(char *)(thePointer + byteIndex);
		theBit = 1L<<(keyCode&7);
		theAnd = theByte & theBit;
		if(theAnd != 0){
			return kTRUE;
		}else
			return kFALSE;
	}else
		return kFALSE;
*/

Nat4 stack_advance(V_Environment environment, V_Stack stack)
{
	Int4	result = kHalt;
	
	while(stack->currentFrame) {
					
		if(stack->currentFrame->operation){

		/* Here we check for halt conditions - pre execution of a block */

			if(stack->currentFrame->caseCounter == 0 && (stack->currentFrame->methodSuccess || stack->currentFrame->repeatCounter)){
				stack->currentFrame->stopNext = stack->currentFrame->stopNow;	// If in initial case and about to reenter local or method
				stack->currentFrame->stopNow = kFALSE;							// reset stopNext to previous value and stopNow to FALSE
			} else if(stack->currentFrame->stopNow == kTRUE) {
				stack->currentFrame->stopNow = kFALSE;
				return kFALSE;
			}
			if(user_cancel()) return kFALSE;		/* MacOS X Specific */
		}

//		result = X_call_operation(environment,stack);							// No Exception handling
		signalJump = kTRUE;
		if(sigsetjmp(jumpBuffer, TRUE) == 0) result = X_call_operation(environment,stack);
		else {
			Int1		*operationName = NULL;
			
			operationName = X_operation_name(environment,stack->currentFrame);
			if( signalName == NULL ) signalName = new_string( "Unknown Signal", environment );
			record_fault(environment,kSignalInterrupt,signalName,"NULL",operationName,stack->currentFrame->methodName);
			X_free(operationName);
			if( signalName != NULL ) X_free( signalName );
			signalName = NULL;
			return kFALSE;
		}
		signalJump = kFALSE;
		
		if(result == kHalt) return kFALSE;
		
		/* Here we check for the "finished" condition */

		if(!stack->currentFrame) return kTRUE;

		result = X_perform_action(environment,stack,result);
		if(result == kFALSE) return kFALSE;


		if(stack->currentFrame && !stack->currentFrame->operation && stack->currentFrame->vplEditor) {
			return kFALSE;
		}

		if(stack->currentFrame && stack->currentFrame->caseCounter == 0) {	//Only stop at the next operation, not reentering local or method
			stack->currentFrame->stopNow = stack->currentFrame->stopNext;
			stack->currentFrame->stopNext = kFALSE;
		}

		/* Must stop at breakpoints and set breakpoint at next operation if "Stop Next" is enabled */

		if(	environment->stopNext == kTRUE){
			if(stack->currentFrame && stack->currentFrame->frameCase->vplCase) {
				if(stack->currentFrame->operation){
					stack->currentFrame->stopNow = kTRUE;
				} else {
					return kFALSE;
				}				
				environment->stopNext = kFALSE;
			}
		}
	}
	return kTRUE;
}

#pragma mark --------- Interrupt Handler ---------

/*
void pr_mask(const char *string);
void pr_mask(const char *string)
{
	sigset_t	sigset;
	int			errno_save;
	
	errno_save = errno;
	if(sigprocmask(0,NULL,&sigset) < 0)
		err_sys(("sigmask error");
		
	printf("%s",string);
	if(sigismember(&sigset,SIGABRT)) printf("SIGABRT ");
	if(sigismember(&sigset,SIGFPE)) printf("SIGFPE ");
	if(sigismember(&sigset,SIGINT)) printf("SIGINT ");
	if(sigismember(&sigset,SIGILL)) printf("SIGILL ");
	if(sigismember(&sigset,SIGSEGV)) printf("SIGSEGV ");
	
	printf("\n");
	errno = errno_save;
}
*/

static void interrupt_handler(int signo);
static void interrupt_handler(int signo){

	Boolean	doExit	= TRUE;

	if( signalName != NULL ) X_free( signalName );
	signalName = NULL;
	signalName = VPXMALLOC( 128, Int1 );
	if( signalName != NULL ) {
		sprintf( signalName, "%s (#%u): %s", signalCodes[signo-1], signo, signalNames[signo-1] );
		VPLLogEngineError( signalName, signalJump, NULL );
	}
	
	switch(signo) {
		case SIGTERM:
		case SIGKILL:
		case SIGALRM:
		case SIGXCPU:
		case SIGXFSZ:
		case SIGVTALRM:
		case SIGPROF:
			break;
		
		case SIGURG:
		case SIGCONT:
		case SIGCHLD:
		case SIGIO:
		case SIGWINCH:
		case SIGINFO:
			doExit = FALSE;
			break;
		
		default:
			if( signalJump == kTRUE ) {
				signalJump = kFALSE;
				siglongjmp(jumpBuffer,1);
			}
			break;
	}
	
	if( signalName != NULL ) { 
		X_free( signalName ); 
		signalName = NULL;
	}
	
	if( doExit ) exit(0);
	return;
}

#pragma mark --------- Callback Handler ---------

#if __i386__
void InterpreterCallbackHandler(void)
{
	long register result;
	long register stackPointer;
	asm( "movl %%edx,%0" : "=r" (result) : /* No inputs */ );	// Get the structure block
	asm( "movl %%ebp,%0" : "=r" (stackPointer) : /* No inputs */ );	// Get the stack pointer

	Nat4 counter = 0;
	Nat4 inputCounter = 0;
	V_CallbackCodeSegment currentSegment = NULL;
	V_Environment theEnvironment = NULL;
	
	V_List				inputList = NULL;
	V_List				parameterList = NULL;
	V_List				outputList = NULL;
	V_ExternalBlock		outputBlock = NULL;
	V_Object			block = NULL;
	V_List				varagList = NULL;
	V_ExternalBlock		externalBlock = NULL;

	V_ExtProcedure	tempProcedure = NULL;
	V_Parameter		tempParameter = NULL;
	Nat4			procedureInarity = 0;
	Nat4			theParameterType = 0;

	register long tempInt = 0;

	Nat4 gprCounter = 0;
	Nat4 varargCounter = 0;
	
	Nat4 parameterArea[PARAMETERAREASIZE];
	void *tempPointer = NULL;
	VPL_Input	tempInput;

	Int4	(*spawnPtr)(V_Environment,char *,V_List , V_List ,Int4 *);

	currentSegment = (V_CallbackCodeSegment) result;
	tempProcedure = currentSegment->callbackFunction;
	theEnvironment = currentSegment->theEnvironment;
	stackPointer = *((Nat4 *)stackPointer);
	stackPointer += 8;	//Calling through the code segment has subtracted 12 bytes from the original stack pointer
	
	for(varargCounter = 0; varargCounter < PARAMETERAREASIZE; varargCounter++) parameterArea[varargCounter] = 0;
	
	if(strcmp(tempProcedure->name,"IMP") == 0){
		id					tempObjcObject = *(id *) stackPointer;
		Class				tempClass = NULL;
		Method				*tempMethodList = NULL;
		unsigned int		count = 0;
		Nat4				parameterCounter = 0;
		Nat4				numberOfParameters = 0;
		Method				tempMethod = NULL;
		IMP					tempIMP = NULL;
		
		tempClass = object_getClass(tempObjcObject);
		
		while(tempClass != NULL) {
			tempMethodList = class_copyMethodList(tempClass, &count);
			for(counter = 0; counter < count; counter++){
				tempMethod = tempMethodList[counter];
				tempIMP = method_getImplementation(tempMethod);
			
				if(tempIMP == (IMP) currentSegment ) break;
				tempMethod = NULL;
			}
			if(tempMethodList) free(tempMethodList);
			if(tempIMP == (IMP) currentSegment ) break;
			tempClass = class_getSuperclass(tempClass);
		}

		if(tempMethod != NULL) {
			V_ExtProcedure effectiveProcedure = NULL;
			
			effectiveProcedure = create_extProcedure(tempProcedure->name);
			numberOfParameters = method_getNumberOfArguments(tempMethod);
		
			for(parameterCounter = 0; parameterCounter < numberOfParameters; parameterCounter++){
//				Nat4 size = 0;
//				Int1 *name = NULL;
//				Nat4 indirection = 0;
//				Nat4 constantFlag = 0;
//				Nat4 theParameterType = 0;
			
				char tempCode = 0;
				char *theCode = NULL;
			
				theCode = method_copyArgumentType(tempMethod,parameterCounter);
				tempCode = theCode[0];
				if(tempCode == 'r' || tempCode == 'R' || tempCode == 'n' || tempCode == 'N' || tempCode == 'o' || tempCode == 'O'
				   || tempCode == 'V') tempCode = theCode[1];

/*
				if(tempCode == 'c') theParameterType = kCharType;
				else if(tempCode == 'i') theParameterType = kIntType;
				else if(tempCode == 's') theParameterType = kShortType;
				else if(tempCode == 'l') theParameterType = kLongType;
				else if(tempCode == 'q') theParameterType = kLongLongType;
				else if(tempCode == 'C') theParameterType = kUnsignedCharType;
				else if(tempCode == 'I') theParameterType = kUnsignedIntType;
				else if(tempCode == 'S') theParameterType = kUnsignedShortType;
				else if(tempCode == 'L') theParameterType = kUnsignedLongType;
				else if(tempCode == 'Q') theParameterType = kUnsignedLongLongType;
				else if(tempCode == 'f') theParameterType = kFloatType;
				else if(tempCode == 'd') theParameterType = kDoubleType;
				else if(tempCode == 'B') theParameterType = kBoolType;
				else if(tempCode == 'v') theParameterType = kVoidType;
				else if(tempCode == '*') theParameterType = kCharStringType;
				else if(tempCode == '@') theParameterType = kObjectType;
				else if(tempCode == '#') theParameterType = kClassType;
				else if(tempCode == ':') theParameterType = kSelectorType;
				else if(tempCode == '{') theParameterType = kStructureType;
				else if(tempCode == '^') theParameterType = kPointerType;
*/				
				switch (tempCode) {
					case 'c':
						extProcedure_add_parameter(effectiveProcedure,kCharType,1,NULL,0,0);
						break;
					case 'i':
						extProcedure_add_parameter(effectiveProcedure,kIntType,4,NULL,0,0);
						break;
					case 's':
						extProcedure_add_parameter(effectiveProcedure,kShortType,2,NULL,0,0);
						break;
					case 'l':
						extProcedure_add_parameter(effectiveProcedure,kLongType,4,NULL,0,0);
						break;
					case 'q':
						extProcedure_add_parameter(effectiveProcedure,kLongType,8,NULL,0,0);
						break;
					case 'C':
						extProcedure_add_parameter(effectiveProcedure,kUnsignedType,4,NULL,0,0);
						break;
					case 'I':
						extProcedure_add_parameter(effectiveProcedure,kUnsignedType,4,NULL,0,0);
						break;
					case 'S':
						extProcedure_add_parameter(effectiveProcedure,kUnsignedType,4,NULL,0,0);
						break;
					case 'L':
						extProcedure_add_parameter(effectiveProcedure,kUnsignedType,4,NULL,0,0);
						break;
					case 'Q':
						extProcedure_add_parameter(effectiveProcedure,kUnsignedType,4,NULL,0,0);
						break;
					case 'f':
						extProcedure_add_parameter(effectiveProcedure,kFloatType,4,NULL,0,0);
						break;
					case 'd':
						extProcedure_add_parameter(effectiveProcedure,kDoubleType,8,NULL,0,0);
						break;
					case 'B':
						extProcedure_add_parameter(effectiveProcedure,kIntType,4,NULL,0,0);
						break;
					case 'v':
						extProcedure_add_parameter(effectiveProcedure,kVoidType,4,NULL,0,0);
						break;
					case '*':
						extProcedure_add_parameter(effectiveProcedure,kPointerType,4,"char",1,0);
						break;
					case '@':
						extProcedure_add_parameter(effectiveProcedure,kPointerType,4,"objc_object",1,0);
						break;
					case '#':
						extProcedure_add_parameter(effectiveProcedure,kPointerType,4,"objc_class",1,0);
						break;
					case ':':
						extProcedure_add_parameter(effectiveProcedure,kPointerType,4,"objc_selector",1,0);
						break;
					case '{':
						extProcedure_add_parameter(effectiveProcedure,kStructureType,8,NULL,0,0);
						break;
					case '^':
						extProcedure_add_parameter(effectiveProcedure,kPointerType,4,"void",0,0);
						break;
					default:
						break;
				}
			
				free(theCode);
			}
			{				
				char tempCode = 0;
				char *theCode = NULL;
				
				theCode = method_copyReturnType(tempMethod);
				tempCode = theCode[0];
				if(tempCode == 'r' || tempCode == 'R' || tempCode == 'n' || tempCode == 'N' || tempCode == 'o' || tempCode == 'O'
				   || tempCode == 'V') tempCode = theCode[1];
				
				/*
				 if(tempCode == 'c') theParameterType = kCharType;
				 else if(tempCode == 'i') theParameterType = kIntType;
				 else if(tempCode == 's') theParameterType = kShortType;
				 else if(tempCode == 'l') theParameterType = kLongType;
				 else if(tempCode == 'q') theParameterType = kLongLongType;
				 else if(tempCode == 'C') theParameterType = kUnsignedCharType;
				 else if(tempCode == 'I') theParameterType = kUnsignedIntType;
				 else if(tempCode == 'S') theParameterType = kUnsignedShortType;
				 else if(tempCode == 'L') theParameterType = kUnsignedLongType;
				 else if(tempCode == 'Q') theParameterType = kUnsignedLongLongType;
				 else if(tempCode == 'f') theParameterType = kFloatType;
				 else if(tempCode == 'd') theParameterType = kDoubleType;
				 else if(tempCode == 'B') theParameterType = kBoolType;
				 else if(tempCode == 'v') theParameterType = kVoidType;
				 else if(tempCode == '*') theParameterType = kCharStringType;
				 else if(tempCode == '@') theParameterType = kObjectType;
				 else if(tempCode == '#') theParameterType = kClassType;
				 else if(tempCode == ':') theParameterType = kSelectorType;
				 else if(tempCode == '{') theParameterType = kStructureType;
				 else if(tempCode == '^') theParameterType = kPointerType;
				 */				
				switch (tempCode) {
					case 'c':
						extProcedure_add_return(effectiveProcedure,kCharType,1,NULL,0);
						break;
					case 'i':
						extProcedure_add_return(effectiveProcedure,kIntType,4,NULL,0);
						break;
					case 's':
						extProcedure_add_return(effectiveProcedure,kShortType,2,NULL,0);
						break;
					case 'l':
						extProcedure_add_return(effectiveProcedure,kLongType,4,NULL,0);
						break;
					case 'q':
						extProcedure_add_return(effectiveProcedure,kLongType,8,NULL,0);
						break;
					case 'C':
						extProcedure_add_return(effectiveProcedure,kUnsignedType,4,NULL,0);
						break;
					case 'I':
						extProcedure_add_return(effectiveProcedure,kUnsignedType,4,NULL,0);
						break;
					case 'S':
						extProcedure_add_return(effectiveProcedure,kUnsignedType,4,NULL,0);
						break;
					case 'L':
						extProcedure_add_return(effectiveProcedure,kUnsignedType,4,NULL,0);
						break;
					case 'Q':
						extProcedure_add_return(effectiveProcedure,kUnsignedType,4,NULL,0);
						break;
					case 'f':
						extProcedure_add_return(effectiveProcedure,kFloatType,4,NULL,0);
						break;
					case 'd':
						extProcedure_add_return(effectiveProcedure,kDoubleType,8,NULL,0);
						break;
					case 'B':
						extProcedure_add_return(effectiveProcedure,kIntType,4,NULL,0);
						break;
					case 'v':
//						extProcedure_add_parameter(effectiveProcedure,kVoidType,4,NULL,0,0);
						break;
					case '*':
						extProcedure_add_return(effectiveProcedure,kPointerType,4,"char",1);
						break;
					case '@':
						extProcedure_add_return(effectiveProcedure,kPointerType,4,"objc_object",1);
						break;
					case '#':
						extProcedure_add_return(effectiveProcedure,kPointerType,4,"objc_class",1);
						break;
					case ':':
						extProcedure_add_return(effectiveProcedure,kPointerType,4,"objc_selector",1);
						break;
					case '{':
						extProcedure_add_return(effectiveProcedure,kStructureType,8,NULL,0);
						break;
					case '^':
						extProcedure_add_return(effectiveProcedure,kPointerType,4,"void",0);
						break;
					default:
						break;
				}
				
				free(theCode);
			}
			tempProcedure = effectiveProcedure;
		}
	}
	
	
	tempParameter = tempProcedure->parameters;
	while( tempParameter != NULL ) {
		procedureInarity++;
		theParameterType = tempParameter->type;
		if(theParameterType == kFloatType && tempParameter->size == 8) theParameterType = kDoubleType;
	switch(theParameterType){
		case kUnsignedType:
		case kLongType:
		case kShortType:
		case kCharType:
		case kEnumType:
		case kPointerType:
		case kIntType:
			parameterArea[gprCounter++] = *((Nat4 *) stackPointer);
			stackPointer +=4;
			break;

		case kVoidType:
			for(varargCounter = 0; varargCounter < PARAMETERAREASIZE - procedureInarity + 1; varargCounter++){
				parameterArea[gprCounter++] = *((Nat4 *) stackPointer);
				stackPointer += sizeof(Nat4 *);
			}
			break;
			
	}
		tempParameter = tempParameter->next;
	} // End For(argument) Loop

//	printf( "Begin interpreter callback handler: %s @0x%08x\n", currentSegment->vplRoutine, currentSegment );
//	printf( "\tHandler has links?  Previous: 0x%08x Next: 0x%08x\n",  currentSegment->previous, currentSegment->next);

	VPLEnvironmentCallbackRetain( currentSegment );

	inputCounter = 0;
	if(currentSegment->object != NULL && currentSegment->listInput == kFALSE) {
		parameterList = create_list(procedureInarity+1,theEnvironment);
		increment_count(currentSegment->object);
		*parameterList->objectList = currentSegment->object;
		inputCounter++;
	}
	else parameterList = create_list(procedureInarity,theEnvironment);

	if(currentSegment->listInput == kFALSE) {
		inputList = parameterList;
	} else if(currentSegment->object != NULL) {
		inputList = create_list(2,theEnvironment);
		increment_count(currentSegment->object);
		inputList->objectList[0] = currentSegment->object;
		inputList->objectList[1] = (V_Object) parameterList;
	} else {
		inputList = create_list(1,theEnvironment);
		inputList->objectList[0] = (V_Object) parameterList;
	}
	
	if(tempProcedure->returnParameter != NULL) {
		outputList = create_list(1,theEnvironment);
	} else {
		outputList = create_list(0,theEnvironment);
	}


	tempParameter = tempProcedure->parameters;
	for(counter=0;counter<procedureInarity;counter++){
		theParameterType = tempParameter->type;
		if(theParameterType == kFloatType && tempParameter->size == 8) theParameterType = kDoubleType;
		switch(theParameterType){
			case kUnsignedType:
			case kLongType:
			case kShortType:
			case kCharType:
			case kEnumType:
			case kIntType:
				*(parameterList->objectList + inputCounter++) = (V_Object) int_to_integer(parameterArea[counter],theEnvironment);
				break;

			case kPointerType:
				tempPointer = (Nat4 *) X_malloc(sizeof(Nat4));
				*((Nat4 *)tempPointer) = parameterArea[counter];
				outputBlock = create_externalBlock(tempParameter->name,tempParameter->size,theEnvironment);
				outputBlock->blockPtr = tempPointer;
				outputBlock->levelOfIndirection = tempParameter->indirection;
				*(parameterList->objectList + inputCounter++) = (V_Object) outputBlock;
				if(strcmp(tempParameter->name,"objc_object") == 0){
					id	tempObjcObject = *(id *) tempPointer;
					SEL	theSelector = sel_getUid("retain");
					objc_msgSend(tempObjcObject, theSelector);
				}
				break;

			case kStructureType:
				record_error("MacVPLCallbackHandler: Input is a structure! - ","MacVPLCallbackHandler",kERROR,theEnvironment);
				return;
				break;

			case kFloatType:
				*(parameterList->objectList + inputCounter++) = (V_Object) float_to_real(*((float *) &parameterArea[counter]),theEnvironment);
				break;

			case kDoubleType:
				*(parameterList->objectList + inputCounter++) = (V_Object) float_to_real(*((double *) &parameterArea[counter]),theEnvironment);
				break;

			case kVoidType:
				varagList = create_list(PARAMETERAREASIZE - procedureInarity + 1,theEnvironment);
				*(parameterList->objectList + inputCounter++) = (V_Object) varagList;
				for(varargCounter = 0; varargCounter < PARAMETERAREASIZE - procedureInarity + 1; varargCounter++){
					*(varagList->objectList + varargCounter) = (V_Object) int_to_integer(parameterArea[counter + varargCounter],theEnvironment);;
				}				
				break;

			default:
				record_error("MacVPLCallbackHandler: Input is an unrecognized type! - ","MacVPLCallbackHandler",kERROR,theEnvironment);
				return;
				break;
		}
		tempParameter = tempParameter->next;
	}
	
	spawnPtr = theEnvironment->stackSpawner;
	result = spawnPtr(theEnvironment,currentSegment->vplRoutine,inputList,outputList,NULL);
	
//	printf( "End interpreter callback handler: %s @0x%08x\n", currentSegment->vplRoutine, currentSegment );
    
	if( (tempParameter = tempProcedure->returnParameter) != NULL){
		block = outputList->objectList[0];
		theParameterType = tempParameter->type;
		if(theParameterType == kFloatType && tempParameter->size == 8) theParameterType = kDoubleType;
		switch(theParameterType){
			case kUnsignedType:
			case kLongType:
			case kShortType:
			case kCharType:
			case kEnumType:
			case kIntType:
				if(block == NULL) tempInput.inputInt = 0;
				else{
					switch(block->type){
						case kBoolean:
						tempInput.inputInt = ((V_Boolean) block)->value;
						break;
						
						case kInteger:
						tempInput.inputInt = ((V_Integer) block)->value;
						break;
						
					}
				}
				break;

			case kPointerType:
				if(block == NULL) tempInput.inputInt = 0;
				else{
					switch(block->type){
						case kBoolean:
							tempInput.inputInt = ((V_Boolean) block)->value;
							break;
							
						case kInteger:
							tempInput.inputInt = (Nat4) ((V_Integer) block)->value;
							break;
							
						case kExternalBlock:
							externalBlock = (V_ExternalBlock) block;
							if(tempParameter->indirection - externalBlock->levelOfIndirection == -1) {
								tempInput.inputInt = **((Nat4 **) externalBlock->blockPtr);
							}else if(tempParameter->indirection - externalBlock->levelOfIndirection == 0 ) {
								tempInput.inputInt = *((Nat4 *) externalBlock->blockPtr);
							}else if(tempParameter->indirection - externalBlock->levelOfIndirection == 1) {
								tempInput.inputInt = (long) externalBlock->blockPtr;
							}else{
								tempInput.inputInt = (Nat4) ((V_ExternalBlock) block)->blockPtr;
							}
							break;
						
						case kString:
							tempInput.inputInt = (Nat4) ((V_String) block)->string;
							break;
						
					}
				}
				break;

			case kStructureType:

//				errorOffset += sprintf(&errorString[errorOffset],"extprocedure: Return is a structure! - ");
//				return record_error(errorString,moduleName,kERROR,environment);

				break;

			case kFloatType:
				if(block == NULL) tempInput.inputFloat = 0.0;
				else{
					switch(block->type){
						case kInteger:
						tempInput.inputFloat = ((V_Integer) block)->value;
						break;
						
						case kReal:
						tempInput.inputFloat = ((V_Real) block)->value;
						break;
						
					}
				}
				break;

			case kDoubleType:
				if(block == NULL) tempInput.inputDouble = 0.0;
				else{
					switch(block->type){
						case kInteger:
						tempInput.inputDouble = ((V_Integer) block)->value;
						break;
						
						case kReal:
						tempInput.inputDouble = ((V_Real) block)->value;
						break;
						
					}
				}
				break;

			default:
				break;
		}
	}


	decrement_count(theEnvironment,(V_Object) inputList);
	decrement_count(theEnvironment,(V_Object) outputList);	

	VPLEnvironmentCallbackRelease( currentSegment );

	if( (tempParameter = tempProcedure->returnParameter) != NULL){
		theParameterType = tempParameter->type;
		if(theParameterType == kFloatType && tempParameter->size == 8) theParameterType = kDoubleType;
		switch(theParameterType){
			case kUnsignedType:
			case kLongType:
			case kShortType:
			case kCharType:
			case kEnumType:
			case kPointerType:
			case kIntType:
				tempInt = tempInput.inputInt;
				asm( "movl %0,%%eax" : /* No outputs */ : "r" (tempInt) );
				break;

		} // End Switch 
	} // End if return parameter
}
#endif

#if __ppc__
void InterpreterCallbackHandler(void)
{
	long register result = 0;
	VPL_GPRegisters theRegisters;
	V_GPRegisters theRegistersPtr = &theRegisters;
#ifdef __GNUC__
	asm{
		stw r3,theRegistersPtr->register3
		stw r4,theRegistersPtr->register4
		stw r5,theRegistersPtr->register5
		stw r6,theRegistersPtr->register6
		stw r7,theRegistersPtr->register7
		stw r8,theRegistersPtr->register8
		stw r9,theRegistersPtr->register9
		stw r10,theRegistersPtr->register10
		mr result,r11
	}
#endif
	
	Nat4 counter = 0;
	Nat4 inputCounter = 0;
	V_CallbackCodeSegment currentSegment = NULL;
	V_Environment theEnvironment = NULL;
	
	V_List				inputList = NULL;
	V_List				parameterList = NULL;
	V_List				outputList = NULL;
	V_ExternalBlock		outputBlock = NULL;
	V_Object			block = NULL;

	V_ExtProcedure	tempProcedure = NULL;
	V_Parameter		tempParameter = NULL;
	Nat4			procedureInarity = 0;
	Nat4			theParameterType = 0;

	register long tempInt = 0;
	register float tempFloat = 0.0;
	register double tempDouble = 0.0;

	Nat4 gprCounter = 0;
	Nat4 fpCounter = 0;
	
	Nat4 parameterArea[8] = { 0,0,0,0,0,0,0,0 };
	void *tempPointer = NULL;
	VPL_Input	tempInput;
	V_Input		tempInputPtr = &tempInput;

	Int4	(*spawnPtr)(V_Environment,char *,V_List , V_List ,Int4 *);

#ifdef __MWERKS__
	asm{
		mr result,r11
	}
#endif
	currentSegment = (V_CallbackCodeSegment) result;
	tempProcedure = currentSegment->callbackFunction;
	theEnvironment = currentSegment->theEnvironment;

// Past this point no fiddling with R3! for example by calling a subroutine whose output would be place in R3
	
	tempParameter = tempProcedure->parameters;
	while( tempParameter != NULL ) {
		procedureInarity++;
		theParameterType = tempParameter->type;
		if(theParameterType == kFloatType && tempParameter->size == 8) theParameterType = kDoubleType;
	switch(theParameterType){
		case kUnsignedType:
		case kLongType:
		case kShortType:
		case kCharType:
		case kEnumType:
		case kPointerType:
		case kIntType:
			switch(gprCounter){
#ifdef __MWERKS__
				case 0: asm{ mr	tempInt,r3 }
#elif __GNUC__
				case 0: tempInt = theRegistersPtr->register3;
#endif
						break;
#ifdef __MWERKS__
				case 1: asm{ mr	tempInt,r4 }
#elif __GNUC__
				case 1: tempInt = theRegistersPtr->register4;
#endif
						break;
#ifdef __MWERKS__
				case 2: asm{ mr	tempInt,r5 }
#elif __GNUC__
				case 2: tempInt = theRegistersPtr->register5;
#endif
						break;
#ifdef __MWERKS__
				case 3: asm{ mr	tempInt,r6 }
#elif __GNUC__
				case 3: tempInt = theRegistersPtr->register6;
#endif
						break;
#ifdef __MWERKS__
				case 4: asm{ mr	tempInt,r7 }
#elif __GNUC__
				case 4: tempInt = theRegistersPtr->register7;
#endif
						break;
#ifdef __MWERKS__
				case 5: asm{ mr	tempInt,r8 }
#elif __GNUC__
				case 5: tempInt = theRegistersPtr->register8;
#endif
						break;
#ifdef __MWERKS__
				case 6: asm{ mr	tempInt,r9 }
#elif __GNUC__
				case 6: tempInt = theRegistersPtr->register9;
#endif
						break;
#ifdef __MWERKS__
				case 7: asm{ mr	tempInt,r10 }
#elif __GNUC__
				case 7: tempInt = theRegistersPtr->register10;
#endif
						break;
			}
			parameterArea[gprCounter++] = tempInt;
			break;

		case kVoidType:
			switch(gprCounter){
#ifdef __MWERKS__
				case 0: asm{ mr	tempInt,r3 }
#elif __GNUC__
				case 0: tempInt = theRegistersPtr->register3;
#endif
				parameterArea[gprCounter++] = tempInt;
#ifdef __MWERKS__
				case 1: asm{ mr	tempInt,r4 }
#elif __GNUC__
				case 1: tempInt = theRegistersPtr->register4;
#endif
				parameterArea[gprCounter++] = tempInt;
#ifdef __MWERKS__
				case 2: asm{ mr	tempInt,r5 }
#elif __GNUC__
				case 2: tempInt = theRegistersPtr->register5;
#endif
				parameterArea[gprCounter++] = tempInt;
#ifdef __MWERKS__
				case 3: asm{ mr	tempInt,r6 }
#elif __GNUC__
				case 3: tempInt = theRegistersPtr->register6;
#endif
				parameterArea[gprCounter++] = tempInt;
#ifdef __MWERKS__
				case 4: asm{ mr	tempInt,r7 }
#elif __GNUC__
				case 4: tempInt = theRegistersPtr->register7;
#endif
				parameterArea[gprCounter++] = tempInt;
#ifdef __MWERKS__
				case 5: asm{ mr	tempInt,r8 }
#elif __GNUC__
				case 5: tempInt = theRegistersPtr->register8;
#endif
				parameterArea[gprCounter++] = tempInt;
#ifdef __MWERKS__
				case 6: asm{ mr	tempInt,r9 }
#elif __GNUC__
				case 6: tempInt = theRegistersPtr->register9;
#endif
				parameterArea[gprCounter++] = tempInt;
#ifdef __MWERKS__
				case 7: asm{ mr	tempInt,r10 }
#elif __GNUC__
				case 7: tempInt = theRegistersPtr->register10;
#endif
				parameterArea[gprCounter++] = tempInt;
			}
			break;

		case kStructureType:
/*
			if(tempParameter->size >= 4){
				tempStructPointer = (Nat4 *) tempInput->inputInt;
				do{
					tempInt = *tempStructPointer;
					switch(gprCounter){
						case 0: asm{ mr	tempInt,r3 } break;
						case 1: asm{ mr	tempInt,r4 } break;
						case 2: asm{ mr	tempInt,r5 } break;
						case 3: asm{ mr	tempInt,r6 } break;
						case 4: asm{ mr	tempInt,r7 } break;
						case 5: asm{ mr	tempInt,r8 } break;
						case 6: asm{ mr	tempInt,r9 } break;
						case 7: asm{ mr	tempInt,r10 } break;
					}
					gprCounter++;
					tempStructPointer++;
				} while((Nat4)tempStructPointer - (Nat4)tempInput->inputInt < tempParameter->size);
			}else{
				errorOffset += sprintf(&errorString[errorOffset],"extprocedure: Input %u structure size is %u! - ",argument+1,tempParameter->size);
				return record_error(errorString,moduleName,kWRONGINPUTTYPE,environment);
			}
*/
			break;

		case kDoubleType:
			tempInput.inputDouble = 7.3;
			switch(fpCounter){
#ifdef __MWERKS__
				case 0: asm{ fmr tempDouble,fp1 }
#elif __GNUC__
				case 0: asm{
								stfd f1,tempInputPtr->inputDouble
							}
						tempDouble = tempInput.inputDouble;
#endif
						break;
#ifdef __MWERKS__
				case 1: asm{ fmr tempDouble,fp2 }
#elif __GNUC__
				case 1: asm{
								stfd f2,tempInputPtr->inputDouble
							}
						tempDouble = tempInput.inputDouble;
#endif
						break;
#ifdef __MWERKS__
				case 2: asm{ fmr tempDouble,fp3 }
#elif __GNUC__
				case 2: asm{
								stfd f3,tempInputPtr->inputDouble
							}
						tempDouble = tempInput.inputDouble;
#endif
						break;
#ifdef __MWERKS__
				case 3: asm{ fmr tempDouble,fp4 }
#elif __GNUC__
				case 3: asm{
								stfd f4,tempInputPtr->inputDouble
							}
						tempDouble = tempInput.inputDouble;
#endif
						break;
#ifdef __MWERKS__
				case 4: asm{ fmr tempDouble,fp5 }
#elif __GNUC__
				case 4: asm{
								stfd f5,tempInputPtr->inputDouble
							}
						tempDouble = tempInput.inputDouble;
#endif
						break;
#ifdef __MWERKS__
				case 5: asm{ fmr tempDouble,fp6 }
#elif __GNUC__
				case 5: asm{
								stfd f6,tempInputPtr->inputDouble
							}
						tempDouble = tempInput.inputDouble;
#endif
						break;
#ifdef __MWERKS__
				case 6: asm{ fmr tempDouble,fp7 }
#elif __GNUC__
				case 6: asm{
								stfd f7,tempInputPtr->inputDouble
							}
						tempDouble = tempInput.inputDouble;
#endif
						break;
#ifdef __MWERKS__
				case 7: asm{ fmr tempDouble,fp8 }
#elif __GNUC__
				case 7: asm{
								stfd f8,tempInputPtr->inputDouble
							}
						tempDouble = tempInput.inputDouble;
#endif
						break;
			}
			*((double *) &parameterArea[gprCounter++]) = tempDouble;
			fpCounter++;
			gprCounter++;
			break;

		case kFloatType:
			tempInput.inputFloat = 7.3;
			switch(fpCounter){
#ifdef __MWERKS__
				case 0: asm{ fmr tempFloat,fp1 }
#elif __GNUC__
				case 0: asm{
								stfs f1,tempInputPtr->inputFloat
							}
						tempFloat = tempInput.inputFloat;
#endif
						break;
#ifdef __MWERKS__
				case 1: asm{ fmr tempFloat,fp2 }
#elif __GNUC__
				case 1: asm{
								stfs f2,tempInputPtr->inputFloat
							}
						tempFloat = tempInput.inputFloat;
#endif
						break;
#ifdef __MWERKS__
				case 2: asm{ fmr tempFloat,fp3 }
#elif __GNUC__
				case 2: asm{
								stfs f3,tempInputPtr->inputFloat
							}
						tempFloat = tempInput.inputFloat;
#endif
						break;
#ifdef __MWERKS__
				case 3: asm{ fmr tempFloat,fp4 }
#elif __GNUC__
				case 3: asm{
								stfs f4,tempInputPtr->inputFloat
							}
						tempFloat = tempInput.inputFloat;
#endif
						break;
#ifdef __MWERKS__
				case 4: asm{ fmr tempFloat,fp5 }
#elif __GNUC__
				case 4: asm{
								stfs f5,tempInputPtr->inputFloat
							}
						tempFloat = tempInput.inputFloat;
#endif
						break;
#ifdef __MWERKS__
				case 5: asm{ fmr tempFloat,fp6 }
#elif __GNUC__
				case 5: asm{
								stfs f6,tempInputPtr->inputFloat
							}
						tempFloat = tempInput.inputFloat;
#endif
						break;
#ifdef __MWERKS__
				case 6: asm{ fmr tempFloat,fp7 }
#elif __GNUC__
				case 6: asm{
								stfs f7,tempInputPtr->inputFloat
							}
						tempFloat = tempInput.inputFloat;
#endif
						break;
#ifdef __MWERKS__
				case 7: asm{ fmr tempFloat,fp8 }
#elif __GNUC__
				case 7: asm{
								stfs f8,tempInputPtr->inputFloat
							}
						tempFloat = tempInput.inputFloat;
#endif
						break;
			}
			fpCounter++;
			*((float *) &parameterArea[gprCounter++]) = tempFloat;
			break;
	}
		tempParameter = tempParameter->next;
	} // End For(argument) Loop

	VPLEnvironmentCallbackRetain( currentSegment );

	inputCounter = 0;
	if(currentSegment->object != NULL && currentSegment->listInput == kFALSE) {
		parameterList = create_list(procedureInarity+1,theEnvironment);
		increment_count(currentSegment->object);
		*parameterList->objectList = currentSegment->object;
		inputCounter++;
	}
	else parameterList = create_list(procedureInarity,theEnvironment);

	if(currentSegment->listInput == kFALSE) {
		inputList = parameterList;
	} else if(currentSegment->object != NULL) {
		inputList = create_list(2,theEnvironment);
		increment_count(currentSegment->object);
		inputList->objectList[0] = currentSegment->object;
		inputList->objectList[1] = (V_Object) parameterList;
	} else {
		inputList = create_list(1,theEnvironment);
		inputList->objectList[0] = (V_Object) parameterList;
	}
	
	if(tempProcedure->returnParameter != NULL) {
		outputList = create_list(1,theEnvironment);
	} else {
		outputList = create_list(0,theEnvironment);
	}


	tempParameter = tempProcedure->parameters;
	for(counter=0;counter<procedureInarity;counter++){
		theParameterType = tempParameter->type;
		if(theParameterType == kFloatType && tempParameter->size == 8) theParameterType = kDoubleType;
		switch(theParameterType){
			case kUnsignedType:
			case kLongType:
			case kShortType:
			case kCharType:
			case kEnumType:
			case kIntType:
				*(parameterList->objectList + inputCounter++) = (V_Object) int_to_integer(parameterArea[counter],theEnvironment);
				break;

			case kPointerType:
				tempPointer = (Nat4 *) X_malloc(sizeof(Nat4));
				*((Nat4 *)tempPointer) = parameterArea[counter];
				outputBlock = create_externalBlock(tempParameter->name,tempParameter->size,theEnvironment);
				outputBlock->blockPtr = tempPointer;
				outputBlock->levelOfIndirection = tempParameter->indirection;
				*(parameterList->objectList + inputCounter++) = (V_Object) outputBlock;
				break;

			case kStructureType:
				record_error("MacVPLCallbackHandler: Input is a structure! - ","MacVPLCallbackHandler",kERROR,theEnvironment);
				return;
				break;

			case kFloatType:
				*(parameterList->objectList + inputCounter++) = (V_Object) float_to_real(*((float *) &parameterArea[counter]),theEnvironment);
				break;

			case kDoubleType:
				*(parameterList->objectList + inputCounter++) = (V_Object) float_to_real(*((double *) &parameterArea[counter]),theEnvironment);
				break;

			case kVoidType:
				*(parameterList->objectList + inputCounter++) = (V_Object) int_to_integer((Int4) &parameterArea[counter],theEnvironment);
				break;

			default:
				record_error("MacVPLCallbackHandler: Input is an unrecognized type! - ","MacVPLCallbackHandler",kERROR,theEnvironment);
				return;
				break;
		}
		tempParameter = tempParameter->next;
	}
	
	spawnPtr = theEnvironment->stackSpawner;
	result = spawnPtr(theEnvironment,currentSegment->vplRoutine,inputList,outputList,NULL);
    
	if( (tempParameter = tempProcedure->returnParameter) != NULL){
		block = outputList->objectList[0];
		theParameterType = tempParameter->type;
		if(theParameterType == kFloatType && tempParameter->size == 8) theParameterType = kDoubleType;
		switch(theParameterType){
			case kUnsignedType:
			case kLongType:
			case kShortType:
			case kCharType:
			case kEnumType:
			case kIntType:
				if(block == NULL) tempInput.inputInt = 0;
				else{
					switch(block->type){
						case kBoolean:
						tempInput.inputInt = ((V_Boolean) block)->value;
						break;
						
						case kInteger:
						tempInput.inputInt = ((V_Integer) block)->value;
						break;
						
					}
				}
				break;

			case kPointerType:
				if(block == NULL) tempInput.inputInt = 0;
				else{
					switch(block->type){
						case kExternalBlock:
						tempInput.inputInt = (Nat4) ((V_ExternalBlock) block)->blockPtr;
						break;
						
						case kString:
						tempInput.inputInt = (Nat4) ((V_String) block)->string;
						break;
						
					}
				}
				break;

			case kStructureType:

//				errorOffset += sprintf(&errorString[errorOffset],"extprocedure: Return is a structure! - ");
//				return record_error(errorString,moduleName,kERROR,environment);

				break;

			case kFloatType:
				if(block == NULL) tempInput.inputFloat = 0.0;
				else{
					switch(block->type){
						case kInteger:
						tempInput.inputFloat = ((V_Integer) block)->value;
						break;
						
						case kReal:
						tempInput.inputFloat = ((V_Real) block)->value;
						break;
						
					}
				}
				break;

			case kDoubleType:
				if(block == NULL) tempInput.inputDouble = 0.0;
				else{
					switch(block->type){
						case kInteger:
						tempInput.inputDouble = ((V_Integer) block)->value;
						break;
						
						case kReal:
						tempInput.inputDouble = ((V_Real) block)->value;
						break;
						
					}
				}
				break;

			default:
				break;
		}
	}


	decrement_count(theEnvironment,(V_Object) inputList);
	decrement_count(theEnvironment,(V_Object) outputList);	

	VPLEnvironmentCallbackRelease( currentSegment );

	if( (tempParameter = tempProcedure->returnParameter) != NULL){
		theParameterType = tempParameter->type;
		if(theParameterType == kFloatType && tempParameter->size == 8) theParameterType = kDoubleType;
	switch(theParameterType){
		case kUnsignedType:
		case kLongType:
		case kShortType:
		case kCharType:
		case kEnumType:
		case kPointerType:
		case kIntType:
			tempInt = tempInput.inputInt;
			asm{
				mr	r3,tempInt
			}
			break;

		case kStructureType:
			break;
		case kDoubleType:
			tempDouble = tempInput.inputDouble;
#ifdef __MWERKS__
			asm{ fmr fp1,tempDouble }
#elif __GNUC__
			asm{
					lfd f1,tempInputPtr->inputDouble
				}
#endif
			break;

		case kFloatType:
			tempFloat = tempInput.inputFloat;
#ifdef __MWERKS__
			asm{ fmr fp1,tempFloat }
#elif __GNUC__
			asm{
					lfs f1,tempInputPtr->inputFloat
				}
#endif
			break;

	} // End Switch 
	} // End if return parameter
}
#endif

/*	This is the old PPC handler, there are some minor differences so the newer version is being used.
	Included here for reference. */
/*
#if 0
void InterpreterCallbackHandler(void)
{
	long register result = 0;
	VPL_GPRegisters theRegisters;
	V_GPRegisters theRegistersPtr = &theRegisters;
#ifdef __GNUC__
	asm{ 
		stw r3,theRegistersPtr->register3
		stw r4,theRegistersPtr->register4
		stw r5,theRegistersPtr->register5
		stw r6,theRegistersPtr->register6
		stw r7,theRegistersPtr->register7
		stw r8,theRegistersPtr->register8
		stw r9,theRegistersPtr->register9
		stw r10,theRegistersPtr->register10
		mr result,r11
	}
#endif
	Nat4 counter = 0;
	Nat4 inputCounter = 0;
	V_CallbackCodeSegment currentSegment = NULL;
	V_Environment theEnvironment = NULL;
	
	V_List				inputList = NULL;
	V_List				parameterList = NULL;
	V_List				outputList = NULL;
	V_ExternalBlock		outputBlock = NULL;
	V_Object			block = NULL;

	V_ExtProcedure	tempProcedure = NULL;
	V_Parameter		tempParameter = NULL;
	Nat4			procedureInarity = 0;
	Nat4			theParameterType = 0;

	register long tempInt = 0;
	register float tempFloat = 0.0;
	register double tempDouble = 0.0;

	Nat4 gprCounter = 0;
	Nat4 fpCounter = 0;
	
	Nat4 parameterArea[8] = { 0,0,0,0,0,0,0,0 };
	void *tempPointer = NULL;
	VPL_Input	tempInput;
	V_Input		tempInputPtr = &tempInput;

	Int4	(*spawnPtr)(V_Environment,char *,V_List , V_List ,Int4 *);

#ifdef __MWERKS__
	asm{ 
		mr result,r11
	}
#endif
	currentSegment = (V_CallbackCodeSegment) result;
	tempProcedure = currentSegment->callbackFunction;
	theEnvironment = currentSegment->theEnvironment;

/* Past this point no fiddling with R3! for example by calling a subroutine whose output would be place in R3 //	
	
	tempParameter = tempProcedure->parameters;
	while( tempParameter != NULL ) {
		procedureInarity++;
		theParameterType = tempParameter->type;
		if(theParameterType == kFloatType && tempParameter->size == 8) theParameterType = kDoubleType;
	switch(theParameterType){
		case kUnsignedType:
		case kLongType:
		case kShortType:
		case kCharType:
		case kEnumType:
		case kPointerType:
		case kIntType:
			switch(gprCounter){
#ifdef __MWERKS__
				case 0: asm{ mr	tempInt,r3 }
#elif __GNUC__
				case 0: tempInt = theRegistersPtr->register3;
#endif
						break;
#ifdef __MWERKS__
				case 1: asm{ mr	tempInt,r4 }
#elif __GNUC__
				case 1: tempInt = theRegistersPtr->register4;
#endif
						break;
#ifdef __MWERKS__
				case 2: asm{ mr	tempInt,r5 }
#elif __GNUC__
				case 2: tempInt = theRegistersPtr->register5;
#endif
						break;
#ifdef __MWERKS__
				case 3: asm{ mr	tempInt,r6 }
#elif __GNUC__
				case 3: tempInt = theRegistersPtr->register6;
#endif
						break;
#ifdef __MWERKS__
				case 4: asm{ mr	tempInt,r7 }
#elif __GNUC__
				case 4: tempInt = theRegistersPtr->register7;
#endif
						break;
#ifdef __MWERKS__
				case 5: asm{ mr	tempInt,r8 }
#elif __GNUC__
				case 5: tempInt = theRegistersPtr->register8;
#endif
						break;
#ifdef __MWERKS__
				case 6: asm{ mr	tempInt,r9 }
#elif __GNUC__
				case 6: tempInt = theRegistersPtr->register9;
#endif
						break;
#ifdef __MWERKS__
				case 7: asm{ mr	tempInt,r10 }
#elif __GNUC__
				case 7: tempInt = theRegistersPtr->register10;
#endif
						break;
			}
			parameterArea[gprCounter++] = tempInt;
			break;

		case kVoidType:
			switch(gprCounter){
#ifdef __MWERKS__
				case 0: asm{ mr	tempInt,r3 }
#elif __GNUC__
				case 0: tempInt = theRegistersPtr->register3;
#endif
				parameterArea[gprCounter++] = tempInt;
#ifdef __MWERKS__
				case 1: asm{ mr	tempInt,r4 }
#elif __GNUC__
				case 1: tempInt = theRegistersPtr->register4;
#endif
				parameterArea[gprCounter++] = tempInt;
#ifdef __MWERKS__
				case 2: asm{ mr	tempInt,r5 }
#elif __GNUC__
				case 2: tempInt = theRegistersPtr->register5;
#endif
				parameterArea[gprCounter++] = tempInt;
#ifdef __MWERKS__
				case 3: asm{ mr	tempInt,r6 }
#elif __GNUC__
				case 3: tempInt = theRegistersPtr->register6;
#endif
				parameterArea[gprCounter++] = tempInt;
#ifdef __MWERKS__
				case 4: asm{ mr	tempInt,r7 }
#elif __GNUC__
				case 4: tempInt = theRegistersPtr->register7;
#endif
				parameterArea[gprCounter++] = tempInt;
#ifdef __MWERKS__
				case 5: asm{ mr	tempInt,r8 }
#elif __GNUC__
				case 5: tempInt = theRegistersPtr->register8;
#endif
				parameterArea[gprCounter++] = tempInt;
#ifdef __MWERKS__
				case 6: asm{ mr	tempInt,r9 }
#elif __GNUC__
				case 6: tempInt = theRegistersPtr->register9;
#endif
				parameterArea[gprCounter++] = tempInt;
#ifdef __MWERKS__
				case 7: asm{ mr	tempInt,r10 }
#elif __GNUC__
				case 7: tempInt = theRegistersPtr->register10;
#endif
				parameterArea[gprCounter++] = tempInt;
			}
			break;

		case kStructureType:
/*		
			if(tempParameter->size >= 4){
				tempStructPointer = (Nat4 *) tempInput->inputInt;
				do{
					tempInt = *tempStructPointer;
					switch(gprCounter){
						case 0: asm{ mr	tempInt,r3 } break;
						case 1: asm{ mr	tempInt,r4 } break;
						case 2: asm{ mr	tempInt,r5 } break;
						case 3: asm{ mr	tempInt,r6 } break;
						case 4: asm{ mr	tempInt,r7 } break;
						case 5: asm{ mr	tempInt,r8 } break;
						case 6: asm{ mr	tempInt,r9 } break;
						case 7: asm{ mr	tempInt,r10 } break;
					}
					gprCounter++;
					tempStructPointer++;
				} while((Nat4)tempStructPointer - (Nat4)tempInput->inputInt < tempParameter->size);
			}else{
				errorOffset += sprintf(&errorString[errorOffset],"extprocedure: Input %u structure size is %u! - ",argument+1,tempParameter->size);
				return record_error(errorString,moduleName,kWRONGINPUTTYPE,environment);
			}
/*
			break;

		case kDoubleType:
			switch(fpCounter){
#ifdef __MWERKS__
				case 0: asm{ fmr tempDouble,fp1 }
#elif __GNUC__
				case 0: asm{
								stfd f1,tempInputPtr->inputDouble
							}
						tempDouble = tempInput.inputDouble;
#endif
						break;
#ifdef __MWERKS__
				case 1: asm{ fmr tempDouble,fp2 }
#elif __GNUC__
				case 1: asm{
								stfd f2,tempInputPtr->inputDouble
							}
						tempDouble = tempInput.inputDouble;
#endif
						break;
#ifdef __MWERKS__
				case 2: asm{ fmr tempDouble,fp3 }
#elif __GNUC__
				case 2: asm{
								stfd f3,tempInputPtr->inputDouble
							}
						tempDouble = tempInput.inputDouble;
#endif
						break;
#ifdef __MWERKS__
				case 3: asm{ fmr tempDouble,fp4 }
#elif __GNUC__
				case 3: asm{
								stfd f4,tempInputPtr->inputDouble
							}
						tempDouble = tempInput.inputDouble;
#endif
						break;
#ifdef __MWERKS__
				case 4: asm{ fmr tempDouble,fp5 }
#elif __GNUC__
				case 4: asm{
								stfd f5,tempInputPtr->inputDouble
							}
						tempDouble = tempInput.inputDouble;
#endif
						break;
#ifdef __MWERKS__
				case 5: asm{ fmr tempDouble,fp6 }
#elif __GNUC__
				case 5: asm{
								stfd f6,tempInputPtr->inputDouble
							}
						tempDouble = tempInput.inputDouble;
#endif
						break;
#ifdef __MWERKS__
				case 6: asm{ fmr tempDouble,fp7 }
#elif __GNUC__
				case 6: asm{
								stfd f7,tempInputPtr->inputDouble
							}
						tempDouble = tempInput.inputDouble;
#endif
						break;
#ifdef __MWERKS__
				case 7: asm{ fmr tempDouble,fp8 }
#elif __GNUC__
				case 7: asm{
								stfd f8,tempInputPtr->inputDouble
							}
						tempDouble = tempInput.inputDouble;
#endif
						break;
			}
			*((double *) &parameterArea[gprCounter++]) = tempDouble;
			fpCounter++;
			gprCounter++;
			break;

		case kFloatType:
			switch(fpCounter){
#ifdef __MWERKS__
				case 0: asm{ fmr tempFloat,fp1 }
#elif __GNUC__
				case 0: asm{
								stfs f1,tempInputPtr->inputFloat
							}
						tempFloat = tempInput.inputFloat;
#endif
						break;
#ifdef __MWERKS__
				case 1: asm{ fmr tempFloat,fp2 }
#elif __GNUC__
				case 1: asm{
								stfs f2,tempInputPtr->inputFloat
							}
						tempFloat = tempInput.inputFloat;
#endif
						break;
#ifdef __MWERKS__
				case 2: asm{ fmr tempFloat,fp3 }
#elif __GNUC__
				case 2: asm{
								stfs f3,tempInputPtr->inputFloat
							}
						tempFloat = tempInput.inputFloat;
#endif
						break;
#ifdef __MWERKS__
				case 3: asm{ fmr tempFloat,fp4 }
#elif __GNUC__
				case 3: asm{
								stfs f4,tempInputPtr->inputFloat
							}
						tempFloat = tempInput.inputFloat;
#endif
						break;
#ifdef __MWERKS__
				case 4: asm{ fmr tempFloat,fp5 }
#elif __GNUC__
				case 4: asm{
								stfs f5,tempInputPtr->inputFloat
							}
						tempFloat = tempInput.inputFloat;
#endif
						break;
#ifdef __MWERKS__
				case 5: asm{ fmr tempFloat,fp6 }
#elif __GNUC__
				case 5: asm{
								stfs f6,tempInputPtr->inputFloat
							}
						tempFloat = tempInput.inputFloat;
#endif
						break;
#ifdef __MWERKS__
				case 6: asm{ fmr tempFloat,fp7 }
#elif __GNUC__
				case 6: asm{
								stfs f7,tempInputPtr->inputFloat
							}
						tempFloat = tempInput.inputFloat;
#endif
						break;
#ifdef __MWERKS__
				case 7: asm{ fmr tempFloat,fp8 }
#elif __GNUC__
				case 7: asm{
								stfs f8,tempInputPtr->inputFloat
							}
						tempFloat = tempInput.inputFloat;
#endif
						break;
			}
			fpCounter++;
			*((float *) &parameterArea[gprCounter++]) = tempFloat;
			break;

	}
		tempParameter = tempParameter->next;
	} /* End For(argument) Loop /*


	inputCounter = 0;
	if(currentSegment->object != NULL && currentSegment->listInput == kFALSE) {
		parameterList = create_list(procedureInarity+1,theEnvironment);
		increment_count(currentSegment->object);
		*parameterList->objectList = currentSegment->object;
		inputCounter++;
	}
	else parameterList = create_list(procedureInarity,theEnvironment);

	if(currentSegment->listInput == kFALSE) {
		inputList = parameterList;
	} else if(currentSegment->object != NULL) {
		inputList = create_list(2,theEnvironment);
		increment_count(currentSegment->object);
		inputList->objectList[0] = currentSegment->object;
		inputList->objectList[1] = (V_Object) parameterList;
	} else {
		inputList = create_list(1,theEnvironment);
		inputList->objectList[0] = (V_Object) parameterList;
	}
	
	tempParameter = tempProcedure->parameters;
	for(counter=0;counter<procedureInarity;counter++){
		theParameterType = tempParameter->type;
		if(theParameterType == kFloatType && tempParameter->size == 8) theParameterType = kDoubleType;
		switch(theParameterType){
			case kUnsignedType:
			case kLongType:
			case kShortType:
			case kCharType:
			case kEnumType:
			case kIntType:
				*(parameterList->objectList + inputCounter++) = (V_Object) int_to_integer(parameterArea[counter],theEnvironment);
				break;

			case kPointerType:
				tempPointer = (Nat4 *) X_malloc(sizeof(Nat4));
				*((Nat4 *)tempPointer) = parameterArea[counter];
				outputBlock = create_externalBlock(tempParameter->name,tempParameter->size,theEnvironment);
				outputBlock->blockPtr = tempPointer;
				outputBlock->levelOfIndirection = tempParameter->indirection;
				*(parameterList->objectList + inputCounter++) = (V_Object) outputBlock;
				break;

			case kStructureType:
				record_error("MacVPLCallbackHandler: Input is a structure! - ","MacVPLCallbackHandler",kERROR,theEnvironment);
				return;
				break;

			case kFloatType:
				*(parameterList->objectList + inputCounter++) = (V_Object) float_to_real(*((float *) &parameterArea[counter]),theEnvironment);
				break;

			case kDoubleType:
				*(inputList->objectList + inputCounter++) = (V_Object) float_to_real(*((double *) &parameterArea[counter]),theEnvironment);
				break;

			case kVoidType:
				*(parameterList->objectList + inputCounter++) = (V_Object) int_to_integer((Int4) &parameterArea[counter],theEnvironment);
				break;

			default:
				record_error("InterpreterCallbackHandler: Input is an unrecognized type! - ","InterpreterCallbackHandler",kERROR,theEnvironment);
				return;
				break;
		}
		tempParameter = tempParameter->next;
	}

	if( (tempParameter = tempProcedure->returnParameter) != NULL) outputList = create_list(1,theEnvironment);

	spawnPtr = theEnvironment->stackSpawner;
	result = spawnPtr(theEnvironment,currentSegment->vplRoutine,inputList,outputList,NULL);

	if( (tempParameter = tempProcedure->returnParameter) != NULL){
		block = outputList->objectList[0];
		theParameterType = tempParameter->type;
		if(theParameterType == kFloatType && tempParameter->size == 8) theParameterType = kDoubleType;
		switch(theParameterType){
			case kUnsignedType:
			case kLongType:
			case kShortType:
			case kCharType:
			case kEnumType:
			case kIntType:
				if(block == NULL) tempInput.inputInt = 0;
				else{
					switch(block->type){
						case kBoolean:
						tempInput.inputInt = ((V_Boolean) block)->value;
						break;
						
						case kInteger:
						tempInput.inputInt = ((V_Integer) block)->value;
						break;
						
					}
				}
				break;

			case kPointerType:
				if(block == NULL) tempInput.inputInt = 0;
				else{
					switch(block->type){
						case kExternalBlock:
						tempInput.inputInt = (Nat4) ((V_ExternalBlock) block)->blockPtr;
						break;
						
						case kString:
						tempInput.inputInt = (Nat4) ((V_String) block)->string;
						break;
						
					}
				}
				break;

			case kStructureType:
/*
				errorOffset += sprintf(&errorString[errorOffset],"extprocedure: Return is a structure! - ");
				return record_error(errorString,moduleName,kERROR,environment);
/*
				break;

			case kFloatType:
				if(block == NULL) tempInput.inputFloat = 0.0;
				else{
					switch(block->type){
						case kInteger:
						tempInput.inputFloat = ((V_Integer) block)->value;
						break;
						
						case kReal:
						tempInput.inputFloat = ((V_Real) block)->value;
						break;
						
					}
				}
				break;

			case kDoubleType:
				if(block == NULL) tempInput.inputDouble = 0.0;
				else{
					switch(block->type){
						case kInteger:
						tempInput.inputDouble = ((V_Integer) block)->value;
						break;
						
						case kReal:
						tempInput.inputDouble = ((V_Real) block)->value;
						break;
						
					}
				}
				break;

			default:
				break;
		}
	}


	decrement_count(theEnvironment,(V_Object) inputList);
	decrement_count(theEnvironment,(V_Object) outputList);	

	if( (tempParameter = tempProcedure->returnParameter) != NULL){
		theParameterType = tempParameter->type;
		if(theParameterType == kFloatType && tempParameter->size == 8) theParameterType = kDoubleType;
	switch(theParameterType){
		case kUnsignedType:
		case kLongType:
		case kShortType:
		case kCharType:
		case kEnumType:
		case kPointerType:
		case kIntType:
			tempInt = tempInput.inputInt;
			asm{
					mr	r3,tempInt
				}
			break;

		case kStructureType:
			break;

		case kDoubleType:
			tempDouble = tempInput.inputDouble;
#ifdef __MWERKS__
			asm{ fmr fp1,tempDouble }
#elif __GNUC__
			asm{
					lfd f1,tempInputPtr->inputDouble
				}
#endif
			break;

		case kFloatType:
			tempFloat = tempInput.inputFloat;
#ifdef __MWERKS__
			asm{ fmr fp1,tempFloat }
#elif __GNUC__
			asm{
					lfs f1,tempInputPtr->inputFloat
				}
#endif
			break;

	} // End Switch 
	} // End if return parameter
}
#endif
*/

#pragma mark ------- Byte Swapping Funcs -------

UInt8	vpx_SwapInt8HostToBig( UInt8 swapInt )
{
	if( CFByteOrderGetCurrent() == CFByteOrderBigEndian )
		return swapInt;
	else
		return 256 - swapInt;
}

UInt8	vpx_SwapInt8( UInt8 swapInt )
{
	if( CFByteOrderGetCurrent() == CFByteOrderBigEndian )
		return 256 - swapInt;
	else
		return swapInt - 256;
}

void	vpx_ipc_swap_block(void* block,Nat4 blockSize, Int1 byteSize)
{
	Nat4	swapByte = 0;
	UInt8*	swapOneByteBlock = block;
	UInt16*	swapTwoByteBlock = block;
	UInt32*	swapOneWordBlock = block;
	UInt64*	swapTwoWordBlock = block;
	
	if( gSwapPipeBytes ) {
		if( byteSize == 0 ) {
			if( blockSize%8 == 0 ) byteSize=8;
			else if( blockSize%4 == 0 ) byteSize=4;
			else if( blockSize%2 == 0 ) byteSize=2;
			else byteSize = 1;
		}
//		if( byteSize == 4 )
		if( byteSize != 0 )
			for( swapByte=0; (swapByte*byteSize) < blockSize; swapByte++ ) {
				if( byteSize == 8 ) if( swapTwoWordBlock[swapByte] ) swapTwoWordBlock[swapByte] = CFSwapInt64(swapTwoWordBlock[swapByte]);
				if( byteSize == 4 ) if( swapOneWordBlock[swapByte] ) swapOneWordBlock[swapByte] = CFSwapInt32(swapOneWordBlock[swapByte]);
				if( byteSize == 2 ) if( swapTwoByteBlock[swapByte] ) swapTwoByteBlock[swapByte] = CFSwapInt16(swapTwoByteBlock[swapByte]);
				if( byteSize == 1 ) if( swapOneByteBlock[swapByte] ) swapOneByteBlock[swapByte] = vpx_SwapInt8(swapOneByteBlock[swapByte]);
			}
	}
}

Int4	vpx_ipc_read_swapped_block(V_Environment environment,enum whichThread theThread,Int4 readFileDescriptor,void* block,Nat4 blockSize,Int1 byteSize)
{
	Int4	readResult = 0;

	readResult = vpx_ipc_read_block( environment, theThread, readFileDescriptor, block, blockSize );
	if( readResult != kNOERROR ) return readResult;

	vpx_ipc_swap_block( block, blockSize, byteSize );

	return readResult;
}

Int4	vpx_ipc_write_swapped_block(V_Environment environment,enum whichThread theThread,Int4 writeFileDescriptor,void* block,Nat4 blockSize,Int1 byteSize)
{
	Int4	result = kNOERROR;
	void*	copyBlock = NULL;
	
	copyBlock = malloc( blockSize );
	if( copyBlock == NULL ) return kERROR;
	memmove( copyBlock, block, blockSize );
	
	vpx_ipc_swap_block( copyBlock, blockSize, byteSize );
	result = vpx_ipc_write_block( environment, theThread, writeFileDescriptor, copyBlock, blockSize );
	free( copyBlock );
	
	return result;
}

Int4	vpx_ipc_read_byteorder(V_Environment environment,enum whichThread theThread,Int4 readFileDescriptor)
{
	Int4	readResult = 0;
	Int4	idChars = 0;
	
	readResult = vpx_ipc_read_block( environment, theThread, readFileDescriptor, &idChars, 4 );
	if( readResult != kNOERROR ) return readResult;

/* In the future, when the MartenInterpreter.framework is compiled universal binary, we want to use the above two lines
	but for now we will simulate the data */
//	idChars = CFSwapInt32HostToBig( 'mVPL' );

	if ( idChars != 'mVPL' ) gSwapPipeBytes = TRUE;
	
	if( gSwapPipeBytes ) {
		char*		modeString = (char*)X_malloc( 512 );
		Boolean		modeIsBig = (CFByteOrderGetCurrent() == CFByteOrderBigEndian);

		if( modeString == NULL ) return readResult;		
		sprintf( modeString, "*** Marten Interpereter is swapping bytes. Interpreter is %s endian.", modeIsBig ? "big" : "little" );
		
		VPLLogEngineError( modeString, TRUE, environment );
		X_free( modeString );
		AlertSoundPlay();
	}
	
	return readResult;
}

Int4	vpx_ipc_write_byteorder(V_Environment environment,enum whichThread theThread,Int4 writeFileDescriptor)
{
	Int4	block = 'mVPL';
	gSwapPipeBytes = FALSE;
	
	if( gPrintPedanticDebug) printf( "Marten big endian: %s\n", ( CFSwapInt32HostToBig( 'mVPL' ) == block ) ? "Yes" : "No" );
	
	return vpx_ipc_write_block( environment, theThread, writeFileDescriptor, &block, 4 );
}

#pragma mark ------  VPX IPC Functions  -------

Int4	vpx_IPC_error(V_Environment environment,Int1* errorMessage);
Int4	vpx_IPC_error(V_Environment environment,Int1* errorMessage)
{
#pragma unused(environment)

	printf(errorMessage);
	return kNOERROR;
}

Int4	vpx_ipc_write_block(V_Environment environment,enum whichThread theThread,Int4 writeFileDescriptor,void* block,Nat4 blockSize)
{
	Nat4	totalAmount = blockSize;
	Nat4	amountWritten = 0;
	Nat4	amountToWrite = 0;
	Int4		amount = 0;
	ThreadID	theThreadID = 0;
	OSErr		threadError = noErr;
	Int1	*theBuffer = (Int1 *) block;

/*	
	amount = write(writeFileDescriptor,block,blockSize);
	if(amount < 0) {
		vpx_IPC_error(environment,"Pipe write error in vpx_ipc_write_block\n");
		return kERROR;
	} else if (amount == 0) {
		vpx_IPC_error(environment,"Zero amount written to pipe in vpx_ipc_write_block\n");
		return kERROR;
	}
	if(environment && environment->interpreterMode == kThread) {
		switch(theThread){
			case kEditor:
				GetCurrentThread(&theThreadID);
				environment->interpreterThreadID = theThreadID;
				threadError = YieldToThread(environment->editorThreadID);
				break;
				
			case kInterpreter:
				GetCurrentThread(&theThreadID);
				environment->editorThreadID = theThreadID;
				threadError = YieldToThread(environment->interpreterThreadID);
				break;
				
			default:
				break;
				
		}
	}
*/	
		while(amountWritten < totalAmount) {
			amountToWrite = totalAmount - amountWritten < PIPE_LIMIT ? totalAmount - amountWritten : PIPE_LIMIT;
			amount = write(writeFileDescriptor,theBuffer + amountWritten,amountToWrite);
			if(amount < 0) {
				vpx_IPC_error(environment,"Pipe write error for archive in vpx_ipc_write_archive\n");
				printf("The error: %d\n", amount);
				return kERROR;
			} else if (amount == 0) {
				vpx_IPC_error(environment,"Zero amount written to pipe for archive in vpx_ipc_write_archive\n");
				return kERROR;
			} else {
				amountWritten += amount;
			}
			if(environment && environment->interpreterMode == kThread) {
				switch(theThread){
					case kEditor:
						GetCurrentThread(&theThreadID);
						environment->interpreterThreadID = theThreadID;
						threadError = YieldToThread(environment->editorThreadID);
						break;
				
					case kInterpreter:
						GetCurrentThread(&theThreadID);
						environment->editorThreadID = theThreadID;
						threadError = YieldToThread(environment->interpreterThreadID);
						break;
				
					default:
						break;
				
				}
			}
		}



	return kNOERROR;
}

Int4	vpx_ipc_read_block(V_Environment environment,enum whichThread theThread,Int4 readFileDescriptor,void* block,Nat4 blockSize)
{
	Nat4		totalAmount = blockSize;
	Nat4		amountRead = 0;
	Nat4		amountToRead = 0;
	Int4		amount = 0;
	Int1		*tempArchive = (Int1 *) block;
	ThreadID	theThreadID = 0;
	OSErr		threadError = noErr;
/*
	if(environment && environment->interpreterMode == kThread) {
		switch(theThread){
			case kEditor:
				GetCurrentThread(&theThreadID);
				environment->interpreterThreadID = theThreadID;
				threadError = YieldToThread(environment->editorThreadID);
				break;
				
			case kInterpreter:
				GetCurrentThread(&theThreadID);
				environment->editorThreadID = theThreadID;
				threadError = YieldToThread(environment->interpreterThreadID);
				break;
				
			case kAny:
				GetCurrentThread(&theThreadID);
				environment->interpreterThreadID = theThreadID;
				YieldToAnyThread();
				break;
				
			default:
				break;
				
		}
	}
	amount = read(readFileDescriptor,block,blockSize);
	if(amount < 0) {
		vpx_IPC_error(environment,"Pipe read error in vpx_ipc_read_block\n");
		return kERROR;
	} else if (amount == 0) {
		vpx_IPC_error(environment,"Zero amount read from pipe in vpx_ipc_read_block\n");
		return kERROR;
	}
*/

		while(amountRead < totalAmount){
			amountToRead = totalAmount - amountRead < PIPE_LIMIT ? totalAmount - amountRead : PIPE_LIMIT;
			if(environment && environment->interpreterMode == kThread) {
				switch(theThread){
					case kEditor:
						GetCurrentThread(&theThreadID);
						environment->interpreterThreadID = theThreadID;
						threadError = YieldToThread(environment->editorThreadID);
						break;
				
					case kInterpreter:
						GetCurrentThread(&theThreadID);
						environment->editorThreadID = theThreadID;
						threadError = YieldToThread(environment->interpreterThreadID);
						break;
				
					default:
						break;
				
				}
			}
			amount = read(readFileDescriptor,tempArchive + amountRead,amountToRead);
			if(amount < 0) {
				vpx_IPC_error(environment,"Pipe read error for archive in vpx_ipc_read_archive\n");
				printf("The error: %d\n", amount);
				return kERROR;
			} else if (amount == 0) {
				vpx_IPC_error(environment,"Zero amount read from pipe for archive in vpx_ipc_read_archive\n");
				return kERROR;
			} else {
				amountRead += amount;
			}
		}

	return kNOERROR;
}

Int4	vpx_ipc_write_word(V_Environment environment,enum whichThread theThread,Int4 writeFileDescriptor,void* word)
{
//	Int4	theWord = * ((Int4 *) word);
//	Int4	theWord = CFSwapInt32HostToBig(* ((Int4 *) word));
//	return vpx_ipc_write_swapped_block(environment,theThread,writeFileDescriptor,theWord,4,4);
	return vpx_ipc_write_swapped_block(environment,theThread,writeFileDescriptor,word,4,4);
}

Int4	vpx_ipc_read_word(V_Environment environment,enum whichThread theThread,Int4 readFileDescriptor,void* word)
{
	Int4	theWord = 0;
	Int4	returnValue = vpx_ipc_read_swapped_block(environment,theThread,readFileDescriptor,&theWord,4,4);
//	*((Int4 *) word) = CFSwapInt32HostToBig(theWord);
	*((Int4 *) word) = theWord;
	return returnValue;
//	return vpx_ipc_read_swapped_block(environment,theThread,readFileDescriptor,&word,4,4);
}

Int4	vpx_ipc_write_string(V_Environment environment,enum whichThread theThread,Int4 writeFileDescriptor,Int1* theString)
{
	Nat4	bufferSize = 0;

	if(theString) bufferSize = strlen(theString)+1;
	vpx_ipc_write_word(environment,theThread,writeFileDescriptor,&bufferSize);
	if(bufferSize) vpx_ipc_write_block(environment,theThread,writeFileDescriptor,theString,bufferSize);

	return kNOERROR;
}

Int4	vpx_ipc_read_string(V_Environment environment,enum whichThread theThread,Int4 readFileDescriptor,Int1** theString)
{
	Nat4	bufferSize = 0;

	vpx_ipc_read_word(environment,theThread,readFileDescriptor,&bufferSize);
	if(bufferSize) {
		*theString = (Int1 *) X_malloc(bufferSize*sizeof(Int1));
		vpx_ipc_read_block(environment,theThread,readFileDescriptor,*theString,bufferSize);
//		if(( *theString != NULL ) && ( gPrintPedanticDebug ) ) printf("read string: %s\n", *theString);
	} else *theString = NULL;

	return kNOERROR;
}

Int4	vpx_ipc_write_archive(V_Environment environment,enum whichThread theThread,Int4 writeFileDescriptor,V_Archive archive)
{
	Nat4	totalAmount = 0;
	Nat4	writeAmount = 0;
	Nat4	amountWritten = 0;
	Nat4	amountToWrite = 0;
	Int4	amount = 0;
	Int1	*theBuffer = (Int1 *) archive;
	Int4	result = kNOERROR;
	ThreadID	theThreadID = 0;
	OSErr		threadError = noErr;
	
	if(archive) {
		if( gPrintPedanticDebug ) printf("The archive: %d\n", (UInt32)archive);
		totalAmount = archive_size(NULL,archive);
		writeAmount = archive_size(NULL,archive);
		if( gPrintPedanticDebug ) printf( "The total archive size: %d\n", totalAmount );
		result = vpx_ipc_write_word(environment,theThread,writeFileDescriptor,&writeAmount);
		if(result != kNOERROR)  return kERROR;
		while(amountWritten < totalAmount) {
			amountToWrite = totalAmount - amountWritten < PIPE_LIMIT ? totalAmount - amountWritten : PIPE_LIMIT;
			amount = write(writeFileDescriptor,theBuffer + amountWritten,amountToWrite);
			if(amount < 0) {
				vpx_IPC_error(environment,"Pipe write error for archive in vpx_ipc_write_archive\n");
				return kERROR;
			} else if (amount == 0) {
				vpx_IPC_error(environment,"Zero amount written to pipe for archive in vpx_ipc_write_archive\n");
				return kERROR;
			} else {
				amountWritten += amount;
			}
			if(environment && environment->interpreterMode == kThread) {
				switch(theThread){
					case kEditor:
						GetCurrentThread(&theThreadID);
						environment->interpreterThreadID = theThreadID;
						threadError = YieldToThread(environment->editorThreadID);
						break;
				
					case kInterpreter:
						GetCurrentThread(&theThreadID);
						environment->editorThreadID = theThreadID;
						threadError = YieldToThread(environment->interpreterThreadID);
						break;
				
					default:
						break;
				
				}
			}
		}
	} else {
		totalAmount = 0;
		result = vpx_ipc_write_word(environment,theThread,writeFileDescriptor,&totalAmount);
		if(result != kNOERROR)  return kERROR;
	}

	return kNOERROR;
}

Int4	vpx_ipc_read_archive(V_Environment environment,enum whichThread theThread,Int4 readFileDescriptor,V_Archive *archive)
{
	Nat4		totalAmount = 0;
	Nat4		amountRead = 0;
	Nat4		amountToRead = 0;
	Int4		amount = 0;
	Int1		*tempArchive = NULL;
	ThreadID	theThreadID = 0;
	OSErr		threadError = noErr;

	vpx_ipc_read_word(environment,theThread,readFileDescriptor,&totalAmount);
	if(totalAmount) {
		tempArchive = (Int1 *) X_malloc(totalAmount);
		while(amountRead < totalAmount){
			amountToRead = totalAmount - amountRead < PIPE_LIMIT ? totalAmount - amountRead : PIPE_LIMIT;
			if(environment && environment->interpreterMode == kThread) {
				switch(theThread){
					case kEditor:
						GetCurrentThread(&theThreadID);
						environment->interpreterThreadID = theThreadID;
						threadError = YieldToThread(environment->editorThreadID);
						break;
				
					case kInterpreter:
						GetCurrentThread(&theThreadID);
						environment->editorThreadID = theThreadID;
						threadError = YieldToThread(environment->interpreterThreadID);
						break;
				
					default:
						break;
				
				}
			}
			amount = read(readFileDescriptor,tempArchive + amountRead,amountToRead);
			if(amount < 0) {
				vpx_IPC_error(environment,"Pipe read error for archive in vpx_ipc_read_archive\n");
				return kERROR;
			} else if (amount == 0) {
				vpx_IPC_error(environment,"Zero amount read from pipe for archive in vpx_ipc_read_archive\n");
				return kERROR;
			} else {
				amountRead += amount;
			}
		}
		*archive = (V_Archive) tempArchive;
	} else {
		*archive = NULL;
	}


	return kNOERROR;
}

#pragma mark -------  Command Processing Functions -------

Int4 command_spawn_stack(V_Environment environment,char *initial,V_List inputList, V_List outputList,Int4 *success)
{
		Int4	result = kNOERROR;
		V_Case	initialCase = NULL;
		Nat4	stopNext = environment->stopNext;
		
		V_Stack	stack = createStack();
	
		environment->stopNext = kFALSE;	// Otherwise execution will halt in the shell case!
		addStack(environment,stack);

		initialCase = X_create_shell_case_for_universal(environment,initial,inputList,outputList);
				
		stack->currentFrame = X_create_frame(environment,stack,initialCase,inputList,outputList,NULL,0);
		X_increment_count((V_Object) inputList);	/* When X_execute_stack pops the final frame, the list will be decremented */
		X_increment_count((V_Object) outputList);	/* so "pre-increment" to avoid garbage collection */

		result = command_loop(environment,stack);
		result = destroy_stack(environment,stack);	
		result = destroy_case(environment,initialCase);
		if(success) *success = kSuccess;
		environment->stopNext = stopNext;	// Done, so put it back!
		
		return kNOERROR;
}

Int4 command_loop(V_Environment environment,V_Stack initialStack)
{
	Int4						result = 0;

	Int4						readFileDescriptor = environment->pipeReadFileDescriptor;
	Int4						writeFileDescriptor = environment->pipeWriteFileDescriptor;
	Int1						*readFifoName = "/tmp/fifoMacVPLWrite";
	Int1						theReadFifoName[256];
	Int1						theWriteFifoName[256];

	Int4						interpreterResult = 0;
	Nat4						command = kCommandNoop;
	Nat4						bufferSize = 0;
	Int4						archiveSize = 0;
	Nat4						outputAddress = 0;
	Int1*						stringBuffer = NULL;
	Int1*						secondBuffer = NULL;
	Nat4						index = 0;
	V_Archive					archivePtr = NULL;
	
	V_Object					tempObject = NULL;
	V_Class						tempClass = NULL;
	V_Method					tempMethod = NULL;
	V_Value						tempValue = NULL;
	V_Case						tempCase = NULL;
	V_Operation					tempOperation = NULL;
	V_Root						tempRoot = NULL;
	V_Terminal					tempTerminal = NULL;
	FSSpec						fileSystemSpec;
	ProcessSerialNumber			process;
	vpl_StringPtr				filePath;
	
	OSErr						threadError = noErr;
	
	Nat4						counter = 0;
	
	for(counter=1;counter<=32;counter++) signal(counter,interrupt_handler);
/*
	if(signal(SIGABRT,interrupt_handler) == SIG_ERR) printf("Can't catch abort signal!\n");
	if(signal(SIGFPE,interrupt_handler) == SIG_ERR) printf("Can't catch floating point exception signal!\n");
	if(signal(SIGILL,interrupt_handler) == SIG_ERR) printf("Can't catch illegal instruction signal!\n");
	if(signal(SIGINT,interrupt_handler) == SIG_ERR) printf("Can't catch interrupt signal!\n");
	if(signal(SIGSEGV,interrupt_handler) == SIG_ERR) printf("Can't catch segmentation violation signal!\n");
	if(signal(SIGTERM,interrupt_handler) == SIG_ERR) printf("Can't catch terminal signal!\n");
	if(signal(SIGBREAK,interrupt_handler) == SIG_ERR) printf("Can't catch break signal!\n");
*/	
//	raise(SIGSEGV);

/*	if( gFirstCommandPass ) {
		result = vpx_ipc_read_byteorder(environment,kEditor,writeFileDescriptor);
		if(result != kNOERROR) return result;
		gFirstCommandPass = FALSE;
	}
*/	
	if(initialStack)
	{
		Nat4	stackResult = 0;
		V_Stack	stack = initialStack;
				
		GetCurrentProcess(&process);

		stackResult = stack_advance(environment,stack);
		if(stackResult) return kNOERROR;

		interpreterResult = kSuccess;
		if(environment->interpreterMode == kThread) threadError = YieldToThread(environment->editorThreadID);
		vpx_ipc_write_word(environment,kEditor,readFileDescriptor,&interpreterResult);

		bufferSize = stackResult;
		vpx_ipc_write_word(environment,kEditor,readFileDescriptor,&bufferSize);

		outputAddress = (Nat4) stack->currentFrame;
		vpx_ipc_write_word(environment,kEditor,readFileDescriptor,&outputAddress);

		if(stack->currentFrame) {
			outputAddress = stack->currentFrame->frameCase->vplCase;
		} else {
			outputAddress = 0;
		}
		vpx_ipc_write_word(environment,kEditor,readFileDescriptor,&outputAddress);

				if(stack->currentFrame && stack->currentFrame->methodName) stringBuffer = stack->currentFrame->methodName;
				else if(stack->currentFrame && stack->currentFrame->previousFrame && stack->currentFrame->previousFrame->operation->type == kLocal) stringBuffer = stack->currentFrame->previousFrame->operation->objectName;
				else stringBuffer = "Local";
				vpx_ipc_write_string(environment,kEditor,readFileDescriptor,stringBuffer);

				if(stack->currentFrame && stack->currentFrame->previousFrame) bufferSize = stack->currentFrame->previousFrame->caseCounter+1;
				else bufferSize = 0;
				vpx_ipc_write_word(environment,kEditor,readFileDescriptor,&bufferSize);

				if(stack->currentFrame && stack->currentFrame->frameCase && stack->currentFrame->frameCase->parentMethod) bufferSize = stack->currentFrame->frameCase->parentMethod->numberOfCases;
				else bufferSize = 0;
				vpx_ipc_write_word(environment,kEditor,readFileDescriptor,&bufferSize);
	}
		
	while(command) {

		if( gDrawCommandBadge ) DrawCommandBadge( kvpl_CommandReading, command, environment );
		result = vpx_ipc_read_word(environment,kEditor,writeFileDescriptor,&command);
		if( gDrawCommandBadge ) DrawCommandBadge( kvpl_CommandRunning, command, environment );
		if(result != kNOERROR) break;

		if( gPrintPedanticDebug) printf("The Command is %u\n",command);
		
		switch(command){

			#pragma mark ** kCommandNoop **
			case kCommandNoop:
				break;
				
			#pragma mark ** kCommandEnvironmentProcessSerialNumbers **
			case kCommandEnvironmentProcessSerialNumbers:
			{
				ProcessSerialNumber	process;
				pid_t				processID = 0;
				pid_t				EditorProcessID = 0;
				pid_t				InterpreterProcessID = 0;

				vpx_ipc_read_word(environment,kEditor,writeFileDescriptor,&processID);
				EditorProcessID = processID;
					if( gPrintPedanticDebug ) printf("the Editor ProcessID: %d\n", EditorProcessID );
				GetCurrentProcess(&process);
				GetProcessPID(&process,&processID);
				InterpreterProcessID = processID;
				bufferSize = processID;
				if(environment->interpreterMode == kThread) threadError = YieldToThread(environment->editorThreadID);
				vpx_ipc_write_word(environment,kEditor,readFileDescriptor,&bufferSize);


				snprintf(theReadFifoName,sizeof(theReadFifoName), "/tmp/fifoInterpreterWrite_%ld_%ld",(long int) EditorProcessID,(long int) InterpreterProcessID);
				snprintf(theWriteFifoName,sizeof(theWriteFifoName), "/tmp/fifoInterpreterRead_%ld_%ld",(long int) EditorProcessID,(long int) InterpreterProcessID);

				if( gPrintPedanticDebug ) printf( "the ReadFifoName: %s\nThe WriteFifoName: %s\n", theReadFifoName, theWriteFifoName );

				vpx_ipc_read_word(environment,kEditor,writeFileDescriptor,&bufferSize);
				
				if(environment->interpreterMode == kProcess){
					close(writeFileDescriptor);
					unlink(readFifoName);

					environment->pipeWriteFileDescriptor = writeFileDescriptor = open(theReadFifoName,O_RDONLY);
					environment->pipeReadFileDescriptor = readFileDescriptor = open(theWriteFifoName,O_WRONLY);
				}
			}
				break;

			#pragma mark ** kCommandEnvironmentPostLoad **
			case kCommandEnvironmentPostLoad:
				result = post_load(environment);
				interpreterResult = kSuccess;
				if(environment->interpreterMode == kThread) threadError = YieldToThread(environment->editorThreadID);
				vpx_ipc_write_word(environment,kEditor,readFileDescriptor,&interpreterResult);

				break;

			#pragma mark ** kCommandEnvironmentGetPostLoad **
			case kCommandEnvironmentGetPostLoad:
				interpreterResult = kSuccess;
				if(environment->interpreterMode == kThread) threadError = YieldToThread(environment->editorThreadID);
				vpx_ipc_write_word(environment,kEditor,readFileDescriptor,&interpreterResult);

				bufferSize = environment->postLoad;
				vpx_ipc_write_word(environment,kEditor,readFileDescriptor,&bufferSize);
				break;

			#pragma mark ** kCommandEnvironmentSetPostLoad **
			case kCommandEnvironmentSetPostLoad:
				vpx_ipc_read_word(environment,kEditor,writeFileDescriptor,&bufferSize);

				environment->postLoad = bufferSize;
				interpreterResult = kSuccess;
				if(environment->interpreterMode == kThread) threadError = YieldToThread(environment->editorThreadID);
				vpx_ipc_write_word(environment,kEditor,readFileDescriptor,&interpreterResult);

				break;

			#pragma mark ** kCommandEnvironmentLoadBundles **
			case kCommandEnvironmentLoadBundles:
//				vpx_ipc_read_swapped_block(environment,kEditor,writeFileDescriptor,&fileSystemSpec,sizeof(FSSpec),0);
				vpx_ipc_read_string(environment,kEditor,writeFileDescriptor,&filePath);

				vpx_ipc_read_string(environment,kEditor,writeFileDescriptor,&stringBuffer);

				if(stringBuffer) {
//					result = environment_load_bundles(environment,&fileSystemSpec,stringBuffer);
					result = environment_load_bundles_path(environment,filePath,stringBuffer);
					X_free(filePath);
					X_free(stringBuffer);
					interpreterResult = kSuccess;
				} else interpreterResult = kFailure;
				if(environment->interpreterMode == kThread) threadError = YieldToThread(environment->editorThreadID);
				vpx_ipc_write_word(environment,kEditor,readFileDescriptor,&interpreterResult);

				break;

			#pragma mark ** kCommandEnvironmentBundlePrimitives **
			case kCommandEnvironmentBundlePrimitives:
			{
				Nat4			counter = 0;
				V_Dictionary	primitivesDictionary = environment->externalPrimitivesTable;
				Nat4			numberOfPrimitives = primitivesDictionary->numberOfNodes;
				V_ExtPrimitive	thePrimitive = NULL;
				Nat4			numberOfBundlePrimitives = 0;
				
				vpx_ipc_read_string(environment,kEditor,writeFileDescriptor,&stringBuffer);
				
				interpreterResult = kSuccess;
				if(environment->interpreterMode == kThread) threadError = YieldToThread(environment->editorThreadID);
				vpx_ipc_write_word(environment,kEditor,readFileDescriptor,&interpreterResult);

				if(stringBuffer) {
					for(counter = 0;counter<numberOfPrimitives;counter++){
						thePrimitive = (V_ExtPrimitive) primitivesDictionary->nodes[counter]->object;
						if(strcmp(thePrimitive->section,stringBuffer) == 0) numberOfBundlePrimitives++;
					}

					bufferSize = numberOfBundlePrimitives;
					vpx_ipc_write_word(environment,kEditor,readFileDescriptor,&bufferSize);

					if(numberOfBundlePrimitives) {
						for(counter=0;counter<numberOfPrimitives;counter++){
							thePrimitive = (V_ExtPrimitive) primitivesDictionary->nodes[counter]->object;
							if(strcmp(thePrimitive->section,stringBuffer) == 0) {
								vpx_ipc_write_string(environment,kEditor,readFileDescriptor,thePrimitive->name);
							}
						}
					}
				} else {
					bufferSize = 0;
					vpx_ipc_write_word(environment,kEditor,readFileDescriptor,&bufferSize);
				}

				X_free(stringBuffer);
			}
				break;

			#pragma mark ** kCommandEnvironmentUnmarkHeap **
			case kCommandEnvironmentUnmarkHeap:
				if(environment->postLoad){
					tempObject = environment->heap->previous;
					while(tempObject != NULL){
						tempObject->mark = 0;
						tempObject = tempObject->previous;
					}
				}
				interpreterResult = kSuccess;
				if(environment->interpreterMode == kThread) threadError = YieldToThread(environment->editorThreadID);
				vpx_ipc_write_word(environment,kEditor,readFileDescriptor,&interpreterResult);

				break;

			#pragma mark ** kCommandExit **
			case kCommandExit:
				result = destroy_environment(environment,kTRUE,kTRUE); /* Frees the memory */
				interpreterResult = kSuccess;
				if(environment->interpreterMode == kThread) threadError = YieldToThread(environment->editorThreadID);
				vpx_ipc_write_word(environment,kEditor,readFileDescriptor,&interpreterResult);

				break;

			#pragma mark ** kCommandClassCreate **
			case kCommandClassCreate:
				vpx_ipc_read_string(environment,kEditor,writeFileDescriptor,&stringBuffer);

				if(stringBuffer) {
					interpreterResult = class_create(environment,stringBuffer,&tempClass);
					if(environment->interpreterMode == kThread) threadError = YieldToThread(environment->editorThreadID);
				vpx_ipc_write_word(environment,kEditor,readFileDescriptor,&interpreterResult);
					outputAddress = (Nat4) tempClass;
					vpx_ipc_write_word(environment,kEditor,readFileDescriptor,&outputAddress);
					X_free(stringBuffer);
				} else {
					interpreterResult = kFailure;
					if(environment->interpreterMode == kThread) threadError = YieldToThread(environment->editorThreadID);
				vpx_ipc_write_word(environment,kEditor,readFileDescriptor,&interpreterResult);
					outputAddress = (Nat4) 0;
					vpx_ipc_write_word(environment,kEditor,readFileDescriptor,&outputAddress);
				}

				break;

			#pragma mark ** kCommandClassRemove **
			case kCommandClassRemove:
				vpx_ipc_read_word(environment,kEditor,writeFileDescriptor,&bufferSize);
				tempClass = (V_Class) bufferSize;

				interpreterResult = class_remove(environment,tempClass);
				if(environment->interpreterMode == kThread) threadError = YieldToThread(environment->editorThreadID);
				vpx_ipc_write_word(environment,kEditor,readFileDescriptor,&interpreterResult);

				break;

			#pragma mark ** kCommandClassSet **
			case kCommandClassSet:
				vpx_ipc_read_word(environment,kEditor,writeFileDescriptor,&bufferSize);
				tempClass = (V_Class) bufferSize;

				vpx_ipc_read_string(environment,kEditor,writeFileDescriptor,&secondBuffer);
				if(secondBuffer) {
					interpreterResult = class_set(environment,tempClass,secondBuffer);
					X_free(secondBuffer);
				} else {
					interpreterResult = class_set(environment,tempClass,NULL);
				}

				if(environment->interpreterMode == kThread) threadError = YieldToThread(environment->editorThreadID);
				vpx_ipc_write_word(environment,kEditor,readFileDescriptor,&interpreterResult);

				break;

			#pragma mark ** kCommandAttributeInsert **
			case kCommandAttributeInsert:
				vpx_ipc_read_word(environment,kEditor,writeFileDescriptor,&bufferSize);
				tempClass = (V_Class) bufferSize;

				vpx_ipc_read_string(environment,kEditor,writeFileDescriptor,&secondBuffer);

				vpx_ipc_read_word(environment,kEditor,writeFileDescriptor,&index);
				
				if(secondBuffer) {
					if( (result = vpx_ipc_read_archive(environment,kEditor,writeFileDescriptor,&archivePtr)) != kNOERROR) interpreterResult = kFailure;
					else interpreterResult = attribute_create(environment,tempClass,secondBuffer,index,archivePtr,&tempValue);
					X_free(secondBuffer);
				} else interpreterResult = kFailure;

				if(environment->interpreterMode == kThread) threadError = YieldToThread(environment->editorThreadID);
				vpx_ipc_write_word(environment,kEditor,readFileDescriptor,&interpreterResult);
				outputAddress = (Nat4) tempValue;
				vpx_ipc_write_word(environment,kEditor,readFileDescriptor,&outputAddress);

				break;

			#pragma mark ** kCommandAttributeRemove **
			case kCommandAttributeRemove:
			{
				vpx_ipc_read_word(environment,kEditor,writeFileDescriptor,&bufferSize);
				tempValue = (V_Value) bufferSize;

				destroy_classAttribute(tempValue,environment);

				interpreterResult = kSuccess;
				if(environment->interpreterMode == kThread) threadError = YieldToThread(environment->editorThreadID);
				vpx_ipc_write_word(environment,kEditor,readFileDescriptor,&interpreterResult);
			}
				break;

			#pragma mark ** kCommandElementUnarchiveValue **
			case kCommandElementUnarchiveValue:
				vpx_ipc_read_word(environment,kEditor,writeFileDescriptor,&bufferSize);
				tempValue = (V_Value) bufferSize;
				
				tempValue->value = unarchive_object(environment,tempValue->valueArchive);

				interpreterResult = kSuccess;
				if(environment->interpreterMode == kThread) threadError = YieldToThread(environment->editorThreadID);
				vpx_ipc_write_word(environment,kEditor,readFileDescriptor,&interpreterResult);

				break;

			#pragma mark ** kCommandElementGetValue **
			case kCommandElementGetValue:
				vpx_ipc_read_word(environment,kEditor,writeFileDescriptor,&bufferSize);
				tempValue = (V_Value) bufferSize;
				if( gPrintPedanticDebug ) printf("The V_Value: %d\n", (UInt32)tempValue);
				
				interpreterResult = kSuccess;
				if(environment->interpreterMode == kThread) threadError = YieldToThread(environment->editorThreadID);
				vpx_ipc_write_word(environment,kEditor,readFileDescriptor,&interpreterResult);

				if(tempValue->value) {
					archivePtr = archive_object(environment,tempValue->value,&archiveSize);
				} else {
					archivePtr = NULL;
				}

				if( (result = vpx_ipc_write_archive(environment,kEditor,readFileDescriptor,archivePtr)) != kNOERROR) return 0;
				if(archivePtr) X_free(archivePtr);
				break;

			#pragma mark ** kCommandElementGetInteger **
			case kCommandElementGetInteger:
				vpx_ipc_read_word(environment,kEditor,writeFileDescriptor,&bufferSize);
				tempValue = (V_Value) bufferSize;

				interpreterResult = kSuccess;
				if(environment->interpreterMode == kThread) threadError = YieldToThread(environment->editorThreadID);
				vpx_ipc_write_word(environment,kEditor,readFileDescriptor,&interpreterResult);

				if(environment->postLoad) archiveSize = (Nat4) tempValue->value;
				else archiveSize = 0;
				vpx_ipc_write_word(environment,kEditor,readFileDescriptor,&archiveSize);
				break;

			#pragma mark ** kCommandElementSetValue **
			case kCommandElementSetValue:
			{
				V_Object	tempObject = NULL;
				V_Object	oldValue = NULL;
				
				vpx_ipc_read_word(environment,kEditor,writeFileDescriptor,&bufferSize);
				tempValue = (V_Value) bufferSize;

				vpx_ipc_read_word(environment,kEditor,writeFileDescriptor,&bufferSize);
				tempObject = (V_Object) bufferSize;

				oldValue = tempValue->value;
				increment_count(tempObject);
				tempValue->value = tempObject;
				decrement_count(environment,oldValue);

				interpreterResult = kSuccess;
				if(environment->interpreterMode == kThread) threadError = YieldToThread(environment->editorThreadID);
				vpx_ipc_write_word(environment,kEditor,readFileDescriptor,&interpreterResult);

			}
				break;

			#pragma mark ** kCommandMethodCreate **
			case kCommandMethodCreate:
				vpx_ipc_read_string(environment,kEditor,writeFileDescriptor,&stringBuffer);

				if(stringBuffer) {
					interpreterResult = method_create(environment,stringBuffer,&tempMethod);
					if(environment->interpreterMode == kThread) threadError = YieldToThread(environment->editorThreadID);
				vpx_ipc_write_word(environment,kEditor,readFileDescriptor,&interpreterResult);
					outputAddress = (Nat4) tempMethod;
					vpx_ipc_write_word(environment,kEditor,readFileDescriptor,&outputAddress);
					X_free(stringBuffer);
				} else {
					interpreterResult = kFailure;
					if(environment->interpreterMode == kThread) threadError = YieldToThread(environment->editorThreadID);
				vpx_ipc_write_word(environment,kEditor,readFileDescriptor,&interpreterResult);
					outputAddress = 0;
					vpx_ipc_write_word(environment,kEditor,readFileDescriptor,&outputAddress);
				}

				break;

			#pragma mark ** kCommandMethodRemove **
			case kCommandMethodRemove:
				vpx_ipc_read_word(environment,kEditor,writeFileDescriptor,&bufferSize);
				tempMethod = (V_Method) bufferSize;

				interpreterResult = method_remove(environment,tempMethod);
				if(environment->interpreterMode == kThread) threadError = YieldToThread(environment->editorThreadID);
				vpx_ipc_write_word(environment,kEditor,readFileDescriptor,&interpreterResult);

				break;

			#pragma mark ** kCommandMethodSet **
			case kCommandMethodSet:
				vpx_ipc_read_word(environment,kEditor,writeFileDescriptor,&bufferSize);
				tempMethod = (V_Method) bufferSize;

				vpx_ipc_read_string(environment,kEditor,writeFileDescriptor,&secondBuffer);
				if(secondBuffer) {
					interpreterResult = method_set(environment,tempMethod,secondBuffer);
					X_free(secondBuffer);
				} else {
					interpreterResult = method_set(environment,tempMethod,NULL);
				}

				if(environment->interpreterMode == kThread) threadError = YieldToThread(environment->editorThreadID);
				vpx_ipc_write_word(environment,kEditor,readFileDescriptor,&interpreterResult);

				break;

			#pragma mark ** kCommandCaseInsert **
			case kCommandCaseInsert:
				vpx_ipc_read_word(environment,kEditor,writeFileDescriptor,&bufferSize);
				tempMethod = (V_Method) bufferSize;

				vpx_ipc_read_word(environment,kEditor,writeFileDescriptor,&index);

				vpx_ipc_read_word(environment,kEditor,writeFileDescriptor,&bufferSize);

				interpreterResult = case_create(environment,tempMethod,index,bufferSize,&tempCase);
				if(environment->interpreterMode == kThread) threadError = YieldToThread(environment->editorThreadID);
				vpx_ipc_write_word(environment,kEditor,readFileDescriptor,&interpreterResult);
				outputAddress = (Nat4) tempCase;
				vpx_ipc_write_word(environment,kEditor,readFileDescriptor,&outputAddress);

				break;

			#pragma mark ** kCommandOperationInsert **
			case kCommandOperationInsert:
				vpx_ipc_read_word(environment,kEditor,writeFileDescriptor,&bufferSize);
				tempCase = (V_Case) bufferSize;

				vpx_ipc_read_word(environment,kEditor,writeFileDescriptor,&index);

				vpx_ipc_read_word(environment,kEditor,writeFileDescriptor,&bufferSize);

				interpreterResult = operation_create(environment,tempCase,index,bufferSize,&tempOperation);
				if(environment->interpreterMode == kThread) threadError = YieldToThread(environment->editorThreadID);
				vpx_ipc_write_word(environment,kEditor,readFileDescriptor,&interpreterResult);
				outputAddress = (Nat4) tempOperation;
				vpx_ipc_write_word(environment,kEditor,readFileDescriptor,&outputAddress);

				break;

			#pragma mark ** kCommandOperationSet **
			case kCommandOperationSet:
			{
				Nat4 			theType = kOperation;
				Nat4			operationControl = kTRUE;
				Nat4 			theAction = kContinue;
				Nat4			operationRepeat = kFALSE;
				Nat4			operationInject = 0;
				Nat4			operationSuper = kFALSE;
				Nat4			operationBreak = kFALSE;
				Nat4 			operationValue = kNormal;

				vpx_ipc_read_word(environment,kEditor,writeFileDescriptor,&bufferSize);
				tempOperation = (V_Operation) bufferSize;

				vpx_ipc_read_word(environment,kEditor,writeFileDescriptor,&theType);

				vpx_ipc_read_word(environment,kEditor,writeFileDescriptor,&operationControl);

				vpx_ipc_read_word(environment,kEditor,writeFileDescriptor,&theAction);

				vpx_ipc_read_word(environment,kEditor,writeFileDescriptor,&operationRepeat);

				vpx_ipc_read_string(environment,kEditor,writeFileDescriptor,&secondBuffer);
				
				vpx_ipc_read_word(environment,kEditor,writeFileDescriptor,&operationInject);

				vpx_ipc_read_word(environment,kEditor,writeFileDescriptor,&operationSuper);

				vpx_ipc_read_word(environment,kEditor,writeFileDescriptor,&operationBreak);

				vpx_ipc_read_word(environment,kEditor,writeFileDescriptor,&operationValue);

				interpreterResult = operation_set(environment,tempOperation,theType,operationControl,theAction,operationRepeat,secondBuffer,operationInject,operationSuper,operationBreak,operationValue);
				if(environment->interpreterMode == kThread) threadError = YieldToThread(environment->editorThreadID);
				vpx_ipc_write_word(environment,kEditor,readFileDescriptor,&interpreterResult);

			}
				break;

			#pragma mark ** kCommandRootInsert **
			case kCommandRootInsert:
				vpx_ipc_read_word(environment,kEditor,writeFileDescriptor,&bufferSize);
				tempOperation = (V_Operation) bufferSize;

				vpx_ipc_read_word(environment,kEditor,writeFileDescriptor,&index);

				interpreterResult = root_create(environment,tempOperation,index,&tempRoot);
				if(environment->interpreterMode == kThread) threadError = YieldToThread(environment->editorThreadID);
				vpx_ipc_write_word(environment,kEditor,readFileDescriptor,&interpreterResult);
				outputAddress = (Nat4) tempRoot;
				vpx_ipc_write_word(environment,kEditor,readFileDescriptor,&outputAddress);

				break;

			#pragma mark ** kCommandRootSet **
			case kCommandRootSet:
			{
				Nat4			theMode = iSimple;

				vpx_ipc_read_word(environment,kEditor,writeFileDescriptor,&bufferSize);
				tempRoot = (V_Root) bufferSize;

				vpx_ipc_read_word(environment,kEditor,writeFileDescriptor,&theMode);

				tempRoot->mode = theMode;
				interpreterResult = kSuccess;
				if(environment->interpreterMode == kThread) threadError = YieldToThread(environment->editorThreadID);
				vpx_ipc_write_word(environment,kEditor,readFileDescriptor,&interpreterResult);

			}
				break;

			#pragma mark ** kCommandTerminalInsert **
			case kCommandTerminalInsert:
				vpx_ipc_read_word(environment,kEditor,writeFileDescriptor,&bufferSize);
				tempOperation = (V_Operation) bufferSize;

				vpx_ipc_read_word(environment,kEditor,writeFileDescriptor,&index);

				interpreterResult = terminal_create(environment,tempOperation,index,&tempTerminal);
				if(environment->interpreterMode == kThread) threadError = YieldToThread(environment->editorThreadID);
				vpx_ipc_write_word(environment,kEditor,readFileDescriptor,&interpreterResult);
				outputAddress = (Nat4) tempTerminal;
				vpx_ipc_write_word(environment,kEditor,readFileDescriptor,&outputAddress);

				break;

			#pragma mark ** kCommandTerminalSet **
			case kCommandTerminalSet:
			{
				Nat4			theMode = iSimple;
				Nat4			rootIndex = 0;
				Nat4			rootOperation = 0;
				V_Root			tempLoopRoot = NULL;
				Nat4			loopRootIndex = 0;

				vpx_ipc_read_word(environment,kEditor,writeFileDescriptor,&bufferSize);
				tempTerminal = (V_Terminal) bufferSize;

				vpx_ipc_read_word(environment,kEditor,writeFileDescriptor,&theMode);

				vpx_ipc_read_word(environment,kEditor,writeFileDescriptor,&bufferSize);
				tempRoot = (V_Root) bufferSize;

				vpx_ipc_read_word(environment,kEditor,writeFileDescriptor,&rootIndex);

				vpx_ipc_read_word(environment,kEditor,writeFileDescriptor,&rootOperation);

				vpx_ipc_read_word(environment,kEditor,writeFileDescriptor,&bufferSize);
				tempLoopRoot = (V_Root) bufferSize;

				vpx_ipc_read_word(environment,kEditor,writeFileDescriptor,&loopRootIndex);

				interpreterResult = terminal_set(environment,tempTerminal,theMode,tempRoot,rootIndex,rootOperation,tempLoopRoot,loopRootIndex);
				if(environment->interpreterMode == kThread) threadError = YieldToThread(environment->editorThreadID);
				vpx_ipc_write_word(environment,kEditor,readFileDescriptor,&interpreterResult);

			}
				break;

			#pragma mark ** kCommandPersistentCreate **
			case kCommandPersistentCreate:
				vpx_ipc_read_string(environment,kEditor,writeFileDescriptor,&stringBuffer);

				if(stringBuffer) {
					if( (result = vpx_ipc_read_archive(environment,kEditor,writeFileDescriptor,&archivePtr)) != kNOERROR) interpreterResult = kFailure;
					else interpreterResult = persistent_create(environment,stringBuffer,archivePtr,&tempValue);
					X_free(stringBuffer);
				} else interpreterResult = kFailure;

				if(environment->interpreterMode == kThread) threadError = YieldToThread(environment->editorThreadID);
				vpx_ipc_write_word(environment,kEditor,readFileDescriptor,&interpreterResult);
				outputAddress = (Nat4) tempValue;
				vpx_ipc_write_word(environment,kEditor,readFileDescriptor,&outputAddress);

				break;

			#pragma mark ** kCommandPersistentRemove **
			case kCommandPersistentRemove:
				vpx_ipc_read_word(environment,kEditor,writeFileDescriptor,&bufferSize);
				tempValue = (V_Value) bufferSize;

				interpreterResult = persistent_remove(environment,tempValue->objectName);
				if(environment->interpreterMode == kThread) threadError = YieldToThread(environment->editorThreadID);
				vpx_ipc_write_word(environment,kEditor,readFileDescriptor,&interpreterResult);

				break;

			#pragma mark ** kCommandEnvironmentStep **
			case kCommandEnvironmentStep:
				environment->stopNext = kTRUE;
				interpreterResult = kSuccess;
				if(environment->interpreterMode == kThread) threadError = YieldToThread(environment->editorThreadID);
				vpx_ipc_write_word(environment,kEditor,readFileDescriptor,&interpreterResult);

				break;

			#pragma mark ** kCommandStackCreate **
			case kCommandStackCreate:
			{
				V_List	inputList = NULL;
				V_Stack	stack = NULL;
				V_List	outputList = NULL;
				
				vpx_ipc_read_string(environment,kEditor,writeFileDescriptor,&stringBuffer);

				vpx_ipc_read_archive(environment,kEditor,writeFileDescriptor,&archivePtr);

				if(archivePtr) {
					inputList = (V_List )unarchive_object(environment,archivePtr);
					X_free(archivePtr);
				} else {
					inputList = NULL;
				}

				result = stack_create(environment,stringBuffer,inputList,&stack,&outputList);
				decrement_count(environment,(V_Object) inputList);

				interpreterResult = kSuccess;
				if(environment->interpreterMode == kThread) threadError = YieldToThread(environment->editorThreadID);
				vpx_ipc_write_word(environment,kEditor,readFileDescriptor,&interpreterResult);

				outputAddress = (Nat4) stack;
				vpx_ipc_write_word(environment,kEditor,readFileDescriptor,&outputAddress);

				outputAddress = (Nat4) outputList;
				vpx_ipc_write_word(environment,kEditor,readFileDescriptor,&outputAddress);

			}
				break;

			#pragma mark ** kCommandStackAdvance **
			case kCommandStackAdvance:
			{
				V_Stack	stack = NULL;
				Nat4	stackResult = 0;
				
				vpx_ipc_read_word(environment,kEditor,writeFileDescriptor,&bufferSize);
				stack = (V_Stack) bufferSize;

				if(initialStack) stack = initialStack;

				GetCurrentProcess(&process);
				SetFrontProcess(&process);

				stackResult = stack_advance(environment,stack);
				if(initialStack && stackResult) return kNOERROR;

				interpreterResult = kSuccess;
				if(environment->interpreterMode == kThread) threadError = YieldToThread(environment->editorThreadID);
				vpx_ipc_write_word(environment,kEditor,readFileDescriptor,&interpreterResult);

				bufferSize = stackResult;
				vpx_ipc_write_word(environment,kEditor,readFileDescriptor,&bufferSize);

				outputAddress = (Nat4) stack->currentFrame;
				vpx_ipc_write_word(environment,kEditor,readFileDescriptor,&outputAddress);

				if(stack->currentFrame) {
					outputAddress = stack->currentFrame->frameCase->vplCase;
				} else {
					outputAddress = 0;
				}
				
				vpx_ipc_write_word(environment,kEditor,readFileDescriptor,&outputAddress);

				if(stack->currentFrame && stack->currentFrame->methodName) stringBuffer = stack->currentFrame->methodName;
				else if(stack->currentFrame && stack->currentFrame->previousFrame && stack->currentFrame->previousFrame->operation->type == kLocal) stringBuffer = stack->currentFrame->previousFrame->operation->objectName;
				else stringBuffer = "Local";
				vpx_ipc_write_string(environment,kEditor,readFileDescriptor,stringBuffer);

				if(stack->currentFrame && stack->currentFrame->previousFrame) bufferSize = stack->currentFrame->previousFrame->caseCounter+1;
				else bufferSize = 0;
				vpx_ipc_write_word(environment,kEditor,readFileDescriptor,&bufferSize);

				if(stack->currentFrame && stack->currentFrame->frameCase && stack->currentFrame->frameCase->parentMethod) bufferSize = stack->currentFrame->frameCase->parentMethod->numberOfCases;
				else bufferSize = 0;
				vpx_ipc_write_word(environment,kEditor,readFileDescriptor,&bufferSize);

			}
				break;

			#pragma mark ** kCommandStackRemove **
			case kCommandStackRemove:
			{
				V_Stack	stack = NULL;
				V_List	outputList = NULL;
				Nat4*	theBlock = NULL;
				Nat4	counter = 0;
				V_Object	tempObject = NULL;
				
				vpx_ipc_read_word(environment,kEditor,writeFileDescriptor,&bufferSize);
				stack = (V_Stack) bufferSize;

				vpx_ipc_read_word(environment,kEditor,writeFileDescriptor,&bufferSize);
				outputList = (V_List) bufferSize;

				result = destroy_stack(environment,stack);	

				interpreterResult = kSuccess;
				if(environment->interpreterMode == kThread) threadError = YieldToThread(environment->editorThreadID);
				vpx_ipc_write_word(environment,kEditor,readFileDescriptor,&interpreterResult);

				if(outputList) {
					if(outputList->listLength){
						theBlock = (Nat4 *) X_malloc(outputList->listLength*sizeof(Nat4));
						for(counter=0;counter<outputList->listLength;counter++){
								tempObject = outputList->objectList[counter];
//								if(tempObject) tempObject->use = 0;
								*(theBlock+counter) = (Nat4) tempObject;
								outputList->objectList[counter] = NULL;
						}
					}
					counter = outputList->listLength;
				} else {
					counter = 0;
				}

				bufferSize = counter;
				vpx_ipc_write_word(environment,kEditor,readFileDescriptor,&bufferSize);
				if(bufferSize) {
					vpx_ipc_write_swapped_block(environment,kEditor,readFileDescriptor,theBlock,bufferSize*sizeof(Nat4),0);
					X_free(theBlock);
				}

				decrement_count(environment,(V_Object) outputList);

			}
				break;

			#pragma mark ** kCommandFrameGetWindow **
			case kCommandFrameGetWindow:
			{
				V_Frame	theFrame = NULL;
				
				vpx_ipc_read_word(environment,kEditor,writeFileDescriptor,&bufferSize);
				theFrame = (V_Frame) bufferSize;

				if(theFrame) {
					bufferSize = theFrame->vplEditor;
				} else {
					bufferSize = 0;
				}

				interpreterResult = kSuccess;
				if(environment->interpreterMode == kThread) threadError = YieldToThread(environment->editorThreadID);
				vpx_ipc_write_word(environment,kEditor,readFileDescriptor,&interpreterResult);

				vpx_ipc_write_word(environment,kEditor,readFileDescriptor,&bufferSize);


			}
				break;

			#pragma mark ** kCommandFrameSetWindow **
			case kCommandFrameSetWindow:
			{
				V_Frame	theFrame = NULL;
				
				vpx_ipc_read_word(environment,kEditor,writeFileDescriptor,&bufferSize);
				theFrame = (V_Frame) bufferSize;

				vpx_ipc_read_word(environment,kEditor,writeFileDescriptor,&bufferSize);

				if(theFrame != NULL) {
					theFrame->vplEditor = bufferSize;
				}

				interpreterResult = kSuccess;
				if(environment->interpreterMode == kThread) threadError = YieldToThread(environment->editorThreadID);
				vpx_ipc_write_word(environment,kEditor,readFileDescriptor,&interpreterResult);

			}
				break;

			#pragma mark ** kCommandFrameGetCurrentOperation **
			case kCommandFrameGetCurrentOperation:
			{
				V_Frame	theFrame = NULL;
				Nat4	counter = 0;
				Nat4	numberOfOperations = 0;
				
				vpx_ipc_read_word(environment,kEditor,writeFileDescriptor,&bufferSize);
				theFrame = (V_Frame) bufferSize;

				interpreterResult = kSuccess;
				if(environment->interpreterMode == kThread) threadError = YieldToThread(environment->editorThreadID);
				vpx_ipc_write_word(environment,kEditor,readFileDescriptor,&interpreterResult);

				if(theFrame->operation) while(theFrame->frameCase->operationsList[counter++] != theFrame->operation){}
				else counter = 0;
				
				numberOfOperations = counter;
				bufferSize = numberOfOperations;
				vpx_ipc_write_word(environment,kEditor,readFileDescriptor,&bufferSize);
				if(counter) {
					Nat4	*theBlock = (Nat4 *) X_malloc(counter*sizeof(Nat4));
					for(counter=0;counter<numberOfOperations;counter++){
						*(theBlock + counter) = theFrame->frameCase->operationsList[counter]->vplOperation;
					}
					vpx_ipc_write_swapped_block(environment,kEditor,readFileDescriptor,theBlock,numberOfOperations*sizeof(Nat4),0);
					X_free(theBlock);
				}
			}
				break;

			#pragma mark ** kCommandFrameSetCurrentOperation **
			case kCommandFrameSetCurrentOperation:
			{
				V_Stack	stack = NULL;
				V_Frame	theFrame = NULL;
				Nat4	index = 0;
				Nat4	*theBlock = NULL;
				Nat4	numberOfFrames = 0;
				
				vpx_ipc_read_word(environment,kEditor,writeFileDescriptor,&bufferSize);
				stack = (V_Stack) bufferSize;

				vpx_ipc_read_word(environment,kEditor,writeFileDescriptor,&bufferSize);
				theFrame = (V_Frame) bufferSize;

				vpx_ipc_read_word(environment,kEditor,writeFileDescriptor,&bufferSize);
				index = bufferSize;

				result = environment_set_current_operation(environment,theFrame,index,&theBlock,&numberOfFrames);

				interpreterResult = kSuccess;
				if(environment->interpreterMode == kThread) threadError = YieldToThread(environment->editorThreadID);
				vpx_ipc_write_word(environment,kEditor,readFileDescriptor,&interpreterResult);

				bufferSize = numberOfFrames;
				vpx_ipc_write_word(environment,kEditor,readFileDescriptor,&bufferSize);
				if(numberOfFrames) {
					vpx_ipc_write_swapped_block(environment,kEditor,readFileDescriptor,theBlock,numberOfFrames*sizeof(Nat4),0);
					X_free(theBlock);
				}
			}
				break;

			#pragma mark ** kCommandFrameSetBreakpoint **
			case kCommandFrameSetBreakpoint:
			{
				V_Frame	theFrame = NULL;
				Nat4	theState = 0;
				Nat4	theFlag = 0;
				
				vpx_ipc_read_word(environment,kEditor,writeFileDescriptor,&bufferSize);
				theFrame = (V_Frame) bufferSize;

				vpx_ipc_read_word(environment,kEditor,writeFileDescriptor,&bufferSize);
				theState = bufferSize;

				vpx_ipc_read_word(environment,kEditor,writeFileDescriptor,&bufferSize);
				theFlag = bufferSize;

				if(theFlag == kTRUE) theFrame->stopNext = theState;
				else theFrame->stopNow = theState;

				interpreterResult = kSuccess;
				if(environment->interpreterMode == kThread) threadError = YieldToThread(environment->editorThreadID);
				vpx_ipc_write_word(environment,kEditor,readFileDescriptor,&interpreterResult);
			}
				break;

			#pragma mark ** kCommandFrameStepOut **
			case kCommandFrameStepOut:
			{
				V_Frame		theFrame = NULL;
				
				vpx_ipc_read_word(environment,kEditor,writeFileDescriptor,&bufferSize);
				theFrame = (V_Frame) bufferSize;

				if(theFrame != NULL){
					theFrame = theFrame->previousFrame;
					if(theFrame != NULL){
						theFrame->stopNow = kTRUE;
					}
				}

				interpreterResult = kSuccess;
				if(environment->interpreterMode == kThread) threadError = YieldToThread(environment->editorThreadID);
				vpx_ipc_write_word(environment,kEditor,readFileDescriptor,&interpreterResult);

			}
				break;

			#pragma mark ** kCommandFrameGetIOValue **
			case kCommandFrameGetIOValue:
			{
				V_Frame	theFrame = NULL;
				V_Root	tempRoot = NULL;
				V_Terminal	tempTerminal = NULL;
				Nat4	index = 0;
				Nat4	isRoot = 0;
				Nat4	outputAddress = 0;
				V_RootNode	theRootNode = NULL;
				V_Object	theObject = NULL;
				
				vpx_ipc_read_word(environment,kEditor,writeFileDescriptor,&bufferSize);
				theFrame = (V_Frame) bufferSize;

				vpx_ipc_read_word(environment,kEditor,writeFileDescriptor,&bufferSize);
				index = bufferSize;

				vpx_ipc_read_word(environment,kEditor,writeFileDescriptor,&bufferSize);
				isRoot = bufferSize;
				
				if(isRoot) {
					tempRoot = (V_Root) index;
				} else {
					tempTerminal = (V_Terminal) index;
					tempRoot = tempTerminal->root;
				}

				theRootNode = X_get_root_node(theFrame,tempRoot);
				if(theRootNode) theObject = theRootNode->object;
				else theObject = NULL;

				interpreterResult = kSuccess;
				if(environment->interpreterMode == kThread) threadError = YieldToThread(environment->editorThreadID);
				vpx_ipc_write_word(environment,kEditor,readFileDescriptor,&interpreterResult);

				outputAddress = (Nat4) theObject;
				vpx_ipc_write_word(environment,kEditor,readFileDescriptor,&outputAddress);
			}
				break;

			#pragma mark ** kCommandFrameSetIOValue **
			case kCommandFrameSetIOValue:
			{
				V_Frame	theFrame = NULL;
				V_Root	tempRoot = NULL;
				V_Terminal	tempTerminal = NULL;
				Nat4	index = 0;
				Nat4	isRoot = 0;
				V_RootNode	theRootNode = NULL;
				V_Object	theObject = NULL;
				
				vpx_ipc_read_word(environment,kEditor,writeFileDescriptor,&bufferSize);
				theFrame = (V_Frame) bufferSize;

				vpx_ipc_read_word(environment,kEditor,writeFileDescriptor,&bufferSize);
				index = bufferSize;

				vpx_ipc_read_word(environment,kEditor,writeFileDescriptor,&bufferSize);
				isRoot = bufferSize;
				
				vpx_ipc_read_word(environment,kEditor,writeFileDescriptor,&bufferSize);
				theObject = (V_Object) bufferSize;
				
				if(isRoot) {
					tempRoot = (V_Root) index;
				} else {
					tempTerminal = (V_Terminal) index;
					tempRoot = tempTerminal->root;
				}

				theRootNode = X_get_root_node(theFrame,tempRoot);
				if(theRootNode) {
					increment_count(theObject);
					decrement_count(environment,theRootNode->object);
					theRootNode->object = theObject;
				}

				interpreterResult = kSuccess;
				if(environment->interpreterMode == kThread) threadError = YieldToThread(environment->editorThreadID);
				vpx_ipc_write_word(environment,kEditor,readFileDescriptor,&interpreterResult);

			}
				break;

			#pragma mark ** kCommandFramePreviousFrame **
			case kCommandFramePreviousFrame:
			{
				V_Frame	theFrame = NULL;
				Nat4	outputAddress = 0;
				
				vpx_ipc_read_word(environment,kEditor,writeFileDescriptor,&bufferSize);
				theFrame = (V_Frame) bufferSize;

				interpreterResult = kSuccess;
				if(environment->interpreterMode == kThread) threadError = YieldToThread(environment->editorThreadID);
				vpx_ipc_write_word(environment,kEditor,readFileDescriptor,&interpreterResult);

				outputAddress = (Nat4) theFrame->previousFrame;
				vpx_ipc_write_word(environment,kEditor,readFileDescriptor,&outputAddress);

				if(theFrame->previousFrame) {
					outputAddress = theFrame->previousFrame->frameCase->vplCase;
				} else {
					outputAddress = 0;
				}
				
				vpx_ipc_write_word(environment,kEditor,readFileDescriptor,&outputAddress);

				theFrame = theFrame->previousFrame;
				if(theFrame && theFrame->methodName) stringBuffer = theFrame->methodName;
				else if(theFrame && theFrame->previousFrame && theFrame->previousFrame->operation->type == kLocal) stringBuffer = theFrame->previousFrame->operation->objectName;
				else stringBuffer = "Local";
				vpx_ipc_write_string(environment,kEditor,readFileDescriptor,stringBuffer);

				if(theFrame && theFrame->previousFrame) bufferSize = theFrame->previousFrame->caseCounter+1;
				else bufferSize = 0;
				vpx_ipc_write_word(environment,kEditor,readFileDescriptor,&bufferSize);

				if(theFrame && theFrame->frameCase && theFrame->frameCase->parentMethod) bufferSize = theFrame->frameCase->parentMethod->numberOfCases;
				else bufferSize = 0;
				vpx_ipc_write_word(environment,kEditor,readFileDescriptor,&bufferSize);

			}
				break;

			#pragma mark ** kCommandWatchpointGet **
			case kCommandWatchpointGet:
			{
				V_Instance		tempInstance = NULL;
				
				vpx_ipc_read_word(environment,kEditor,writeFileDescriptor,&bufferSize);
				tempInstance = (V_Instance) bufferSize;
				vpx_ipc_read_string(environment,kEditor,writeFileDescriptor,&stringBuffer);
				bufferSize = kFALSE;
				
				if(tempInstance && tempInstance->instanceIndex) {
					V_ClassEntry	tempClassEntry = environment->classIndexTable->classes[tempInstance->instanceIndex];
					if(tempClassEntry) {
						Nat4	tempNode = (Nat4) get_node(environment->valuesDictionary,stringBuffer);
						V_ValueNode tempValueNode = tempClassEntry->values[tempNode];
						if(tempValueNode) {
							V_WatchpointNode	tempWatchpointNode = tempValueNode->watchpointList;
							while(tempWatchpointNode){
								if(tempWatchpointNode->theInstance == tempInstance){
									bufferSize = kTRUE;
									break;
								}
								tempWatchpointNode = tempWatchpointNode->previous;
							}
						}
					}
				}
				
				interpreterResult = kSuccess;
				if(environment->interpreterMode == kThread) threadError = YieldToThread(environment->editorThreadID);
				vpx_ipc_write_word(environment,kEditor,readFileDescriptor,&interpreterResult);

				vpx_ipc_write_word(environment,kEditor,readFileDescriptor,&bufferSize);
			}
				break;

			#pragma mark ** kCommandWatchpointSet **
			case kCommandWatchpointSet:
			{
				V_Instance		tempInstance = NULL;

				vpx_ipc_read_word(environment,kEditor,writeFileDescriptor,&bufferSize);
				tempInstance = (V_Instance) bufferSize;

				vpx_ipc_read_string(environment,kEditor,writeFileDescriptor,&stringBuffer);
				vpx_ipc_read_word(environment,kEditor,writeFileDescriptor,&bufferSize);

				if(tempInstance && tempInstance->instanceIndex) {
					V_ClassEntry	tempClassEntry = environment->classIndexTable->classes[tempInstance->instanceIndex];
					if(tempClassEntry) {
						Nat4	tempNode = (Nat4) get_node(environment->valuesDictionary,stringBuffer);
						V_ValueNode tempValueNode = tempClassEntry->values[tempNode];
						if(tempValueNode) {
							if(bufferSize == kTRUE) {
								V_WatchpointNode	tempWatchpointNode = tempValueNode->watchpointList;
								V_WatchpointNode	newWatchpointNode = VPXMALLOC(1,VPL_WatchpointNode);
								if(tempWatchpointNode) tempWatchpointNode->next = newWatchpointNode;
								newWatchpointNode->next = NULL;
								newWatchpointNode->previous = tempWatchpointNode;
								newWatchpointNode->theInstance = tempInstance;
								tempValueNode->watchpointList = newWatchpointNode;
								tempInstance->system = tempInstance->system | kSystemWatched;
							} else {
								V_WatchpointNode	tempWatchpointNode = tempValueNode->watchpointList;
								while(tempWatchpointNode){
									if(tempWatchpointNode->theInstance == tempInstance){
										if(tempWatchpointNode->previous != NULL){
											tempWatchpointNode->previous->next = tempWatchpointNode->next;
										}
										if(tempWatchpointNode->next != NULL){
											tempWatchpointNode->next->previous = tempWatchpointNode->previous;
										} else {
											tempValueNode->watchpointList = tempWatchpointNode->previous;
										}
										X_free(tempWatchpointNode);
										tempInstance->system = tempInstance->system & !kSystemWatched;
										break;
									}
									tempWatchpointNode = tempWatchpointNode->previous;
								}
							}
						}
					}
				}

				interpreterResult = kSuccess;
				if(environment->interpreterMode == kThread) threadError = YieldToThread(environment->editorThreadID);
				vpx_ipc_write_word(environment,kEditor,readFileDescriptor,&interpreterResult);
			}
				break;

			#pragma mark ** kCommandWatchpointGetInstances **
			case kCommandWatchpointGetInstances:
			{
				V_List				instancesList = NULL;
				V_WatchpointNode	initialNode = NULL;
				V_WatchpointNode	scratchNode = NULL;
				Nat4	counter = 0;
				for(counter=0;counter<environment->classIndexTable->numberOfClasses;counter++){
					V_ClassEntry	tempClassEntry = environment->classIndexTable->classes[counter];
					if(tempClassEntry) {
						Nat4	tempNode = 0;
						for(tempNode = 0;tempNode< environment->totalValues;tempNode++){
							V_ValueNode tempValueNode = tempClassEntry->values[tempNode];
							if(tempValueNode) {
								V_WatchpointNode	tempWatchpointNode = tempValueNode->watchpointList;
								while(tempWatchpointNode){
									V_WatchpointNode	newWatchpointNode = VPXMALLOC(1,VPL_WatchpointNode);
									if(initialNode) initialNode->next = newWatchpointNode;
									newWatchpointNode->next = NULL;
									newWatchpointNode->previous = initialNode;
									newWatchpointNode->theInstance = tempWatchpointNode->theInstance;
									initialNode = newWatchpointNode;

									tempWatchpointNode = tempWatchpointNode->previous;
								}
							}
						}
					}
				}

				counter = 0;
				scratchNode = initialNode;
				while(scratchNode){
					counter++;
					scratchNode = scratchNode->previous;
				}
				
				instancesList = create_list(counter,environment);
				scratchNode = initialNode;
				for(counter=0;counter<instancesList->listLength;counter++){
					put_nth(environment,instancesList,counter+1,(V_Object) scratchNode->theInstance);
					initialNode = scratchNode;
					scratchNode = scratchNode->previous;
					X_free(initialNode);
				}
				
				instancesList->use = 0;

				interpreterResult = kSuccess;
				if(environment->interpreterMode == kThread) threadError = YieldToThread(environment->editorThreadID);
				vpx_ipc_write_word(environment,kEditor,readFileDescriptor,&interpreterResult);

				outputAddress = (Nat4) instancesList;
				vpx_ipc_write_word(environment,kEditor,readFileDescriptor,&outputAddress);
			}
				break;

			#pragma mark ** kCommandWatchpointClearAll **
			case kCommandWatchpointClearAll:
			{
				Nat4	counter = 0;
				for(counter=0;counter<environment->classIndexTable->numberOfClasses;counter++){
					V_ClassEntry	tempClassEntry = environment->classIndexTable->classes[counter];
					if(tempClassEntry) {
						Nat4	tempNode = 0;
						for(tempNode = 0;tempNode < environment->totalValues;tempNode++){
							V_ValueNode tempValueNode = tempClassEntry->values[tempNode];
							if(tempValueNode) {
								V_WatchpointNode	tempWatchpointNode = tempValueNode->watchpointList;
								while(tempWatchpointNode){
									V_WatchpointNode	otherWatchpointNode = tempWatchpointNode;
									tempWatchpointNode = tempWatchpointNode->previous;
									X_free(otherWatchpointNode);
								}
								tempValueNode->watchpointList = NULL;
							}
						}
					}
				}

				interpreterResult = kSuccess;
				if(environment->interpreterMode == kThread) threadError = YieldToThread(environment->editorThreadID);
				vpx_ipc_write_word(environment,kEditor,readFileDescriptor,&interpreterResult);
			}
				break;

		#pragma mark ** kCommandValueGetType **
		case kCommandValueGetType:
			{
				vpx_ipc_read_word(environment,kEditor,writeFileDescriptor,&bufferSize);
				tempObject = (V_Object) bufferSize;

				if(tempObject) {
					bufferSize = tempObject->type;
				} else {
					bufferSize = kObject;
				}

				interpreterResult = kSuccess;
				if(environment->interpreterMode == kThread) threadError = YieldToThread(environment->editorThreadID);
				vpx_ipc_write_word(environment,kEditor,readFileDescriptor,&interpreterResult);

				vpx_ipc_write_word(environment,kEditor,readFileDescriptor,&bufferSize);

			}
				break;

			#pragma mark ** kCommandValueGetMark **
			case kCommandValueGetMark:
			{
				vpx_ipc_read_word(environment,kEditor,writeFileDescriptor,&bufferSize);
				tempObject = (V_Object) bufferSize;

				if(tempObject) {
					bufferSize = tempObject->mark;
				} else {
					bufferSize = kFALSE;
				}

				interpreterResult = kSuccess;
				if(environment->interpreterMode == kThread) threadError = YieldToThread(environment->editorThreadID);
				vpx_ipc_write_word(environment,kEditor,readFileDescriptor,&interpreterResult);

				vpx_ipc_write_word(environment,kEditor,readFileDescriptor,&bufferSize);

			}
				break;

			#pragma mark ** kCommandValueGetList **
			case kCommandValueGetList:
			{
				V_List		tempList = NULL;
				Nat4		*theBlock = NULL;
				Nat4		counter = 0;
				
				vpx_ipc_read_word(environment,kEditor,writeFileDescriptor,&bufferSize);
				tempObject = (V_Object) bufferSize;

				if(tempObject) {
					if(tempObject->type == kList || tempObject->type == kInstance ){
						tempList = (V_List) tempObject;
						if(tempList->listLength){
							theBlock = (Nat4 *) X_malloc(tempList->listLength*sizeof(Nat4));
							for(counter=0;counter<tempList->listLength;counter++){
								*(theBlock+counter) = (Nat4) tempList->objectList[counter];
							}
						}
						counter = tempList->listLength;
					} else {
						counter = 1;
						theBlock = (Nat4 *) X_malloc(1*sizeof(Nat4));
						*(theBlock) = (Nat4) tempObject;
					}
				} else {
					counter = 1;
					theBlock = (Nat4 *) X_malloc(1*sizeof(Nat4));
					*(theBlock) = 0;
				}

				interpreterResult = kSuccess;
				if(environment->interpreterMode == kThread) threadError = YieldToThread(environment->editorThreadID);
				vpx_ipc_write_word(environment,kEditor,readFileDescriptor,&interpreterResult);

				bufferSize = counter;
				vpx_ipc_write_word(environment,kEditor,readFileDescriptor,&bufferSize);
				if(bufferSize) {
					vpx_ipc_write_swapped_block(environment,kEditor,readFileDescriptor,theBlock,bufferSize*sizeof(Nat4),0);
					X_free(theBlock);
				}

			}
				break;

			#pragma mark ** kCommandValueGetString **
			case kCommandValueGetString:
			{
				Int1		*theString = NULL;
				Int1		*tempBuffer = NULL;
				Nat4		length = 0;
				
				vpx_ipc_read_word(environment,kEditor,writeFileDescriptor,&bufferSize);
				tempObject = (V_Object) bufferSize;

				interpreterResult = kSuccess;
				if(environment->interpreterMode == kThread) threadError = YieldToThread(environment->editorThreadID);
				vpx_ipc_write_word(environment,kEditor,readFileDescriptor,&interpreterResult);

				theString = object_to_string(tempObject,environment);
				if(tempObject && tempObject->type == kString){
					length = strlen(theString)+3;
					tempBuffer = X_malloc(length);
					memset(tempBuffer,0,length);
					tempBuffer[0] = '\"';
					tempBuffer = strcat(tempBuffer,theString);
					tempBuffer[length-2] = tempBuffer[0];
					X_free(theString);
					theString = tempBuffer;
				}
				
				vpx_ipc_write_string(environment,kEditor,readFileDescriptor,theString);
				X_free(theString);

			}
				break;

			#pragma mark ** kCommandValueGetClassName **
			case kCommandValueGetClassName:
			{
				Int1		*className = NULL;
				
				vpx_ipc_read_word(environment,kEditor,writeFileDescriptor,&bufferSize);
				tempObject = (V_Object) bufferSize;

				interpreterResult = kSuccess;
				if(environment->interpreterMode == kThread) threadError = YieldToThread(environment->editorThreadID);
				vpx_ipc_write_word(environment,kEditor,readFileDescriptor,&interpreterResult);

				if(tempObject && tempObject->type == kInstance) {
					className = ((V_Instance) tempObject)->name;
				} else if(tempObject && tempObject->type == kExternalBlock) {		// If type is an external block,
					className = ((V_ExternalBlock) tempObject)->name;				// return block name.
				} else {
					className = NULL;
				}
				vpx_ipc_write_string(environment,kEditor,readFileDescriptor,className);

			}
				break;

			#pragma mark ** kCommandValueGetArchive **
			case kCommandValueGetArchive:
				vpx_ipc_read_word(environment,kEditor,writeFileDescriptor,&bufferSize);
				tempObject = (V_Object) bufferSize;
				
				interpreterResult = kSuccess;
				if(environment->interpreterMode == kThread) threadError = YieldToThread(environment->editorThreadID);
				vpx_ipc_write_word(environment,kEditor,readFileDescriptor,&interpreterResult);

				if(tempObject) {
					archivePtr = archive_object(environment,tempObject,&archiveSize);
				} else {
					archivePtr = NULL;
				}
				if( (result = vpx_ipc_write_archive(environment,kEditor,readFileDescriptor,archivePtr)) != kNOERROR) return 0;
				if(archivePtr) X_free(archivePtr);

				break;

			#pragma mark ** kCommandValueInstanceSetAttribute **
			case kCommandValueInstanceSetAttribute:
			{
				V_Instance	tempInstance = NULL;
				V_Object	oldValue = NULL;
				Int4		counter = 0;
				
				vpx_ipc_read_word(environment,kEditor,writeFileDescriptor,&bufferSize);
				tempClass = (V_Class) bufferSize;

				vpx_ipc_read_word(environment,kEditor,writeFileDescriptor,&bufferSize);
				tempInstance = (V_Instance) bufferSize;
				if(tempInstance->type != kInstance) {
					printf("CommandValueInstanceSetAttribute: Temp Instance not type instance!\n");
					tempInstance = NULL;
				}

				vpx_ipc_read_string(environment,kEditor,writeFileDescriptor,&stringBuffer);

				vpx_ipc_read_word(environment,kEditor,writeFileDescriptor,&bufferSize);
				tempObject = (V_Object) bufferSize;

				if(tempClass != NULL && tempInstance != NULL && stringBuffer != NULL){
					counter = attribute_offset(tempClass,stringBuffer);
					if(counter < 0) {
						printf("CommandValueInstanceSetAttribute: Attribute %s not found for class %s\n",stringBuffer,tempClass->name);
					} else {
						oldValue = tempInstance->objectList[counter];
						increment_count(tempObject);
						tempInstance->objectList[counter] = tempObject;
						decrement_count(environment,oldValue);
					}
				}else{
					printf("CommandValueInstanceSetAttribute: NULL class, instance, or name\n");
				}

				interpreterResult = kSuccess;
				if(environment->interpreterMode == kThread) threadError = YieldToThread(environment->editorThreadID);
				vpx_ipc_write_word(environment,kEditor,readFileDescriptor,&interpreterResult);

			}
				break;

			#pragma mark ** kCommandValueInstanceToValue **
			case kCommandValueInstanceToValue:
			{
				V_Instance	tempInstance = NULL;
				
				vpx_ipc_read_word(environment,kEditor,writeFileDescriptor,&bufferSize);
				tempClass = (V_Class) bufferSize;

				tempInstance = construct_instance(tempClass,environment);
				if(tempInstance) tempInstance->use = 0;

				interpreterResult = kSuccess;
				if(environment->interpreterMode == kThread) threadError = YieldToThread(environment->editorThreadID);
				vpx_ipc_write_word(environment,kEditor,readFileDescriptor,&interpreterResult);

				outputAddress = (Nat4) tempInstance;
				vpx_ipc_write_word(environment,kEditor,readFileDescriptor,&outputAddress);
			}
				break;

			#pragma mark ** kCommandValueStringToValue **
			case kCommandValueStringToValue:
			{
				Nat4		length = 0;
				Int1		*className = NULL;

				vpx_ipc_read_string(environment,kEditor,writeFileDescriptor,&stringBuffer);

				if(stringBuffer){
					length = strlen(stringBuffer);
					if(stringBuffer[0] == '<' && stringBuffer[length-1] == '>') {
						stringBuffer[length-1] = '\0';
						className = stringBuffer + 1;
						tempClass = get_class(environment->classTable,className);
						if(tempClass) tempObject = (V_Object) construct_instance(tempClass,environment);
						else {
							printf("CommandValueStringToValue: Could not find class %s\n",className);
							tempObject = NULL;
						}
					} else tempObject = string_to_object(stringBuffer,environment);
					X_free(stringBuffer);
				} else tempObject = NULL;

				if(tempObject) tempObject->use = 0;

				interpreterResult = kSuccess;
				if(environment->interpreterMode == kThread) threadError = YieldToThread(environment->editorThreadID);
				vpx_ipc_write_word(environment,kEditor,readFileDescriptor,&interpreterResult);
				outputAddress = (Nat4) tempObject;
				vpx_ipc_write_word(environment,kEditor,readFileDescriptor,&outputAddress);

			}
				break;

			#pragma mark ** kCommandValueListToValue **
			case kCommandValueListToValue:
			{
				V_List		theList = NULL;
				Int4		counter = 0;
				Nat4		*theBlock = NULL;
				
				vpx_ipc_read_word(environment,kEditor,writeFileDescriptor,&bufferSize);
				if(bufferSize) {
					theBlock = (Nat4 *) X_malloc(bufferSize*sizeof(Nat4));
					vpx_ipc_read_swapped_block(environment,kEditor,writeFileDescriptor,theBlock,bufferSize*sizeof(Nat4),0);
					theList = create_list(bufferSize,environment);
					theList->use = 0;
					for(counter=0;counter<bufferSize;counter++){
						tempObject = (V_Object) *(theBlock+counter);
						put_nth(environment,theList,counter+1,tempObject);
					}
					X_free(theBlock);
				} else {
					theList = create_list(0,environment);
					theList->use = 0;
				}

				interpreterResult = kSuccess;
				if(environment->interpreterMode == kThread) threadError = YieldToThread(environment->editorThreadID);
				vpx_ipc_write_word(environment,kEditor,readFileDescriptor,&interpreterResult);

				outputAddress = (Nat4) theList;
				vpx_ipc_write_word(environment,kEditor,readFileDescriptor,&outputAddress);
			}
				break;

			#pragma mark ** kCommandValueValueToValue **
			case kCommandValueValueToValue:
				vpx_ipc_read_word(environment,kEditor,writeFileDescriptor,&bufferSize);
				tempObject = (V_Object) bufferSize;
				
				tempObject = copy(environment,tempObject);
				if(tempObject) tempObject->use--;	//Bug Fix 2007-03-31 Must just decrement the count rather than setting to 0.

				interpreterResult = kSuccess;
				if(environment->interpreterMode == kThread) threadError = YieldToThread(environment->editorThreadID);
				vpx_ipc_write_word(environment,kEditor,readFileDescriptor,&interpreterResult);

				outputAddress = (Nat4) tempObject;
				vpx_ipc_write_word(environment,kEditor,readFileDescriptor,&outputAddress);
				break;

			#pragma mark ** kCommandValueArchiveToValue **
			case kCommandValueArchiveToValue:
				if( (result = vpx_ipc_read_archive(environment,kEditor,writeFileDescriptor,&archivePtr)) != kNOERROR) interpreterResult = kFailure;
				else {
					interpreterResult = kSuccess;
					tempObject = unarchive_object(environment,archivePtr);
					if(tempObject) tempObject->use = 0;
				}

				if(environment->interpreterMode == kThread) threadError = YieldToThread(environment->editorThreadID);
				vpx_ipc_write_word(environment,kEditor,readFileDescriptor,&interpreterResult);
				outputAddress = (Nat4) tempObject;
				vpx_ipc_write_word(environment,kEditor,readFileDescriptor,&outputAddress);
				break;

			#pragma mark ** kCommandValueDecrement **
			case kCommandValueDecrement:
				vpx_ipc_read_word(environment,kEditor,writeFileDescriptor,&bufferSize);
				tempObject = (V_Object) bufferSize;

				decrement_count(environment,tempObject);

				interpreterResult = kSuccess;
				if(environment->interpreterMode == kThread) threadError = YieldToThread(environment->editorThreadID);
				vpx_ipc_write_word(environment,kEditor,readFileDescriptor,&interpreterResult);
				break;

			#pragma mark ** kCommandValueIncrement **
			case kCommandValueIncrement:
				vpx_ipc_read_word(environment,kEditor,writeFileDescriptor,&bufferSize);
				tempObject = (V_Object) bufferSize;

				increment_count(tempObject);
				interpreterResult = kSuccess;
				if(environment->interpreterMode == kThread) threadError = YieldToThread(environment->editorThreadID);
				vpx_ipc_write_word(environment,kEditor,readFileDescriptor,&interpreterResult);
				break;

			#pragma mark ** kCommandOperationGetPrimitiveArity **
			case kCommandOperationGetPrimitiveArity:
			{
				V_ExtPrimitive tempPrimitive = NULL;
				
				vpx_ipc_read_string(environment,kEditor,writeFileDescriptor,&stringBuffer);

				if(stringBuffer) {
					tempPrimitive = get_extPrimitive(environment->externalPrimitivesTable,stringBuffer);

					if(tempPrimitive != NULL){
						interpreterResult = kSuccess;	
						if(environment->interpreterMode == kThread) threadError = YieldToThread(environment->editorThreadID);
				vpx_ipc_write_word(environment,kEditor,readFileDescriptor,&interpreterResult);
						outputAddress = tempPrimitive->inarity;
						vpx_ipc_write_word(environment,kEditor,readFileDescriptor,&outputAddress);
						outputAddress = tempPrimitive->outarity;
						vpx_ipc_write_word(environment,kEditor,readFileDescriptor,&outputAddress);
						outputAddress = tempPrimitive->defaultControl;
						vpx_ipc_write_word(environment,kEditor,readFileDescriptor,&outputAddress);
					}else{
						interpreterResult = kFailure;	
						if(environment->interpreterMode == kThread) threadError = YieldToThread(environment->editorThreadID);
				vpx_ipc_write_word(environment,kEditor,readFileDescriptor,&interpreterResult);
						outputAddress = 0;
						vpx_ipc_write_word(environment,kEditor,readFileDescriptor,&outputAddress);
						outputAddress = 0;
						vpx_ipc_write_word(environment,kEditor,readFileDescriptor,&outputAddress);
						outputAddress = 0;
						vpx_ipc_write_word(environment,kEditor,readFileDescriptor,&outputAddress);
					}
					X_free(stringBuffer);
				} else {
						interpreterResult = kFailure;	
						if(environment->interpreterMode == kThread) threadError = YieldToThread(environment->editorThreadID);
				vpx_ipc_write_word(environment,kEditor,readFileDescriptor,&interpreterResult);
						outputAddress = 0;
						vpx_ipc_write_word(environment,kEditor,readFileDescriptor,&outputAddress);
						outputAddress = 0;
						vpx_ipc_write_word(environment,kEditor,readFileDescriptor,&outputAddress);
						outputAddress = 0;
						vpx_ipc_write_word(environment,kEditor,readFileDescriptor,&outputAddress);
				}

			}
				break;

			#pragma mark ** kCommandOperationGetProcedureArity **
			case kCommandOperationGetProcedureArity:
			{
				V_ExtProcedure	tempProcedure = NULL;
				V_Parameter		tempParameter = NULL;
				Nat4			procedureInarity = 0;
				Nat4			procedureOutarity = 0;
				
				vpx_ipc_read_string(environment,kEditor,writeFileDescriptor,&stringBuffer);

				if(stringBuffer) {
					tempProcedure = get_extProcedure(environment->externalProceduresTable,stringBuffer);

					if(tempProcedure != NULL){
						tempParameter = tempProcedure->parameters;
						while( tempParameter != NULL ) {
							procedureInarity++;
							if(tempParameter->type == kPointerType && tempParameter->constantFlag == 0) procedureOutarity++;
							tempParameter = tempParameter->next;
						}
						if(tempProcedure->returnParameter != NULL) procedureOutarity++;
						interpreterResult = kSuccess;	
						if(environment->interpreterMode == kThread) threadError = YieldToThread(environment->editorThreadID);
				vpx_ipc_write_word(environment,kEditor,readFileDescriptor,&interpreterResult);
						outputAddress = procedureInarity;
						vpx_ipc_write_word(environment,kEditor,readFileDescriptor,&outputAddress);
						outputAddress = procedureOutarity;
						vpx_ipc_write_word(environment,kEditor,readFileDescriptor,&outputAddress);
					}else{
						interpreterResult = kFailure;	
						if(environment->interpreterMode == kThread) threadError = YieldToThread(environment->editorThreadID);
				vpx_ipc_write_word(environment,kEditor,readFileDescriptor,&interpreterResult);
						outputAddress = 0;
						vpx_ipc_write_word(environment,kEditor,readFileDescriptor,&outputAddress);
						outputAddress = 0;
						vpx_ipc_write_word(environment,kEditor,readFileDescriptor,&outputAddress);
					}
					X_free(stringBuffer);
				} else {
						interpreterResult = kFailure;	
						if(environment->interpreterMode == kThread) threadError = YieldToThread(environment->editorThreadID);
				vpx_ipc_write_word(environment,kEditor,readFileDescriptor,&interpreterResult);
						outputAddress = 0;
						vpx_ipc_write_word(environment,kEditor,readFileDescriptor,&outputAddress);
						outputAddress = 0;
						vpx_ipc_write_word(environment,kEditor,readFileDescriptor,&outputAddress);
				}

			}
				break;

			#pragma mark ** kCommandOperationGetMethodArity **
			case kCommandOperationGetMethodArity:
			{
				V_Method	theMethod = NULL;
				Nat4		caseCounter = 0;
				Nat4		operationCounter = 0;
				Bool		canFail	= kFALSE;
				
				vpx_ipc_read_string(environment,kEditor,writeFileDescriptor,&stringBuffer);

				if(stringBuffer) {
					theMethod = get_method(environment->universalsTable,stringBuffer);

					if(theMethod != NULL){
						interpreterResult = kSuccess;	
						if(environment->interpreterMode == kThread) threadError = YieldToThread(environment->editorThreadID);
				vpx_ipc_write_word(environment,kEditor,readFileDescriptor,&interpreterResult);
						outputAddress = theMethod->casesList[0]->operationsList[0]->outarity;
						vpx_ipc_write_word(environment,kEditor,readFileDescriptor,&outputAddress);
						outputAddress = theMethod->casesList[0]->operationsList[theMethod->casesList[0]->numberOfOperations-1]->inarity;
						vpx_ipc_write_word(environment,kEditor,readFileDescriptor,&outputAddress);

						for(caseCounter=0;caseCounter<theMethod->numberOfCases;caseCounter++){
							V_Case	theCase = theMethod->casesList[caseCounter];
							for(operationCounter=0;operationCounter<theCase->numberOfOperations;operationCounter++){
								V_Operation	theOperation = theCase->operationsList[operationCounter];
								if(theOperation->action == kFail) {
									canFail = kTRUE;
									break;
								}
							}
							if(canFail) break;
						}
						outputAddress = canFail;
						vpx_ipc_write_word(environment,kEditor,readFileDescriptor,&outputAddress);
					}else{
						interpreterResult = kFailure;	
						if(environment->interpreterMode == kThread) threadError = YieldToThread(environment->editorThreadID);
				vpx_ipc_write_word(environment,kEditor,readFileDescriptor,&interpreterResult);
						outputAddress = 0;
						vpx_ipc_write_word(environment,kEditor,readFileDescriptor,&outputAddress);
						outputAddress = 0;
						vpx_ipc_write_word(environment,kEditor,readFileDescriptor,&outputAddress);
						outputAddress = 0;
						vpx_ipc_write_word(environment,kEditor,readFileDescriptor,&outputAddress);
					}
					X_free(stringBuffer);
				} else {
						interpreterResult = kFailure;	
						if(environment->interpreterMode == kThread) threadError = YieldToThread(environment->editorThreadID);
				vpx_ipc_write_word(environment,kEditor,readFileDescriptor,&interpreterResult);
						outputAddress = 0;
						vpx_ipc_write_word(environment,kEditor,readFileDescriptor,&outputAddress);
						outputAddress = 0;
						vpx_ipc_write_word(environment,kEditor,readFileDescriptor,&outputAddress);
						outputAddress = 0;
						vpx_ipc_write_word(environment,kEditor,readFileDescriptor,&outputAddress);
				}

			}
				break;

			#pragma mark ** kCommandOperationGetProcedureInfo **
			case kCommandOperationGetProcedureInfo:
			{
				V_List			tempList = NULL;
				
				vpx_ipc_read_string(environment,kEditor,writeFileDescriptor,&stringBuffer);
				
				tempList = get_procedure_info(environment,stringBuffer);

				interpreterResult = kSuccess;
				if(environment->interpreterMode == kThread) threadError = YieldToThread(environment->editorThreadID);
				vpx_ipc_write_word(environment,kEditor,readFileDescriptor,&interpreterResult);

				if(tempList) {
					archivePtr = archive_object(environment,(V_Object) tempList,&archiveSize);
					decrement_count(environment,(V_Object)tempList);
				} else {
					archivePtr = NULL;
				}
				if( (result = vpx_ipc_write_archive(environment,kEditor,readFileDescriptor,archivePtr)) != kNOERROR) return 0;
				if(archivePtr) X_free(archivePtr);

			}
				break;

			#pragma mark ** kCommandOperationGetPrimitiveInfo **
			case kCommandOperationGetPrimitiveInfo:
			{
				V_String tempInfo = NULL;
				
				vpx_ipc_read_string(environment,kEditor,writeFileDescriptor,&stringBuffer);
				
				tempInfo = get_primitive_info(environment,stringBuffer);

				interpreterResult = kSuccess;
				if(environment->interpreterMode == kThread) threadError = YieldToThread(environment->editorThreadID);
				vpx_ipc_write_word(environment,kEditor,readFileDescriptor,&interpreterResult);

				if(tempInfo) {
					archivePtr = archive_object(environment,(V_Object) tempInfo,&archiveSize);
					decrement_count(environment,(V_Object)tempInfo);
				} else {
					archivePtr = NULL;
				}
				if( (result = vpx_ipc_write_archive(environment,kEditor,readFileDescriptor,archivePtr)) != kNOERROR) return 0;
				if(archivePtr) X_free(archivePtr);

			}
				break;

			#pragma mark ** kCommandOperationGetConstantInfo **
			case kCommandOperationGetConstantInfo:
			{
				V_String tempInfo = NULL;
				
				vpx_ipc_read_string(environment,kEditor,writeFileDescriptor,&stringBuffer);
				
				tempInfo = get_constant_info(environment,stringBuffer);

				interpreterResult = kSuccess;
				if(environment->interpreterMode == kThread) threadError = YieldToThread(environment->editorThreadID);
				vpx_ipc_write_word(environment,kEditor,readFileDescriptor,&interpreterResult);

				if(tempInfo) {
					archivePtr = archive_object(environment,(V_Object) tempInfo,&archiveSize);
					decrement_count(environment,(V_Object)tempInfo);
				} else {
					archivePtr = NULL;
				}
				if( (result = vpx_ipc_write_archive(environment,kEditor,readFileDescriptor,archivePtr)) != kNOERROR) return 0;
				if(archivePtr) X_free(archivePtr);

			}
				break;

			#pragma mark ** kCommandOperationGetStructureInfo **
			case kCommandOperationGetStructureInfo:
			{
				V_List			tempList = NULL;
				
				vpx_ipc_read_string(environment,kEditor,writeFileDescriptor,&stringBuffer);
				
				tempList = get_structure_info(environment,stringBuffer);

				interpreterResult = kSuccess;
				if(environment->interpreterMode == kThread) threadError = YieldToThread(environment->editorThreadID);
				vpx_ipc_write_word(environment,kEditor,readFileDescriptor,&interpreterResult);

				if(tempList) {
					archivePtr = archive_object(environment,(V_Object) tempList,&archiveSize);
					decrement_count(environment,(V_Object)tempList);
				} else {
					archivePtr = NULL;
				}
				if( (result = vpx_ipc_write_archive(environment,kEditor,readFileDescriptor,archivePtr)) != kNOERROR) return 0;
				if(archivePtr) X_free(archivePtr);

			}
				break;

			#pragma mark ** kCommandClassOrderAttributes **
			case kCommandClassOrderAttributes:
			{
				V_Dictionary	oldDictionary = NULL;
				Nat4			counter = 0;
				Nat4			*theBlock = NULL;
				V_ClassEntry	tempClassEntry = NULL;
				Nat4			index = 0;
				
				vpx_ipc_read_word(environment,kEditor,writeFileDescriptor,&bufferSize);
				tempClass = (V_Class) bufferSize;

				oldDictionary = tempClass->attributes;
	
				tempClass->attributes = create_dictionary(0);

				vpx_ipc_read_word(environment,kEditor,writeFileDescriptor,&bufferSize);
				if(bufferSize) {
					theBlock = (Nat4 *) X_malloc(bufferSize*sizeof(Nat4));
					vpx_ipc_read_swapped_block(environment,kEditor,writeFileDescriptor,theBlock,bufferSize*sizeof(Nat4),0);

					for(counter = 0; counter < bufferSize; counter++){
						tempValue = (V_Value ) *(theBlock+counter);
						add_node(tempClass->attributes,tempValue->objectName,tempValue);
					}
					X_free(theBlock);
				}
				
				reorder_instances(environment,oldDictionary,tempClass);

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
				
				tempClassEntry = environment->classIndexTable->classes[tempClass->classIndex];
				for(counter = 0; counter < tempClass->attributes->numberOfNodes; counter ++) {
					index = get_value_index(environment,tempClass->attributes->nodes[counter]->name);
					tempClassEntry->values[index]->attributeOffset = counter;
				}

				interpreterResult = kSuccess;
				if(environment->interpreterMode == kThread) threadError = YieldToThread(environment->editorThreadID);
				vpx_ipc_write_word(environment,kEditor,readFileDescriptor,&interpreterResult);

			}
				break;

			#pragma mark ** kCommandCaseOrderOperations **
			case kCommandCaseOrderOperations:
			{
				Int4		counter = 0;
				Nat4		*theBlock = NULL;
				V_Operation		*tempOperationsList = NULL;
				
				vpx_ipc_read_word(environment,kEditor,writeFileDescriptor,&bufferSize);
				tempCase = (V_Case) bufferSize;

				vpx_ipc_read_word(environment,kEditor,writeFileDescriptor,&bufferSize);
				if(bufferSize) {
					theBlock = (Nat4 *) X_malloc(bufferSize*sizeof(Nat4));
					vpx_ipc_read_swapped_block(environment,kEditor,writeFileDescriptor,theBlock,bufferSize*sizeof(Nat4),0);

					if(bufferSize == tempCase->numberOfOperations){
						for(counter = 0; counter < bufferSize; counter++){
							tempOperation = (V_Operation) *(theBlock+counter);
							tempCase->operationsList[counter] = tempOperation;
						}
					} else {
						tempOperationsList = (V_Operation *) calloc(bufferSize,sizeof (V_Operation));		
						for(counter = 0; counter < bufferSize; counter++)
						{
							tempOperation = (V_Operation) *(theBlock+counter);
							tempOperationsList[counter] = tempOperation;
						}
						if(tempCase->operationsList != NULL) X_free(tempCase->operationsList);
						tempCase->operationsList = tempOperationsList;
						tempCase->numberOfOperations = bufferSize;
					} 
					X_free(theBlock);
				}else{
					if(tempCase->operationsList != NULL) X_free(tempCase->operationsList);
					tempCase->operationsList = NULL;
					tempCase->numberOfOperations = 0;
				}
				
				interpreterResult = kSuccess;
				if(environment->interpreterMode == kThread) threadError = YieldToThread(environment->editorThreadID);
				vpx_ipc_write_word(environment,kEditor,readFileDescriptor,&interpreterResult);

			}
				break;

			#pragma mark ** kCommandMethodOrderCases **
			case kCommandMethodOrderCases:
			{
				Int4		counter = 0;
				Nat4		*theBlock = NULL;
				V_Case		*tempCasesList = NULL;
				
				vpx_ipc_read_word(environment,kEditor,writeFileDescriptor,&bufferSize);
				tempMethod = (V_Method) bufferSize;

				vpx_ipc_read_word(environment,kEditor,writeFileDescriptor,&bufferSize);
				if(bufferSize) {
					theBlock = (Nat4 *) X_malloc(bufferSize*sizeof(Nat4));
					vpx_ipc_read_swapped_block(environment,kEditor,writeFileDescriptor,theBlock,bufferSize*sizeof(Nat4),0);

					if(bufferSize == tempMethod->numberOfCases){
						for(counter = 0; counter < bufferSize; counter++){
							tempCase = (V_Case) *(theBlock+counter);
							tempMethod->casesList[counter] = tempCase;
						}
					} else {
						tempCasesList = (V_Case *) calloc(bufferSize,sizeof (V_Operation));		
						for(counter = 0; counter < bufferSize; counter++)
						{
							tempCase = (V_Case) *(theBlock+counter);
							tempCasesList[counter] = tempCase;
						}
						if(tempMethod->casesList != NULL) X_free(tempMethod->casesList);
						tempMethod->casesList = tempCasesList;
						tempMethod->numberOfCases = bufferSize;
					} 
					X_free(theBlock);
				}else{
					if(tempMethod->casesList != NULL) X_free(tempMethod->casesList);
					tempMethod->casesList = NULL;
					tempMethod->numberOfCases = 0;
				}
				
				interpreterResult = kSuccess;
				if(environment->interpreterMode == kThread) threadError = YieldToThread(environment->editorThreadID);
				vpx_ipc_write_word(environment,kEditor,readFileDescriptor,&interpreterResult);

			}
				break;

			#pragma mark ** kCommandOperationOrderInputs **
			case kCommandOperationOrderInputs:
			{
				Int4		counter = 0;
				Nat4		*theBlock = NULL;
				V_Terminal		*tempTerminalsList = NULL;
				
				vpx_ipc_read_word(environment,kEditor,writeFileDescriptor,&bufferSize);
				tempOperation = (V_Operation) bufferSize;

				vpx_ipc_read_word(environment,kEditor,writeFileDescriptor,&bufferSize);
				if(bufferSize) {
					theBlock = (Nat4 *) X_malloc(bufferSize*sizeof(Nat4));
					vpx_ipc_read_swapped_block(environment,kEditor,writeFileDescriptor,theBlock,bufferSize*sizeof(Nat4),0);

					if(bufferSize == tempOperation->inarity){
						for(counter = 0; counter < bufferSize; counter++){
							tempTerminal = (V_Terminal) *(theBlock+counter);
							tempOperation->inputList[counter] = tempTerminal;
						}
					} else {
						tempTerminalsList = (V_Terminal *) calloc(bufferSize,sizeof (V_Terminal));		
						for(counter = 0; counter < bufferSize; counter++)
						{
							tempTerminal = (V_Terminal) *(theBlock+counter);
							tempTerminalsList[counter] = tempTerminal;
						}
						if(tempOperation->inputList != NULL) X_free(tempOperation->inputList);
						tempOperation->inputList = tempTerminalsList;
						tempOperation->inarity = bufferSize;
					} 
					X_free(theBlock);
				}else{
					if(tempOperation->inputList != NULL) X_free(tempOperation->inputList);
					tempOperation->inputList = NULL;
					tempOperation->inarity = 0;
				}
				
				interpreterResult = kSuccess;
				if(environment->interpreterMode == kThread) threadError = YieldToThread(environment->editorThreadID);
				vpx_ipc_write_word(environment,kEditor,readFileDescriptor,&interpreterResult);

			}
				break;

			#pragma mark ** kCommandOperationOrderOutputs **
			case kCommandOperationOrderOutputs:
			{
				Int4		counter = 0;
				Nat4		*theBlock = NULL;
				V_Root		*tempRootsList = NULL;
				
				vpx_ipc_read_word(environment,kEditor,writeFileDescriptor,&bufferSize);
				tempOperation = (V_Operation) bufferSize;

				vpx_ipc_read_word(environment,kEditor,writeFileDescriptor,&bufferSize);
				if(bufferSize) {
					theBlock = (Nat4 *) X_malloc(bufferSize*sizeof(Nat4));
					vpx_ipc_read_swapped_block(environment,kEditor,writeFileDescriptor,theBlock,bufferSize*sizeof(Nat4),0);

					if(bufferSize == tempOperation->outarity){
						for(counter = 0; counter < bufferSize; counter++){
							tempRoot = (V_Root) *(theBlock+counter);
							tempOperation->outputList[counter] = tempRoot;
						}
					} else {
						tempRootsList = (V_Root *) calloc(bufferSize,sizeof (V_Root));		
						for(counter = 0; counter < bufferSize; counter++)
						{
							tempRoot = (V_Root) *(theBlock+counter);
							tempRootsList[counter] = tempRoot;
						}
						if(tempOperation->outputList != NULL) X_free(tempOperation->outputList);
						tempOperation->outputList = tempRootsList;
						tempOperation->outarity = bufferSize;
					} 
					X_free(theBlock);
				}else{
					if(tempOperation->outputList != NULL) X_free(tempOperation->outputList);
					tempOperation->outputList = NULL;
					tempOperation->outarity = 0;
				}
				
				interpreterResult = kSuccess;
				if(environment->interpreterMode == kThread) threadError = YieldToThread(environment->editorThreadID);
				vpx_ipc_write_word(environment,kEditor,readFileDescriptor,&interpreterResult);

			}
				break;

			#pragma mark ** kCommandCaseRemove **
			case kCommandCaseRemove:
			{
				vpx_ipc_read_word(environment,kEditor,writeFileDescriptor,&bufferSize);
				tempCase = (V_Case) bufferSize;

				destroy_case(environment,tempCase);

				interpreterResult = kSuccess;
				if(environment->interpreterMode == kThread) threadError = YieldToThread(environment->editorThreadID);
				vpx_ipc_write_word(environment,kEditor,readFileDescriptor,&interpreterResult);
			}
				break;

			#pragma mark ** kCommandOperationRemove **
			case kCommandOperationRemove:
			{
				Nat4	blockSize = 0;
				Nat4	*theBlock = NULL;

				vpx_ipc_read_word(environment,kEditor,writeFileDescriptor,&bufferSize);
				tempOperation = (V_Operation) bufferSize;

				theBlock = operation_destroy(environment,tempOperation,&blockSize);

				interpreterResult = kSuccess;
				if(environment->interpreterMode == kThread) threadError = YieldToThread(environment->editorThreadID);
				vpx_ipc_write_word(environment,kEditor,readFileDescriptor,&interpreterResult);

				bufferSize = blockSize;
				vpx_ipc_write_word(environment,kEditor,readFileDescriptor,&bufferSize);
				if(bufferSize) {
					vpx_ipc_write_swapped_block(environment,kEditor,readFileDescriptor,theBlock,bufferSize*sizeof(Nat4),0);
					X_free(theBlock);
				}
			}
				break;

			#pragma mark ** kCommandTerminalRemove **
			case kCommandTerminalRemove:
			{
				vpx_ipc_read_word(environment,kEditor,writeFileDescriptor,&bufferSize);
				tempTerminal = (V_Terminal) bufferSize;

				destroy_terminal(tempTerminal);

				interpreterResult = kSuccess;
				if(environment->interpreterMode == kThread) threadError = YieldToThread(environment->editorThreadID);
				vpx_ipc_write_word(environment,kEditor,readFileDescriptor,&interpreterResult);
			}
				break;

			#pragma mark ** kCommandRootRemove **
			case kCommandRootRemove:
			{
				vpx_ipc_read_word(environment,kEditor,writeFileDescriptor,&bufferSize);
				tempRoot = (V_Root) bufferSize;

				destroy_root(tempRoot);

				interpreterResult = kSuccess;
				if(environment->interpreterMode == kThread) threadError = YieldToThread(environment->editorThreadID);
				vpx_ipc_write_word(environment,kEditor,readFileDescriptor,&interpreterResult);
			}
				break;

			#pragma mark ** kCommandClassRename **
			case kCommandClassRename:
			{

				vpx_ipc_read_string(environment,kEditor,writeFileDescriptor,&stringBuffer);

				vpx_ipc_read_string(environment,kEditor,writeFileDescriptor,&secondBuffer);

				interpreterResult = class_rename(environment, stringBuffer, secondBuffer);

				if(environment->interpreterMode == kThread) threadError = YieldToThread(environment->editorThreadID);
				vpx_ipc_write_word(environment,kEditor,readFileDescriptor,&interpreterResult);
			}
				break;

			#pragma mark ** kCommandMethodRename **
			case kCommandMethodRename:
				vpx_ipc_read_string(environment,kEditor,writeFileDescriptor,&stringBuffer);

				vpx_ipc_read_string(environment,kEditor,writeFileDescriptor,&secondBuffer);

				interpreterResult = method_rename(environment, stringBuffer, secondBuffer);

				if(environment->interpreterMode == kThread) threadError = YieldToThread(environment->editorThreadID);
				vpx_ipc_write_word(environment,kEditor,readFileDescriptor,&interpreterResult);
				break;

			#pragma mark ** kCommandPersistentRename **
			case kCommandPersistentRename:
				vpx_ipc_read_string(environment,kEditor,writeFileDescriptor,&stringBuffer);

				vpx_ipc_read_string(environment,kEditor,writeFileDescriptor,&secondBuffer);

				interpreterResult = persistent_rename(environment, stringBuffer, secondBuffer);

				if(environment->interpreterMode == kThread) threadError = YieldToThread(environment->editorThreadID);
				vpx_ipc_write_word(environment,kEditor,readFileDescriptor,&interpreterResult);
				break;

			#pragma mark ** kCommandAttributeRename **
			case kCommandAttributeRename:
			{
				vpx_ipc_read_word(environment,kEditor,writeFileDescriptor,&bufferSize);
				tempClass = (V_Class) bufferSize;

				vpx_ipc_read_string(environment,kEditor,writeFileDescriptor,&stringBuffer);

				vpx_ipc_read_string(environment,kEditor,writeFileDescriptor,&secondBuffer);

				interpreterResult = attribute_rename(environment, tempClass, stringBuffer, secondBuffer);

				if(environment->interpreterMode == kThread) threadError = YieldToThread(environment->editorThreadID);
				vpx_ipc_write_word(environment,kEditor,readFileDescriptor,&interpreterResult);
			}
				break;

			#pragma mark ** kCommandClassHasInstances **
			case kCommandClassHasInstances:
			{
				Nat4		hasInstances = kFALSE;
				V_Object	tempObject = NULL;
				
				vpx_ipc_read_word(environment,kEditor,writeFileDescriptor,&bufferSize);
				tempClass = (V_Class) bufferSize;

				tempObject = environment->heap->previous;
				if(tempObject != NULL){
					while(tempObject->previous != NULL) {
						if(tempObject->type == kInstance && strcmp(((V_Instance)tempObject)->name,tempClass->name) == 0){
								hasInstances = kTRUE;
								break;
						}
						tempObject = tempObject->previous;
					}
				}

				interpreterResult = hasInstances;
				if(environment->interpreterMode == kThread) threadError = YieldToThread(environment->editorThreadID);
				vpx_ipc_write_word(environment,kEditor,readFileDescriptor,&interpreterResult);
			}
				break;

			#pragma mark ** kCommandClassMarkInstances **
			case kCommandClassMarkInstances:
			{
				
				vpx_ipc_read_word(environment,kEditor,writeFileDescriptor,&bufferSize);
				tempClass = (V_Class) bufferSize;

				interpreterResult = mark_instances(environment,tempClass);
				if(environment->interpreterMode == kThread) threadError = YieldToThread(environment->editorThreadID);
				vpx_ipc_write_word(environment,kEditor,readFileDescriptor,&interpreterResult);
			}
				break;

			#pragma mark ** kCommandEnvironmentNullErrors **
			case kCommandEnvironmentNullErrors:
			{
				V_ErrorNode	ptrR = NULL;
				V_ErrorNode	ptrQ = NULL;
				
				ptrR = environment->lastError;
				while(ptrR != NULL) {
					ptrQ = (V_ErrorNode) ptrR->previous;
					X_free(ptrR->errorString);
					X_free(ptrR);
					ptrR = ptrQ;
				}
				environment->lastError = NULL;

				interpreterResult = kSuccess;
				if(environment->interpreterMode == kThread) threadError = YieldToThread(environment->editorThreadID);
				vpx_ipc_write_word(environment,kEditor,readFileDescriptor,&interpreterResult);
			}
				break;

			#pragma mark ** kCommandEnvironmentGetErrors **
			case kCommandEnvironmentGetErrors:
			{
				Nat4		numberOfErrors = 0;
				
				interpreterResult = kSuccess;
				if(environment->interpreterMode == kThread) threadError = YieldToThread(environment->editorThreadID);
				vpx_ipc_write_word(environment,kEditor,readFileDescriptor,&interpreterResult);

/*
				ptrR = environment->lastError;
	
				while(ptrR != NULL) {
					ptrR = (V_ErrorNode) ptrR->previous;
					counter++;
				}

				numberOfErrors = counter;
*/
				if(environment->theFault){
					numberOfErrors = 5;
					vpx_ipc_write_word(environment,kEditor,readFileDescriptor,&numberOfErrors);

					vpx_ipc_write_string(environment,kEditor,readFileDescriptor,faultCodes[environment->theFault->theFaultCode]);

					vpx_ipc_write_string(environment,kEditor,readFileDescriptor,environment->theFault->primaryString);

					vpx_ipc_write_string(environment,kEditor,readFileDescriptor,environment->theFault->secondaryString);

					vpx_ipc_write_string(environment,kEditor,readFileDescriptor,environment->theFault->operationName);

					vpx_ipc_write_string(environment,kEditor,readFileDescriptor,environment->theFault->moduleName);
					
					dispose_fault(environment);

				} else {
					numberOfErrors = 0;
					vpx_ipc_write_word(environment,kEditor,readFileDescriptor,&numberOfErrors);
				}

			}
				break;

			#pragma mark ** kCommandEnvironmentFindOperation **
			case kCommandEnvironmentFindOperation:
			{
				Nat4		*theBlock = NULL;
				Nat4		counter = 0;
				Nat4		caseCounter = 0;
				V_Method	theMethod = NULL;
				Nat4		numberOfMatches = 0;
				Nat4		theType = kOperation;
				Nat4		theSubstring = kFALSE;
				Nat4		theCase = kFALSE;
				
				vpx_ipc_read_word(environment,kEditor,writeFileDescriptor,&bufferSize);
				theType = bufferSize;

				vpx_ipc_read_word(environment,kEditor,writeFileDescriptor,&bufferSize);
				theSubstring = bufferSize;

				vpx_ipc_read_word(environment,kEditor,writeFileDescriptor,&bufferSize);
				theCase = bufferSize;

				vpx_ipc_read_string(environment,kEditor,writeFileDescriptor,&stringBuffer);

				for(counter = 0; counter < environment->universalsTable->numberOfNodes; counter++) {
					theMethod = (V_Method) environment->universalsTable->nodes[counter]->object;
					for(caseCounter = 0; caseCounter<theMethod->numberOfCases; caseCounter++){
						numberOfMatches = case_find_operation(&theBlock,numberOfMatches,theMethod->casesList[caseCounter],stringBuffer,theType,theSubstring,theCase);
					}
				}

				interpreterResult = kSuccess;
				if(environment->interpreterMode == kThread) threadError = YieldToThread(environment->editorThreadID);
				vpx_ipc_write_word(environment,kEditor,readFileDescriptor,&interpreterResult);

				bufferSize = numberOfMatches;
				vpx_ipc_write_word(environment,kEditor,readFileDescriptor,&bufferSize);
				if(numberOfMatches) {
					vpx_ipc_write_swapped_block(environment,kEditor,readFileDescriptor,theBlock,numberOfMatches*sizeof(Nat4),0);
					X_free(theBlock);
				}

			}
				break;

			#pragma mark ** kCommandEnvironmentResourcesChanged **
			case kCommandEnvironmentResourcesChanged:

				_CFBundleFlushCaches();						// Core Foundation internal function.
		
				interpreterResult = kSuccess;
				if(environment->interpreterMode == kThread) threadError = YieldToThread(environment->editorThreadID);
				vpx_ipc_write_word(environment,kEditor,readFileDescriptor,&interpreterResult);

				break;
/*
			#pragma mark ** kCommandEnvironmentAbort **
			case kCommandEnvironmentAbort:
			{
				Nat4	*theBlock = NULL;
				Nat4	numberOfFrames = 0;
				
				result = environment_abort(environment,&theBlock,&numberOfFrames);

				interpreterResult = kSuccess;
				if(environment->interpreterMode == kThread) threadError = YieldToThread(environment->editorThreadID);
				vpx_ipc_write_word(environment,kEditor,readFileDescriptor,&interpreterResult);

				bufferSize = numberOfFrames;
				vpx_ipc_write_word(environment,kEditor,readFileDescriptor,&bufferSize);
				if(numberOfFrames) {
					vpx_ipc_write_block(environment,kEditor,readFileDescriptor,theBlock,numberOfFrames*sizeof(Nat4));
					X_free(theBlock);
				}
			}
				break;
*/
			default:
				printf("Unknown Command\n");
				break;
				

		}
	}

	return noErr;

}

pascal voidPtr thread_entry_routine(void *environmentBlock)
{
	V_Environment	environment = (V_Environment) environmentBlock;

	command_loop(environment,NULL);
	return NULL;
}

