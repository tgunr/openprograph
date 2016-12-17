/* A VPL Section File */
/*

MP Task Service.inl.c
Copyright: 2004 Andescotia LLC

*/

#include "MartenInlineProject.h"

enum opTrigger vpx_method_TEST_20_MP_20_Task_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_TEST_20_MP_20_Task_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Is_20_Completed_3F_,1,0,TERMINAL(0));
FINISHONSUCCESS

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_TEST_20_MP_20_Task_case_1_local_4_case_2_local_4_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex);
enum opTrigger vpx_method_TEST_20_MP_20_Task_case_1_local_4_case_2_local_4_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex)
{
HEADER(1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Event!",ROOT(0));

result = vpx_call_primitive(PARAMETERS,VPLP_print,1,0,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_TEST_20_MP_20_Task_case_1_local_4_case_2_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_TEST_20_MP_20_Task_case_1_local_4_case_2_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,kMPTimeoutErr,TERMINAL(0));
TERMINATEONFAILURE

result = vpx_method_TEST_20_MP_20_Task_case_1_local_4_case_2_local_4_case_1_local_3(PARAMETERS);

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_TEST_20_MP_20_Task_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_TEST_20_MP_20_Task_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADERWITHNONE(5)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Wait_20_On_20_Queue,2,4,TERMINAL(0),NONE,ROOT(1),ROOT(2),ROOT(3),ROOT(4));

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(1));
TERMINATEONSUCCESS

result = vpx_method_TEST_20_MP_20_Task_case_1_local_4_case_2_local_4(PARAMETERS,TERMINAL(1));

result = kSuccess;

FOOTERWITHNONE(5)
}

enum opTrigger vpx_method_TEST_20_MP_20_Task_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_TEST_20_MP_20_Task_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_TEST_20_MP_20_Task_case_1_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_TEST_20_MP_20_Task_case_1_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_TEST_20_MP_20_Task(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex)
{
HEADERWITHNONE(1)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_MP_20_Task,1,1,NONE,ROOT(0));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Post_20_Task,1,0,TERMINAL(0));
TERMINATEONFAILURE

REPEATBEGIN
result = vpx_method_TEST_20_MP_20_Task_case_1_local_4(PARAMETERS,TERMINAL(0));
REPEATFINISH

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Close,1,0,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASEWITHNONE(1)
}

enum opTrigger vpx_method_TEST_20_Shell_20_Command_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0);
enum opTrigger vpx_method_TEST_20_Shell_20_Command_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0)
{
HEADER(3)
result = kSuccess;

result = vpx_constant(PARAMETERS,"gcc -c \"/Users/jaxs/hello.c\" -o \"/Users/jaxs/hello.o\"",ROOT(0));

result = vpx_constant(PARAMETERS,"Enter a sh shell command",ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_ask,2,1,TERMINAL(1),TERMINAL(0),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_TEST_20_Shell_20_Command_case_1_local_3_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_TEST_20_Shell_20_Command_case_1_local_3_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Is_20_Completed_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"Done.",ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_log_2D_string_2D_return,1,0,TERMINAL(1));

result = kSuccess;
FINISHONSUCCESS

FOOTER(2)
}

enum opTrigger vpx_method_TEST_20_Shell_20_Command_case_1_local_3_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_TEST_20_Shell_20_Command_case_1_local_3_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Busy!",ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_log_2D_string,1,0,TERMINAL(1));

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_TEST_20_Shell_20_Command_case_1_local_3_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_TEST_20_Shell_20_Command_case_1_local_3_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_TEST_20_Shell_20_Command_case_1_local_3_case_1_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_TEST_20_Shell_20_Command_case_1_local_3_case_1_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_TEST_20_Shell_20_Command_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_TEST_20_Shell_20_Command_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADERWITHNONE(4)
INPUT(0,0)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_MP_20_Shell_20_Command_20_Task,1,1,NONE,ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Post_20_Command,2,0,TERMINAL(1),TERMINAL(0));
NEXTCASEONFAILURE

REPEATBEGIN
result = vpx_method_TEST_20_Shell_20_Command_case_1_local_3_case_1_local_4(PARAMETERS,TERMINAL(1));
REPEATFINISH

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Close,1,0,TERMINAL(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Result_20_Text,1,1,TERMINAL(1),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Result_20_Code,1,1,TERMINAL(1),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
OUTPUT(1,TERMINAL(2))
FOOTERWITHNONE(4)
}

enum opTrigger vpx_method_TEST_20_Shell_20_Command_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_TEST_20_Shell_20_Command_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,paramErr,ROOT(1));

result = vpx_constant(PARAMETERS,"\"\"",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
OUTPUT(1,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_TEST_20_Shell_20_Command_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_TEST_20_Shell_20_Command_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_TEST_20_Shell_20_Command_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1))
vpx_method_TEST_20_Shell_20_Command_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1);
return outcome;
}

enum opTrigger vpx_method_TEST_20_Shell_20_Command(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex)
{
HEADER(6)
result = kSuccess;

result = vpx_method_TEST_20_Shell_20_Command_case_1_local_2(PARAMETERS,ROOT(0));

result = vpx_method_TEST_20_Shell_20_Command_case_1_local_3(PARAMETERS,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_to_2D_string,1,1,TERMINAL(1),ROOT(3));

result = vpx_constant(PARAMETERS,"10",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_from_2D_ascii,1,1,TERMINAL(4),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_show,5,0,TERMINAL(0),TERMINAL(5),TERMINAL(3),TERMINAL(5),TERMINAL(2));

result = kSuccess;

FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Find_20_Task_20_Service(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0)
{
HEADER(2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"MP Tasks",ROOT(0));

result = vpx_method_Find_20_Service(PARAMETERS,TERMINAL(0),ROOT(1));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASE(2)
}




