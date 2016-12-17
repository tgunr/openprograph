/* A VPL Section File */
/*

Carbon Events.inl.c
Copyright: 2004 Andescotia LLC

*/

#include "MartenInlineProject.h"

enum opTrigger vpx_method_Execute_20_Callback_20_Deferred_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Execute_20_Callback_20_Deferred_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,2,TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_method_Add_20_Attachment_20_To_20_Callback(PARAMETERS,TERMINAL(0),TERMINAL(2),TERMINAL(3),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Execute_20_Callback_20_Deferred(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4)
{
HEADERWITHNONE(8)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
INPUT(4,4)
result = kSuccess;

result = vpx_method_Default_20_List(PARAMETERS,TERMINAL(1),ROOT(5));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(5))) ){
REPEATBEGINWITHCOUNTER
LOOPTERMINALBEGIN(1)
LOOPTERMINAL(0,0,6)
result = vpx_method_Execute_20_Callback_20_Deferred_case_1_local_3(PARAMETERS,LOOP(0),LIST(5),ROOT(6));
REPEATFINISH
} else {
ROOTNULL(6,TERMINAL(0))
}

result = vpx_match(PARAMETERS,"(  )",TERMINAL(6));
TERMINATEONSUCCESS

result = vpx_instantiate(PARAMETERS,kVPXClass_Carbon_20_Timer_20_Callback,1,1,NONE,ROOT(7));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Schedule_20_Callback,5,0,TERMINAL(7),TERMINAL(6),TERMINAL(2),TERMINAL(3),TERMINAL(4));

result = kSuccess;

FOOTERSINGLECASEWITHNONE(8)
}

enum opTrigger vpx_method_TEST_20_Execute_20_Deferred(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex)
{
HEADERWITHNONE(2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Beep",ROOT(0));

result = vpx_constant(PARAMETERS,"1",ROOT(1));

result = vpx_method_Execute_20_Callback_20_Deferred(PARAMETERS,TERMINAL(0),NONE,TERMINAL(1),NONE,NONE);

result = kSuccess;

FOOTERSINGLECASEWITHNONE(2)
}

enum opTrigger vpx_method_Dispatch_20_Event_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex);
enum opTrigger vpx_method_Dispatch_20_Event_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex)
{
HEADERWITHNONE(11)
result = kSuccess;

result = vpx_constant(PARAMETERS,"0",ROOT(0));

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = vpx_constant(PARAMETERS,"TRUE",ROOT(2));

result = vpx_constant(PARAMETERS,"0",ROOT(3));

PUTINTEGER(ReceiveNextEvent( GETINTEGER(TERMINAL(0)),GETCONSTPOINTER(EventTypeSpec,*,TERMINAL(1)),GETREAL(TERMINAL(3)),GETINTEGER(TERMINAL(2)),GETPOINTER(0,OpaqueEventRef,**,ROOT(5),NONE)),4);
result = kSuccess;

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(4));
NEXTCASEONFAILURE

PUTPOINTER(OpaqueEventTargetRef,*,GetEventDispatcherTarget(),6);
result = kSuccess;

PUTINTEGER(SendEventToEventTarget( GETPOINTER(0,OpaqueEventRef,*,ROOT(8),TERMINAL(5)),GETPOINTER(0,OpaqueEventTargetRef,*,ROOT(9),TERMINAL(6))),7);
result = kSuccess;

ReleaseEvent( GETPOINTER(0,OpaqueEventRef,*,ROOT(10),TERMINAL(8)));
result = kSuccess;

result = kSuccess;

FOOTERWITHNONE(11)
}

enum opTrigger vpx_method_Dispatch_20_Event_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex);
enum opTrigger vpx_method_Dispatch_20_Event_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex)
{
HEADER(1)
result = kSuccess;

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_Dispatch_20_Event(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Dispatch_20_Event_case_1(environment, &outcome, inputRepeat, contextIndex))
vpx_method_Dispatch_20_Event_case_2(environment, &outcome, inputRepeat, contextIndex);
return outcome;
}

enum opTrigger vpx_method_Execute_20_Idle_20_Callback_20_Deferred_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Execute_20_Idle_20_Callback_20_Deferred_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,2,TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_method_Add_20_Attachment_20_To_20_Callback(PARAMETERS,TERMINAL(0),TERMINAL(2),TERMINAL(3),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Execute_20_Idle_20_Callback_20_Deferred(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4)
{
HEADERWITHNONE(8)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
INPUT(4,4)
result = kSuccess;

result = vpx_method_Default_20_List(PARAMETERS,TERMINAL(1),ROOT(5));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(5))) ){
REPEATBEGINWITHCOUNTER
LOOPTERMINALBEGIN(1)
LOOPTERMINAL(0,0,6)
result = vpx_method_Execute_20_Idle_20_Callback_20_Deferred_case_1_local_3(PARAMETERS,LOOP(0),LIST(5),ROOT(6));
REPEATFINISH
} else {
ROOTNULL(6,TERMINAL(0))
}

result = vpx_match(PARAMETERS,"(  )",TERMINAL(6));
TERMINATEONSUCCESS

result = vpx_instantiate(PARAMETERS,kVPXClass_Carbon_20_Idle_20_Timer_20_Callback,1,1,NONE,ROOT(7));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Schedule_20_Callback,5,0,TERMINAL(7),TERMINAL(6),TERMINAL(2),TERMINAL(3),TERMINAL(4));

result = kSuccess;

FOOTERSINGLECASEWITHNONE(8)
}

enum opTrigger vpx_method_Process_20_HICommand_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Process_20_HICommand_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_integer_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(1)
}

enum opTrigger vpx_method_Process_20_HICommand_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Process_20_HICommand_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_method__22_Check_22_(PARAMETERS,TERMINAL(0),ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_string_2D_to_2D_integer,1,1,TERMINAL(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Process_20_HICommand_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Process_20_HICommand_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Process_20_HICommand_case_1_local_2_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Process_20_HICommand_case_1_local_2_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Process_20_HICommand_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Process_20_HICommand_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"HICommand",ROOT(2));

result = vpx_constant(PARAMETERS,"16",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_make_2D_external,2,1,TERMINAL(2),TERMINAL(3),ROOT(4));

result = vpx_extset(PARAMETERS,"attributes",2,1,TERMINAL(4),TERMINAL(0),ROOT(5));

result = vpx_extset(PARAMETERS,"commandID",2,1,TERMINAL(5),TERMINAL(1),ROOT(6));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERSINGLECASE(7)
}

