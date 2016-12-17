/* A VPL Section File */
/*

Application.inl.c
Copyright: 2004 Andescotia LLC

*/

#include "MartenInlineProject.h"

enum opTrigger vpx_method_MAIN(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Debug_20_Init(PARAMETERS);

result = vpx_persistent(PARAMETERS,kVPXValue_The_20_Application,0,1,ROOT(1));

result = vpx_method_Make_20_Class(PARAMETERS,TERMINAL(1),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Main,2,1,TERMINAL(2),TERMINAL(0),ROOT(3));

result = vpx_method_Debug_20_Finish(PARAMETERS);

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Get_20_Application(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0)
{
HEADER(1)
result = kSuccess;

result = vpx_persistent(PARAMETERS,kVPXValue_Front_20_Application,0,1,ROOT(0));

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Quit_20_Application(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex)
{
HEADER(1)
result = kSuccess;

result = vpx_method_Get_20_Application(PARAMETERS,ROOT(0));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Quit,1,0,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(1)
}




	Nat4 tempAttribute_Application_2F_Quitting_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0X0000D750
	};
	Nat4 tempAttribute_Application_2F_Exit_20_Result_20_Code[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Application_2F_Service_20_Manager[] = {
0000000000, 0X00000050, 0X00000020, 0X00000003, 0X00000014, 0X00000050, 0X00000034, 0X0000003C,
0X05000008, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000050, 0X00000001, 0X00000040,
0X53657276, 0X69636520, 0X4D616E61, 0X67657200, 0X00000054, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};


Nat4 VPLC_Application_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Application_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 200 300 } */
	tempAttribute = attribute_add("Quitting?",tempClass,tempAttribute_Application_2F_Quitting_3F_,environment);
	tempAttribute = attribute_add("Exit Result Code",tempClass,tempAttribute_Application_2F_Exit_20_Result_20_Code,environment);
	tempAttribute = attribute_add("Service Manager",tempClass,tempAttribute_Application_2F_Service_20_Manager,environment);
/* Stop Attributes */

/* NULL SUPER CLASS */
	return kNOERROR;
}