	Nat4 tempAttribute_MP_20_Task_20_Service_2F_Name[] = {
0000000000, 0X00000028, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X08000000, 0X4D502054, 0X61736B73, 0000000000
	};
	Nat4 tempAttribute_MP_20_Task_20_Service_2F_Required_20_Services[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_MP_20_Task_20_Service_2F_Initial_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0X00010000
	};
	Nat4 tempAttribute_MP_20_Task_20_Service_2F_Active_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_MP_20_Task_20_Service_2F_Current_20_Tasks[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_MP_20_Task_20_Service_2F_Initial_20_Tasks[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_MP_20_Task_2F_Stack_20_Size[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0X00001000
	};
	Nat4 tempAttribute_MP_20_Task_2F_Error[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_MP_20_Shell_20_Command_20_Task_2F_Stack_20_Size[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0X00001000
	};
	Nat4 tempAttribute_MP_20_Shell_20_Command_20_Task_2F_Error[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_MP_20_Shell_20_Command_20_Task_2F_Command_20_Line[] = {
0000000000, 0X00000020, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0000000000, 0000000000
	};
	Nat4 tempAttribute_MP_20_Shell_20_Command_20_Task_2F_Buffer_20_Size[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000020
	};
	Nat4 tempAttribute_MP_20_Shell_20_Command_20_Task_2F_Result_20_Text[] = {
0000000000, 0X00000020, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0000000000, 0000000000
	};
	Nat4 tempAttribute_MP_20_Activity_20_Stage_20_Task_2F_Stack_20_Size[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0X00001000
	};
	Nat4 tempAttribute_MP_20_Activity_20_Stage_20_Task_2F_Error[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_MPT_20_PFAB_20_Compile_20_Sources_2F_Stack_20_Size[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0X00001000
	};
	Nat4 tempAttribute_MPT_20_PFAB_20_Compile_20_Sources_2F_Error[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_MPT_20_PFAB_20_Compile_20_Sources_2F_Text_20_Command[] = {
0000000000, 0X00000020, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0000000000, 0000000000
	};
	Nat4 tempAttribute_MPT_20_PFAB_20_Compile_20_Sources_2F_Block_20_Pages[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000018
	};
	Nat4 tempAttribute_MPT_20_PFAB_20_Compile_20_Sources_2F_Bytes_20_Read[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_MPT_20_PFAB_20_Compile_20_Sources_2F_Shell_20_Text[] = {
0000000000, 0X00000020, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0000000000, 0000000000
	};


Nat4 VPLC_MP_20_Task_20_Service_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_MP_20_Task_20_Service_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 200 300 } */
	tempAttribute = attribute_add("Name",tempClass,tempAttribute_MP_20_Task_20_Service_2F_Name,environment);
	tempAttribute = attribute_add("Required Services",tempClass,tempAttribute_MP_20_Task_20_Service_2F_Required_20_Services,environment);
	tempAttribute = attribute_add("Initial?",tempClass,tempAttribute_MP_20_Task_20_Service_2F_Initial_3F_,environment);
	tempAttribute = attribute_add("Active?",tempClass,tempAttribute_MP_20_Task_20_Service_2F_Active_3F_,environment);
	tempAttribute = attribute_add("Current Tasks",tempClass,tempAttribute_MP_20_Task_20_Service_2F_Current_20_Tasks,environment);
	tempAttribute = attribute_add("Initial Tasks",tempClass,tempAttribute_MP_20_Task_20_Service_2F_Initial_20_Tasks,environment);
	tempAttribute = attribute_add("Check Timer",tempClass,NULL,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"Service Abstract");
	return kNOERROR;
}

/* Start Universals: { 294 1076 }{ 475 322 } */
enum opTrigger vpx_method_MP_20_Task_20_Service_2F_Add_20_Current_20_Task(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Current_20_Tasks,1,1,TERMINAL(0),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_attach_2D_r,2,1,TERMINAL(2),TERMINAL(1),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Current_20_Tasks,2,0,TERMINAL(0),TERMINAL(3));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_MP_20_Task_20_Service_2F_Remove_20_Current_20_Task_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_MP_20_Task_20_Service_2F_Remove_20_Current_20_Task_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Current_20_Tasks,1,1,TERMINAL(0),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP__28_in_29_,2,1,TERMINAL(2),TERMINAL(1),ROOT(3));

result = vpx_match(PARAMETERS,"0",TERMINAL(3));
NEXTCASEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_detach_2D_nth,2,2,TERMINAL(2),TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Current_20_Tasks,2,0,TERMINAL(0),TERMINAL(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Close,1,0,TERMINAL(5));

result = kSuccess;

FOOTER(6)
}

enum opTrigger vpx_method_MP_20_Task_20_Service_2F_Remove_20_Current_20_Task_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_MP_20_Task_20_Service_2F_Remove_20_Current_20_Task_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_MP_20_Task_20_Service_2F_Remove_20_Current_20_Task(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_MP_20_Task_20_Service_2F_Remove_20_Current_20_Task_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_MP_20_Task_20_Service_2F_Remove_20_Current_20_Task_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_MP_20_Task_20_Service_2F_Add_20_Initial_20_Task(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Current_20_Tasks,1,1,TERMINAL(0),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_attach_2D_r,2,1,TERMINAL(2),TERMINAL(1),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Current_20_Tasks,2,0,TERMINAL(0),TERMINAL(3));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_MP_20_Task_20_Service_2F_Get_20_Current_20_Tasks(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Current_20_Tasks,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_MP_20_Task_20_Service_2F_Set_20_Current_20_Tasks_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_MP_20_Task_20_Service_2F_Set_20_Current_20_Tasks_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"( )",TERMINAL(1));
NEXTCASEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Start_20_Timer,1,0,TERMINAL(0));

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_MP_20_Task_20_Service_2F_Set_20_Current_20_Tasks_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_MP_20_Task_20_Service_2F_Set_20_Current_20_Tasks_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Stop_20_Timer,1,0,TERMINAL(0));

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_MP_20_Task_20_Service_2F_Set_20_Current_20_Tasks_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_MP_20_Task_20_Service_2F_Set_20_Current_20_Tasks_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_MP_20_Task_20_Service_2F_Set_20_Current_20_Tasks_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_MP_20_Task_20_Service_2F_Set_20_Current_20_Tasks_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_MP_20_Task_20_Service_2F_Set_20_Current_20_Tasks(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Current_20_Tasks,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_method_MP_20_Task_20_Service_2F_Set_20_Current_20_Tasks_case_1_local_3(PARAMETERS,TERMINAL(2),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_MP_20_Task_20_Service_2F_Get_20_Initial_20_Tasks(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Initial_20_Tasks,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_MP_20_Task_20_Service_2F_Set_20_Initial_20_Tasks(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Initial_20_Tasks,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_MP_20_Task_20_Service_2F_Check_20_Tasks_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_MP_20_Task_20_Service_2F_Check_20_Tasks_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Is_20_Completed_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(1)
}

enum opTrigger vpx_method_MP_20_Task_20_Service_2F_Check_20_Tasks_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_MP_20_Task_20_Service_2F_Check_20_Tasks_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

OUTPUT(0,NONE)
FOOTERWITHNONE(1)
}

enum opTrigger vpx_method_MP_20_Task_20_Service_2F_Check_20_Tasks_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_MP_20_Task_20_Service_2F_Check_20_Tasks_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_MP_20_Task_20_Service_2F_Check_20_Tasks_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_MP_20_Task_20_Service_2F_Check_20_Tasks_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_MP_20_Task_20_Service_2F_Check_20_Tasks(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Current_20_Tasks,1,1,TERMINAL(0),ROOT(1));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(1))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_MP_20_Task_20_Service_2F_Check_20_Tasks_case_1_local_3(PARAMETERS,LIST(1),ROOT(2));
LISTROOT(2,0)
REPEATFINISH
LISTROOTFINISH(2,0)
LISTROOTEND
} else {
ROOTEMPTY(2)
}

if( (repeatLimit = vpx_multiplex(1,TERMINAL(2))) ){
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Remove_20_Current_20_Task,2,0,TERMINAL(0),LIST(2));
REPEATFINISH
} else {
}

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_MP_20_Task_20_Service_2F_Get_20_Check_20_Timer(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Check_20_Timer,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_MP_20_Task_20_Service_2F_Set_20_Check_20_Timer(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Check_20_Timer,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_MP_20_Task_20_Service_2F_Open_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_MP_20_Task_20_Service_2F_Open_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Post_20_Initial_20_Task,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_MP_20_Task_20_Service_2F_Open_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_MP_20_Task_20_Service_2F_Open_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_MP_20_Task_20_Service_2F_Open_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_MP_20_Task_20_Service_2F_Open_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_MP_20_Task_20_Service_2F_Open_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_MP_20_Task_20_Service_2F_Open_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_MP_20_Task_20_Service_2F_Open(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Initial_20_Tasks,1,1,TERMINAL(0),ROOT(1));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(1))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_MP_20_Task_20_Service_2F_Open_case_1_local_3(PARAMETERS,LIST(1));
REPEATFINISH
} else {
}

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_MP_20_Task_20_Service_2F_Close_case_1_local_2_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_MP_20_Task_20_Service_2F_Close_case_1_local_2_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"1",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Terminate_20_Task,2,0,TERMINAL(0),TERMINAL(1));
NEXTCASEONFAILURE

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_MP_20_Task_20_Service_2F_Close_case_1_local_2_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_MP_20_Task_20_Service_2F_Close_case_1_local_2_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_MP_20_Task_20_Service_2F_Close_case_1_local_2_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_MP_20_Task_20_Service_2F_Close_case_1_local_2_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_MP_20_Task_20_Service_2F_Close_case_1_local_2_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_MP_20_Task_20_Service_2F_Close_case_1_local_2_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_MP_20_Task_20_Service_2F_Close_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_MP_20_Task_20_Service_2F_Close_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Current_20_Tasks,1,1,TERMINAL(0),ROOT(1));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(1))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_MP_20_Task_20_Service_2F_Close_case_1_local_2_case_1_local_3(PARAMETERS,LIST(1));
REPEATFINISH
} else {
}

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_MP_20_Task_20_Service_2F_Close(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_method_MP_20_Task_20_Service_2F_Close_case_1_local_2(PARAMETERS,TERMINAL(0));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Stop_20_Timer,1,0,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_MP_20_Task_20_Service_2F_Start_20_Timer(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADERWITHNONE(6)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Check_20_Timer,1,1,TERMINAL(0),ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(1));
TERMINATEONSUCCESS

result = vpx_constant(PARAMETERS,"/Check Tasks",ROOT(2));

result = vpx_method_New_20_Callback(PARAMETERS,TERMINAL(2),TERMINAL(0),NONE,ROOT(3));

result = vpx_instantiate(PARAMETERS,kVPXClass_Carbon_20_Timer_20_Callback,1,1,NONE,ROOT(4));

result = vpx_constant(PARAMETERS,"0.5",ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Schedule_20_Callback,5,0,TERMINAL(4),TERMINAL(3),TERMINAL(5),TERMINAL(5),NONE);

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Check_20_Timer,2,0,TERMINAL(0),TERMINAL(4));

result = kSuccess;

FOOTERSINGLECASEWITHNONE(6)
}

enum opTrigger vpx_method_MP_20_Task_20_Service_2F_Stop_20_Timer(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Check_20_Timer,1,1,TERMINAL(0),ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(1));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Close,1,0,TERMINAL(1));

result = vpx_constant(PARAMETERS,"NULL",ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Check_20_Timer,2,0,TERMINAL(0),TERMINAL(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

/* Stop Universals */



Nat4 VPLC_MP_20_Task_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_MP_20_Task_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 311 717 }{ 200 300 } */
	tempAttribute = attribute_add("Queue ID",tempClass,NULL,environment);
	tempAttribute = attribute_add("Task ID",tempClass,NULL,environment);
	tempAttribute = attribute_add("Stack Size",tempClass,tempAttribute_MP_20_Task_2F_Stack_20_Size,environment);
	tempAttribute = attribute_add("Error",tempClass,tempAttribute_MP_20_Task_2F_Error,environment);
	tempAttribute = attribute_add("MPTask",tempClass,NULL,environment);
	tempAttribute = attribute_add("Result Code",tempClass,NULL,environment);
/* Stop Attributes */

/* NULL SUPER CLASS */
	return kNOERROR;
}