enum opTrigger vpx_method_Process_20_HICommand(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Process_20_HICommand_case_1_local_2(PARAMETERS,TERMINAL(0),ROOT(2));

result = vpx_method_Default_20_Zero(PARAMETERS,TERMINAL(1),ROOT(3));

result = vpx_method_Process_20_HICommand_case_1_local_4(PARAMETERS,TERMINAL(3),TERMINAL(2),ROOT(4));

PUTINTEGER(ProcessHICommand( GETCONSTPOINTER(HICommand,*,TERMINAL(4))),5);
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTERSINGLECASE(6)
}




	Nat4 tempAttribute_EventRef_2F_Dynamic_20_Attributes[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Carbon_20_Event_20_Callback_2F_Name[] = {
0000000000, 0X0000003C, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X0000001E, 0X556E7469, 0X746C6564, 0X20436172,
0X626F6E20, 0X4576656E, 0X74204361, 0X6C6C6261, 0X636B0000
	};
	Nat4 tempAttribute_Carbon_20_Event_20_Callback_2F_Method_20_Name[] = {
0000000000, 0X00000020, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Carbon_20_Event_20_Callback_2F_Input_20_Specifiers[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Carbon_20_Event_20_Callback_2F_Output_20_Specifiers[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Carbon_20_Event_20_Callback_2F_Callback_20_Method_20_Name[] = {
0000000000, 0X0000002C, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X0000000F, 0X2F446F20, 0X43452043, 0X616C6C62,
0X61636B00
	};
	Nat4 tempAttribute_Carbon_20_Event_20_Callback_2F_ProcPtr_20_Name[] = {
0000000000, 0X00000030, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X00000013, 0X4576656E, 0X7448616E, 0X646C6572,
0X50726F63, 0X50747200
	};
	Nat4 tempAttribute_Carbon_20_Event_20_Callback_2F_Callback_20_Result[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Carbon_20_Event_20_Callback_2F_Event_20_Types[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Carbon_20_Timer_20_Callback_2F_Name[] = {
0000000000, 0X0000003C, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X0000001E, 0X556E7469, 0X746C6564, 0X20436172,
0X626F6E20, 0X54696D65, 0X72204361, 0X6C6C6261, 0X636B0000
	};
	Nat4 tempAttribute_Carbon_20_Timer_20_Callback_2F_Input_20_Specifiers[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Carbon_20_Timer_20_Callback_2F_Output_20_Specifiers[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Carbon_20_Timer_20_Callback_2F_Attachments[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Carbon_20_Timer_20_Callback_2F_Callback_20_Method_20_Name[] = {
0000000000, 0X0000002C, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X0000000F, 0X2F446F20, 0X43542043, 0X616C6C62,
0X61636B00
	};
	Nat4 tempAttribute_Carbon_20_Timer_20_Callback_2F_ProcPtr_20_Name[] = {
0000000000, 0X00000034, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X00000015, 0X4576656E, 0X744C6F6F, 0X7054696D,
0X65725072, 0X6F635074, 0X72000000
	};
	Nat4 tempAttribute_Carbon_20_Timer_20_Callback_2F_UPP_20_Allocate[] = {
0000000000, 0X00000034, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X00000014, 0X4E657745, 0X76656E74, 0X4C6F6F70,
0X54696D65, 0X72555050, 0000000000
	};
	Nat4 tempAttribute_Carbon_20_Timer_20_Callback_2F_UPP_20_Dispose[] = {
0000000000, 0X00000038, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X00000018, 0X44697370, 0X6F736545, 0X76656E74,
0X4C6F6F70, 0X54696D65, 0X72555050, 0000000000
	};
	Nat4 tempAttribute_Carbon_20_Timer_20_Callback_2F_Callback_20_Result[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Carbon_20_Timer_20_Callback_2F_Initial_20_Delay[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000007
	};
	Nat4 tempAttribute_Carbon_20_Timer_20_Callback_2F_Repeat_20_Delay[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000007
	};
	Nat4 tempAttribute_Carbon_20_Idle_20_Timer_20_Callback_2F_Name[] = {
0000000000, 0X00000040, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X00000023, 0X556E7469, 0X746C6564, 0X20436172,
0X626F6E20, 0X49646C65, 0X2054696D, 0X65722043, 0X616C6C62, 0X61636B00
	};
	Nat4 tempAttribute_Carbon_20_Idle_20_Timer_20_Callback_2F_Method_20_Name[] = {
0000000000, 0X00000020, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Carbon_20_Idle_20_Timer_20_Callback_2F_Input_20_Specifiers[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Carbon_20_Idle_20_Timer_20_Callback_2F_Output_20_Specifiers[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Carbon_20_Idle_20_Timer_20_Callback_2F_Attachments[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X05F10007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Carbon_20_Idle_20_Timer_20_Callback_2F_Callback_20_Method_20_Name[] = {
0000000000, 0X00000030, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X00000010, 0X2F446F20, 0X43495420, 0X43616C6C,
0X6261636B, 0000000000
	};
	Nat4 tempAttribute_Carbon_20_Idle_20_Timer_20_Callback_2F_ProcPtr_20_Name[] = {
0000000000, 0X00000038, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X00000019, 0X4576656E, 0X744C6F6F, 0X7049646C,
0X6554696D, 0X65725072, 0X6F635074, 0X72000000
	};
	Nat4 tempAttribute_Carbon_20_Idle_20_Timer_20_Callback_2F_UPP_20_Allocate[] = {
0000000000, 0X00000038, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X05F10006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X00000018, 0X4E657745, 0X76656E74, 0X4C6F6F70,
0X49646C65, 0X54696D65, 0X72555050, 0000000000
	};
	Nat4 tempAttribute_Carbon_20_Idle_20_Timer_20_Callback_2F_UPP_20_Dispose[] = {
0000000000, 0X0000003C, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X05F00006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X0000001C, 0X44697370, 0X6F736545, 0X76656E74,
0X4C6F6F70, 0X49646C65, 0X54696D65, 0X72555050, 0000000000
	};
	Nat4 tempAttribute_Carbon_20_Idle_20_Timer_20_Callback_2F_Callback_20_Result[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Carbon_20_Idle_20_Timer_20_Callback_2F_Initial_20_Delay[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000007
	};
	Nat4 tempAttribute_Carbon_20_Idle_20_Timer_20_Callback_2F_Repeat_20_Delay[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000007
	};


Nat4 VPLC_EventRef_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_EventRef_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 200 300 } */
	tempAttribute = attribute_add("Event Reference",tempClass,NULL,environment);
	tempAttribute = attribute_add("Next Handler",tempClass,NULL,environment);
	tempAttribute = attribute_add("User Data",tempClass,NULL,environment);
	tempAttribute = attribute_add("Dynamic Attributes",tempClass,tempAttribute_EventRef_2F_Dynamic_20_Attributes,environment);
/* Stop Attributes */

/* NULL SUPER CLASS */
	return kNOERROR;
}

/* Start Universals: { 44 874 }{ 852 345 } */
enum opTrigger vpx_method_EventRef_2F_Dispose(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = vpx_set(PARAMETERS,kVPXValue_Event_20_Reference,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_set(PARAMETERS,kVPXValue_Next_20_Handler,TERMINAL(0),TERMINAL(1),ROOT(3));

result = vpx_set(PARAMETERS,kVPXValue_User_20_Data,TERMINAL(0),TERMINAL(1),ROOT(4));

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_EventRef_2F_New(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADERWITHNONE(7)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_EventRef,1,1,NONE,ROOT(3));

result = vpx_set(PARAMETERS,kVPXValue_Next_20_Handler,TERMINAL(3),TERMINAL(0),ROOT(4));

result = vpx_set(PARAMETERS,kVPXValue_Event_20_Reference,TERMINAL(3),TERMINAL(1),ROOT(5));

result = vpx_set(PARAMETERS,kVPXValue_User_20_Data,TERMINAL(3),TERMINAL(2),ROOT(6));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASEWITHNONE(7)
}

enum opTrigger vpx_method_EventRef_2F_Get_20_Event_20_Reference(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Event_20_Reference,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_EventRef_2F_Get_20_Next_20_Handler(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Next_20_Handler,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_EventRef_2F_Get_20_User_20_Data(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_User_20_Data,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_EventRef_2F_Call_20_Next_20_Event_20_Handler_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_EventRef_2F_Call_20_Next_20_Event_20_Handler_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Next_20_Handler,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
NEXTCASEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Event_20_Reference,1,1,TERMINAL(0),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
NEXTCASEONSUCCESS

PUTINTEGER(CallNextEventHandler( GETPOINTER(0,OpaqueEventHandlerCallRef,*,ROOT(4),TERMINAL(1)),GETPOINTER(0,OpaqueEventRef,*,ROOT(5),TERMINAL(2))),3);
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(6)
}

enum opTrigger vpx_method_EventRef_2F_Call_20_Next_20_Event_20_Handler_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_EventRef_2F_Call_20_Next_20_Event_20_Handler_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Return_20_Parameter_20_Not_20_Found,1,1,TERMINAL(0),ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_EventRef_2F_Call_20_Next_20_Event_20_Handler(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_EventRef_2F_Call_20_Next_20_Event_20_Handler_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_EventRef_2F_Call_20_Next_20_Event_20_Handler_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_EventRef_2F_Return_20_Event_20_Not_20_Handled(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,eventNotHandledErr,ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_EventRef_2F_Return_20_Internal_20_Error(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,eventInternalErr,ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_EventRef_2F_Return_20_Parameter_20_Not_20_Found(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,eventParameterNotFoundErr,ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_EventRef_2F_Get_20_Event_20_Class_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_EventRef_2F_Get_20_Event_20_Class_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Event_20_Reference,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
NEXTCASEONSUCCESS

PUTINTEGER(GetEventClass( GETPOINTER(0,OpaqueEventRef,*,ROOT(3),TERMINAL(1))),2);
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(4)
}

enum opTrigger vpx_method_EventRef_2F_Get_20_Event_20_Class_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_EventRef_2F_Get_20_Event_20_Class_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\'????\'",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_EventRef_2F_Get_20_Event_20_Class(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_EventRef_2F_Get_20_Event_20_Class_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_EventRef_2F_Get_20_Event_20_Class_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_EventRef_2F_Get_20_Event_20_Kind_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_EventRef_2F_Get_20_Event_20_Kind_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Event_20_Reference,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
NEXTCASEONSUCCESS

PUTINTEGER(GetEventKind( GETPOINTER(0,OpaqueEventRef,*,ROOT(3),TERMINAL(1))),2);
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(4)
}

enum opTrigger vpx_method_EventRef_2F_Get_20_Event_20_Kind_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_EventRef_2F_Get_20_Event_20_Kind_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"0",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_EventRef_2F_Get_20_Event_20_Kind(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_EventRef_2F_Get_20_Event_20_Kind_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_EventRef_2F_Get_20_Event_20_Kind_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_EventRef_2F_Get_20_Event_20_Parameter_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3);
enum opTrigger vpx_method_EventRef_2F_Get_20_Event_20_Parameter_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3)
{
HEADER(13)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Event_20_Reference,1,1,TERMINAL(0),ROOT(4));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(4));
NEXTCASEONSUCCESS

result = vpx_constant(PARAMETERS,"void",ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_make_2D_external,2,1,TERMINAL(5),TERMINAL(3),ROOT(6));

result = vpx_constant(PARAMETERS,"NULL",ROOT(7));

PUTINTEGER(GetEventParameter( GETPOINTER(0,OpaqueEventRef,*,ROOT(9),TERMINAL(4)),GETINTEGER(TERMINAL(1)),GETINTEGER(TERMINAL(2)),GETPOINTER(4,unsigned int,*,ROOT(10),TERMINAL(7)),GETINTEGER(TERMINAL(3)),GETPOINTER(4,unsigned long,*,ROOT(11),TERMINAL(7)),GETPOINTER(0,void,*,ROOT(12),TERMINAL(6))),8);
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(8))
OUTPUT(1,TERMINAL(10))
OUTPUT(2,TERMINAL(11))
OUTPUT(3,TERMINAL(12))
FOOTER(13)
}

enum opTrigger vpx_method_EventRef_2F_Get_20_Event_20_Parameter_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3);
enum opTrigger vpx_method_EventRef_2F_Get_20_Event_20_Parameter_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Return_20_Parameter_20_Not_20_Found,1,1,TERMINAL(0),ROOT(4));

result = vpx_constant(PARAMETERS,"NULL",ROOT(5));

result = vpx_constant(PARAMETERS,"0",ROOT(6));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
OUTPUT(1,TERMINAL(5))
OUTPUT(2,TERMINAL(6))
OUTPUT(3,TERMINAL(5))
FOOTER(7)
}

enum opTrigger vpx_method_EventRef_2F_Get_20_Event_20_Parameter(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_EventRef_2F_Get_20_Event_20_Parameter_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0,root1,root2,root3))
vpx_method_EventRef_2F_Get_20_Event_20_Parameter_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0,root1,root2,root3);
return outcome;
}

enum opTrigger vpx_method_EventRef_2F_Get_20_EP_20_HICommand(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(8)
INPUT(0,0)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,kEventParamDirectObject,ROOT(1));

result = vpx_extconstant(PARAMETERS,typeHICommand,ROOT(2));

result = vpx_constant(PARAMETERS,"16",ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Event_20_Parameter,4,4,TERMINAL(0),TERMINAL(1),TERMINAL(2),TERMINAL(3),ROOT(4),ROOT(5),ROOT(6),ROOT(7));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
OUTPUT(1,TERMINAL(7))
FOOTERSINGLECASE(8)
}

enum opTrigger vpx_method_EventRef_2F_Get_20_EP_20_HIObjectRef_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_EventRef_2F_Get_20_EP_20_HIObjectRef_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"0",ROOT(2));

result = vpx_constant(PARAMETERS,"4",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_integer,3,3,TERMINAL(1),TERMINAL(2),TERMINAL(3),ROOT(4),ROOT(5),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP_to_2D_pointer,1,1,TERMINAL(6),ROOT(7));

result = kSuccess;

OUTPUT(0,TERMINAL(7))
FOOTER(8)
}

enum opTrigger vpx_method_EventRef_2F_Get_20_EP_20_HIObjectRef_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_EventRef_2F_Get_20_EP_20_HIObjectRef_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
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

enum opTrigger vpx_method_EventRef_2F_Get_20_EP_20_HIObjectRef_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_EventRef_2F_Get_20_EP_20_HIObjectRef_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_EventRef_2F_Get_20_EP_20_HIObjectRef_case_1_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_EventRef_2F_Get_20_EP_20_HIObjectRef_case_1_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_EventRef_2F_Get_20_EP_20_HIObjectRef_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_EventRef_2F_Get_20_EP_20_HIObjectRef_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"GetEventParam HIObjectRef",ROOT(2));

result = vpx_method_Debug_20_OSError(PARAMETERS,TERMINAL(2),TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_EventRef_2F_Get_20_EP_20_HIObjectRef(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,typeHIObjectRef,ROOT(2));

result = vpx_constant(PARAMETERS,"4",ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Event_20_Parameter,4,4,TERMINAL(0),TERMINAL(1),TERMINAL(2),TERMINAL(3),ROOT(4),ROOT(5),ROOT(6),ROOT(7));

result = vpx_method_EventRef_2F_Get_20_EP_20_HIObjectRef_case_1_local_5(PARAMETERS,TERMINAL(4),TERMINAL(7),ROOT(8));

result = vpx_method_EventRef_2F_Get_20_EP_20_HIObjectRef_case_1_local_6(PARAMETERS,TERMINAL(4),TERMINAL(8));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
OUTPUT(1,TERMINAL(8))
FOOTERSINGLECASE(9)
}

enum opTrigger vpx_method_EventRef_2F_Get_20_EP_20_typePartCode_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_EventRef_2F_Get_20_EP_20_typePartCode_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(0));
NEXTCASEONSUCCESS

result = vpx_constant(PARAMETERS,"0",ROOT(1));

result = vpx_constant(PARAMETERS,"2",ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_pointer_2D_to_2D_integer,3,3,TERMINAL(0),TERMINAL(1),TERMINAL(2),ROOT(3),ROOT(4),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTER(6)
}

enum opTrigger vpx_method_EventRef_2F_Get_20_EP_20_typePartCode_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_EventRef_2F_Get_20_EP_20_typePartCode_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"0",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_EventRef_2F_Get_20_EP_20_typePartCode_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_EventRef_2F_Get_20_EP_20_typePartCode_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_EventRef_2F_Get_20_EP_20_typePartCode_case_1_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_EventRef_2F_Get_20_EP_20_typePartCode_case_1_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_EventRef_2F_Get_20_EP_20_typePartCode(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,typeControlPartCode,ROOT(2));

result = vpx_constant(PARAMETERS,"2",ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Event_20_Parameter,4,4,TERMINAL(0),TERMINAL(1),TERMINAL(2),TERMINAL(3),ROOT(4),ROOT(5),ROOT(6),ROOT(7));

result = vpx_method_EventRef_2F_Get_20_EP_20_typePartCode_case_1_local_5(PARAMETERS,TERMINAL(7),ROOT(8));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
OUTPUT(1,TERMINAL(8))
FOOTERSINGLECASE(9)
}

enum opTrigger vpx_method_EventRef_2F_Get_20_EP_20_Control_20_Part(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,kEventParamControlPart,ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_EP_20_typePartCode,2,2,TERMINAL(0),TERMINAL(1),ROOT(2),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
OUTPUT(1,TERMINAL(3))
FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_EventRef_2F_Set_20_Event_20_Parameter_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_EventRef_2F_Set_20_Event_20_Parameter_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"SetEventParameter",ROOT(1));

result = vpx_method_Debug_20_OSError(PARAMETERS,TERMINAL(1),TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_EventRef_2F_Set_20_Event_20_Parameter_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4,V_Object *root0);
enum opTrigger vpx_method_EventRef_2F_Set_20_Event_20_Parameter_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4,V_Object *root0)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
INPUT(4,4)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Event_20_Reference,1,1,TERMINAL(0),ROOT(5));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(5));
NEXTCASEONSUCCESS

PUTINTEGER(SetEventParameter( GETPOINTER(0,OpaqueEventRef,*,ROOT(7),TERMINAL(5)),GETINTEGER(TERMINAL(1)),GETINTEGER(TERMINAL(2)),GETINTEGER(TERMINAL(3)),GETCONSTPOINTER(void,*,TERMINAL(4))),6);
result = kSuccess;

result = vpx_method_EventRef_2F_Set_20_Event_20_Parameter_case_1_local_5(PARAMETERS,TERMINAL(6));

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTER(8)
}

enum opTrigger vpx_method_EventRef_2F_Set_20_Event_20_Parameter_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4,V_Object *root0);
enum opTrigger vpx_method_EventRef_2F_Set_20_Event_20_Parameter_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
INPUT(4,4)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Return_20_Parameter_20_Not_20_Found,1,1,TERMINAL(0),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTER(6)
}

enum opTrigger vpx_method_EventRef_2F_Set_20_Event_20_Parameter(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_EventRef_2F_Set_20_Event_20_Parameter_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,terminal4,root0))
vpx_method_EventRef_2F_Set_20_Event_20_Parameter_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,terminal4,root0);
return outcome;
}

enum opTrigger vpx_method_EventRef_2F_Set_20_EP_20_HIObject_20_Instance_case_1_local_11(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_EventRef_2F_Set_20_EP_20_HIObject_20_Instance_case_1_local_11(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"SetEventParameter",ROOT(1));

result = vpx_method_Debug_20_OSError(PARAMETERS,TERMINAL(1),TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_EventRef_2F_Set_20_EP_20_HIObject_20_Instance(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(12)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,kEventParamHIObjectInstance,ROOT(2));

result = vpx_extconstant(PARAMETERS,typeVoidPtr,ROOT(3));

result = vpx_constant(PARAMETERS,"4",ROOT(4));

result = vpx_constant(PARAMETERS,"void",ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_make_2D_external,2,1,TERMINAL(5),TERMINAL(4),ROOT(6));

result = vpx_constant(PARAMETERS,"0",ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP_object_2D_to_2D_address,1,1,TERMINAL(1),ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP_put_2D_integer,4,2,TERMINAL(6),TERMINAL(7),TERMINAL(4),TERMINAL(8),ROOT(9),ROOT(10));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Event_20_Parameter,5,1,TERMINAL(0),TERMINAL(2),TERMINAL(3),TERMINAL(4),TERMINAL(6),ROOT(11));

result = vpx_method_EventRef_2F_Set_20_EP_20_HIObject_20_Instance_case_1_local_11(PARAMETERS,TERMINAL(11));

result = kSuccess;

OUTPUT(0,TERMINAL(11))
FOOTERSINGLECASE(12)
}

enum opTrigger vpx_method_EventRef_2F_Set_20_EP_20_SInt16_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_EventRef_2F_Set_20_EP_20_SInt16_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"VOID",ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_make_2D_external,2,1,TERMINAL(2),TERMINAL(1),ROOT(3));

result = vpx_constant(PARAMETERS,"0",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_integer_2D_to_2D_pointer,4,2,TERMINAL(3),TERMINAL(4),TERMINAL(1),TERMINAL(0),ROOT(5),ROOT(6));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASE(7)
}

enum opTrigger vpx_method_EventRef_2F_Set_20_EP_20_SInt16(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"2",ROOT(3));

result = vpx_method_EventRef_2F_Set_20_EP_20_SInt16_case_1_local_3(PARAMETERS,TERMINAL(2),TERMINAL(3),ROOT(4));

result = vpx_extconstant(PARAMETERS,typeSInt16,ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Event_20_Parameter,5,1,TERMINAL(0),TERMINAL(1),TERMINAL(5),TERMINAL(3),TERMINAL(4),ROOT(6));

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTERSINGLECASE(7)
}

enum opTrigger vpx_method_EventRef_2F_Set_20_EP_20_UInt32_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_EventRef_2F_Set_20_EP_20_UInt32_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"VOID",ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_make_2D_external,2,1,TERMINAL(2),TERMINAL(1),ROOT(3));

result = vpx_constant(PARAMETERS,"0",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_integer_2D_to_2D_pointer,4,2,TERMINAL(3),TERMINAL(4),TERMINAL(1),TERMINAL(0),ROOT(5),ROOT(6));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASE(7)
}

enum opTrigger vpx_method_EventRef_2F_Set_20_EP_20_UInt32(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"4",ROOT(3));

result = vpx_method_EventRef_2F_Set_20_EP_20_UInt32_case_1_local_3(PARAMETERS,TERMINAL(2),TERMINAL(3),ROOT(4));

result = vpx_extconstant(PARAMETERS,typeUInt32,ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Event_20_Parameter,5,1,TERMINAL(0),TERMINAL(1),TERMINAL(5),TERMINAL(3),TERMINAL(4),ROOT(6));

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTERSINGLECASE(7)
}

enum opTrigger vpx_method_EventRef_2F_Set_20_EP_20_Boolean_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_EventRef_2F_Set_20_EP_20_Boolean_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"VOID",ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_make_2D_external,2,1,TERMINAL(2),TERMINAL(1),ROOT(3));

result = vpx_constant(PARAMETERS,"0",ROOT(4));

result = vpx_method_Boolean_20_To_20_Integer(PARAMETERS,TERMINAL(0),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_put_2D_integer,4,2,TERMINAL(3),TERMINAL(4),TERMINAL(1),TERMINAL(5),ROOT(6),ROOT(7));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASE(8)
}

