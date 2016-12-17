/* A VPL Section File */
/*

Activity Test.inl.c
Copyright: 2004 Andescotia LLC

*/

#include "MartenInlineProject.h"

enum opTrigger vpx_method_TEST_20_Activity_20_Simple_20_Sync_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex);
enum opTrigger vpx_method_TEST_20_Activity_20_Simple_20_Sync_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex)
{
HEADERWITHNONE(2)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_Activity_20_Test_20_Data,1,1,NONE,ROOT(0));

result = vpx_constant(PARAMETERS,"FALSE",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Do,2,0,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTERWITHNONE(2)
}

enum opTrigger vpx_method_TEST_20_Activity_20_Simple_20_Sync_case_2_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_TEST_20_Activity_20_Simple_20_Sync_case_2_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP__2B_1,1,1,TERMINAL(1),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_div,2,1,TERMINAL(1),TERMINAL(2),ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Progress_20_Percent,2,0,TERMINAL(0),TERMINAL(4));

result = vpx_call_primitive(PARAMETERS,VPLP__3D_,2,0,TERMINAL(1),TERMINAL(2));
FINISHONSUCCESS

result = vpx_constant(PARAMETERS,"Counting number: ",ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_to_2D_string,1,1,TERMINAL(1),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(5),TERMINAL(6),ROOT(7));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Primary_20_Prompt,2,0,TERMINAL(0),TERMINAL(7));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Synchronize,1,0,TERMINAL(0));

result = vpx_method_Dispatch_20_Event(PARAMETERS);

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASE(8)
}

enum opTrigger vpx_method_TEST_20_Activity_20_Simple_20_Sync_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex);
enum opTrigger vpx_method_TEST_20_Activity_20_Simple_20_Sync_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex)
{
HEADERWITHNONE(4)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_Activity_20_Abstract,1,1,NONE,ROOT(0));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Begin,2,0,TERMINAL(0),NONE);

result = vpx_constant(PARAMETERS,"12000",ROOT(1));

result = vpx_constant(PARAMETERS,"0",ROOT(2));

REPEATBEGIN
LOOPTERMINALBEGIN(1)
LOOPTERMINAL(0,2,3)
result = vpx_method_TEST_20_Activity_20_Simple_20_Sync_case_2_local_6(PARAMETERS,TERMINAL(0),LOOP(0),TERMINAL(1),ROOT(3));
REPEATFINISH

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Finish,1,0,TERMINAL(0));

result = kSuccess;

FOOTERWITHNONE(4)
}

enum opTrigger vpx_method_TEST_20_Activity_20_Simple_20_Sync(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_TEST_20_Activity_20_Simple_20_Sync_case_1(environment, &outcome, inputRepeat, contextIndex))
vpx_method_TEST_20_Activity_20_Simple_20_Sync_case_2(environment, &outcome, inputRepeat, contextIndex);
return outcome;
}

enum opTrigger vpx_method_TEST_20_Activity_20_Simple_20_ASync(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex)
{
HEADERWITHNONE(2)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_Activity_20_Test_20_Data,1,1,NONE,ROOT(0));

result = vpx_constant(PARAMETERS,"TRUE",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Do,2,0,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASEWITHNONE(2)
}

enum opTrigger vpx_method_TEST_20_Activity_20_Staged_20_Sync_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex);
enum opTrigger vpx_method_TEST_20_Activity_20_Staged_20_Sync_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex)
{
HEADERWITHNONE(2)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_Activity_20_Staged_20_Test,1,1,NONE,ROOT(0));

result = vpx_constant(PARAMETERS,"FALSE",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Do,2,0,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTERWITHNONE(2)
}

enum opTrigger vpx_method_TEST_20_Activity_20_Staged_20_Sync_case_2_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_TEST_20_Activity_20_Staged_20_Sync_case_2_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP__2B_1,1,1,TERMINAL(1),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_div,2,1,TERMINAL(1),TERMINAL(2),ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Progress_20_Percent,2,0,TERMINAL(0),TERMINAL(4));

result = vpx_call_primitive(PARAMETERS,VPLP__3D_,2,0,TERMINAL(1),TERMINAL(2));
FINISHONSUCCESS

result = vpx_constant(PARAMETERS,"Counting number: ",ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_to_2D_string,1,1,TERMINAL(1),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(5),TERMINAL(6),ROOT(7));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Primary_20_Prompt,2,0,TERMINAL(0),TERMINAL(7));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Synchronize,1,0,TERMINAL(0));