/* Start Universals: { 112 163 }{ 622 316 } */
enum opTrigger vpx_method_MP_20_Task_2F_Do_20_Task_case_1_local_2_case_1_local_6_case_1_local_3_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0);
enum opTrigger vpx_method_MP_20_Task_2F_Do_20_Task_case_1_local_2_case_1_local_6_case_1_local_3_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0)
{
HEADER(2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"10",ROOT(0));

result = vpx_call_primitive(PARAMETERS,VPLP_from_2D_ascii,1,1,TERMINAL(0),ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_MP_20_Task_2F_Do_20_Task_case_1_local_2_case_1_local_6_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_MP_20_Task_2F_Do_20_Task_case_1_local_2_case_1_local_6_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(10)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_to_2D_string,1,1,TERMINAL(0),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_to_2D_string,1,1,TERMINAL(1),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_to_2D_string,1,1,TERMINAL(2),ROOT(5));

result = vpx_constant(PARAMETERS,"\" + \"",ROOT(6));

result = vpx_constant(PARAMETERS,"\" = \"",ROOT(7));

result = vpx_method_MP_20_Task_2F_Do_20_Task_case_1_local_2_case_1_local_6_case_1_local_3_case_1_local_7(PARAMETERS,ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,6,1,TERMINAL(3),TERMINAL(6),TERMINAL(4),TERMINAL(7),TERMINAL(5),TERMINAL(8),ROOT(9));

result = vpx_call_primitive(PARAMETERS,VPLP_print,1,0,TERMINAL(9));

result = kSuccess;

FOOTERSINGLECASE(10)
}

enum opTrigger vpx_method_MP_20_Task_2F_Do_20_Task_case_1_local_2_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_MP_20_Task_2F_Do_20_Task_case_1_local_2_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP__2B_,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_method_MP_20_Task_2F_Do_20_Task_case_1_local_2_case_1_local_6_case_1_local_3(PARAMETERS,TERMINAL(0),TERMINAL(1),TERMINAL(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_MP_20_Task_2F_Do_20_Task_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex);
enum opTrigger vpx_method_MP_20_Task_2F_Do_20_Task_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex)
{
HEADER(6)
result = kSuccess;

result = vpx_constant(PARAMETERS,"1000",ROOT(0));

result = vpx_constant(PARAMETERS,"1",ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_make_2D_list,3,1,TERMINAL(0),TERMINAL(1),TERMINAL(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_detach_2D_l,1,2,TERMINAL(2),ROOT(3),ROOT(4));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(4))) ){
REPEATBEGINWITHCOUNTER
LOOPTERMINALBEGIN(1)
LOOPTERMINAL(0,3,5)
result = vpx_method_MP_20_Task_2F_Do_20_Task_case_1_local_2_case_1_local_6(PARAMETERS,LOOP(0),LIST(4),ROOT(5));
REPEATFINISH
} else {
ROOTNULL(5,TERMINAL(3))
}

result = kSuccess;

FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_MP_20_Task_2F_Do_20_Task(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_MP_20_Task_2F_Do_20_Task_case_1_local_2(PARAMETERS);

result = vpx_extconstant(PARAMETERS,noErr,ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_MP_20_Task_2F_Post_20_Task_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_MP_20_Task_2F_Post_20_Task_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Find_20_Task_20_Service(PARAMETERS,ROOT(1));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Add_20_Current_20_Task,2,0,TERMINAL(1),TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_MP_20_Task_2F_Post_20_Task(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Create_20_Queue,1,0,TERMINAL(0));
FAILONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Task_20_Preflight,1,0,TERMINAL(0));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Create_20_Task,1,0,TERMINAL(0));

result = vpx_method_MP_20_Task_2F_Post_20_Task_case_1_local_5(PARAMETERS,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_MP_20_Task_2F_Wait_20_On_20_Queue_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_MP_20_Task_2F_Wait_20_On_20_Queue_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_integer_3F_,1,0,TERMINAL(0));
NEXTCASEONSUCCESS

result = vpx_extconstant(PARAMETERS,kDurationImmediate,ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_MP_20_Task_2F_Wait_20_On_20_Queue_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_MP_20_Task_2F_Wait_20_On_20_Queue_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(1)
}

enum opTrigger vpx_method_MP_20_Task_2F_Wait_20_On_20_Queue_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_MP_20_Task_2F_Wait_20_On_20_Queue_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_MP_20_Task_2F_Wait_20_On_20_Queue_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_MP_20_Task_2F_Wait_20_On_20_Queue_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_MP_20_Task_2F_Wait_20_On_20_Queue_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0);
enum opTrigger vpx_method_MP_20_Task_2F_Wait_20_On_20_Queue_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0)
{
HEADER(3)
result = kSuccess;

result = vpx_constant(PARAMETERS,"void",ROOT(0));

result = vpx_constant(PARAMETERS,"4",ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_make_2D_external,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_MP_20_Task_2F_Wait_20_On_20_Queue_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0);
enum opTrigger vpx_method_MP_20_Task_2F_Wait_20_On_20_Queue_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0)
{
HEADER(3)
result = kSuccess;

result = vpx_constant(PARAMETERS,"void",ROOT(0));

result = vpx_constant(PARAMETERS,"4",ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_make_2D_external,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_MP_20_Task_2F_Wait_20_On_20_Queue_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0);
enum opTrigger vpx_method_MP_20_Task_2F_Wait_20_On_20_Queue_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0)
{
HEADER(3)
result = kSuccess;

result = vpx_constant(PARAMETERS,"void",ROOT(0));

result = vpx_constant(PARAMETERS,"4",ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_make_2D_external,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_MP_20_Task_2F_Wait_20_On_20_Queue_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_MP_20_Task_2F_Wait_20_On_20_Queue_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"0",ROOT(1));

result = vpx_constant(PARAMETERS,"4",ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_integer,3,3,TERMINAL(0),TERMINAL(1),TERMINAL(2),ROOT(3),ROOT(4),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_MP_20_Task_2F_Wait_20_On_20_Queue_case_1_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_MP_20_Task_2F_Wait_20_On_20_Queue_case_1_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"0",ROOT(1));

result = vpx_constant(PARAMETERS,"4",ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_integer,3,3,TERMINAL(0),TERMINAL(1),TERMINAL(2),ROOT(3),ROOT(4),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_MP_20_Task_2F_Wait_20_On_20_Queue_case_1_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_MP_20_Task_2F_Wait_20_On_20_Queue_case_1_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"0",ROOT(1));

result = vpx_constant(PARAMETERS,"4",ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_integer,3,3,TERMINAL(0),TERMINAL(1),TERMINAL(2),ROOT(3),ROOT(4),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_MP_20_Task_2F_Wait_20_On_20_Queue(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3)
{
HEADER(15)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Queue_20_ID,1,1,TERMINAL(0),ROOT(2));

result = vpx_method_MP_20_Task_2F_Wait_20_On_20_Queue_case_1_local_3(PARAMETERS,TERMINAL(1),ROOT(3));

result = vpx_method_MP_20_Task_2F_Wait_20_On_20_Queue_case_1_local_4(PARAMETERS,ROOT(4));

result = vpx_method_MP_20_Task_2F_Wait_20_On_20_Queue_case_1_local_5(PARAMETERS,ROOT(5));

result = vpx_method_MP_20_Task_2F_Wait_20_On_20_Queue_case_1_local_6(PARAMETERS,ROOT(6));

PUTINTEGER(MPWaitOnQueue( GETPOINTER(0,OpaqueMPQueueID,*,ROOT(8),TERMINAL(2)),GETPOINTER(0,void,**,ROOT(9),TERMINAL(4)),GETPOINTER(0,void,**,ROOT(10),TERMINAL(6)),GETPOINTER(0,void,**,ROOT(11),TERMINAL(5)),GETINTEGER(TERMINAL(3))),7);
result = kSuccess;

result = vpx_method_MP_20_Task_2F_Wait_20_On_20_Queue_case_1_local_8(PARAMETERS,TERMINAL(11),ROOT(12));

result = vpx_method_MP_20_Task_2F_Wait_20_On_20_Queue_case_1_local_9(PARAMETERS,TERMINAL(10),ROOT(13));

result = vpx_method_MP_20_Task_2F_Wait_20_On_20_Queue_case_1_local_10(PARAMETERS,TERMINAL(9),ROOT(14));

result = kSuccess;

OUTPUT(0,TERMINAL(7))
OUTPUT(1,TERMINAL(14))
OUTPUT(2,TERMINAL(13))
OUTPUT(3,TERMINAL(12))
FOOTERSINGLECASE(15)
}

enum opTrigger vpx_method_MP_20_Task_2F_Notify_20_Queue(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0)
{
HEADER(10)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Queue_20_ID,1,1,TERMINAL(0),ROOT(4));

PUTINTEGER(MPNotifyQueue( GETPOINTER(0,OpaqueMPQueueID,*,ROOT(6),TERMINAL(4)),GETPOINTER(0,void,*,ROOT(7),TERMINAL(1)),GETPOINTER(0,void,*,ROOT(8),TERMINAL(2)),GETPOINTER(0,void,*,ROOT(9),TERMINAL(3))),5);
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTERSINGLECASE(10)
}