/* Start Universals: { 312 963 }{ 537 308 } */
enum opTrigger vpx_method_Application_2F_Main_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Application_2F_Main_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open,2,0,TERMINAL(0),TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Run,1,0,TERMINAL(0));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Close,1,1,TERMINAL(0),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Application_2F_Main_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Application_2F_Main_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Close,1,1,TERMINAL(0),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Application_2F_Main(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Application_2F_Main_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Application_2F_Main_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Application_2F_Open(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open_20_Globals,2,0,TERMINAL(0),TERMINAL(1));
FAILONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open_20_Environment,1,0,TERMINAL(0));
FAILONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open_20_Services,1,0,TERMINAL(0));
FAILONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open_20_Local,1,0,TERMINAL(0));
FAILONFAILURE

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Application_2F_Run_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Application_2F_Run_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Get_20_Event_20_Service(PARAMETERS,ROOT(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Run_20_Main_20_Event_20_Loop,2,0,TERMINAL(1),TERMINAL(0));

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Application_2F_Run_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Application_2F_Run_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

RunApplicationEventLoop();
result = kSuccess;

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_Application_2F_Run(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Application_2F_Run_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Application_2F_Run_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Application_2F_Quit_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Application_2F_Quit_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Get_20_Event_20_Service(PARAMETERS,ROOT(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Quit_20_Main_20_Event_20_Loop,2,0,TERMINAL(1),TERMINAL(0));

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Application_2F_Quit_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Application_2F_Quit_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

QuitApplicationEventLoop();
result = kSuccess;

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_Application_2F_Quit_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Application_2F_Quit_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Application_2F_Quit_case_1_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Application_2F_Quit_case_1_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Application_2F_Quit(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"TRUE",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Quitting_3F_,2,0,TERMINAL(0),TERMINAL(1));

result = vpx_method_Application_2F_Quit_case_1_local_4(PARAMETERS,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Application_2F_Close_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Application_2F_Close_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Close_20_Local,1,0,TERMINAL(0));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Close_20_Services,1,0,TERMINAL(0));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Close_20_Environment,1,0,TERMINAL(0));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Close_20_Globals,1,0,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Application_2F_Close(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Application_2F_Close_case_1_local_2(PARAMETERS,TERMINAL(0));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Exit_20_Result_20_Code,1,1,TERMINAL(0),ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Application_2F_Get_20_Service_20_Manager(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Service_20_Manager,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Application_2F_Set_20_Service_20_Manager(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Service_20_Manager,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Application_2F_Get_20_Exit_20_Result_20_Code(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Exit_20_Result_20_Code,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Application_2F_Set_20_Exit_20_Result_20_Code(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Exit_20_Result_20_Code,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Application_2F_Get_20_Quitting_3F_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Quitting_3F_,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Application_2F_Set_20_Quitting_3F_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Quitting_3F_,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Application_2F_Open_20_Globals(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_persistent(PARAMETERS,kVPXValue_Front_20_Application,1,0,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Application_2F_Open_20_Environment(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

InitCursor();
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Application_2F_Open_20_Services(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Service_20_Manager,1,1,TERMINAL(0),ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open,1,0,TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Application_2F_Open_20_Local(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Service_20_Manager,1,1,TERMINAL(0),ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Initialize,1,0,TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Application_2F_Close_20_Local(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Application_2F_Close_20_Services(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Service_20_Manager,1,1,TERMINAL(0),ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Close,1,0,TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Application_2F_Close_20_Environment(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Application_2F_Close_20_Globals_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex);
enum opTrigger vpx_method_Application_2F_Close_20_Globals_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex)
{
HEADERWITHNONE(1)
result = kSuccess;

result = vpx_method_CFPreferences_20_Synchronize(PARAMETERS,NONE);
TERMINATEONFAILURE

result = kSuccess;

FOOTERSINGLECASEWITHNONE(1)
}

enum opTrigger vpx_method_Application_2F_Close_20_Globals(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = vpx_persistent(PARAMETERS,kVPXValue_Front_20_Application,1,0,TERMINAL(1));

result = vpx_method_Application_2F_Close_20_Globals_case_1_local_4(PARAMETERS);

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Application_2F_CE_20_Handle_20_Event_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Application_2F_CE_20_Handle_20_Event_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"HICommand",ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_set_2D_external_2D_type,2,0,TERMINAL(0),TERMINAL(1));

result = vpx_extget(PARAMETERS,"commandID",1,2,TERMINAL(0),ROOT(2),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Application_2F_CE_20_Handle_20_Event_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Application_2F_CE_20_Handle_20_Event_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Event_20_Class,1,1,TERMINAL(1),ROOT(2));

result = vpx_extmatch(PARAMETERS,kEventClassCommand,TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Event_20_Kind,1,1,TERMINAL(1),ROOT(3));

result = vpx_extmatch(PARAMETERS,kEventCommandProcess,TERMINAL(3));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_EP_20_HICommand,1,2,TERMINAL(1),ROOT(4),ROOT(5));

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(4));
NEXTCASEONFAILURE

result = vpx_method_Application_2F_CE_20_Handle_20_Event_case_1_local_8(PARAMETERS,TERMINAL(5),ROOT(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_CE_20_HICommand_20_Process,4,1,TERMINAL(0),TERMINAL(6),TERMINAL(5),TERMINAL(1),ROOT(7));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(7))
FOOTER(8)
}

enum opTrigger vpx_method_Application_2F_CE_20_Handle_20_Event_case_2_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Application_2F_CE_20_Handle_20_Event_case_2_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"HICommand",ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_set_2D_external_2D_type,2,0,TERMINAL(0),TERMINAL(1));

result = vpx_extget(PARAMETERS,"commandID",1,2,TERMINAL(0),ROOT(2),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Application_2F_CE_20_Handle_20_Event_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Application_2F_CE_20_Handle_20_Event_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Event_20_Class,1,1,TERMINAL(1),ROOT(2));

result = vpx_extmatch(PARAMETERS,kEventClassCommand,TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Event_20_Kind,1,1,TERMINAL(1),ROOT(3));

result = vpx_extmatch(PARAMETERS,kEventCommandUpdateStatus,TERMINAL(3));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_EP_20_HICommand,1,2,TERMINAL(1),ROOT(4),ROOT(5));

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(4));
NEXTCASEONFAILURE

result = vpx_method_Application_2F_CE_20_Handle_20_Event_case_2_local_8(PARAMETERS,TERMINAL(5),ROOT(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_CE_20_HICommand_20_Update_20_Status,4,1,TERMINAL(0),TERMINAL(6),TERMINAL(5),TERMINAL(1),ROOT(7));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(7))
FOOTER(8)
}

enum opTrigger vpx_method_Application_2F_CE_20_Handle_20_Event_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Application_2F_CE_20_Handle_20_Event_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Return_20_Event_20_Not_20_Handled,1,1,TERMINAL(1),ROOT(2));

result = vpx_constant(PARAMETERS,"CE Handle Event",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_log_2D_error,1,0,TERMINAL(3));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(4)
}

enum opTrigger vpx_method_Application_2F_CE_20_Handle_20_Event(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Application_2F_CE_20_Handle_20_Event_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
if(vpx_method_Application_2F_CE_20_Handle_20_Event_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Application_2F_CE_20_Handle_20_Event_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Application_2F_CE_20_HICommand_20_Process_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0);
enum opTrigger vpx_method_Application_2F_CE_20_HICommand_20_Process_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,noErr,ROOT(4));

result = vpx_extmatch(PARAMETERS,kHICommandNew,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_HICommand_20_New,1,0,TERMINAL(0));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Application_2F_CE_20_HICommand_20_Process_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0);
enum opTrigger vpx_method_Application_2F_CE_20_HICommand_20_Process_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,kHICommandAbout,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_HICommand_20_About,1,0,TERMINAL(0));

result = vpx_extconstant(PARAMETERS,noErr,ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Application_2F_CE_20_HICommand_20_Process_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0);
enum opTrigger vpx_method_Application_2F_CE_20_HICommand_20_Process_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,kHICommandPreferences,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_HICommand_20_Preferences,1,0,TERMINAL(0));