result = vpx_method_Dispatch_20_Event(PARAMETERS);

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASE(8)
}

enum opTrigger vpx_method_TEST_20_Activity_20_Staged_20_Sync_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex);
enum opTrigger vpx_method_TEST_20_Activity_20_Staged_20_Sync_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex)
{
HEADERWITHNONE(4)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_Activity_20_Abstract,1,1,NONE,ROOT(0));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Begin,2,0,TERMINAL(0),NONE);

result = vpx_constant(PARAMETERS,"12000",ROOT(1));

result = vpx_constant(PARAMETERS,"0",ROOT(2));

REPEATBEGIN
LOOPTERMINALBEGIN(1)
LOOPTERMINAL(0,2,3)
result = vpx_method_TEST_20_Activity_20_Staged_20_Sync_case_2_local_6(PARAMETERS,TERMINAL(0),LOOP(0),TERMINAL(1),ROOT(3));
REPEATFINISH

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Finish,1,0,TERMINAL(0));

result = kSuccess;

FOOTERWITHNONE(4)
}

enum opTrigger vpx_method_TEST_20_Activity_20_Staged_20_Sync(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_TEST_20_Activity_20_Staged_20_Sync_case_1(environment, &outcome, inputRepeat, contextIndex))
vpx_method_TEST_20_Activity_20_Staged_20_Sync_case_2(environment, &outcome, inputRepeat, contextIndex);
return outcome;
}

enum opTrigger vpx_method_TEST_20_Activity_20_Staged_20_ASync(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex)
{
HEADERWITHNONE(2)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_Activity_20_Staged_20_Test,1,1,NONE,ROOT(0));