enum opTrigger vpx_method_MP_20_Task_2F_Create_20_Queue(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADERWITHNONE(3)
INPUT(0,0)
result = kSuccess;

PUTINTEGER(MPCreateQueue( GETPOINTER(0,OpaqueMPQueueID,**,ROOT(2),NONE)),1);
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Check_20_Error,2,0,TERMINAL(0),TERMINAL(1));
FAILONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Queue_20_ID,2,0,TERMINAL(0),TERMINAL(2));

result = kSuccess;

FOOTERSINGLECASEWITHNONE(3)
}

enum opTrigger vpx_method_MP_20_Task_2F_Create_20_Task_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_MP_20_Task_2F_Create_20_Task_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"/Do Task",ROOT(1));

result = vpx_constant(PARAMETERS,"DeferredTaskProcPtr",ROOT(2));

result = vpx_constant(PARAMETERS,"TaskProc",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_callback,3,1,TERMINAL(1),TERMINAL(3),TERMINAL(0),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_MP_20_Task_2F_Create_20_Task(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADERWITHNONE(16)
INPUT(0,0)
result = kSuccess;

result = vpx_method_MP_20_Task_2F_Create_20_Task_case_1_local_2(PARAMETERS,TERMINAL(0),ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Stack_20_Size,1,1,TERMINAL(0),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Queue_20_ID,1,1,TERMINAL(0),ROOT(3));

result = vpx_constant(PARAMETERS,"NULL",ROOT(4));

result = vpx_constant(PARAMETERS,"0",ROOT(5));

result = vpx_constant(PARAMETERS,"1",ROOT(6));

result = vpx_constant(PARAMETERS,"2",ROOT(7));

result = vpx_constant(PARAMETERS,"3",ROOT(8));

PUTINTEGER(MPCreateTask( GETPOINTER(4,long int,*,ROOT(10),TERMINAL(1)),GETPOINTER(0,void,*,ROOT(11),TERMINAL(4)),GETINTEGER(TERMINAL(2)),GETPOINTER(0,OpaqueMPQueueID,*,ROOT(12),TERMINAL(3)),GETPOINTER(0,void,*,ROOT(13),TERMINAL(6)),GETPOINTER(0,void,*,ROOT(14),TERMINAL(7)),GETINTEGER(TERMINAL(8)),GETPOINTER(0,OpaqueMPTaskID,**,ROOT(15),NONE)),9);
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Check_20_Error,2,0,TERMINAL(0),TERMINAL(9));
FAILONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Task_20_ID,2,0,TERMINAL(0),TERMINAL(15));

result = kSuccess;

FOOTERSINGLECASEWITHNONE(16)
}

enum opTrigger vpx_method_MP_20_Task_2F_Do_20_Completion(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Task_20_Postflight,2,0,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_MP_20_Task_2F_Delete_20_Queue(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Queue_20_ID,1,1,TERMINAL(0),ROOT(1));

PUTINTEGER(MPDeleteQueue( GETPOINTER(0,OpaqueMPQueueID,*,ROOT(3),TERMINAL(1))),2);
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Check_20_Error,2,0,TERMINAL(0),TERMINAL(2));
FAILONFAILURE

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_MP_20_Task_2F_Set_20_Queue_20_Reserve(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Queue_20_ID,1,1,TERMINAL(0),ROOT(2));

PUTINTEGER(MPSetQueueReserve( GETPOINTER(0,OpaqueMPQueueID,*,ROOT(4),TERMINAL(2)),GETINTEGER(TERMINAL(1))),3);
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Check_20_Error,2,0,TERMINAL(0),TERMINAL(3));
FAILONFAILURE

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_MP_20_Task_2F_Get_20_Current_20_Task_20_ID(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

PUTPOINTER(OpaqueMPTaskID,*,MPCurrentTaskID(),1);
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_MP_20_Task_2F_Check_20_Error(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Error,2,0,TERMINAL(0),TERMINAL(1));

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(1));
FAILONFAILURE

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_MP_20_Task_2F_Finish_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_MP_20_Task_2F_Finish_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Error,2,0,TERMINAL(0),TERMINAL(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Do_20_Completion,2,0,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_MP_20_Task_2F_Finish_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_MP_20_Task_2F_Finish_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,kMPTimeoutErr,TERMINAL(2));
FAILONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Result_20_Code,2,0,TERMINAL(0),TERMINAL(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Do_20_Completion,2,0,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_MP_20_Task_2F_Finish(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_MP_20_Task_2F_Finish_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2))
vpx_method_MP_20_Task_2F_Finish_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2);
return outcome;
}

enum opTrigger vpx_method_MP_20_Task_2F_Close_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_MP_20_Task_2F_Close_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Delete_20_Queue,1,0,TERMINAL(0));
TERMINATEONFAILURE

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_MP_20_Task_2F_Close(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_method_MP_20_Task_2F_Close_case_1_local_2(PARAMETERS,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_MP_20_Task_2F_Post_20_Initial_20_Task(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Post_20_Task,1,0,TERMINAL(0));
FAILONFAILURE

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_MP_20_Task_2F_Is_20_Completed_3F_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Is_20_Finished_3F_,1,2,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Finish,3,0,TERMINAL(0),TERMINAL(1),TERMINAL(2));
FAILONFAILURE

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_MP_20_Task_2F_Is_20_Finished_3F__case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_MP_20_Task_2F_Is_20_Finished_3F__case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"TRUE",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
OUTPUT(1,TERMINAL(1))
FOOTER(3)
}

enum opTrigger vpx_method_MP_20_Task_2F_Is_20_Finished_3F__case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_MP_20_Task_2F_Is_20_Finished_3F__case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"FALSE",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
OUTPUT(1,TERMINAL(0))
FOOTER(3)
}

enum opTrigger vpx_method_MP_20_Task_2F_Is_20_Finished_3F__case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_MP_20_Task_2F_Is_20_Finished_3F__case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_MP_20_Task_2F_Is_20_Finished_3F__case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1))
vpx_method_MP_20_Task_2F_Is_20_Finished_3F__case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1);
return outcome;
}

enum opTrigger vpx_method_MP_20_Task_2F_Is_20_Finished_3F_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADERWITHNONE(7)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Wait_20_On_20_Queue,2,4,TERMINAL(0),NONE,ROOT(1),ROOT(2),ROOT(3),ROOT(4));

result = vpx_method_MP_20_Task_2F_Is_20_Finished_3F__case_1_local_3(PARAMETERS,TERMINAL(1),TERMINAL(4),ROOT(5),ROOT(6));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
OUTPUT(1,TERMINAL(6))
FOOTERSINGLECASEWITHNONE(7)
}

enum opTrigger vpx_method_MP_20_Task_2F_Is_20_Current_3F_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Task_20_ID,1,1,TERMINAL(0),ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Current_20_Task_20_ID,1,1,TERMINAL(0),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP__3D_,2,1,TERMINAL(1),TERMINAL(2),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_MP_20_Task_2F_Is_20_Preemptive_3F_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Task_20_ID,1,1,TERMINAL(0),ROOT(1));

PUTINTEGER(MPTaskIsPreemptive( GETPOINTER(0,OpaqueMPTaskID,*,ROOT(3),TERMINAL(1))),2);
result = kSuccess;

result = vpx_constant(PARAMETERS,"0",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP__E289A0_,2,1,TERMINAL(2),TERMINAL(4),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_MP_20_Task_2F_Set_20_Task_20_Type(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Task_20_ID,1,1,TERMINAL(0),ROOT(2));

PUTINTEGER(MPSetTaskType( GETPOINTER(0,OpaqueMPTaskID,*,ROOT(4),TERMINAL(2)),GETINTEGER(TERMINAL(1))),3);
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Check_20_Error,2,0,TERMINAL(0),TERMINAL(3));
FAILONFAILURE

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_MP_20_Task_2F_Set_20_Task_20_Weight(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Task_20_ID,1,1,TERMINAL(0),ROOT(2));

PUTINTEGER(MPSetTaskWeight( GETPOINTER(0,OpaqueMPTaskID,*,ROOT(4),TERMINAL(2)),GETINTEGER(TERMINAL(1))),3);
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Check_20_Error,2,0,TERMINAL(2),TERMINAL(3));
FAILONFAILURE

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_MP_20_Task_2F_Exit_20_This_20_Task_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_MP_20_Task_2F_Exit_20_This_20_Task_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Is_20_Current_3F_,1,1,TERMINAL(0),ROOT(2));

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(2));
NEXTCASEONFAILURE