result = vpx_extconstant(PARAMETERS,noErr,ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Application_2F_CE_20_HICommand_20_Process_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0);
enum opTrigger vpx_method_Application_2F_CE_20_HICommand_20_Process_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,kHICommandQuit,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_HICommand_20_Quit,1,0,TERMINAL(0));

result = vpx_extconstant(PARAMETERS,noErr,ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Application_2F_CE_20_HICommand_20_Process_case_5(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0);
enum opTrigger vpx_method_Application_2F_CE_20_HICommand_20_Process_case_5(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,kHICommandOpen,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_HICommand_20_Open,1,0,TERMINAL(0));

result = vpx_extconstant(PARAMETERS,noErr,ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Application_2F_CE_20_HICommand_20_Process_case_6(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0);
enum opTrigger vpx_method_Application_2F_CE_20_HICommand_20_Process_case_6(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_HICommand_20_App_20_Custom,4,1,TERMINAL(0),TERMINAL(1),TERMINAL(2),TERMINAL(3),ROOT(4));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Application_2F_CE_20_HICommand_20_Process_case_7(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0);
enum opTrigger vpx_method_Application_2F_CE_20_HICommand_20_Process_case_7(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Return_20_Event_20_Not_20_Handled,1,1,TERMINAL(3),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Application_2F_CE_20_HICommand_20_Process(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Application_2F_CE_20_HICommand_20_Process_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0))
if(vpx_method_Application_2F_CE_20_HICommand_20_Process_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0))
if(vpx_method_Application_2F_CE_20_HICommand_20_Process_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0))
if(vpx_method_Application_2F_CE_20_HICommand_20_Process_case_4(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0))
if(vpx_method_Application_2F_CE_20_HICommand_20_Process_case_5(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0))
if(vpx_method_Application_2F_CE_20_HICommand_20_Process_case_6(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0))
vpx_method_Application_2F_CE_20_HICommand_20_Process_case_7(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0);
return outcome;
}

