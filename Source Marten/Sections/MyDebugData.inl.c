/* A VPL Section File */
/*

MyDebugData.inl.c
Copyright: 2004 Andescotia LLC

*/

#include "MartenInlineProject.h"

enum opTrigger vpx_method_VPLCallback_20_Handler(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4,V_Object *root0)
{
HEADERWITHNONE(12)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
INPUT(4,4)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_Execution_20_Thread,1,1,NONE,ROOT(5));

result = vpx_set(PARAMETERS,kVPXValue_Project,TERMINAL(5),TERMINAL(0),ROOT(6));

result = vpx_set(PARAMETERS,kVPXValue_Main_20_Thread,TERMINAL(6),TERMINAL(1),ROOT(7));

result = vpx_set(PARAMETERS,kVPXValue_Method,TERMINAL(7),TERMINAL(2),ROOT(8));

result = vpx_set(PARAMETERS,kVPXValue_Input_20_List,TERMINAL(8),TERMINAL(3),ROOT(9));

result = vpx_set(PARAMETERS,kVPXValue_Outarity,TERMINAL(9),TERMINAL(4),ROOT(10));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Execute,1,1,TERMINAL(10),ROOT(11));

result = kSuccess;

OUTPUT(0,TERMINAL(11))
FOOTERSINGLECASEWITHNONE(12)
}




	Nat4 tempAttribute_Execution_20_Thread_2F_Main_20_Thread[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Execution_20_Thread_2F_Thread[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Execution_20_Thread_2F_Case[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Execution_20_Thread_2F_Operation[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Execution_20_Thread_2F_Depth[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Execution_20_Thread_2F_Input_20_List[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Execution_20_Thread_2F_Outarity[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Execution_20_Thread_2F_Results[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Execution_20_Thread_2F_Completed_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Interpreter_2F_Breakpoints[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Interpreter_2F_Threads[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};


Nat4 VPLC_Execution_20_Thread_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Execution_20_Thread_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 251 451 }{ 275 305 } */
	tempAttribute = attribute_add("Main Thread",tempClass,tempAttribute_Execution_20_Thread_2F_Main_20_Thread,environment);
	tempAttribute = attribute_add("Thread",tempClass,tempAttribute_Execution_20_Thread_2F_Thread,environment);
	tempAttribute = attribute_add("Method",tempClass,NULL,environment);
	tempAttribute = attribute_add("Case",tempClass,tempAttribute_Execution_20_Thread_2F_Case,environment);
	tempAttribute = attribute_add("Operation",tempClass,tempAttribute_Execution_20_Thread_2F_Operation,environment);
	tempAttribute = attribute_add("State",tempClass,NULL,environment);
	tempAttribute = attribute_add("Depth",tempClass,tempAttribute_Execution_20_Thread_2F_Depth,environment);
	tempAttribute = attribute_add("Stack",tempClass,NULL,environment);
	tempAttribute = attribute_add("Project",tempClass,NULL,environment);
	tempAttribute = attribute_add("Input List",tempClass,tempAttribute_Execution_20_Thread_2F_Input_20_List,environment);
	tempAttribute = attribute_add("Outarity",tempClass,tempAttribute_Execution_20_Thread_2F_Outarity,environment);
	tempAttribute = attribute_add("Results",tempClass,tempAttribute_Execution_20_Thread_2F_Results,environment);
	tempAttribute = attribute_add("Completed?",tempClass,tempAttribute_Execution_20_Thread_2F_Completed_3F_,environment);
	tempAttribute = attribute_add("Final Task",tempClass,NULL,environment);
	tempAttribute = attribute_add("Stack Frames",tempClass,NULL,environment);
/* Stop Attributes */

/* NULL SUPER CLASS */
	return kNOERROR;
}

/* Start Universals: { 323 366 }{ 143 414 } */
enum opTrigger vpx_method_Execution_20_Thread_2F_Stack_20_Execution(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Execute,1,1,TERMINAL(0),ROOT(3));

result = vpx_set(PARAMETERS,kVPXValue_Results,TERMINAL(0),TERMINAL(3),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Execution_20_Thread_2F_Stack_20_Termination(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"FALSE",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_system_2D_used,2,0,TERMINAL(0),TERMINAL(3));

result = vpx_constant(PARAMETERS,"TRUE",ROOT(4));

result = vpx_set(PARAMETERS,kVPXValue_Completed_3F_,TERMINAL(0),TERMINAL(4),ROOT(5));

result = kSuccess;

FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Execution_20_Thread_2F_Install_20_Thread(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_persistent(PARAMETERS,kVPXValue_Threads,0,1,ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_attach_2D_l,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_persistent(PARAMETERS,kVPXValue_Threads,1,0,TERMINAL(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Execution_20_Thread_2F_Show_20_Errors(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(8)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Project,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Errors,1,1,TERMINAL(4),ROOT(5));

result = vpx_match(PARAMETERS,"( )",TERMINAL(5));
TERMINATEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_detach_2D_l,1,2,TERMINAL(5),ROOT(6),ROOT(7));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Handle_20_Fault,3,0,TERMINAL(3),TERMINAL(6),TERMINAL(7));
FAILONFAILURE

result = kSuccess;

FOOTERSINGLECASE(8)
}

enum opTrigger vpx_method_Execution_20_Thread_2F_Execute_case_1_local_8_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Execution_20_Thread_2F_Execute_case_1_local_8_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADERWITHNONE(2)
INPUT(0,0)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_Stack_20_Data,1,1,NONE,ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open,2,0,TERMINAL(1),TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASEWITHNONE(2)
}

enum opTrigger vpx_method_Execution_20_Thread_2F_Execute_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Execution_20_Thread_2F_Execute_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Threads,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP__28_in_29_,2,1,TERMINAL(3),TERMINAL(1),ROOT(4));

result = vpx_match(PARAMETERS,"0",TERMINAL(4));
TERMINATEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_attach_2D_r,2,1,TERMINAL(3),TERMINAL(1),ROOT(5));

result = vpx_set(PARAMETERS,kVPXValue_Threads,TERMINAL(2),TERMINAL(5),ROOT(6));

result = vpx_method_Execution_20_Thread_2F_Execute_case_1_local_8_case_1_local_7(PARAMETERS,TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(7)
}

enum opTrigger vpx_method_Execution_20_Thread_2F_Execute_case_1_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Execution_20_Thread_2F_Execute_case_1_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADERWITHNONE(16)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Advance_20_Stack,2,6,TERMINAL(1),TERMINAL(2),ROOT(3),ROOT(4),ROOT(5),ROOT(6),ROOT(7),ROOT(8));

result = vpx_match(PARAMETERS,"FALSE",TERMINAL(3));
TERMINATEONFAILURE

result = vpx_instantiate(PARAMETERS,kVPXClass_Debug_20_State,1,1,NONE,ROOT(9));

result = vpx_set(PARAMETERS,kVPXValue_Thread,TERMINAL(9),TERMINAL(0),ROOT(10));

result = vpx_set(PARAMETERS,kVPXValue_Case_20_Stack,TERMINAL(10),TERMINAL(4),ROOT(11));

result = vpx_set(PARAMETERS,kVPXValue_Case,TERMINAL(11),TERMINAL(5),ROOT(12));

result = vpx_set(PARAMETERS,kVPXValue_Method,TERMINAL(12),TERMINAL(6),ROOT(13));

result = vpx_set(PARAMETERS,kVPXValue_Case_20_Index,TERMINAL(13),TERMINAL(7),ROOT(14));

result = vpx_set(PARAMETERS,kVPXValue_Total_20_Cases,TERMINAL(14),TERMINAL(8),ROOT(15));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Handle_20_Break,1,0,TERMINAL(15));
TERMINATEONFAILURE

result = kSuccess;

FOOTERSINGLECASEWITHNONE(16)
}

enum opTrigger vpx_method_Execution_20_Thread_2F_Execute_case_1_local_13_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Execution_20_Thread_2F_Execute_case_1_local_13_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Stack_20_Frames,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(2));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Close,1,0,TERMINAL(2));

result = vpx_constant(PARAMETERS,"NULL",ROOT(3));

result = vpx_set(PARAMETERS,kVPXValue_Stack_20_Frames,TERMINAL(1),TERMINAL(3),ROOT(4));

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Execution_20_Thread_2F_Execute_case_1_local_13(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Execution_20_Thread_2F_Execute_case_1_local_13(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Threads,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP__28_in_29_,2,1,TERMINAL(3),TERMINAL(1),ROOT(4));

result = vpx_match(PARAMETERS,"0",TERMINAL(4));
TERMINATEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_detach_2D_nth,2,2,TERMINAL(3),TERMINAL(4),ROOT(5),ROOT(6));

result = vpx_set(PARAMETERS,kVPXValue_Threads,TERMINAL(2),TERMINAL(5),ROOT(7));

result = vpx_method_Execution_20_Thread_2F_Execute_case_1_local_13_case_1_local_7(PARAMETERS,TERMINAL(6));

result = kSuccess;

FOOTERSINGLECASE(8)
}

enum opTrigger vpx_method_Execution_20_Thread_2F_Execute(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(15)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Input_20_List,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_Method,TERMINAL(1),ROOT(3),ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_Project,TERMINAL(3),ROOT(5),ROOT(6));

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(6),ROOT(7),ROOT(8));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Initialize_20_Stack,3,2,TERMINAL(8),TERMINAL(4),TERMINAL(2),ROOT(9),ROOT(10));

result = vpx_set(PARAMETERS,kVPXValue_Stack,TERMINAL(5),TERMINAL(9),ROOT(11));

result = vpx_method_Execution_20_Thread_2F_Execute_case_1_local_8(PARAMETERS,TERMINAL(8),TERMINAL(11));

REPEATBEGIN
result = vpx_method_Execution_20_Thread_2F_Execute_case_1_local_9(PARAMETERS,TERMINAL(11),TERMINAL(8),TERMINAL(9));
REPEATFINISH

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Finalize_20_Stack,3,1,TERMINAL(8),TERMINAL(9),TERMINAL(10),ROOT(12));

result = vpx_constant(PARAMETERS,"NULL",ROOT(13));

result = vpx_set(PARAMETERS,kVPXValue_Stack,TERMINAL(11),TERMINAL(13),ROOT(14));

result = vpx_method_Execution_20_Thread_2F_Execute_case_1_local_13(PARAMETERS,TERMINAL(8),TERMINAL(14));

result = kSuccess;

OUTPUT(0,TERMINAL(12))
FOOTERSINGLECASE(15)
}

enum opTrigger vpx_method_Execution_20_Thread_2F_Return_20_From_20_Thread_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Execution_20_Thread_2F_Return_20_From_20_Thread_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Results,TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Project,TERMINAL(2),ROOT(4),ROOT(5));

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(5),ROOT(6),ROOT(7));

result = vpx_constant(PARAMETERS,"decrement",ROOT(8));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(3))) ){
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Modify_20_Value_20_Use,3,0,TERMINAL(7),LIST(3),TERMINAL(8));
REPEATFINISH
} else {
}

result = kSuccess;

FOOTER(9)
}

enum opTrigger vpx_method_Execution_20_Thread_2F_Return_20_From_20_Thread_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Execution_20_Thread_2F_Return_20_From_20_Thread_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(0));
TERMINATEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Perform,2,0,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Execution_20_Thread_2F_Return_20_From_20_Thread_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Execution_20_Thread_2F_Return_20_From_20_Thread_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Execution_20_Thread_2F_Return_20_From_20_Thread_case_1_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Execution_20_Thread_2F_Return_20_From_20_Thread_case_1_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Execution_20_Thread_2F_Return_20_From_20_Thread(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Completed_3F_,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(2));
TERMINATEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Final_20_Task,TERMINAL(1),ROOT(3),ROOT(4));

result = vpx_method_Execution_20_Thread_2F_Return_20_From_20_Thread_case_1_local_5(PARAMETERS,TERMINAL(4),TERMINAL(3));

result = kSuccess;

FOOTERSINGLECASE(5)
}

/* Stop Universals */



Nat4 VPLC_Debug_20_State_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Debug_20_State_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 349 487 }{ 200 300 } */
	tempAttribute = attribute_add("Case",tempClass,NULL,environment);
	tempAttribute = attribute_add("Case Stack",tempClass,NULL,environment);
	tempAttribute = attribute_add("Thread",tempClass,NULL,environment);
	tempAttribute = attribute_add("Frame",tempClass,NULL,environment);
	tempAttribute = attribute_add("Method",tempClass,NULL,environment);
	tempAttribute = attribute_add("Case Index",tempClass,NULL,environment);
	tempAttribute = attribute_add("Total Cases",tempClass,NULL,environment);
	tempAttribute = attribute_add("Parent",tempClass,NULL,environment);
/* Stop Attributes */

/* NULL SUPER CLASS */
	return kNOERROR;
}

/* Start Universals: { 381 933 }{ 436 404 } */
enum opTrigger vpx_method_Debug_20_State_2F_Open_20_Editor_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Debug_20_State_2F_Open_20_Editor_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Editor,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
NEXTCASEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Select_20_Window,1,0,TERMINAL(1));

result = vpx_get(PARAMETERS,kVPXValue_View,TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_constant(PARAMETERS,"TRUE",ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Target,3,0,TERMINAL(2),TERMINAL(3),TERMINAL(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Show_20_Current_20_Operation,2,0,TERMINAL(3),TERMINAL(0));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Refresh,1,0,TERMINAL(2));

result = kSuccess;

FOOTER(5)
}

enum opTrigger vpx_method_Debug_20_State_2F_Open_20_Editor_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Debug_20_State_2F_Open_20_Editor_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Get_20_Desktop(PARAMETERS,ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
NEXTCASEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Construct_20_Editor,1,1,TERMINAL(0),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Install_20_Data,2,0,TERMINAL(2),TERMINAL(0));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Add_20_Window,2,0,TERMINAL(1),TERMINAL(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open,2,0,TERMINAL(2),TERMINAL(1));

result = vpx_get(PARAMETERS,kVPXValue_View,TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_constant(PARAMETERS,"TRUE",ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Target,3,0,TERMINAL(3),TERMINAL(4),TERMINAL(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Refresh,1,0,TERMINAL(3));

result = kSuccess;

FOOTER(6)
}

enum opTrigger vpx_method_Debug_20_State_2F_Open_20_Editor_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Debug_20_State_2F_Open_20_Editor_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Couldn\'t find application!",ROOT(1));

result = vpx_method_Debug(PARAMETERS,TERMINAL(1));

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Debug_20_State_2F_Open_20_Editor(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Debug_20_State_2F_Open_20_Editor_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
if(vpx_method_Debug_20_State_2F_Open_20_Editor_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Debug_20_State_2F_Open_20_Editor_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Debug_20_State_2F_Get_20_Editor_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Debug_20_State_2F_Get_20_Editor_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(10)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Case_20_Stack,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
NEXTCASEONSUCCESS

result = vpx_get(PARAMETERS,kVPXValue_Thread,TERMINAL(1),ROOT(3),ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_Project,TERMINAL(4),ROOT(5),ROOT(6));

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(6),ROOT(7),ROOT(8));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Debug_20_Window,2,1,TERMINAL(8),TERMINAL(2),ROOT(9));

result = kSuccess;

OUTPUT(0,TERMINAL(9))
FOOTER(10)
}

enum opTrigger vpx_method_Debug_20_State_2F_Get_20_Editor_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Debug_20_State_2F_Get_20_Editor_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Debug_20_State_2F_Get_20_Editor(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Debug_20_State_2F_Get_20_Editor_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Debug_20_State_2F_Get_20_Editor_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Debug_20_State_2F_Close_20_Editor_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Debug_20_State_2F_Close_20_Editor_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Editor,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
NEXTCASEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Close_20_Self,1,0,TERMINAL(1));

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Debug_20_State_2F_Close_20_Editor_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Debug_20_State_2F_Close_20_Editor_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_Debug_20_State_2F_Close_20_Editor(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Debug_20_State_2F_Close_20_Editor_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Debug_20_State_2F_Close_20_Editor_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Debug_20_State_2F_Construct_20_Editor(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(4)
INPUT(0,0)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_Debug_20_Window,1,1,NONE,ROOT(1));

result = vpx_instantiate(PARAMETERS,kVPXClass_Debug_20_View,1,1,NONE,ROOT(2));

result = vpx_set(PARAMETERS,kVPXValue_View,TERMINAL(1),TERMINAL(2),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASEWITHNONE(4)
}

enum opTrigger vpx_method_Debug_20_State_2F_Get_20_Application_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Debug_20_State_2F_Get_20_Application_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(8)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Thread,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
NEXTCASEONSUCCESS

result = vpx_get(PARAMETERS,kVPXValue_Project,TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(4));
NEXTCASEONSUCCESS

result = vpx_get(PARAMETERS,kVPXValue_Owner,TERMINAL(4),ROOT(5),ROOT(6));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(6));
NEXTCASEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Application,1,1,TERMINAL(6),ROOT(7));

result = kSuccess;

OUTPUT(0,TERMINAL(7))
FOOTER(8)
}

enum opTrigger vpx_method_Debug_20_State_2F_Get_20_Application_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Debug_20_State_2F_Get_20_Application_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Debug_20_State_2F_Get_20_Application(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Debug_20_State_2F_Get_20_Application_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Debug_20_State_2F_Get_20_Application_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Debug_20_State_2F_Construct_20_Title_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Debug_20_State_2F_Construct_20_Title_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(8)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\" Debug\"",ROOT(1));

result = vpx_get(PARAMETERS,kVPXValue_Case,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_constant(PARAMETERS,"Operation Data",ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(3),TERMINAL(4),ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Construct_20_Title,1,1,TERMINAL(5),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(6),TERMINAL(1),ROOT(7));

result = kSuccess;

OUTPUT(0,TERMINAL(7))
FOOTER(8)
}

enum opTrigger vpx_method_Debug_20_State_2F_Construct_20_Title_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Debug_20_State_2F_Construct_20_Title_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(8)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
NEXTCASEONSUCCESS

result = vpx_get(PARAMETERS,kVPXValue_Helper_20_Name,TERMINAL(1),ROOT(3),ROOT(4));

result = vpx_constant(PARAMETERS,"\"/Construct Title\"",ROOT(5));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(4));
NEXTCASEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(4),TERMINAL(5),ROOT(6));

result = vpx_call_inject_method(PARAMETERS,INJECT(6),2,1,TERMINAL(4),TERMINAL(2),ROOT(7));

result = kSuccess;

OUTPUT(0,TERMINAL(7))
FOOTER(8)
}

enum opTrigger vpx_method_Debug_20_State_2F_Construct_20_Title(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Debug_20_State_2F_Construct_20_Title_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Debug_20_State_2F_Construct_20_Title_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Debug_20_State_2F_Get_20_Current_20_Item(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Current_20_Index,1,1,TERMINAL(0),ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Item,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Debug_20_State_2F_Get_20_Item_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Debug_20_State_2F_Get_20_Item_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(10)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Case,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_match(PARAMETERS,"0",TERMINAL(1));
NEXTCASEONSUCCESS

result = vpx_constant(PARAMETERS,"Operation Data",ROOT(4));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
NEXTCASEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(3),TERMINAL(4),ROOT(5));

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(5),ROOT(6),ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP__28_length_29_,1,1,TERMINAL(7),ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP_lte,2,0,TERMINAL(1),TERMINAL(8));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_nth,2,1,TERMINAL(7),TERMINAL(1),ROOT(9));

result = kSuccess;

OUTPUT(0,TERMINAL(9))
FOOTER(10)
}

enum opTrigger vpx_method_Debug_20_State_2F_Get_20_Item_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Debug_20_State_2F_Get_20_Item_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Debug_20_State_2F_Get_20_Item(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Debug_20_State_2F_Get_20_Item_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Debug_20_State_2F_Get_20_Item_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Debug_20_State_2F_Get_20_Current_20_Index_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Debug_20_State_2F_Get_20_Current_20_Index_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(21)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Case_20_Stack,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_Thread,TERMINAL(1),ROOT(3),ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_Project,TERMINAL(4),ROOT(5),ROOT(6));

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(6),ROOT(7),ROOT(8));

result = vpx_get(PARAMETERS,kVPXValue_Case,TERMINAL(3),ROOT(9),ROOT(10));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Current_20_Operation,2,1,TERMINAL(8),TERMINAL(2),ROOT(11));

result = vpx_match(PARAMETERS,"( )",TERMINAL(11));
NEXTCASEONSUCCESS

