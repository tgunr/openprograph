/*
	
	VPL_PrimitivesInterpreterControl.c
	Copyright 2004 Scott B. Anderson, All Rights Reserved.
	
*/

#ifdef __MWERKS__
#include "VPL_Compiler.h"
#elif __GNUC__
#include <MartenEngine/MartenEngine.h>


V_Stack createStack(void);
Nat4 addStack(V_Environment ptrE, V_Stack stack);
V_Case create_case( Nat4 index );
Nat4 destroy_case( V_Environment environment,V_Case ptrP);
V_Frame X_create_frame( V_Environment environment,V_Stack stack,V_Case currentCase,V_List inputList,V_List outputList,Int1 *methodName,Nat4 dataDriver);
V_Case *X_obtain_cases_by_name( V_Environment environment,V_Dictionary universalsTable,Int1 *methodName,Nat4 numberOfInputs, Nat4 numberOfOutputs);
V_Object X_increment_count( V_Object object);
enum errorType X_execute_stack( V_Environment environment,V_Stack stack);
Int4 destroy_stack(V_Environment environment, V_Stack ptrZ);


#endif	

#pragma mark ------- General Routines -------

long VPL_TestExtProcedure(long left, ...);
long VPL_TestExtProcedure(long left, ...)
{
	long result = left;
	
	return result;
}

long VPL_TestCallback(long input, const void *functionPtr);
long VPL_TestCallback(long input, const void *functionPtr)
{
	long result = 0;
	long (*addSome)(long);
	
	addSome = (void *) functionPtr;
	
//	result = (*addSome)(input);
	result = addSome(input);
	
	return result;
}

long VPL_TestCallbackVariableArg(long input, const void *functionPtr);
long VPL_TestCallbackVariableArg(long input, const void *functionPtr)
{
	long result = 0;
	long (*addSome)(long,...);
	
	short xOne = 1;
	long xTwo = 2;
	float xThree = 3.3;
	double xFour = 4.5;
	
	addSome = (void *) functionPtr;
	
//	result = (*addSome)(input);
	result = addSome(4,input,xOne,xTwo,xThree,xFour);
	
	return result;
}

	VPL_ExtField _VPL_ExtProcedure_4 = { "returnParameter",12,4,kPointerType,"VPL_Parameter",1,24,"T*",NULL};
	VPL_ExtField _VPL_ExtProcedure_3 = { "parameters",8,4,kPointerType,"VPL_Parameter",1,24,"T*",&_VPL_ExtProcedure_4};
	VPL_ExtField _VPL_ExtProcedure_2 = { "functionPtr",4,4,kPointerType,"void",1,0,"T*",&_VPL_ExtProcedure_3};
	VPL_ExtField _VPL_ExtProcedure_1 = { "name",0,4,kPointerType,"char",1,1,"T*",&_VPL_ExtProcedure_2};
	VPL_ExtStructure _VPL_ExtProcedure_S = {"VPL_ExtProcedure",&_VPL_ExtProcedure_1};

	VPL_ExtField _VPL_Parameter_6 = { "next",20,4,kPointerType,"VPL_Parameter",1,24,"T*",NULL};
	VPL_ExtField _VPL_Parameter_5 = { "constantFlag",16,4,kUnsignedType,"VPL_Parameter",1,24,"unsigned long",&_VPL_Parameter_6};
	VPL_ExtField _VPL_Parameter_4 = { "indirection",12,4,kUnsignedType,"VPL_Parameter",1,24,"unsigned long",&_VPL_Parameter_5};
	VPL_ExtField _VPL_Parameter_3 = { "name",8,4,kPointerType,"char",1,1,"T*",&_VPL_Parameter_4};
	VPL_ExtField _VPL_Parameter_2 = { "size",4,4,kUnsignedType,"char",1,1,"unsigned long",&_VPL_Parameter_3};
	VPL_ExtField _VPL_Parameter_1 = { "type",0,4,kUnsignedType,"char",1,1,"unsigned long",&_VPL_Parameter_2};
	VPL_ExtStructure _VPL_Parameter_S = {"VPL_Parameter",&_VPL_Parameter_1};

	VPL_Parameter _vpl_WatchpointGetCallbackProc_4 = { kPointerType,0,"V_Object",1,1,NULL};
	VPL_Parameter _vpl_WatchpointGetCallbackProc_3 = { kPointerType,0,"char",1,1,&_vpl_WatchpointGetCallbackProc_4};
	VPL_Parameter _vpl_WatchpointGetCallbackProc_2 = { kPointerType,0,"V_Instance",1,1,&_vpl_WatchpointGetCallbackProc_3};
	VPL_Parameter _vpl_WatchpointGetCallbackProc_1 = { kPointerType,0,"void",1,1,&_vpl_WatchpointGetCallbackProc_2};
	VPL_ExtProcedure _vpl_WatchpointGetCallbackProc_F = {"vpl_WatchpointGetCallbackProc",NULL,&_vpl_WatchpointGetCallbackProc_1,NULL};

	VPL_Parameter _vpl_WatchpointSetCallbackProc_5 = { kPointerType,0,"V_Object",1,1,NULL};
	VPL_Parameter _vpl_WatchpointSetCallbackProc_4 = { kPointerType,0,"V_Object",1,1,&_vpl_WatchpointSetCallbackProc_5};
	VPL_Parameter _vpl_WatchpointSetCallbackProc_3 = { kPointerType,0,"char",1,1,&_vpl_WatchpointSetCallbackProc_4};
	VPL_Parameter _vpl_WatchpointSetCallbackProc_2 = { kPointerType,0,"V_Instance",1,1,&_vpl_WatchpointSetCallbackProc_3};
	VPL_Parameter _vpl_WatchpointSetCallbackProc_1 = { kPointerType,0,"void",1,1,&_vpl_WatchpointSetCallbackProc_2};
	VPL_ExtProcedure _vpl_WatchpointSetCallbackProc_F = {"vpl_WatchpointSetCallbackProc",NULL,&_vpl_WatchpointSetCallbackProc_1,NULL};

	VPL_Parameter _TestCallbackVariableProc_R = { kLongType,4,NULL,0,0,NULL};
	VPL_Parameter _TestCallbackVariableProc_2 = { kVoidType,0,NULL,0,0,NULL};
	VPL_Parameter _TestCallbackVariableProc_1 = { kLongType,4,NULL,0,0,&_TestCallbackVariableProc_2};
	VPL_ExtProcedure _TestCallbackVariableProc_F = {"TestCallbackVariableProc",NULL,&_TestCallbackVariableProc_1,&_TestCallbackVariableProc_R};

	VPL_Parameter _TestCallbackProc_R = { kLongType,4,NULL,0,0,NULL};
	VPL_Parameter _TestCallbackProc_1 = { kLongType,4,NULL,0,0,NULL};
	VPL_ExtProcedure _TestCallbackProc_F = {"TestCallbackProc",NULL,&_TestCallbackProc_1,&_TestCallbackProc_R};

	VPL_Parameter _TestCallback_R = { kLongType,4,NULL,0,0,NULL};
	VPL_Parameter _TestCallback_2 = { kPointerType,0,"void",1,1,NULL};
	VPL_Parameter _TestCallback_1 = { kLongType,4,NULL,0,0,&_TestCallback_2};
	VPL_ExtProcedure _TestCallback_F = {"VPL_TestCallback",VPL_TestCallback,&_TestCallback_1,&_TestCallback_R};

	VPL_Parameter _TestCallbackVariableArg_R = { kLongType,4,NULL,0,0,NULL};
	VPL_Parameter _TestCallbackVariableArg_2 = { kPointerType,0,"void",1,1,NULL};
	VPL_Parameter _TestCallbackVariableArg_1 = { kLongType,4,NULL,0,0,&_TestCallbackVariableArg_2};
	VPL_ExtProcedure _TestCallbackVariableArg_F = {"VPL_TestCallbackVariableArg",VPL_TestCallbackVariableArg,&_TestCallbackVariableArg_1,&_TestCallbackVariableArg_R};

	VPL_Parameter _TestExtProcedure_R = { kLongType,4,NULL,0,0,NULL};
	VPL_Parameter _TestExtProcedure_2 = { kLongType,4,NULL,0,0,NULL};
	VPL_Parameter _TestExtProcedure_1 = { kLongType,4,NULL,0,0,&_TestExtProcedure_2};
	VPL_ExtProcedure _TestExtProcedure_F = {"VPL_TestExtProcedure",VPL_TestExtProcedure,&_TestExtProcedure_1,&_TestExtProcedure_R};

	VPL_ExtConstant _kVoidType_C = {"kVoidType",10,NULL};
	VPL_ExtConstant _kStructureType_C = {"kStructureType",9,NULL};
	VPL_ExtConstant _kPointerType_C = {"kPointerType",8,NULL};
	VPL_ExtConstant _kLongType_C = {"kLongType",7,NULL};
	VPL_ExtConstant _kUnsignedType_C = {"kUnsignedType",6,NULL};
	VPL_ExtConstant _kShortType_C = {"kShortType",5,NULL};
	VPL_ExtConstant _kCharType_C = {"kCharType",4,NULL};
	VPL_ExtConstant _kEnumType_C = {"kEnumType",3,NULL};
	VPL_ExtConstant _kDoubleType_C = {"kDoubleType",2,NULL};
	VPL_ExtConstant _kFloatType_C = {"kFloatType",1,NULL};
	VPL_ExtConstant _kIntType_C = {"kIntType",0,NULL};