enum opTrigger vpx_method_Application_2F_CE_20_HICommand_20_Update_20_Status(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Return_20_Event_20_Not_20_Handled,1,1,TERMINAL(3),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Application_2F_HICommand_20_App_20_Custom_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Application_2F_HICommand_20_App_20_Custom_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Unhandled HICommand",ROOT(2));

result = vpx_constant(PARAMETERS,"1",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_integer_2D_to_2D_string,1,1,TERMINAL(1),ROOT(4));

result = vpx_method_Debug_20_Result(PARAMETERS,TERMINAL(0),TERMINAL(2),TERMINAL(4),TERMINAL(3));

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Application_2F_HICommand_20_App_20_Custom(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0)
{
HEADERWITHNONE(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_method_Application_2F_HICommand_20_App_20_Custom_case_1_local_2(PARAMETERS,TERMINAL(0),TERMINAL(1));

result = kSuccess;
FAILONSUCCESS

OUTPUT(0,NONE)
FOOTERSINGLECASEWITHNONE(4)
}

enum opTrigger vpx_method_Application_2F_HICommand_20_New(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Application_2F_HICommand_20_About(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Application_2F_HICommand_20_Preferences(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Application_2F_HICommand_20_Open(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Application_2F_HICommand_20_Quit(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Quit_20_Application(PARAMETERS);

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Application_2F_Get_20_Signature(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\'????\'",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Application_2F_AE_20_Open_20_Application(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Application_2F_AE_20_Reopen_20_Application(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Debug_20_Detect_20_Verbosity(PARAMETERS);

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Application_2F_AE_20_Open_20_Documents(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(2)
}

/* Stop Universals */






Nat4	loadClasses_Application(V_Environment environment);
Nat4	loadClasses_Application(V_Environment environment)
{
	V_Class result = NULL;

	result = class_new("Application",environment);
	if(result == NULL) return kERROR;
	VPLC_Application_class_load(result,environment);
	return kNOERROR;

}

Nat4	loadUniversals_Application(V_Environment environment);
Nat4	loadUniversals_Application(V_Environment environment)
{
	V_Method result = NULL;

	result = method_new("MAIN",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_MAIN,"MAIN");

	result = method_new("Get Application",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Get_20_Application,NULL);

	result = method_new("Quit Application",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Quit_20_Application,NULL);

	result = method_new("Application/Main",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Application_2F_Main,NULL);

	result = method_new("Application/Open",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Application_2F_Open,NULL);

	result = method_new("Application/Run",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Application_2F_Run,NULL);

	result = method_new("Application/Quit",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Application_2F_Quit,NULL);

	result = method_new("Application/Close",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Application_2F_Close,NULL);

	result = method_new("Application/Get Service Manager",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Application_2F_Get_20_Service_20_Manager,NULL);

	result = method_new("Application/Set Service Manager",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Application_2F_Set_20_Service_20_Manager,NULL);

	result = method_new("Application/Get Exit Result Code",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Application_2F_Get_20_Exit_20_Result_20_Code,NULL);

	result = method_new("Application/Set Exit Result Code",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Application_2F_Set_20_Exit_20_Result_20_Code,NULL);

	result = method_new("Application/Get Quitting?",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Application_2F_Get_20_Quitting_3F_,NULL);

	result = method_new("Application/Set Quitting?",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Application_2F_Set_20_Quitting_3F_,NULL);

	result = method_new("Application/Open Globals",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Application_2F_Open_20_Globals,NULL);

	result = method_new("Application/Open Environment",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Application_2F_Open_20_Environment,NULL);

	result = method_new("Application/Open Services",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Application_2F_Open_20_Services,NULL);

	result = method_new("Application/Open Local",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Application_2F_Open_20_Local,NULL);

	result = method_new("Application/Close Local",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Application_2F_Close_20_Local,NULL);

	result = method_new("Application/Close Services",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Application_2F_Close_20_Services,NULL);

	result = method_new("Application/Close Environment",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Application_2F_Close_20_Environment,NULL);

	result = method_new("Application/Close Globals",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Application_2F_Close_20_Globals,NULL);

	result = method_new("Application/CE Handle Event",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Application_2F_CE_20_Handle_20_Event,NULL);

	result = method_new("Application/CE HICommand Process",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Application_2F_CE_20_HICommand_20_Process,NULL);

	result = method_new("Application/CE HICommand Update Status",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Application_2F_CE_20_HICommand_20_Update_20_Status,NULL);

	result = method_new("Application/HICommand App Custom",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Application_2F_HICommand_20_App_20_Custom,NULL);

	result = method_new("Application/HICommand New",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Application_2F_HICommand_20_New,NULL);

	result = method_new("Application/HICommand About",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Application_2F_HICommand_20_About,NULL);

	result = method_new("Application/HICommand Preferences",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Application_2F_HICommand_20_Preferences,NULL);

	result = method_new("Application/HICommand Open",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Application_2F_HICommand_20_Open,NULL);

	result = method_new("Application/HICommand Quit",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Application_2F_HICommand_20_Quit,NULL);

	result = method_new("Application/Get Signature",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Application_2F_Get_20_Signature,NULL);

	result = method_new("Application/AE Open Application",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Application_2F_AE_20_Open_20_Application,NULL);

	result = method_new("Application/AE Reopen Application",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Application_2F_AE_20_Reopen_20_Application,NULL);

	result = method_new("Application/AE Open Documents",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Application_2F_AE_20_Open_20_Documents,NULL);

	return kNOERROR;

}



Nat4	loadPersistents_Application(V_Environment environment);
Nat4	loadPersistents_Application(V_Environment environment)
{
	V_Value tempPersistent = NULL;
	V_Dictionary dictionary = environment->persistentsTable;

	return kNOERROR;

}

Nat4	load_Application(V_Environment environment);
Nat4	load_Application(V_Environment environment)
{

	loadClasses_Application(environment);
	loadUniversals_Application(environment);
	loadPersistents_Application(environment);
	return kNOERROR;

}