result = vpx_constant(PARAMETERS,"Operation Data",ROOT(12));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(10));
NEXTCASEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(10),TERMINAL(12),ROOT(13));

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(13),ROOT(14),ROOT(15));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(15))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_get(PARAMETERS,kVPXValue_Helper,LIST(15),ROOT(16),ROOT(17));
LISTROOT(17,0)
REPEATFINISH
LISTROOTFINISH(17,0)
LISTROOTEND
} else {
ROOTNULL(16,NULL)
ROOTEMPTY(17)
}

result = vpx_call_primitive(PARAMETERS,VPLP_detach_2D_r,1,2,TERMINAL(11),ROOT(18),ROOT(19));

result = vpx_call_primitive(PARAMETERS,VPLP__28_in_29_,2,1,TERMINAL(17),TERMINAL(19),ROOT(20));

result = kSuccess;

OUTPUT(0,TERMINAL(20))
FOOTER(21)
}

enum opTrigger vpx_method_Debug_20_State_2F_Get_20_Current_20_Index_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Debug_20_State_2F_Get_20_Current_20_Index_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"0",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Debug_20_State_2F_Get_20_Current_20_Index(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Debug_20_State_2F_Get_20_Current_20_Index_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Debug_20_State_2F_Get_20_Current_20_Index_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Debug_20_State_2F_Set_20_Item_20_Breakpoint_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Debug_20_State_2F_Set_20_Item_20_Breakpoint_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(13)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"TRUE",ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Case_20_Stack,TERMINAL(0),ROOT(4),ROOT(5));

result = vpx_get(PARAMETERS,kVPXValue_Thread,TERMINAL(4),ROOT(6),ROOT(7));

result = vpx_get(PARAMETERS,kVPXValue_Project,TERMINAL(7),ROOT(8),ROOT(9));

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(9),ROOT(10),ROOT(11));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Frame_20_Breakpoint,4,0,TERMINAL(11),TERMINAL(5),TERMINAL(2),TERMINAL(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Item,2,1,TERMINAL(0),TERMINAL(1),ROOT(12));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(12));
FAILONSUCCESS

result = kSuccess;

FOOTER(13)
}

enum opTrigger vpx_method_Debug_20_State_2F_Set_20_Item_20_Breakpoint_case_2_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Debug_20_State_2F_Set_20_Item_20_Breakpoint_case_2_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_match(PARAMETERS,"0",TERMINAL(0));
TERMINATEONFAILURE

result = vpx_set(PARAMETERS,kVPXValue_Breakpoint,TERMINAL(1),TERMINAL(2),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Update_20_Record,1,0,TERMINAL(3));

result = vpx_constant(PARAMETERS,"FALSE",ROOT(4));

result = vpx_set(PARAMETERS,kVPXValue_Breakpoint,TERMINAL(3),TERMINAL(4),ROOT(5));

result = kSuccess;

FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Debug_20_State_2F_Set_20_Item_20_Breakpoint_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Debug_20_State_2F_Set_20_Item_20_Breakpoint_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(15)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Item,2,1,TERMINAL(0),TERMINAL(1),ROOT(3));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
FAILONSUCCESS

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_get(PARAMETERS,kVPXValue_Thread,TERMINAL(0),ROOT(6),ROOT(7));

result = vpx_get(PARAMETERS,kVPXValue_Project,TERMINAL(7),ROOT(8),ROOT(9));

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(9),ROOT(10),ROOT(11));

result = vpx_get(PARAMETERS,kVPXValue_Breakpoints,TERMINAL(11),ROOT(12),ROOT(13));

result = vpx_call_primitive(PARAMETERS,VPLP__28_in_29_,2,1,TERMINAL(13),TERMINAL(5),ROOT(14));

result = vpx_method_Debug_20_State_2F_Set_20_Item_20_Breakpoint_case_2_local_10(PARAMETERS,TERMINAL(14),TERMINAL(5),TERMINAL(2));

result = kSuccess;

FOOTER(15)
}

enum opTrigger vpx_method_Debug_20_State_2F_Set_20_Item_20_Breakpoint(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Debug_20_State_2F_Set_20_Item_20_Breakpoint_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2))
vpx_method_Debug_20_State_2F_Set_20_Item_20_Breakpoint_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2);
return outcome;
}

enum opTrigger vpx_method_Debug_20_State_2F_Handle_20_Break_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Debug_20_State_2F_Handle_20_Break_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(12)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Case_20_Stack,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_Thread,TERMINAL(1),ROOT(3),ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_Project,TERMINAL(4),ROOT(5),ROOT(6));

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(6),ROOT(7),ROOT(8));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Current_20_Operation,2,1,TERMINAL(8),TERMINAL(2),ROOT(9));

result = vpx_match(PARAMETERS,"( )",TERMINAL(9));
NEXTCASEONSUCCESS

result = vpx_get(PARAMETERS,kVPXValue_Case,TERMINAL(3),ROOT(10),ROOT(11));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(11));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Show_20_Errors,1,0,TERMINAL(5));
CONTINUEONFAILURE

result = kSuccess;
FAILONSUCCESS

FOOTER(12)
}

enum opTrigger vpx_method_Debug_20_State_2F_Handle_20_Break_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Debug_20_State_2F_Handle_20_Break_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Current_20_Item,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Close_20_Editor,1,0,TERMINAL(0));

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Debug_20_State_2F_Handle_20_Break_case_3_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex);
enum opTrigger vpx_method_Debug_20_State_2F_Handle_20_Break_case_3_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex)
{
HEADER(1)
result = kSuccess;

result = vpx_method_Get_20_Stack_20_Service(PARAMETERS,ROOT(0));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Post_20_Menu_20_Update,1,0,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Debug_20_State_2F_Handle_20_Break_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Debug_20_State_2F_Handle_20_Break_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Thread,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_Main_20_Thread,TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Show_20_Errors,1,0,TERMINAL(3));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open_20_Editor,1,0,TERMINAL(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Install_20_Frames,1,0,TERMINAL(1));

result = vpx_method_Debug_20_State_2F_Handle_20_Break_case_3_local_7(PARAMETERS);

result = vpx_method_Yield_20_To_20_Thread(PARAMETERS,TERMINAL(4));

result = kSuccess;

FOOTER(5)
}

enum opTrigger vpx_method_Debug_20_State_2F_Handle_20_Break_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Debug_20_State_2F_Handle_20_Break_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_Debug_20_State_2F_Handle_20_Break(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Debug_20_State_2F_Handle_20_Break_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
if(vpx_method_Debug_20_State_2F_Handle_20_Break_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0))
if(vpx_method_Debug_20_State_2F_Handle_20_Break_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Debug_20_State_2F_Handle_20_Break_case_4(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Debug_20_State_2F_Set_20_Editor_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Debug_20_State_2F_Set_20_Editor_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(10)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Case_20_Stack,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
NEXTCASEONSUCCESS

result = vpx_get(PARAMETERS,kVPXValue_Thread,TERMINAL(2),ROOT(4),ROOT(5));

result = vpx_get(PARAMETERS,kVPXValue_Project,TERMINAL(5),ROOT(6),ROOT(7));

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(7),ROOT(8),ROOT(9));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Debug_20_Window,3,0,TERMINAL(9),TERMINAL(3),TERMINAL(1));

result = kSuccess;

FOOTER(10)
}

enum opTrigger vpx_method_Debug_20_State_2F_Set_20_Editor_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Debug_20_State_2F_Set_20_Editor_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Debug_20_State_2F_Set_20_Editor(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Debug_20_State_2F_Set_20_Editor_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Debug_20_State_2F_Set_20_Editor_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Debug_20_State_2F_Set_20_Current_20_Operation(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(12)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Case_20_Stack,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Thread,TERMINAL(2),ROOT(4),ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Install_20_Thread,1,0,TERMINAL(5));

result = vpx_get(PARAMETERS,kVPXValue_Stack,TERMINAL(5),ROOT(6),ROOT(7));

result = vpx_get(PARAMETERS,kVPXValue_Project,TERMINAL(6),ROOT(8),ROOT(9));

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(9),ROOT(10),ROOT(11));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Current_20_Operation,4,0,TERMINAL(11),TERMINAL(7),TERMINAL(3),TERMINAL(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Install_20_Frames,1,0,TERMINAL(4));

result = kSuccess;

FOOTERSINGLECASE(12)
}

enum opTrigger vpx_method_Debug_20_State_2F_Install_20_Frames_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Debug_20_State_2F_Install_20_Frames_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADERWITHNONE(23)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Case_20_Stack,TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Thread,TERMINAL(2),ROOT(4),ROOT(5));

result = vpx_get(PARAMETERS,kVPXValue_Project,TERMINAL(5),ROOT(6),ROOT(7));

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(7),ROOT(8),ROOT(9));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Previous_20_Case,2,5,TERMINAL(9),TERMINAL(3),ROOT(10),ROOT(11),ROOT(12),ROOT(13),ROOT(14));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(11));
NEXTCASEONSUCCESS

result = vpx_instantiate(PARAMETERS,kVPXClass_Debug_20_State,1,1,NONE,ROOT(15));

result = vpx_set(PARAMETERS,kVPXValue_Case_20_Stack,TERMINAL(15),TERMINAL(10),ROOT(16));

result = vpx_set(PARAMETERS,kVPXValue_Case,TERMINAL(16),TERMINAL(11),ROOT(17));

result = vpx_set(PARAMETERS,kVPXValue_Method,TERMINAL(17),TERMINAL(12),ROOT(18));

result = vpx_set(PARAMETERS,kVPXValue_Case_20_Index,TERMINAL(18),TERMINAL(13),ROOT(19));

result = vpx_set(PARAMETERS,kVPXValue_Total_20_Cases,TERMINAL(19),TERMINAL(14),ROOT(20));

result = vpx_set(PARAMETERS,kVPXValue_Thread,TERMINAL(20),TERMINAL(5),ROOT(21));

result = vpx_call_primitive(PARAMETERS,VPLP_attach_2D_l,2,1,TERMINAL(21),TERMINAL(0),ROOT(22));

result = kSuccess;

OUTPUT(0,TERMINAL(22))
OUTPUT(1,TERMINAL(21))
FOOTERWITHNONE(23)
}

enum opTrigger vpx_method_Debug_20_State_2F_Install_20_Frames_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Debug_20_State_2F_Install_20_Frames_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(2));

result = kSuccess;
FINISHONSUCCESS

OUTPUT(0,TERMINAL(0))
OUTPUT(1,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Debug_20_State_2F_Install_20_Frames_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Debug_20_State_2F_Install_20_Frames_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Debug_20_State_2F_Install_20_Frames_case_1_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1))
vpx_method_Debug_20_State_2F_Install_20_Frames_case_1_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1);
return outcome;
}

enum opTrigger vpx_method_Debug_20_State_2F_Install_20_Frames(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(9)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Thread,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_Stack_20_Frames,TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,1,1,TERMINAL(1),ROOT(5));

REPEATBEGIN
LOOPTERMINALBEGIN(2)
LOOPTERMINAL(0,5,6)
LOOPTERMINAL(1,1,7)
result = vpx_method_Debug_20_State_2F_Install_20_Frames_case_1_local_5(PARAMETERS,LOOP(0),LOOP(1),ROOT(6),ROOT(7));
REPEATFINISH

result = vpx_set(PARAMETERS,kVPXValue_List,TERMINAL(4),TERMINAL(6),ROOT(8));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Send_20_Refresh,1,0,TERMINAL(8));

result = kSuccess;

FOOTERSINGLECASE(9)
}

enum opTrigger vpx_method_Debug_20_State_2F_In_20_Current_20_Stack(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(7)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Thread,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_Stack_20_Frames,TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Has_20_Case_20_Stack_3F_,2,1,TERMINAL(4),TERMINAL(0),ROOT(5));

result = vpx_match(PARAMETERS,"FALSE",TERMINAL(5));
TERMINATEONFAILURE

result = vpx_constant(PARAMETERS,"Frame is not in current stack!",ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP_show,1,0,TERMINAL(6));
FAILONSUCCESS

result = kSuccess;

FOOTERSINGLECASE(7)
}

enum opTrigger vpx_method_Debug_20_State_2F_Remove_20_View(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Debug_20_State_2F_Continue(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Thread,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Install_20_Thread,1,0,TERMINAL(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Close_20_Editor,1,0,TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Debug_20_State_2F_Step_20_Into_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Debug_20_State_2F_Step_20_Into_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(10)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Thread,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_Project,TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(4),ROOT(5),ROOT(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Step_20_Into,1,0,TERMINAL(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Install_20_Thread,1,0,TERMINAL(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Current_20_Index,1,1,TERMINAL(0),ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP_plus_2D_one,1,1,TERMINAL(7),ROOT(8));

result = vpx_constant(PARAMETERS,"TRUE",ROOT(9));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Item_20_Breakpoint,3,0,TERMINAL(0),TERMINAL(8),TERMINAL(9));
NEXTCASEONFAILURE

result = kSuccess;

FOOTER(10)
}

enum opTrigger vpx_method_Debug_20_State_2F_Step_20_Into_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Debug_20_State_2F_Step_20_Into_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Close_20_Editor,1,0,TERMINAL(0));

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_Debug_20_State_2F_Step_20_Into(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Debug_20_State_2F_Step_20_Into_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Debug_20_State_2F_Step_20_Into_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Debug_20_State_2F_Step_20_Out(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(9)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Thread,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_Case_20_Stack,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_Project,TERMINAL(2),ROOT(5),ROOT(6));

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(6),ROOT(7),ROOT(8));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Step_20_Out,2,0,TERMINAL(8),TERMINAL(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Install_20_Thread,1,0,TERMINAL(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Close_20_Editor,1,0,TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(9)
}

enum opTrigger vpx_method_Debug_20_State_2F_Step_20_Skip_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Debug_20_State_2F_Step_20_Skip_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(15)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Thread,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Case_20_Stack,TERMINAL(2),ROOT(4),ROOT(5));

result = vpx_constant(PARAMETERS,"TRUE",ROOT(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Current_20_Index,1,1,TERMINAL(0),ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP__2B2B_,2,1,TERMINAL(7),TERMINAL(1),ROOT(8));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Item_20_Breakpoint,3,0,TERMINAL(2),TERMINAL(8),TERMINAL(6));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Install_20_Thread,1,0,TERMINAL(3));

result = vpx_get(PARAMETERS,kVPXValue_Stack,TERMINAL(3),ROOT(9),ROOT(10));

result = vpx_get(PARAMETERS,kVPXValue_Project,TERMINAL(9),ROOT(11),ROOT(12));

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(12),ROOT(13),ROOT(14));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Current_20_Operation,4,0,TERMINAL(14),TERMINAL(10),TERMINAL(5),TERMINAL(8));

result = kSuccess;

FOOTER(15)
}

enum opTrigger vpx_method_Debug_20_State_2F_Step_20_Skip_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Debug_20_State_2F_Step_20_Skip_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Beep(PARAMETERS);

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Debug_20_State_2F_Step_20_Skip(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Debug_20_State_2F_Step_20_Skip_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Debug_20_State_2F_Step_20_Skip_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Debug_20_State_2F_Step_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Debug_20_State_2F_Step_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Thread,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Install_20_Thread,1,0,TERMINAL(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Current_20_Index,1,1,TERMINAL(0),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_plus_2D_one,1,1,TERMINAL(3),ROOT(4));

result = vpx_constant(PARAMETERS,"TRUE",ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Item_20_Breakpoint,3,0,TERMINAL(0),TERMINAL(4),TERMINAL(5));
NEXTCASEONFAILURE

result = kSuccess;

FOOTER(6)
}

enum opTrigger vpx_method_Debug_20_State_2F_Step_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Debug_20_State_2F_Step_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Close_20_Editor,1,0,TERMINAL(0));

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_Debug_20_State_2F_Step(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Debug_20_State_2F_Step_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Debug_20_State_2F_Step_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Debug_20_State_2F_Clear_20_Breakpoints_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Debug_20_State_2F_Clear_20_Breakpoints_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(9)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Case,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_Owner,TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(4),ROOT(5),ROOT(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_All_20_Breakpoints,1,1,TERMINAL(6),ROOT(7));

result = vpx_match(PARAMETERS,"( )",TERMINAL(7));
NEXTCASEONSUCCESS

result = vpx_constant(PARAMETERS,"FALSE",ROOT(8));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(7))) ){
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Change_20_Breakpoint,2,0,LIST(7),TERMINAL(8));
REPEATFINISH
} else {
}

result = kSuccess;

FOOTER(9)
}

enum opTrigger vpx_method_Debug_20_State_2F_Clear_20_Breakpoints_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Debug_20_State_2F_Clear_20_Breakpoints_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_Debug_20_State_2F_Clear_20_Breakpoints(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Debug_20_State_2F_Clear_20_Breakpoints_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Debug_20_State_2F_Clear_20_Breakpoints_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Debug_20_State_2F_Abort(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Debug Abort",ROOT(1));

result = vpx_method_Debug_20_Unimp(PARAMETERS,TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Debug_20_State_2F_Get_20_All_20_Breakpoints(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(8)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Case,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_Owner,TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(4),ROOT(5),ROOT(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_All_20_Breakpoints,1,1,TERMINAL(6),ROOT(7));

result = kSuccess;

OUTPUT(0,TERMINAL(7))
FOOTERSINGLECASE(8)
}

enum opTrigger vpx_method_Debug_20_State_2F_Have_20_Row_20_Values_3F_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"FALSE",ROOT(1));

result = vpx_constant(PARAMETERS,"NULL",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
OUTPUT(1,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Debug_20_State_2F_Have_20_Icon_20_Values_3F_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Case,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Grandparent_20_Helper,1,1,TERMINAL(2),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Have_20_Icon_20_Values_3F_,1,2,TERMINAL(3),ROOT(4),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
OUTPUT(1,TERMINAL(5))
FOOTERSINGLECASE(6)
}

/* Stop Universals */



Nat4 VPLC_Thread_20_Task_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Thread_20_Task_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 200 300 } */
/* Stop Attributes */

/* NULL SUPER CLASS */
	return kNOERROR;
}

/* Start Universals: { 351 367 }{ 59 320 } */
enum opTrigger vpx_method_Thread_20_Task_2F_Perform(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(2)
}

/* Stop Universals */



Nat4 VPLC_Interpreter_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Interpreter_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 430 366 }{ 200 300 } */
	tempAttribute = attribute_add("Project",tempClass,NULL,environment);
	tempAttribute = attribute_add("Environment",tempClass,NULL,environment);
	tempAttribute = attribute_add("Write Name",tempClass,NULL,environment);
	tempAttribute = attribute_add("Read Name",tempClass,NULL,environment);
	tempAttribute = attribute_add("Write Descriptor",tempClass,NULL,environment);
	tempAttribute = attribute_add("Read Descriptor",tempClass,NULL,environment);
	tempAttribute = attribute_add("File",tempClass,NULL,environment);
	tempAttribute = attribute_add("Breakpoints",tempClass,tempAttribute_Interpreter_2F_Breakpoints,environment);
	tempAttribute = attribute_add("Threads",tempClass,tempAttribute_Interpreter_2F_Threads,environment);
/* Stop Attributes */

/* NULL SUPER CLASS */
	return kNOERROR;
}

/* Start Universals: { 45 400 }{ 804 349 } */
enum opTrigger vpx_method_Interpreter_2F_Open_case_1_local_4_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Interpreter_2F_Open_case_1_local_4_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_File,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
NEXTCASEONSUCCESS

result = vpx_constant(PARAMETERS,"FALSE",ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
OUTPUT(1,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Interpreter_2F_Open_case_1_local_4_case_1_local_3_case_2_local_11_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Interpreter_2F_Open_case_1_local_4_case_1_local_3_case_2_local_11_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(7)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_UniChar,1,2,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Length,1,1,TERMINAL(0),ROOT(4));

result = vpx_extconstant(PARAMETERS,kTextEncodingUnknown,ROOT(5));

result = vpx_instantiate(PARAMETERS,kVPXClass_MacOS_20_File_20_Reference,1,1,NONE,ROOT(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_New_20_From_20_Unicode,5,0,TERMINAL(6),TERMINAL(1),TERMINAL(2),TERMINAL(4),TERMINAL(5));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTERWITHNONE(7)
}

enum opTrigger vpx_method_Interpreter_2F_Open_case_1_local_4_case_1_local_3_case_2_local_11_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Interpreter_2F_Open_case_1_local_4_case_1_local_3_case_2_local_11_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Interpreter_2F_Open_case_1_local_4_case_1_local_3_case_2_local_11_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Interpreter_2F_Open_case_1_local_4_case_1_local_3_case_2_local_11_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Interpreter_2F_Open_case_1_local_4_case_1_local_3_case_2_local_11_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Interpreter_2F_Open_case_1_local_4_case_1_local_3_case_2_local_11_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Interpreter_2F_Open_case_1_local_4_case_1_local_3_case_2_local_11_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Interpreter_2F_Open_case_1_local_4_case_1_local_3_case_2_local_11_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_To_20_CFString(PARAMETERS,TERMINAL(1),ROOT(2));

result = vpx_method_Interpreter_2F_Open_case_1_local_4_case_1_local_3_case_2_local_11_case_1_local_3(PARAMETERS,TERMINAL(2),TERMINAL(0),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Release,1,0,TERMINAL(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
NEXTCASEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Coerce_20_FSSpec,1,1,TERMINAL(3),ROOT(4));
FAILONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Close,1,0,TERMINAL(3));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Interpreter_2F_Open_case_1_local_4_case_1_local_3_case_2_local_11_case_2_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Interpreter_2F_Open_case_1_local_4_case_1_local_3_case_2_local_11_case_2_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"FSCreateDirectoryUnicode",ROOT(1));