enum opTrigger vpx_method_EventRef_2F_Set_20_EP_20_Boolean(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"1",ROOT(3));

result = vpx_method_EventRef_2F_Set_20_EP_20_Boolean_case_1_local_3(PARAMETERS,TERMINAL(2),TERMINAL(3),ROOT(4));

result = vpx_extconstant(PARAMETERS,typeBoolean,ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Event_20_Parameter,5,1,TERMINAL(0),TERMINAL(1),TERMINAL(5),TERMINAL(3),TERMINAL(4),ROOT(6));

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTERSINGLECASE(7)
}

enum opTrigger vpx_method_EventRef_2F_Set_20_EP_20_typePartCode_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_EventRef_2F_Set_20_EP_20_typePartCode_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"VOID",ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_make_2D_external,2,1,TERMINAL(2),TERMINAL(1),ROOT(3));

result = vpx_constant(PARAMETERS,"0",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_put_2D_integer,4,2,TERMINAL(3),TERMINAL(4),TERMINAL(1),TERMINAL(0),ROOT(5),ROOT(6));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASE(7)
}

enum opTrigger vpx_method_EventRef_2F_Set_20_EP_20_typePartCode(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"2",ROOT(3));

result = vpx_method_EventRef_2F_Set_20_EP_20_typePartCode_case_1_local_3(PARAMETERS,TERMINAL(2),TERMINAL(3),ROOT(4));

result = vpx_extconstant(PARAMETERS,typeControlPartCode,ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Event_20_Parameter,5,1,TERMINAL(0),TERMINAL(1),TERMINAL(5),TERMINAL(3),TERMINAL(4),ROOT(6));

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTERSINGLECASE(7)
}

enum opTrigger vpx_method_EventRef_2F_Set_20_EP_20_typeRef_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_EventRef_2F_Set_20_EP_20_typeRef_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"VOID",ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_make_2D_external,2,1,TERMINAL(2),TERMINAL(1),ROOT(3));

result = vpx_constant(PARAMETERS,"0",ROOT(4));

result = vpx_method_Coerce_20_Integer(PARAMETERS,TERMINAL(0),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_put_2D_integer,4,2,TERMINAL(3),TERMINAL(4),TERMINAL(1),TERMINAL(5),ROOT(6),ROOT(7));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASE(8)
}

enum opTrigger vpx_method_EventRef_2F_Set_20_EP_20_typeRef(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_constant(PARAMETERS,"4",ROOT(4));

result = vpx_method_EventRef_2F_Set_20_EP_20_typeRef_case_1_local_3(PARAMETERS,TERMINAL(3),TERMINAL(4),ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Event_20_Parameter,5,1,TERMINAL(0),TERMINAL(1),TERMINAL(2),TERMINAL(4),TERMINAL(5),ROOT(6));

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTERSINGLECASE(7)
}

enum opTrigger vpx_method_EventRef_2F_Set_20_EP_20_Text_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_EventRef_2F_Set_20_EP_20_Text_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(7)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"VOID",ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_byte_2D_length,1,1,TERMINAL(0),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_make_2D_external,2,1,TERMINAL(1),TERMINAL(2),ROOT(3));

result = vpx_constant(PARAMETERS,"0",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_put_2D_text,4,2,TERMINAL(3),TERMINAL(4),TERMINAL(2),TERMINAL(0),ROOT(5),ROOT(6));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
OUTPUT(1,TERMINAL(3))
FOOTERSINGLECASE(7)
}

enum opTrigger vpx_method_EventRef_2F_Set_20_EP_20_Text(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_method_EventRef_2F_Set_20_EP_20_Text_case_1_local_2(PARAMETERS,TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_extconstant(PARAMETERS,typeChar,ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Event_20_Parameter,5,1,TERMINAL(0),TERMINAL(1),TERMINAL(5),TERMINAL(3),TERMINAL(4),ROOT(6));

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTERSINGLECASE(7)
}

enum opTrigger vpx_method_EventRef_2F_Set_20_EP_20_Control_20_Part(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,kEventParamControlPart,ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_EP_20_typePartCode,3,1,TERMINAL(0),TERMINAL(2),TERMINAL(1),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_EventRef_2F_Get_20_EP_20_QDRect_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_EventRef_2F_Get_20_EP_20_QDRect_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"GetEventParameter Rect",ROOT(1));

result = vpx_method_Debug_20_OSError(PARAMETERS,TERMINAL(1),TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_EventRef_2F_Get_20_EP_20_QDRect(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,typeQDRectangle,ROOT(2));

result = vpx_constant(PARAMETERS,"8",ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Event_20_Parameter,4,4,TERMINAL(0),TERMINAL(1),TERMINAL(2),TERMINAL(3),ROOT(4),ROOT(5),ROOT(6),ROOT(7));

result = vpx_constant(PARAMETERS,"Rect",ROOT(8));

result = vpx_method_EventRef_2F_Get_20_EP_20_QDRect_case_1_local_6(PARAMETERS,TERMINAL(4));

result = vpx_call_primitive(PARAMETERS,VPLP_set_2D_external_2D_type,2,0,TERMINAL(7),TERMINAL(8));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
OUTPUT(1,TERMINAL(7))
FOOTERSINGLECASE(9)
}

enum opTrigger vpx_method_EventRef_2F_Set_20_EP_20_QDRect(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,typeQDRectangle,ROOT(3));

result = vpx_constant(PARAMETERS,"8",ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Event_20_Parameter,5,1,TERMINAL(0),TERMINAL(1),TERMINAL(3),TERMINAL(4),TERMINAL(2),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_EventRef_2F_Get_20_EP_20_QDPoint(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,typeQDPoint,ROOT(2));

result = vpx_constant(PARAMETERS,"4",ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Event_20_Parameter,4,4,TERMINAL(0),TERMINAL(1),TERMINAL(2),TERMINAL(3),ROOT(4),ROOT(5),ROOT(6),ROOT(7));

result = vpx_constant(PARAMETERS,"Point",ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP_set_2D_external_2D_type,2,0,TERMINAL(7),TERMINAL(8));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
OUTPUT(1,TERMINAL(7))
FOOTERSINGLECASE(9)
}

enum opTrigger vpx_method_EventRef_2F_Set_20_EP_20_QDPoint(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,typeQDPoint,ROOT(3));

result = vpx_constant(PARAMETERS,"4",ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Event_20_Parameter,5,1,TERMINAL(0),TERMINAL(1),TERMINAL(3),TERMINAL(4),TERMINAL(2),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_EventRef_2F_Get_20_EP_20_Mouse_20_Location_20_CG(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,kEventParamMouseLocation,ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_EP_20_HIPoint,2,2,TERMINAL(0),TERMINAL(1),ROOT(2),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
OUTPUT(1,TERMINAL(3))
FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_EventRef_2F_Get_20_EP_20_Mouse_20_Location_20_QD(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,kEventParamMouseLocation,ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_EP_20_QDPoint,2,2,TERMINAL(0),TERMINAL(1),ROOT(2),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
OUTPUT(1,TERMINAL(3))
FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_EventRef_2F_Get_20_EP_20_Boolean_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_EventRef_2F_Get_20_EP_20_Boolean_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"0",ROOT(2));

result = vpx_constant(PARAMETERS,"1",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_integer,3,3,TERMINAL(1),TERMINAL(2),TERMINAL(3),ROOT(4),ROOT(5),ROOT(6));

result = vpx_method_Integer_20_To_20_Boolean(PARAMETERS,TERMINAL(6),ROOT(7));

result = kSuccess;

OUTPUT(0,TERMINAL(7))
FOOTER(8)
}

enum opTrigger vpx_method_EventRef_2F_Get_20_EP_20_Boolean_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_EventRef_2F_Get_20_EP_20_Boolean_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"FALSE",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_EventRef_2F_Get_20_EP_20_Boolean_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_EventRef_2F_Get_20_EP_20_Boolean_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_EventRef_2F_Get_20_EP_20_Boolean_case_1_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_EventRef_2F_Get_20_EP_20_Boolean_case_1_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_EventRef_2F_Get_20_EP_20_Boolean(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,typeBoolean,ROOT(2));

result = vpx_constant(PARAMETERS,"1",ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Event_20_Parameter,4,4,TERMINAL(0),TERMINAL(1),TERMINAL(2),TERMINAL(3),ROOT(4),ROOT(5),ROOT(6),ROOT(7));

result = vpx_method_EventRef_2F_Get_20_EP_20_Boolean_case_1_local_5(PARAMETERS,TERMINAL(4),TERMINAL(7),ROOT(8));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
OUTPUT(1,TERMINAL(8))
FOOTERSINGLECASE(9)
}

enum opTrigger vpx_method_EventRef_2F_Get_20_EP_20_typeRef(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"4",ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Event_20_Parameter,4,4,TERMINAL(0),TERMINAL(1),TERMINAL(2),TERMINAL(3),ROOT(4),ROOT(5),ROOT(6),ROOT(7));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
OUTPUT(1,TERMINAL(7))
FOOTERSINGLECASE(8)
}

enum opTrigger vpx_method_EventRef_2F_Get_20_EP_20_SInt16_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_EventRef_2F_Get_20_EP_20_SInt16_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"0",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_integer,3,3,TERMINAL(1),TERMINAL(3),TERMINAL(2),ROOT(4),ROOT(5),ROOT(6));

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTER(7)
}

enum opTrigger vpx_method_EventRef_2F_Get_20_EP_20_SInt16_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_EventRef_2F_Get_20_EP_20_SInt16_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"0",ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_EventRef_2F_Get_20_EP_20_SInt16_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_EventRef_2F_Get_20_EP_20_SInt16_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_EventRef_2F_Get_20_EP_20_SInt16_case_1_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
vpx_method_EventRef_2F_Get_20_EP_20_SInt16_case_1_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0);
return outcome;
}

enum opTrigger vpx_method_EventRef_2F_Get_20_EP_20_SInt16(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,typeSInt16,ROOT(2));

result = vpx_constant(PARAMETERS,"2",ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Event_20_Parameter,4,4,TERMINAL(0),TERMINAL(1),TERMINAL(2),TERMINAL(3),ROOT(4),ROOT(5),ROOT(6),ROOT(7));

result = vpx_method_EventRef_2F_Get_20_EP_20_SInt16_case_1_local_5(PARAMETERS,TERMINAL(4),TERMINAL(7),TERMINAL(3),ROOT(8));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
OUTPUT(1,TERMINAL(8))
FOOTERSINGLECASE(9)
}

enum opTrigger vpx_method_EventRef_2F_Get_20_EP_20_UInt32_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_EventRef_2F_Get_20_EP_20_UInt32_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"0",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_integer,3,3,TERMINAL(1),TERMINAL(3),TERMINAL(2),ROOT(4),ROOT(5),ROOT(6));

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTER(7)
}

enum opTrigger vpx_method_EventRef_2F_Get_20_EP_20_UInt32_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_EventRef_2F_Get_20_EP_20_UInt32_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"0",ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_EventRef_2F_Get_20_EP_20_UInt32_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_EventRef_2F_Get_20_EP_20_UInt32_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_EventRef_2F_Get_20_EP_20_UInt32_case_1_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
vpx_method_EventRef_2F_Get_20_EP_20_UInt32_case_1_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0);
return outcome;
}

enum opTrigger vpx_method_EventRef_2F_Get_20_EP_20_UInt32(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,typeUInt32,ROOT(2));

result = vpx_constant(PARAMETERS,"4",ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Event_20_Parameter,4,4,TERMINAL(0),TERMINAL(1),TERMINAL(2),TERMINAL(3),ROOT(4),ROOT(5),ROOT(6),ROOT(7));

result = vpx_method_EventRef_2F_Get_20_EP_20_UInt32_case_1_local_5(PARAMETERS,TERMINAL(4),TERMINAL(7),TERMINAL(3),ROOT(8));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
OUTPUT(1,TERMINAL(8))
FOOTERSINGLECASE(9)
}

enum opTrigger vpx_method_EventRef_2F_Get_20_EP_20_QDRgnHandle(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,typeQDRgnHandle,ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_EP_20_typePtr,3,2,TERMINAL(0),TERMINAL(1),TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_constant(PARAMETERS,"OpaqueRgnHandle",ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_set_2D_external_2D_type,2,0,TERMINAL(4),TERMINAL(5));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
OUTPUT(1,TERMINAL(4))
FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_EventRef_2F_Get_20_EP_20_Control_20_Region(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,kEventParamControlRegion,ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_EP_20_QDRgnHandle,2,2,TERMINAL(0),TERMINAL(1),ROOT(2),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
OUTPUT(1,TERMINAL(3))
FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_EventRef_2F_Set_20_EP_20_QDRgnHandle(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"4",ROOT(3));

result = vpx_extconstant(PARAMETERS,typeQDRgnHandle,ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Event_20_Parameter,5,1,TERMINAL(0),TERMINAL(1),TERMINAL(4),TERMINAL(3),TERMINAL(2),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_EventRef_2F_Set_20_EP_20_Control_20_Region(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,kEventParamControlRegion,ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_EP_20_QDRgnHandle,3,1,TERMINAL(0),TERMINAL(2),TERMINAL(1),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_EventRef_2F_Get_20_EP_20_Enumeration_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_EventRef_2F_Get_20_EP_20_Enumeration_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"0",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_integer,3,3,TERMINAL(1),TERMINAL(3),TERMINAL(2),ROOT(4),ROOT(5),ROOT(6));

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTER(7)
}

enum opTrigger vpx_method_EventRef_2F_Get_20_EP_20_Enumeration_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_EventRef_2F_Get_20_EP_20_Enumeration_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"0",ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_EventRef_2F_Get_20_EP_20_Enumeration_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_EventRef_2F_Get_20_EP_20_Enumeration_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_EventRef_2F_Get_20_EP_20_Enumeration_case_1_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
vpx_method_EventRef_2F_Get_20_EP_20_Enumeration_case_1_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0);
return outcome;
}

enum opTrigger vpx_method_EventRef_2F_Get_20_EP_20_Enumeration(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,typeEnumeration,ROOT(2));

result = vpx_constant(PARAMETERS,"4",ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Event_20_Parameter,4,4,TERMINAL(0),TERMINAL(1),TERMINAL(2),TERMINAL(3),ROOT(4),ROOT(5),ROOT(6),ROOT(7));

result = vpx_method_EventRef_2F_Get_20_EP_20_Enumeration_case_1_local_5(PARAMETERS,TERMINAL(4),TERMINAL(7),TERMINAL(3),ROOT(8));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
OUTPUT(1,TERMINAL(8))
FOOTERSINGLECASE(9)
}

enum opTrigger vpx_method_EventRef_2F_Get_20_EP_20_typePtr_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_EventRef_2F_Get_20_EP_20_typePtr_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"0",ROOT(2));

result = vpx_constant(PARAMETERS,"4",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_integer,3,3,TERMINAL(1),TERMINAL(2),TERMINAL(3),ROOT(4),ROOT(5),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP_to_2D_pointer,1,1,TERMINAL(6),ROOT(7));