result = vpx_constant(PARAMETERS,"TRUE",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Do,2,0,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASEWITHNONE(2)
}




	Nat4 tempAttribute_Activity_20_Test_20_Data_2F_Name[] = {
0000000000, 0X00000034, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X41630006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X00000016, 0X54657374, 0X20436F75, 0X6E74696E,
0X67204163, 0X74697669, 0X74790000
	};
	Nat4 tempAttribute_Activity_20_Test_20_Data_2F_Canceled_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Activity_20_Test_20_Data_2F_Completed_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Activity_20_Test_20_Data_2F_Completion_20_Callback[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Activity_20_Test_20_Data_2F_Attachments[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Activity_20_Test_20_Data_2F_Current_20_Count[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X02D10004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Activity_20_Test_20_Data_2F_Max_20_Count[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X02340004, 0000000000, 0000000000,
0000000000, 0000000000, 0X00002710
	};
	Nat4 tempAttribute_Activity_20_Staged_20_Test_2F_Name[] = {
0000000000, 0X00000038, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X41630006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X00000018, 0X53746167, 0X65642043, 0X6F756E74,
0X696E6720, 0X41637469, 0X76697479, 0000000000
	};
	Nat4 tempAttribute_Activity_20_Staged_20_Test_2F_Canceled_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Activity_20_Staged_20_Test_2F_Completed_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Activity_20_Staged_20_Test_2F_Completion_20_Callback[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Activity_20_Staged_20_Test_2F_Attachments[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Activity_20_Staged_20_Test_2F_Stages[] = {
0000000000, 0X0000024C, 0X00000068, 0X00000015, 0X00000014, 0X00000294, 0X000000A8, 0X00000260,
0X000000A4, 0X0000022C, 0X000000A0, 0X000001F8, 0X0000009C, 0X000001C4, 0X00000098, 0X00000190,
0X00000094, 0X0000015C, 0X00000090, 0X00000128, 0X0000008C, 0X000000F4, 0X00000088, 0X000000C0,
0X00000084, 0X0000007C, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000084,
0X0000000A, 0X000000AC, 0X000000E0, 0X00000114, 0X00000148, 0X0000017C, 0X000001B0, 0X000001E4,
0X00000218, 0X0000024C, 0X00000280, 0X53740006, 0000000000, 0000000000, 0000000000, 0000000000,
0X000000C8, 0X00000017, 0X41637469, 0X76697479, 0X20436F75, 0X6E74696E, 0X67205374, 0X61676500,
0X53740006, 0000000000, 0000000000, 0000000000, 0000000000, 0X000000FC, 0X00000017, 0X41637469,
0X76697479, 0X20436F75, 0X6E74696E, 0X67205374, 0X61676500, 0X53740006, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000130, 0X00000017, 0X41637469, 0X76697479, 0X20436F75, 0X6E74696E,
0X67205374, 0X61676500, 0X53740006, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000164,
0X00000017, 0X41637469, 0X76697479, 0X20436F75, 0X6E74696E, 0X67205374, 0X61676500, 0X53740006,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000198, 0X00000017, 0X41637469, 0X76697479,
0X20436F75, 0X6E74696E, 0X67205374, 0X61676500, 0X53740006, 0000000000, 0000000000, 0000000000,
0000000000, 0X000001CC, 0X00000017, 0X41637469, 0X76697479, 0X20436F75, 0X6E74696E, 0X67205374,
0X61676500, 0X53740006, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000200, 0X00000017,
0X41637469, 0X76697479, 0X20436F75, 0X6E74696E, 0X67205374, 0X61676500, 0X53740006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000234, 0X00000017, 0X41637469, 0X76697479, 0X20436F75,
0X6E74696E, 0X67205374, 0X61676500, 0X53740006, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000268, 0X00000017, 0X41637469, 0X76697479, 0X20436F75, 0X6E74696E, 0X67205374, 0X61676500,
0X53740006, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000029C, 0X00000017, 0X41637469,
0X76697479, 0X20436F75, 0X6E74696E, 0X67205374, 0X61676500
	};
	Nat4 tempAttribute_Activity_20_Staged_20_Test_2F_Completed_20_Stages[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Activity_20_Counting_20_Stage_2F_Name[] = {
0000000000, 0X0000002C, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X0000000E, 0X436F756E, 0X74696E67, 0X20537461,
0X67650000
	};
	Nat4 tempAttribute_Activity_20_Counting_20_Stage_2F_Current_20_Count[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X02D10004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Activity_20_Counting_20_Stage_2F_Max_20_Count[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0X000003E8
	};


Nat4 VPLC_Activity_20_Test_20_Data_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Activity_20_Test_20_Data_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 173 397 } */
	tempAttribute = attribute_add("Name",tempClass,tempAttribute_Activity_20_Test_20_Data_2F_Name,environment);
	tempAttribute = attribute_add("Canceled?",tempClass,tempAttribute_Activity_20_Test_20_Data_2F_Canceled_3F_,environment);
	tempAttribute = attribute_add("Completed?",tempClass,tempAttribute_Activity_20_Test_20_Data_2F_Completed_3F_,environment);
	tempAttribute = attribute_add("Completion Callback",tempClass,tempAttribute_Activity_20_Test_20_Data_2F_Completion_20_Callback,environment);
	tempAttribute = attribute_add("Attachments",tempClass,tempAttribute_Activity_20_Test_20_Data_2F_Attachments,environment);
	tempAttribute = attribute_add("Progress",tempClass,NULL,environment);
	tempAttribute = attribute_add("Current Count",tempClass,tempAttribute_Activity_20_Test_20_Data_2F_Current_20_Count,environment);
	tempAttribute = attribute_add("Max Count",tempClass,tempAttribute_Activity_20_Test_20_Data_2F_Max_20_Count,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"Activity Abstract");
	return kNOERROR;
}

/* Start Universals: { 544 960 }{ 200 300 } */
enum opTrigger vpx_method_Activity_20_Test_20_Data_2F_Run_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Activity_20_Test_20_Data_2F_Run_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP__2B_1,1,1,TERMINAL(1),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_div,2,1,TERMINAL(1),TERMINAL(2),ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Progress_20_Percent,2,0,TERMINAL(0),TERMINAL(4));

result = vpx_call_primitive(PARAMETERS,VPLP__3D_,2,1,TERMINAL(1),TERMINAL(2),ROOT(5));

result = vpx_constant(PARAMETERS,"Counting number: ",ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP_to_2D_string,1,1,TERMINAL(1),ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(6),TERMINAL(7),ROOT(8));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Primary_20_Prompt,2,0,TERMINAL(0),TERMINAL(8));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Synchronize,1,0,TERMINAL(0));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
OUTPUT(1,TERMINAL(5))
FOOTERSINGLECASE(9)
}

enum opTrigger vpx_method_Activity_20_Test_20_Data_2F_Run(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(8)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Current_20_Count,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_Max_20_Count,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_method_Activity_20_Test_20_Data_2F_Run_case_1_local_4(PARAMETERS,TERMINAL(0),TERMINAL(2),TERMINAL(4),ROOT(5),ROOT(6));

result = vpx_set(PARAMETERS,kVPXValue_Current_20_Count,TERMINAL(1),TERMINAL(5),ROOT(7));

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTERSINGLECASE(8)
}

enum opTrigger vpx_method_Activity_20_Test_20_Data_2F_Run_20_Begin_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Activity_20_Test_20_Data_2F_Run_20_Begin_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Asynchronous counting",ROOT(2));

result = vpx_constant(PARAMETERS,"Synchronous counting",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_choose,3,1,TERMINAL(1),TERMINAL(2),TERMINAL(3),ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Activity_20_Name,2,0,TERMINAL(0),TERMINAL(4));

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Activity_20_Test_20_Data_2F_Run_20_Begin(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_context_super_method(PARAMETERS,kVPXMethod_Run_20_Begin,2,0,TERMINAL(0),TERMINAL(1));

result = vpx_method_Activity_20_Test_20_Data_2F_Run_20_Begin_case_1_local_3(PARAMETERS,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(2)
}

/* Stop Universals */



Nat4 VPLC_Activity_20_Staged_20_Test_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Activity_20_Staged_20_Test_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 184 397 } */
	tempAttribute = attribute_add("Name",tempClass,tempAttribute_Activity_20_Staged_20_Test_2F_Name,environment);
	tempAttribute = attribute_add("Canceled?",tempClass,tempAttribute_Activity_20_Staged_20_Test_2F_Canceled_3F_,environment);
	tempAttribute = attribute_add("Completed?",tempClass,tempAttribute_Activity_20_Staged_20_Test_2F_Completed_3F_,environment);
	tempAttribute = attribute_add("Completion Callback",tempClass,tempAttribute_Activity_20_Staged_20_Test_2F_Completion_20_Callback,environment);
	tempAttribute = attribute_add("Attachments",tempClass,tempAttribute_Activity_20_Staged_20_Test_2F_Attachments,environment);
	tempAttribute = attribute_add("Progress",tempClass,NULL,environment);
	tempAttribute = attribute_add("Stages",tempClass,tempAttribute_Activity_20_Staged_20_Test_2F_Stages,environment);
	tempAttribute = attribute_add("Current Stage",tempClass,NULL,environment);
	tempAttribute = attribute_add("Completed Stages",tempClass,tempAttribute_Activity_20_Staged_20_Test_2F_Completed_20_Stages,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"Activity Staged");
	return kNOERROR;
}