MPExit( GETINTEGER(TERMINAL(1)));
result = kSuccess;

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_MP_20_Task_2F_Exit_20_This_20_Task_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_MP_20_Task_2F_Exit_20_This_20_Task_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_MP_20_Task_2F_Exit_20_This_20_Task(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_MP_20_Task_2F_Exit_20_This_20_Task_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_MP_20_Task_2F_Exit_20_This_20_Task_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_MP_20_Task_2F_Terminate_20_Task(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Task_20_ID,1,1,TERMINAL(0),ROOT(2));

PUTINTEGER(MPTerminateTask( GETPOINTER(0,OpaqueMPTaskID,*,ROOT(4),TERMINAL(2)),GETINTEGER(TERMINAL(1))),3);
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Check_20_Error,2,0,TERMINAL(0),TERMINAL(3));
FAILONFAILURE

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_MP_20_Task_2F_Yield(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

MPYield();
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_MP_20_Task_2F_Get_20_Queue_20_ID(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Queue_20_ID,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_MP_20_Task_2F_Set_20_Queue_20_ID(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Queue_20_ID,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_MP_20_Task_2F_Get_20_Task_20_ID(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Task_20_ID,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_MP_20_Task_2F_Set_20_Task_20_ID(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Task_20_ID,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_MP_20_Task_2F_Get_20_Stack_20_Size(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Stack_20_Size,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_MP_20_Task_2F_Set_20_Stack_20_Size(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Stack_20_Size,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_MP_20_Task_2F_Get_20_Error(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Error,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_MP_20_Task_2F_Set_20_Error(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Error,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_MP_20_Task_2F_Get_20_MPTask(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_MPTask,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_MP_20_Task_2F_Set_20_MPTask(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_MPTask,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_MP_20_Task_2F_Get_20_Result_20_Code(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Result_20_Code,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_MP_20_Task_2F_Set_20_Result_20_Code(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Result_20_Code,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_MP_20_Task_2F_Task_20_Preflight(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_MP_20_Task_2F_Task_20_Postflight(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(2)
}

/* Stop Universals */



Nat4 VPLC_MP_20_Shell_20_Command_20_Task_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_MP_20_Shell_20_Command_20_Task_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 336 501 }{ 202 300 } */
	tempAttribute = attribute_add("Queue ID",tempClass,NULL,environment);
	tempAttribute = attribute_add("Task ID",tempClass,NULL,environment);
	tempAttribute = attribute_add("Stack Size",tempClass,tempAttribute_MP_20_Shell_20_Command_20_Task_2F_Stack_20_Size,environment);
	tempAttribute = attribute_add("Error",tempClass,tempAttribute_MP_20_Shell_20_Command_20_Task_2F_Error,environment);
	tempAttribute = attribute_add("MPTask",tempClass,NULL,environment);
	tempAttribute = attribute_add("Result Code",tempClass,NULL,environment);
	tempAttribute = attribute_add("Command Line",tempClass,tempAttribute_MP_20_Shell_20_Command_20_Task_2F_Command_20_Line,environment);
	tempAttribute = attribute_add("Buffer Size",tempClass,tempAttribute_MP_20_Shell_20_Command_20_Task_2F_Buffer_20_Size,environment);
	tempAttribute = attribute_add("Result Text",tempClass,tempAttribute_MP_20_Shell_20_Command_20_Task_2F_Result_20_Text,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"MP Task");
	return kNOERROR;
}

/* Start Universals: { 450 805 }{ 281 314 } */
enum opTrigger vpx_method_MP_20_Shell_20_Command_20_Task_2F_Do_20_Task_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_MP_20_Shell_20_Command_20_Task_2F_Do_20_Task_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(18)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"r",ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Command_20_Line,1,1,TERMINAL(0),ROOT(3));

PUTPOINTER(__sFILE,*,popen( GETCONSTPOINTER(char,*,TERMINAL(3)),GETCONSTPOINTER(char,*,TERMINAL(2))),4);
result = kSuccess;

result = vpx_constant(PARAMETERS,"1",ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Buffer_20_Size,1,1,TERMINAL(0),ROOT(6));

result = vpx_call_evaluate(PARAMETERS,"A*1024",1,1,TERMINAL(6),ROOT(7));

PUTPOINTER(void,*,calloc( GETINTEGER(TERMINAL(7)),GETINTEGER(TERMINAL(5))),8);
result = kSuccess;

PUTINTEGER(fread( GETPOINTER(0,void,*,ROOT(10),TERMINAL(8)),GETINTEGER(TERMINAL(7)),GETINTEGER(TERMINAL(5)),GETPOINTER(88,__sFILE,*,ROOT(11),TERMINAL(4))),9);
result = kSuccess;

PUTINTEGER(pclose( GETPOINTER(88,__sFILE,*,ROOT(13),TERMINAL(4))),12);
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Result_20_Code,2,0,TERMINAL(0),TERMINAL(12));

result = vpx_constant(PARAMETERS,"0",ROOT(14));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_text,3,3,TERMINAL(8),TERMINAL(14),TERMINAL(7),ROOT(15),ROOT(16),ROOT(17));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Result_20_Text,2,0,TERMINAL(0),TERMINAL(17));

result = kSuccess;

OUTPUT(0,TERMINAL(12))
FOOTERSINGLECASE(18)
}

enum opTrigger vpx_method_MP_20_Shell_20_Command_20_Task_2F_Do_20_Task(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_MP_20_Shell_20_Command_20_Task_2F_Do_20_Task_case_1_local_2(PARAMETERS,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_MP_20_Shell_20_Command_20_Task_2F_Post_20_Command(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Command_20_Line,2,0,TERMINAL(0),TERMINAL(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Post_20_Task,1,0,TERMINAL(0));
FAILONFAILURE

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_MP_20_Shell_20_Command_20_Task_2F_Get_20_Command_20_Line(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Command_20_Line,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_MP_20_Shell_20_Command_20_Task_2F_Set_20_Command_20_Line(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Command_20_Line,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_MP_20_Shell_20_Command_20_Task_2F_Get_20_Buffer_20_Size(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Buffer_20_Size,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_MP_20_Shell_20_Command_20_Task_2F_Set_20_Buffer_20_Size(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Buffer_20_Size,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_MP_20_Shell_20_Command_20_Task_2F_Get_20_Result_20_Text(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Result_20_Text,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_MP_20_Shell_20_Command_20_Task_2F_Set_20_Result_20_Text(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Result_20_Text,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

/* Stop Universals */



Nat4 VPLC_MP_20_Activity_20_Stage_20_Task_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_MP_20_Activity_20_Stage_20_Task_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 235 834 }{ 200 300 } */
	tempAttribute = attribute_add("Queue ID",tempClass,NULL,environment);
	tempAttribute = attribute_add("Task ID",tempClass,NULL,environment);
	tempAttribute = attribute_add("Stack Size",tempClass,tempAttribute_MP_20_Activity_20_Stage_20_Task_2F_Stack_20_Size,environment);
	tempAttribute = attribute_add("Error",tempClass,tempAttribute_MP_20_Activity_20_Stage_20_Task_2F_Error,environment);
	tempAttribute = attribute_add("MPTask",tempClass,NULL,environment);
	tempAttribute = attribute_add("Result Code",tempClass,NULL,environment);
	tempAttribute = attribute_add("Stage",tempClass,NULL,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"MP Task");
	return kNOERROR;
}

/* Start Universals: { 60 60 }{ 200 300 } */
/* Stop Universals */



Nat4 VPLC_MPT_20_PFAB_20_Compile_20_Sources_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_MPT_20_PFAB_20_Compile_20_Sources_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 266 530 }{ 321 300 } */
	tempAttribute = attribute_add("Queue ID",tempClass,NULL,environment);
	tempAttribute = attribute_add("Task ID",tempClass,NULL,environment);
	tempAttribute = attribute_add("Stack Size",tempClass,tempAttribute_MPT_20_PFAB_20_Compile_20_Sources_2F_Stack_20_Size,environment);
	tempAttribute = attribute_add("Error",tempClass,tempAttribute_MPT_20_PFAB_20_Compile_20_Sources_2F_Error,environment);
	tempAttribute = attribute_add("MPTask",tempClass,NULL,environment);
	tempAttribute = attribute_add("Result Code",tempClass,NULL,environment);
	tempAttribute = attribute_add("Stage",tempClass,NULL,environment);
	tempAttribute = attribute_add("Command",tempClass,NULL,environment);
	tempAttribute = attribute_add("Text Command",tempClass,tempAttribute_MPT_20_PFAB_20_Compile_20_Sources_2F_Text_20_Command,environment);
	tempAttribute = attribute_add("Block Pages",tempClass,tempAttribute_MPT_20_PFAB_20_Compile_20_Sources_2F_Block_20_Pages,environment);
	tempAttribute = attribute_add("BlockPtr",tempClass,NULL,environment);
	tempAttribute = attribute_add("Bytes Read",tempClass,tempAttribute_MPT_20_PFAB_20_Compile_20_Sources_2F_Bytes_20_Read,environment);
	tempAttribute = attribute_add("Shell Result",tempClass,NULL,environment);
	tempAttribute = attribute_add("Shell Text",tempClass,tempAttribute_MPT_20_PFAB_20_Compile_20_Sources_2F_Shell_20_Text,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"MP Activity Stage Task");
	return kNOERROR;
}

/* Start Universals: { 346 908 }{ 450 309 } */
enum opTrigger vpx_method_MPT_20_PFAB_20_Compile_20_Sources_2F_Create_20_Task(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(8)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_BlockPtr,1,1,TERMINAL(0),ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Shell_20_Result,1,1,TERMINAL(0),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Queue_20_ID,1,1,TERMINAL(0),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Stack_20_Size,1,1,TERMINAL(0),ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Text_20_Command,1,1,TERMINAL(0),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_thread_2D_command,5,2,TERMINAL(5),TERMINAL(4),TERMINAL(3),TERMINAL(2),TERMINAL(1),ROOT(6),ROOT(7));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Check_20_Error,2,0,TERMINAL(0),TERMINAL(6));
FAILONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Task_20_ID,2,0,TERMINAL(0),TERMINAL(7));

result = kSuccess;

FOOTERSINGLECASE(8)
}

enum opTrigger vpx_method_MPT_20_PFAB_20_Compile_20_Sources_2F_Task_20_Preflight_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_MPT_20_PFAB_20_Compile_20_Sources_2F_Task_20_Preflight_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Block_20_Size,1,1,TERMINAL(0),ROOT(1));

result = vpx_constant(PARAMETERS,"char",ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_make_2D_external,2,1,TERMINAL(2),TERMINAL(1),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_BlockPtr,2,0,TERMINAL(0),TERMINAL(3));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_MPT_20_PFAB_20_Compile_20_Sources_2F_Task_20_Preflight_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_MPT_20_PFAB_20_Compile_20_Sources_2F_Task_20_Preflight_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Command,1,1,TERMINAL(0),ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Form_20_Command_20_Text,1,1,TERMINAL(1),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Text_20_Command,2,0,TERMINAL(0),TERMINAL(2));

result = vpx_constant(PARAMETERS,"\"Executing Command: \"",ROOT(3));

result = vpx_constant(PARAMETERS,"2",ROOT(4));

result = vpx_method_Debug_20_Result(PARAMETERS,TERMINAL(0),TERMINAL(3),TERMINAL(2),TERMINAL(4));

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_MPT_20_PFAB_20_Compile_20_Sources_2F_Task_20_Preflight_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_MPT_20_PFAB_20_Compile_20_Sources_2F_Task_20_Preflight_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"4",ROOT(1));

result = vpx_constant(PARAMETERS,"int",ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_make_2D_external,2,1,TERMINAL(2),TERMINAL(1),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Shell_20_Result,2,0,TERMINAL(0),TERMINAL(3));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_MPT_20_PFAB_20_Compile_20_Sources_2F_Task_20_Preflight(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_method_MPT_20_PFAB_20_Compile_20_Sources_2F_Task_20_Preflight_case_1_local_2(PARAMETERS,TERMINAL(0));

result = vpx_method_MPT_20_PFAB_20_Compile_20_Sources_2F_Task_20_Preflight_case_1_local_3(PARAMETERS,TERMINAL(0));

result = vpx_method_MPT_20_PFAB_20_Compile_20_Sources_2F_Task_20_Preflight_case_1_local_4(PARAMETERS,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_MPT_20_PFAB_20_Compile_20_Sources_2F_Task_20_Postflight_case_1_local_2_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_MPT_20_PFAB_20_Compile_20_Sources_2F_Task_20_Postflight_case_1_local_2_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(8)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_BlockPtr,1,1,TERMINAL(0),ROOT(1));

result = vpx_constant(PARAMETERS,"0",ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Bytes_20_Read,1,1,TERMINAL(0),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_text,3,3,TERMINAL(1),TERMINAL(2),TERMINAL(3),ROOT(4),ROOT(5),ROOT(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Command,1,1,TERMINAL(0),ROOT(7));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Result_20_Text,2,0,TERMINAL(7),TERMINAL(6));

result = kSuccess;

FOOTERSINGLECASE(8)
}

enum opTrigger vpx_method_MPT_20_PFAB_20_Compile_20_Sources_2F_Task_20_Postflight_case_1_local_2_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_MPT_20_PFAB_20_Compile_20_Sources_2F_Task_20_Postflight_case_1_local_2_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Error,1,1,TERMINAL(0),ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Command,1,1,TERMINAL(0),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Result,2,0,TERMINAL(2),TERMINAL(1));

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_MPT_20_PFAB_20_Compile_20_Sources_2F_Task_20_Postflight_case_1_local_2_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_MPT_20_PFAB_20_Compile_20_Sources_2F_Task_20_Postflight_case_1_local_2_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(8)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Shell_20_Result,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
TERMINATEONSUCCESS

result = vpx_constant(PARAMETERS,"0",ROOT(2));

result = vpx_constant(PARAMETERS,"4",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_integer,3,3,TERMINAL(1),TERMINAL(2),TERMINAL(3),ROOT(4),ROOT(5),ROOT(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Command,1,1,TERMINAL(0),ROOT(7));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Result,2,0,TERMINAL(7),TERMINAL(6));

result = kSuccess;

FOOTER(8)
}

enum opTrigger vpx_method_MPT_20_PFAB_20_Compile_20_Sources_2F_Task_20_Postflight_case_1_local_2_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_MPT_20_PFAB_20_Compile_20_Sources_2F_Task_20_Postflight_case_1_local_2_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_MPT_20_PFAB_20_Compile_20_Sources_2F_Task_20_Postflight_case_1_local_2_case_1_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_MPT_20_PFAB_20_Compile_20_Sources_2F_Task_20_Postflight_case_1_local_2_case_1_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_MPT_20_PFAB_20_Compile_20_Sources_2F_Task_20_Postflight_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_MPT_20_PFAB_20_Compile_20_Sources_2F_Task_20_Postflight_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(0));
TERMINATEONFAILURE

result = vpx_method_MPT_20_PFAB_20_Compile_20_Sources_2F_Task_20_Postflight_case_1_local_2_case_1_local_3(PARAMETERS,TERMINAL(1));

result = vpx_method_MPT_20_PFAB_20_Compile_20_Sources_2F_Task_20_Postflight_case_1_local_2_case_1_local_4(PARAMETERS,TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_MPT_20_PFAB_20_Compile_20_Sources_2F_Task_20_Postflight_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_MPT_20_PFAB_20_Compile_20_Sources_2F_Task_20_Postflight_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_BlockPtr,2,0,TERMINAL(0),TERMINAL(1));

result = vpx_constant(PARAMETERS,"NULL",ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Shell_20_Result,2,0,TERMINAL(0),TERMINAL(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_MPT_20_PFAB_20_Compile_20_Sources_2F_Task_20_Postflight(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_MPT_20_PFAB_20_Compile_20_Sources_2F_Task_20_Postflight_case_1_local_2(PARAMETERS,TERMINAL(1),TERMINAL(0));

result = vpx_method_MPT_20_PFAB_20_Compile_20_Sources_2F_Task_20_Postflight_case_1_local_3(PARAMETERS,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_MPT_20_PFAB_20_Compile_20_Sources_2F_Post_20_Command_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_MPT_20_PFAB_20_Compile_20_Sources_2F_Post_20_Command_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_MP_20_Task,TERMINAL(1),TERMINAL(0),ROOT(3));

result = vpx_set(PARAMETERS,kVPXValue_Stage,TERMINAL(0),TERMINAL(1),ROOT(4));

result = vpx_set(PARAMETERS,kVPXValue_Command,TERMINAL(0),TERMINAL(2),ROOT(5));

result = kSuccess;

FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_MPT_20_PFAB_20_Compile_20_Sources_2F_Post_20_Command(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_method_MPT_20_PFAB_20_Compile_20_Sources_2F_Post_20_Command_case_1_local_2(PARAMETERS,TERMINAL(0),TERMINAL(1),TERMINAL(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Post_20_Task,1,0,TERMINAL(0));
FAILONFAILURE

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_MPT_20_PFAB_20_Compile_20_Sources_2F_Do_20_Task_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_MPT_20_PFAB_20_Compile_20_Sources_2F_Do_20_Task_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,noErr,ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_MPT_20_PFAB_20_Compile_20_Sources_2F_Do_20_Task_case_2_local_2_case_1_local_12(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_MPT_20_PFAB_20_Compile_20_Sources_2F_Do_20_Task_case_2_local_2_case_1_local_12(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Shell_20_Result,1,1,TERMINAL(0),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
TERMINATEONSUCCESS

result = vpx_constant(PARAMETERS,"4",ROOT(3));

result = vpx_constant(PARAMETERS,"0",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_put_2D_integer,4,2,TERMINAL(2),TERMINAL(4),TERMINAL(3),TERMINAL(1),ROOT(5),ROOT(6));

result = kSuccess;

FOOTERSINGLECASE(7)
}

enum opTrigger vpx_method_MPT_20_PFAB_20_Compile_20_Sources_2F_Do_20_Task_case_2_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_MPT_20_PFAB_20_Compile_20_Sources_2F_Do_20_Task_case_2_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(12)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"r",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Text_20_Command,1,1,TERMINAL(0),ROOT(2));

PUTPOINTER(__sFILE,*,popen( GETCONSTPOINTER(char,*,TERMINAL(2)),GETCONSTPOINTER(char,*,TERMINAL(1))),3);
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
FAILONSUCCESS

result = vpx_constant(PARAMETERS,"1",ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Block_20_Size,1,1,TERMINAL(0),ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_BlockPtr,1,1,TERMINAL(0),ROOT(6));

PUTINTEGER(fread( GETPOINTER(0,void,*,ROOT(8),TERMINAL(6)),GETINTEGER(TERMINAL(4)),GETINTEGER(TERMINAL(5)),GETPOINTER(88,__sFILE,*,ROOT(9),TERMINAL(3))),7);
result = kSuccess;

PUTINTEGER(pclose( GETPOINTER(88,__sFILE,*,ROOT(11),TERMINAL(3))),10);
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Bytes_20_Read,2,0,TERMINAL(0),TERMINAL(7));

result = vpx_method_MPT_20_PFAB_20_Compile_20_Sources_2F_Do_20_Task_case_2_local_2_case_1_local_12(PARAMETERS,TERMINAL(0),TERMINAL(10));

result = kSuccess;

FOOTERSINGLECASE(12)
}

enum opTrigger vpx_method_MPT_20_PFAB_20_Compile_20_Sources_2F_Do_20_Task_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_MPT_20_PFAB_20_Compile_20_Sources_2F_Do_20_Task_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_MPT_20_PFAB_20_Compile_20_Sources_2F_Do_20_Task_case_2_local_2(PARAMETERS,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_extconstant(PARAMETERS,noErr,ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_MPT_20_PFAB_20_Compile_20_Sources_2F_Do_20_Task_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_MPT_20_PFAB_20_Compile_20_Sources_2F_Do_20_Task_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,paramErr,ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_MPT_20_PFAB_20_Compile_20_Sources_2F_Do_20_Task_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_MPT_20_PFAB_20_Compile_20_Sources_2F_Do_20_Task_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Command,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(3));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Run_20_Sync,1,2,TERMINAL(3),ROOT(4),ROOT(5));
NEXTCASEONFAILURE

result = vpx_extconstant(PARAMETERS,noErr,ROOT(6));

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTER(7)
}

enum opTrigger vpx_method_MPT_20_PFAB_20_Compile_20_Sources_2F_Do_20_Task(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_MPT_20_PFAB_20_Compile_20_Sources_2F_Do_20_Task_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
if(vpx_method_MPT_20_PFAB_20_Compile_20_Sources_2F_Do_20_Task_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
if(vpx_method_MPT_20_PFAB_20_Compile_20_Sources_2F_Do_20_Task_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_MPT_20_PFAB_20_Compile_20_Sources_2F_Do_20_Task_case_4(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_MPT_20_PFAB_20_Compile_20_Sources_2F_Get_20_Command(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Command,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_MPT_20_PFAB_20_Compile_20_Sources_2F_Set_20_Command(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Command,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_MPT_20_PFAB_20_Compile_20_Sources_2F_Get_20_Text_20_Command(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Text_20_Command,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_MPT_20_PFAB_20_Compile_20_Sources_2F_Set_20_Text_20_Command(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Text_20_Command,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_MPT_20_PFAB_20_Compile_20_Sources_2F_Get_20_Block_20_Pages(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Block_20_Pages,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_MPT_20_PFAB_20_Compile_20_Sources_2F_Set_20_Block_20_Pages(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Block_20_Pages,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_MPT_20_PFAB_20_Compile_20_Sources_2F_Get_20_BlockPtr(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_BlockPtr,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_MPT_20_PFAB_20_Compile_20_Sources_2F_Set_20_BlockPtr(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_BlockPtr,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_MPT_20_PFAB_20_Compile_20_Sources_2F_Get_20_Shell_20_Result(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Shell_20_Result,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_MPT_20_PFAB_20_Compile_20_Sources_2F_Set_20_Shell_20_Result(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Shell_20_Result,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_MPT_20_PFAB_20_Compile_20_Sources_2F_Get_20_Shell_20_Text(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Shell_20_Text,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_MPT_20_PFAB_20_Compile_20_Sources_2F_Set_20_Shell_20_Text(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Shell_20_Text,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_MPT_20_PFAB_20_Compile_20_Sources_2F_Get_20_Block_20_Size(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Block_20_Pages,1,1,TERMINAL(0),ROOT(1));

result = vpx_call_evaluate(PARAMETERS,"1024*A",1,1,TERMINAL(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_MPT_20_PFAB_20_Compile_20_Sources_2F_Get_20_Bytes_20_Read(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Bytes_20_Read,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_MPT_20_PFAB_20_Compile_20_Sources_2F_Set_20_Bytes_20_Read(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Bytes_20_Read,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

/* Stop Universals */






Nat4	loadClasses_MP_20_Task_20_Service(V_Environment environment);
Nat4	loadClasses_MP_20_Task_20_Service(V_Environment environment)
{
	V_Class result = NULL;

	result = class_new("MP Task Service",environment);
	if(result == NULL) return kERROR;
	VPLC_MP_20_Task_20_Service_class_load(result,environment);
	result = class_new("MP Task",environment);
	if(result == NULL) return kERROR;
	VPLC_MP_20_Task_class_load(result,environment);
	result = class_new("MP Shell Command Task",environment);
	if(result == NULL) return kERROR;
	VPLC_MP_20_Shell_20_Command_20_Task_class_load(result,environment);
	result = class_new("MP Activity Stage Task",environment);
	if(result == NULL) return kERROR;
	VPLC_MP_20_Activity_20_Stage_20_Task_class_load(result,environment);
	result = class_new("MPT PFAB Compile Sources",environment);
	if(result == NULL) return kERROR;
	VPLC_MPT_20_PFAB_20_Compile_20_Sources_class_load(result,environment);
	return kNOERROR;

}

Nat4	loadUniversals_MP_20_Task_20_Service(V_Environment environment);
Nat4	loadUniversals_MP_20_Task_20_Service(V_Environment environment)
{
	V_Method result = NULL;

	result = method_new("TEST MP Task",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_TEST_20_MP_20_Task,NULL);

	result = method_new("TEST Shell Command",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_TEST_20_Shell_20_Command,NULL);

	result = method_new("Find Task Service",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Find_20_Task_20_Service,NULL);

	result = method_new("MP Task Service/Add Current Task",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MP_20_Task_20_Service_2F_Add_20_Current_20_Task,NULL);

	result = method_new("MP Task Service/Remove Current Task",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MP_20_Task_20_Service_2F_Remove_20_Current_20_Task,NULL);

	result = method_new("MP Task Service/Add Initial Task",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MP_20_Task_20_Service_2F_Add_20_Initial_20_Task,NULL);

	result = method_new("MP Task Service/Get Current Tasks",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MP_20_Task_20_Service_2F_Get_20_Current_20_Tasks,NULL);

	result = method_new("MP Task Service/Set Current Tasks",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MP_20_Task_20_Service_2F_Set_20_Current_20_Tasks,NULL);

	result = method_new("MP Task Service/Get Initial Tasks",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MP_20_Task_20_Service_2F_Get_20_Initial_20_Tasks,NULL);

	result = method_new("MP Task Service/Set Initial Tasks",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MP_20_Task_20_Service_2F_Set_20_Initial_20_Tasks,NULL);

	result = method_new("MP Task Service/Check Tasks",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MP_20_Task_20_Service_2F_Check_20_Tasks,NULL);

	result = method_new("MP Task Service/Get Check Timer",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MP_20_Task_20_Service_2F_Get_20_Check_20_Timer,NULL);

	result = method_new("MP Task Service/Set Check Timer",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MP_20_Task_20_Service_2F_Set_20_Check_20_Timer,NULL);

	result = method_new("MP Task Service/Open",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MP_20_Task_20_Service_2F_Open,NULL);

	result = method_new("MP Task Service/Close",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MP_20_Task_20_Service_2F_Close,NULL);

	result = method_new("MP Task Service/Start Timer",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MP_20_Task_20_Service_2F_Start_20_Timer,NULL);

	result = method_new("MP Task Service/Stop Timer",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MP_20_Task_20_Service_2F_Stop_20_Timer,NULL);

	result = method_new("MP Task/Do Task",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MP_20_Task_2F_Do_20_Task,NULL);

	result = method_new("MP Task/Post Task",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MP_20_Task_2F_Post_20_Task,NULL);

	result = method_new("MP Task/Wait On Queue",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MP_20_Task_2F_Wait_20_On_20_Queue,NULL);

	result = method_new("MP Task/Notify Queue",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MP_20_Task_2F_Notify_20_Queue,NULL);

	result = method_new("MP Task/Create Queue",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MP_20_Task_2F_Create_20_Queue,NULL);

	result = method_new("MP Task/Create Task",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MP_20_Task_2F_Create_20_Task,NULL);

	result = method_new("MP Task/Do Completion",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MP_20_Task_2F_Do_20_Completion,NULL);

	result = method_new("MP Task/Delete Queue",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MP_20_Task_2F_Delete_20_Queue,NULL);

	result = method_new("MP Task/Set Queue Reserve",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MP_20_Task_2F_Set_20_Queue_20_Reserve,NULL);

	result = method_new("MP Task/Get Current Task ID",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MP_20_Task_2F_Get_20_Current_20_Task_20_ID,NULL);

	result = method_new("MP Task/Check Error",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MP_20_Task_2F_Check_20_Error,NULL);

	result = method_new("MP Task/Finish",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MP_20_Task_2F_Finish,NULL);

	result = method_new("MP Task/Close",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MP_20_Task_2F_Close,NULL);

	result = method_new("MP Task/Post Initial Task",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MP_20_Task_2F_Post_20_Initial_20_Task,NULL);

	result = method_new("MP Task/Is Completed?",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MP_20_Task_2F_Is_20_Completed_3F_,NULL);

	result = method_new("MP Task/Is Finished?",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MP_20_Task_2F_Is_20_Finished_3F_,NULL);

	result = method_new("MP Task/Is Current?",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MP_20_Task_2F_Is_20_Current_3F_,NULL);

	result = method_new("MP Task/Is Preemptive?",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MP_20_Task_2F_Is_20_Preemptive_3F_,NULL);

	result = method_new("MP Task/Set Task Type",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MP_20_Task_2F_Set_20_Task_20_Type,NULL);

	result = method_new("MP Task/Set Task Weight",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MP_20_Task_2F_Set_20_Task_20_Weight,NULL);

	result = method_new("MP Task/Exit This Task",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MP_20_Task_2F_Exit_20_This_20_Task,NULL);

	result = method_new("MP Task/Terminate Task",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MP_20_Task_2F_Terminate_20_Task,NULL);

	result = method_new("MP Task/Yield",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MP_20_Task_2F_Yield,NULL);

	result = method_new("MP Task/Get Queue ID",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MP_20_Task_2F_Get_20_Queue_20_ID,NULL);

	result = method_new("MP Task/Set Queue ID",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MP_20_Task_2F_Set_20_Queue_20_ID,NULL);

	result = method_new("MP Task/Get Task ID",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MP_20_Task_2F_Get_20_Task_20_ID,NULL);

	result = method_new("MP Task/Set Task ID",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MP_20_Task_2F_Set_20_Task_20_ID,NULL);

	result = method_new("MP Task/Get Stack Size",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MP_20_Task_2F_Get_20_Stack_20_Size,NULL);

	result = method_new("MP Task/Set Stack Size",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MP_20_Task_2F_Set_20_Stack_20_Size,NULL);

	result = method_new("MP Task/Get Error",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MP_20_Task_2F_Get_20_Error,NULL);

	result = method_new("MP Task/Set Error",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MP_20_Task_2F_Set_20_Error,NULL);

	result = method_new("MP Task/Get MPTask",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MP_20_Task_2F_Get_20_MPTask,NULL);

	result = method_new("MP Task/Set MPTask",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MP_20_Task_2F_Set_20_MPTask,NULL);

	result = method_new("MP Task/Get Result Code",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MP_20_Task_2F_Get_20_Result_20_Code,NULL);

	result = method_new("MP Task/Set Result Code",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MP_20_Task_2F_Set_20_Result_20_Code,NULL);

	result = method_new("MP Task/Task Preflight",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MP_20_Task_2F_Task_20_Preflight,NULL);

	result = method_new("MP Task/Task Postflight",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MP_20_Task_2F_Task_20_Postflight,NULL);

	result = method_new("MP Shell Command Task/Do Task",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MP_20_Shell_20_Command_20_Task_2F_Do_20_Task,NULL);

	result = method_new("MP Shell Command Task/Post Command",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MP_20_Shell_20_Command_20_Task_2F_Post_20_Command,NULL);

	result = method_new("MP Shell Command Task/Get Command Line",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MP_20_Shell_20_Command_20_Task_2F_Get_20_Command_20_Line,NULL);

	result = method_new("MP Shell Command Task/Set Command Line",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MP_20_Shell_20_Command_20_Task_2F_Set_20_Command_20_Line,NULL);

	result = method_new("MP Shell Command Task/Get Buffer Size",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MP_20_Shell_20_Command_20_Task_2F_Get_20_Buffer_20_Size,NULL);

	result = method_new("MP Shell Command Task/Set Buffer Size",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MP_20_Shell_20_Command_20_Task_2F_Set_20_Buffer_20_Size,NULL);

	result = method_new("MP Shell Command Task/Get Result Text",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MP_20_Shell_20_Command_20_Task_2F_Get_20_Result_20_Text,NULL);

	result = method_new("MP Shell Command Task/Set Result Text",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MP_20_Shell_20_Command_20_Task_2F_Set_20_Result_20_Text,NULL);

	result = method_new("MPT PFAB Compile Sources/Create Task",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MPT_20_PFAB_20_Compile_20_Sources_2F_Create_20_Task,NULL);

	result = method_new("MPT PFAB Compile Sources/Task Preflight",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MPT_20_PFAB_20_Compile_20_Sources_2F_Task_20_Preflight,NULL);

	result = method_new("MPT PFAB Compile Sources/Task Postflight",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MPT_20_PFAB_20_Compile_20_Sources_2F_Task_20_Postflight,NULL);

	result = method_new("MPT PFAB Compile Sources/Post Command",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MPT_20_PFAB_20_Compile_20_Sources_2F_Post_20_Command,NULL);

	result = method_new("MPT PFAB Compile Sources/Do Task",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MPT_20_PFAB_20_Compile_20_Sources_2F_Do_20_Task,NULL);

	result = method_new("MPT PFAB Compile Sources/Get Command",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MPT_20_PFAB_20_Compile_20_Sources_2F_Get_20_Command,NULL);

	result = method_new("MPT PFAB Compile Sources/Set Command",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MPT_20_PFAB_20_Compile_20_Sources_2F_Set_20_Command,NULL);

	result = method_new("MPT PFAB Compile Sources/Get Text Command",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MPT_20_PFAB_20_Compile_20_Sources_2F_Get_20_Text_20_Command,NULL);

	result = method_new("MPT PFAB Compile Sources/Set Text Command",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MPT_20_PFAB_20_Compile_20_Sources_2F_Set_20_Text_20_Command,NULL);

	result = method_new("MPT PFAB Compile Sources/Get Block Pages",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MPT_20_PFAB_20_Compile_20_Sources_2F_Get_20_Block_20_Pages,NULL);

	result = method_new("MPT PFAB Compile Sources/Set Block Pages",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MPT_20_PFAB_20_Compile_20_Sources_2F_Set_20_Block_20_Pages,NULL);

	result = method_new("MPT PFAB Compile Sources/Get BlockPtr",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MPT_20_PFAB_20_Compile_20_Sources_2F_Get_20_BlockPtr,NULL);

	result = method_new("MPT PFAB Compile Sources/Set BlockPtr",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MPT_20_PFAB_20_Compile_20_Sources_2F_Set_20_BlockPtr,NULL);

	result = method_new("MPT PFAB Compile Sources/Get Shell Result",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MPT_20_PFAB_20_Compile_20_Sources_2F_Get_20_Shell_20_Result,NULL);

	result = method_new("MPT PFAB Compile Sources/Set Shell Result",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MPT_20_PFAB_20_Compile_20_Sources_2F_Set_20_Shell_20_Result,NULL);

	result = method_new("MPT PFAB Compile Sources/Get Shell Text",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MPT_20_PFAB_20_Compile_20_Sources_2F_Get_20_Shell_20_Text,NULL);

	result = method_new("MPT PFAB Compile Sources/Set Shell Text",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MPT_20_PFAB_20_Compile_20_Sources_2F_Set_20_Shell_20_Text,NULL);

	result = method_new("MPT PFAB Compile Sources/Get Block Size",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MPT_20_PFAB_20_Compile_20_Sources_2F_Get_20_Block_20_Size,NULL);

	result = method_new("MPT PFAB Compile Sources/Get Bytes Read",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MPT_20_PFAB_20_Compile_20_Sources_2F_Get_20_Bytes_20_Read,NULL);

	result = method_new("MPT PFAB Compile Sources/Set Bytes Read",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MPT_20_PFAB_20_Compile_20_Sources_2F_Set_20_Bytes_20_Read,NULL);

	return kNOERROR;

}



Nat4	loadPersistents_MP_20_Task_20_Service(V_Environment environment);
Nat4	loadPersistents_MP_20_Task_20_Service(V_Environment environment)
{
	V_Value tempPersistent = NULL;
	V_Dictionary dictionary = environment->persistentsTable;

	return kNOERROR;

}

Nat4	load_MP_20_Task_20_Service(V_Environment environment);
Nat4	load_MP_20_Task_20_Service(V_Environment environment)
{

	loadClasses_MP_20_Task_20_Service(environment);
	loadUniversals_MP_20_Task_20_Service(environment);
	loadPersistents_MP_20_Task_20_Service(environment);
	return kNOERROR;

}