result = vpx_method_Debug_20_OSError(PARAMETERS,TERMINAL(1),TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Interpreter_2F_Open_case_1_local_4_case_1_local_3_case_2_local_11_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Interpreter_2F_Open_case_1_local_4_case_1_local_3_case_2_local_11_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(13)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_To_20_CFString(PARAMETERS,TERMINAL(1),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Length,1,1,TERMINAL(2),ROOT(3));

result = vpx_constant(PARAMETERS,"NULL",ROOT(4));

result = vpx_extconstant(PARAMETERS,kFSCatInfoNone,ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_UniChar,1,2,TERMINAL(2),ROOT(6),ROOT(7));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_FSRef,1,1,TERMINAL(0),ROOT(8));

PUTINTEGER(FSCreateDirectoryUnicode( GETCONSTPOINTER(FSRef,*,TERMINAL(8)),GETINTEGER(TERMINAL(3)),GETCONSTPOINTER(unsigned short,*,TERMINAL(6)),GETINTEGER(TERMINAL(5)),GETCONSTPOINTER(FSCatalogInfo,*,TERMINAL(4)),GETPOINTER(144,FSRef,*,ROOT(10),TERMINAL(4)),GETPOINTER(72,FSSpec,*,ROOT(11),NONE),GETPOINTER(4,unsigned int,*,ROOT(12),TERMINAL(4))),9);
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Release,1,0,TERMINAL(2));

result = vpx_method_Interpreter_2F_Open_case_1_local_4_case_1_local_3_case_2_local_11_case_2_local_10(PARAMETERS,TERMINAL(9));

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(9));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(11))
FOOTERWITHNONE(13)
}

enum opTrigger vpx_method_Interpreter_2F_Open_case_1_local_4_case_1_local_3_case_2_local_11(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Interpreter_2F_Open_case_1_local_4_case_1_local_3_case_2_local_11(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Interpreter_2F_Open_case_1_local_4_case_1_local_3_case_2_local_11_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Interpreter_2F_Open_case_1_local_4_case_1_local_3_case_2_local_11_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Interpreter_2F_Open_case_1_local_4_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Interpreter_2F_Open_case_1_local_4_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(12)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Application_20_Name,TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
NEXTCASEONSUCCESS

result = vpx_get(PARAMETERS,kVPXValue_File_20_Specification,TERMINAL(1),ROOT(4),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(5));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,".app",ROOT(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Application_20_Name,1,1,TERMINAL(1),ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(7),TERMINAL(6),ROOT(8));

result = vpx_constant(PARAMETERS,"TRUE",ROOT(9));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Parent,1,1,TERMINAL(5),ROOT(10));

result = vpx_method_Interpreter_2F_Open_case_1_local_4_case_1_local_3_case_2_local_11(PARAMETERS,TERMINAL(10),TERMINAL(8),ROOT(11));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(11))
OUTPUT(1,TERMINAL(9))
FOOTER(12)
}

enum opTrigger vpx_method_Interpreter_2F_Open_case_1_local_4_case_1_local_3_case_3_local_5_case_1_local_4_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Interpreter_2F_Open_case_1_local_4_case_1_local_3_case_3_local_5_case_1_local_4_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Nav_20_Class,1,1,TERMINAL(0),ROOT(1));
TERMINATEONFAILURE

result = vpx_constant(PARAMETERS,"Message",ROOT(2));

result = vpx_constant(PARAMETERS,"Please select a location to place the interpreter application for this project.",ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Parameter_20_String,3,0,TERMINAL(1),TERMINAL(2),TERMINAL(3));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Interpreter_2F_Open_case_1_local_4_case_1_local_3_case_3_local_5_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3);
enum opTrigger vpx_method_Interpreter_2F_Open_case_1_local_4_case_1_local_3_case_3_local_5_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_File_20_Name,2,0,TERMINAL(0),TERMINAL(1));

result = vpx_method_Interpreter_2F_Open_case_1_local_4_case_1_local_3_case_3_local_5_case_1_local_4_case_1_local_3(PARAMETERS,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Interpreter_2F_Open_case_1_local_4_case_1_local_3_case_3_local_5_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Interpreter_2F_Open_case_1_local_4_case_1_local_3_case_3_local_5_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Canceled_3F_,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(1));
FAILONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Select_20_List,1,1,TERMINAL(0),ROOT(2));

result = vpx_match(PARAMETERS,"( )",TERMINAL(2));
FAILONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Select_20_Name,1,1,TERMINAL(0),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,1,TERMINAL(2),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
OUTPUT(1,TERMINAL(3))
FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Interpreter_2F_Open_case_1_local_4_case_1_local_3_case_3_local_5_case_1_local_7_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Interpreter_2F_Open_case_1_local_4_case_1_local_3_case_3_local_5_case_1_local_7_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(7)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_UniChar,1,2,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Length,1,1,TERMINAL(0),ROOT(4));

result = vpx_extconstant(PARAMETERS,kTextEncodingUnknown,ROOT(5));

result = vpx_instantiate(PARAMETERS,kVPXClass_MacOS_20_File_20_Reference,1,1,NONE,ROOT(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_New_20_From_20_Unicode,5,0,TERMINAL(6),TERMINAL(1),TERMINAL(2),TERMINAL(4),TERMINAL(5));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTERWITHNONE(7)
}

enum opTrigger vpx_method_Interpreter_2F_Open_case_1_local_4_case_1_local_3_case_3_local_5_case_1_local_7_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Interpreter_2F_Open_case_1_local_4_case_1_local_3_case_3_local_5_case_1_local_7_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Interpreter_2F_Open_case_1_local_4_case_1_local_3_case_3_local_5_case_1_local_7_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Interpreter_2F_Open_case_1_local_4_case_1_local_3_case_3_local_5_case_1_local_7_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Interpreter_2F_Open_case_1_local_4_case_1_local_3_case_3_local_5_case_1_local_7_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Interpreter_2F_Open_case_1_local_4_case_1_local_3_case_3_local_5_case_1_local_7_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Interpreter_2F_Open_case_1_local_4_case_1_local_3_case_3_local_5_case_1_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Interpreter_2F_Open_case_1_local_4_case_1_local_3_case_3_local_5_case_1_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_To_20_CFString(PARAMETERS,TERMINAL(1),ROOT(2));

result = vpx_method_Interpreter_2F_Open_case_1_local_4_case_1_local_3_case_3_local_5_case_1_local_7_case_1_local_3(PARAMETERS,TERMINAL(2),TERMINAL(0),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Release,1,0,TERMINAL(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
NEXTCASEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Coerce_20_FSSpec,1,1,TERMINAL(3),ROOT(4));
FAILONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Close,1,0,TERMINAL(3));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Interpreter_2F_Open_case_1_local_4_case_1_local_3_case_3_local_5_case_1_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Interpreter_2F_Open_case_1_local_4_case_1_local_3_case_3_local_5_case_1_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(13)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_To_20_CFString(PARAMETERS,TERMINAL(1),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Length,1,1,TERMINAL(2),ROOT(3));

result = vpx_constant(PARAMETERS,"NULL",ROOT(4));

result = vpx_extconstant(PARAMETERS,kFSCatInfoNone,ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_UniChar,1,2,TERMINAL(2),ROOT(6),ROOT(7));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_FSRef,1,1,TERMINAL(0),ROOT(8));

PUTINTEGER(FSCreateDirectoryUnicode( GETCONSTPOINTER(FSRef,*,TERMINAL(8)),GETINTEGER(TERMINAL(3)),GETCONSTPOINTER(unsigned short,*,TERMINAL(6)),GETINTEGER(TERMINAL(5)),GETCONSTPOINTER(FSCatalogInfo,*,TERMINAL(4)),GETPOINTER(144,FSRef,*,ROOT(10),TERMINAL(4)),GETPOINTER(72,FSSpec,*,ROOT(11),NONE),GETPOINTER(4,unsigned int,*,ROOT(12),TERMINAL(4))),9);
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Release,1,0,TERMINAL(2));

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(9));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(11))
FOOTERWITHNONE(13)
}

enum opTrigger vpx_method_Interpreter_2F_Open_case_1_local_4_case_1_local_3_case_3_local_5_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Interpreter_2F_Open_case_1_local_4_case_1_local_3_case_3_local_5_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Interpreter_2F_Open_case_1_local_4_case_1_local_3_case_3_local_5_case_1_local_7_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Interpreter_2F_Open_case_1_local_4_case_1_local_3_case_3_local_5_case_1_local_7_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Interpreter_2F_Open_case_1_local_4_case_1_local_3_case_3_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Interpreter_2F_Open_case_1_local_4_case_1_local_3_case_3_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADERWITHNONE(6)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Nav Put File Dialog",ROOT(1));

result = vpx_method_Nav_20_Dialog_2F_New(PARAMETERS,TERMINAL(1),ROOT(2));
FAILONFAILURE

result = vpx_method_Interpreter_2F_Open_case_1_local_4_case_1_local_3_case_3_local_5_case_1_local_4(PARAMETERS,TERMINAL(2),TERMINAL(0),NONE,NONE);

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Run,1,0,TERMINAL(2));
FAILONFAILURE

result = vpx_method_Interpreter_2F_Open_case_1_local_4_case_1_local_3_case_3_local_5_case_1_local_6(PARAMETERS,TERMINAL(2),ROOT(3),ROOT(4));
FAILONFAILURE

result = vpx_method_Interpreter_2F_Open_case_1_local_4_case_1_local_3_case_3_local_5_case_1_local_7(PARAMETERS,TERMINAL(3),TERMINAL(4),ROOT(5));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(5))
OUTPUT(1,TERMINAL(4))
FOOTERSINGLECASEWITHNONE(6)
}

enum opTrigger vpx_method_Interpreter_2F_Open_case_1_local_4_case_1_local_3_case_3_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Interpreter_2F_Open_case_1_local_4_case_1_local_3_case_3_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP__22_length_22_,1,1,TERMINAL(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_suffix,2,2,TERMINAL(0),TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP__3D_,2,0,TERMINAL(4),TERMINAL(1));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(5)
}

enum opTrigger vpx_method_Interpreter_2F_Open_case_1_local_4_case_1_local_3_case_3_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Interpreter_2F_Open_case_1_local_4_case_1_local_3_case_3_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(2)
}

enum opTrigger vpx_method_Interpreter_2F_Open_case_1_local_4_case_1_local_3_case_3_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Interpreter_2F_Open_case_1_local_4_case_1_local_3_case_3_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Interpreter_2F_Open_case_1_local_4_case_1_local_3_case_3_local_7_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Interpreter_2F_Open_case_1_local_4_case_1_local_3_case_3_local_7_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Interpreter_2F_Open_case_1_local_4_case_1_local_3_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Interpreter_2F_Open_case_1_local_4_case_1_local_3_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(10)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Application_20_Name,1,1,TERMINAL(1),ROOT(2));

result = vpx_constant(PARAMETERS,".app",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(2),TERMINAL(3),ROOT(4));

result = vpx_method_Interpreter_2F_Open_case_1_local_4_case_1_local_3_case_3_local_5(PARAMETERS,TERMINAL(4),ROOT(5),ROOT(6));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"TRUE",ROOT(7));

result = vpx_method_Interpreter_2F_Open_case_1_local_4_case_1_local_3_case_3_local_7(PARAMETERS,TERMINAL(6),TERMINAL(3),ROOT(8));

result = vpx_set(PARAMETERS,kVPXValue_Application_20_Name,TERMINAL(1),TERMINAL(8),ROOT(9));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
OUTPUT(1,TERMINAL(7))
FOOTER(10)
}

enum opTrigger vpx_method_Interpreter_2F_Open_case_1_local_4_case_1_local_3_case_4_local_2_case_1_local_4_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Interpreter_2F_Open_case_1_local_4_case_1_local_3_case_4_local_2_case_1_local_4_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Nav_20_Class,1,1,TERMINAL(0),ROOT(1));
TERMINATEONFAILURE

result = vpx_constant(PARAMETERS,"Message",ROOT(2));

result = vpx_constant(PARAMETERS,"The interpreter for this project can not be found.  Please locate an existing interpreter application for this project.",ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Parameter_20_String,3,0,TERMINAL(1),TERMINAL(2),TERMINAL(3));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Interpreter_2F_Open_case_1_local_4_case_1_local_3_case_4_local_2_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3);
enum opTrigger vpx_method_Interpreter_2F_Open_case_1_local_4_case_1_local_3_case_4_local_2_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\'APPL\'",ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Type_20_List,2,0,TERMINAL(0),TERMINAL(4));

result = vpx_method_Interpreter_2F_Open_case_1_local_4_case_1_local_3_case_4_local_2_case_1_local_4_case_1_local_4(PARAMETERS,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Interpreter_2F_Open_case_1_local_4_case_1_local_3_case_4_local_2_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Interpreter_2F_Open_case_1_local_4_case_1_local_3_case_4_local_2_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Canceled_3F_,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(1));
FAILONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Select_20_List,1,1,TERMINAL(0),ROOT(2));

result = vpx_match(PARAMETERS,"( )",TERMINAL(2));
FAILONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,1,TERMINAL(2),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Interpreter_2F_Open_case_1_local_4_case_1_local_3_case_4_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Interpreter_2F_Open_case_1_local_4_case_1_local_3_case_4_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0,V_Object *root1)
{
HEADERWITHNONE(5)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Nav Choose File Dialog",ROOT(0));

result = vpx_method_Nav_20_Dialog_2F_New(PARAMETERS,TERMINAL(0),ROOT(1));
FAILONFAILURE

result = vpx_method_Interpreter_2F_Open_case_1_local_4_case_1_local_3_case_4_local_2_case_1_local_4(PARAMETERS,TERMINAL(1),NONE,NONE,NONE);

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Run,1,0,TERMINAL(1));
FAILONFAILURE

result = vpx_method_Interpreter_2F_Open_case_1_local_4_case_1_local_3_case_4_local_2_case_1_local_6(PARAMETERS,TERMINAL(1),ROOT(2));
FAILONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Coerce_20_FSSpec,1,1,TERMINAL(2),ROOT(3));
FAILONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Name_20_As_20_String,1,1,TERMINAL(2),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
OUTPUT(1,TERMINAL(4))
FOOTERSINGLECASEWITHNONE(5)
}

enum opTrigger vpx_method_Interpreter_2F_Open_case_1_local_4_case_1_local_3_case_4_local_4_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Interpreter_2F_Open_case_1_local_4_case_1_local_3_case_4_local_4_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP__22_length_22_,1,1,TERMINAL(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_suffix,2,2,TERMINAL(0),TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP__3D_,2,0,TERMINAL(4),TERMINAL(1));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(5)
}

enum opTrigger vpx_method_Interpreter_2F_Open_case_1_local_4_case_1_local_3_case_4_local_4_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Interpreter_2F_Open_case_1_local_4_case_1_local_3_case_4_local_4_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(2)
}

enum opTrigger vpx_method_Interpreter_2F_Open_case_1_local_4_case_1_local_3_case_4_local_4_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Interpreter_2F_Open_case_1_local_4_case_1_local_3_case_4_local_4_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Interpreter_2F_Open_case_1_local_4_case_1_local_3_case_4_local_4_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Interpreter_2F_Open_case_1_local_4_case_1_local_3_case_4_local_4_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Interpreter_2F_Open_case_1_local_4_case_1_local_3_case_4_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Interpreter_2F_Open_case_1_local_4_case_1_local_3_case_4_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,".app",ROOT(2));

result = vpx_method_Interpreter_2F_Open_case_1_local_4_case_1_local_3_case_4_local_4_case_1_local_3(PARAMETERS,TERMINAL(0),TERMINAL(2),ROOT(3));

result = vpx_set(PARAMETERS,kVPXValue_Application_20_Name,TERMINAL(1),TERMINAL(3),ROOT(4));

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Interpreter_2F_Open_case_1_local_4_case_1_local_3_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Interpreter_2F_Open_case_1_local_4_case_1_local_3_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Interpreter_2F_Open_case_1_local_4_case_1_local_3_case_4_local_2(PARAMETERS,ROOT(2),ROOT(3));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"FALSE",ROOT(4));

result = vpx_method_Interpreter_2F_Open_case_1_local_4_case_1_local_3_case_4_local_4(PARAMETERS,TERMINAL(3),TERMINAL(1));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
OUTPUT(1,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Interpreter_2F_Open_case_1_local_4_case_1_local_3_case_5(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Interpreter_2F_Open_case_1_local_4_case_1_local_3_case_5(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(2));

result = kSuccess;
FAILONSUCCESS

OUTPUT(0,TERMINAL(2))
OUTPUT(1,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Interpreter_2F_Open_case_1_local_4_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Interpreter_2F_Open_case_1_local_4_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Interpreter_2F_Open_case_1_local_4_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1))
if(vpx_method_Interpreter_2F_Open_case_1_local_4_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1))
if(vpx_method_Interpreter_2F_Open_case_1_local_4_case_1_local_3_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1))
if(vpx_method_Interpreter_2F_Open_case_1_local_4_case_1_local_3_case_4(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1))
vpx_method_Interpreter_2F_Open_case_1_local_4_case_1_local_3_case_5(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1);
return outcome;
}

enum opTrigger vpx_method_Interpreter_2F_Open_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Interpreter_2F_Open_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_match(PARAMETERS,"Process",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_method_Interpreter_2F_Open_case_1_local_4_case_1_local_3(PARAMETERS,TERMINAL(1),TERMINAL(2),ROOT(3),ROOT(4));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(3))
OUTPUT(1,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Interpreter_2F_Open_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Interpreter_2F_Open_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(3));

result = vpx_constant(PARAMETERS,"FALSE",ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
OUTPUT(1,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Interpreter_2F_Open_case_1_local_4_case_3_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Interpreter_2F_Open_case_1_local_4_case_3_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_File,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
NEXTCASEONSUCCESS

result = vpx_constant(PARAMETERS,"FALSE",ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
OUTPUT(1,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Interpreter_2F_Open_case_1_local_4_case_3_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Interpreter_2F_Open_case_1_local_4_case_3_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADERWITHNONE(17)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Application_20_Name,TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
NEXTCASEONSUCCESS

result = vpx_get(PARAMETERS,kVPXValue_File_20_Specification,TERMINAL(1),ROOT(4),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(5));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_FSSpec,1,1,TERMINAL(5),ROOT(6));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(6));
NEXTCASEONSUCCESS

result = vpx_constant(PARAMETERS,".app",ROOT(7));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Application_20_Name,1,1,TERMINAL(1),ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(8),TERMINAL(7),ROOT(9));

result = vpx_method_To_20_PString(PARAMETERS,TERMINAL(9),ROOT(10));

result = vpx_constant(PARAMETERS,"TRUE",ROOT(11));

result = vpx_call_primitive(PARAMETERS,VPLP_extract_2D_file_2D_specification,1,3,TERMINAL(6),ROOT(12),ROOT(13),ROOT(14));

PUTINTEGER(FSMakeFSSpec( GETINTEGER(TERMINAL(12)),GETINTEGER(TERMINAL(13)),GETCONSTPOINTER(unsigned char,*,TERMINAL(10)),GETPOINTER(72,FSSpec,*,ROOT(16),NONE)),15);
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(16))
OUTPUT(1,TERMINAL(11))
FOOTERWITHNONE(17)
}

enum opTrigger vpx_method_Interpreter_2F_Open_case_1_local_4_case_3_local_3_case_3_local_8_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Interpreter_2F_Open_case_1_local_4_case_3_local_3_case_3_local_8_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP__22_length_22_,1,1,TERMINAL(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_suffix,2,2,TERMINAL(0),TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP__3D_,2,0,TERMINAL(4),TERMINAL(1));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(5)
}

enum opTrigger vpx_method_Interpreter_2F_Open_case_1_local_4_case_3_local_3_case_3_local_8_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Interpreter_2F_Open_case_1_local_4_case_3_local_3_case_3_local_8_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(2)
}