/* Start Universals: { 60 60 }{ 200 300 } */
/* Stop Universals */



Nat4 VPLC_Activity_20_Counting_20_Stage_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Activity_20_Counting_20_Stage_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 200 300 } */
	tempAttribute = attribute_add("Name",tempClass,tempAttribute_Activity_20_Counting_20_Stage_2F_Name,environment);
	tempAttribute = attribute_add("Activity",tempClass,NULL,environment);
	tempAttribute = attribute_add("Current Count",tempClass,tempAttribute_Activity_20_Counting_20_Stage_2F_Current_20_Count,environment);
	tempAttribute = attribute_add("Max Count",tempClass,tempAttribute_Activity_20_Counting_20_Stage_2F_Max_20_Count,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"Activity Stage");
	return kNOERROR;
}

/* Start Universals: { 343 652 }{ 200 300 } */
enum opTrigger vpx_method_Activity_20_Counting_20_Stage_2F_Run_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Activity_20_Counting_20_Stage_2F_Run_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP__2B_1,1,1,TERMINAL(1),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_div,2,1,TERMINAL(1),TERMINAL(2),ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Progress_20_Percent,2,0,TERMINAL(0),TERMINAL(4));

result = vpx_call_primitive(PARAMETERS,VPLP__3D_,2,1,TERMINAL(1),TERMINAL(2),ROOT(5));

result = vpx_constant(PARAMETERS,"Counting number: ",ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP_to_2D_string,1,1,TERMINAL(1),ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(6),TERMINAL(7),ROOT(8));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Primary_20_Prompt,2,0,TERMINAL(0),TERMINAL(8));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Synchronize,1,0,TERMINAL(0));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
OUTPUT(1,TERMINAL(5))
FOOTERSINGLECASE(9)
}

enum opTrigger vpx_method_Activity_20_Counting_20_Stage_2F_Run(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Current_20_Count,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Max_20_Count,TERMINAL(0),ROOT(4),ROOT(5));