result = kSuccess;

OUTPUT(0,TERMINAL(7))
FOOTER(8)
}

enum opTrigger vpx_method_EventRef_2F_Get_20_EP_20_typePtr_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_EventRef_2F_Get_20_EP_20_typePtr_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
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

enum opTrigger vpx_method_EventRef_2F_Get_20_EP_20_typePtr_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_EventRef_2F_Get_20_EP_20_typePtr_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_EventRef_2F_Get_20_EP_20_typePtr_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_EventRef_2F_Get_20_EP_20_typePtr_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_EventRef_2F_Get_20_EP_20_typePtr(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_EP_20_typeRef,3,2,TERMINAL(0),TERMINAL(1),TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_method_EventRef_2F_Get_20_EP_20_typePtr_case_1_local_3(PARAMETERS,TERMINAL(3),TERMINAL(4),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
OUTPUT(1,TERMINAL(5))
FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_EventRef_2F_Get_20_EP_20_CGContextRef_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_EventRef_2F_Get_20_EP_20_CGContextRef_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"0",ROOT(2));

result = vpx_constant(PARAMETERS,"4",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_integer,3,3,TERMINAL(1),TERMINAL(2),TERMINAL(3),ROOT(4),ROOT(5),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP_to_2D_pointer,1,1,TERMINAL(6),ROOT(7));

result = kSuccess;

OUTPUT(0,TERMINAL(7))
FOOTER(8)
}

enum opTrigger vpx_method_EventRef_2F_Get_20_EP_20_CGContextRef_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_EventRef_2F_Get_20_EP_20_CGContextRef_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
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

enum opTrigger vpx_method_EventRef_2F_Get_20_EP_20_CGContextRef_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_EventRef_2F_Get_20_EP_20_CGContextRef_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_EventRef_2F_Get_20_EP_20_CGContextRef_case_1_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_EventRef_2F_Get_20_EP_20_CGContextRef_case_1_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_EventRef_2F_Get_20_EP_20_CGContextRef_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_EventRef_2F_Get_20_EP_20_CGContextRef_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(0));
TERMINATEONFAILURE

result = vpx_constant(PARAMETERS,"CGContext",ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_set_2D_external_2D_type,2,0,TERMINAL(1),TERMINAL(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_EventRef_2F_Get_20_EP_20_CGContextRef_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_EventRef_2F_Get_20_EP_20_CGContextRef_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,kEventParamCGContextRef,ROOT(1));

result = vpx_extconstant(PARAMETERS,typeCGContextRef,ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_EP_20_typeRef,3,2,TERMINAL(0),TERMINAL(1),TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_method_EventRef_2F_Get_20_EP_20_CGContextRef_case_1_local_5(PARAMETERS,TERMINAL(3),TERMINAL(4),ROOT(5));

result = vpx_method_EventRef_2F_Get_20_EP_20_CGContextRef_case_1_local_6(PARAMETERS,TERMINAL(3),TERMINAL(5));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(3))
OUTPUT(1,TERMINAL(5))
FOOTER(6)
}

enum opTrigger vpx_method_EventRef_2F_Get_20_EP_20_CGContextRef_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_EventRef_2F_Get_20_EP_20_CGContextRef_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,paramErr,ROOT(1));

result = vpx_constant(PARAMETERS,"NULL",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
OUTPUT(1,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_EventRef_2F_Get_20_EP_20_CGContextRef(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_EventRef_2F_Get_20_EP_20_CGContextRef_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1))
vpx_method_EventRef_2F_Get_20_EP_20_CGContextRef_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1);
return outcome;
}

enum opTrigger vpx_method_EventRef_2F_Create_20_Event_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_EventRef_2F_Create_20_Event_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_number_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(1)
}

enum opTrigger vpx_method_EventRef_2F_Create_20_Event_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_EventRef_2F_Create_20_Event_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

PUTREAL(GetCurrentEventTime(),1);
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_EventRef_2F_Create_20_Event_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_EventRef_2F_Create_20_Event_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_EventRef_2F_Create_20_Event_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_EventRef_2F_Create_20_Event_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_EventRef_2F_Create_20_Event_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_EventRef_2F_Create_20_Event_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Default_20_FALSE(PARAMETERS,TERMINAL(0),ROOT(1));

result = vpx_extconstant(PARAMETERS,kEventAttributeUserEvent,ROOT(2));

result = vpx_extconstant(PARAMETERS,kEventAttributeNone,ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_choose,3,1,TERMINAL(1),TERMINAL(2),TERMINAL(3),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_EventRef_2F_Create_20_Event(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4,V_Object *root0)
{
HEADERWITHNONE(11)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
INPUT(4,4)
result = kSuccess;

PUTPOINTER(__CFAllocator,*,CFAllocatorGetDefault(),5);
result = kSuccess;

result = vpx_method_EventRef_2F_Create_20_Event_case_1_local_3(PARAMETERS,TERMINAL(3),ROOT(6));

result = vpx_method_EventRef_2F_Create_20_Event_case_1_local_4(PARAMETERS,TERMINAL(4),ROOT(7));

PUTINTEGER(CreateEvent( GETCONSTPOINTER(__CFAllocator,*,TERMINAL(5)),GETINTEGER(TERMINAL(1)),GETINTEGER(TERMINAL(2)),GETREAL(TERMINAL(6)),GETINTEGER(TERMINAL(7)),GETPOINTER(0,OpaqueEventRef,**,ROOT(9),NONE)),8);
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Event_20_Reference,TERMINAL(0),TERMINAL(9),ROOT(10));

result = kSuccess;

OUTPUT(0,TERMINAL(8))
FOOTERSINGLECASEWITHNONE(11)
}

enum opTrigger vpx_method_EventRef_2F_Create_20_HIObject_20_Initialization_20_Event(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADERWITHNONE(4)
INPUT(0,0)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,kEventClassHIObject,ROOT(1));

result = vpx_extconstant(PARAMETERS,kEventHIObjectInitialize,ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Create_20_Event,5,1,TERMINAL(0),TERMINAL(1),TERMINAL(2),NONE,NONE,ROOT(3));

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(3));
FAILONFAILURE

result = kSuccess;

FOOTERSINGLECASEWITHNONE(4)
}

enum opTrigger vpx_method_EventRef_2F_Retain_20_Event(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Event_20_Reference,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
NEXTCASEONSUCCESS

PUTPOINTER(OpaqueEventRef,*,RetainEvent( GETPOINTER(0,OpaqueEventRef,*,ROOT(3),TERMINAL(1))),2);
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_EventRef_2F_Release_20_Event(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Event_20_Reference,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
NEXTCASEONSUCCESS

ReleaseEvent( GETPOINTER(0,OpaqueEventRef,*,ROOT(2),TERMINAL(1)));
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_EventRef_2F_Get_20_EP_20_CFStringRef_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_EventRef_2F_Get_20_EP_20_CFStringRef_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"0",ROOT(2));

result = vpx_constant(PARAMETERS,"4",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_integer,3,3,TERMINAL(1),TERMINAL(2),TERMINAL(3),ROOT(4),ROOT(5),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP_to_2D_pointer,1,1,TERMINAL(6),ROOT(7));

result = kSuccess;

OUTPUT(0,TERMINAL(7))
FOOTER(8)
}

enum opTrigger vpx_method_EventRef_2F_Get_20_EP_20_CFStringRef_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_EventRef_2F_Get_20_EP_20_CFStringRef_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
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

enum opTrigger vpx_method_EventRef_2F_Get_20_EP_20_CFStringRef_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_EventRef_2F_Get_20_EP_20_CFStringRef_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_EventRef_2F_Get_20_EP_20_CFStringRef_case_1_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_EventRef_2F_Get_20_EP_20_CFStringRef_case_1_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_EventRef_2F_Get_20_EP_20_CFStringRef_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_EventRef_2F_Get_20_EP_20_CFStringRef_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(0));
TERMINATEONFAILURE

result = vpx_constant(PARAMETERS,"__CFString",ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_set_2D_external_2D_type,2,0,TERMINAL(1),TERMINAL(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_EventRef_2F_Get_20_EP_20_CFStringRef_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_EventRef_2F_Get_20_EP_20_CFStringRef_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,typeCFStringRef,ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_EP_20_typeRef,3,2,TERMINAL(0),TERMINAL(1),TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_method_EventRef_2F_Get_20_EP_20_CFStringRef_case_1_local_4(PARAMETERS,TERMINAL(3),TERMINAL(4),ROOT(5));

result = vpx_method_EventRef_2F_Get_20_EP_20_CFStringRef_case_1_local_5(PARAMETERS,TERMINAL(3),TERMINAL(5));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(3))
OUTPUT(1,TERMINAL(5))
FOOTER(6)
}

enum opTrigger vpx_method_EventRef_2F_Get_20_EP_20_CFStringRef_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_EventRef_2F_Get_20_EP_20_CFStringRef_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,paramErr,ROOT(2));

result = vpx_constant(PARAMETERS,"NULL",ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
OUTPUT(1,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_EventRef_2F_Get_20_EP_20_CFStringRef(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_EventRef_2F_Get_20_EP_20_CFStringRef_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1))
vpx_method_EventRef_2F_Get_20_EP_20_CFStringRef_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1);
return outcome;
}

enum opTrigger vpx_method_EventRef_2F_Get_20_EP_20_CFString(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_EP_20_CFStringRef,2,2,TERMINAL(0),TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(2));
FAILONFAILURE

result = vpx_method_CF_20_String_2F_New(PARAMETERS,TERMINAL(3),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_EventRef_2F_Get_20_EP_20_CFMutableArrayRef_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_EventRef_2F_Get_20_EP_20_CFMutableArrayRef_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"0",ROOT(2));

result = vpx_constant(PARAMETERS,"4",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_integer,3,3,TERMINAL(1),TERMINAL(2),TERMINAL(3),ROOT(4),ROOT(5),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP_to_2D_pointer,1,1,TERMINAL(6),ROOT(7));

result = kSuccess;

OUTPUT(0,TERMINAL(7))
FOOTER(8)
}

enum opTrigger vpx_method_EventRef_2F_Get_20_EP_20_CFMutableArrayRef_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_EventRef_2F_Get_20_EP_20_CFMutableArrayRef_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
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

enum opTrigger vpx_method_EventRef_2F_Get_20_EP_20_CFMutableArrayRef_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_EventRef_2F_Get_20_EP_20_CFMutableArrayRef_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_EventRef_2F_Get_20_EP_20_CFMutableArrayRef_case_1_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_EventRef_2F_Get_20_EP_20_CFMutableArrayRef_case_1_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_EventRef_2F_Get_20_EP_20_CFMutableArrayRef_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_EventRef_2F_Get_20_EP_20_CFMutableArrayRef_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(0));
TERMINATEONFAILURE

result = vpx_constant(PARAMETERS,"__CFArray",ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_set_2D_external_2D_type,2,0,TERMINAL(1),TERMINAL(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_EventRef_2F_Get_20_EP_20_CFMutableArrayRef_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_EventRef_2F_Get_20_EP_20_CFMutableArrayRef_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,typeCFMutableArrayRef,ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_EP_20_typeRef,3,2,TERMINAL(0),TERMINAL(1),TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_method_EventRef_2F_Get_20_EP_20_CFMutableArrayRef_case_1_local_4(PARAMETERS,TERMINAL(3),TERMINAL(4),ROOT(5));

result = vpx_method_EventRef_2F_Get_20_EP_20_CFMutableArrayRef_case_1_local_5(PARAMETERS,TERMINAL(3),TERMINAL(5));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(3))
OUTPUT(1,TERMINAL(5))
FOOTER(6)
}

enum opTrigger vpx_method_EventRef_2F_Get_20_EP_20_CFMutableArrayRef_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_EventRef_2F_Get_20_EP_20_CFMutableArrayRef_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,paramErr,ROOT(2));

result = vpx_constant(PARAMETERS,"NULL",ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
OUTPUT(1,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_EventRef_2F_Get_20_EP_20_CFMutableArrayRef(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_EventRef_2F_Get_20_EP_20_CFMutableArrayRef_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1))
vpx_method_EventRef_2F_Get_20_EP_20_CFMutableArrayRef_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1);
return outcome;
}

enum opTrigger vpx_method_EventRef_2F_Get_20_EP_20_CFMutableArray(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_EP_20_CFMutableArrayRef,2,2,TERMINAL(0),TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(2));
FAILONFAILURE

result = vpx_method_CF_20_Array_2F_New(PARAMETERS,TERMINAL(3),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_EventRef_2F_Get_20_EP_20_DragRef_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_EventRef_2F_Get_20_EP_20_DragRef_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"0",ROOT(2));

result = vpx_constant(PARAMETERS,"4",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_integer,3,3,TERMINAL(1),TERMINAL(2),TERMINAL(3),ROOT(4),ROOT(5),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP_to_2D_pointer,1,1,TERMINAL(6),ROOT(7));

result = kSuccess;

OUTPUT(0,TERMINAL(7))
FOOTER(8)
}

enum opTrigger vpx_method_EventRef_2F_Get_20_EP_20_DragRef_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_EventRef_2F_Get_20_EP_20_DragRef_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
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

enum opTrigger vpx_method_EventRef_2F_Get_20_EP_20_DragRef_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_EventRef_2F_Get_20_EP_20_DragRef_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_EventRef_2F_Get_20_EP_20_DragRef_case_1_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_EventRef_2F_Get_20_EP_20_DragRef_case_1_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_EventRef_2F_Get_20_EP_20_DragRef_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_EventRef_2F_Get_20_EP_20_DragRef_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(0));
TERMINATEONFAILURE

result = vpx_constant(PARAMETERS,"DragRef",ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_set_2D_external_2D_type,2,0,TERMINAL(1),TERMINAL(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_EventRef_2F_Get_20_EP_20_DragRef_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_EventRef_2F_Get_20_EP_20_DragRef_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,kEventParamDragRef,ROOT(1));

result = vpx_extconstant(PARAMETERS,typeDragRef,ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_EP_20_typeRef,3,2,TERMINAL(0),TERMINAL(1),TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_method_EventRef_2F_Get_20_EP_20_DragRef_case_1_local_5(PARAMETERS,TERMINAL(3),TERMINAL(4),ROOT(5));

result = vpx_method_EventRef_2F_Get_20_EP_20_DragRef_case_1_local_6(PARAMETERS,TERMINAL(3),TERMINAL(5));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(3))
OUTPUT(1,TERMINAL(5))
FOOTER(6)
}

enum opTrigger vpx_method_EventRef_2F_Get_20_EP_20_DragRef_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_EventRef_2F_Get_20_EP_20_DragRef_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,paramErr,ROOT(1));

result = vpx_constant(PARAMETERS,"NULL",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
OUTPUT(1,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_EventRef_2F_Get_20_EP_20_DragRef(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_EventRef_2F_Get_20_EP_20_DragRef_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1))
vpx_method_EventRef_2F_Get_20_EP_20_DragRef_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1);
return outcome;
}