enum opTrigger vpx_method_Interpreter_2F_Open_case_1_local_4_case_3_local_3_case_3_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Interpreter_2F_Open_case_1_local_4_case_3_local_3_case_3_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Interpreter_2F_Open_case_1_local_4_case_3_local_3_case_3_local_8_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Interpreter_2F_Open_case_1_local_4_case_3_local_3_case_3_local_8_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Interpreter_2F_Open_case_1_local_4_case_3_local_3_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Interpreter_2F_Open_case_1_local_4_case_3_local_3_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(14)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,".app",ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Application_20_Name,1,1,TERMINAL(1),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(3),TERMINAL(2),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_put_2D_file,1,3,TERMINAL(4),ROOT(5),ROOT(6),ROOT(7));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"TRUE",ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP_extract_2D_file_2D_specification,1,3,TERMINAL(6),ROOT(9),ROOT(10),ROOT(11));

result = vpx_method_Interpreter_2F_Open_case_1_local_4_case_3_local_3_case_3_local_8(PARAMETERS,TERMINAL(11),TERMINAL(2),ROOT(12));

result = vpx_set(PARAMETERS,kVPXValue_Application_20_Name,TERMINAL(1),TERMINAL(12),ROOT(13));

result = kSuccess;

OUTPUT(0,TERMINAL(6))
OUTPUT(1,TERMINAL(8))
FOOTER(14)
}

enum opTrigger vpx_method_Interpreter_2F_Open_case_1_local_4_case_3_local_3_case_4_local_4_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Interpreter_2F_Open_case_1_local_4_case_3_local_3_case_4_local_4_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP__22_length_22_,1,1,TERMINAL(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_suffix,2,2,TERMINAL(0),TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP__3D_,2,0,TERMINAL(4),TERMINAL(1));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(5)
}

enum opTrigger vpx_method_Interpreter_2F_Open_case_1_local_4_case_3_local_3_case_4_local_4_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Interpreter_2F_Open_case_1_local_4_case_3_local_3_case_4_local_4_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(2)
}

enum opTrigger vpx_method_Interpreter_2F_Open_case_1_local_4_case_3_local_3_case_4_local_4_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Interpreter_2F_Open_case_1_local_4_case_3_local_3_case_4_local_4_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Interpreter_2F_Open_case_1_local_4_case_3_local_3_case_4_local_4_case_1_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Interpreter_2F_Open_case_1_local_4_case_3_local_3_case_4_local_4_case_1_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Interpreter_2F_Open_case_1_local_4_case_3_local_3_case_4_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Interpreter_2F_Open_case_1_local_4_case_3_local_3_case_4_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_extract_2D_file_2D_specification,1,3,TERMINAL(0),ROOT(2),ROOT(3),ROOT(4));

result = vpx_constant(PARAMETERS,".app",ROOT(5));

result = vpx_method_Interpreter_2F_Open_case_1_local_4_case_3_local_3_case_4_local_4_case_1_local_4(PARAMETERS,TERMINAL(4),TERMINAL(5),ROOT(6));

result = vpx_set(PARAMETERS,kVPXValue_Application_20_Name,TERMINAL(1),TERMINAL(6),ROOT(7));

result = kSuccess;

FOOTERSINGLECASE(8)
}

enum opTrigger vpx_method_Interpreter_2F_Open_case_1_local_4_case_3_local_3_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Interpreter_2F_Open_case_1_local_4_case_3_local_3_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_file,0,2,ROOT(2),ROOT(3));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"FALSE",ROOT(4));

result = vpx_method_Interpreter_2F_Open_case_1_local_4_case_3_local_3_case_4_local_4(PARAMETERS,TERMINAL(3),TERMINAL(1));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
OUTPUT(1,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Interpreter_2F_Open_case_1_local_4_case_3_local_3_case_5(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Interpreter_2F_Open_case_1_local_4_case_3_local_3_case_5(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(2));

result = kSuccess;
FAILONSUCCESS

OUTPUT(0,TERMINAL(2))
OUTPUT(1,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Interpreter_2F_Open_case_1_local_4_case_3_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Interpreter_2F_Open_case_1_local_4_case_3_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Interpreter_2F_Open_case_1_local_4_case_3_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1))
if(vpx_method_Interpreter_2F_Open_case_1_local_4_case_3_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1))
if(vpx_method_Interpreter_2F_Open_case_1_local_4_case_3_local_3_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1))
if(vpx_method_Interpreter_2F_Open_case_1_local_4_case_3_local_3_case_4(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1))
vpx_method_Interpreter_2F_Open_case_1_local_4_case_3_local_3_case_5(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1);
return outcome;
}

enum opTrigger vpx_method_Interpreter_2F_Open_case_1_local_4_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Interpreter_2F_Open_case_1_local_4_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_match(PARAMETERS,"Process",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_method_Interpreter_2F_Open_case_1_local_4_case_3_local_3(PARAMETERS,TERMINAL(1),TERMINAL(2),ROOT(3),ROOT(4));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(3))
OUTPUT(1,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Interpreter_2F_Open_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Interpreter_2F_Open_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Interpreter_2F_Open_case_1_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0,root1))
if(vpx_method_Interpreter_2F_Open_case_1_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0,root1))
vpx_method_Interpreter_2F_Open_case_1_local_4_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0,root1);
return outcome;
}

enum opTrigger vpx_method_Interpreter_2F_Open(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(18)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Project,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_persistent(PARAMETERS,kVPXValue_Interpreter_20_Mode,0,1,ROOT(3));

result = vpx_method_Interpreter_2F_Open_case_1_local_4(PARAMETERS,TERMINAL(3),TERMINAL(0),TERMINAL(1),ROOT(4),ROOT(5));
FAILONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_create_2D_environment,3,6,TERMINAL(3),TERMINAL(4),TERMINAL(5),ROOT(6),ROOT(7),ROOT(8),ROOT(9),ROOT(10),ROOT(11));
FAILONFAILURE

result = vpx_set(PARAMETERS,kVPXValue_Environment,TERMINAL(2),TERMINAL(6),ROOT(12));

result = vpx_set(PARAMETERS,kVPXValue_Write_20_Name,TERMINAL(12),TERMINAL(7),ROOT(13));

result = vpx_set(PARAMETERS,kVPXValue_Read_20_Name,TERMINAL(13),TERMINAL(8),ROOT(14));

result = vpx_set(PARAMETERS,kVPXValue_Write_20_Descriptor,TERMINAL(14),TERMINAL(9),ROOT(15));

result = vpx_set(PARAMETERS,kVPXValue_Read_20_Descriptor,TERMINAL(15),TERMINAL(10),ROOT(16));

result = vpx_set(PARAMETERS,kVPXValue_File,TERMINAL(16),TERMINAL(11),ROOT(17));

result = kSuccess;

FOOTERSINGLECASE(18)
}

enum opTrigger vpx_method_Interpreter_2F_Close(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(17)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = vpx_set(PARAMETERS,kVPXValue_Project,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_File,TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_Read_20_Descriptor,TERMINAL(3),ROOT(5),ROOT(6));

result = vpx_get(PARAMETERS,kVPXValue_Write_20_Descriptor,TERMINAL(5),ROOT(7),ROOT(8));

result = vpx_get(PARAMETERS,kVPXValue_Read_20_Name,TERMINAL(7),ROOT(9),ROOT(10));

result = vpx_get(PARAMETERS,kVPXValue_Write_20_Name,TERMINAL(9),ROOT(11),ROOT(12));

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(11),ROOT(13),ROOT(14));

result = vpx_call_primitive(PARAMETERS,VPLP_dispose_2D_environment,6,0,TERMINAL(14),TERMINAL(12),TERMINAL(10),TERMINAL(8),TERMINAL(6),TERMINAL(4));

result = vpx_constant(PARAMETERS,"( )",ROOT(15));

result = vpx_set(PARAMETERS,kVPXValue_Breakpoints,TERMINAL(13),TERMINAL(15),ROOT(16));

result = kSuccess;

FOOTERSINGLECASE(17)
}

enum opTrigger vpx_method_Interpreter_2F_Post_20_Load_20_Processing(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(7)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Read_20_Descriptor,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_Write_20_Descriptor,TERMINAL(1),ROOT(3),ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(3),ROOT(5),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP_post_2D_load,3,0,TERMINAL(6),TERMINAL(4),TERMINAL(2));

result = kSuccess;

FOOTERSINGLECASE(7)
}

enum opTrigger vpx_method_Interpreter_2F_Load_20_Bundle(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Read_20_Descriptor,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_Write_20_Descriptor,TERMINAL(3),ROOT(5),ROOT(6));

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(5),ROOT(7),ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP_load_2D_bundle,5,0,TERMINAL(8),TERMINAL(6),TERMINAL(4),TERMINAL(1),TERMINAL(2));
FAILONFAILURE

result = kSuccess;

FOOTERSINGLECASE(9)
}

enum opTrigger vpx_method_Interpreter_2F_Create_20_Persistent(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(10)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Read_20_Descriptor,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_Write_20_Descriptor,TERMINAL(3),ROOT(5),ROOT(6));

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(5),ROOT(7),ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP_create_2D_persistent,5,1,TERMINAL(8),TERMINAL(6),TERMINAL(4),TERMINAL(1),TERMINAL(2),ROOT(9));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(9))
FOOTERSINGLECASE(10)
}

enum opTrigger vpx_method_Interpreter_2F_Destroy_20_Persistent(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Read_20_Descriptor,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Write_20_Descriptor,TERMINAL(2),ROOT(4),ROOT(5));

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(4),ROOT(6),ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP_remove_2D_persistent,4,0,TERMINAL(7),TERMINAL(5),TERMINAL(3),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(8)
}

enum opTrigger vpx_method_Interpreter_2F_Set_20_Value(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Read_20_Descriptor,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_Write_20_Descriptor,TERMINAL(3),ROOT(5),ROOT(6));

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(5),ROOT(7),ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP_set_2D_element_2D_value,5,0,TERMINAL(8),TERMINAL(6),TERMINAL(4),TERMINAL(1),TERMINAL(2));

result = kSuccess;

FOOTERSINGLECASE(9)
}

enum opTrigger vpx_method_Interpreter_2F_Get_20_Value_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Interpreter_2F_Get_20_Value_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
NEXTCASEONSUCCESS

result = vpx_get(PARAMETERS,kVPXValue_Read_20_Descriptor,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Write_20_Descriptor,TERMINAL(2),ROOT(4),ROOT(5));

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(4),ROOT(6),ROOT(7));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(7));
NEXTCASEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_element_2D_integer,4,1,TERMINAL(7),TERMINAL(5),TERMINAL(3),TERMINAL(1),ROOT(8));

result = kSuccess;

OUTPUT(0,TERMINAL(8))
FOOTER(9)
}

enum opTrigger vpx_method_Interpreter_2F_Get_20_Value_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Interpreter_2F_Get_20_Value_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Interpreter_2F_Get_20_Value(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Interpreter_2F_Get_20_Value_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Interpreter_2F_Get_20_Value_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Interpreter_2F_Get_20_Archive(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Read_20_Descriptor,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Write_20_Descriptor,TERMINAL(2),ROOT(4),ROOT(5));

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(4),ROOT(6),ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_element_2D_value,4,1,TERMINAL(7),TERMINAL(5),TERMINAL(3),TERMINAL(1),ROOT(8));

result = kSuccess;

OUTPUT(0,TERMINAL(8))
FOOTERSINGLECASE(9)
}

enum opTrigger vpx_method_Interpreter_2F_Get_20_Value_20_Data_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Interpreter_2F_Get_20_Value_20_Data_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(10)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_match(PARAMETERS,"type",TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Read_20_Descriptor,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_Write_20_Descriptor,TERMINAL(3),ROOT(5),ROOT(6));

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(5),ROOT(7),ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_value_2D_type,4,1,TERMINAL(8),TERMINAL(6),TERMINAL(4),TERMINAL(1),ROOT(9));

result = kSuccess;

OUTPUT(0,TERMINAL(9))
FOOTER(10)
}

enum opTrigger vpx_method_Interpreter_2F_Get_20_Value_20_Data_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Interpreter_2F_Get_20_Value_20_Data_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(10)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_match(PARAMETERS,"list",TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Read_20_Descriptor,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_Write_20_Descriptor,TERMINAL(3),ROOT(5),ROOT(6));

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(5),ROOT(7),ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_value_2D_list,4,1,TERMINAL(8),TERMINAL(6),TERMINAL(4),TERMINAL(1),ROOT(9));

result = kSuccess;

OUTPUT(0,TERMINAL(9))
FOOTER(10)
}

enum opTrigger vpx_method_Interpreter_2F_Get_20_Value_20_Data_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Interpreter_2F_Get_20_Value_20_Data_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(10)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_match(PARAMETERS,"string",TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Read_20_Descriptor,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_Write_20_Descriptor,TERMINAL(3),ROOT(5),ROOT(6));

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(5),ROOT(7),ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_value_2D_string,4,1,TERMINAL(8),TERMINAL(6),TERMINAL(4),TERMINAL(1),ROOT(9));

result = kSuccess;

OUTPUT(0,TERMINAL(9))
FOOTER(10)
}

enum opTrigger vpx_method_Interpreter_2F_Get_20_Value_20_Data_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Interpreter_2F_Get_20_Value_20_Data_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(10)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_match(PARAMETERS,"name",TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Read_20_Descriptor,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_Write_20_Descriptor,TERMINAL(3),ROOT(5),ROOT(6));

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(5),ROOT(7),ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_value_2D_class_2D_name,4,1,TERMINAL(8),TERMINAL(6),TERMINAL(4),TERMINAL(1),ROOT(9));

result = kSuccess;

OUTPUT(0,TERMINAL(9))
FOOTER(10)
}

enum opTrigger vpx_method_Interpreter_2F_Get_20_Value_20_Data_case_5(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Interpreter_2F_Get_20_Value_20_Data_case_5(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(10)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_match(PARAMETERS,"archive",TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Read_20_Descriptor,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_Write_20_Descriptor,TERMINAL(3),ROOT(5),ROOT(6));

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(5),ROOT(7),ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_value_2D_archive,4,1,TERMINAL(8),TERMINAL(6),TERMINAL(4),TERMINAL(1),ROOT(9));

result = kSuccess;

OUTPUT(0,TERMINAL(9))
FOOTER(10)
}

enum opTrigger vpx_method_Interpreter_2F_Get_20_Value_20_Data_case_6(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Interpreter_2F_Get_20_Value_20_Data_case_6(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(10)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_match(PARAMETERS,"mark",TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Read_20_Descriptor,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_Write_20_Descriptor,TERMINAL(3),ROOT(5),ROOT(6));

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(5),ROOT(7),ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_value_2D_mark,4,1,TERMINAL(8),TERMINAL(6),TERMINAL(4),TERMINAL(1),ROOT(9));

result = kSuccess;

OUTPUT(0,TERMINAL(9))
FOOTER(10)
}

enum opTrigger vpx_method_Interpreter_2F_Get_20_Value_20_Data_case_7(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Interpreter_2F_Get_20_Value_20_Data_case_7(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"Unrecognized value get data: \"",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(3),TERMINAL(2),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_show,1,0,TERMINAL(4));

result = vpx_constant(PARAMETERS,"NULL",ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTER(6)
}

enum opTrigger vpx_method_Interpreter_2F_Get_20_Value_20_Data(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Interpreter_2F_Get_20_Value_20_Data_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
if(vpx_method_Interpreter_2F_Get_20_Value_20_Data_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
if(vpx_method_Interpreter_2F_Get_20_Value_20_Data_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
if(vpx_method_Interpreter_2F_Get_20_Value_20_Data_case_4(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
if(vpx_method_Interpreter_2F_Get_20_Value_20_Data_case_5(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
if(vpx_method_Interpreter_2F_Get_20_Value_20_Data_case_6(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
vpx_method_Interpreter_2F_Get_20_Value_20_Data_case_7(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0);
return outcome;
}

enum opTrigger vpx_method_Interpreter_2F_Modify_20_Value_20_Use_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Interpreter_2F_Modify_20_Value_20_Use_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_match(PARAMETERS,"decrement",TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Read_20_Descriptor,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_Write_20_Descriptor,TERMINAL(3),ROOT(5),ROOT(6));

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(5),ROOT(7),ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_value_2D_decrement,4,0,TERMINAL(8),TERMINAL(6),TERMINAL(4),TERMINAL(1));

result = kSuccess;

FOOTER(9)
}

enum opTrigger vpx_method_Interpreter_2F_Modify_20_Value_20_Use_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Interpreter_2F_Modify_20_Value_20_Use_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_match(PARAMETERS,"increment",TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Read_20_Descriptor,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_Write_20_Descriptor,TERMINAL(3),ROOT(5),ROOT(6));

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(5),ROOT(7),ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_value_2D_increment,4,0,TERMINAL(8),TERMINAL(6),TERMINAL(4),TERMINAL(1));

result = kSuccess;

FOOTER(9)
}

enum opTrigger vpx_method_Interpreter_2F_Modify_20_Value_20_Use_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Interpreter_2F_Modify_20_Value_20_Use_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"Unrecognized value modification: \"",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(3),TERMINAL(2),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_show,1,0,TERMINAL(4));

result = kSuccess;

FOOTER(5)
}

enum opTrigger vpx_method_Interpreter_2F_Modify_20_Value_20_Use(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Interpreter_2F_Modify_20_Value_20_Use_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2))
if(vpx_method_Interpreter_2F_Modify_20_Value_20_Use_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2))
vpx_method_Interpreter_2F_Modify_20_Value_20_Use_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2);
return outcome;
}

enum opTrigger vpx_method_Interpreter_2F_Simple_20_Value_3F__case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Interpreter_2F_Simple_20_Value_3F__case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"type",ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Value_20_Data,3,1,TERMINAL(0),TERMINAL(1),TERMINAL(2),ROOT(3));

result = vpx_match(PARAMETERS,"instance",TERMINAL(3));
NEXTCASEONSUCCESS

result = vpx_match(PARAMETERS,"list",TERMINAL(3));
NEXTCASEONSUCCESS

result = kSuccess;
FAILONSUCCESS

FOOTER(4)
}

enum opTrigger vpx_method_Interpreter_2F_Simple_20_Value_3F__case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Interpreter_2F_Simple_20_Value_3F__case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Interpreter_2F_Simple_20_Value_3F_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Interpreter_2F_Simple_20_Value_3F__case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Interpreter_2F_Simple_20_Value_3F__case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Interpreter_2F_Object_20_To_20_Text_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Interpreter_2F_Object_20_To_20_Text_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"<",ROOT(2));

result = vpx_constant(PARAMETERS,">",ROOT(3));

result = vpx_constant(PARAMETERS,"type",ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Value_20_Data,3,1,TERMINAL(0),TERMINAL(1),TERMINAL(4),ROOT(5));

result = vpx_match(PARAMETERS,"instance",TERMINAL(5));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"name",ROOT(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Value_20_Data,3,1,TERMINAL(0),TERMINAL(1),TERMINAL(6),ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,3,1,TERMINAL(2),TERMINAL(7),TERMINAL(3),ROOT(8));

result = kSuccess;

OUTPUT(0,TERMINAL(8))
FOOTER(9)
}

enum opTrigger vpx_method_Interpreter_2F_Object_20_To_20_Text_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Interpreter_2F_Object_20_To_20_Text_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"type",ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Value_20_Data,3,1,TERMINAL(0),TERMINAL(1),TERMINAL(2),ROOT(3));

result = vpx_match(PARAMETERS,"list",TERMINAL(3));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"list",ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Value_20_Data,3,1,TERMINAL(0),TERMINAL(1),TERMINAL(4),ROOT(5));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(5))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Object_20_To_20_Text,2,1,TERMINAL(0),LIST(5),ROOT(6));
LISTROOT(6,0)
REPEATFINISH
LISTROOTFINISH(6,0)
LISTROOTEND
} else {
ROOTEMPTY(6)
}

result = vpx_call_primitive(PARAMETERS,VPLP_to_2D_string,1,1,TERMINAL(6),ROOT(7));

result = kSuccess;

OUTPUT(0,TERMINAL(7))
FOOTER(8)
}

enum opTrigger vpx_method_Interpreter_2F_Object_20_To_20_Text_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Interpreter_2F_Object_20_To_20_Text_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"string",ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Value_20_Data,3,1,TERMINAL(0),TERMINAL(1),TERMINAL(2),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_Interpreter_2F_Object_20_To_20_Text(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Interpreter_2F_Object_20_To_20_Text_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
if(vpx_method_Interpreter_2F_Object_20_To_20_Text_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Interpreter_2F_Object_20_To_20_Text_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Interpreter_2F_Create_20_Class(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Read_20_Descriptor,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Write_20_Descriptor,TERMINAL(2),ROOT(4),ROOT(5));

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(4),ROOT(6),ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP_create_2D_class,4,1,TERMINAL(7),TERMINAL(5),TERMINAL(3),TERMINAL(1),ROOT(8));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(8))
FOOTERSINGLECASE(9)
}