result = vpx_method_Activity_20_Counting_20_Stage_2F_Run_case_1_local_4(PARAMETERS,TERMINAL(1),TERMINAL(3),TERMINAL(5),ROOT(6),ROOT(7));

result = vpx_set(PARAMETERS,kVPXValue_Current_20_Count,TERMINAL(2),TERMINAL(6),ROOT(8));

result = kSuccess;

OUTPUT(0,TERMINAL(7))
FOOTERSINGLECASE(9)
}

enum opTrigger vpx_method_Activity_20_Counting_20_Stage_2F_Run_20_Begin_case_1_local_3_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Activity_20_Counting_20_Stage_2F_Run_20_Begin_case_1_local_3_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Completed_20_Stages,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP__28_length_29_,1,1,TERMINAL(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP__2B_1,1,1,TERMINAL(3),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Activity_20_Counting_20_Stage_2F_Run_20_Begin_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Activity_20_Counting_20_Stage_2F_Run_20_Begin_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Activity_20_Counting_20_Stage_2F_Run_20_Begin_case_1_local_3_case_1_local_2(PARAMETERS,TERMINAL(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_to_2D_string,1,1,TERMINAL(2),ROOT(3));

result = vpx_constant(PARAMETERS,"Counting: Stage ",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(4),TERMINAL(3),ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Activity_20_Name,2,0,TERMINAL(1),TERMINAL(5));

result = kSuccess;

FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Activity_20_Counting_20_Stage_2F_Run_20_Begin(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_context_super_method(PARAMETERS,kVPXMethod_Run_20_Begin,2,0,TERMINAL(0),TERMINAL(1));

result = vpx_method_Activity_20_Counting_20_Stage_2F_Run_20_Begin_case_1_local_3(PARAMETERS,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(2)
}

/* Stop Universals */






Nat4	loadClasses_Activity_20_Test(V_Environment environment);
Nat4	loadClasses_Activity_20_Test(V_Environment environment)
{
	V_Class result = NULL;

	result = class_new("Activity Test Data",environment);
	if(result == NULL) return kERROR;
	VPLC_Activity_20_Test_20_Data_class_load(result,environment);
	result = class_new("Activity Staged Test",environment);
	if(result == NULL) return kERROR;
	VPLC_Activity_20_Staged_20_Test_class_load(result,environment);
	result = class_new("Activity Counting Stage",environment);
	if(result == NULL) return kERROR;
	VPLC_Activity_20_Counting_20_Stage_class_load(result,environment);
	return kNOERROR;

}

Nat4	loadUniversals_Activity_20_Test(V_Environment environment);
Nat4	loadUniversals_Activity_20_Test(V_Environment environment)
{
	V_Method result = NULL;

	result = method_new("TEST Activity Simple Sync",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_TEST_20_Activity_20_Simple_20_Sync,NULL);

	result = method_new("TEST Activity Simple ASync",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_TEST_20_Activity_20_Simple_20_ASync,NULL);

	result = method_new("TEST Activity Staged Sync",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_TEST_20_Activity_20_Staged_20_Sync,NULL);

	result = method_new("TEST Activity Staged ASync",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_TEST_20_Activity_20_Staged_20_ASync,NULL);

	result = method_new("Activity Test Data/Run",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Activity_20_Test_20_Data_2F_Run,NULL);

	result = method_new("Activity Test Data/Run Begin",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Activity_20_Test_20_Data_2F_Run_20_Begin,NULL);

	result = method_new("Activity Counting Stage/Run",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Activity_20_Counting_20_Stage_2F_Run,NULL);

	result = method_new("Activity Counting Stage/Run Begin",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Activity_20_Counting_20_Stage_2F_Run_20_Begin,NULL);

	return kNOERROR;

}



Nat4	loadPersistents_Activity_20_Test(V_Environment environment);
Nat4	loadPersistents_Activity_20_Test(V_Environment environment)
{
	V_Value tempPersistent = NULL;
	V_Dictionary dictionary = environment->persistentsTable;

	return kNOERROR;

}

Nat4	load_Activity_20_Test(V_Environment environment);
Nat4	load_Activity_20_Test(V_Environment environment)
{

	loadClasses_Activity_20_Test(environment);
	loadUniversals_Activity_20_Test(environment);
	loadPersistents_Activity_20_Test(environment);
	return kNOERROR;

}