enum opTrigger vpx_method_EventRef_2F_Set_20_EP_20_Object(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_object_2D_to_2D_address,1,1,TERMINAL(2),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_EP_20_UInt32,3,1,TERMINAL(0),TERMINAL(1),TERMINAL(3),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_EventRef_2F_Get_20_EP_20_Object(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_EP_20_UInt32,2,2,TERMINAL(0),TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(2));
FAILONFAILURE

result = vpx_match(PARAMETERS,"0",TERMINAL(3));
FAILONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_address_2D_to_2D_object,1,1,TERMINAL(3),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_EventRef_2F_Get_20_EP_20_Attributes(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,kEventParamAttributes,ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_UInt32,2,2,TERMINAL(0),TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(2));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_EventRef_2F_Set_20_EP_20_Attributes(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,kEventParamAttributes,ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_EP_20_UInt32,3,1,TERMINAL(0),TERMINAL(2),TERMINAL(1),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_EventRef_2F_Set_20_EP_20_CFStringRef(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,typeCFStringRef,ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_EP_20_typeRef,4,1,TERMINAL(0),TERMINAL(1),TERMINAL(3),TERMINAL(2),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_EventRef_2F_Get_20_EP_20_HIPoint(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,typeHIPoint,ROOT(2));

result = vpx_constant(PARAMETERS,"8",ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Event_20_Parameter,4,4,TERMINAL(0),TERMINAL(1),TERMINAL(2),TERMINAL(3),ROOT(4),ROOT(5),ROOT(6),ROOT(7));

result = vpx_constant(PARAMETERS,"CGPoint",ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP_set_2D_external_2D_type,2,0,TERMINAL(7),TERMINAL(8));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
OUTPUT(1,TERMINAL(7))
FOOTERSINGLECASE(9)
}

enum opTrigger vpx_method_EventRef_2F_Set_20_EP_20_HIPoint(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,typeHIPoint,ROOT(3));

result = vpx_constant(PARAMETERS,"8",ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Event_20_Parameter,5,1,TERMINAL(0),TERMINAL(1),TERMINAL(3),TERMINAL(4),TERMINAL(2),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_EventRef_2F_Get_20_EP_20_HISize(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,typeHISize,ROOT(2));

result = vpx_constant(PARAMETERS,"8",ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Event_20_Parameter,4,4,TERMINAL(0),TERMINAL(1),TERMINAL(2),TERMINAL(3),ROOT(4),ROOT(5),ROOT(6),ROOT(7));

result = vpx_constant(PARAMETERS,"CGSize",ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP_set_2D_external_2D_type,2,0,TERMINAL(7),TERMINAL(8));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
OUTPUT(1,TERMINAL(7))
FOOTERSINGLECASE(9)
}

enum opTrigger vpx_method_EventRef_2F_Set_20_EP_20_HISize(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,typeHISize,ROOT(3));

result = vpx_constant(PARAMETERS,"8",ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Event_20_Parameter,5,1,TERMINAL(0),TERMINAL(1),TERMINAL(3),TERMINAL(4),TERMINAL(2),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_EventRef_2F_Get_20_EP_20_SInt32_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_EventRef_2F_Get_20_EP_20_SInt32_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"0",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_integer,3,3,TERMINAL(1),TERMINAL(3),TERMINAL(2),ROOT(4),ROOT(5),ROOT(6));

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTER(7)
}

enum opTrigger vpx_method_EventRef_2F_Get_20_EP_20_SInt32_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_EventRef_2F_Get_20_EP_20_SInt32_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"0",ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_EventRef_2F_Get_20_EP_20_SInt32_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_EventRef_2F_Get_20_EP_20_SInt32_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_EventRef_2F_Get_20_EP_20_SInt32_case_1_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
vpx_method_EventRef_2F_Get_20_EP_20_SInt32_case_1_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0);
return outcome;
}

enum opTrigger vpx_method_EventRef_2F_Get_20_EP_20_SInt32(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,typeSInt32,ROOT(2));

result = vpx_constant(PARAMETERS,"4",ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Event_20_Parameter,4,4,TERMINAL(0),TERMINAL(1),TERMINAL(2),TERMINAL(3),ROOT(4),ROOT(5),ROOT(6),ROOT(7));

result = vpx_method_EventRef_2F_Get_20_EP_20_SInt32_case_1_local_5(PARAMETERS,TERMINAL(4),TERMINAL(7),TERMINAL(3),ROOT(8));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
OUTPUT(1,TERMINAL(8))
FOOTERSINGLECASE(9)
}

/* Stop Universals */



Nat4 VPLC_Carbon_20_Event_20_Callback_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Carbon_20_Event_20_Callback_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 363 285 }{ 234 384 } */
	tempAttribute = attribute_add("Name",tempClass,tempAttribute_Carbon_20_Event_20_Callback_2F_Name,environment);
	tempAttribute = attribute_add("Owner",tempClass,NULL,environment);
	tempAttribute = attribute_add("Method Name",tempClass,tempAttribute_Carbon_20_Event_20_Callback_2F_Method_20_Name,environment);
	tempAttribute = attribute_add("Input Specifiers",tempClass,tempAttribute_Carbon_20_Event_20_Callback_2F_Input_20_Specifiers,environment);
	tempAttribute = attribute_add("Output Specifiers",tempClass,tempAttribute_Carbon_20_Event_20_Callback_2F_Output_20_Specifiers,environment);
	tempAttribute = attribute_add("Attachments",tempClass,NULL,environment);
	tempAttribute = attribute_add("Callback Method Name",tempClass,tempAttribute_Carbon_20_Event_20_Callback_2F_Callback_20_Method_20_Name,environment);
	tempAttribute = attribute_add("ProcPtr Name",tempClass,tempAttribute_Carbon_20_Event_20_Callback_2F_ProcPtr_20_Name,environment);
	tempAttribute = attribute_add("UPP Allocate",tempClass,NULL,environment);
	tempAttribute = attribute_add("UPP Dispose",tempClass,NULL,environment);
	tempAttribute = attribute_add("Callback Pointer",tempClass,NULL,environment);
	tempAttribute = attribute_add("UPP Pointer",tempClass,NULL,environment);
	tempAttribute = attribute_add("Callback Result",tempClass,tempAttribute_Carbon_20_Event_20_Callback_2F_Callback_20_Result,environment);
	tempAttribute = attribute_add("Event Types",tempClass,tempAttribute_Carbon_20_Event_20_Callback_2F_Event_20_Types,environment);
	tempAttribute = attribute_add("Event Target",tempClass,NULL,environment);
	tempAttribute = attribute_add("The Event",tempClass,NULL,environment);
	tempAttribute = attribute_add("Event Handler Ref",tempClass,NULL,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"Method Callback");
	return kNOERROR;
}

/* Start Universals: { 166 728 }{ 541 395 } */
enum opTrigger vpx_method_Carbon_20_Event_20_Callback_2F_Open_20_UPP(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Callback_20_Pointer,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
TERMINATEONSUCCESS

PUTPOINTER(int,*,NewEventHandlerUPP( GETPOINTER(4,int,*,ROOT(3),TERMINAL(1))),2);
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_UPP_20_Pointer,2,0,TERMINAL(0),TERMINAL(2));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Carbon_20_Event_20_Callback_2F_Install_20_Callback(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADERWITHNONE(15)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_UPP_20_Pointer,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
TERMINATEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_EventTargetRef,1,1,TERMINAL(0),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_EventTypeSpec,1,2,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_constant(PARAMETERS,"NULL",ROOT(5));

result = vpx_constant(PARAMETERS,"NULL",ROOT(6));

PUTINTEGER(InstallEventHandler( GETPOINTER(0,OpaqueEventTargetRef,*,ROOT(8),TERMINAL(2)),GETPOINTER(4,int,*,ROOT(9),TERMINAL(1)),GETINTEGER(TERMINAL(3)),GETCONSTPOINTER(EventTypeSpec,*,TERMINAL(4)),GETPOINTER(0,void,*,ROOT(10),TERMINAL(5)),GETPOINTER(0,OpaqueEventHandlerRef,**,ROOT(11),NONE)),7);
result = kSuccess;

result = vpx_constant(PARAMETERS,"InstallEventHandler",ROOT(12));

result = vpx_set(PARAMETERS,kVPXValue_Event_20_Handler_20_Ref,TERMINAL(0),TERMINAL(11),ROOT(13));

result = vpx_constant(PARAMETERS,"4",ROOT(14));

result = vpx_method_Debug_20_Result(PARAMETERS,TERMINAL(0),TERMINAL(12),TERMINAL(7),TERMINAL(14));

result = kSuccess;

FOOTERSINGLECASEWITHNONE(15)
}

enum opTrigger vpx_method_Carbon_20_Event_20_Callback_2F_Get_20_EventTargetRef_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Carbon_20_Event_20_Callback_2F_Get_20_EventTargetRef_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Event_20_Target,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Carbon_20_EventTargetRef,1,1,TERMINAL(2),ROOT(3));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_Carbon_20_Event_20_Callback_2F_Get_20_EventTargetRef_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Carbon_20_Event_20_Callback_2F_Get_20_EventTargetRef_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Event_20_Target,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_external_3F_,1,0,TERMINAL(2));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Carbon_20_Event_20_Callback_2F_Get_20_EventTargetRef_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Carbon_20_Event_20_Callback_2F_Get_20_EventTargetRef_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

PUTPOINTER(OpaqueEventTargetRef,*,GetApplicationEventTarget(),1);
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Carbon_20_Event_20_Callback_2F_Get_20_EventTargetRef(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Carbon_20_Event_20_Callback_2F_Get_20_EventTargetRef_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_Carbon_20_Event_20_Callback_2F_Get_20_EventTargetRef_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Carbon_20_Event_20_Callback_2F_Get_20_EventTargetRef_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Carbon_20_Event_20_Callback_2F_Get_20_EventTypeSpec_case_1_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Carbon_20_Event_20_Callback_2F_Get_20_EventTypeSpec_case_1_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(10)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,2,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_constant(PARAMETERS,"4",ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_integer_2D_to_2D_pointer,4,2,TERMINAL(1),TERMINAL(2),TERMINAL(5),TERMINAL(3),ROOT(6),ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP_integer_2D_to_2D_pointer,4,2,TERMINAL(6),TERMINAL(7),TERMINAL(5),TERMINAL(4),ROOT(8),ROOT(9));

result = kSuccess;

OUTPUT(0,TERMINAL(9))
FOOTERSINGLECASE(10)
}

enum opTrigger vpx_method_Carbon_20_Event_20_Callback_2F_Get_20_EventTypeSpec(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(10)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Event_20_Types,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP__28_length_29_,1,1,TERMINAL(2),ROOT(3));

result = vpx_constant(PARAMETERS,"8",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP__2A2A_,2,1,TERMINAL(3),TERMINAL(4),ROOT(5));

result = vpx_constant(PARAMETERS,"EventTypeSpec",ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP_make_2D_external,2,1,TERMINAL(6),TERMINAL(5),ROOT(7));

result = vpx_constant(PARAMETERS,"0",ROOT(8));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(2))) ){
REPEATBEGINWITHCOUNTER
LOOPTERMINALBEGIN(1)
LOOPTERMINAL(0,8,9)
result = vpx_method_Carbon_20_Event_20_Callback_2F_Get_20_EventTypeSpec_case_1_local_9(PARAMETERS,LIST(2),TERMINAL(7),LOOP(0),ROOT(9));
REPEATFINISH
} else {
ROOTNULL(9,TERMINAL(8))
}

result = kSuccess;

OUTPUT(0,TERMINAL(3))
OUTPUT(1,TERMINAL(7))
FOOTERSINGLECASE(10)
}

enum opTrigger vpx_method_Carbon_20_Event_20_Callback_2F_Do_20_CE_20_Callback(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Use_20_Parameters,4,0,TERMINAL(0),TERMINAL(1),TERMINAL(2),TERMINAL(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Call,1,0,TERMINAL(0));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Callback_20_Result,1,1,TERMINAL(0),ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Clean_20_Up_20_Parameters,1,0,TERMINAL(0));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Carbon_20_Event_20_Callback_2F_Use_20_Parameters(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_method_EventRef_2F_New(PARAMETERS,TERMINAL(1),TERMINAL(2),TERMINAL(3),ROOT(4));

result = vpx_set(PARAMETERS,kVPXValue_The_20_Event,TERMINAL(0),TERMINAL(4),ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Return_20_Event_20_Not_20_Handled,1,1,TERMINAL(4),ROOT(6));

result = vpx_set(PARAMETERS,kVPXValue_Callback_20_Result,TERMINAL(0),TERMINAL(6),ROOT(7));

result = kSuccess;

FOOTERSINGLECASE(8)
}

enum opTrigger vpx_method_Carbon_20_Event_20_Callback_2F_Remove_20_Callback(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(9)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Event_20_Handler_20_Ref,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
TERMINATEONSUCCESS

PUTINTEGER(RemoveEventHandler( GETPOINTER(0,OpaqueEventHandlerRef,*,ROOT(4),TERMINAL(2))),3);
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(5));

result = vpx_set(PARAMETERS,kVPXValue_Event_20_Handler_20_Ref,TERMINAL(0),TERMINAL(5),ROOT(6));

result = vpx_constant(PARAMETERS,"RemoveEventHandler",ROOT(7));

result = vpx_constant(PARAMETERS,"4",ROOT(8));

result = vpx_method_Debug_20_Result(PARAMETERS,TERMINAL(0),TERMINAL(7),TERMINAL(3),TERMINAL(8));

result = kSuccess;

FOOTERSINGLECASE(9)
}

enum opTrigger vpx_method_Carbon_20_Event_20_Callback_2F_Close_20_UPP(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_UPP_20_Pointer,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
TERMINATEONSUCCESS

DisposeEventHandlerUPP( GETPOINTER(4,int,*,ROOT(2),TERMINAL(1)));
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_UPP_20_Pointer,2,0,TERMINAL(0),TERMINAL(3));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Carbon_20_Event_20_Callback_2F_Clean_20_Up_20_Parameters_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Carbon_20_Event_20_Callback_2F_Clean_20_Up_20_Parameters_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_The_20_Event,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(2));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Dispose,1,0,TERMINAL(2));

result = vpx_constant(PARAMETERS,"NULL",ROOT(3));