enum opTrigger vpx_method_Interpreter_2F_Destroy_20_Class(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Read_20_Descriptor,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Write_20_Descriptor,TERMINAL(2),ROOT(4),ROOT(5));

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(4),ROOT(6),ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP_remove_2D_class,4,0,TERMINAL(7),TERMINAL(5),TERMINAL(3),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(8)
}

enum opTrigger vpx_method_Interpreter_2F_Set_20_Class(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Read_20_Descriptor,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_Write_20_Descriptor,TERMINAL(3),ROOT(5),ROOT(6));

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(5),ROOT(7),ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP_set_2D_class,5,0,TERMINAL(8),TERMINAL(6),TERMINAL(4),TERMINAL(1),TERMINAL(2));

result = kSuccess;

FOOTERSINGLECASE(9)
}

enum opTrigger vpx_method_Interpreter_2F_Create_20_Method(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Read_20_Descriptor,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Write_20_Descriptor,TERMINAL(2),ROOT(4),ROOT(5));

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(4),ROOT(6),ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP_create_2D_method,4,1,TERMINAL(7),TERMINAL(5),TERMINAL(3),TERMINAL(1),ROOT(8));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(8))
FOOTERSINGLECASE(9)
}

enum opTrigger vpx_method_Interpreter_2F_Destroy_20_Method(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Read_20_Descriptor,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Write_20_Descriptor,TERMINAL(2),ROOT(4),ROOT(5));

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(4),ROOT(6),ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP_remove_2D_method,4,0,TERMINAL(7),TERMINAL(5),TERMINAL(3),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(8)
}

enum opTrigger vpx_method_Interpreter_2F_Set_20_Method(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Read_20_Descriptor,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_Write_20_Descriptor,TERMINAL(3),ROOT(5),ROOT(6));

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(5),ROOT(7),ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP_set_2D_method,5,0,TERMINAL(8),TERMINAL(6),TERMINAL(4),TERMINAL(1),TERMINAL(2));

result = kSuccess;

FOOTERSINGLECASE(9)
}

enum opTrigger vpx_method_Interpreter_2F_Create_20_Case(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0)
{
HEADER(11)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Read_20_Descriptor,TERMINAL(0),ROOT(4),ROOT(5));

result = vpx_get(PARAMETERS,kVPXValue_Write_20_Descriptor,TERMINAL(4),ROOT(6),ROOT(7));

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(6),ROOT(8),ROOT(9));

result = vpx_call_primitive(PARAMETERS,VPLP_insert_2D_case,6,1,TERMINAL(9),TERMINAL(7),TERMINAL(5),TERMINAL(1),TERMINAL(2),TERMINAL(3),ROOT(10));

result = kSuccess;

OUTPUT(0,TERMINAL(10))
FOOTERSINGLECASE(11)
}

enum opTrigger vpx_method_Interpreter_2F_Destroy_20_Case(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Read_20_Descriptor,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Write_20_Descriptor,TERMINAL(2),ROOT(4),ROOT(5));

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(4),ROOT(6),ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP_dispose_2D_case,4,0,TERMINAL(7),TERMINAL(5),TERMINAL(3),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(8)
}

enum opTrigger vpx_method_Interpreter_2F_Create_20_Operation(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0)
{
HEADER(11)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Read_20_Descriptor,TERMINAL(0),ROOT(4),ROOT(5));

result = vpx_get(PARAMETERS,kVPXValue_Write_20_Descriptor,TERMINAL(4),ROOT(6),ROOT(7));

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(6),ROOT(8),ROOT(9));

result = vpx_call_primitive(PARAMETERS,VPLP_insert_2D_operation,6,1,TERMINAL(9),TERMINAL(7),TERMINAL(5),TERMINAL(1),TERMINAL(2),TERMINAL(3),ROOT(10));

result = kSuccess;

OUTPUT(0,TERMINAL(10))
FOOTERSINGLECASE(11)
}

enum opTrigger vpx_method_Interpreter_2F_Destroy_20_Operation_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Interpreter_2F_Destroy_20_Operation_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(0));
NEXTCASEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Rollback,1,0,TERMINAL(0));

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_Interpreter_2F_Destroy_20_Operation_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Interpreter_2F_Destroy_20_Operation_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_Interpreter_2F_Destroy_20_Operation_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Interpreter_2F_Destroy_20_Operation_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Interpreter_2F_Destroy_20_Operation_case_1_local_6_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Interpreter_2F_Destroy_20_Operation_case_1_local_6_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Interpreter_2F_Destroy_20_Operation(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Read_20_Descriptor,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Write_20_Descriptor,TERMINAL(2),ROOT(4),ROOT(5));

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(4),ROOT(6),ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP_dispose_2D_operation,4,1,TERMINAL(7),TERMINAL(5),TERMINAL(3),TERMINAL(1),ROOT(8));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(8))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Interpreter_2F_Destroy_20_Operation_case_1_local_6(PARAMETERS,LIST(8));
REPEATFINISH
} else {
}

result = kSuccess;

FOOTERSINGLECASE(9)
}

enum opTrigger vpx_method_Interpreter_2F_Set_20_Operation(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4,V_Object terminal5,V_Object terminal6,V_Object terminal7,V_Object terminal8,V_Object terminal9,V_Object terminal10)
{
HEADER(17)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
INPUT(4,4)
INPUT(5,5)
INPUT(6,6)
INPUT(7,7)
INPUT(8,8)
INPUT(9,9)
INPUT(10,10)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Read_20_Descriptor,TERMINAL(0),ROOT(11),ROOT(12));

result = vpx_get(PARAMETERS,kVPXValue_Write_20_Descriptor,TERMINAL(11),ROOT(13),ROOT(14));

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(13),ROOT(15),ROOT(16));

result = vpx_call_primitive(PARAMETERS,VPLP_set_2D_operation,13,0,TERMINAL(16),TERMINAL(14),TERMINAL(12),TERMINAL(1),TERMINAL(2),TERMINAL(3),TERMINAL(4),TERMINAL(5),TERMINAL(6),TERMINAL(7),TERMINAL(8),TERMINAL(9),TERMINAL(10));

result = kSuccess;

FOOTERSINGLECASE(17)
}

enum opTrigger vpx_method_Interpreter_2F_Create_20_Terminal(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(10)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Read_20_Descriptor,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_Write_20_Descriptor,TERMINAL(3),ROOT(5),ROOT(6));

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(5),ROOT(7),ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP_insert_2D_terminal,5,1,TERMINAL(8),TERMINAL(6),TERMINAL(4),TERMINAL(1),TERMINAL(2),ROOT(9));

result = kSuccess;

OUTPUT(0,TERMINAL(9))
FOOTERSINGLECASE(10)
}

enum opTrigger vpx_method_Interpreter_2F_Destroy_20_Terminal(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Read_20_Descriptor,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Write_20_Descriptor,TERMINAL(2),ROOT(4),ROOT(5));

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(4),ROOT(6),ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP_dispose_2D_terminal,4,0,TERMINAL(7),TERMINAL(5),TERMINAL(3),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(8)
}

enum opTrigger vpx_method_Interpreter_2F_Set_20_Terminal(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4,V_Object terminal5,V_Object terminal6,V_Object terminal7)
{
HEADER(14)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
INPUT(4,4)
INPUT(5,5)
INPUT(6,6)
INPUT(7,7)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Read_20_Descriptor,TERMINAL(0),ROOT(8),ROOT(9));

result = vpx_get(PARAMETERS,kVPXValue_Write_20_Descriptor,TERMINAL(8),ROOT(10),ROOT(11));

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(10),ROOT(12),ROOT(13));

result = vpx_call_primitive(PARAMETERS,VPLP_set_2D_terminal,10,0,TERMINAL(13),TERMINAL(11),TERMINAL(9),TERMINAL(1),TERMINAL(2),TERMINAL(3),TERMINAL(4),TERMINAL(5),TERMINAL(6),TERMINAL(7));

result = kSuccess;

FOOTERSINGLECASE(14)
}

enum opTrigger vpx_method_Interpreter_2F_Create_20_Root(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(10)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Read_20_Descriptor,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_Write_20_Descriptor,TERMINAL(3),ROOT(5),ROOT(6));

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(5),ROOT(7),ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP_insert_2D_root,5,1,TERMINAL(8),TERMINAL(6),TERMINAL(4),TERMINAL(1),TERMINAL(2),ROOT(9));

result = kSuccess;

OUTPUT(0,TERMINAL(9))
FOOTERSINGLECASE(10)
}

enum opTrigger vpx_method_Interpreter_2F_Destroy_20_Root(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Read_20_Descriptor,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Write_20_Descriptor,TERMINAL(2),ROOT(4),ROOT(5));

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(4),ROOT(6),ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP_dispose_2D_root,4,0,TERMINAL(7),TERMINAL(5),TERMINAL(3),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(8)
}

enum opTrigger vpx_method_Interpreter_2F_Set_20_Root(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Read_20_Descriptor,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_Write_20_Descriptor,TERMINAL(3),ROOT(5),ROOT(6));

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(5),ROOT(7),ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP_set_2D_root,5,0,TERMINAL(8),TERMINAL(6),TERMINAL(4),TERMINAL(1),TERMINAL(2));

result = kSuccess;

FOOTERSINGLECASE(9)
}

enum opTrigger vpx_method_Interpreter_2F_Order_20_Elements_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3);
enum opTrigger vpx_method_Interpreter_2F_Order_20_Elements_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3)
{
HEADER(10)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_match(PARAMETERS,"operation",TERMINAL(3));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Read_20_Descriptor,TERMINAL(0),ROOT(4),ROOT(5));

result = vpx_get(PARAMETERS,kVPXValue_Write_20_Descriptor,TERMINAL(4),ROOT(6),ROOT(7));

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(6),ROOT(8),ROOT(9));

result = vpx_call_primitive(PARAMETERS,VPLP_order_2D_operations,5,0,TERMINAL(9),TERMINAL(7),TERMINAL(5),TERMINAL(1),TERMINAL(2));

result = kSuccess;

FOOTER(10)
}

enum opTrigger vpx_method_Interpreter_2F_Order_20_Elements_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3);
enum opTrigger vpx_method_Interpreter_2F_Order_20_Elements_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3)
{
HEADER(10)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_match(PARAMETERS,"case",TERMINAL(3));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Read_20_Descriptor,TERMINAL(0),ROOT(4),ROOT(5));

result = vpx_get(PARAMETERS,kVPXValue_Write_20_Descriptor,TERMINAL(4),ROOT(6),ROOT(7));

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(6),ROOT(8),ROOT(9));

result = vpx_call_primitive(PARAMETERS,VPLP_order_2D_cases,5,0,TERMINAL(9),TERMINAL(7),TERMINAL(5),TERMINAL(1),TERMINAL(2));

result = kSuccess;

FOOTER(10)
}

enum opTrigger vpx_method_Interpreter_2F_Order_20_Elements_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3);
enum opTrigger vpx_method_Interpreter_2F_Order_20_Elements_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3)
{
HEADER(10)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_match(PARAMETERS,"attribute",TERMINAL(3));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Read_20_Descriptor,TERMINAL(0),ROOT(4),ROOT(5));

result = vpx_get(PARAMETERS,kVPXValue_Write_20_Descriptor,TERMINAL(4),ROOT(6),ROOT(7));

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(6),ROOT(8),ROOT(9));

result = vpx_call_primitive(PARAMETERS,VPLP_order_2D_attributes,5,0,TERMINAL(9),TERMINAL(7),TERMINAL(5),TERMINAL(1),TERMINAL(2));

result = kSuccess;

FOOTER(10)
}

enum opTrigger vpx_method_Interpreter_2F_Order_20_Elements_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3);
enum opTrigger vpx_method_Interpreter_2F_Order_20_Elements_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3)
{
HEADER(10)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_match(PARAMETERS,"terminal",TERMINAL(3));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Read_20_Descriptor,TERMINAL(0),ROOT(4),ROOT(5));

result = vpx_get(PARAMETERS,kVPXValue_Write_20_Descriptor,TERMINAL(4),ROOT(6),ROOT(7));

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(6),ROOT(8),ROOT(9));

result = vpx_call_primitive(PARAMETERS,VPLP_order_2D_inputs,5,0,TERMINAL(9),TERMINAL(7),TERMINAL(5),TERMINAL(1),TERMINAL(2));

result = kSuccess;

FOOTER(10)
}

enum opTrigger vpx_method_Interpreter_2F_Order_20_Elements_case_5(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3);
enum opTrigger vpx_method_Interpreter_2F_Order_20_Elements_case_5(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3)
{
HEADER(10)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_match(PARAMETERS,"root",TERMINAL(3));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Read_20_Descriptor,TERMINAL(0),ROOT(4),ROOT(5));

result = vpx_get(PARAMETERS,kVPXValue_Write_20_Descriptor,TERMINAL(4),ROOT(6),ROOT(7));

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(6),ROOT(8),ROOT(9));

result = vpx_call_primitive(PARAMETERS,VPLP_order_2D_outputs,5,0,TERMINAL(9),TERMINAL(7),TERMINAL(5),TERMINAL(1),TERMINAL(2));

result = kSuccess;

FOOTER(10)
}

enum opTrigger vpx_method_Interpreter_2F_Order_20_Elements_case_6(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3);
enum opTrigger vpx_method_Interpreter_2F_Order_20_Elements_case_6(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"Unrecognized order elements command: \"",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_show,2,0,TERMINAL(4),TERMINAL(3));

result = kSuccess;

FOOTER(5)
}

enum opTrigger vpx_method_Interpreter_2F_Order_20_Elements(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Interpreter_2F_Order_20_Elements_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3))
if(vpx_method_Interpreter_2F_Order_20_Elements_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3))
if(vpx_method_Interpreter_2F_Order_20_Elements_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3))
if(vpx_method_Interpreter_2F_Order_20_Elements_case_4(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3))
if(vpx_method_Interpreter_2F_Order_20_Elements_case_5(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3))
vpx_method_Interpreter_2F_Order_20_Elements_case_6(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3);
return outcome;
}

enum opTrigger vpx_method_Interpreter_2F_Get_20_Operation_20_Arity_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1,V_Object *root2);
enum opTrigger vpx_method_Interpreter_2F_Get_20_Operation_20_Arity_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1,V_Object *root2)
{
HEADER(12)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_match(PARAMETERS," primitive",TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Read_20_Descriptor,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
FAILONSUCCESS

result = vpx_get(PARAMETERS,kVPXValue_Write_20_Descriptor,TERMINAL(3),ROOT(5),ROOT(6));

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(5),ROOT(7),ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_primitive_2D_arity,4,3,TERMINAL(8),TERMINAL(6),TERMINAL(4),TERMINAL(1),ROOT(9),ROOT(10),ROOT(11));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(9))
OUTPUT(1,TERMINAL(10))
OUTPUT(2,TERMINAL(11))
FOOTER(12)
}

enum opTrigger vpx_method_Interpreter_2F_Get_20_Operation_20_Arity_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1,V_Object *root2);
enum opTrigger vpx_method_Interpreter_2F_Get_20_Operation_20_Arity_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1,V_Object *root2)
{
HEADER(12)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_match(PARAMETERS,"procedure",TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Read_20_Descriptor,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
FAILONSUCCESS

result = vpx_get(PARAMETERS,kVPXValue_Write_20_Descriptor,TERMINAL(3),ROOT(5),ROOT(6));

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(5),ROOT(7),ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_procedure_2D_arity,4,2,TERMINAL(8),TERMINAL(6),TERMINAL(4),TERMINAL(1),ROOT(9),ROOT(10));
FAILONFAILURE

result = vpx_constant(PARAMETERS,"NULL",ROOT(11));

result = kSuccess;

OUTPUT(0,TERMINAL(9))
OUTPUT(1,TERMINAL(10))
OUTPUT(2,TERMINAL(11))
FOOTER(12)
}

enum opTrigger vpx_method_Interpreter_2F_Get_20_Operation_20_Arity_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1,V_Object *root2);
enum opTrigger vpx_method_Interpreter_2F_Get_20_Operation_20_Arity_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1,V_Object *root2)
{
HEADER(12)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_match(PARAMETERS,"method",TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Read_20_Descriptor,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
FAILONSUCCESS

result = vpx_get(PARAMETERS,kVPXValue_Write_20_Descriptor,TERMINAL(3),ROOT(5),ROOT(6));

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(5),ROOT(7),ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_method_2D_arity,4,3,TERMINAL(8),TERMINAL(6),TERMINAL(4),TERMINAL(1),ROOT(9),ROOT(10),ROOT(11));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(9))
OUTPUT(1,TERMINAL(10))
OUTPUT(2,TERMINAL(11))
FOOTER(12)
}

enum opTrigger vpx_method_Interpreter_2F_Get_20_Operation_20_Arity_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1,V_Object *root2);
enum opTrigger vpx_method_Interpreter_2F_Get_20_Operation_20_Arity_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1,V_Object *root2)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"Unknown get arity type: \"",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_show,2,0,TERMINAL(3),TERMINAL(2));

result = vpx_constant(PARAMETERS,"0",ROOT(4));

result = vpx_constant(PARAMETERS,"NULL",ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
OUTPUT(1,TERMINAL(4))
OUTPUT(2,TERMINAL(5))
FOOTER(6)
}

enum opTrigger vpx_method_Interpreter_2F_Get_20_Operation_20_Arity(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1,V_Object *root2)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Interpreter_2F_Get_20_Operation_20_Arity_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0,root1,root2))
if(vpx_method_Interpreter_2F_Get_20_Operation_20_Arity_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0,root1,root2))
if(vpx_method_Interpreter_2F_Get_20_Operation_20_Arity_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0,root1,root2))
vpx_method_Interpreter_2F_Get_20_Operation_20_Arity_case_4(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0,root1,root2);
return outcome;
}

enum opTrigger vpx_method_Interpreter_2F_Create_20_Attribute(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4,V_Object *root0)
{
HEADER(12)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
INPUT(4,4)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Read_20_Descriptor,TERMINAL(0),ROOT(5),ROOT(6));

result = vpx_get(PARAMETERS,kVPXValue_Write_20_Descriptor,TERMINAL(5),ROOT(7),ROOT(8));

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(7),ROOT(9),ROOT(10));

result = vpx_call_primitive(PARAMETERS,VPLP_insert_2D_attribute,7,1,TERMINAL(10),TERMINAL(8),TERMINAL(6),TERMINAL(1),TERMINAL(2),TERMINAL(3),TERMINAL(4),ROOT(11));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(11))
FOOTERSINGLECASE(12)
}

enum opTrigger vpx_method_Interpreter_2F_Destroy_20_Attribute(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Read_20_Descriptor,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Write_20_Descriptor,TERMINAL(2),ROOT(4),ROOT(5));

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(4),ROOT(6),ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP_dispose_2D_attribute,4,0,TERMINAL(7),TERMINAL(5),TERMINAL(3),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(8)
}

enum opTrigger vpx_method_Interpreter_2F_Rename_20_Element_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4);
enum opTrigger vpx_method_Interpreter_2F_Rename_20_Element_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4)
{
HEADER(11)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
INPUT(4,4)
result = kSuccess;

result = vpx_match(PARAMETERS,"attribute",TERMINAL(4));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Read_20_Descriptor,TERMINAL(0),ROOT(5),ROOT(6));

result = vpx_get(PARAMETERS,kVPXValue_Write_20_Descriptor,TERMINAL(5),ROOT(7),ROOT(8));

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(7),ROOT(9),ROOT(10));

result = vpx_call_primitive(PARAMETERS,VPLP_rename_2D_attribute,6,0,TERMINAL(10),TERMINAL(8),TERMINAL(6),TERMINAL(1),TERMINAL(2),TERMINAL(3));
FAILONFAILURE

result = kSuccess;

FOOTER(11)
}

enum opTrigger vpx_method_Interpreter_2F_Rename_20_Element_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4);
enum opTrigger vpx_method_Interpreter_2F_Rename_20_Element_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4)
{
HEADER(11)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
INPUT(4,4)
result = kSuccess;

result = vpx_match(PARAMETERS,"class",TERMINAL(4));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Read_20_Descriptor,TERMINAL(0),ROOT(5),ROOT(6));

result = vpx_get(PARAMETERS,kVPXValue_Write_20_Descriptor,TERMINAL(5),ROOT(7),ROOT(8));

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(7),ROOT(9),ROOT(10));