Int4 VPLP_debug_2D_object( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_debug_2D_object( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{

	V_Object 			object = NULL;
	V_Undefined 		undefined = NULL;
	V_None		 		none = NULL;
	V_Boolean	 		boolean = NULL;
	V_Integer	 		integer = NULL;
	V_Real		 		real = NULL;
	V_String	 		string = NULL;
	V_List		 		list = NULL;
	V_Instance	 		instance = NULL;
	V_ExternalBlock 	external = NULL;

	Int1	*moduleName = NULL;

	if(primInArity != 1) return record_error("debug-object: Inarity not 1!",moduleName,kWRONGINARITY,environment);
	if(primOutArity != 0) return record_error("debug-object: Outarity not 0!",moduleName,kWRONGOUTARITY,environment);
	
	object = VPLPrimGetInputObject(0,primitive,environment);

	if(object != NULL){
	switch(object->type){
		case kObject:
			break;
		case kUndefined:
			undefined = (V_Undefined) object;
			break;
		case kNone:
			none = (V_None) object;
			break;
		case kBoolean:
			boolean = (V_Boolean) object;
			break;
		case kInteger:
			integer = (V_Integer) object;
			break;
		case kReal:
			real = (V_Real) object;
			break;
		case kString:
			string = (V_String) object;
			break;
		case kList:
			list = (V_List) object;
			break;
		case kInstance:
			instance = (V_Instance) object;
			break;
		case kExternalBlock:
			external = (V_ExternalBlock) object;
			break;
	}
	}
	*trigger = kSuccess;	
	return kNOERROR;
}

Int4 VPLP_call( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_call( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	V_Object	object = NULL;	
	Int1		*primName = "call";
	V_List		outputList = NULL;

	Int4				result = 0;
	Int4				methodSuccess = kSuccess;
	
	vpl_StringPtr		methodName = NULL;
	V_List				inputList = NULL;
	vpl_Integer			numberOfOutputs =  0;

	Int4	(*spawnPtr)(V_Environment,char *,V_List , V_List ,Int4 *);

#ifdef VPL_VERBOSE_ENGINE
		result = VPLPrimCheckInputArity(environment,primName, primInArity, 3 );
		if( result != kNOERROR ) return result;

		result = VPLPrimCheckOutputArityMin(environment,primName, primOutArity, 0 );
		if( result != kNOERROR ) return result;

		result = VPLPrimCheckOutputArityMax(environment,primName, primOutArity, 1 );
		if( result != kNOERROR ) return result;

		result = VPLPrimCheckInputObjectType( kString,0,primName, primitive, environment );
		if( result != kNOERROR ) return result;

		result = VPLPrimCheckInputObjectType( kList,1,primName, primitive, environment );
		if( result != kNOERROR ) return result;

		result = VPLPrimCheckInputObjectType( kInteger,2,primName, primitive, environment );
		if( result != kNOERROR ) return result;

#endif

	*trigger = kFailure;	

	result = VPLPrimGetInputObjectString(&methodName,0,primName,primitive,environment);
	if( result != kNOERROR ) return result;

	object = VPLPrimGetInputObject(1,primitive,environment);
	inputList = (V_List) object;

	result = VPLPrimGetInputObjectInteger(&numberOfOutputs,2,primName,primitive,environment);
	if( result != kNOERROR ) return result;

	if(primOutArity == 1) outputList = create_list(numberOfOutputs,environment); // Create object, add to heap, set refcount

	if(environment->logging){
		V_Object	theInstance = NULL;
		Int1		*fullMethodName = NULL;
		Nat4		inarity = 0;
		Nat4		outarity = 0;
		V_Case		*initialCases = NULL;

		if(inputList->objectList) theInstance = inputList->objectList[0];
		fullMethodName = X_operation_name_instance(environment,methodName, theInstance);
		if(!fullMethodName) return record_error("call: Full method name not constructed: ",methodName,kERROR,environment);

		initialCases = X_obtain_cases_by_name(environment,environment->universalsTable,fullMethodName,inputList->listLength,numberOfOutputs);

		if(!initialCases) {
			Int1	*tempInarity = X_malloc( 4 );
			Int1	*tempOutarity = X_malloc( 4 );
			if (tempInarity != NULL && tempOutarity) {
				sprintf( tempInarity, "%u",(unsigned int) inputList->listLength );
				sprintf( tempOutarity, "%u",(unsigned int) numberOfOutputs );
				record_fault(environment,kNonexistentMethod,fullMethodName,tempInarity,tempOutarity,primName);
			} else record_fault(environment,kNonexistentMethod,fullMethodName,"NULL","NULL",primName);
			record_error("call: Method not found: ",fullMethodName,kERROR,environment);
			X_free(tempInarity);
			X_free(tempOutarity);
			X_free(fullMethodName);
			return kERROR;
		}

		inarity = initialCases[0]->operationsList[0]->outarity;
		if(inarity != inputList->listLength) {
			Int1	*tempInarity = X_malloc( 4 );
			Int1	*tempOutarity = X_malloc( 4 );
			if (tempInarity != NULL && tempOutarity) {
				sprintf( tempInarity, "%u",(unsigned int) inputList->listLength );
				sprintf( tempOutarity, "%u",(unsigned int) numberOfOutputs );
				record_fault(environment,kIncorrectInarity,fullMethodName,tempInarity,tempOutarity,primName);
			} else record_fault(environment,kIncorrectInarity,fullMethodName,"NULL","NULL",primName);
			record_error("call: Number of inputs does not match inarity of: ",fullMethodName,kERROR,environment);
			X_free(tempInarity);
			X_free(tempOutarity);
			X_free(fullMethodName);
			return kERROR;
		}

		outarity = initialCases[0]->operationsList[initialCases[0]->numberOfOperations-1]->inarity;
		if(outarity != numberOfOutputs) {
			Int1	*tempInarity = X_malloc( 4 );
			Int1	*tempOutarity = X_malloc( 4 );
			if (tempInarity != NULL && tempOutarity) {
				sprintf( tempInarity, "%u",(unsigned int) inputList->listLength );
				sprintf( tempOutarity, "%u",(unsigned int) numberOfOutputs );
				record_fault(environment,kIncorrectOutarity,fullMethodName,tempInarity,tempOutarity,primName);
			} else record_fault(environment,kIncorrectOutarity,fullMethodName,"NULL","NULL",primName);
			record_error("call: Number of outputs does not match outarity of: ",fullMethodName,kERROR,environment);
			X_free(tempInarity);
			X_free(tempOutarity);
			X_free(fullMethodName);
			return kERROR;
		}

		X_free(fullMethodName);
	}
	
	spawnPtr = environment->stackSpawner;
	result = spawnPtr(environment,methodName,inputList,outputList,&methodSuccess);

	if(primOutArity == 1) VPLPrimSetOutputObject(environment,primInArity,0,primitive,(V_Object) outputList);

	*trigger = methodSuccess;	
	return kNOERROR;
}

V_Case X_create_shell_case_for_procedure(V_Environment environment,char *initial,V_List inputList, V_List outputList);
V_Case X_create_shell_case_for_procedure(V_Environment environment,char *initial,V_List inputList, V_List outputList)
{
	Int4		result = 0;
	V_Case		ptrA = NULL;
	Nat4		counter = 0;
	V_Operation			tempOperation = NULL;
	V_Operation			tempInputBar = NULL;
	V_Operation			tempOutputBar = NULL;
	V_Root				tempRoot = NULL;
	V_Terminal			tempTerminal = NULL;

	ptrA = create_case(0);

	tempInputBar = operation_add(ptrA,environment);
	tempInputBar = operation_to_input_bar(tempInputBar,environment);
	if(inputList != NULL){
		for(counter = 0; counter < inputList->listLength; counter++) {
			tempRoot = output_insert(0,tempInputBar,environment);
			tempRoot->tempObject = inputList->objectList[counter];
		}
	}
	
	tempOperation = operation_add(ptrA,environment);
	tempOperation = operation_to_extprocedure(tempOperation,environment,inputList->listLength,outputList->listLength,initial);

	tempOutputBar = operation_add(ptrA,environment);
	tempOutputBar = operation_to_output_bar(tempOutputBar,environment);
	if(outputList != NULL){
		for(counter = 0; counter < outputList->listLength; counter++){
			tempTerminal = input_insert(0,tempOutputBar,environment);	
		}
	}

	if(inputList != NULL){
		for(counter = 0; counter < inputList->listLength; counter++) {
			result = connect_root_to_terminal(ptrA,counter+1,0,counter+1,1);
		}
	}
	if(outputList != NULL){
		for(counter = 0; counter < outputList->listLength; counter++) {
			result = connect_root_to_terminal(ptrA,counter+1,1,counter+1,2);
		}
	}

	return ptrA;
}

Int4 VPLP_call_2D_external( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_call_2D_external( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	Int4		result = 0;
	V_Case		ptrA = NULL;

	V_Object	object = NULL;	
	Int1		*methodName = "";
	V_List		inputList = NULL;
	V_List		outputList = NULL;
	Nat4		numberOfOutputs =  0;

	V_Stack				stack = NULL;

	Int1		*primName = "call-external";

#ifdef VPL_VERBOSE_ENGINE
		result = VPLPrimCheckInputArity(environment,primName, primInArity, 3 );
		if( result != kNOERROR ) return result;

		result = VPLPrimCheckOutputArityMin(environment,primName, primOutArity, 0 );
		if( result != kNOERROR ) return result;

		result = VPLPrimCheckOutputArityMax(environment,primName, primOutArity, 1 );
		if( result != kNOERROR ) return result;

		result = VPLPrimCheckInputObjectType( kString,0,primName, primitive, environment );
		if( result != kNOERROR ) return result;

		result = VPLPrimCheckInputObjectType( kList,1,primName, primitive, environment );
		if( result != kNOERROR ) return result;

		result = VPLPrimCheckInputObjectType( kInteger,2,primName, primitive, environment );
		if( result != kNOERROR ) return result;

#endif

	*trigger = kFailure;	

	object = VPLPrimGetInputObject(0,primitive,environment);
	methodName = ((V_String) object)->string;

	object = VPLPrimGetInputObject(1,primitive,environment);
	inputList = (V_List) object;

	object = VPLPrimGetInputObject(2,primitive,environment);
	numberOfOutputs = ((V_Integer) object)->value;

	if(primOutArity == 1) outputList = create_list(numberOfOutputs,environment);

	ptrA = X_create_shell_case_for_procedure(environment,methodName,inputList,outputList);

	stack = createStack();
	addStack(environment,stack);

	stack->currentFrame = X_create_frame(environment,stack,ptrA,inputList,outputList,NULL,0);
	X_increment_count((V_Object) inputList);	/* When X_execute_stack pops the final frame, the list will be decremented */
	X_increment_count((V_Object) outputList);	/* so "pre-increment" to avoid garbage collection */

/* Execute Stack */
	result = X_execute_stack(environment,stack);
	if(result != kNOERROR) return record_error("call-external: Execution error",primName,kERROR,environment);

	result = destroy_stack(environment,stack);
	result = destroy_case(environment,ptrA);

	if(primOutArity == 1) VPLPrimSetOutputObject(environment,primInArity,0,primitive,(V_Object) outputList);
	*trigger = kSuccess;	
	return kNOERROR;
}

vpl_Boolean is_compiled( V_Environment environment );
vpl_Boolean is_compiled( V_Environment environment )
{
//	#pragma unused ( environment )

/* Currently, when creating a bundle, code is running interpreted (returns kFALSE) */
/* vice versa, when creating a library, code is running compiled (returns kTRUE) */

//	if( __ide_target("Standard Library") || __ide_target("MacVPL OSX All Files")) return kTRUE;
	if( environment->compiled ) return kTRUE;
	
	return kFALSE;
}

Int4 VPLP_compiled_3F_( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_compiled_3F_( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	Int1		*primName = "compiled?";
	Nat4		result = kNOERROR;
	
#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity(environment,primName, primInArity, 0 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckOutputArityMax(environment,primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;

#endif
	
	result = VPLPrimSetOutputObjectBoolOrFail( environment, trigger, primInArity, primOutArity, primitive, is_compiled(environment) );

	return result;
}

#ifdef __i386__
Int4 VPLP_function_2D_pointer( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_function_2D_pointer( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	V_Object	block = NULL;
	V_ExternalBlock	inputExternalBlock = NULL;

	Int1	*moduleName = NULL;
	Int1		*primName = "function-pointer";
	Int4		result = kNOERROR;

	Nat4		inarity = primInArity-1;
	Nat4		outarity = primOutArity;

	register long tempInt = 0;
	float tempFloat = 0.0;
	double tempDouble = 0.0;
	long tempInt2 = 0;


	V_Object object = NULL;
	V_String pointerString = NULL;
	V_ExternalBlock externalBlock = NULL;
	V_ExternalBlock outputBlock = NULL;
	void *tempPointer = NULL;
	Nat4 *tempStructPointer = NULL;
	Nat4 *parameterArea = NULL;
	V_Parameter tempParameter = NULL;
	V_ExtProcedure tempProcedure = NULL;
	V_Input tempInput = NULL;
	VPL_InputList tempInputList;
	Nat4	*inputSizes = NULL;
	
	Nat4 gprCounter = 0;
	Nat4 fpCounter = 0;
	Nat4 argument = 0;
	Nat4 outputCounter = 0;
	Nat4 blockSize = 0;
	Nat4 theParameterType = 0;
	VPL_Input returnInteger;
	V_Input returnIntegerPtr = &returnInteger;
	VPL_Input returnFloat;
	V_Input returnFloatPtr = &returnFloat;
	VPL_Input returnDouble;
	V_Input returnDoublePtr = &returnDouble;
	
	Nat4 procedureInarity = 0;
	Nat4 procedureOutarity = 0;

	asm( "movl %%esp,%0" : "=r" (tempInt) : /* No inputs */ );	// Get the stack pointer
	parameterArea = (Nat4 *) tempInt;		// Set the initial parameter area to the stack pointer
	tempInt = ExternalDummyCall(1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24);	/* Force the compiler to allocate 24 words in the parameter area*/

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArityMin(environment,primName, primInArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kExternalBlock,0,primName, primitive, environment );
	if( result != kNOERROR ) return result;

#endif

	block = VPLPrimGetInputObject(0,primitive,environment);

	inputExternalBlock = (V_ExternalBlock) block;
	if( strcmp(inputExternalBlock->name,"VPL_ExtProcedure") != 0) {
		record_error("function-pointer: Input 1 external not type VPL_ExtProcedure! - ",moduleName,kWRONGINPUTTYPE,environment);
		record_fault(environment,
			kIncorrectType,			// Fault Code
			primName,				// Primary String - usually primitive name
			"Input 1 external not type VPL_ExtProcedure",					// Secondary String
			"NULL",					// Operation Name
			"NULL");				// Module Name
	}
	
	if(inputExternalBlock->levelOfIndirection == 0) tempProcedure = (V_ExtProcedure) inputExternalBlock->blockPtr;
	else if(inputExternalBlock->levelOfIndirection == 1) tempProcedure = *(V_ExtProcedure *) inputExternalBlock->blockPtr;
	else if(inputExternalBlock->levelOfIndirection == 2) tempProcedure = **(V_ExtProcedure **) inputExternalBlock->blockPtr;
	else  return record_error("pointer-to-string: Level of indirection greater than 2! - ",moduleName,kERROR,environment);

	if(tempProcedure->returnParameter != NULL) procedureOutarity++;

	tempParameter = tempProcedure->parameters;
	while( tempParameter != NULL ) {
		if(tempParameter->type == kVoidType) break;
		procedureInarity++;
		if(tempParameter->type == kPointerType && tempParameter->constantFlag == 0) procedureOutarity++;
		tempParameter = tempParameter->next;
	}
	
	if(tempParameter != NULL && tempParameter->type == kVoidType) {
		if(procedureInarity > inarity){
			record_error("extprocedure: Variable Argument Procedure has wrong inarity",primName,kERROR,environment);
			record_fault(environment,kIncorrectInarity,primName,"NULL","NULL","NULL");
			return kHalt;
		}
	} else {
		if(procedureInarity != inarity){
			record_error("extprocedure: Procedure has wrong inarity",primName,kERROR,environment);
			record_fault(environment,kIncorrectInarity,primName,"NULL","NULL","NULL");
			return kHalt;
		}
	}
	

	if(procedureOutarity != outarity){
		record_error("extprocedure: Procedure has wrong outarity",primName,kERROR,environment);
		record_fault(environment,kIncorrectOutarity,primName,"NULL","NULL","NULL");
		return kHalt;
	}

	outputCounter = 0;
	if(tempProcedure->returnParameter != NULL) outputCounter++;

	tempParameter = tempProcedure->parameters;
	tempInputList.inputs = VPXMALLOC(inarity,V_Input);
	inputSizes = VPXMALLOC(inarity,Nat4);
	for(argument = 0; argument < inarity; argument++){
		if(tempParameter == NULL) {
			record_error("extprocedure: NULL parameter for valid input! - ",primName,kERROR,environment);
			return kHalt;
		}
		tempInput = (V_Input) X_malloc(sizeof(VPL_Input));
		tempInputList.inputs[argument] = tempInput;
		object = VPLPrimGetInputObject(argument+1,primitive,environment);
		theParameterType = tempParameter->type;
		if(theParameterType == kFloatType && tempParameter->size == 8) theParameterType = kDoubleType;
		switch(theParameterType){
			case kVoidType:
				if(object == NULL){
					tempInput->inputInt = 0;
				}else{
					switch(object->type){
						case kBoolean:	tempInput->inputInt = (long) ((V_Boolean) object)->value; inputSizes[argument] = 4; break;
						case kInteger:	tempInput->inputInt = (long) ((V_Integer) object)->value; inputSizes[argument] = 4; break;
						case kReal:		tempInput->inputDouble = (double) ((V_Real) object)->value; inputSizes[argument] = 8; break;
						case kString:	tempInput->inputInt = (long) ((V_String) object)->string; inputSizes[argument] = 4; break;
						case kExternalBlock:	tempInput->inputInt = (long) ((V_ExternalBlock) object)->blockPtr; inputSizes[argument] = 4; break;
						
						default:
							record_error("extprocedure: IntegerType input is not integer nor real! - ",primName,kWRONGINPUTTYPE,environment);
							record_fault(environment,kIncorrectType,primName,"NULL","NULL","NULL");
							return kHalt;
						break;
					}
				}
				break;
			
			case kUnsignedType:
			case kLongType:
			case kShortType:
			case kCharType:
			case kEnumType:
			case kIntType:
				if(object == NULL){
					tempInput->inputInt = 0;
				}else{
					switch(object->type){
						case kInteger:	tempInput->inputInt = ((V_Integer) object)->value; break;
						case kBoolean:	tempInput->inputInt = ((V_Boolean) object)->value; break;
						case kReal:		tempInput->inputInt = ((V_Real) object)->value; break;
						
						default:
							record_error("extprocedure: IntegerType input is not integer! - ",primName,kWRONGINPUTTYPE,environment);
							record_fault(environment,kIncorrectType,primName,"NULL","NULL","NULL");
							return kHalt;
						break;
					}
				}
				break;
			
			case kFloatType:
				if(object == NULL){
					record_error("extprocedure: FloatType input is null! - ",primName,kWRONGINPUTTYPE,environment);
					record_fault(environment,kIncorrectType,primName,"NULL","NULL","NULL");
					return kHalt;
				}
				switch(object->type){
					case kInteger:	tempInput->inputFloat = ((V_Integer) object)->value; break;
					case kBoolean:	tempInput->inputFloat = ((V_Boolean) object)->value; break;
					case kReal:		tempInput->inputFloat = ((V_Real) object)->value; break;
						
					default:
						record_error("extprocedure: FloatType input is not real! - ",primName,kWRONGINPUTTYPE,environment);
						record_fault(environment,kIncorrectType,primName,"NULL","NULL","NULL");
						return kHalt;
					break;
				}
				break;
			
			case kDoubleType:
				if(object == NULL){
					record_error("extprocedure: DoubleType input is null! - ",primName,kWRONGINPUTTYPE,environment);
					record_fault(environment,kIncorrectType,primName,"NULL","NULL","NULL");
					return kHalt;
				}
				switch(object->type){
					case kInteger:	tempInput->inputDouble = ((V_Integer) object)->value; break;
					case kBoolean:	tempInput->inputDouble = ((V_Boolean) object)->value; break;
					case kReal:		tempInput->inputDouble = ((V_Real) object)->value; break;
						
					default:
						record_error("extprocedure: DoubleType input is not real! - ",primName,kWRONGINPUTTYPE,environment);
						record_fault(environment,kIncorrectType,primName,"NULL","NULL","NULL");
						return kHalt;
					break;
				}
				break;
			
			case kPointerType:
				if(object == NULL){
					tempInput->inputInt = 0;
					if(tempParameter->constantFlag != 1) VPLPrimSetOutputObject(environment,primInArity,outputCounter++,primitive,NULL);
				} else if(object->type == kNone){
					if(tempParameter->constantFlag == 1){
						record_error("extprocedure: PointerType input is none and constant! - ",primName,kWRONGINPUTTYPE,environment);
						record_fault(environment,kIncorrectType,primName,"NULL","NULL","NULL");
						return kHalt;
					}
					increment_count(object);
					decrement_count(environment,object);
					if(tempParameter->indirection == 1) blockSize = tempParameter->size;
					else blockSize = sizeof(Nat4 *);
					tempPointer = X_malloc(blockSize);
					tempInput->inputInt = (long) tempPointer;	

					outputBlock = create_externalBlock(tempParameter->name,tempParameter->size,environment);
					outputBlock->blockPtr = tempPointer;
					outputBlock->levelOfIndirection = tempParameter->indirection - 1;
					VPLPrimSetOutputObject(environment,primInArity,outputCounter++,primitive,(V_Object) outputBlock);
				} else if(object->type == kExternalBlock){
					externalBlock = (V_ExternalBlock) object;
					if( externalBlock->levelOfIndirection == 0 && strcmp("void",externalBlock->name) == 0 ){
						if(tempParameter->constantFlag == 1){
							tempInput->inputInt = (long) externalBlock->blockPtr;
						}else{
							blockSize = externalBlock->size;
							tempPointer = X_malloc(blockSize);
							memcpy(tempPointer,externalBlock->blockPtr,blockSize);
							tempInput->inputInt = (long) tempPointer;	

							outputBlock = create_externalBlock(externalBlock->name,blockSize,environment);
							outputBlock->blockPtr = tempPointer;
							VPLPrimSetOutputObject(environment,primInArity,outputCounter++,primitive,(V_Object) outputBlock);
						}
					} else if( strcmp("void",tempParameter->name) != 0 &&
					 	strcmp("VPL_CallbackCodeSegment",externalBlock->name) != 0 &&
						strcmp(externalBlock->name,tempParameter->name) != 0) {
						record_error("extprocedure: Input pointer wrong type! - ",primName,kWRONGINPUTTYPE,environment);
						record_fault(environment,kIncorrectType,primName,tempParameter->name,externalBlock->name,"NULL");
						return kHalt;
					} else if(tempParameter->indirection - externalBlock->levelOfIndirection == -1) {
						if(tempParameter->constantFlag == 1){
							tempInput->inputInt = **((Nat4 **) externalBlock->blockPtr);
						}else{
							blockSize = sizeof(Nat4 **);
							tempPointer = X_malloc(blockSize);
							tempInput->inputInt = **((Nat4 **) externalBlock->blockPtr);			
							*((Nat4 *) tempPointer) = *((Nat4 *) externalBlock->blockPtr);

							outputBlock = create_externalBlock(externalBlock->name,externalBlock->size,environment);
							outputBlock->blockPtr = tempPointer;
							outputBlock->levelOfIndirection = externalBlock->levelOfIndirection;
							VPLPrimSetOutputObject(environment,primInArity,outputCounter++,primitive,(V_Object) outputBlock);
						}
					}else if(tempParameter->indirection - externalBlock->levelOfIndirection == 0 ||
						strcmp("VPL_CallbackCodeSegment",externalBlock->name) == 0) {
						if(tempParameter->constantFlag == 1){
							tempInput->inputInt = *((Nat4 *) externalBlock->blockPtr);
						}else{
							blockSize = sizeof(Nat4 *);
							tempPointer = X_malloc(blockSize);
							tempInput->inputInt = *((Nat4 *) externalBlock->blockPtr);			
							*((Nat4 *) tempPointer) = *((Nat4 *) externalBlock->blockPtr);

							outputBlock = create_externalBlock(externalBlock->name,externalBlock->size,environment);
							outputBlock->blockPtr = tempPointer;
							outputBlock->levelOfIndirection = externalBlock->levelOfIndirection;
							VPLPrimSetOutputObject(environment,primInArity,outputCounter++,primitive,(V_Object) outputBlock);
						}
					}else if(tempParameter->indirection - externalBlock->levelOfIndirection == 1) {
						if(tempParameter->constantFlag == 1){
							tempInput->inputInt = (long) externalBlock->blockPtr;
						}else{
							if(externalBlock->levelOfIndirection == 0) blockSize = externalBlock->size;
							else blockSize = sizeof(Nat4 *);
							tempPointer = X_malloc(blockSize);
							memcpy(tempPointer,externalBlock->blockPtr,blockSize);
							tempInput->inputInt = (long) tempPointer;	

							outputBlock = create_externalBlock(externalBlock->name,externalBlock->size,environment);
							outputBlock->blockPtr = tempPointer;
							outputBlock->levelOfIndirection = externalBlock->levelOfIndirection;
							VPLPrimSetOutputObject(environment,primInArity,outputCounter++,primitive,(V_Object) outputBlock);
						}
					}else{
						record_error("function-pointer: Input level of indirection too high! - ",primName,kWRONGINPUTTYPE,environment);
						record_fault(environment,kIncorrectType,primName,"NULL","NULL","NULL");
						return kHalt;
					}
				} else if(object->type == kInteger){
						if(tempParameter->constantFlag == 1){
							tempInput->inputInt = ((V_Integer) object)->value;
						}else{
							blockSize = sizeof(Nat4 *);
							tempPointer = X_malloc(blockSize);
							tempInput->inputInt = ((V_Integer) object)->value;
							*((Nat4 *) tempPointer) = tempInput->inputInt;

							outputBlock = create_externalBlock(tempParameter->name,blockSize,environment);
							outputBlock->blockPtr = tempPointer;
							outputBlock->levelOfIndirection = 1;
							VPLPrimSetOutputObject(environment,primInArity,outputCounter++,primitive,(V_Object) outputBlock);
						}
				}  else if(object->type == kString){										// Allow strings as pointers
						pointerString = (V_String) object;									// Added by Jack 5/13/05
						if(tempParameter->constantFlag == 1){
							tempInput->inputInt = (long) pointerString->string;
						}else{
							outputBlock = (V_ExternalBlock) create_string(pointerString->string,environment);
							tempInput->inputInt = (long) ((V_String) outputBlock)->string;	
							VPLPrimSetOutputObject(environment,primInArity,outputCounter++,primitive,(V_Object) outputBlock);
						} 
				} else {
					record_error("function-pointer: Input is not valid pointer! - ",primName,kWRONGINPUTTYPE,environment);
					record_fault(environment,kIncorrectType,primName,"NULL","NULL","NULL");
					return kHalt;
				}
				break;
			
			case kStructureType:
				if(object == NULL || object->type != kExternalBlock){
					record_error("function-pointer: Input is not externalBlock! - ",primName,kWRONGINPUTTYPE,environment);
					record_fault(environment,kIncorrectType,primName,"NULL","NULL","NULL");
					return kHalt;
				}
				externalBlock = (V_ExternalBlock) object;
				if( strcmp(externalBlock->name,tempParameter->name) != 0) {
					record_error("function-pointer: Input structure wrong type! - ",primName,kWRONGINPUTTYPE,environment);
					record_fault(environment,kIncorrectType,primName,tempParameter->name,externalBlock->name,"NULL");
					return kHalt;
				}
				if(externalBlock->levelOfIndirection == 0) tempInput->inputInt = (long) externalBlock->blockPtr;
				else{
					record_error("function-pointer: Input structure level of indirection is not 0 nor 1! - ",primName,kWRONGINPUTTYPE,environment);
					record_fault(environment,kIncorrectType,primName,"NULL","NULL","NULL");
					return kHalt;
				}
				break;

			default:
				record_error("function-pointer: Input is unrecognized type! - ",primName,kWRONGINPUTTYPE,environment);
				record_fault(environment,kIncorrectType,primName,"NULL","NULL","NULL");
				return kHalt;
				break;
			
		}
		if(tempParameter->type != kVoidType) tempParameter = tempParameter->next;
	}

// Past this point no fiddling with R3! for example by calling a subroutine whose output would be place in R3
	
	gprCounter = 0;
	if(tempProcedure->returnParameter != NULL && 
		tempProcedure->returnParameter->type == kStructureType &&
		tempProcedure->returnParameter->size > 8 ){										// If function returns a structure
			tempInt = (long) X_malloc(tempProcedure->returnParameter->size);			// Create a block and get the address
			*(parameterArea + gprCounter++) = tempInt;									// Put the address on the stack
	}
	tempParameter = tempProcedure->parameters;
	for(argument = 0; argument < inarity; argument++){
		tempInput = tempInputList.inputs[argument];
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
				tempInt = tempInput->inputInt;
				*(parameterArea + gprCounter++) = tempInt;
				break;

			case kFloatType:
				tempInt = *((Nat4 *) &tempInput->inputFloat);
				*(parameterArea + gprCounter++) = tempInt;
				break;

			case kDoubleType:
				tempInt = *((Nat4 *) &tempInput->inputFloat);
				*(parameterArea + gprCounter++) = tempInt;
				tempInt = *((Nat4 *) (&tempInput->inputFloat + 1));
				*(parameterArea + gprCounter++) = tempInt;
				break;

		case kStructureType:
				tempStructPointer = (Nat4 *) tempInput->inputInt;
				do{
					tempInt = *tempStructPointer;
					*(parameterArea + gprCounter++) = tempInt;
					tempStructPointer++;
				} while((Nat4)tempStructPointer - (Nat4)tempInput->inputInt < tempParameter->size);
			break;

			default:
				printf("Unhandled parameter type %i\n",theParameterType);
				break;
		}
		if(tempParameter->type != kVoidType) tempParameter = tempParameter->next;
	} // End For(argument) Loop

	tempInt = (Nat4) tempProcedure->functionPtr;
	asm( "movl %0,%%eax" : /* No outputs */ : "r" (tempInt) );
	asm( "call *%%eax" : /* No outputs */ : /* No inputs */ );
	asm( "movl %%eax,%0" : "=r" (tempInt) : /* No inputs */ );
	tempParameter = tempProcedure->returnParameter;
	if(tempParameter != NULL && tempParameter->type ==kStructureType){
		if(tempParameter->size > 8){
			asm( "subl $4,%%esp" : /* No outputs */ : /* No inputs */ );
		} else {
			asm( "movl %%edx,%0" : "=r" (tempInt2) : /* No inputs */ );
		}
	}

	tempParameter = tempProcedure->returnParameter;
	if(tempParameter != NULL){
		theParameterType = tempParameter->type;
		if(theParameterType == kFloatType && tempParameter->size == 8) theParameterType = kDoubleType;
		switch(theParameterType){
			case kUnsignedType:
			case kLongType:
			case kShortType:
			case kCharType:
			case kEnumType:
			case kIntType:
				VPLPrimSetOutputObject(environment,primInArity,0,primitive,(V_Object) int_to_integer(tempInt,environment));
				break;

			case kPointerType:
				if(tempInt == 0){
					VPLPrimSetOutputObject(environment,primInArity,0,primitive,NULL);
				} else {
					tempPointer = (Nat4 *) X_malloc(sizeof(Nat4));
					*((Nat4 *)tempPointer) = tempInt;
					outputBlock = create_externalBlock(tempParameter->name,tempParameter->size,environment);
					outputBlock->blockPtr = tempPointer;
					outputBlock->levelOfIndirection = tempParameter->indirection;
					VPLPrimSetOutputObject(environment,primInArity,0,primitive,(V_Object) outputBlock);
				}
				break;

			case kStructureType:
				if(tempParameter->size > 8) {
					outputBlock = create_externalBlock(tempParameter->name,tempParameter->size,environment);
					outputBlock->blockPtr = (void *) tempInt;
					outputBlock->levelOfIndirection = 0;
					VPLPrimSetOutputObject(environment,primInArity,0,primitive,(V_Object) outputBlock);
				} else {
					long	pseudoStructure[2] = { 0 , 0 };
					pseudoStructure[0] = tempInt;
					pseudoStructure[1] = tempInt2;
				
					outputBlock = create_externalBlock(tempParameter->name,tempParameter->size,environment);
					outputBlock->blockPtr = malloc(tempParameter->size);
					memcpy(outputBlock->blockPtr,pseudoStructure,tempParameter->size);
					outputBlock->levelOfIndirection = 0;
					VPLPrimSetOutputObject(environment,primInArity,0,primitive,(V_Object) outputBlock);
				}
				break;

			case kFloatType:
				asm( "fstps %0" : "=m" (tempFloat) : /* No inputs */ );
				VPLPrimSetOutputObject(environment,primInArity,0,primitive,(V_Object) float_to_real(tempFloat,environment));
				break;

			case kDoubleType:
				asm( "fstpl %0" : "=m" (tempDouble) : /* No inputs */ );
				VPLPrimSetOutputObject(environment,primInArity,0,primitive,(V_Object) float_to_real(tempDouble,environment));
				break;

			default:
				record_error("extprocedure: Unrecognized return type! - ",primName,kWRONGINPUTTYPE,environment);
				return kHalt;
				break;
		}
	}

	for(argument = 0; argument < inarity; argument++){
		X_free(tempInputList.inputs[argument]);
	}
	X_free(tempInputList.inputs);
	X_free(inputSizes);

	*trigger = kSuccess;	
	return kNOERROR;
}
#endif

#ifdef __ppc__
Int4 VPLP_function_2D_pointer( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive );
Int4 VPLP_function_2D_pointer( V_Environment environment , enum opTrigger *trigger , Nat4 primInArity , Nat4 primOutArity , vpl_PrimitiveInputs primitive )
{
	V_Object	block = NULL;
	V_ExternalBlock	inputExternalBlock = NULL;

	Int1	*moduleName = NULL;
	Int1		*primName = "function-pointer";
	Int4		result = kNOERROR;

	Nat4		inarity = primInArity-1;
	Nat4		outarity = primOutArity;

	register long tempInt = 0;
	register float tempFloat = 0.0;
	register double tempDouble = 0.0;
#ifdef __MWERKS__
	register void* functionPtr = NULL;
#endif


	V_Object object = NULL;
	V_String pointerString = NULL;
	V_ExternalBlock externalBlock = NULL;
	V_ExternalBlock outputBlock = NULL;
	void *tempPointer = NULL;
	Nat4 *tempStructPointer = NULL;
	Nat4 *parameterArea = NULL;
	V_Parameter tempParameter = NULL;
	V_ExtProcedure tempProcedure = NULL;
	V_Input tempInput = NULL;
	VPL_InputList tempInputList;
	Nat4	*inputSizes = NULL;
	
	Nat4 gprCounter = 0;
	Nat4 fpCounter = 0;
	Nat4 argument = 0;
	Nat4 outputCounter = 0;
	Nat4 blockSize = 0;
	Nat4 theParameterType = 0;
	VPL_Input returnInteger;
	V_Input returnIntegerPtr = &returnInteger;
	VPL_Input returnFloat;
	V_Input returnFloatPtr = &returnFloat;
	VPL_Input returnDouble;
	V_Input returnDoublePtr = &returnDouble;
	
	Nat4 procedureInarity = 0;
	Nat4 procedureOutarity = 0;

	asm{ 
		mr tempInt,r1
	}					// Get the stack pointer
	parameterArea = (Nat4 *) tempInt;		// Set the initial parameter area to the stack pointer
	parameterArea += 6;						// Add 6 words to skip over the linkage area to the start of the parameter area
	tempInt = ExternalDummyCall(1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24);	/* Force the compiler to allocate 24 words in the parameter area*/

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArityMin(environment,primName, primInArity, 1 );
	if( result != kNOERROR ) return result;

	result = VPLPrimCheckInputObjectType( kExternalBlock,0,primName, primitive, environment );
	if( result != kNOERROR ) return result;

#endif

	block = VPLPrimGetInputObject(0,primitive,environment);

	inputExternalBlock = (V_ExternalBlock) block;
	if( strcmp(inputExternalBlock->name,"VPL_ExtProcedure") != 0) {
		record_error("function-pointer: Input 1 external not type VPL_ExtProcedure! - ",moduleName,kWRONGINPUTTYPE,environment);
		record_fault(environment,
			kIncorrectType,			// Fault Code
			primName,				// Primary String - usually primitive name
			"Input 1 external not type VPL_ExtProcedure",					// Secondary String
			"NULL",					// Operation Name
			"NULL");				// Module Name
	}
	
	if(inputExternalBlock->levelOfIndirection == 0) tempProcedure = (V_ExtProcedure) inputExternalBlock->blockPtr;
	else if(inputExternalBlock->levelOfIndirection == 1) tempProcedure = *(V_ExtProcedure *) inputExternalBlock->blockPtr;
	else if(inputExternalBlock->levelOfIndirection == 2) tempProcedure = **(V_ExtProcedure **) inputExternalBlock->blockPtr;
	else  return record_error("pointer-to-string: Level of indirection greater than 2! - ",moduleName,kERROR,environment);
	
	if(tempProcedure->returnParameter != NULL) procedureOutarity++;

	tempParameter = tempProcedure->parameters;
	while( tempParameter != NULL ) {
		if(tempParameter->type == kVoidType) break;
		procedureInarity++;
		if(tempParameter->type == kPointerType && tempParameter->constantFlag == 0) procedureOutarity++;
		tempParameter = tempParameter->next;
	}
	
	if(tempParameter != NULL && tempParameter->type == kVoidType) {
		if(procedureInarity > inarity){
			record_error("extprocedure: Variable Argument Procedure has wrong inarity",primName,kERROR,environment);
			record_fault(environment,kIncorrectInarity,primName,"NULL","NULL","NULL");
			return kHalt;
		}
	} else {
		if(procedureInarity != inarity){
			record_error("extprocedure: Procedure has wrong inarity",primName,kERROR,environment);
			record_fault(environment,kIncorrectInarity,primName,"NULL","NULL","NULL");
			return kHalt;
		}
	}
	

	if(procedureOutarity != outarity){
		record_error("extprocedure: Procedure has wrong outarity",primName,kERROR,environment);
		record_fault(environment,kIncorrectOutarity,primName,"NULL","NULL","NULL");
		return kHalt;
	}

	outputCounter = 0;
	if(tempProcedure->returnParameter != NULL) outputCounter++;

	tempParameter = tempProcedure->parameters;
	tempInputList.inputs = VPXMALLOC(inarity,V_Input);
	inputSizes = VPXMALLOC(inarity,Nat4);
	for(argument = 0; argument < inarity; argument++){
		if(tempParameter == NULL) {
			record_error("extprocedure: NULL parameter for valid input! - ",primName,kERROR,environment);
			return kHalt;
		}
		tempInput = (V_Input) X_malloc(sizeof(VPL_Input));
		tempInputList.inputs[argument] = tempInput;
		object = VPLPrimGetInputObject(argument+1,primitive,environment);
		theParameterType = tempParameter->type;
		if(theParameterType == kFloatType && tempParameter->size == 8) theParameterType = kDoubleType;
		switch(theParameterType){
			case kVoidType:
				if(object == NULL){
					tempInput->inputInt = 0;
				}else{
					switch(object->type){
						case kBoolean:	tempInput->inputInt = (long) ((V_Boolean) object)->value; inputSizes[argument] = 4; break;
						case kInteger:	tempInput->inputInt = (long) ((V_Integer) object)->value; inputSizes[argument] = 4; break;
						case kReal:		tempInput->inputDouble = (double) ((V_Real) object)->value; inputSizes[argument] = 8; break;
						case kString:	tempInput->inputInt = (long) ((V_String) object)->string; inputSizes[argument] = 4; break;
						case kExternalBlock:	tempInput->inputInt = (long) ((V_ExternalBlock) object)->blockPtr; inputSizes[argument] = 4; break;
						
						default:
							record_error("extprocedure: IntegerType input is not integer nor real! - ",primName,kWRONGINPUTTYPE,environment);
							record_fault(environment,kIncorrectType,primName,"NULL","NULL","NULL");
							return kHalt;
						break;
					}
				}
				break;
			
			case kUnsignedType:
			case kLongType:
			case kShortType:
			case kCharType:
			case kEnumType:
			case kIntType:
				if(object == NULL){
					tempInput->inputInt = 0;
				}else{
					switch(object->type){
						case kInteger:	tempInput->inputInt = ((V_Integer) object)->value; break;
						case kBoolean:	tempInput->inputInt = ((V_Boolean) object)->value; break;
						case kReal:		tempInput->inputInt = ((V_Real) object)->value; break;
						
						default:
							record_error("extprocedure: IntegerType input is not integer! - ",primName,kWRONGINPUTTYPE,environment);
							record_fault(environment,kIncorrectType,primName,"NULL","NULL","NULL");
							return kHalt;
						break;
					}
				}
				break;
			
			case kFloatType:
				if(object == NULL){
					record_error("extprocedure: FloatType input is null! - ",primName,kWRONGINPUTTYPE,environment);
					record_fault(environment,kIncorrectType,primName,"NULL","NULL","NULL");
					return kHalt;
				}
				switch(object->type){
					case kInteger:	tempInput->inputFloat = ((V_Integer) object)->value; break;
					case kBoolean:	tempInput->inputFloat = ((V_Boolean) object)->value; break;
					case kReal:		tempInput->inputFloat = ((V_Real) object)->value; break;
						
					default:
						record_error("extprocedure: FloatType input is not real! - ",primName,kWRONGINPUTTYPE,environment);
						record_fault(environment,kIncorrectType,primName,"NULL","NULL","NULL");
						return kHalt;
					break;
				}
				break;
			
			case kDoubleType:
				if(object == NULL){
					record_error("extprocedure: DoubleType input is null! - ",primName,kWRONGINPUTTYPE,environment);
					record_fault(environment,kIncorrectType,primName,"NULL","NULL","NULL");
					return kHalt;
				}
				switch(object->type){
					case kInteger:	tempInput->inputDouble = ((V_Integer) object)->value; break;
					case kBoolean:	tempInput->inputDouble = ((V_Boolean) object)->value; break;
					case kReal:		tempInput->inputDouble = ((V_Real) object)->value; break;
						
					default:
						record_error("extprocedure: DoubleType input is not real! - ",primName,kWRONGINPUTTYPE,environment);
						record_fault(environment,kIncorrectType,primName,"NULL","NULL","NULL");
						return kHalt;
					break;
				}
				break;
			
			case kPointerType:
				if(object == NULL){
					tempInput->inputInt = 0;
					if(tempParameter->constantFlag != 1) VPLPrimSetOutputObject(environment,primInArity,outputCounter++,primitive,NULL);
				} else if(object->type == kNone){
					if(tempParameter->constantFlag == 1){
						record_error("extprocedure: PointerType input is none and constant! - ",primName,kWRONGINPUTTYPE,environment);
						record_fault(environment,kIncorrectType,primName,"NULL","NULL","NULL");
						return kHalt;
					}
					increment_count(object);
					decrement_count(environment,object);
					if(tempParameter->indirection == 1) blockSize = tempParameter->size;
					else blockSize = sizeof(Nat4 *);
					tempPointer = X_malloc(blockSize);
					tempInput->inputInt = (long) tempPointer;	

					outputBlock = create_externalBlock(tempParameter->name,tempParameter->size,environment);
					outputBlock->blockPtr = tempPointer;
					outputBlock->levelOfIndirection = tempParameter->indirection - 1;
					VPLPrimSetOutputObject(environment,primInArity,outputCounter++,primitive,(V_Object) outputBlock);
				} else if(object->type == kExternalBlock){
					externalBlock = (V_ExternalBlock) object;
					if( externalBlock->levelOfIndirection == 0 && strcmp("void",externalBlock->name) == 0 ){
						if(tempParameter->constantFlag == 1){
							tempInput->inputInt = (long) externalBlock->blockPtr;
						}else{
							blockSize = externalBlock->size;
							tempPointer = X_malloc(blockSize);
							memcpy(tempPointer,externalBlock->blockPtr,blockSize);
							tempInput->inputInt = (long) tempPointer;	

							outputBlock = create_externalBlock(externalBlock->name,blockSize,environment);
							outputBlock->blockPtr = tempPointer;
							VPLPrimSetOutputObject(environment,primInArity,outputCounter++,primitive,(V_Object) outputBlock);
						}
					} else if( strcmp("void",tempParameter->name) != 0 &&
					 	strcmp("VPL_CallbackCodeSegment",externalBlock->name) != 0 &&
						strcmp(externalBlock->name,tempParameter->name) != 0) {
						record_error("extprocedure: Input pointer wrong type! - ",primName,kWRONGINPUTTYPE,environment);
						record_fault(environment,kIncorrectType,primName,tempParameter->name,externalBlock->name,"NULL");
						return kHalt;
					} else if(tempParameter->indirection - externalBlock->levelOfIndirection == -1) {
						if(tempParameter->constantFlag == 1){
							tempInput->inputInt = **((Nat4 **) externalBlock->blockPtr);
						}else{
							blockSize = sizeof(Nat4 **);
							tempPointer = X_malloc(blockSize);
							tempInput->inputInt = **((Nat4 **) externalBlock->blockPtr);			
							*((Nat4 *) tempPointer) = *((Nat4 *) externalBlock->blockPtr);

							outputBlock = create_externalBlock(externalBlock->name,externalBlock->size,environment);
							outputBlock->blockPtr = tempPointer;
							outputBlock->levelOfIndirection = externalBlock->levelOfIndirection;
							VPLPrimSetOutputObject(environment,primInArity,outputCounter++,primitive,(V_Object) outputBlock);
						}
					}else if(tempParameter->indirection - externalBlock->levelOfIndirection == 0 ||
						strcmp("VPL_CallbackCodeSegment",externalBlock->name) == 0) {
						if(tempParameter->constantFlag == 1){
							tempInput->inputInt = *((Nat4 *) externalBlock->blockPtr);
						}else{
							blockSize = sizeof(Nat4 *);
							tempPointer = X_malloc(blockSize);
							tempInput->inputInt = *((Nat4 *) externalBlock->blockPtr);			
							*((Nat4 *) tempPointer) = *((Nat4 *) externalBlock->blockPtr);

							outputBlock = create_externalBlock(externalBlock->name,externalBlock->size,environment);
							outputBlock->blockPtr = tempPointer;
							outputBlock->levelOfIndirection = externalBlock->levelOfIndirection;
							VPLPrimSetOutputObject(environment,primInArity,outputCounter++,primitive,(V_Object) outputBlock);
						}
					}else if(tempParameter->indirection - externalBlock->levelOfIndirection == 1) {
						if(tempParameter->constantFlag == 1){
							tempInput->inputInt = (long) externalBlock->blockPtr;
						}else{
							if(externalBlock->levelOfIndirection == 0) blockSize = externalBlock->size;
							else blockSize = sizeof(Nat4 *);
							tempPointer = X_malloc(blockSize);
							memcpy(tempPointer,externalBlock->blockPtr,blockSize);
							tempInput->inputInt = (long) tempPointer;	

							outputBlock = create_externalBlock(externalBlock->name,externalBlock->size,environment);
							outputBlock->blockPtr = tempPointer;
							outputBlock->levelOfIndirection = externalBlock->levelOfIndirection;
							VPLPrimSetOutputObject(environment,primInArity,outputCounter++,primitive,(V_Object) outputBlock);
						}
					}else{
						record_error("function-pointer: Input level of indirection too high! - ",primName,kWRONGINPUTTYPE,environment);
						record_fault(environment,kIncorrectType,primName,"NULL","NULL","NULL");
						return kHalt;
					}
				} else if(object->type == kInteger){
						if(tempParameter->constantFlag == 1){
							tempInput->inputInt = ((V_Integer) object)->value;
						}else{
							blockSize = sizeof(Nat4 *);
							tempPointer = X_malloc(blockSize);
							tempInput->inputInt = ((V_Integer) object)->value;
							*((Nat4 *) tempPointer) = tempInput->inputInt;

							outputBlock = create_externalBlock(tempParameter->name,blockSize,environment);
							outputBlock->blockPtr = tempPointer;
							outputBlock->levelOfIndirection = 1;
							VPLPrimSetOutputObject(environment,primInArity,outputCounter++,primitive,(V_Object) outputBlock);
						}
				}  else if(object->type == kString){										// Allow strings as pointers
						pointerString = (V_String) object;									// Added by Jack 5/13/05
						if(tempParameter->constantFlag == 1){
							tempInput->inputInt = (long) pointerString->string;
						}else{
							outputBlock = (V_ExternalBlock) create_string(pointerString->string,environment);
							tempInput->inputInt = (long) ((V_String) outputBlock)->string;	
							VPLPrimSetOutputObject(environment,primInArity,outputCounter++,primitive,(V_Object) outputBlock);
						} 
				} else {
					record_error("function-pointer: Input is not valid pointer! - ",primName,kWRONGINPUTTYPE,environment);
					record_fault(environment,kIncorrectType,primName,"NULL","NULL","NULL");
					return kHalt;
				}
				break;
			
			case kStructureType:
				if(object == NULL || object->type != kExternalBlock){
					record_error("function-pointer: Input is not externalBlock! - ",primName,kWRONGINPUTTYPE,environment);
					record_fault(environment,kIncorrectType,primName,"NULL","NULL","NULL");
					return kHalt;
				}
				externalBlock = (V_ExternalBlock) object;
				if( strcmp(externalBlock->name,tempParameter->name) != 0) {
					record_error("function-pointer: Input structure wrong type! - ",primName,kWRONGINPUTTYPE,environment);
					record_fault(environment,kIncorrectType,primName,tempParameter->name,externalBlock->name,"NULL");
					return kHalt;
				}
				if(externalBlock->levelOfIndirection == 0) tempInput->inputInt = (long) externalBlock->blockPtr;
				else if(externalBlock->levelOfIndirection == 1) tempInput->inputInt = *((Nat4 *) externalBlock->blockPtr);
				else{
					record_error("function-pointer: Input structure level of indirection is not 0 nor 1! - ",primName,kWRONGINPUTTYPE,environment);
					record_fault(environment,kIncorrectType,primName,"NULL","NULL","NULL");
					return kHalt;
				}
				break;

			default:
				record_error("function-pointer: Input is unrecognized type! - ",primName,kWRONGINPUTTYPE,environment);
				record_fault(environment,kIncorrectType,primName,"NULL","NULL","NULL");
				return kHalt;
				break;
			
		}
		if(tempParameter->type != kVoidType) tempParameter = tempParameter->next;
	}

// Past this point no fiddling with R3! for example by calling a subroutine whose output would be place in R3
	
	gprCounter = 0;
	if(tempProcedure->returnParameter != NULL && 
	tempProcedure->returnParameter->type == kStructureType){						// If function returns a structure
		tempInt = (long) X_malloc(tempProcedure->returnParameter->size);			// Create a block and get the address
		asm{
			mr r3,tempInt
		}														// Place the address in register r3
		gprCounter++;																// Increment the current general purpose register
	}
	tempParameter = tempProcedure->parameters;
	for(argument = 0; argument < inarity; argument++){
	tempInput = tempInputList.inputs[argument];
	theParameterType = tempParameter->type;
	if(theParameterType == kFloatType && tempParameter->size == 8) theParameterType = kDoubleType;
	switch(theParameterType){
		case kVoidType:
			if(inputSizes[argument] == 4){
				tempInt = tempInput->inputInt;
				switch(gprCounter){
					case 0: asm{ 
								mr r3,tempInt
							}
							gprCounter++; break;
					case 1: asm{
								mr r4,tempInt
							}
							gprCounter++; break;
					case 2: asm{
								mr r5,tempInt
							}
							gprCounter++; break;
					case 3: asm{
								mr r6,tempInt
							}
							gprCounter++; break;
					case 4: asm{
								mr r7,tempInt
							}
							gprCounter++; break;
					case 5: asm{
								mr r8,tempInt
							}
							gprCounter++; break;
					case 6: asm{
								mr r9,tempInt
							}
							gprCounter++; break;
					case 7: asm{
								mr r10,tempInt
							}
							gprCounter++; break;
					case 8: case 9: case 10: case 11: case 12: case 13: case 14: case 15: case 16: case 17: case 18: case 19: case 20: case 21: case 22: case 23: *(parameterArea + gprCounter++) = tempInt; break;
					default:
						record_error("extprocedure: Parameter area greater than 24 words! - ",primName,kWRONGINPUTTYPE,environment);
						return kHalt;
						break;
				}
			} else {
				tempInt = *(Nat4 *) &tempInput->inputDouble;
				switch(gprCounter){
					case 0: asm{ 
								mr r3,tempInt
							}
							gprCounter++; break;
					case 1: asm{
								mr r4,tempInt
							}
							gprCounter++; break;
					case 2: asm{
								mr r5,tempInt
							}
							gprCounter++; break;
					case 3: asm{
								mr r6,tempInt
							}
							gprCounter++; break;
					case 4: asm{
								mr r7,tempInt
							}
							gprCounter++; break;
					case 5: asm{
								mr r8,tempInt
							}
							gprCounter++; break;
					case 6: asm{
								mr r9,tempInt
							}
							gprCounter++; break;
					case 7: asm{
								mr r10,tempInt
							}
							gprCounter++; break;
					case 8: case 9: case 10: case 11: case 12: case 13: case 14: case 15: case 16: case 17: case 18: case 19: case 20: case 21: case 22: case 23: *(parameterArea + gprCounter++) = tempInt; break;
					default:
						record_error("extprocedure: Parameter area greater than 24 words! - ",primName,kWRONGINPUTTYPE,environment);
						return kHalt;
						break;
				}
				tempInt = *( (Nat4 *) &tempInput->inputDouble + 1);
				switch(gprCounter){
					case 1: asm{ 
								mr r4,tempInt
							}
							gprCounter++; break;
					case 2: asm{
								mr r5,tempInt
							}
							gprCounter++; break;
					case 3: asm{
								mr r6,tempInt
							}
							gprCounter++; break;
					case 4: asm{
								mr r7,tempInt
							}
							gprCounter++; break;
					case 5: asm{
								mr r8,tempInt
							}
							gprCounter++; break;
					case 6: asm{
								mr r9,tempInt
							}
							gprCounter++; break;
					case 7: asm{
								mr r10,tempInt
							}
							gprCounter++; break;
					case 8: case 9: case 10: case 11: case 12: case 13: case 14: case 15: case 16: case 17: case 18: case 19: case 20: case 21: case 22: case 23: *(parameterArea + gprCounter++) = tempInt; break;
					default:
						record_error("extprocedure: Parameter area greater than 24 words! - ",primName,kWRONGINPUTTYPE,environment);
						return kHalt;
						break;
				}
			}
			break;

		case kUnsignedType:
		case kLongType:
		case kShortType:
		case kCharType:
		case kEnumType:
		case kPointerType:
		case kIntType:
			tempInt = tempInput->inputInt;
			switch(gprCounter){
				case 0: asm{ 
							mr r3,tempInt
						}
						gprCounter++; break;
				case 1: asm{
							mr r4,tempInt
						}
						gprCounter++; break;
				case 2: asm{
							mr r5,tempInt
						}
						gprCounter++; break;
				case 3: asm{
							mr r6,tempInt
						}
						gprCounter++; break;
				case 4: asm{
							mr r7,tempInt
						}
						gprCounter++; break;
				case 5: asm{
							mr r8,tempInt
						}
						gprCounter++; break;
				case 6: asm{
							mr r9,tempInt
						}
						gprCounter++; break;
				case 7: asm{
							mr r10,tempInt
						}
						gprCounter++; break;
					case 8: case 9: case 10: case 11: case 12: case 13: case 14: case 15: case 16: case 17: case 18: case 19: case 20: case 21: case 22: case 23: *(parameterArea + gprCounter++) = tempInt; break;
				default:
					record_error("extprocedure: Parameter area greater than 24 words! - ",primName,kWRONGINPUTTYPE,environment);
					return kHalt;
					break;
			}
			break;

		case kStructureType:
				tempStructPointer = (Nat4 *) tempInput->inputInt;
				do{
					tempInt = *tempStructPointer;
					switch(gprCounter){
						case 0: asm{
									mr	r3,tempInt
								}
								gprCounter++; break;
						case 1: asm{
									mr	r4,tempInt
								}
								gprCounter++; break;
						case 2: asm{
									mr	r5,tempInt
								}
								gprCounter++; break;
						case 3: asm{
									mr	r6,tempInt
								}
								gprCounter++; break;
						case 4: asm{
									mr	r7,tempInt
								}
								gprCounter++; break;
						case 5: asm{
									mr	r8,tempInt
								}
								gprCounter++; break;
						case 6: asm{
									mr	r9,tempInt
								}
								gprCounter++; break;
						case 7: asm{
									mr	r10,tempInt
								}
								gprCounter++; break;
					case 8: case 9: case 10: case 11: case 12: case 13: case 14: case 15: case 16: case 17: case 18: case 19: case 20: case 21: case 22: case 23: *(parameterArea + gprCounter++) = tempInt; break;
						default:
							record_error("extprocedure: Parameter area greater than 24 words! - ",primName,kWRONGINPUTTYPE,environment);
							return kHalt;
							break;
					}
					tempStructPointer++;
				} while((Nat4)tempStructPointer - (Nat4)tempInput->inputInt < tempParameter->size);
			break;

		case kDoubleType:
			tempDouble = tempInput->inputDouble;
			gprCounter++;
			gprCounter++;

			switch(fpCounter++){
#ifdef __MWERKS__
				case 0: asm{ fmr f1,tempDouble }
#elif __GNUC__
				case 0: asm{ 
							lfd f1,tempInput->inputDouble
						}
#endif
						break;
#ifdef __MWERKS__
				case 1: asm{ fmr f2,tempDouble }
#elif __GNUC__
				case 1: asm{
							lfd f2,tempInput->inputDouble
						}
#endif
						break;
#ifdef __MWERKS__
				case 2: asm{ fmr f3,tempDouble }
#elif __GNUC__
				case 2: asm{
							lfd f3,tempInput->inputDouble
						}
#endif
						break;
#ifdef __MWERKS__
				case 3: asm{ fmr f4,tempDouble }
#elif __GNUC__
				case 3: asm{
							lfd f4,tempInput->inputDouble
						}
#endif
						break;
#ifdef __MWERKS__
				case 4: asm{ fmr f5,tempDouble }
#elif __GNUC__
				case 4: asm{
							lfd f5,tempInput->inputDouble
						}
#endif
						break;
#ifdef __MWERKS__
				case 5: asm{ fmr f6,tempDouble }
#elif __GNUC__
				case 5: asm{
							lfd f6,tempInput->inputDouble
						}
#endif
						break;
#ifdef __MWERKS__
				case 6: asm{ fmr f7,tempDouble }
#elif __GNUC__
				case 6: asm{
							lfd f7,tempInput->inputDouble
						}
#endif
						break;
#ifdef __MWERKS__
				case 7: asm{ fmr f8,tempDouble }
#elif __GNUC__
				case 7: asm{
							lfd f8,tempInput->inputDouble
						}
#endif
						break;
			}
			break;

		case kFloatType:
			tempFloat = tempInput->inputFloat;
			gprCounter++;
			switch(fpCounter++){
#ifdef __MWERKS__
				case 0: asm{ fmr f1,tempFloat }
#elif __GNUC__
				case 0: asm{
							lfs f1,tempInput->inputFloat
						}
#endif
						break;
#ifdef __MWERKS__
				case 1: asm{ fmr f2,tempFloat }
#elif __GNUC__
				case 1: asm{
							lfs f2,tempInput->inputFloat
						}
#endif
						break;
#ifdef __MWERKS__
				case 2: asm{ fmr f3,tempFloat }
#elif __GNUC__
				case 2: asm{
							lfs f3,tempInput->inputFloat
						}
#endif
						break;
#ifdef __MWERKS__
				case 3: asm{ fmr f4,tempFloat }
#elif __GNUC__
				case 3: asm{
							lfs f4,tempInput->inputFloat
						}
#endif
						break;
#ifdef __MWERKS__
				case 4: asm{ fmr f5,tempFloat }
#elif __GNUC__
				case 4: asm{
							lfs f5,tempInput->inputFloat
						}
#endif
						break;
#ifdef __MWERKS__
				case 5: asm{ fmr f6,tempFloat }
#elif __GNUC__
				case 5: asm{
							lfs f6,tempInput->inputFloat
						}
#endif
						break;
#ifdef __MWERKS__
				case 6: asm{ fmr f7,tempFloat }
#elif __GNUC__
				case 6: asm{
							lfs f7,tempInput->inputFloat
						}
#endif
						break;
#ifdef __MWERKS__
				case 7: asm{ fmr f8,tempFloat }
#elif __GNUC__
				case 7: asm{
							lfs f8,tempInput->inputFloat
						}
#endif
						break;
			}
			break;

	}
		if(tempParameter->type != kVoidType) tempParameter = tempParameter->next;
	} // End For(argument) Loop

#ifdef __MWERKS__
	functionPtr = tempProcedure->functionPtr;
	asm{
		mr         r12,functionPtr
		mtctr      r12
		bctrl
		mr         tempInt,r3
		fmr        tempFloat,fp1
		fmr        tempDouble,fp1
	}
#elif __GNUC__
	asm{
		lwz			r12,tempProcedure->functionPtr
		mtctr		r12
		bctrl
		stw			r3,returnIntegerPtr->inputInt
		stfs		f1,returnFloatPtr->inputFloat
		stfd		f1,returnDoublePtr->inputDouble
	}
	tempInt = returnIntegerPtr->inputInt;
	tempFloat = returnFloatPtr->inputFloat;
	tempDouble = returnDoublePtr->inputDouble;
#endif
	tempParameter = tempProcedure->returnParameter;
	if(tempParameter != NULL){
		switch(tempParameter->type){
			case kUnsignedType:
			case kLongType:
			case kShortType:
			case kCharType:
			case kEnumType:
			case kIntType:
				VPLPrimSetOutputObject(environment,primInArity,0,primitive,(V_Object) int_to_integer(tempInt,environment));
				break;

			case kPointerType:
				if(tempInt == 0){
					VPLPrimSetOutputObject(environment,primInArity,0,primitive,NULL);
				} else {
					tempPointer = (Nat4 *) X_malloc(sizeof(Nat4));
					*((Nat4 *)tempPointer) = tempInt;
					outputBlock = create_externalBlock(tempParameter->name,tempParameter->size,environment);
					outputBlock->blockPtr = tempPointer;
					outputBlock->levelOfIndirection = tempParameter->indirection;
					VPLPrimSetOutputObject(environment,primInArity,0,primitive,(V_Object) outputBlock);
				}
				break;

			case kStructureType:
				outputBlock = create_externalBlock(tempParameter->name,tempParameter->size,environment);
				outputBlock->blockPtr = (void *) tempInt;
				outputBlock->levelOfIndirection = 0;
				VPLPrimSetOutputObject(environment,primInArity,0,primitive,(V_Object) outputBlock);
				break;

			case kFloatType:
				VPLPrimSetOutputObject(environment,primInArity,0,primitive,(V_Object) float_to_real(tempFloat,environment));
				break;

			case kDoubleType:
				VPLPrimSetOutputObject(environment,primInArity,0,primitive,(V_Object) float_to_real(tempDouble,environment));
				break;

			default:
				record_error("extprocedure: Unrecognized return type! - ",primName,kWRONGINPUTTYPE,environment);
				return kHalt;
				break;
		}
	}

	for(argument = 0; argument < inarity; argument++){
		X_free(tempInputList.inputs[argument]);
	}
	X_free(tempInputList.inputs);
	X_free(inputSizes);

	*trigger = kSuccess;	
	return kNOERROR;
}
#endif



Int4 VPLP_switch_2D_to_2D_editor( V_Environment environment, enum opTrigger *trigger, Nat4 primInArity, Nat4 primOutArity, vpl_PrimitiveInputs primitive );
Int4 VPLP_switch_2D_to_2D_editor( V_Environment environment, enum opTrigger *trigger, Nat4 primInArity, Nat4 primOutArity, vpl_PrimitiveInputs primitive )
{
	#pragma unused ( primitive )

	Int4				result = 0;
	Int1				*primName = "switch-to-editor";

#ifdef VPL_VERBOSE_ENGINE
		result = VPLPrimCheckInputArity( environment, primName, primInArity, 0 );
		if( result != kNOERROR ) return result;

		result = VPLPrimCheckOutputArity( environment, primName, primOutArity, 0 );
		if( result != kNOERROR ) return result;
#endif

	if( !is_compiled(environment) ) raise( SIGINT );
	
	*trigger = kSuccess;	
	return kNOERROR;
}

Int4 VPLP_add_2D_attribute_2D_observer( V_Environment environment, enum opTrigger *trigger, Nat4 primInArity, Nat4 primOutArity, vpl_PrimitiveInputs primitive );
Int4 VPLP_add_2D_attribute_2D_observer( V_Environment environment, enum opTrigger *trigger, Nat4 primInArity, Nat4 primOutArity, vpl_PrimitiveInputs primitive )
{
	Int4				result = 0;
	Int1				*primName = "add-attribute-observer";
	
	Int4					addResult = kERROR;
	V_Instance				addInstance = NULL;
	vpl_StringPtr			addAttributeName = NULL;
	vpl_BlockPtr			addGetCallback = NULL;
	vpl_BlockPtr			addGetUserData = NULL;
	vpl_BlockPtr			addSetCallback = NULL;
	vpl_BlockPtr			addSetUserData = NULL;
	V_WatchpointObserver	outObserver = NULL;

#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity( environment, primName, primInArity, 6 );
	if( result != kNOERROR ) return result;
	
	result = VPLPrimCheckOutputArity( environment, primName, primOutArity, 2 );
	if( result != kNOERROR ) return result;
#endif
	
	result = VPLPrimGetInputObjectCheckType( (V_Object*)&addInstance, kInstance, 0, primName, primitive, environment );
	if( result != kNOERROR ) return result;

	result = VPLPrimGetInputObjectStringCoerceCopy( &addAttributeName, 1, primName, primitive, environment );
	if( result != kNOERROR ) return result;
	
	if( (VPLPrimGetInputObjectType( kExternalBlock, 2, primitive, environment ) == kNOERROR ) )
		result = VPLPrimGetInputObjectEBlockPtrCoerce( &addGetCallback, "VPL_CallbackCodeSegment", 2, primName, primitive, environment );
	
	if( (VPLPrimGetInputObjectType( kExternalBlock, 3, primitive, environment ) == kNOERROR ) )
		result = VPLPrimGetInputObjectEBlockPtrCoerce( &addGetUserData, NULL, 3, primName, primitive, environment );

	if( (VPLPrimGetInputObjectType( kExternalBlock, 4, primitive, environment ) == kNOERROR ) )
		result = VPLPrimGetInputObjectEBlockPtrCoerce( &addSetCallback, "VPL_CallbackCodeSegment", 4, primName, primitive, environment );
	
	if( (VPLPrimGetInputObjectType( kExternalBlock, 5, primitive, environment ) == kNOERROR ) )
		result = VPLPrimGetInputObjectEBlockPtrCoerce( &addSetUserData, NULL, 5, primName, primitive, environment );
	
//	fprintf(stdout, "add observer instance: %p, att: %s\n\tgetCB: %p, getD: %p\n\tsetCB: %p, setD: %p\n",
//			addInstance, addAttributeName, addGetCallback, addGetUserData, addSetCallback, addSetUserData );
	
	addResult = VPLWatchpointObserverCreate( environment, addInstance, addAttributeName,
											(V_CallbackCodeSegment)addGetCallback, addGetUserData, addSetCallback, addSetUserData,
											&outObserver );
	
	if( addAttributeName ) X_free( addAttributeName );
	
	result = VPLPrimSetOutputObjectInteger( environment, primInArity, 0, primitive, addResult );
	result = VPLPrimSetOutputObjectEBlockPtr( environment, primInArity, 1, primitive, outObserver, "VPL_WatchpointObserver", sizeof(VPL_WatchpointObserver), 1 );
	
	*trigger = kSuccess;	
	return kNOERROR;
}

Int4 VPLP_remove_2D_attribute_2D_observer( V_Environment environment, enum opTrigger *trigger, Nat4 primInArity, Nat4 primOutArity, vpl_PrimitiveInputs primitive );
Int4 VPLP_remove_2D_attribute_2D_observer( V_Environment environment, enum opTrigger *trigger, Nat4 primInArity, Nat4 primOutArity, vpl_PrimitiveInputs primitive )
{
	Int4				result = 0;
	Int1				*primName = "remove-attribute-observer";
	
	Nat4					remResult = kERROR;
	V_Instance				oldInstance = NULL;
	vpl_StringPtr			oldAttributeName = NULL;
	V_WatchpointObserver	oldObserver = NULL;
	
#ifdef VPL_VERBOSE_ENGINE
	result = VPLPrimCheckInputArity( environment, primName, primInArity, 3 );
	if( result != kNOERROR ) return result;
	
	result = VPLPrimCheckOutputArity( environment, primName, primOutArity, 1 );
	if( result != kNOERROR ) return result;
#endif
	
	result = VPLPrimGetInputObjectCheckType( (V_Object*)&oldInstance, kInstance, 0, primName, primitive, environment );
	if( result != kNOERROR ) return result;
	
	result = VPLPrimGetInputObjectStringCoerceCopy( &oldAttributeName, 1, primName, primitive, environment );
	if( result != kNOERROR ) return result;
	
	if( (VPLPrimGetInputObjectType( kExternalBlock, 2, primitive, environment ) == kNOERROR ) )
		result = VPLPrimGetInputObjectEBlockPtrCoerce( (vpl_BlockPtr*)&oldObserver, "VPL_WatchpointObserver", 2, primName, primitive, environment );

	if( oldInstance && oldAttributeName && oldObserver )
		remResult = VPLWatchpointObserverRemove( environment, oldInstance, oldAttributeName, oldObserver );

	if( oldAttributeName ) X_free( oldAttributeName );
	
	result = VPLPrimSetOutputObjectInteger( environment, primInArity, 0, primitive, remResult );
	
	*trigger = kSuccess;	
	return kNOERROR;
}

	
	
	
	


#pragma mark --------------- Load Routines ---------------

VPL_DictionaryNode VPX_InterpreterControl_Constants[] =	{
	{"kVoidType", &_kVoidType_C},
	{"kStructureType", &_kStructureType_C},
	{"kPointerType", &_kPointerType_C},
	{"kLongType", &_kLongType_C},
	{"kUnsignedType", &_kUnsignedType_C},
	{"kShortType", &_kShortType_C},
	{"kCharType", &_kCharType_C},
	{"kEnumType", &_kEnumType_C},
	{"kDoubleType", &_kDoubleType_C},
	{"kFloatType", &_kFloatType_C},
	{"kIntType", &_kIntType_C}
};

VPL_DictionaryNode VPX_InterpreterControl_Procedures[] =	{
	{"vpl_WatchpointGetCallbackProc",&_vpl_WatchpointGetCallbackProc_F},
	{"vpl_WatchpointSetCallbackProc",&_vpl_WatchpointSetCallbackProc_F},
	{"VPL_TestExtProcedure",&_TestExtProcedure_F},
	{"TestCallbackProc",&_TestCallbackProc_F},
	{"VPL_TestCallback",&_TestCallback_F},
	{"TestCallbackVariableProc",&_TestCallbackVariableProc_F},
	{"VPL_TestCallbackVariableArg",&_TestCallbackVariableArg_F}
};

VPL_DictionaryNode VPX_InterpreterControl_Structures[] =	{
	{"VPL_ExtProcedure",&_VPL_ExtProcedure_S},
	{"VPL_Parameter",&_VPL_Parameter_S}
};

Nat4	VPX_InterpreterControl_Constants_Number = 11;
Nat4	VPX_InterpreterControl_Procedures_Number = 7;
Nat4	VPX_InterpreterControl_Structures_Number = 2;


Nat4	loadConstants_VPX_PrimitivesInterpreterControl(V_Environment environment,char *bundleID);
Nat4	loadConstants_VPX_PrimitivesInterpreterControl(V_Environment environment,char *bundleID)
{
#pragma unused(bundleID)

		Nat4	result = 0;
        V_Dictionary	dictionary = NULL;
		
		dictionary = environment->externalConstantsTable;
		result = add_nodes(dictionary,VPX_InterpreterControl_Constants_Number,VPX_InterpreterControl_Constants);
        
        return kNOERROR;

}

Nat4	loadProcedures_VPX_PrimitivesInterpreterControl(V_Environment environment,char *bundleID);
Nat4	loadProcedures_VPX_PrimitivesInterpreterControl(V_Environment environment,char *bundleID)
{
#pragma unused(bundleID)

		Nat4	result = 0;
        V_Dictionary	dictionary = NULL;
		
		dictionary = environment->externalProceduresTable;
		result = add_nodes(dictionary,VPX_InterpreterControl_Procedures_Number,VPX_InterpreterControl_Procedures);
        
        return kNOERROR;

}

Nat4	loadStructures_VPX_PrimitivesInterpreterControl(V_Environment environment,char *bundleID);
Nat4	loadStructures_VPX_PrimitivesInterpreterControl(V_Environment environment,char *bundleID)
{
#pragma unused(bundleID)

		Nat4	result = 0;
        V_Dictionary	dictionary = NULL;
		
		dictionary = environment->externalStructsTable;
		result = add_nodes(dictionary,VPX_InterpreterControl_Structures_Number,VPX_InterpreterControl_Structures);
		
		return result;
}

Nat4	loadPrimitives_VPX_PrimitivesInterpreterControl(V_Environment environment,char *bundleID);
Nat4	loadPrimitives_VPX_PrimitivesInterpreterControl(V_Environment environment,char *bundleID)
{
        V_ExtPrimitive	result = NULL;
        V_Dictionary	dictionary = environment->externalPrimitivesTable;

        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"debug-object",dictionary,1,0,VPLP_debug_2D_object)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"call",dictionary,3,1,VPLP_call)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"call-external",dictionary,3,1,VPLP_call_2D_external)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kNextCaseOnFailure,"compiled?",dictionary,0,0,VPLP_compiled_3F_)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"function-pointer",dictionary,3,1,VPLP_function_2D_pointer)) == NULL) return kERROR;
        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"switch-to-editor",dictionary,0,0,VPLP_switch_2D_to_2D_editor)) == NULL) return kERROR;

        if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"add-attribute-observer",dictionary,6,2,VPLP_add_2D_attribute_2D_observer)) == NULL) return kERROR;
		if((result = extPrimitive_new(bundleID,kContinueOnSuccess,"remove-attribute-observer",dictionary,3,1,VPLP_remove_2D_attribute_2D_observer)) == NULL) return kERROR;

		return kNOERROR;

}

Nat4	load_VPX_PrimitivesInterpreterControl(V_Environment environment,char *bundleID);
Nat4	load_VPX_PrimitivesInterpreterControl(V_Environment environment,char *bundleID)
{
		Nat4	result = 0;
		
		result = loadConstants_VPX_PrimitivesInterpreterControl(environment,bundleID);
		result = loadStructures_VPX_PrimitivesInterpreterControl(environment,bundleID);
		result = loadProcedures_VPX_PrimitivesInterpreterControl(environment,bundleID);
		result = loadPrimitives_VPX_PrimitivesInterpreterControl(environment,bundleID);
		
		return result;
}