result = vpx_set(PARAMETERS,kVPXValue_The_20_Event,TERMINAL(0),TERMINAL(3),ROOT(4));

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Carbon_20_Event_20_Callback_2F_Clean_20_Up_20_Parameters(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Carbon_20_Event_20_Callback_2F_Clean_20_Up_20_Parameters_case_1_local_2(PARAMETERS,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Carbon_20_Event_20_Callback_2F_Close_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Carbon_20_Event_20_Callback_2F_Close_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = vpx_set(PARAMETERS,kVPXValue_Event_20_Target,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Carbon_20_Event_20_Callback_2F_Close(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_call_context_super_method(PARAMETERS,kVPXMethod_Close,1,0,TERMINAL(0));

result = vpx_method_Carbon_20_Event_20_Callback_2F_Close_case_1_local_3(PARAMETERS,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Carbon_20_Event_20_Callback_2F_xxxCall_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Carbon_20_Event_20_Callback_2F_xxxCall_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(10)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_The_20_Event,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_method_Get_20_Application(PARAMETERS,ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(3),TERMINAL(2),ROOT(4));

result = vpx_constant(PARAMETERS,"1",ROOT(5));

result = vpx_constant(PARAMETERS,"/CE Handle Event",ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP_call,3,1,TERMINAL(6),TERMINAL(4),TERMINAL(5),ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,1,TERMINAL(7),ROOT(8));

result = vpx_set(PARAMETERS,kVPXValue_Callback_20_Result,TERMINAL(0),TERMINAL(8),ROOT(9));

result = kSuccess;

FOOTER(10)
}

enum opTrigger vpx_method_Carbon_20_Event_20_Callback_2F_xxxCall_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Carbon_20_Event_20_Callback_2F_xxxCall_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_The_20_Event,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_method_Get_20_Application(PARAMETERS,ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_CE_20_Handle_20_Event,2,1,TERMINAL(3),TERMINAL(2),ROOT(4));

result = vpx_set(PARAMETERS,kVPXValue_Callback_20_Result,TERMINAL(0),TERMINAL(4),ROOT(5));

result = kSuccess;

FOOTER(6)
}

enum opTrigger vpx_method_Carbon_20_Event_20_Callback_2F_xxxCall_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Carbon_20_Event_20_Callback_2F_xxxCall_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Process_20_Input_20_Specifiers,1,1,TERMINAL(0),ROOT(1));
TERMINATEONFAILURE

result = vpx_constant(PARAMETERS,"1",ROOT(2));

result = vpx_constant(PARAMETERS,"/CE Handle Event",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_call,3,1,TERMINAL(3),TERMINAL(1),TERMINAL(2),ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Process_20_Output_20_Specifiers,2,0,TERMINAL(0),TERMINAL(4));

result = kSuccess;

FOOTER(5)
}

enum opTrigger vpx_method_Carbon_20_Event_20_Callback_2F_xxxCall(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Carbon_20_Event_20_Callback_2F_xxxCall_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
if(vpx_method_Carbon_20_Event_20_Callback_2F_xxxCall_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Carbon_20_Event_20_Callback_2F_xxxCall_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Carbon_20_Event_20_Callback_2F_Open_20_As_20_Handler(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Event_20_Target,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open,2,0,TERMINAL(2),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Carbon_20_Event_20_Callback_2F_Get_20_Parameter_20_List_3F_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"FALSE",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASE(2)
}

/* Stop Universals */



Nat4 VPLC_Carbon_20_Timer_20_Callback_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Carbon_20_Timer_20_Callback_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 97 954 }{ 302 412 } */
	tempAttribute = attribute_add("Name",tempClass,tempAttribute_Carbon_20_Timer_20_Callback_2F_Name,environment);
	tempAttribute = attribute_add("Owner",tempClass,NULL,environment);
	tempAttribute = attribute_add("Method Name",tempClass,NULL,environment);
	tempAttribute = attribute_add("Input Specifiers",tempClass,tempAttribute_Carbon_20_Timer_20_Callback_2F_Input_20_Specifiers,environment);
	tempAttribute = attribute_add("Output Specifiers",tempClass,tempAttribute_Carbon_20_Timer_20_Callback_2F_Output_20_Specifiers,environment);
	tempAttribute = attribute_add("Attachments",tempClass,tempAttribute_Carbon_20_Timer_20_Callback_2F_Attachments,environment);
	tempAttribute = attribute_add("Callback Method Name",tempClass,tempAttribute_Carbon_20_Timer_20_Callback_2F_Callback_20_Method_20_Name,environment);
	tempAttribute = attribute_add("ProcPtr Name",tempClass,tempAttribute_Carbon_20_Timer_20_Callback_2F_ProcPtr_20_Name,environment);
	tempAttribute = attribute_add("UPP Allocate",tempClass,tempAttribute_Carbon_20_Timer_20_Callback_2F_UPP_20_Allocate,environment);
	tempAttribute = attribute_add("UPP Dispose",tempClass,tempAttribute_Carbon_20_Timer_20_Callback_2F_UPP_20_Dispose,environment);
	tempAttribute = attribute_add("Callback Pointer",tempClass,NULL,environment);
	tempAttribute = attribute_add("UPP Pointer",tempClass,NULL,environment);
	tempAttribute = attribute_add("Callback Result",tempClass,tempAttribute_Carbon_20_Timer_20_Callback_2F_Callback_20_Result,environment);
	tempAttribute = attribute_add("Event Loop",tempClass,NULL,environment);
	tempAttribute = attribute_add("Initial Delay",tempClass,tempAttribute_Carbon_20_Timer_20_Callback_2F_Initial_20_Delay,environment);
	tempAttribute = attribute_add("Repeat Delay",tempClass,tempAttribute_Carbon_20_Timer_20_Callback_2F_Repeat_20_Delay,environment);
	tempAttribute = attribute_add("Timer Reference",tempClass,NULL,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"Method Callback");
	return kNOERROR;
}

/* Start Universals: { 690 227 }{ 331 298 } */
enum opTrigger vpx_method_Carbon_20_Timer_20_Callback_2F_xOpen_20_UPP(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Callback_20_Pointer,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
TERMINATEONSUCCESS

PUTPOINTER(void,*,NewEventLoopTimerUPP( GETPOINTER(0,void,*,ROOT(3),TERMINAL(1))),2);
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_UPP_20_Pointer,2,0,TERMINAL(0),TERMINAL(2));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Carbon_20_Timer_20_Callback_2F_xClose_20_UPP(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_UPP_20_Pointer,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
TERMINATEONSUCCESS

DisposeEventLoopTimerUPP( GETPOINTER(0,void,*,ROOT(2),TERMINAL(1)));
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_UPP_20_Pointer,2,0,TERMINAL(0),TERMINAL(3));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Carbon_20_Timer_20_Callback_2F_Do_20_CT_20_Exec_20_Callback_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Carbon_20_Timer_20_Callback_2F_Do_20_CT_20_Exec_20_Callback_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"callback",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Attachment_20_Value,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));
TERMINATEONFAILURE

result = vpx_method_Execute_20_Callback(PARAMETERS,TERMINAL(2),ROOT(3));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Carbon_20_Timer_20_Callback_2F_Do_20_CT_20_Exec_20_Callback_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Carbon_20_Timer_20_Callback_2F_Do_20_CT_20_Exec_20_Callback_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Repeat_20_Delay,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"0",TERMINAL(1));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Close,1,0,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Carbon_20_Timer_20_Callback_2F_Do_20_CT_20_Exec_20_Callback(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_method_Carbon_20_Timer_20_Callback_2F_Do_20_CT_20_Exec_20_Callback_case_1_local_2(PARAMETERS,TERMINAL(0));

result = vpx_method_Carbon_20_Timer_20_Callback_2F_Do_20_CT_20_Exec_20_Callback_case_1_local_3(PARAMETERS,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Carbon_20_Timer_20_Callback_2F_Do_20_CT_20_Callback_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Carbon_20_Timer_20_Callback_2F_Do_20_CT_20_Callback_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Repeat_20_Delay,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"0",TERMINAL(1));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Close,1,0,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Carbon_20_Timer_20_Callback_2F_Do_20_CT_20_Callback(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Call,1,0,TERMINAL(0));

result = vpx_method_Carbon_20_Timer_20_Callback_2F_Do_20_CT_20_Callback_case_1_local_3(PARAMETERS,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Carbon_20_Timer_20_Callback_2F_Get_20_EventLoopRef_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Carbon_20_Timer_20_Callback_2F_Get_20_EventLoopRef_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Event_20_Loop,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_EventLoopRef,1,1,TERMINAL(2),ROOT(3));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_Carbon_20_Timer_20_Callback_2F_Get_20_EventLoopRef_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Carbon_20_Timer_20_Callback_2F_Get_20_EventLoopRef_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

PUTPOINTER(OpaqueEventLoopRef,*,GetMainEventLoop(),1);
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Carbon_20_Timer_20_Callback_2F_Get_20_EventLoopRef(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Carbon_20_Timer_20_Callback_2F_Get_20_EventLoopRef_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Carbon_20_Timer_20_Callback_2F_Get_20_EventLoopRef_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Carbon_20_Timer_20_Callback_2F_Install_20_Callback_case_1_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Carbon_20_Timer_20_Callback_2F_Install_20_Callback_case_1_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"4",ROOT(2));

result = vpx_constant(PARAMETERS,"InstallEventLoopTimer",ROOT(3));

result = vpx_method_Debug_20_Result(PARAMETERS,TERMINAL(0),TERMINAL(3),TERMINAL(1),TERMINAL(2));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Carbon_20_Timer_20_Callback_2F_Install_20_Callback(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADERWITHNONE(12)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_UPP_20_Pointer,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
TERMINATEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_EventLoopRef,1,1,TERMINAL(0),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Initial_20_Delay,1,1,TERMINAL(0),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Repeat_20_Delay,1,1,TERMINAL(0),ROOT(4));

result = vpx_constant(PARAMETERS,"NULL",ROOT(5));

PUTINTEGER(InstallEventLoopTimer( GETPOINTER(0,OpaqueEventLoopRef,*,ROOT(7),TERMINAL(2)),GETREAL(TERMINAL(3)),GETREAL(TERMINAL(4)),GETPOINTER(0,void,*,ROOT(8),TERMINAL(1)),GETPOINTER(0,void,*,ROOT(9),TERMINAL(5)),GETPOINTER(0,__EventLoopTimer,**,ROOT(10),NONE)),6);
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Timer_20_Reference,TERMINAL(0),TERMINAL(10),ROOT(11));

result = vpx_method_Carbon_20_Timer_20_Callback_2F_Install_20_Callback_case_1_local_10(PARAMETERS,TERMINAL(0),TERMINAL(6));

result = kSuccess;

FOOTERSINGLECASEWITHNONE(12)
}

enum opTrigger vpx_method_Carbon_20_Timer_20_Callback_2F_Remove_20_Callback(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(9)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Timer_20_Reference,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
TERMINATEONSUCCESS

PUTINTEGER(RemoveEventLoopTimer( GETPOINTER(0,__EventLoopTimer,*,ROOT(4),TERMINAL(2))),3);
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(5));

result = vpx_set(PARAMETERS,kVPXValue_Timer_20_Reference,TERMINAL(0),TERMINAL(5),ROOT(6));

result = vpx_constant(PARAMETERS,"RemoveEventLoopTimer",ROOT(7));

result = vpx_constant(PARAMETERS,"4",ROOT(8));

result = vpx_method_Debug_20_Result(PARAMETERS,TERMINAL(0),TERMINAL(7),TERMINAL(3),TERMINAL(8));

result = kSuccess;

FOOTERSINGLECASE(9)
}