result = vpx_call_primitive(PARAMETERS,VPLP_rename_2D_class,5,0,TERMINAL(10),TERMINAL(8),TERMINAL(6),TERMINAL(2),TERMINAL(3));
FAILONFAILURE

result = kSuccess;

FOOTER(11)
}

enum opTrigger vpx_method_Interpreter_2F_Rename_20_Element_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4);
enum opTrigger vpx_method_Interpreter_2F_Rename_20_Element_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4)
{
HEADER(11)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
INPUT(4,4)
result = kSuccess;

result = vpx_match(PARAMETERS,"method",TERMINAL(4));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Read_20_Descriptor,TERMINAL(0),ROOT(5),ROOT(6));

result = vpx_get(PARAMETERS,kVPXValue_Write_20_Descriptor,TERMINAL(5),ROOT(7),ROOT(8));

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(7),ROOT(9),ROOT(10));

result = vpx_call_primitive(PARAMETERS,VPLP_rename_2D_method,5,0,TERMINAL(10),TERMINAL(8),TERMINAL(6),TERMINAL(2),TERMINAL(3));
FAILONFAILURE

result = kSuccess;

FOOTER(11)
}

enum opTrigger vpx_method_Interpreter_2F_Rename_20_Element_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4);
enum opTrigger vpx_method_Interpreter_2F_Rename_20_Element_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4)
{
HEADER(11)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
INPUT(4,4)
result = kSuccess;

result = vpx_match(PARAMETERS,"persistent",TERMINAL(4));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Read_20_Descriptor,TERMINAL(0),ROOT(5),ROOT(6));

result = vpx_get(PARAMETERS,kVPXValue_Write_20_Descriptor,TERMINAL(5),ROOT(7),ROOT(8));

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(7),ROOT(9),ROOT(10));

result = vpx_call_primitive(PARAMETERS,VPLP_rename_2D_persistent,5,0,TERMINAL(10),TERMINAL(8),TERMINAL(6),TERMINAL(2),TERMINAL(3));
FAILONFAILURE

result = kSuccess;

FOOTER(11)
}

enum opTrigger vpx_method_Interpreter_2F_Rename_20_Element_case_5(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4);
enum opTrigger vpx_method_Interpreter_2F_Rename_20_Element_case_5(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
INPUT(4,4)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"Unrecognized re-name element: \"",ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_show,2,0,TERMINAL(5),TERMINAL(4));

result = kSuccess;

FOOTER(6)
}

enum opTrigger vpx_method_Interpreter_2F_Rename_20_Element(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Interpreter_2F_Rename_20_Element_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,terminal4))
if(vpx_method_Interpreter_2F_Rename_20_Element_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,terminal4))
if(vpx_method_Interpreter_2F_Rename_20_Element_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,terminal4))
if(vpx_method_Interpreter_2F_Rename_20_Element_case_4(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,terminal4))
vpx_method_Interpreter_2F_Rename_20_Element_case_5(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,terminal4);
return outcome;
}

enum opTrigger vpx_method_Interpreter_2F_Object_20_To_20_Value_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Interpreter_2F_Object_20_To_20_Value_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(10)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_match(PARAMETERS,"string",TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Read_20_Descriptor,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_Write_20_Descriptor,TERMINAL(3),ROOT(5),ROOT(6));

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(5),ROOT(7),ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP_string_2D_to_2D_value,4,1,TERMINAL(8),TERMINAL(6),TERMINAL(4),TERMINAL(1),ROOT(9));

result = kSuccess;

OUTPUT(0,TERMINAL(9))
FOOTER(10)
}

enum opTrigger vpx_method_Interpreter_2F_Object_20_To_20_Value_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Interpreter_2F_Object_20_To_20_Value_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(10)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_match(PARAMETERS,"list",TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Read_20_Descriptor,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_Write_20_Descriptor,TERMINAL(3),ROOT(5),ROOT(6));

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(5),ROOT(7),ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP_list_2D_to_2D_value,4,1,TERMINAL(8),TERMINAL(6),TERMINAL(4),TERMINAL(1),ROOT(9));

result = kSuccess;

OUTPUT(0,TERMINAL(9))
FOOTER(10)
}

enum opTrigger vpx_method_Interpreter_2F_Object_20_To_20_Value_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Interpreter_2F_Object_20_To_20_Value_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(10)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_match(PARAMETERS,"value",TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Read_20_Descriptor,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_Write_20_Descriptor,TERMINAL(3),ROOT(5),ROOT(6));

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(5),ROOT(7),ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP_value_2D_to_2D_value,4,1,TERMINAL(8),TERMINAL(6),TERMINAL(4),TERMINAL(1),ROOT(9));

result = kSuccess;

OUTPUT(0,TERMINAL(9))
FOOTER(10)
}

enum opTrigger vpx_method_Interpreter_2F_Object_20_To_20_Value_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Interpreter_2F_Object_20_To_20_Value_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(10)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_match(PARAMETERS,"archive",TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Read_20_Descriptor,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_Write_20_Descriptor,TERMINAL(3),ROOT(5),ROOT(6));

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(5),ROOT(7),ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP_archive_2D_to_2D_value,4,1,TERMINAL(8),TERMINAL(6),TERMINAL(4),TERMINAL(1),ROOT(9));

result = kSuccess;

OUTPUT(0,TERMINAL(9))
FOOTER(10)
}

enum opTrigger vpx_method_Interpreter_2F_Object_20_To_20_Value_case_5_local_3_case_1_local_14_case_1_local_14(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4);
enum opTrigger vpx_method_Interpreter_2F_Object_20_To_20_Value_case_5_local_3_case_1_local_14_case_1_local_14(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
INPUT(4,4)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(3),ROOT(5),ROOT(6));

result = vpx_get(PARAMETERS,kVPXValue_Name,TERMINAL(6),ROOT(7),ROOT(8));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Instance_20_Attribute,5,0,TERMINAL(0),TERMINAL(1),TERMINAL(2),TERMINAL(8),TERMINAL(4));

result = kSuccess;

FOOTERSINGLECASE(9)
}

enum opTrigger vpx_method_Interpreter_2F_Object_20_To_20_Value_case_5_local_3_case_1_local_14_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4,V_Object *root0);
enum opTrigger vpx_method_Interpreter_2F_Object_20_To_20_Value_case_5_local_3_case_1_local_14_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4,V_Object *root0)
{
HEADER(19)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
INPUT(4,4)
result = kSuccess;

result = vpx_constant(PARAMETERS,"object",ROOT(5));

result = vpx_constant(PARAMETERS,"Name",ROOT(6));

result = vpx_match(PARAMETERS,"instance",TERMINAL(4));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Project,TERMINAL(0),ROOT(7),ROOT(8));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Classes,1,1,TERMINAL(8),ROOT(9));
NEXTCASEONFAILURE

result = vpx_method_Find_20_Instance(PARAMETERS,TERMINAL(9),TERMINAL(6),TERMINAL(1),ROOT(10),ROOT(11));

result = vpx_match(PARAMETERS,"0",TERMINAL(10));
NEXTCASEONSUCCESS

result = vpx_get(PARAMETERS,kVPXValue_Record,TERMINAL(11),ROOT(12),ROOT(13));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(3))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Object_20_To_20_Value,3,1,TERMINAL(0),LIST(3),TERMINAL(5),ROOT(14));
LISTROOT(14,0)
REPEATFINISH
LISTROOTFINISH(14,0)
LISTROOTEND
} else {
ROOTEMPTY(14)
}

result = vpx_constant(PARAMETERS,"Attribute Data",ROOT(15));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(12),TERMINAL(15),ROOT(16));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(16),ROOT(17),ROOT(18));

if( (repeatLimit = vpx_multiplex(2,TERMINAL(18),TERMINAL(14))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Interpreter_2F_Object_20_To_20_Value_case_5_local_3_case_1_local_14_case_1_local_14(PARAMETERS,TERMINAL(0),TERMINAL(13),TERMINAL(2),LIST(18),LIST(14));
REPEATFINISH
} else {
}

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(19)
}

enum opTrigger vpx_method_Interpreter_2F_Object_20_To_20_Value_case_5_local_3_case_1_local_14_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4,V_Object *root0);
enum opTrigger vpx_method_Interpreter_2F_Object_20_To_20_Value_case_5_local_3_case_1_local_14_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
INPUT(4,4)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTER(6)
}

enum opTrigger vpx_method_Interpreter_2F_Object_20_To_20_Value_case_5_local_3_case_1_local_14(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4,V_Object *root0);
enum opTrigger vpx_method_Interpreter_2F_Object_20_To_20_Value_case_5_local_3_case_1_local_14(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Interpreter_2F_Object_20_To_20_Value_case_5_local_3_case_1_local_14_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,terminal4,root0))
vpx_method_Interpreter_2F_Object_20_To_20_Value_case_5_local_3_case_1_local_14_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,terminal4,root0);
return outcome;
}

enum opTrigger vpx_method_Interpreter_2F_Object_20_To_20_Value_case_5_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Interpreter_2F_Object_20_To_20_Value_case_5_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(15)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(1),ROOT(2));

result = vpx_match(PARAMETERS,"Instance Value Data",TERMINAL(2));
FAILONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Attributes,TERMINAL(1),ROOT(3),ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_Class_20_Name,TERMINAL(3),ROOT(5),ROOT(6));

result = vpx_constant(PARAMETERS,"string",ROOT(7));

result = vpx_constant(PARAMETERS,">",ROOT(8));

result = vpx_constant(PARAMETERS,"<",ROOT(9));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,3,1,TERMINAL(9),TERMINAL(6),TERMINAL(8),ROOT(10));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Object_20_To_20_Value,3,1,TERMINAL(0),TERMINAL(10),TERMINAL(7),ROOT(11));

result = vpx_constant(PARAMETERS,"type",ROOT(12));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Value_20_Data,3,1,TERMINAL(0),TERMINAL(11),TERMINAL(12),ROOT(13));

result = vpx_method_Interpreter_2F_Object_20_To_20_Value_case_5_local_3_case_1_local_14(PARAMETERS,TERMINAL(0),TERMINAL(6),TERMINAL(11),TERMINAL(4),TERMINAL(13),ROOT(14));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(14))
FOOTER(15)
}

enum opTrigger vpx_method_Interpreter_2F_Object_20_To_20_Value_case_5_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Interpreter_2F_Object_20_To_20_Value_case_5_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_list_3F_,1,0,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"object",ROOT(2));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(1))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Object_20_To_20_Value,3,1,TERMINAL(0),LIST(1),TERMINAL(2),ROOT(3));
LISTROOT(3,0)
REPEATFINISH
LISTROOTFINISH(3,0)
LISTROOTEND
} else {
ROOTEMPTY(3)
}

result = vpx_constant(PARAMETERS,"list",ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Object_20_To_20_Value,3,1,TERMINAL(0),TERMINAL(3),TERMINAL(4),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTER(6)
}

enum opTrigger vpx_method_Interpreter_2F_Object_20_To_20_Value_case_5_local_3_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Interpreter_2F_Object_20_To_20_Value_case_5_local_3_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_string_3F_,1,0,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"string",ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Object_20_To_20_Value,3,1,TERMINAL(0),TERMINAL(1),TERMINAL(2),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_Interpreter_2F_Object_20_To_20_Value_case_5_local_3_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Interpreter_2F_Object_20_To_20_Value_case_5_local_3_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"string",ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_to_2D_string,1,1,TERMINAL(1),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Object_20_To_20_Value,3,1,TERMINAL(0),TERMINAL(3),TERMINAL(2),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Interpreter_2F_Object_20_To_20_Value_case_5_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Interpreter_2F_Object_20_To_20_Value_case_5_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Interpreter_2F_Object_20_To_20_Value_case_5_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
if(vpx_method_Interpreter_2F_Object_20_To_20_Value_case_5_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
if(vpx_method_Interpreter_2F_Object_20_To_20_Value_case_5_local_3_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Interpreter_2F_Object_20_To_20_Value_case_5_local_3_case_4(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Interpreter_2F_Object_20_To_20_Value_case_5(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Interpreter_2F_Object_20_To_20_Value_case_5(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_match(PARAMETERS,"object",TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_method_Interpreter_2F_Object_20_To_20_Value_case_5_local_3(PARAMETERS,TERMINAL(0),TERMINAL(1),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_Interpreter_2F_Object_20_To_20_Value_case_6(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Interpreter_2F_Object_20_To_20_Value_case_6(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(3));

result = vpx_constant(PARAMETERS,"\"Unrecognized Object To Value command: \"",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_show,2,0,TERMINAL(4),TERMINAL(2));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(5)
}

enum opTrigger vpx_method_Interpreter_2F_Object_20_To_20_Value(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Interpreter_2F_Object_20_To_20_Value_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
if(vpx_method_Interpreter_2F_Object_20_To_20_Value_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
if(vpx_method_Interpreter_2F_Object_20_To_20_Value_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
if(vpx_method_Interpreter_2F_Object_20_To_20_Value_case_4(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
if(vpx_method_Interpreter_2F_Object_20_To_20_Value_case_5(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
vpx_method_Interpreter_2F_Object_20_To_20_Value_case_6(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0);
return outcome;
}

enum opTrigger vpx_method_Interpreter_2F_Set_20_Current_20_Operation_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Interpreter_2F_Set_20_Current_20_Operation_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(0));
NEXTCASEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Rollback,1,0,TERMINAL(0));

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_Interpreter_2F_Set_20_Current_20_Operation_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Interpreter_2F_Set_20_Current_20_Operation_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_Interpreter_2F_Set_20_Current_20_Operation_case_1_local_6_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Interpreter_2F_Set_20_Current_20_Operation_case_1_local_6_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(0));
NEXTCASEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Close_20_Self,1,0,TERMINAL(0));

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_Interpreter_2F_Set_20_Current_20_Operation_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Interpreter_2F_Set_20_Current_20_Operation_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Interpreter_2F_Set_20_Current_20_Operation_case_1_local_6_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
if(vpx_method_Interpreter_2F_Set_20_Current_20_Operation_case_1_local_6_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Interpreter_2F_Set_20_Current_20_Operation_case_1_local_6_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Interpreter_2F_Set_20_Current_20_Operation(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3)
{
HEADER(11)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Read_20_Descriptor,TERMINAL(0),ROOT(4),ROOT(5));

result = vpx_get(PARAMETERS,kVPXValue_Write_20_Descriptor,TERMINAL(4),ROOT(6),ROOT(7));

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(6),ROOT(8),ROOT(9));

result = vpx_call_primitive(PARAMETERS,VPLP_set_2D_current_2D_operation,6,1,TERMINAL(9),TERMINAL(7),TERMINAL(5),TERMINAL(1),TERMINAL(2),TERMINAL(3),ROOT(10));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(10))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Interpreter_2F_Set_20_Current_20_Operation_case_1_local_6(PARAMETERS,LIST(10));
REPEATFINISH
} else {
}

result = kSuccess;

FOOTERSINGLECASE(11)
}

enum opTrigger vpx_method_Interpreter_2F_Unarchive_20_Element(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Read_20_Descriptor,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Write_20_Descriptor,TERMINAL(2),ROOT(4),ROOT(5));

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(4),ROOT(6),ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP_unarchive_2D_value,4,0,TERMINAL(7),TERMINAL(5),TERMINAL(3),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(8)
}

enum opTrigger vpx_method_Interpreter_2F_Post_20_Load_3F_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Read_20_Descriptor,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Write_20_Descriptor,TERMINAL(2),ROOT(4),ROOT(5));

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(4),ROOT(6),ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP_set_2D_post_2D_load,4,0,TERMINAL(7),TERMINAL(5),TERMINAL(3),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(8)
}

enum opTrigger vpx_method_Interpreter_2F_Get_20_Class_20_Instance(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Read_20_Descriptor,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Write_20_Descriptor,TERMINAL(2),ROOT(4),ROOT(5));

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(4),ROOT(6),ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_class_2D_instance,4,1,TERMINAL(7),TERMINAL(5),TERMINAL(3),TERMINAL(1),ROOT(8));

result = kSuccess;

OUTPUT(0,TERMINAL(8))
FOOTERSINGLECASE(9)
}

enum opTrigger vpx_method_Interpreter_2F_Set_20_Instance_20_Attribute(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4)
{
HEADER(11)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
INPUT(4,4)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Read_20_Descriptor,TERMINAL(0),ROOT(5),ROOT(6));

result = vpx_get(PARAMETERS,kVPXValue_Write_20_Descriptor,TERMINAL(5),ROOT(7),ROOT(8));

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(7),ROOT(9),ROOT(10));

result = vpx_call_primitive(PARAMETERS,VPLP_set_2D_instance_2D_attribute_2D_value,7,0,TERMINAL(10),TERMINAL(8),TERMINAL(6),TERMINAL(1),TERMINAL(2),TERMINAL(3),TERMINAL(4));

result = kSuccess;

FOOTERSINGLECASE(11)
}

enum opTrigger vpx_method_Interpreter_2F_Finalize_20_Stack(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(10)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Read_20_Descriptor,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_Write_20_Descriptor,TERMINAL(3),ROOT(5),ROOT(6));

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(5),ROOT(7),ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP_finalize_2D_stack,5,1,TERMINAL(8),TERMINAL(6),TERMINAL(4),TERMINAL(1),TERMINAL(2),ROOT(9));

result = kSuccess;

OUTPUT(0,TERMINAL(9))
FOOTERSINGLECASE(10)
}

enum opTrigger vpx_method_Interpreter_2F_Initialize_20_Stack(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1)
{
HEADER(11)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Read_20_Descriptor,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_Write_20_Descriptor,TERMINAL(3),ROOT(5),ROOT(6));

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(5),ROOT(7),ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP_initialize_2D_stack,5,2,TERMINAL(8),TERMINAL(6),TERMINAL(4),TERMINAL(1),TERMINAL(2),ROOT(9),ROOT(10));

result = kSuccess;

OUTPUT(0,TERMINAL(9))
OUTPUT(1,TERMINAL(10))
FOOTERSINGLECASE(11)
}

enum opTrigger vpx_method_Interpreter_2F_Advance_20_Stack(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3,V_Object *root4,V_Object *root5)
{
HEADER(14)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Read_20_Descriptor,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Write_20_Descriptor,TERMINAL(2),ROOT(4),ROOT(5));

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(4),ROOT(6),ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP_advance_2D_stack,4,6,TERMINAL(7),TERMINAL(5),TERMINAL(3),TERMINAL(1),ROOT(8),ROOT(9),ROOT(10),ROOT(11),ROOT(12),ROOT(13));

result = kSuccess;

OUTPUT(0,TERMINAL(8))
OUTPUT(1,TERMINAL(9))
OUTPUT(2,TERMINAL(10))
OUTPUT(3,TERMINAL(11))
OUTPUT(4,TERMINAL(12))
OUTPUT(5,TERMINAL(13))
FOOTERSINGLECASE(14)
}

enum opTrigger vpx_method_Interpreter_2F_Get_20_Current_20_Operation(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Read_20_Descriptor,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Write_20_Descriptor,TERMINAL(2),ROOT(4),ROOT(5));

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(4),ROOT(6),ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_current_2D_operation,4,1,TERMINAL(7),TERMINAL(5),TERMINAL(3),TERMINAL(1),ROOT(8));

result = kSuccess;

OUTPUT(0,TERMINAL(8))
FOOTERSINGLECASE(9)
}

enum opTrigger vpx_method_Interpreter_2F_Reset_20_Errors(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(7)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Read_20_Descriptor,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_Write_20_Descriptor,TERMINAL(1),ROOT(3),ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(3),ROOT(5),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP_null_2D_errors,3,0,TERMINAL(6),TERMINAL(4),TERMINAL(2));

result = kSuccess;

FOOTERSINGLECASE(7)
}

enum opTrigger vpx_method_Interpreter_2F_Get_20_Errors(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(8)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Read_20_Descriptor,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_Write_20_Descriptor,TERMINAL(1),ROOT(3),ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(3),ROOT(5),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_errors,3,1,TERMINAL(6),TERMINAL(4),TERMINAL(2),ROOT(7));

result = kSuccess;

OUTPUT(0,TERMINAL(7))
FOOTERSINGLECASE(8)
}

enum opTrigger vpx_method_Interpreter_2F_Get_20_Debug_20_Window(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Read_20_Descriptor,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Write_20_Descriptor,TERMINAL(2),ROOT(4),ROOT(5));

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(4),ROOT(6),ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_debug_2D_window,4,1,TERMINAL(7),TERMINAL(5),TERMINAL(3),TERMINAL(1),ROOT(8));

result = kSuccess;

OUTPUT(0,TERMINAL(8))
FOOTERSINGLECASE(9)
}

enum opTrigger vpx_method_Interpreter_2F_Set_20_Debug_20_Window(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Read_20_Descriptor,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_Write_20_Descriptor,TERMINAL(3),ROOT(5),ROOT(6));

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(5),ROOT(7),ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP_set_2D_debug_2D_window,5,0,TERMINAL(8),TERMINAL(6),TERMINAL(4),TERMINAL(1),TERMINAL(2));

result = kSuccess;

FOOTERSINGLECASE(9)
}

enum opTrigger vpx_method_Interpreter_2F_Get_20_IO_20_Value(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0)
{
HEADER(11)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Read_20_Descriptor,TERMINAL(0),ROOT(4),ROOT(5));

result = vpx_get(PARAMETERS,kVPXValue_Write_20_Descriptor,TERMINAL(4),ROOT(6),ROOT(7));

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(6),ROOT(8),ROOT(9));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_io_2D_value,6,1,TERMINAL(9),TERMINAL(7),TERMINAL(5),TERMINAL(1),TERMINAL(2),TERMINAL(3),ROOT(10));

result = kSuccess;

OUTPUT(0,TERMINAL(10))
FOOTERSINGLECASE(11)
}

enum opTrigger vpx_method_Interpreter_2F_Set_20_IO_20_Value(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4)
{
HEADER(11)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
INPUT(4,4)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Read_20_Descriptor,TERMINAL(0),ROOT(5),ROOT(6));

result = vpx_get(PARAMETERS,kVPXValue_Write_20_Descriptor,TERMINAL(5),ROOT(7),ROOT(8));

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(7),ROOT(9),ROOT(10));

result = vpx_call_primitive(PARAMETERS,VPLP_set_2D_io_2D_value,7,0,TERMINAL(10),TERMINAL(8),TERMINAL(6),TERMINAL(1),TERMINAL(2),TERMINAL(3),TERMINAL(4));

result = kSuccess;

FOOTERSINGLECASE(11)
}

enum opTrigger vpx_method_Interpreter_2F_Previous_20_Case(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3,V_Object *root4)
{
HEADER(13)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Read_20_Descriptor,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Write_20_Descriptor,TERMINAL(2),ROOT(4),ROOT(5));

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(4),ROOT(6),ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP_previous_2D_stack,4,5,TERMINAL(7),TERMINAL(5),TERMINAL(3),TERMINAL(1),ROOT(8),ROOT(9),ROOT(10),ROOT(11),ROOT(12));

result = kSuccess;

OUTPUT(0,TERMINAL(8))
OUTPUT(1,TERMINAL(9))
OUTPUT(2,TERMINAL(10))
OUTPUT(3,TERMINAL(11))
OUTPUT(4,TERMINAL(12))
FOOTERSINGLECASE(13)
}

enum opTrigger vpx_method_Interpreter_2F_Step_20_Into(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(7)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Read_20_Descriptor,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_Write_20_Descriptor,TERMINAL(1),ROOT(3),ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(3),ROOT(5),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP_step_2D_environment,3,0,TERMINAL(6),TERMINAL(4),TERMINAL(2));

result = kSuccess;

FOOTERSINGLECASE(7)
}

enum opTrigger vpx_method_Interpreter_2F_Step_20_Out(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Read_20_Descriptor,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Write_20_Descriptor,TERMINAL(2),ROOT(4),ROOT(5));

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(4),ROOT(6),ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP_set_2D_step_2D_out,4,0,TERMINAL(7),TERMINAL(5),TERMINAL(3),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(8)
}

enum opTrigger vpx_method_Interpreter_2F_Has_20_Instances_3F_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Read_20_Descriptor,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Write_20_Descriptor,TERMINAL(2),ROOT(4),ROOT(5));

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(4),ROOT(6),ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP_has_2D_instances_3F_,4,0,TERMINAL(7),TERMINAL(5),TERMINAL(3),TERMINAL(1));
FAILONSUCCESS

result = kSuccess;

FOOTERSINGLECASE(8)
}

enum opTrigger vpx_method_Interpreter_2F_Get_20_Info_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Interpreter_2F_Get_20_Info_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(10)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_match(PARAMETERS,"procedure",TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Read_20_Descriptor,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_Write_20_Descriptor,TERMINAL(3),ROOT(5),ROOT(6));

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(5),ROOT(7),ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_procedure_2D_info,4,1,TERMINAL(8),TERMINAL(6),TERMINAL(4),TERMINAL(1),ROOT(9));

result = kSuccess;

OUTPUT(0,TERMINAL(9))
FOOTER(10)
}

enum opTrigger vpx_method_Interpreter_2F_Get_20_Info_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Interpreter_2F_Get_20_Info_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(10)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_match(PARAMETERS,"primitive",TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Read_20_Descriptor,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_Write_20_Descriptor,TERMINAL(3),ROOT(5),ROOT(6));

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(5),ROOT(7),ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_primitive_2D_info,4,1,TERMINAL(8),TERMINAL(6),TERMINAL(4),TERMINAL(1),ROOT(9));

result = kSuccess;

OUTPUT(0,TERMINAL(9))
FOOTER(10)
}

enum opTrigger vpx_method_Interpreter_2F_Get_20_Info_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Interpreter_2F_Get_20_Info_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(10)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_match(PARAMETERS,"constant",TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Read_20_Descriptor,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_Write_20_Descriptor,TERMINAL(3),ROOT(5),ROOT(6));

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(5),ROOT(7),ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_constant_2D_info,4,1,TERMINAL(8),TERMINAL(6),TERMINAL(4),TERMINAL(1),ROOT(9));

result = kSuccess;

OUTPUT(0,TERMINAL(9))
FOOTER(10)
}

enum opTrigger vpx_method_Interpreter_2F_Get_20_Info_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Interpreter_2F_Get_20_Info_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(10)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_match(PARAMETERS,"structure",TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Read_20_Descriptor,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_Write_20_Descriptor,TERMINAL(3),ROOT(5),ROOT(6));

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(5),ROOT(7),ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_structure_2D_info,4,1,TERMINAL(8),TERMINAL(6),TERMINAL(4),TERMINAL(1),ROOT(9));

result = kSuccess;

OUTPUT(0,TERMINAL(9))
FOOTER(10)
}

enum opTrigger vpx_method_Interpreter_2F_Get_20_Info_case_5(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Interpreter_2F_Get_20_Info_case_5(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_Interpreter_2F_Get_20_Info(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Interpreter_2F_Get_20_Info_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
if(vpx_method_Interpreter_2F_Get_20_Info_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
if(vpx_method_Interpreter_2F_Get_20_Info_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
if(vpx_method_Interpreter_2F_Get_20_Info_case_4(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
vpx_method_Interpreter_2F_Get_20_Info_case_5(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0);
return outcome;
}

enum opTrigger vpx_method_Interpreter_2F_Update_20_Breakpoints_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Interpreter_2F_Update_20_Breakpoints_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Breakpoints,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP__28_in_29_,2,1,TERMINAL(4),TERMINAL(1),ROOT(5));

result = vpx_match(PARAMETERS,"0",TERMINAL(5));
TERMINATEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_attach_2D_r,2,1,TERMINAL(4),TERMINAL(1),ROOT(6));

result = vpx_set(PARAMETERS,kVPXValue_Breakpoints,TERMINAL(3),TERMINAL(6),ROOT(7));

result = kSuccess;

FOOTER(8)
}

enum opTrigger vpx_method_Interpreter_2F_Update_20_Breakpoints_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Interpreter_2F_Update_20_Breakpoints_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Breakpoints,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP__28_in_29_,2,1,TERMINAL(4),TERMINAL(1),ROOT(5));

result = vpx_match(PARAMETERS,"0",TERMINAL(5));
TERMINATEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_detach_2D_nth,2,2,TERMINAL(4),TERMINAL(5),ROOT(6),ROOT(7));

result = vpx_set(PARAMETERS,kVPXValue_Breakpoints,TERMINAL(3),TERMINAL(6),ROOT(8));

result = kSuccess;

FOOTER(9)
}

enum opTrigger vpx_method_Interpreter_2F_Update_20_Breakpoints(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Interpreter_2F_Update_20_Breakpoints_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2))
vpx_method_Interpreter_2F_Update_20_Breakpoints_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2);
return outcome;
}

enum opTrigger vpx_method_Interpreter_2F_Unmark_20_Heap(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(7)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Read_20_Descriptor,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_Write_20_Descriptor,TERMINAL(1),ROOT(3),ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(3),ROOT(5),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP_unmark_2D_heap,3,0,TERMINAL(6),TERMINAL(4),TERMINAL(2));

result = kSuccess;

FOOTERSINGLECASE(7)
}

enum opTrigger vpx_method_Interpreter_2F_Find_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4,V_Object terminal5,V_Object *root0);
enum opTrigger vpx_method_Interpreter_2F_Find_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4,V_Object terminal5,V_Object *root0)
{
HEADER(13)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
INPUT(4,4)
INPUT(5,5)
result = kSuccess;

result = vpx_match(PARAMETERS,"operation",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Read_20_Descriptor,TERMINAL(0),ROOT(6),ROOT(7));

result = vpx_get(PARAMETERS,kVPXValue_Write_20_Descriptor,TERMINAL(6),ROOT(8),ROOT(9));

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(8),ROOT(10),ROOT(11));

result = vpx_call_primitive(PARAMETERS,VPLP_find_2D_operations,7,1,TERMINAL(11),TERMINAL(9),TERMINAL(7),TERMINAL(2),TERMINAL(3),TERMINAL(4),TERMINAL(5),ROOT(12));

result = kSuccess;

OUTPUT(0,TERMINAL(12))
FOOTER(13)
}

enum opTrigger vpx_method_Interpreter_2F_Find_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4,V_Object terminal5,V_Object *root0);
enum opTrigger vpx_method_Interpreter_2F_Find_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4,V_Object terminal5,V_Object *root0)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
INPUT(4,4)
INPUT(5,5)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( )",ROOT(6));

result = vpx_constant(PARAMETERS,"Unrecognized Find Request",ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP_show,1,0,TERMINAL(7));

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTER(8)
}

enum opTrigger vpx_method_Interpreter_2F_Find(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4,V_Object terminal5,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Interpreter_2F_Find_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,terminal4,terminal5,root0))
vpx_method_Interpreter_2F_Find_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,terminal4,terminal5,root0);
return outcome;
}

enum opTrigger vpx_method_Interpreter_2F_Set_20_Frame_20_Breakpoint(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3)
{
HEADER(10)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Read_20_Descriptor,TERMINAL(0),ROOT(4),ROOT(5));

result = vpx_get(PARAMETERS,kVPXValue_Write_20_Descriptor,TERMINAL(4),ROOT(6),ROOT(7));

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(6),ROOT(8),ROOT(9));

result = vpx_call_primitive(PARAMETERS,VPLP_set_2D_frame_2D_breakpoint,6,0,TERMINAL(9),TERMINAL(7),TERMINAL(5),TERMINAL(1),TERMINAL(2),TERMINAL(3));

result = kSuccess;

FOOTERSINGLECASE(10)
}

enum opTrigger vpx_method_Interpreter_2F_Bundle_20_Primitives_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Interpreter_2F_Bundle_20_Primitives_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Read_20_Descriptor,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Write_20_Descriptor,TERMINAL(2),ROOT(4),ROOT(5));

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(4),ROOT(6),ROOT(7));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(7));
NEXTCASEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_bundle_2D_primitives,4,1,TERMINAL(7),TERMINAL(5),TERMINAL(3),TERMINAL(1),ROOT(8));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(8))
FOOTER(9)
}

enum opTrigger vpx_method_Interpreter_2F_Bundle_20_Primitives_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Interpreter_2F_Bundle_20_Primitives_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( )",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Interpreter_2F_Bundle_20_Primitives(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Interpreter_2F_Bundle_20_Primitives_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Interpreter_2F_Bundle_20_Primitives_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Interpreter_2F_Get_20_Watchpoint(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(10)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Read_20_Descriptor,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_Write_20_Descriptor,TERMINAL(3),ROOT(5),ROOT(6));

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(5),ROOT(7),ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_watchpoint,5,1,TERMINAL(8),TERMINAL(6),TERMINAL(4),TERMINAL(1),TERMINAL(2),ROOT(9));

result = kSuccess;

OUTPUT(0,TERMINAL(9))
FOOTERSINGLECASE(10)
}

enum opTrigger vpx_method_Interpreter_2F_Set_20_Watchpoint(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3)
{
HEADER(10)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Read_20_Descriptor,TERMINAL(0),ROOT(4),ROOT(5));

result = vpx_get(PARAMETERS,kVPXValue_Write_20_Descriptor,TERMINAL(4),ROOT(6),ROOT(7));

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(6),ROOT(8),ROOT(9));

result = vpx_call_primitive(PARAMETERS,VPLP_set_2D_watchpoint,6,0,TERMINAL(9),TERMINAL(7),TERMINAL(5),TERMINAL(1),TERMINAL(2),TERMINAL(3));

result = kSuccess;

FOOTERSINGLECASE(10)
}

enum opTrigger vpx_method_Interpreter_2F_Clear_20_Watchpoints(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(7)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Read_20_Descriptor,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_Write_20_Descriptor,TERMINAL(1),ROOT(3),ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(3),ROOT(5),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP_clear_2D_watchpoints,3,0,TERMINAL(6),TERMINAL(4),TERMINAL(2));

result = kSuccess;

FOOTERSINGLECASE(7)
}

enum opTrigger vpx_method_Interpreter_2F_Get_20_Watchpoints(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(8)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Read_20_Descriptor,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_Write_20_Descriptor,TERMINAL(1),ROOT(3),ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(3),ROOT(5),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_watchpoints,3,1,TERMINAL(6),TERMINAL(4),TERMINAL(2),ROOT(7));

result = kSuccess;

OUTPUT(0,TERMINAL(7))
FOOTERSINGLECASE(8)
}

enum opTrigger vpx_method_Interpreter_2F_Mark_20_Instances(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Read_20_Descriptor,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Write_20_Descriptor,TERMINAL(2),ROOT(4),ROOT(5));

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(4),ROOT(6),ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP_mark_2D_instances,4,0,TERMINAL(7),TERMINAL(5),TERMINAL(3),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(8)
}

enum opTrigger vpx_method_Interpreter_2F_Resources_20_Changed(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(7)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Read_20_Descriptor,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_Write_20_Descriptor,TERMINAL(1),ROOT(3),ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(3),ROOT(5),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP_resources_2D_changed,3,0,TERMINAL(6),TERMINAL(4),TERMINAL(2));

result = kSuccess;

FOOTERSINGLECASE(7)
}

/* Stop Universals */



Nat4 VPLC_Set_20_Instance_20_Task_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Set_20_Instance_20_Task_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 454 375 }{ 128 336 } */
	tempAttribute = attribute_add("Class",tempClass,NULL,environment);
	tempAttribute = attribute_add("Instance",tempClass,NULL,environment);
	tempAttribute = attribute_add("Container",tempClass,NULL,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"Thread Task");
	return kNOERROR;
}

/* Start Universals: { 452 371 }{ 47 319 } */
enum opTrigger vpx_method_Set_20_Instance_20_Task_2F_Perform_case_1_local_13_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Set_20_Instance_20_Task_2F_Perform_case_1_local_13_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Direct_20_Value,2,0,TERMINAL(3),TERMINAL(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Send_20_Refresh,1,0,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Set_20_Instance_20_Task_2F_Perform_case_1_local_13_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Set_20_Instance_20_Task_2F_Perform_case_1_local_13_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(11)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Instance,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(4));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Class,TERMINAL(3),ROOT(5),ROOT(6));

result = vpx_constant(PARAMETERS,"Attribute Data",ROOT(7));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(6),TERMINAL(7),ROOT(8));

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(8),ROOT(9),ROOT(10));

if( (repeatLimit = vpx_multiplex(2,TERMINAL(10),TERMINAL(1))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Set_20_Instance_20_Task_2F_Perform_case_1_local_13_case_1_local_8(PARAMETERS,LIST(10),LIST(1));
REPEATFINISH
} else {
}

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Make_20_Dirty,1,0,TERMINAL(6));

result = kSuccess;

FOOTER(11)
}

enum opTrigger vpx_method_Set_20_Instance_20_Task_2F_Perform_case_1_local_13_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Set_20_Instance_20_Task_2F_Perform_case_1_local_13_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(15)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Instance,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_Class,TERMINAL(3),ROOT(5),ROOT(6));

result = vpx_constant(PARAMETERS,"Attribute Data",ROOT(7));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(6),TERMINAL(7),ROOT(8));

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(8),ROOT(9),ROOT(10));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(10))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_get(PARAMETERS,kVPXValue_Name,LIST(10),ROOT(11),ROOT(12));
LISTROOT(12,0)
REPEATFINISH
LISTROOTFINISH(12,0)
LISTROOTEND
} else {
ROOTNULL(11,NULL)
ROOTEMPTY(12)
}

result = vpx_get(PARAMETERS,kVPXValue_Record,TERMINAL(6),ROOT(13),ROOT(14));

if( (repeatLimit = vpx_multiplex(2,TERMINAL(12),TERMINAL(1))) ){
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Instance_20_Attribute,5,0,TERMINAL(2),TERMINAL(14),TERMINAL(4),LIST(12),LIST(1));
REPEATFINISH
} else {
}

result = kSuccess;

FOOTER(15)
}

enum opTrigger vpx_method_Set_20_Instance_20_Task_2F_Perform_case_1_local_13(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Set_20_Instance_20_Task_2F_Perform_case_1_local_13(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Set_20_Instance_20_Task_2F_Perform_case_1_local_13_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2))
vpx_method_Set_20_Instance_20_Task_2F_Perform_case_1_local_13_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2);
return outcome;
}

enum opTrigger vpx_method_Set_20_Instance_20_Task_2F_Perform_case_1_local_14_case_1_local_4_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Set_20_Instance_20_Task_2F_Perform_case_1_local_14_case_1_local_4_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Data,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP__3D_,2,0,TERMINAL(3),TERMINAL(1));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(4)
}

enum opTrigger vpx_method_Set_20_Instance_20_Task_2F_Perform_case_1_local_14_case_1_local_4_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Set_20_Instance_20_Task_2F_Perform_case_1_local_14_case_1_local_4_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

OUTPUT(0,NONE)
FOOTERWITHNONE(2)
}

enum opTrigger vpx_method_Set_20_Instance_20_Task_2F_Perform_case_1_local_14_case_1_local_4_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Set_20_Instance_20_Task_2F_Perform_case_1_local_14_case_1_local_4_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Set_20_Instance_20_Task_2F_Perform_case_1_local_14_case_1_local_4_case_1_local_6_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Set_20_Instance_20_Task_2F_Perform_case_1_local_14_case_1_local_4_case_1_local_6_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Set_20_Instance_20_Task_2F_Perform_case_1_local_14_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Set_20_Instance_20_Task_2F_Perform_case_1_local_14_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Get_20_Desktop(PARAMETERS,ROOT(1));

result = vpx_constant(PARAMETERS,"List Value Window",ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Find_20_Windows_20_Type,2,1,TERMINAL(1),TERMINAL(2),ROOT(3));

result = vpx_match(PARAMETERS,"( )",TERMINAL(3));
TERMINATEONSUCCESS

if( (repeatLimit = vpx_multiplex(1,TERMINAL(3))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Set_20_Instance_20_Task_2F_Perform_case_1_local_14_case_1_local_4_case_1_local_6(PARAMETERS,LIST(3),TERMINAL(0),ROOT(4));
LISTROOT(4,0)
REPEATFINISH
LISTROOTFINISH(4,0)
LISTROOTEND
} else {
ROOTEMPTY(4)
}

result = vpx_match(PARAMETERS,"( )",TERMINAL(4));
TERMINATEONSUCCESS

if( (repeatLimit = vpx_multiplex(1,TERMINAL(4))) ){
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Refresh_20_Data,1,0,LIST(4));
REPEATFINISH
} else {
}

if( (repeatLimit = vpx_multiplex(1,TERMINAL(4))) ){
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Make_20_Dirty,1,0,LIST(4));
REPEATFINISH
} else {
}

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Set_20_Instance_20_Task_2F_Perform_case_1_local_14_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Set_20_Instance_20_Task_2F_Perform_case_1_local_14_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Instance,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
NEXTCASEONSUCCESS

result = vpx_method_Set_20_Instance_20_Task_2F_Perform_case_1_local_14_case_1_local_4(PARAMETERS,TERMINAL(2));

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_Set_20_Instance_20_Task_2F_Perform_case_1_local_14_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Set_20_Instance_20_Task_2F_Perform_case_1_local_14_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_Set_20_Instance_20_Task_2F_Perform_case_1_local_14_case_3_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Set_20_Instance_20_Task_2F_Perform_case_1_local_14_case_3_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_Set_20_Instance_20_Task_2F_Perform_case_1_local_14_case_3_local_4_case_2_local_6_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Set_20_Instance_20_Task_2F_Perform_case_1_local_14_case_3_local_4_case_2_local_6_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"List Data",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_match(PARAMETERS,"Class Data",TERMINAL(5));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTER(6)
}