enum opTrigger vpx_method_Carbon_20_Timer_20_Callback_2F_Get_20_Initial_20_Delay(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Initial_20_Delay,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Carbon_20_Timer_20_Callback_2F_Get_20_Repeat_20_Delay(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Repeat_20_Delay,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Carbon_20_Timer_20_Callback_2F_Close_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Carbon_20_Timer_20_Callback_2F_Close_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = vpx_set(PARAMETERS,kVPXValue_Event_20_Loop,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Carbon_20_Timer_20_Callback_2F_Close(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_call_context_super_method(PARAMETERS,kVPXMethod_Close,1,0,TERMINAL(0));

result = vpx_method_Carbon_20_Timer_20_Callback_2F_Close_case_1_local_3(PARAMETERS,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Carbon_20_Timer_20_Callback_2F_Reset_20_Repeat_20_Delay_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Carbon_20_Timer_20_Callback_2F_Reset_20_Repeat_20_Delay_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Timer_20_Reference,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
NEXTCASEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Remove_20_Callback,1,0,TERMINAL(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(3)
}

enum opTrigger vpx_method_Carbon_20_Timer_20_Callback_2F_Reset_20_Repeat_20_Delay_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Carbon_20_Timer_20_Callback_2F_Reset_20_Repeat_20_Delay_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Carbon_20_Timer_20_Callback_2F_Reset_20_Repeat_20_Delay_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Carbon_20_Timer_20_Callback_2F_Reset_20_Repeat_20_Delay_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Carbon_20_Timer_20_Callback_2F_Reset_20_Repeat_20_Delay_case_1_local_2_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Carbon_20_Timer_20_Callback_2F_Reset_20_Repeat_20_Delay_case_1_local_2_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Carbon_20_Timer_20_Callback_2F_Reset_20_Repeat_20_Delay_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Carbon_20_Timer_20_Callback_2F_Reset_20_Repeat_20_Delay_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(0));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Initial_20_Delay,2,0,TERMINAL(0),TERMINAL(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Install_20_Callback,1,0,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Carbon_20_Timer_20_Callback_2F_Reset_20_Repeat_20_Delay(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Carbon_20_Timer_20_Callback_2F_Reset_20_Repeat_20_Delay_case_1_local_2(PARAMETERS,TERMINAL(0),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Repeat_20_Delay,2,0,TERMINAL(0),TERMINAL(1));

result = vpx_method_Carbon_20_Timer_20_Callback_2F_Reset_20_Repeat_20_Delay_case_1_local_4(PARAMETERS,TERMINAL(2),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Carbon_20_Timer_20_Callback_2F_Set_20_Initial_20_Delay(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Initial_20_Delay,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Carbon_20_Timer_20_Callback_2F_Set_20_Repeat_20_Delay(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Repeat_20_Delay,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Carbon_20_Timer_20_Callback_2F_Set_20_Next_20_Fire_20_Time_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Carbon_20_Timer_20_Callback_2F_Set_20_Next_20_Fire_20_Time_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Timer_20_Reference,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
NEXTCASEONSUCCESS

PUTINTEGER(SetEventLoopTimerNextFireTime( GETPOINTER(0,__EventLoopTimer,*,ROOT(5),TERMINAL(3)),GETREAL(TERMINAL(1))),4);
result = kSuccess;

result = kSuccess;

FOOTER(6)
}

enum opTrigger vpx_method_Carbon_20_Timer_20_Callback_2F_Set_20_Next_20_Fire_20_Time_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Carbon_20_Timer_20_Callback_2F_Set_20_Next_20_Fire_20_Time_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Initial_20_Delay,2,0,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Carbon_20_Timer_20_Callback_2F_Set_20_Next_20_Fire_20_Time(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Carbon_20_Timer_20_Callback_2F_Set_20_Next_20_Fire_20_Time_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Carbon_20_Timer_20_Callback_2F_Set_20_Next_20_Fire_20_Time_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Carbon_20_Timer_20_Callback_2F_Get_20_Parameter_20_List_3F_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"FALSE",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Carbon_20_Timer_20_Callback_2F_Schedule_20_Callback_case_1_local_2_case_1_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Carbon_20_Timer_20_Callback_2F_Schedule_20_Callback_case_1_local_2_case_1_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"timer",ROOT(3));

result = vpx_method_Add_20_Attachment_20_To_20_Callback(PARAMETERS,TERMINAL(0),TERMINAL(3),TERMINAL(1),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Carbon_20_Timer_20_Callback_2F_Schedule_20_Callback_case_1_local_2_case_1_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Carbon_20_Timer_20_Callback_2F_Schedule_20_Callback_case_1_local_2_case_1_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(3)
}

enum opTrigger vpx_method_Carbon_20_Timer_20_Callback_2F_Schedule_20_Callback_case_1_local_2_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Carbon_20_Timer_20_Callback_2F_Schedule_20_Callback_case_1_local_2_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Carbon_20_Timer_20_Callback_2F_Schedule_20_Callback_case_1_local_2_case_1_local_7_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
vpx_method_Carbon_20_Timer_20_Callback_2F_Schedule_20_Callback_case_1_local_2_case_1_local_7_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0);
return outcome;
}

enum opTrigger vpx_method_Carbon_20_Timer_20_Callback_2F_Schedule_20_Callback_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4);
enum opTrigger vpx_method_Carbon_20_Timer_20_Callback_2F_Schedule_20_Callback_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4)
{
HEADER(11)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
INPUT(4,4)
result = kSuccess;

result = vpx_method_Default_20_Zero(PARAMETERS,TERMINAL(2),ROOT(5));

result = vpx_method_Default_20_Zero(PARAMETERS,TERMINAL(3),ROOT(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Initial_20_Delay,2,0,TERMINAL(0),TERMINAL(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Repeat_20_Delay,2,0,TERMINAL(0),TERMINAL(6));

result = vpx_constant(PARAMETERS,"callback",ROOT(7));

result = vpx_method_Carbon_20_Timer_20_Callback_2F_Schedule_20_Callback_case_1_local_2_case_1_local_7(PARAMETERS,TERMINAL(1),TERMINAL(0),TERMINAL(4),ROOT(8));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Attachment_20_Value,3,0,TERMINAL(0),TERMINAL(7),TERMINAL(8));

result = vpx_constant(PARAMETERS,"/Do CT Exec Callback",ROOT(9));

result = vpx_set(PARAMETERS,kVPXValue_Callback_20_Method_20_Name,TERMINAL(0),TERMINAL(9),ROOT(10));

result = kSuccess;

FOOTERSINGLECASE(11)
}

enum opTrigger vpx_method_Carbon_20_Timer_20_Callback_2F_Schedule_20_Callback(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
INPUT(4,4)
result = kSuccess;

result = vpx_method_Carbon_20_Timer_20_Callback_2F_Schedule_20_Callback_case_1_local_2(PARAMETERS,TERMINAL(0),TERMINAL(1),TERMINAL(2),TERMINAL(3),TERMINAL(4));

result = vpx_constant(PARAMETERS,"NULL",ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open,2,0,TERMINAL(0),TERMINAL(5));

result = kSuccess;

FOOTERSINGLECASE(6)
}

/* Stop Universals */



Nat4 VPLC_Carbon_20_Idle_20_Timer_20_Callback_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Carbon_20_Idle_20_Timer_20_Callback_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 325 477 } */
	tempAttribute = attribute_add("Name",tempClass,tempAttribute_Carbon_20_Idle_20_Timer_20_Callback_2F_Name,environment);
	tempAttribute = attribute_add("Owner",tempClass,NULL,environment);
	tempAttribute = attribute_add("Method Name",tempClass,tempAttribute_Carbon_20_Idle_20_Timer_20_Callback_2F_Method_20_Name,environment);
	tempAttribute = attribute_add("Input Specifiers",tempClass,tempAttribute_Carbon_20_Idle_20_Timer_20_Callback_2F_Input_20_Specifiers,environment);
	tempAttribute = attribute_add("Output Specifiers",tempClass,tempAttribute_Carbon_20_Idle_20_Timer_20_Callback_2F_Output_20_Specifiers,environment);
	tempAttribute = attribute_add("Attachments",tempClass,tempAttribute_Carbon_20_Idle_20_Timer_20_Callback_2F_Attachments,environment);
	tempAttribute = attribute_add("Callback Method Name",tempClass,tempAttribute_Carbon_20_Idle_20_Timer_20_Callback_2F_Callback_20_Method_20_Name,environment);
	tempAttribute = attribute_add("ProcPtr Name",tempClass,tempAttribute_Carbon_20_Idle_20_Timer_20_Callback_2F_ProcPtr_20_Name,environment);
	tempAttribute = attribute_add("UPP Allocate",tempClass,tempAttribute_Carbon_20_Idle_20_Timer_20_Callback_2F_UPP_20_Allocate,environment);
	tempAttribute = attribute_add("UPP Dispose",tempClass,tempAttribute_Carbon_20_Idle_20_Timer_20_Callback_2F_UPP_20_Dispose,environment);
	tempAttribute = attribute_add("Callback Pointer",tempClass,NULL,environment);
	tempAttribute = attribute_add("UPP Pointer",tempClass,NULL,environment);
	tempAttribute = attribute_add("Callback Result",tempClass,tempAttribute_Carbon_20_Idle_20_Timer_20_Callback_2F_Callback_20_Result,environment);
	tempAttribute = attribute_add("Event Loop",tempClass,NULL,environment);
	tempAttribute = attribute_add("Initial Delay",tempClass,tempAttribute_Carbon_20_Idle_20_Timer_20_Callback_2F_Initial_20_Delay,environment);
	tempAttribute = attribute_add("Repeat Delay",tempClass,tempAttribute_Carbon_20_Idle_20_Timer_20_Callback_2F_Repeat_20_Delay,environment);
	tempAttribute = attribute_add("Timer Reference",tempClass,NULL,environment);
	tempAttribute = attribute_add("Idle Action",tempClass,NULL,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"Carbon Timer Callback");
	return kNOERROR;
}

/* Start Universals: { 406 315 }{ 291 308 } */
enum opTrigger vpx_method_Carbon_20_Idle_20_Timer_20_Callback_2F_xOpen_20_UPP(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Callback_20_Pointer,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
TERMINATEONSUCCESS

PUTPOINTER(void,*,NewEventLoopIdleTimerUPP( GETPOINTER(0,void,*,ROOT(3),TERMINAL(1))),2);
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_UPP_20_Pointer,2,0,TERMINAL(0),TERMINAL(2));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Carbon_20_Idle_20_Timer_20_Callback_2F_xClose_20_UPP(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_UPP_20_Pointer,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
TERMINATEONSUCCESS

DisposeEventLoopIdleTimerUPP( GETPOINTER(0,void,*,ROOT(2),TERMINAL(1)));
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_UPP_20_Pointer,2,0,TERMINAL(0),TERMINAL(3));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Carbon_20_Idle_20_Timer_20_Callback_2F_Do_20_CIT_20_Callback(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Idle_20_Action,TERMINAL(0),TERMINAL(2),ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Call,1,0,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Carbon_20_Idle_20_Timer_20_Callback_2F_Do_20_CT_20_Exec_20_Callback_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Carbon_20_Idle_20_Timer_20_Callback_2F_Do_20_CT_20_Exec_20_Callback_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"callback",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Attachment_20_Value,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));
TERMINATEONFAILURE

result = vpx_method_Execute_20_Callback(PARAMETERS,TERMINAL(2),ROOT(3));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Carbon_20_Idle_20_Timer_20_Callback_2F_Do_20_CT_20_Exec_20_Callback_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Carbon_20_Idle_20_Timer_20_Callback_2F_Do_20_CT_20_Exec_20_Callback_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Repeat_20_Delay,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"0",TERMINAL(1));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Close,1,0,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Carbon_20_Idle_20_Timer_20_Callback_2F_Do_20_CT_20_Exec_20_Callback(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Idle_20_Action,TERMINAL(0),TERMINAL(2),ROOT(4));

result = vpx_method_Carbon_20_Idle_20_Timer_20_Callback_2F_Do_20_CT_20_Exec_20_Callback_case_1_local_3(PARAMETERS,TERMINAL(4));

result = vpx_method_Carbon_20_Idle_20_Timer_20_Callback_2F_Do_20_CT_20_Exec_20_Callback_case_1_local_4(PARAMETERS,TERMINAL(4));

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Carbon_20_Idle_20_Timer_20_Callback_2F_Install_20_Callback_case_1_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Carbon_20_Idle_20_Timer_20_Callback_2F_Install_20_Callback_case_1_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"4",ROOT(2));

result = vpx_constant(PARAMETERS,"InstallEventLoopTimer",ROOT(3));

result = vpx_method_Debug_20_Result(PARAMETERS,TERMINAL(0),TERMINAL(3),TERMINAL(1),TERMINAL(2));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Carbon_20_Idle_20_Timer_20_Callback_2F_Install_20_Callback(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADERWITHNONE(12)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_UPP_20_Pointer,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
TERMINATEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_EventLoopRef,1,1,TERMINAL(0),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Initial_20_Delay,1,1,TERMINAL(0),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Repeat_20_Delay,1,1,TERMINAL(0),ROOT(4));

result = vpx_constant(PARAMETERS,"NULL",ROOT(5));

PUTINTEGER(InstallEventLoopIdleTimer( GETPOINTER(0,OpaqueEventLoopRef,*,ROOT(7),TERMINAL(2)),GETREAL(TERMINAL(3)),GETREAL(TERMINAL(4)),GETPOINTER(0,void,*,ROOT(8),TERMINAL(1)),GETPOINTER(0,void,*,ROOT(9),TERMINAL(5)),GETPOINTER(0,__EventLoopTimer,**,ROOT(10),NONE)),6);
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Timer_20_Reference,TERMINAL(0),TERMINAL(10),ROOT(11));

result = vpx_method_Carbon_20_Idle_20_Timer_20_Callback_2F_Install_20_Callback_case_1_local_10(PARAMETERS,TERMINAL(0),TERMINAL(6));

result = kSuccess;

FOOTERSINGLECASEWITHNONE(12)
}

enum opTrigger vpx_method_Carbon_20_Idle_20_Timer_20_Callback_2F_Remove_20_Callback(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(9)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Timer_20_Reference,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
TERMINATEONSUCCESS

PUTINTEGER(RemoveEventLoopTimer( GETPOINTER(0,__EventLoopTimer,*,ROOT(4),TERMINAL(2))),3);
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(5));

result = vpx_set(PARAMETERS,kVPXValue_Timer_20_Reference,TERMINAL(0),TERMINAL(5),ROOT(6));

result = vpx_constant(PARAMETERS,"RemoveEventLoopTimer",ROOT(7));

result = vpx_constant(PARAMETERS,"4",ROOT(8));

result = vpx_method_Debug_20_Result(PARAMETERS,TERMINAL(0),TERMINAL(7),TERMINAL(3),TERMINAL(8));

result = kSuccess;

FOOTERSINGLECASE(9)
}

enum opTrigger vpx_method_Carbon_20_Idle_20_Timer_20_Callback_2F_Get_20_Idle_20_Action(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Idle_20_Action,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Carbon_20_Idle_20_Timer_20_Callback_2F_Set_20_Idle_20_Action(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Idle_20_Action,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

/* Stop Universals */



Nat4 VPLC_Carbon_20_Event_20_Target_20_Proxy_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Carbon_20_Event_20_Target_20_Proxy_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 200 300 } */
	tempAttribute = attribute_add("HIObjectRef",tempClass,NULL,environment);
/* Stop Attributes */

/* NULL SUPER CLASS */
	return kNOERROR;
}

/* Start Universals: { 354 775 }{ 200 300 } */
enum opTrigger vpx_method_Carbon_20_Event_20_Target_20_Proxy_2F_Get_20_Carbon_20_EventTargetRef(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_HIObjectRef,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
FAILONSUCCESS

PUTPOINTER(OpaqueEventTargetRef,*,HIObjectGetEventTarget( GETPOINTER(0,OpaqueHIObjectRef,*,ROOT(3),TERMINAL(1))),2);
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
FAILONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Carbon_20_Event_20_Target_20_Proxy_2F_Get_20_HIObjectRef(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_HIObjectRef,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Carbon_20_Event_20_Target_20_Proxy_2F_Set_20_HIObjectRef(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_HIObjectRef,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Carbon_20_Event_20_Target_20_Proxy_2F_Dispose(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_HIObjectRef,2,0,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Carbon_20_Event_20_Target_20_Proxy_2F_New(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(2)
INPUT(0,0)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_Carbon_20_Event_20_Target_20_Proxy,1,1,NONE,ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_HIObjectRef,2,0,TERMINAL(1),TERMINAL(0));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASEWITHNONE(2)
}

enum opTrigger vpx_method_Carbon_20_Event_20_Target_20_Proxy_2F_Close(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Dispose,1,0,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(1)
}

/* Stop Universals */






Nat4	loadClasses_Carbon_20_Events(V_Environment environment);
Nat4	loadClasses_Carbon_20_Events(V_Environment environment)
{
	V_Class result = NULL;

	result = class_new("EventRef",environment);
	if(result == NULL) return kERROR;
	VPLC_EventRef_class_load(result,environment);
	result = class_new("Carbon Event Callback",environment);
	if(result == NULL) return kERROR;
	VPLC_Carbon_20_Event_20_Callback_class_load(result,environment);
	result = class_new("Carbon Timer Callback",environment);
	if(result == NULL) return kERROR;
	VPLC_Carbon_20_Timer_20_Callback_class_load(result,environment);
	result = class_new("Carbon Idle Timer Callback",environment);
	if(result == NULL) return kERROR;
	VPLC_Carbon_20_Idle_20_Timer_20_Callback_class_load(result,environment);
	result = class_new("Carbon Event Target Proxy",environment);
	if(result == NULL) return kERROR;
	VPLC_Carbon_20_Event_20_Target_20_Proxy_class_load(result,environment);
	return kNOERROR;

}

Nat4	loadUniversals_Carbon_20_Events(V_Environment environment);
Nat4	loadUniversals_Carbon_20_Events(V_Environment environment)
{
	V_Method result = NULL;

	result = method_new("Execute Callback Deferred",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Execute_20_Callback_20_Deferred,NULL);

	result = method_new("TEST Execute Deferred",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_TEST_20_Execute_20_Deferred,NULL);

	result = method_new("Dispatch Event",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Dispatch_20_Event,NULL);

	result = method_new("Execute Idle Callback Deferred",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Execute_20_Idle_20_Callback_20_Deferred,NULL);

	result = method_new("Process HICommand",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Process_20_HICommand,NULL);

	result = method_new("EventRef/Dispose",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_EventRef_2F_Dispose,NULL);

	result = method_new("EventRef/New",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_EventRef_2F_New,NULL);

	result = method_new("EventRef/Get Event Reference",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_EventRef_2F_Get_20_Event_20_Reference,NULL);

	result = method_new("EventRef/Get Next Handler",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_EventRef_2F_Get_20_Next_20_Handler,NULL);

	result = method_new("EventRef/Get User Data",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_EventRef_2F_Get_20_User_20_Data,NULL);

	result = method_new("EventRef/Call Next Event Handler",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_EventRef_2F_Call_20_Next_20_Event_20_Handler,NULL);

	result = method_new("EventRef/Return Event Not Handled",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_EventRef_2F_Return_20_Event_20_Not_20_Handled,NULL);

	result = method_new("EventRef/Return Internal Error",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_EventRef_2F_Return_20_Internal_20_Error,NULL);

	result = method_new("EventRef/Return Parameter Not Found",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_EventRef_2F_Return_20_Parameter_20_Not_20_Found,NULL);

	result = method_new("EventRef/Get Event Class",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_EventRef_2F_Get_20_Event_20_Class,NULL);

	result = method_new("EventRef/Get Event Kind",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_EventRef_2F_Get_20_Event_20_Kind,NULL);

	result = method_new("EventRef/Get Event Parameter",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_EventRef_2F_Get_20_Event_20_Parameter,NULL);

	result = method_new("EventRef/Get EP HICommand",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_EventRef_2F_Get_20_EP_20_HICommand,NULL);

	result = method_new("EventRef/Get EP HIObjectRef",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_EventRef_2F_Get_20_EP_20_HIObjectRef,NULL);

	result = method_new("EventRef/Get EP typePartCode",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_EventRef_2F_Get_20_EP_20_typePartCode,NULL);

	result = method_new("EventRef/Get EP Control Part",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_EventRef_2F_Get_20_EP_20_Control_20_Part,NULL);

	result = method_new("EventRef/Set Event Parameter",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_EventRef_2F_Set_20_Event_20_Parameter,NULL);

	result = method_new("EventRef/Set EP HIObject Instance",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_EventRef_2F_Set_20_EP_20_HIObject_20_Instance,NULL);

	result = method_new("EventRef/Set EP SInt16",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_EventRef_2F_Set_20_EP_20_SInt16,NULL);

	result = method_new("EventRef/Set EP UInt32",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_EventRef_2F_Set_20_EP_20_UInt32,NULL);

	result = method_new("EventRef/Set EP Boolean",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_EventRef_2F_Set_20_EP_20_Boolean,NULL);

	result = method_new("EventRef/Set EP typePartCode",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_EventRef_2F_Set_20_EP_20_typePartCode,NULL);

	result = method_new("EventRef/Set EP typeRef",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_EventRef_2F_Set_20_EP_20_typeRef,NULL);

	result = method_new("EventRef/Set EP Text",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_EventRef_2F_Set_20_EP_20_Text,NULL);

	result = method_new("EventRef/Set EP Control Part",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_EventRef_2F_Set_20_EP_20_Control_20_Part,NULL);

	result = method_new("EventRef/Get EP QDRect",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_EventRef_2F_Get_20_EP_20_QDRect,NULL);

	result = method_new("EventRef/Set EP QDRect",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_EventRef_2F_Set_20_EP_20_QDRect,NULL);

	result = method_new("EventRef/Get EP QDPoint",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_EventRef_2F_Get_20_EP_20_QDPoint,NULL);

	result = method_new("EventRef/Set EP QDPoint",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_EventRef_2F_Set_20_EP_20_QDPoint,NULL);

	result = method_new("EventRef/Get EP Mouse Location CG",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_EventRef_2F_Get_20_EP_20_Mouse_20_Location_20_CG,NULL);

	result = method_new("EventRef/Get EP Mouse Location QD",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_EventRef_2F_Get_20_EP_20_Mouse_20_Location_20_QD,NULL);

	result = method_new("EventRef/Get EP Boolean",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_EventRef_2F_Get_20_EP_20_Boolean,NULL);

	result = method_new("EventRef/Get EP typeRef",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_EventRef_2F_Get_20_EP_20_typeRef,NULL);

	result = method_new("EventRef/Get EP SInt16",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_EventRef_2F_Get_20_EP_20_SInt16,NULL);

	result = method_new("EventRef/Get EP UInt32",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_EventRef_2F_Get_20_EP_20_UInt32,NULL);

	result = method_new("EventRef/Get EP QDRgnHandle",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_EventRef_2F_Get_20_EP_20_QDRgnHandle,NULL);

	result = method_new("EventRef/Get EP Control Region",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_EventRef_2F_Get_20_EP_20_Control_20_Region,NULL);

	result = method_new("EventRef/Set EP QDRgnHandle",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_EventRef_2F_Set_20_EP_20_QDRgnHandle,NULL);

	result = method_new("EventRef/Set EP Control Region",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_EventRef_2F_Set_20_EP_20_Control_20_Region,NULL);

	result = method_new("EventRef/Get EP Enumeration",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_EventRef_2F_Get_20_EP_20_Enumeration,NULL);

	result = method_new("EventRef/Get EP typePtr",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_EventRef_2F_Get_20_EP_20_typePtr,NULL);

	result = method_new("EventRef/Get EP CGContextRef",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_EventRef_2F_Get_20_EP_20_CGContextRef,NULL);

	result = method_new("EventRef/Create Event",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_EventRef_2F_Create_20_Event,NULL);

	result = method_new("EventRef/Create HIObject Initialization Event",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_EventRef_2F_Create_20_HIObject_20_Initialization_20_Event,NULL);

	result = method_new("EventRef/Retain Event",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_EventRef_2F_Retain_20_Event,NULL);

	result = method_new("EventRef/Release Event",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_EventRef_2F_Release_20_Event,NULL);

	result = method_new("EventRef/Get EP CFStringRef",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_EventRef_2F_Get_20_EP_20_CFStringRef,NULL);

	result = method_new("EventRef/Get EP CFString",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_EventRef_2F_Get_20_EP_20_CFString,NULL);

	result = method_new("EventRef/Get EP CFMutableArrayRef",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_EventRef_2F_Get_20_EP_20_CFMutableArrayRef,NULL);

	result = method_new("EventRef/Get EP CFMutableArray",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_EventRef_2F_Get_20_EP_20_CFMutableArray,NULL);

	result = method_new("EventRef/Get EP DragRef",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_EventRef_2F_Get_20_EP_20_DragRef,NULL);

	result = method_new("EventRef/Set EP Object",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_EventRef_2F_Set_20_EP_20_Object,NULL);

	result = method_new("EventRef/Get EP Object",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_EventRef_2F_Get_20_EP_20_Object,NULL);

	result = method_new("EventRef/Get EP Attributes",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_EventRef_2F_Get_20_EP_20_Attributes,NULL);

	result = method_new("EventRef/Set EP Attributes",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_EventRef_2F_Set_20_EP_20_Attributes,NULL);

	result = method_new("EventRef/Set EP CFStringRef",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_EventRef_2F_Set_20_EP_20_CFStringRef,NULL);

	result = method_new("EventRef/Get EP HIPoint",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_EventRef_2F_Get_20_EP_20_HIPoint,NULL);

	result = method_new("EventRef/Set EP HIPoint",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_EventRef_2F_Set_20_EP_20_HIPoint,NULL);

	result = method_new("EventRef/Get EP HISize",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_EventRef_2F_Get_20_EP_20_HISize,NULL);

	result = method_new("EventRef/Set EP HISize",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_EventRef_2F_Set_20_EP_20_HISize,NULL);

	result = method_new("EventRef/Get EP SInt32",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_EventRef_2F_Get_20_EP_20_SInt32,NULL);

	result = method_new("Carbon Event Callback/Open UPP",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Carbon_20_Event_20_Callback_2F_Open_20_UPP,NULL);

	result = method_new("Carbon Event Callback/Install Callback",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Carbon_20_Event_20_Callback_2F_Install_20_Callback,NULL);

	result = method_new("Carbon Event Callback/Get EventTargetRef",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Carbon_20_Event_20_Callback_2F_Get_20_EventTargetRef,NULL);

	result = method_new("Carbon Event Callback/Get EventTypeSpec",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Carbon_20_Event_20_Callback_2F_Get_20_EventTypeSpec,NULL);

	result = method_new("Carbon Event Callback/Do CE Callback",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Carbon_20_Event_20_Callback_2F_Do_20_CE_20_Callback,NULL);

	result = method_new("Carbon Event Callback/Use Parameters",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Carbon_20_Event_20_Callback_2F_Use_20_Parameters,NULL);

	result = method_new("Carbon Event Callback/Remove Callback",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Carbon_20_Event_20_Callback_2F_Remove_20_Callback,NULL);

	result = method_new("Carbon Event Callback/Close UPP",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Carbon_20_Event_20_Callback_2F_Close_20_UPP,NULL);

	result = method_new("Carbon Event Callback/Clean Up Parameters",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Carbon_20_Event_20_Callback_2F_Clean_20_Up_20_Parameters,NULL);

	result = method_new("Carbon Event Callback/Close",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Carbon_20_Event_20_Callback_2F_Close,NULL);

	result = method_new("Carbon Event Callback/xxxCall",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Carbon_20_Event_20_Callback_2F_xxxCall,NULL);

	result = method_new("Carbon Event Callback/Open As Handler",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Carbon_20_Event_20_Callback_2F_Open_20_As_20_Handler,NULL);

	result = method_new("Carbon Event Callback/Get Parameter List?",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Carbon_20_Event_20_Callback_2F_Get_20_Parameter_20_List_3F_,NULL);

	result = method_new("Carbon Timer Callback/xOpen UPP",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Carbon_20_Timer_20_Callback_2F_xOpen_20_UPP,NULL);

	result = method_new("Carbon Timer Callback/xClose UPP",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Carbon_20_Timer_20_Callback_2F_xClose_20_UPP,NULL);

	result = method_new("Carbon Timer Callback/Do CT Exec Callback",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Carbon_20_Timer_20_Callback_2F_Do_20_CT_20_Exec_20_Callback,NULL);

	result = method_new("Carbon Timer Callback/Do CT Callback",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Carbon_20_Timer_20_Callback_2F_Do_20_CT_20_Callback,NULL);

	result = method_new("Carbon Timer Callback/Get EventLoopRef",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Carbon_20_Timer_20_Callback_2F_Get_20_EventLoopRef,NULL);

	result = method_new("Carbon Timer Callback/Install Callback",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Carbon_20_Timer_20_Callback_2F_Install_20_Callback,NULL);

	result = method_new("Carbon Timer Callback/Remove Callback",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Carbon_20_Timer_20_Callback_2F_Remove_20_Callback,NULL);

	result = method_new("Carbon Timer Callback/Get Initial Delay",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Carbon_20_Timer_20_Callback_2F_Get_20_Initial_20_Delay,NULL);

	result = method_new("Carbon Timer Callback/Get Repeat Delay",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Carbon_20_Timer_20_Callback_2F_Get_20_Repeat_20_Delay,NULL);

	result = method_new("Carbon Timer Callback/Close",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Carbon_20_Timer_20_Callback_2F_Close,NULL);

	result = method_new("Carbon Timer Callback/Reset Repeat Delay",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Carbon_20_Timer_20_Callback_2F_Reset_20_Repeat_20_Delay,NULL);

	result = method_new("Carbon Timer Callback/Set Initial Delay",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Carbon_20_Timer_20_Callback_2F_Set_20_Initial_20_Delay,NULL);

	result = method_new("Carbon Timer Callback/Set Repeat Delay",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Carbon_20_Timer_20_Callback_2F_Set_20_Repeat_20_Delay,NULL);

	result = method_new("Carbon Timer Callback/Set Next Fire Time",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Carbon_20_Timer_20_Callback_2F_Set_20_Next_20_Fire_20_Time,NULL);

	result = method_new("Carbon Timer Callback/Get Parameter List?",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Carbon_20_Timer_20_Callback_2F_Get_20_Parameter_20_List_3F_,NULL);

	result = method_new("Carbon Timer Callback/Schedule Callback",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Carbon_20_Timer_20_Callback_2F_Schedule_20_Callback,NULL);

	result = method_new("Carbon Idle Timer Callback/xOpen UPP",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Carbon_20_Idle_20_Timer_20_Callback_2F_xOpen_20_UPP,NULL);

	result = method_new("Carbon Idle Timer Callback/xClose UPP",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Carbon_20_Idle_20_Timer_20_Callback_2F_xClose_20_UPP,NULL);

	result = method_new("Carbon Idle Timer Callback/Do CIT Callback",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Carbon_20_Idle_20_Timer_20_Callback_2F_Do_20_CIT_20_Callback,NULL);

	result = method_new("Carbon Idle Timer Callback/Do CT Exec Callback",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Carbon_20_Idle_20_Timer_20_Callback_2F_Do_20_CT_20_Exec_20_Callback,NULL);

	result = method_new("Carbon Idle Timer Callback/Install Callback",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Carbon_20_Idle_20_Timer_20_Callback_2F_Install_20_Callback,NULL);

	result = method_new("Carbon Idle Timer Callback/Remove Callback",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Carbon_20_Idle_20_Timer_20_Callback_2F_Remove_20_Callback,NULL);

	result = method_new("Carbon Idle Timer Callback/Get Idle Action",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Carbon_20_Idle_20_Timer_20_Callback_2F_Get_20_Idle_20_Action,NULL);

	result = method_new("Carbon Idle Timer Callback/Set Idle Action",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Carbon_20_Idle_20_Timer_20_Callback_2F_Set_20_Idle_20_Action,NULL);

	result = method_new("Carbon Event Target Proxy/Get Carbon EventTargetRef",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Carbon_20_Event_20_Target_20_Proxy_2F_Get_20_Carbon_20_EventTargetRef,NULL);

	result = method_new("Carbon Event Target Proxy/Get HIObjectRef",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Carbon_20_Event_20_Target_20_Proxy_2F_Get_20_HIObjectRef,NULL);

	result = method_new("Carbon Event Target Proxy/Set HIObjectRef",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Carbon_20_Event_20_Target_20_Proxy_2F_Set_20_HIObjectRef,NULL);

	result = method_new("Carbon Event Target Proxy/Dispose",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Carbon_20_Event_20_Target_20_Proxy_2F_Dispose,NULL);

	result = method_new("Carbon Event Target Proxy/New",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Carbon_20_Event_20_Target_20_Proxy_2F_New,NULL);

	result = method_new("Carbon Event Target Proxy/Close",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Carbon_20_Event_20_Target_20_Proxy_2F_Close,"Destructor");

	return kNOERROR;

}



Nat4	loadPersistents_Carbon_20_Events(V_Environment environment);
Nat4	loadPersistents_Carbon_20_Events(V_Environment environment)
{
	V_Value tempPersistent = NULL;
	V_Dictionary dictionary = environment->persistentsTable;

	return kNOERROR;

}

Nat4	load_Carbon_20_Events(V_Environment environment);
Nat4	load_Carbon_20_Events(V_Environment environment)
{

	loadClasses_Carbon_20_Events(environment);
	loadUniversals_Carbon_20_Events(environment);
	loadPersistents_Carbon_20_Events(environment);
	return kNOERROR;

}