enum opTrigger vpx_method_Set_20_Instance_20_Task_2F_Perform_case_1_local_14_case_3_local_4_case_2_local_6_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Set_20_Instance_20_Task_2F_Perform_case_1_local_14_case_3_local_4_case_2_local_6_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;
FAILONSUCCESS

OUTPUT(0,NONE)
FOOTERWITHNONE(1)
}

enum opTrigger vpx_method_Set_20_Instance_20_Task_2F_Perform_case_1_local_14_case_3_local_4_case_2_local_6_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Set_20_Instance_20_Task_2F_Perform_case_1_local_14_case_3_local_4_case_2_local_6_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Set_20_Instance_20_Task_2F_Perform_case_1_local_14_case_3_local_4_case_2_local_6_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Set_20_Instance_20_Task_2F_Perform_case_1_local_14_case_3_local_4_case_2_local_6_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Set_20_Instance_20_Task_2F_Perform_case_1_local_14_case_3_local_4_case_2_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Set_20_Instance_20_Task_2F_Perform_case_1_local_14_case_3_local_4_case_2_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Data,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_method_Set_20_Instance_20_Task_2F_Perform_case_1_local_14_case_3_local_4_case_2_local_6_case_1_local_3(PARAMETERS,TERMINAL(3),ROOT(4));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"Class Data",ROOT(5));

result = vpx_method_Debug_20_Result(PARAMETERS,TERMINAL(0),TERMINAL(5),TERMINAL(4),NONE);

result = vpx_call_primitive(PARAMETERS,VPLP__3D_,2,0,TERMINAL(4),TERMINAL(1));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERWITHNONE(6)
}

enum opTrigger vpx_method_Set_20_Instance_20_Task_2F_Perform_case_1_local_14_case_3_local_4_case_2_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Set_20_Instance_20_Task_2F_Perform_case_1_local_14_case_3_local_4_case_2_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

OUTPUT(0,NONE)
FOOTERWITHNONE(2)
}

enum opTrigger vpx_method_Set_20_Instance_20_Task_2F_Perform_case_1_local_14_case_3_local_4_case_2_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Set_20_Instance_20_Task_2F_Perform_case_1_local_14_case_3_local_4_case_2_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Set_20_Instance_20_Task_2F_Perform_case_1_local_14_case_3_local_4_case_2_local_6_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Set_20_Instance_20_Task_2F_Perform_case_1_local_14_case_3_local_4_case_2_local_6_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Set_20_Instance_20_Task_2F_Perform_case_1_local_14_case_3_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Set_20_Instance_20_Task_2F_Perform_case_1_local_14_case_3_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Get_20_Desktop(PARAMETERS,ROOT(1));

result = vpx_constant(PARAMETERS,"List Window",ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Find_20_Windows_20_Type,2,1,TERMINAL(1),TERMINAL(2),ROOT(3));

result = vpx_match(PARAMETERS,"( )",TERMINAL(3));
TERMINATEONSUCCESS

if( (repeatLimit = vpx_multiplex(1,TERMINAL(3))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Set_20_Instance_20_Task_2F_Perform_case_1_local_14_case_3_local_4_case_2_local_6(PARAMETERS,LIST(3),TERMINAL(0),ROOT(4));
LISTROOT(4,0)
REPEATFINISH
LISTROOTFINISH(4,0)
LISTROOTEND
} else {
ROOTEMPTY(4)
}

result = vpx_match(PARAMETERS,"( )",TERMINAL(4));
TERMINATEONSUCCESS

if( (repeatLimit = vpx_multiplex(1,TERMINAL(4))) ){
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Refresh_20_Data,1,0,LIST(4));
REPEATFINISH
} else {
}

result = kSuccess;

FOOTER(5)
}

enum opTrigger vpx_method_Set_20_Instance_20_Task_2F_Perform_case_1_local_14_case_3_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Set_20_Instance_20_Task_2F_Perform_case_1_local_14_case_3_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Set_20_Instance_20_Task_2F_Perform_case_1_local_14_case_3_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Set_20_Instance_20_Task_2F_Perform_case_1_local_14_case_3_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Set_20_Instance_20_Task_2F_Perform_case_1_local_14_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Set_20_Instance_20_Task_2F_Perform_case_1_local_14_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Class,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
TERMINATEONSUCCESS

result = vpx_method_Set_20_Instance_20_Task_2F_Perform_case_1_local_14_case_3_local_4(PARAMETERS,TERMINAL(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Send_20_Refresh,1,0,TERMINAL(2));

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_Set_20_Instance_20_Task_2F_Perform_case_1_local_14(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Set_20_Instance_20_Task_2F_Perform_case_1_local_14(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Set_20_Instance_20_Task_2F_Perform_case_1_local_14_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
if(vpx_method_Set_20_Instance_20_Task_2F_Perform_case_1_local_14_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Set_20_Instance_20_Task_2F_Perform_case_1_local_14_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Set_20_Instance_20_Task_2F_Perform_case_1_local_15(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Set_20_Instance_20_Task_2F_Perform_case_1_local_15(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Container,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(2));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Make_20_Dirty,1,0,TERMINAL(2));

result = vpx_constant(PARAMETERS,"NULL",ROOT(3));

result = vpx_set(PARAMETERS,kVPXValue_Container,TERMINAL(1),TERMINAL(3),ROOT(4));

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Set_20_Instance_20_Task_2F_Perform(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(15)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Project,TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Results,TERMINAL(2),ROOT(4),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP__28_length_29_,1,1,TERMINAL(5),ROOT(6));

result = vpx_match(PARAMETERS,"2",TERMINAL(6));
TERMINATEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,2,TERMINAL(5),ROOT(7),ROOT(8));

result = vpx_constant(PARAMETERS,"string",ROOT(9));

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(3),ROOT(10),ROOT(11));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Value_20_Data,3,1,TERMINAL(11),TERMINAL(7),TERMINAL(9),ROOT(12));

result = vpx_match(PARAMETERS,"\"TRUE\"",TERMINAL(12));
TERMINATEONFAILURE

result = vpx_constant(PARAMETERS,"list",ROOT(13));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Value_20_Data,3,1,TERMINAL(11),TERMINAL(8),TERMINAL(13),ROOT(14));

result = vpx_method_Set_20_Instance_20_Task_2F_Perform_case_1_local_13(PARAMETERS,TERMINAL(0),TERMINAL(14),TERMINAL(11));

result = vpx_method_Set_20_Instance_20_Task_2F_Perform_case_1_local_14(PARAMETERS,TERMINAL(0));

result = vpx_method_Set_20_Instance_20_Task_2F_Perform_case_1_local_15(PARAMETERS,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(15)
}

/* Stop Universals */






Nat4	loadClasses_MyDebugData(V_Environment environment);
Nat4	loadClasses_MyDebugData(V_Environment environment)
{
	V_Class result = NULL;

	result = class_new("Execution Thread",environment);
	if(result == NULL) return kERROR;
	VPLC_Execution_20_Thread_class_load(result,environment);
	result = class_new("Debug State",environment);
	if(result == NULL) return kERROR;
	VPLC_Debug_20_State_class_load(result,environment);
	result = class_new("Thread Task",environment);
	if(result == NULL) return kERROR;
	VPLC_Thread_20_Task_class_load(result,environment);
	result = class_new("Interpreter",environment);
	if(result == NULL) return kERROR;
	VPLC_Interpreter_class_load(result,environment);
	result = class_new("Set Instance Task",environment);
	if(result == NULL) return kERROR;
	VPLC_Set_20_Instance_20_Task_class_load(result,environment);
	return kNOERROR;

}

Nat4	loadUniversals_MyDebugData(V_Environment environment);
Nat4	loadUniversals_MyDebugData(V_Environment environment)
{
	V_Method result = NULL;

	result = method_new("VPLCallback Handler",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLCallback_20_Handler,NULL);

	result = method_new("Execution Thread/Stack Execution",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Execution_20_Thread_2F_Stack_20_Execution,NULL);

	result = method_new("Execution Thread/Stack Termination",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Execution_20_Thread_2F_Stack_20_Termination,NULL);

	result = method_new("Execution Thread/Install Thread",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Execution_20_Thread_2F_Install_20_Thread,NULL);

	result = method_new("Execution Thread/Show Errors",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Execution_20_Thread_2F_Show_20_Errors,NULL);

	result = method_new("Execution Thread/Execute",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Execution_20_Thread_2F_Execute,NULL);

	result = method_new("Execution Thread/Return From Thread",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Execution_20_Thread_2F_Return_20_From_20_Thread,NULL);

	result = method_new("Debug State/Open Editor",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Debug_20_State_2F_Open_20_Editor,NULL);

	result = method_new("Debug State/Get Editor",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Debug_20_State_2F_Get_20_Editor,NULL);

	result = method_new("Debug State/Close Editor",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Debug_20_State_2F_Close_20_Editor,NULL);

	result = method_new("Debug State/Construct Editor",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Debug_20_State_2F_Construct_20_Editor,NULL);

	result = method_new("Debug State/Get Application",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Debug_20_State_2F_Get_20_Application,NULL);

	result = method_new("Debug State/Construct Title",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Debug_20_State_2F_Construct_20_Title,NULL);

	result = method_new("Debug State/Get Current Item",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Debug_20_State_2F_Get_20_Current_20_Item,NULL);

	result = method_new("Debug State/Get Item",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Debug_20_State_2F_Get_20_Item,NULL);

	result = method_new("Debug State/Get Current Index",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Debug_20_State_2F_Get_20_Current_20_Index,NULL);

	result = method_new("Debug State/Set Item Breakpoint",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Debug_20_State_2F_Set_20_Item_20_Breakpoint,NULL);

	result = method_new("Debug State/Handle Break",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Debug_20_State_2F_Handle_20_Break,NULL);

	result = method_new("Debug State/Set Editor",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Debug_20_State_2F_Set_20_Editor,NULL);

	result = method_new("Debug State/Set Current Operation",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Debug_20_State_2F_Set_20_Current_20_Operation,NULL);

	result = method_new("Debug State/Install Frames",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Debug_20_State_2F_Install_20_Frames,NULL);

	result = method_new("Debug State/In Current Stack",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Debug_20_State_2F_In_20_Current_20_Stack,NULL);

	result = method_new("Debug State/Remove View",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Debug_20_State_2F_Remove_20_View,NULL);

	result = method_new("Debug State/Continue",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Debug_20_State_2F_Continue,NULL);

	result = method_new("Debug State/Step Into",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Debug_20_State_2F_Step_20_Into,NULL);

	result = method_new("Debug State/Step Out",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Debug_20_State_2F_Step_20_Out,NULL);

	result = method_new("Debug State/Step Skip",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Debug_20_State_2F_Step_20_Skip,NULL);

	result = method_new("Debug State/Step",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Debug_20_State_2F_Step,NULL);

	result = method_new("Debug State/Clear Breakpoints",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Debug_20_State_2F_Clear_20_Breakpoints,NULL);

	result = method_new("Debug State/Abort",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Debug_20_State_2F_Abort,NULL);

	result = method_new("Debug State/Get All Breakpoints",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Debug_20_State_2F_Get_20_All_20_Breakpoints,NULL);

	result = method_new("Debug State/Have Row Values?",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Debug_20_State_2F_Have_20_Row_20_Values_3F_,NULL);

	result = method_new("Debug State/Have Icon Values?",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Debug_20_State_2F_Have_20_Icon_20_Values_3F_,NULL);

	result = method_new("Thread Task/Perform",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Thread_20_Task_2F_Perform,NULL);

	result = method_new("Interpreter/Open",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Interpreter_2F_Open,NULL);

	result = method_new("Interpreter/Close",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Interpreter_2F_Close,NULL);

	result = method_new("Interpreter/Post Load Processing",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Interpreter_2F_Post_20_Load_20_Processing,NULL);

	result = method_new("Interpreter/Load Bundle",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Interpreter_2F_Load_20_Bundle,NULL);

	result = method_new("Interpreter/Create Persistent",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Interpreter_2F_Create_20_Persistent,NULL);

	result = method_new("Interpreter/Destroy Persistent",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Interpreter_2F_Destroy_20_Persistent,NULL);

	result = method_new("Interpreter/Set Value",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Interpreter_2F_Set_20_Value,NULL);

	result = method_new("Interpreter/Get Value",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Interpreter_2F_Get_20_Value,NULL);

	result = method_new("Interpreter/Get Archive",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Interpreter_2F_Get_20_Archive,NULL);

	result = method_new("Interpreter/Get Value Data",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Interpreter_2F_Get_20_Value_20_Data,NULL);

	result = method_new("Interpreter/Modify Value Use",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Interpreter_2F_Modify_20_Value_20_Use,NULL);

	result = method_new("Interpreter/Simple Value?",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Interpreter_2F_Simple_20_Value_3F_,NULL);

	result = method_new("Interpreter/Object To Text",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Interpreter_2F_Object_20_To_20_Text,NULL);

	result = method_new("Interpreter/Create Class",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Interpreter_2F_Create_20_Class,NULL);

	result = method_new("Interpreter/Destroy Class",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Interpreter_2F_Destroy_20_Class,NULL);

	result = method_new("Interpreter/Set Class",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Interpreter_2F_Set_20_Class,NULL);

	result = method_new("Interpreter/Create Method",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Interpreter_2F_Create_20_Method,NULL);

	result = method_new("Interpreter/Destroy Method",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Interpreter_2F_Destroy_20_Method,NULL);

	result = method_new("Interpreter/Set Method",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Interpreter_2F_Set_20_Method,NULL);

	result = method_new("Interpreter/Create Case",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Interpreter_2F_Create_20_Case,NULL);

	result = method_new("Interpreter/Destroy Case",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Interpreter_2F_Destroy_20_Case,NULL);

	result = method_new("Interpreter/Create Operation",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Interpreter_2F_Create_20_Operation,NULL);

	result = method_new("Interpreter/Destroy Operation",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Interpreter_2F_Destroy_20_Operation,NULL);

	result = method_new("Interpreter/Set Operation",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Interpreter_2F_Set_20_Operation,NULL);

	result = method_new("Interpreter/Create Terminal",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Interpreter_2F_Create_20_Terminal,NULL);

	result = method_new("Interpreter/Destroy Terminal",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Interpreter_2F_Destroy_20_Terminal,NULL);

	result = method_new("Interpreter/Set Terminal",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Interpreter_2F_Set_20_Terminal,NULL);

	result = method_new("Interpreter/Create Root",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Interpreter_2F_Create_20_Root,NULL);

	result = method_new("Interpreter/Destroy Root",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Interpreter_2F_Destroy_20_Root,NULL);

	result = method_new("Interpreter/Set Root",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Interpreter_2F_Set_20_Root,NULL);

	result = method_new("Interpreter/Order Elements",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Interpreter_2F_Order_20_Elements,NULL);

	result = method_new("Interpreter/Get Operation Arity",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Interpreter_2F_Get_20_Operation_20_Arity,NULL);

	result = method_new("Interpreter/Create Attribute",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Interpreter_2F_Create_20_Attribute,NULL);

	result = method_new("Interpreter/Destroy Attribute",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Interpreter_2F_Destroy_20_Attribute,NULL);

	result = method_new("Interpreter/Rename Element",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Interpreter_2F_Rename_20_Element,NULL);

	result = method_new("Interpreter/Object To Value",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Interpreter_2F_Object_20_To_20_Value,NULL);

	result = method_new("Interpreter/Set Current Operation",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Interpreter_2F_Set_20_Current_20_Operation,NULL);

	result = method_new("Interpreter/Unarchive Element",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Interpreter_2F_Unarchive_20_Element,NULL);

	result = method_new("Interpreter/Post Load?",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Interpreter_2F_Post_20_Load_3F_,NULL);

	result = method_new("Interpreter/Get Class Instance",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Interpreter_2F_Get_20_Class_20_Instance,NULL);

	result = method_new("Interpreter/Set Instance Attribute",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Interpreter_2F_Set_20_Instance_20_Attribute,NULL);

	result = method_new("Interpreter/Finalize Stack",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Interpreter_2F_Finalize_20_Stack,NULL);

	result = method_new("Interpreter/Initialize Stack",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Interpreter_2F_Initialize_20_Stack,NULL);

	result = method_new("Interpreter/Advance Stack",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Interpreter_2F_Advance_20_Stack,NULL);

	result = method_new("Interpreter/Get Current Operation",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Interpreter_2F_Get_20_Current_20_Operation,NULL);

	result = method_new("Interpreter/Reset Errors",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Interpreter_2F_Reset_20_Errors,NULL);

	result = method_new("Interpreter/Get Errors",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Interpreter_2F_Get_20_Errors,NULL);

	result = method_new("Interpreter/Get Debug Window",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Interpreter_2F_Get_20_Debug_20_Window,NULL);

	result = method_new("Interpreter/Set Debug Window",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Interpreter_2F_Set_20_Debug_20_Window,NULL);

	result = method_new("Interpreter/Get IO Value",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Interpreter_2F_Get_20_IO_20_Value,NULL);

	result = method_new("Interpreter/Set IO Value",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Interpreter_2F_Set_20_IO_20_Value,NULL);

	result = method_new("Interpreter/Previous Case",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Interpreter_2F_Previous_20_Case,NULL);

	result = method_new("Interpreter/Step Into",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Interpreter_2F_Step_20_Into,NULL);

	result = method_new("Interpreter/Step Out",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Interpreter_2F_Step_20_Out,NULL);

	result = method_new("Interpreter/Has Instances?",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Interpreter_2F_Has_20_Instances_3F_,NULL);

	result = method_new("Interpreter/Get Info",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Interpreter_2F_Get_20_Info,NULL);

	result = method_new("Interpreter/Update Breakpoints",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Interpreter_2F_Update_20_Breakpoints,NULL);

	result = method_new("Interpreter/Unmark Heap",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Interpreter_2F_Unmark_20_Heap,NULL);

	result = method_new("Interpreter/Find",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Interpreter_2F_Find,NULL);

	result = method_new("Interpreter/Set Frame Breakpoint",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Interpreter_2F_Set_20_Frame_20_Breakpoint,NULL);

	result = method_new("Interpreter/Bundle Primitives",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Interpreter_2F_Bundle_20_Primitives,NULL);

	result = method_new("Interpreter/Get Watchpoint",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Interpreter_2F_Get_20_Watchpoint,NULL);

	result = method_new("Interpreter/Set Watchpoint",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Interpreter_2F_Set_20_Watchpoint,NULL);

	result = method_new("Interpreter/Clear Watchpoints",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Interpreter_2F_Clear_20_Watchpoints,NULL);

	result = method_new("Interpreter/Get Watchpoints",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Interpreter_2F_Get_20_Watchpoints,NULL);

	result = method_new("Interpreter/Mark Instances",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Interpreter_2F_Mark_20_Instances,NULL);

	result = method_new("Interpreter/Resources Changed",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Interpreter_2F_Resources_20_Changed,NULL);

	result = method_new("Set Instance Task/Perform",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Set_20_Instance_20_Task_2F_Perform,NULL);

	return kNOERROR;

}


	Nat4 tempPersistent_Interpreter_20_Mode[] = {
0000000000, 0X00000024, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X07000000, 0X50726F63, 0X65737300
	};
	Nat4 tempPersistent_Interpreter_20_Version[] = {
0000000000, 0X00000024, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X05000000, 0X312E3432, 0X32000000
	};

Nat4	loadPersistents_MyDebugData(V_Environment environment);
Nat4	loadPersistents_MyDebugData(V_Environment environment)
{
	V_Value tempPersistent = NULL;
	V_Dictionary dictionary = environment->persistentsTable;

	tempPersistent = create_persistentNode("Interpreter Mode",tempPersistent_Interpreter_20_Mode,environment);
	add_node(dictionary,tempPersistent->objectName,tempPersistent);

	tempPersistent = create_persistentNode("Interpreter Version",tempPersistent_Interpreter_20_Version,environment);
	add_node(dictionary,tempPersistent->objectName,tempPersistent);

	return kNOERROR;

}

Nat4	load_MyDebugData(V_Environment environment);
Nat4	load_MyDebugData(V_Environment environment)
{

	loadClasses_MyDebugData(environment);
	loadUniversals_MyDebugData(environment);
	loadPersistents_MyDebugData(environment);
	return kNOERROR;

}

