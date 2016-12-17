/* A VPL Section File */
/*

Window.inl.c
Copyright: 2004 Andescotia LLC

*/

#include "MartenInlineProject.h"

enum opTrigger vpx_method_WindowRef_20_To_20_Object_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_WindowRef_20_To_20_Object_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_WindowRef_20_To_20_Object_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_WindowRef_20_To_20_Object_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"GetWindowKind",ROOT(1));

result = vpx_method_Debug_20_OSError(PARAMETERS,TERMINAL(1),TERMINAL(0));

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_WindowRef_20_To_20_Object_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_WindowRef_20_To_20_Object_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_WindowRef_20_To_20_Object_case_1_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_WindowRef_20_To_20_Object_case_1_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_WindowRef_20_To_20_Object_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_WindowRef_20_To_20_Object_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(0));
NEXTCASEONSUCCESS

PUTINTEGER(GetWindowKind( GETPOINTER(0,OpaqueWindowPtr,*,ROOT(2),TERMINAL(0))),1);
result = kSuccess;

result = vpx_method_WindowRef_20_To_20_Object_case_1_local_4(PARAMETERS,TERMINAL(1));

result = vpx_match(PARAMETERS,"42",TERMINAL(1));
NEXTCASEONFAILURE

PUTINTEGER(GetWRefCon( GETPOINTER(0,OpaqueWindowPtr,*,ROOT(4),TERMINAL(0))),3);
result = kSuccess;

result = vpx_match(PARAMETERS,"0",TERMINAL(3));
NEXTCASEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_address_2D_to_2D_object,1,1,TERMINAL(3),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(5));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTER(6)
}

enum opTrigger vpx_method_WindowRef_20_To_20_Object_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_WindowRef_20_To_20_Object_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_WindowRef_20_To_20_Object(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_WindowRef_20_To_20_Object_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_WindowRef_20_To_20_Object_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Get_20_Front_20_Window(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0)
{
HEADER(2)
result = kSuccess;

PUTPOINTER(OpaqueWindowPtr,*,FrontNonFloatingWindow(),0);
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(0));
FAILONSUCCESS

result = vpx_method_WindowRef_20_To_20_Object(PARAMETERS,TERMINAL(0),ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(1));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Get_20_Front_20_Window_20_Type_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Get_20_Front_20_Window_20_Type_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_string_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(1)
}

enum opTrigger vpx_method_Get_20_Front_20_Window_20_Type_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Get_20_Front_20_Window_20_Type_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(0),ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Get_20_Front_20_Window_20_Type_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Get_20_Front_20_Window_20_Type_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Get_20_Front_20_Window_20_Type_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Get_20_Front_20_Window_20_Type_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Get_20_Front_20_Window_20_Type_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Get_20_Front_20_Window_20_Type_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(0),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP__3D_,2,0,TERMINAL(2),TERMINAL(1));
NEXTCASEONFAILURE

result = kSuccess;
FINISHONSUCCESS

OUTPUT(0,TERMINAL(0))
FOOTER(3)
}

enum opTrigger vpx_method_Get_20_Front_20_Window_20_Type_case_1_local_4_case_2_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Get_20_Front_20_Window_20_Type_case_1_local_4_case_2_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_WindowRef,1,1,TERMINAL(0),ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Get_20_Front_20_Window_20_Type_case_1_local_4_case_2_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Get_20_Front_20_Window_20_Type_case_1_local_4_case_2_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(1)
}

enum opTrigger vpx_method_Get_20_Front_20_Window_20_Type_case_1_local_4_case_2_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Get_20_Front_20_Window_20_Type_case_1_local_4_case_2_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Get_20_Front_20_Window_20_Type_case_1_local_4_case_2_local_2_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Get_20_Front_20_Window_20_Type_case_1_local_4_case_2_local_2_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Get_20_Front_20_Window_20_Type_case_1_local_4_case_2_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Get_20_Front_20_Window_20_Type_case_1_local_4_case_2_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_method_WindowRef_20_To_20_Object(PARAMETERS,TERMINAL(0),ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(1));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Get_20_Front_20_Window_20_Type_case_1_local_4_case_2_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Get_20_Front_20_Window_20_Type_case_1_local_4_case_2_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(1)
}

enum opTrigger vpx_method_Get_20_Front_20_Window_20_Type_case_1_local_4_case_2_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Get_20_Front_20_Window_20_Type_case_1_local_4_case_2_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Get_20_Front_20_Window_20_Type_case_1_local_4_case_2_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Get_20_Front_20_Window_20_Type_case_1_local_4_case_2_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Get_20_Front_20_Window_20_Type_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Get_20_Front_20_Window_20_Type_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Get_20_Front_20_Window_20_Type_case_1_local_4_case_2_local_2(PARAMETERS,TERMINAL(0),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
NEXTCASEONSUCCESS

PUTPOINTER(OpaqueWindowPtr,*,GetNextWindow( GETPOINTER(0,OpaqueWindowPtr,*,ROOT(4),TERMINAL(2))),3);
result = kSuccess;

result = vpx_method_Get_20_Front_20_Window_20_Type_case_1_local_4_case_2_local_5(PARAMETERS,TERMINAL(3),ROOT(5));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(5));
FINISHONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTER(6)
}

enum opTrigger vpx_method_Get_20_Front_20_Window_20_Type_case_1_local_4_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Get_20_Front_20_Window_20_Type_case_1_local_4_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(2));

result = kSuccess;
FINISHONSUCCESS

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Get_20_Front_20_Window_20_Type_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Get_20_Front_20_Window_20_Type_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Get_20_Front_20_Window_20_Type_case_1_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
if(vpx_method_Get_20_Front_20_Window_20_Type_case_1_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Get_20_Front_20_Window_20_Type_case_1_local_4_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Get_20_Front_20_Window_20_Type(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Get_20_Front_20_Window(PARAMETERS,ROOT(1));
FAILONFAILURE

result = vpx_method_Get_20_Front_20_Window_20_Type_case_1_local_3(PARAMETERS,TERMINAL(0),ROOT(2));
FAILONFAILURE

REPEATBEGIN
LOOPTERMINALBEGIN(1)
LOOPTERMINAL(0,1,3)
result = vpx_method_Get_20_Front_20_Window_20_Type_case_1_local_4(PARAMETERS,LOOP(0),TERMINAL(2),ROOT(3));
REPEATFINISH

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(3));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Close_20_All_20_Windows_case_1_local_3_case_1_local_8_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Close_20_All_20_Windows_case_1_local_3_case_1_local_8_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_WindowRef,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
NEXTCASEONSUCCESS

result = vpx_constant(PARAMETERS,"NULL",ROOT(2));

SendBehind( GETPOINTER(0,OpaqueWindowPtr,*,ROOT(3),TERMINAL(1)),GETPOINTER(0,OpaqueWindowPtr,*,ROOT(4),TERMINAL(2)));
result = kSuccess;

result = kSuccess;

FOOTER(5)
}

enum opTrigger vpx_method_Close_20_All_20_Windows_case_1_local_3_case_1_local_8_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Close_20_All_20_Windows_case_1_local_3_case_1_local_8_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_Close_20_All_20_Windows_case_1_local_3_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Close_20_All_20_Windows_case_1_local_3_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Close_20_All_20_Windows_case_1_local_3_case_1_local_8_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Close_20_All_20_Windows_case_1_local_3_case_1_local_8_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Close_20_All_20_Windows_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Close_20_All_20_Windows_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Get_20_Front_20_Window(PARAMETERS,ROOT(1));
TERMINATEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP__28_in_29_,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_match(PARAMETERS,"0",TERMINAL(2));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Close_20_All,1,1,TERMINAL(1),ROOT(3));

result = vpx_method_Default_20_List(PARAMETERS,TERMINAL(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP__28_join_29_,2,1,TERMINAL(0),TERMINAL(4),ROOT(5));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(4))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Close_20_All_20_Windows_case_1_local_3_case_1_local_8(PARAMETERS,LIST(4));
REPEATFINISH
} else {
}

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Close_20_All_20_Windows(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex)
{
HEADER(2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( )",ROOT(0));

REPEATBEGIN
LOOPTERMINALBEGIN(1)
LOOPTERMINAL(0,0,1)
result = vpx_method_Close_20_All_20_Windows_case_1_local_3(PARAMETERS,LOOP(0),ROOT(1));
REPEATFINISH

result = kSuccess;

FOOTERSINGLECASE(2)
}




	Nat4 tempAttribute_Window_2F_Name[] = {
0000000000, 0X0000002C, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X0000000F, 0X556E7469, 0X746C6564, 0X2057696E,
0X646F7700
	};
	Nat4 tempAttribute_Window_2F_Window_20_Event_20_Handler[] = {
0000000000, 0X000005A8, 0X00000114, 0X00000040, 0X00000014, 0X00000688, 0X00000684, 0X0000067C,
0X00000418, 0X00000634, 0X00000630, 0X00000628, 0X00000414, 0X000005E0, 0X000005DC, 0X000005D4,
0X00000410, 0X0000058C, 0X00000588, 0X00000580, 0X0000040C, 0X00000538, 0X00000534, 0X0000052C,
0X00000408, 0X000004E4, 0X000004E0, 0X000004D8, 0X00000404, 0X00000490, 0X0000048C, 0X00000484,
0X00000400, 0X0000043C, 0X00000438, 0X00000430, 0X000003FC, 0X000003F4, 0X00000180, 0X0000017C,
0X000003AC, 0X00000168, 0X00000380, 0X00000164, 0X00000354, 0X0000033C, 0X00000314, 0X0000031C,
0X000002FC, 0X000002F4, 0X0000015C, 0X000002CC, 0X000002B4, 0X0000028C, 0X00000294, 0X00000210,
0X00000268, 0X00000250, 0X00000228, 0X00000230, 0X0000020C, 0X00000204, 0X00000158, 0X000001D4,
0X00000154, 0X000001A4, 0X0000014C, 0X00000128, 0X00000130, 0X00270008, 0000000000, 0000000000,
0000000000, 0000000000, 0X0000014C, 0X00000011, 0X00000134, 0X43617262, 0X6F6E2045, 0X76656E74,
0X2043616C, 0X6C626163, 0X6B000000, 0X00000190, 0000000000, 0X000001C0, 0X000001F0, 0X000002E0,
0000000000, 0X0000036C, 0X00000398, 0000000000, 0000000000, 0000000000, 0000000000, 0X000003C8,
0X000003E0, 0000000000, 0000000000, 0000000000, 0X00000006, 0000000000, 0000000000, 0000000000,
0000000000, 0X000001AC, 0X00000011, 0X6B457665, 0X6E745769, 0X6E646F77, 0X436C6173, 0X73000000,
0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X000001DC, 0X00000010, 0X2F434520,
0X48616E64, 0X6C652045, 0X76656E74, 0000000000, 0X00000007, 0000000000, 0000000000, 0000000000,
0000000000, 0X0000020C, 0X00000002, 0X00000214, 0X00000278, 0X00150008, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000250, 0X00000001, 0X00000234, 0X41747472, 0X69627574, 0X6520496E,
0X70757420, 0X53706563, 0X69666965, 0X72000000, 0X00000254, 0X00000006, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000270, 0X00000005, 0X4F776E65, 0X72000000, 0X00150008, 0000000000,
0000000000, 0000000000, 0000000000, 0X000002B4, 0X00000001, 0X00000298, 0X41747472, 0X69627574,
0X6520496E, 0X70757420, 0X53706563, 0X69666965, 0X72000000, 0X000002B8, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X000002D4, 0X00000009, 0X54686520, 0X4576656E, 0X74000000,
0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X000002FC, 0X00000001, 0X00000300,
0X00160008, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000033C, 0X00000001, 0X00000320,
0X41747472, 0X69627574, 0X65204F75, 0X74707574, 0X20537065, 0X63696669, 0X65720000, 0X00000340,
0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000035C, 0X0000000F, 0X43616C6C,
0X6261636B, 0X20526573, 0X756C7400, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000388, 0X0000000F, 0X2F446F20, 0X43452043, 0X616C6C62, 0X61636B00, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X000003B4, 0X00000013, 0X4576656E, 0X7448616E, 0X646C6572,
0X50726F63, 0X50747200, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X000003FC, 0X00000008, 0X0000041C,
0X00000470, 0X000004C4, 0X00000518, 0X0000056C, 0X000005C0, 0X00000614, 0X00000668, 0X00000007,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000438, 0X00000002, 0X00000440, 0X00000458,
0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X636D6473, 0X00000004, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000001, 0X00000007, 0000000000, 0000000000, 0000000000,
0000000000, 0X0000048C, 0X00000002, 0X00000494, 0X000004AC, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0X636D6473, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000002, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X000004E0, 0X00000002,
0X000004E8, 0X00000500, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X77696E64,
0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000048, 0X00000007, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000534, 0X00000002, 0X0000053C, 0X00000554, 0X00000004,
0000000000, 0000000000, 0000000000, 0000000000, 0X77696E64, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000005, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000588, 0X00000002, 0X00000590, 0X000005A8, 0X00000004, 0000000000, 0000000000, 0000000000,
0000000000, 0X77696E64, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000006,
0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X000005DC, 0X00000002, 0X000005E4,
0X000005FC, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X77696E64, 0X00000004,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000002, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000630, 0X00000002, 0X00000638, 0X00000650, 0X00000004, 0000000000,
0000000000, 0000000000, 0000000000, 0X77696E64, 0X00000004, 0000000000, 0000000000, 0000000000,
0000000000, 0X0000001B, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000684,
0X00000002, 0X0000068C, 0X000006A4, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000,
0X77696E64, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000050
	};


Nat4 VPLC_Window_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Window_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 98 379 }{ 162 451 } */
	tempAttribute = attribute_add("Name",tempClass,tempAttribute_Window_2F_Name,environment);
	tempAttribute = attribute_add("WindowRef",tempClass,NULL,environment);
	tempAttribute = attribute_add("Window Event Handler",tempClass,tempAttribute_Window_2F_Window_20_Event_20_Handler,environment);
/* Stop Attributes */

/* NULL SUPER CLASS */
	return kNOERROR;
}

/* Start Universals: { 59 951 }{ 814 329 } */
enum opTrigger vpx_method_Window_2F_CE_20_Handle_20_Event_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Window_2F_CE_20_Handle_20_Event_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_Window_2F_CE_20_Handle_20_Event_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Window_2F_CE_20_Handle_20_Event_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\": \"",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_integer_2D_to_2D_string,1,1,TERMINAL(1),ROOT(4));

result = vpx_constant(PARAMETERS,"Window event",ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_to_2D_string,1,1,TERMINAL(2),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,3,1,TERMINAL(4),TERMINAL(3),TERMINAL(6),ROOT(7));

result = vpx_constant(PARAMETERS,"4",ROOT(8));

result = vpx_method_Debug_20_Result(PARAMETERS,TERMINAL(0),TERMINAL(5),TERMINAL(7),TERMINAL(8));

result = kSuccess;

FOOTER(9)
}

enum opTrigger vpx_method_Window_2F_CE_20_Handle_20_Event_case_1_local_4_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Window_2F_CE_20_Handle_20_Event_case_1_local_4_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_Window_2F_CE_20_Handle_20_Event_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Window_2F_CE_20_Handle_20_Event_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Window_2F_CE_20_Handle_20_Event_case_1_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2))
if(vpx_method_Window_2F_CE_20_Handle_20_Event_case_1_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2))
vpx_method_Window_2F_CE_20_Handle_20_Event_case_1_local_4_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2);
return outcome;
}

enum opTrigger vpx_method_Window_2F_CE_20_Handle_20_Event_case_1_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Window_2F_CE_20_Handle_20_Event_case_1_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
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

enum opTrigger vpx_method_Window_2F_CE_20_Handle_20_Event_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Window_2F_CE_20_Handle_20_Event_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Event_20_Class,1,1,TERMINAL(1),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Event_20_Kind,1,1,TERMINAL(1),ROOT(3));

result = vpx_method_Window_2F_CE_20_Handle_20_Event_case_1_local_4(PARAMETERS,TERMINAL(0),TERMINAL(2),TERMINAL(3));

result = vpx_extmatch(PARAMETERS,kEventClassCommand,TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_extmatch(PARAMETERS,kEventCommandProcess,TERMINAL(3));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_EP_20_HICommand,1,2,TERMINAL(1),ROOT(4),ROOT(5));

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(4));
NEXTCASEONFAILURE

result = vpx_method_Window_2F_CE_20_Handle_20_Event_case_1_local_9(PARAMETERS,TERMINAL(5),ROOT(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_CE_20_HICommand_20_Process,4,1,TERMINAL(0),TERMINAL(6),TERMINAL(5),TERMINAL(1),ROOT(7));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(7))
FOOTER(8)
}

enum opTrigger vpx_method_Window_2F_CE_20_Handle_20_Event_case_2_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Window_2F_CE_20_Handle_20_Event_case_2_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
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

enum opTrigger vpx_method_Window_2F_CE_20_Handle_20_Event_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Window_2F_CE_20_Handle_20_Event_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
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

result = vpx_method_Window_2F_CE_20_Handle_20_Event_case_2_local_8(PARAMETERS,TERMINAL(5),ROOT(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_CE_20_HICommand_20_Update_20_Status,4,1,TERMINAL(0),TERMINAL(6),TERMINAL(5),TERMINAL(1),ROOT(7));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(7))
FOOTER(8)
}

enum opTrigger vpx_method_Window_2F_CE_20_Handle_20_Event_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Window_2F_CE_20_Handle_20_Event_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Event_20_Class,1,1,TERMINAL(1),ROOT(2));

result = vpx_extmatch(PARAMETERS,kEventClassWindow,TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Event_20_Kind,1,1,TERMINAL(1),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_CE_20_Window_20_Event,3,1,TERMINAL(0),TERMINAL(3),TERMINAL(1),ROOT(4));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Window_2F_CE_20_Handle_20_Event_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Window_2F_CE_20_Handle_20_Event_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Return_20_Event_20_Not_20_Handled,1,1,TERMINAL(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Window_2F_CE_20_Handle_20_Event(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Window_2F_CE_20_Handle_20_Event_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
if(vpx_method_Window_2F_CE_20_Handle_20_Event_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
if(vpx_method_Window_2F_CE_20_Handle_20_Event_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Window_2F_CE_20_Handle_20_Event_case_4(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Window_2F_CE_20_HICommand_20_Update_20_Status_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0);
enum opTrigger vpx_method_Window_2F_CE_20_HICommand_20_Update_20_Status_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,kHICommandClose,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"NULL",ROOT(4));

EnableMenuCommand( GETPOINTER(0,OpaqueMenuRef,*,ROOT(5),TERMINAL(4)),GETINTEGER(TERMINAL(1)));
result = kSuccess;

result = vpx_extconstant(PARAMETERS,noErr,ROOT(6));

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTER(7)
}

enum opTrigger vpx_method_Window_2F_CE_20_HICommand_20_Update_20_Status_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0);
enum opTrigger vpx_method_Window_2F_CE_20_HICommand_20_Update_20_Status_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0)
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

enum opTrigger vpx_method_Window_2F_CE_20_HICommand_20_Update_20_Status(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Window_2F_CE_20_HICommand_20_Update_20_Status_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0))
vpx_method_Window_2F_CE_20_HICommand_20_Update_20_Status_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0);
return outcome;
}

enum opTrigger vpx_method_Window_2F_CE_20_HICommand_20_Process(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0)
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

enum opTrigger vpx_method_Window_2F_CE_20_Window_20_Event_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Window_2F_CE_20_Window_20_Event_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,kEventWindowClose,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_CE_20_Window_20_Close,2,0,TERMINAL(0),TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_extconstant(PARAMETERS,noErr,ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_Window_2F_CE_20_Window_20_Event_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Window_2F_CE_20_Window_20_Event_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,kEventWindowDrawContent,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_CE_20_Window_20_Draw_20_Content,2,0,TERMINAL(0),TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_extconstant(PARAMETERS,noErr,ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_Window_2F_CE_20_Window_20_Event_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Window_2F_CE_20_Window_20_Event_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,kEventWindowActivated,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_CE_20_Window_20_Activated,2,0,TERMINAL(0),TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_extconstant(PARAMETERS,noErr,ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_Window_2F_CE_20_Window_20_Event_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Window_2F_CE_20_Window_20_Event_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,kEventWindowDeactivated,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_CE_20_Window_20_Deactivated,2,0,TERMINAL(0),TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_extconstant(PARAMETERS,noErr,ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_Window_2F_CE_20_Window_20_Event_case_5(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Window_2F_CE_20_Window_20_Event_case_5(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,kEventWindowBoundsChanged,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_CE_20_Window_20_Bounds_20_Changed,2,0,TERMINAL(0),TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_extconstant(PARAMETERS,noErr,ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_Window_2F_CE_20_Window_20_Event_case_6(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Window_2F_CE_20_Window_20_Event_case_6(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,kEventWindowGetIdealSize,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_CE_20_Window_20_Get_20_Ideal_20_Size,2,0,TERMINAL(0),TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_extconstant(PARAMETERS,noErr,ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_Window_2F_CE_20_Window_20_Event_case_7(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Window_2F_CE_20_Window_20_Event_case_7(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,kEventWindowClickContentRgn,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_CE_20_Window_20_Click_20_Content,2,1,TERMINAL(0),TERMINAL(2),ROOT(3));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_Window_2F_CE_20_Window_20_Event_case_8(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Window_2F_CE_20_Window_20_Event_case_8(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,kEventWindowResizeCompleted,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_CE_20_Window_20_Resize_20_Completed,2,1,TERMINAL(0),TERMINAL(2),ROOT(3));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_Window_2F_CE_20_Window_20_Event_case_9(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Window_2F_CE_20_Window_20_Event_case_9(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,kEventWindowDragCompleted,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_CE_20_Window_20_Drag_20_Completed,2,1,TERMINAL(0),TERMINAL(2),ROOT(3));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_Window_2F_CE_20_Window_20_Event_case_10(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Window_2F_CE_20_Window_20_Event_case_10(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,kEventWindowCloseAll,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_CE_20_Window_20_Close_20_All,2,0,TERMINAL(0),TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_extconstant(PARAMETERS,noErr,ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_Window_2F_CE_20_Window_20_Event_case_11(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Window_2F_CE_20_Window_20_Event_case_11(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Return_20_Event_20_Not_20_Handled,1,1,TERMINAL(2),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_Window_2F_CE_20_Window_20_Event(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Window_2F_CE_20_Window_20_Event_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
if(vpx_method_Window_2F_CE_20_Window_20_Event_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
if(vpx_method_Window_2F_CE_20_Window_20_Event_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
if(vpx_method_Window_2F_CE_20_Window_20_Event_case_4(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
if(vpx_method_Window_2F_CE_20_Window_20_Event_case_5(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
if(vpx_method_Window_2F_CE_20_Window_20_Event_case_6(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
if(vpx_method_Window_2F_CE_20_Window_20_Event_case_7(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
if(vpx_method_Window_2F_CE_20_Window_20_Event_case_8(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
if(vpx_method_Window_2F_CE_20_Window_20_Event_case_9(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
if(vpx_method_Window_2F_CE_20_Window_20_Event_case_10(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
vpx_method_Window_2F_CE_20_Window_20_Event_case_11(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0);
return outcome;
}

enum opTrigger vpx_method_Window_2F_Create_20_Window_20_Class_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Window_2F_Create_20_Window_20_Class_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"CreateNewWindow",ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Report_20_Error,3,0,TERMINAL(0),TERMINAL(2),TERMINAL(1));
FAILONFAILURE

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Window_2F_Create_20_Window_20_Class(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3)
{
HEADERWITHNONE(9)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

PUTINTEGER(CreateNewWindow( GETINTEGER(TERMINAL(1)),GETINTEGER(TERMINAL(2)),GETCONSTPOINTER(Rect,*,TERMINAL(3)),GETPOINTER(0,OpaqueWindowPtr,**,ROOT(5),NONE)),4);
result = kSuccess;

result = vpx_method_Window_2F_Create_20_Window_20_Class_case_1_local_3(PARAMETERS,TERMINAL(0),TERMINAL(4));
FAILONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Create_20_With_20_WindowRef,2,0,TERMINAL(0),TERMINAL(5));

PUTINTEGER(CreateRootControl( GETPOINTER(0,OpaqueWindowPtr,*,ROOT(7),TERMINAL(5)),GETPOINTER(0,OpaqueControlRef,**,ROOT(8),NONE)),6);
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASEWITHNONE(9)
}

enum opTrigger vpx_method_Window_2F_Create_20_Nib_20_Window_case_1_local_2_case_1_local_5_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Window_2F_Create_20_Nib_20_Window_case_1_local_2_case_1_local_5_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"CreateWindowFromNib",ROOT(1));

result = vpx_method_Debug_20_OSError(PARAMETERS,TERMINAL(1),TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Window_2F_Create_20_Nib_20_Window_case_1_local_2_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Window_2F_Create_20_Nib_20_Window_case_1_local_2_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1)
{
HEADERWITHNONE(7)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(0));
NEXTCASEONFAILURE

PUTINTEGER(CreateWindowFromNib( GETPOINTER(0,OpaqueIBNibRef,*,ROOT(4),TERMINAL(1)),GETCONSTPOINTER(__CFString,*,TERMINAL(2)),GETPOINTER(0,OpaqueWindowPtr,**,ROOT(5),NONE)),3);
result = kSuccess;

DisposeNibReference( GETPOINTER(0,OpaqueIBNibRef,*,ROOT(6),TERMINAL(1)));
result = kSuccess;

result = vpx_method_Window_2F_Create_20_Nib_20_Window_case_1_local_2_case_1_local_5_case_1_local_5(PARAMETERS,TERMINAL(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
OUTPUT(1,TERMINAL(5))
FOOTERWITHNONE(7)
}

enum opTrigger vpx_method_Window_2F_Create_20_Nib_20_Window_case_1_local_2_case_1_local_5_case_2_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Window_2F_Create_20_Nib_20_Window_case_1_local_2_case_1_local_5_case_2_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"CreateNibReference",ROOT(1));

result = vpx_method_Debug_20_OSError(PARAMETERS,TERMINAL(1),TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Window_2F_Create_20_Nib_20_Window_case_1_local_2_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Window_2F_Create_20_Nib_20_Window_case_1_local_2_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(3));

result = vpx_method_Window_2F_Create_20_Nib_20_Window_case_1_local_2_case_1_local_5_case_2_local_3(PARAMETERS,TERMINAL(0));

result = kSuccess;

OUTPUT(0,TERMINAL(0))
OUTPUT(1,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_Window_2F_Create_20_Nib_20_Window_case_1_local_2_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Window_2F_Create_20_Nib_20_Window_case_1_local_2_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Window_2F_Create_20_Nib_20_Window_case_1_local_2_case_1_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0,root1))
vpx_method_Window_2F_Create_20_Nib_20_Window_case_1_local_2_case_1_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0,root1);
return outcome;
}

enum opTrigger vpx_method_Window_2F_Create_20_Nib_20_Window_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Window_2F_Create_20_Nib_20_Window_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADERWITHNONE(8)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_To_20_CFStringRef(PARAMETERS,TERMINAL(0),ROOT(2));

result = vpx_method_To_20_CFStringRef(PARAMETERS,TERMINAL(1),ROOT(3));

PUTINTEGER(CreateNibReference( GETCONSTPOINTER(__CFString,*,TERMINAL(2)),GETPOINTER(0,OpaqueIBNibRef,**,ROOT(5),NONE)),4);
result = kSuccess;

result = vpx_method_Window_2F_Create_20_Nib_20_Window_case_1_local_2_case_1_local_5(PARAMETERS,TERMINAL(4),TERMINAL(5),TERMINAL(3),ROOT(6),ROOT(7));

result = kSuccess;

OUTPUT(0,TERMINAL(6))
OUTPUT(1,TERMINAL(7))
FOOTERSINGLECASEWITHNONE(8)
}

enum opTrigger vpx_method_Window_2F_Create_20_Nib_20_Window_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Window_2F_Create_20_Nib_20_Window_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"CreateNibWindow",ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Report_20_Error,3,0,TERMINAL(0),TERMINAL(2),TERMINAL(1));
FAILONFAILURE

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Window_2F_Create_20_Nib_20_Window(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_method_Window_2F_Create_20_Nib_20_Window_case_1_local_2(PARAMETERS,TERMINAL(1),TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_method_Window_2F_Create_20_Nib_20_Window_case_1_local_3(PARAMETERS,TERMINAL(0),TERMINAL(3));
FAILONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Create_20_With_20_WindowRef,2,0,TERMINAL(0),TERMINAL(4));

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Window_2F_Create_20_With_20_WindowRef(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_WindowRef,2,0,TERMINAL(0),TERMINAL(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Initialize,1,0,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Window_2F_Report_20_Error(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"2",ROOT(3));

result = vpx_method_Debug_20_Result(PARAMETERS,TERMINAL(0),TERMINAL(1),TERMINAL(2),TERMINAL(3));

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(2));
FAILONFAILURE

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Window_2F_Get_20_WindowRef(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_WindowRef,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Window_2F_Set_20_WindowRef(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_WindowRef,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Window_2F_Initialize_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Window_2F_Initialize_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Get_20_Desktop(PARAMETERS,ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(1));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Add_20_Window,2,0,TERMINAL(1),TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Window_2F_Initialize_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Window_2F_Initialize_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(7)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_WindowRef,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
TERMINATEONSUCCESS

result = vpx_constant(PARAMETERS,"42",ROOT(2));

SetWindowKind( GETPOINTER(0,OpaqueWindowPtr,*,ROOT(3),TERMINAL(1)),GETINTEGER(TERMINAL(2)));
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_object_2D_to_2D_address,1,1,TERMINAL(0),ROOT(4));

SetWRefCon( GETPOINTER(0,OpaqueWindowPtr,*,ROOT(5),TERMINAL(1)),GETINTEGER(TERMINAL(4)));
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_retain_2D_object,1,1,TERMINAL(0),ROOT(6));

result = kSuccess;

FOOTERSINGLECASE(7)
}

enum opTrigger vpx_method_Window_2F_Initialize(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Window_2F_Initialize_case_1_local_2(PARAMETERS,TERMINAL(0));

result = vpx_method_Window_2F_Initialize_case_1_local_3(PARAMETERS,TERMINAL(0));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Initialize_20_Window_20_Events,1,0,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Window_2F_Initialize_20_Window_20_Events_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Window_2F_Initialize_20_Window_20_Events_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Window_20_Event_20_Handler,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_set(PARAMETERS,kVPXValue_Event_20_Target,TERMINAL(2),TERMINAL(0),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open,2,0,TERMINAL(3),TERMINAL(0));

result = kSuccess;

FOOTER(4)
}

enum opTrigger vpx_method_Window_2F_Initialize_20_Window_20_Events_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Window_2F_Initialize_20_Window_20_Events_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_Window_2F_Initialize_20_Window_20_Events(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Window_2F_Initialize_20_Window_20_Events_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Window_2F_Initialize_20_Window_20_Events_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Window_2F_Dispose_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Window_2F_Dispose_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_WindowRef,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
TERMINATEONSUCCESS

DisposeWindow( GETPOINTER(0,OpaqueWindowPtr,*,ROOT(2),TERMINAL(1)));
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_WindowRef,2,0,TERMINAL(0),TERMINAL(3));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Window_2F_Dispose_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Window_2F_Dispose_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Window_20_Event_20_Handler,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(2));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Close,1,0,TERMINAL(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Window_2F_Dispose(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Window_2F_Dispose_case_1_local_2(PARAMETERS,TERMINAL(0));

result = vpx_method_Window_2F_Dispose_case_1_local_3(PARAMETERS,TERMINAL(0));

result = vpx_call_primitive(PARAMETERS,VPLP_release_2D_object,1,0,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Window_2F_Close_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Window_2F_Close_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Get_20_Desktop(PARAMETERS,ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(1));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Remove_20_Window,2,0,TERMINAL(1),TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Window_2F_Close(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Hide,1,0,TERMINAL(0));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Dispose,1,0,TERMINAL(0));

result = vpx_method_Window_2F_Close_case_1_local_4(PARAMETERS,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Window_2F_Get_20_CGrafPtr_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Window_2F_Get_20_CGrafPtr_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_WindowRef,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
NEXTCASEONSUCCESS

PUTPOINTER(OpaqueGrafPtr,*,GetWindowPort( GETPOINTER(0,OpaqueWindowPtr,*,ROOT(3),TERMINAL(1))),2);
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(4)
}

enum opTrigger vpx_method_Window_2F_Get_20_CGrafPtr_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Window_2F_Get_20_CGrafPtr_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Window_2F_Get_20_CGrafPtr(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Window_2F_Get_20_CGrafPtr_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Window_2F_Get_20_CGrafPtr_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Window_2F_Set_20_Title(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_WindowRef,1,1,TERMINAL(0),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
TERMINATEONSUCCESS

result = vpx_method_To_20_CFString(PARAMETERS,TERMINAL(1),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CF_20_Reference,1,1,TERMINAL(3),ROOT(4));

PUTINTEGER(SetWindowTitleWithCFString( GETPOINTER(0,OpaqueWindowPtr,*,ROOT(6),TERMINAL(2)),GETCONSTPOINTER(__CFString,*,TERMINAL(4))),5);
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Release,1,0,TERMINAL(3));

result = kSuccess;

FOOTERSINGLECASE(7)
}

enum opTrigger vpx_method_Window_2F_Copy_20_Title_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Window_2F_Copy_20_Title_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(6)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_WindowRef,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
NEXTCASEONSUCCESS

PUTINTEGER(CopyWindowTitleAsCFString( GETPOINTER(0,OpaqueWindowPtr,*,ROOT(3),TERMINAL(1)),GETPOINTER(0,__CFString,**,ROOT(4),NONE)),2);
result = kSuccess;

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_method_CF_20_String_2F_New(PARAMETERS,TERMINAL(4),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTERWITHNONE(6)
}

enum opTrigger vpx_method_Window_2F_Copy_20_Title_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Window_2F_Copy_20_Title_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Window_2F_Copy_20_Title(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Window_2F_Copy_20_Title_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Window_2F_Copy_20_Title_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Window_2F_Set_20_Alternate_20_Title(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_WindowRef,1,1,TERMINAL(0),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
TERMINATEONSUCCESS

result = vpx_method_To_20_CFString(PARAMETERS,TERMINAL(1),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CF_20_Reference,1,1,TERMINAL(3),ROOT(4));

PUTINTEGER(SetWindowAlternateTitle( GETPOINTER(0,OpaqueWindowPtr,*,ROOT(6),TERMINAL(2)),GETCONSTPOINTER(__CFString,*,TERMINAL(4))),5);
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Release,1,0,TERMINAL(3));

result = kSuccess;

FOOTERSINGLECASE(7)
}

enum opTrigger vpx_method_Window_2F_Copy_20_Alternate_20_Title_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Window_2F_Copy_20_Alternate_20_Title_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(6)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_WindowRef,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
NEXTCASEONSUCCESS

PUTINTEGER(CopyWindowAlternateTitle( GETPOINTER(0,OpaqueWindowPtr,*,ROOT(3),TERMINAL(1)),GETPOINTER(0,__CFString,**,ROOT(4),NONE)),2);
result = kSuccess;

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_method_CF_20_String_2F_New(PARAMETERS,TERMINAL(4),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTERWITHNONE(6)
}

enum opTrigger vpx_method_Window_2F_Copy_20_Alternate_20_Title_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Window_2F_Copy_20_Alternate_20_Title_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Window_2F_Copy_20_Alternate_20_Title(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Window_2F_Copy_20_Alternate_20_Title_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Window_2F_Copy_20_Alternate_20_Title_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Window_2F_Show_case_1_local_5_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Window_2F_Show_case_1_local_5_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADERWITHNONE(8)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_WindowRef,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
FAILONSUCCESS

PUTPOINTER(OpaqueWindowPtr,*,ActiveNonFloatingWindow(),2);
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP__3D_,2,0,TERMINAL(1),TERMINAL(2));
FAILONFAILURE

PUTINTEGER(GetWindowActivationScope( GETPOINTER(0,OpaqueWindowPtr,*,ROOT(4),TERMINAL(1)),GETPOINTER(4,unsigned int,*,ROOT(5),NONE)),3);
result = kSuccess;

result = vpx_method_Get_20_UInt32(PARAMETERS,TERMINAL(5),NONE,ROOT(6),ROOT(7));

result = vpx_extmatch(PARAMETERS,kWindowActivationScopeAll,TERMINAL(7));
FAILONFAILURE

result = kSuccess;

FOOTERSINGLECASEWITHNONE(8)
}

enum opTrigger vpx_method_Window_2F_Show_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Window_2F_Show_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADERWITHNONE(1)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Window_2F_Show_case_1_local_5_case_1_local_2(PARAMETERS,TERMINAL(0));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Advance_20_Focus,2,0,TERMINAL(0),NONE);

result = kSuccess;

FOOTERSINGLECASEWITHNONE(1)
}

enum opTrigger vpx_method_Window_2F_Show(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_WindowRef,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
TERMINATEONSUCCESS

ShowWindow( GETPOINTER(0,OpaqueWindowPtr,*,ROOT(2),TERMINAL(1)));
result = kSuccess;

result = vpx_method_Window_2F_Show_case_1_local_5(PARAMETERS,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Window_2F_Hide(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_WindowRef,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
TERMINATEONSUCCESS

HideWindow( GETPOINTER(0,OpaqueWindowPtr,*,ROOT(2),TERMINAL(1)));
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Window_2F_Is_20_Visible_3F__case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Window_2F_Is_20_Visible_3F__case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_WindowRef,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
NEXTCASEONSUCCESS

PUTINTEGER(IsWindowVisible( GETPOINTER(0,OpaqueWindowPtr,*,ROOT(3),TERMINAL(1))),2);
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(4)
}

enum opTrigger vpx_method_Window_2F_Is_20_Visible_3F__case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Window_2F_Is_20_Visible_3F__case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"FALSE",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Window_2F_Is_20_Visible_3F_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Window_2F_Is_20_Visible_3F__case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Window_2F_Is_20_Visible_3F__case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Window_2F_Select(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_WindowRef,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
TERMINATEONSUCCESS

SelectWindow( GETPOINTER(0,OpaqueWindowPtr,*,ROOT(2),TERMINAL(1)));
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Window_2F_Draw(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Window_2F_Activated(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Window_2F_Deactivated(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Window_2F_Moved(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Window_2F_Resized(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Window_2F_Get_20_Ideal_20_Size(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"0",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
OUTPUT(1,TERMINAL(1))
FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Window_2F_Click_20_Content(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Return_20_Event_20_Not_20_Handled,1,1,TERMINAL(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Window_2F_Move_20_Content_20_TopLeft_20_To(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_WindowRef,1,1,TERMINAL(0),ROOT(3));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
TERMINATEONSUCCESS

result = vpx_constant(PARAMETERS,"FALSE",ROOT(4));

MoveWindow( GETPOINTER(0,OpaqueWindowPtr,*,ROOT(5),TERMINAL(3)),GETINTEGER(TERMINAL(1)),GETINTEGER(TERMINAL(2)),GETINTEGER(TERMINAL(4)));
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Window_2F_Set_20_Content_20_Size(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_WindowRef,1,1,TERMINAL(0),ROOT(3));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
TERMINATEONSUCCESS

result = vpx_constant(PARAMETERS,"TRUE",ROOT(4));

SizeWindow( GETPOINTER(0,OpaqueWindowPtr,*,ROOT(5),TERMINAL(3)),GETINTEGER(TERMINAL(1)),GETINTEGER(TERMINAL(2)),GETINTEGER(TERMINAL(4)));
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Window_2F_Invalidate_20_Region(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_WindowRef,1,1,TERMINAL(0),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
TERMINATEONSUCCESS

PUTINTEGER(InvalWindowRgn( GETPOINTER(0,OpaqueWindowPtr,*,ROOT(4),TERMINAL(2)),GETPOINTER(0,OpaqueRgnHandle,*,ROOT(5),TERMINAL(1))),3);
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Window_2F_Invalidate_20_Rect(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_WindowRef,1,1,TERMINAL(0),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
TERMINATEONSUCCESS

PUTINTEGER(InvalWindowRect( GETPOINTER(0,OpaqueWindowPtr,*,ROOT(4),TERMINAL(2)),GETCONSTPOINTER(Rect,*,TERMINAL(1))),3);
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Window_2F_Validate_20_Region(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_WindowRef,1,1,TERMINAL(0),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
TERMINATEONSUCCESS

PUTINTEGER(ValidWindowRgn( GETPOINTER(0,OpaqueWindowPtr,*,ROOT(4),TERMINAL(2)),GETPOINTER(0,OpaqueRgnHandle,*,ROOT(5),TERMINAL(1))),3);
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Window_2F_Validate_20_Rect(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_WindowRef,1,1,TERMINAL(0),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
TERMINATEONSUCCESS

PUTINTEGER(ValidWindowRect( GETPOINTER(0,OpaqueWindowPtr,*,ROOT(4),TERMINAL(2)),GETCONSTPOINTER(Rect,*,TERMINAL(1))),3);
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Window_2F_Update_20_Now(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADERWITHNONE(24)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_WindowRef,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
TERMINATEONSUCCESS

PUTINTEGER(IsWindowUpdatePending( GETPOINTER(0,OpaqueWindowPtr,*,ROOT(3),TERMINAL(1))),2);
result = kSuccess;

result = vpx_method_Integer_20_To_20_Boolean(PARAMETERS,TERMINAL(2),ROOT(4));

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(4));
TERMINATEONFAILURE

result = vpx_constant(PARAMETERS,"NULL",ROOT(5));

result = vpx_extconstant(PARAMETERS,kEventClassWindow,ROOT(6));

result = vpx_extconstant(PARAMETERS,kEventWindowUpdate,ROOT(7));

PUTREAL(GetCurrentEventTime(),8);
result = kSuccess;

result = vpx_constant(PARAMETERS,"0",ROOT(9));

result = vpx_extconstant(PARAMETERS,kEventWindowDrawContent,ROOT(10));

PUTINTEGER(CreateEvent( GETCONSTPOINTER(__CFAllocator,*,TERMINAL(5)),GETINTEGER(TERMINAL(6)),GETINTEGER(TERMINAL(10)),GETREAL(TERMINAL(8)),GETINTEGER(TERMINAL(9)),GETPOINTER(0,OpaqueEventRef,**,ROOT(12),NONE)),11);
result = kSuccess;

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(11));
TERMINATEONFAILURE

result = vpx_extconstant(PARAMETERS,kEventParamDirectObject,ROOT(13));

result = vpx_extconstant(PARAMETERS,typeWindowRef,ROOT(14));

result = vpx_constant(PARAMETERS,"4",ROOT(15));

PUTINTEGER(SetEventParameter( GETPOINTER(0,OpaqueEventRef,*,ROOT(17),TERMINAL(12)),GETINTEGER(TERMINAL(13)),GETINTEGER(TERMINAL(14)),GETINTEGER(TERMINAL(15)),GETCONSTPOINTER(void,*,TERMINAL(1))),16);
result = kSuccess;

PUTPOINTER(OpaqueEventTargetRef,*,GetWindowEventTarget( GETPOINTER(0,OpaqueWindowPtr,*,ROOT(19),TERMINAL(1))),18);
result = kSuccess;

PUTINTEGER(SendEventToEventTarget( GETPOINTER(0,OpaqueEventRef,*,ROOT(21),TERMINAL(12)),GETPOINTER(0,OpaqueEventTargetRef,*,ROOT(22),TERMINAL(18))),20);
result = kSuccess;

ReleaseEvent( GETPOINTER(0,OpaqueEventRef,*,ROOT(23),TERMINAL(12)));
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASEWITHNONE(24)
}

enum opTrigger vpx_method_Window_2F_Find_20_ControlRef_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Window_2F_Find_20_ControlRef_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(7)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Default_20_ControlID,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_WindowRef,1,1,TERMINAL(0),ROOT(3));

PUTINTEGER(GetControlByID( GETPOINTER(0,OpaqueWindowPtr,*,ROOT(5),TERMINAL(3)),GETCONSTPOINTER(ControlID,*,TERMINAL(2)),GETPOINTER(0,OpaqueControlRef,**,ROOT(6),NONE)),4);
result = kSuccess;

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(4));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTERWITHNONE(7)
}

enum opTrigger vpx_method_Window_2F_Find_20_ControlRef_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Window_2F_Find_20_ControlRef_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;
FAILONSUCCESS

OUTPUT(0,NONE)
FOOTERWITHNONE(2)
}

enum opTrigger vpx_method_Window_2F_Find_20_ControlRef(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Window_2F_Find_20_ControlRef_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Window_2F_Find_20_ControlRef_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Window_2F_Enable_20_Control(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Find_20_ControlRef,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));
TERMINATEONFAILURE

PUTINTEGER(EnableControl( GETPOINTER(0,OpaqueControlRef,*,ROOT(4),TERMINAL(2))),3);
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Window_2F_Disable_20_Control(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Find_20_ControlRef,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));
TERMINATEONFAILURE

PUTINTEGER(DisableControl( GETPOINTER(0,OpaqueControlRef,*,ROOT(4),TERMINAL(2))),3);
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Window_2F_Show_20_Control(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Find_20_ControlRef,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));
TERMINATEONFAILURE

ShowControl( GETPOINTER(0,OpaqueControlRef,*,ROOT(3),TERMINAL(2)));
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Window_2F_Hide_20_Control(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Find_20_ControlRef,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));
TERMINATEONFAILURE

HideControl( GETPOINTER(0,OpaqueControlRef,*,ROOT(3),TERMINAL(2)));
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Window_2F_CE_20_Window_20_Close(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Close,1,0,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Window_2F_CE_20_Window_20_Close_20_All(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Close_20_All_20_Windows(PARAMETERS);

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Window_2F_CE_20_Window_20_Click_20_Content(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Click_20_Content,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Window_2F_CE_20_Window_20_Draw_20_Content(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Call_20_Next_20_Event_20_Handler,1,1,TERMINAL(1),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Draw,2,0,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Window_2F_CE_20_Window_20_Activated(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Call_20_Next_20_Event_20_Handler,1,1,TERMINAL(1),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Activated,1,0,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Window_2F_CE_20_Window_20_Deactivated(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Call_20_Next_20_Event_20_Handler,1,1,TERMINAL(1),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Deactivated,1,0,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Window_2F_CE_20_Window_20_Bounds_20_Changed_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Window_2F_CE_20_Window_20_Bounds_20_Changed_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,kWindowBoundsChangeSizeChanged,ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_bit_2D_and,2,1,TERMINAL(1),TERMINAL(2),ROOT(3));

result = vpx_match(PARAMETERS,"0",TERMINAL(3));
NEXTCASEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Resized,1,0,TERMINAL(0));

result = kSuccess;

FOOTER(4)
}

enum opTrigger vpx_method_Window_2F_CE_20_Window_20_Bounds_20_Changed_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Window_2F_CE_20_Window_20_Bounds_20_Changed_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,kWindowBoundsChangeOriginChanged,ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_bit_2D_and,2,1,TERMINAL(1),TERMINAL(2),ROOT(3));

result = vpx_match(PARAMETERS,"0",TERMINAL(3));
NEXTCASEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Moved,1,0,TERMINAL(0));

result = kSuccess;

FOOTER(4)
}

enum opTrigger vpx_method_Window_2F_CE_20_Window_20_Bounds_20_Changed_case_1_local_5_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Window_2F_CE_20_Window_20_Bounds_20_Changed_case_1_local_5_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;
FAILONSUCCESS

FOOTER(2)
}

enum opTrigger vpx_method_Window_2F_CE_20_Window_20_Bounds_20_Changed_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Window_2F_CE_20_Window_20_Bounds_20_Changed_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Window_2F_CE_20_Window_20_Bounds_20_Changed_case_1_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
if(vpx_method_Window_2F_CE_20_Window_20_Bounds_20_Changed_case_1_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Window_2F_CE_20_Window_20_Bounds_20_Changed_case_1_local_5_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Window_2F_CE_20_Window_20_Bounds_20_Changed_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Window_2F_CE_20_Window_20_Bounds_20_Changed_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,kEventParamAttributes,ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_EP_20_UInt32,2,2,TERMINAL(1),TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(3));
NEXTCASEONFAILURE

result = vpx_method_Window_2F_CE_20_Window_20_Bounds_20_Changed_case_1_local_5(PARAMETERS,TERMINAL(0),TERMINAL(4));
NEXTCASEONFAILURE

result = kSuccess;

FOOTER(5)
}

enum opTrigger vpx_method_Window_2F_CE_20_Window_20_Bounds_20_Changed_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Window_2F_CE_20_Window_20_Bounds_20_Changed_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;
FAILONSUCCESS

FOOTER(2)
}

enum opTrigger vpx_method_Window_2F_CE_20_Window_20_Bounds_20_Changed(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Window_2F_CE_20_Window_20_Bounds_20_Changed_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Window_2F_CE_20_Window_20_Bounds_20_Changed_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Window_2F_CE_20_Window_20_Get_20_Ideal_20_Size_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Window_2F_CE_20_Window_20_Get_20_Ideal_20_Size_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Ideal_20_Size,1,2,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP__2B_,2,1,TERMINAL(2),TERMINAL(3),ROOT(4));

result = vpx_match(PARAMETERS,"0",TERMINAL(4));
NEXTCASEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_ints_2D_to_2D_Point,2,1,TERMINAL(3),TERMINAL(2),ROOT(5));

result = vpx_extconstant(PARAMETERS,kEventParamDimensions,ROOT(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_EP_20_QDPoint,3,1,TERMINAL(1),TERMINAL(6),TERMINAL(5),ROOT(7));

result = kSuccess;

FOOTER(8)
}

enum opTrigger vpx_method_Window_2F_CE_20_Window_20_Get_20_Ideal_20_Size_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Window_2F_CE_20_Window_20_Get_20_Ideal_20_Size_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;
FAILONSUCCESS

FOOTER(2)
}

enum opTrigger vpx_method_Window_2F_CE_20_Window_20_Get_20_Ideal_20_Size(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Window_2F_CE_20_Window_20_Get_20_Ideal_20_Size_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Window_2F_CE_20_Window_20_Get_20_Ideal_20_Size_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Window_2F_CE_20_Window_20_Resize_20_Completed(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;
FAILONSUCCESS

OUTPUT(0,NONE)
FOOTERSINGLECASEWITHNONE(2)
}

enum opTrigger vpx_method_Window_2F_CE_20_Window_20_Drag_20_Completed(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;
FAILONSUCCESS

OUTPUT(0,NONE)
FOOTERSINGLECASEWITHNONE(2)
}

enum opTrigger vpx_method_Window_2F_Get_20_Carbon_20_EventTargetRef(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_WindowRef,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
FAILONSUCCESS

PUTPOINTER(OpaqueEventTargetRef,*,GetWindowEventTarget( GETPOINTER(0,OpaqueWindowPtr,*,ROOT(3),TERMINAL(1))),2);
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
FAILONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Window_2F_Get_20_Content_20_HIViewRef_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Window_2F_Get_20_Content_20_HIViewRef_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(5)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_WindowRef,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
NEXTCASEONSUCCESS

PUTINTEGER(GetRootControl( GETPOINTER(0,OpaqueWindowPtr,*,ROOT(3),TERMINAL(1)),GETPOINTER(0,OpaqueControlRef,**,ROOT(4),NONE)),2);
result = kSuccess;

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(2));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERWITHNONE(5)
}

enum opTrigger vpx_method_Window_2F_Get_20_Content_20_HIViewRef_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Window_2F_Get_20_Content_20_HIViewRef_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Window_2F_Get_20_Content_20_HIViewRef(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Window_2F_Get_20_Content_20_HIViewRef_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Window_2F_Get_20_Content_20_HIViewRef_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Window_2F_Get_20_Root_20_HIViewRef_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Window_2F_Get_20_Root_20_HIViewRef_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_WindowRef,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
NEXTCASEONSUCCESS

PUTPOINTER(OpaqueControlRef,*,HIViewGetRoot( GETPOINTER(0,OpaqueWindowPtr,*,ROOT(3),TERMINAL(1))),2);
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(4)
}

enum opTrigger vpx_method_Window_2F_Get_20_Root_20_HIViewRef_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Window_2F_Get_20_Root_20_HIViewRef_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Window_2F_Get_20_Root_20_HIViewRef(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Window_2F_Get_20_Root_20_HIViewRef_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Window_2F_Get_20_Root_20_HIViewRef_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Window_2F_Get_20_Window_20_Alpha_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Window_2F_Get_20_Window_20_Alpha_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(5)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_WindowRef,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
NEXTCASEONSUCCESS

PUTINTEGER(GetWindowAlpha( GETPOINTER(0,OpaqueWindowPtr,*,ROOT(3),TERMINAL(1)),GETPOINTER(4,float,*,ROOT(4),NONE)),2);
result = kSuccess;

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(2));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERWITHNONE(5)
}

enum opTrigger vpx_method_Window_2F_Get_20_Window_20_Alpha_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Window_2F_Get_20_Window_20_Alpha_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"0.0",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Window_2F_Get_20_Window_20_Alpha(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Window_2F_Get_20_Window_20_Alpha_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Window_2F_Get_20_Window_20_Alpha_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Window_2F_Set_20_Window_20_Alpha(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_WindowRef,1,1,TERMINAL(0),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
TERMINATEONSUCCESS

PUTINTEGER(SetWindowAlpha( GETPOINTER(0,OpaqueWindowPtr,*,ROOT(4),TERMINAL(2)),GETREAL(TERMINAL(1))),3);
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Window_2F_Get_20_Name(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Name,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Window_2F7E_Change_20_Window_20_Attributes(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_WindowRef,1,1,TERMINAL(0),ROOT(3));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
TERMINATEONSUCCESS

PUTINTEGER(ChangeWindowAttributes( GETPOINTER(0,OpaqueWindowPtr,*,ROOT(5),TERMINAL(3)),GETINTEGER(TERMINAL(1)),GETINTEGER(TERMINAL(2))),4);
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Window_2F7E_Set_20_Automatic_20_Control_20_Drag_20_Tracking_3F_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_WindowRef,1,1,TERMINAL(0),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
TERMINATEONSUCCESS

result = vpx_method_Default_20_FALSE(PARAMETERS,TERMINAL(1),ROOT(3));

PUTINTEGER(SetAutomaticControlDragTrackingEnabledForWindow( GETPOINTER(0,OpaqueWindowPtr,*,ROOT(5),TERMINAL(2)),GETINTEGER(TERMINAL(3))),4);
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Window_2F_Find_20_Control(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Find_20_ControlRef,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));
FAILONFAILURE

result = vpx_method_ControlRef_20_To_20_Object(PARAMETERS,TERMINAL(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(3));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Window_2F_Default_20_ControlID_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Window_2F_Default_20_ControlID_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_external_3F_,1,0,TERMINAL(1));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Window_2F_Default_20_ControlID_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Window_2F_Default_20_ControlID_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_list_3F_,1,0,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP__28_length_29_,1,1,TERMINAL(1),ROOT(2));

result = vpx_match(PARAMETERS,"2",TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,2,TERMINAL(1),ROOT(3),ROOT(4));

result = vpx_method_New_20_ControlID(PARAMETERS,TERMINAL(3),TERMINAL(4),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTER(6)
}

enum opTrigger vpx_method_Window_2F_Default_20_ControlID_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Window_2F_Default_20_ControlID_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;
FAILONSUCCESS

OUTPUT(0,NONE)
FOOTERWITHNONE(2)
}

enum opTrigger vpx_method_Window_2F_Default_20_ControlID(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Window_2F_Default_20_ControlID_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
if(vpx_method_Window_2F_Default_20_ControlID_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Window_2F_Default_20_ControlID_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Window_2F_Get_20_Window_20_Bounds_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Window_2F_Get_20_Window_20_Bounds_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(9)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_WindowRef,1,1,TERMINAL(0),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
NEXTCASEONSUCCESS

result = vpx_extconstant(PARAMETERS,kWindowContentRgn,ROOT(3));

result = vpx_method_Replace_20_NULL(PARAMETERS,TERMINAL(1),TERMINAL(3),ROOT(4));

PUTINTEGER(GetWindowBounds( GETPOINTER(0,OpaqueWindowPtr,*,ROOT(6),TERMINAL(2)),GETINTEGER(TERMINAL(4)),GETPOINTER(8,Rect,*,ROOT(7),NONE)),5);
result = kSuccess;

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(5));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_Rect_2D_to_2D_list,1,1,TERMINAL(7),ROOT(8));

result = kSuccess;

OUTPUT(0,TERMINAL(8))
FOOTERWITHNONE(9)
}

enum opTrigger vpx_method_Window_2F_Get_20_Window_20_Bounds_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Window_2F_Get_20_Window_20_Bounds_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( 0 0 0 0 )",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Window_2F_Get_20_Window_20_Bounds(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Window_2F_Get_20_Window_20_Bounds_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Window_2F_Get_20_Window_20_Bounds_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Window_2F_Set_20_Window_20_Bounds_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Window_2F_Set_20_Window_20_Bounds_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_WindowRef,1,1,TERMINAL(0),ROOT(3));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
NEXTCASEONSUCCESS

result = vpx_extconstant(PARAMETERS,kWindowContentRgn,ROOT(4));

result = vpx_method_Replace_20_NULL(PARAMETERS,TERMINAL(1),TERMINAL(4),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_list_2D_to_2D_Rect,1,1,TERMINAL(2),ROOT(6));

PUTINTEGER(SetWindowBounds( GETPOINTER(0,OpaqueWindowPtr,*,ROOT(8),TERMINAL(3)),GETINTEGER(TERMINAL(5)),GETCONSTPOINTER(Rect,*,TERMINAL(6))),7);
result = kSuccess;

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(7));
NEXTCASEONFAILURE

result = kSuccess;

FOOTER(9)
}

enum opTrigger vpx_method_Window_2F_Set_20_Window_20_Bounds_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Window_2F_Set_20_Window_20_Bounds_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_Window_2F_Set_20_Window_20_Bounds(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Window_2F_Set_20_Window_20_Bounds_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2))
vpx_method_Window_2F_Set_20_Window_20_Bounds_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2);
return outcome;
}

enum opTrigger vpx_method_Window_2F7E_Set_20_Window_20_Modified_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Window_2F7E_Set_20_Window_20_Modified_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_WindowRef,1,1,TERMINAL(0),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
NEXTCASEONSUCCESS

PUTINTEGER(SetWindowModified( GETPOINTER(0,OpaqueWindowPtr,*,ROOT(4),TERMINAL(2)),GETINTEGER(TERMINAL(1))),3);
result = kSuccess;

result = kSuccess;

FOOTER(5)
}

enum opTrigger vpx_method_Window_2F7E_Set_20_Window_20_Modified_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Window_2F7E_Set_20_Window_20_Modified_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Window_2F7E_Set_20_Window_20_Modified(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Window_2F7E_Set_20_Window_20_Modified_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Window_2F7E_Set_20_Window_20_Modified_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Window_2F7E_Set_20_Proxy_20_Type_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Window_2F7E_Set_20_Proxy_20_Type_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,kOnSystemDisk,ROOT(1));

result = vpx_method_Replace_20_NULL(PARAMETERS,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Window_2F7E_Set_20_Proxy_20_Type_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Window_2F7E_Set_20_Proxy_20_Type_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADERWITHNONE(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"SetWindowProxyCreatorAndType",ROOT(2));

result = vpx_method_Debug_20_Result(PARAMETERS,TERMINAL(0),TERMINAL(2),TERMINAL(1),NONE);

result = kSuccess;

FOOTERSINGLECASEWITHNONE(3)
}

enum opTrigger vpx_method_Window_2F7E_Set_20_Proxy_20_Type(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_WindowRef,1,1,TERMINAL(0),ROOT(4));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(4));
FAILONSUCCESS

result = vpx_method_Window_2F7E_Set_20_Proxy_20_Type_case_1_local_4(PARAMETERS,TERMINAL(3),ROOT(5));

PUTINTEGER(SetWindowProxyCreatorAndType( GETPOINTER(0,OpaqueWindowPtr,*,ROOT(7),TERMINAL(4)),GETINTEGER(TERMINAL(1)),GETINTEGER(TERMINAL(2)),GETINTEGER(TERMINAL(5))),6);
result = kSuccess;

result = vpx_method_Window_2F7E_Set_20_Proxy_20_Type_case_1_local_6(PARAMETERS,TERMINAL(0),TERMINAL(6));

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(6));
FAILONFAILURE

result = kSuccess;

FOOTERSINGLECASE(8)
}

enum opTrigger vpx_method_Window_2F7E_Set_20_Proxy_20_Alias_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Window_2F7E_Set_20_Proxy_20_Alias_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADERWITHNONE(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"SetWindowProxyAlias",ROOT(2));

result = vpx_method_Debug_20_Result(PARAMETERS,TERMINAL(0),TERMINAL(2),TERMINAL(1),NONE);

result = kSuccess;

FOOTERSINGLECASEWITHNONE(3)
}

enum opTrigger vpx_method_Window_2F7E_Set_20_Proxy_20_Alias(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_WindowRef,1,1,TERMINAL(0),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
FAILONSUCCESS

PUTINTEGER(SetWindowProxyAlias( GETPOINTER(0,OpaqueWindowPtr,*,ROOT(4),TERMINAL(2)),GETPOINTER(8,AliasRecord,**,ROOT(5),TERMINAL(1))),3);
result = kSuccess;

result = vpx_method_Window_2F7E_Set_20_Proxy_20_Alias_case_1_local_5(PARAMETERS,TERMINAL(0),TERMINAL(3));

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(3));
FAILONFAILURE

result = kSuccess;

FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Window_2F7E_Set_20_Proxy_20_FSSpec_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Window_2F7E_Set_20_Proxy_20_FSSpec_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADERWITHNONE(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"SetWindowProxyFSSpec",ROOT(2));

result = vpx_method_Debug_20_Result(PARAMETERS,TERMINAL(0),TERMINAL(2),TERMINAL(1),NONE);

result = kSuccess;

FOOTERSINGLECASEWITHNONE(3)
}

enum opTrigger vpx_method_Window_2F7E_Set_20_Proxy_20_FSSpec(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_WindowRef,1,1,TERMINAL(0),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
FAILONSUCCESS

PUTINTEGER(SetWindowProxyFSSpec( GETPOINTER(0,OpaqueWindowPtr,*,ROOT(4),TERMINAL(2)),GETCONSTPOINTER(FSSpec,*,TERMINAL(1))),3);
result = kSuccess;

result = vpx_method_Window_2F7E_Set_20_Proxy_20_FSSpec_case_1_local_5(PARAMETERS,TERMINAL(0),TERMINAL(3));

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(3));
FAILONFAILURE

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Window_2F7E_Set_20_Proxy_20_IconRef_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Window_2F7E_Set_20_Proxy_20_IconRef_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADERWITHNONE(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"SetWindowProxyIcon",ROOT(2));

result = vpx_method_Debug_20_Result(PARAMETERS,TERMINAL(0),TERMINAL(2),TERMINAL(1),NONE);

result = kSuccess;

FOOTERSINGLECASEWITHNONE(3)
}

enum opTrigger vpx_method_Window_2F7E_Set_20_Proxy_20_IconRef(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_WindowRef,1,1,TERMINAL(0),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
FAILONSUCCESS

PUTINTEGER(SetWindowProxyIcon( GETPOINTER(0,OpaqueWindowPtr,*,ROOT(4),TERMINAL(2)),GETPOINTER(0,OpaqueIconRef,*,ROOT(5),TERMINAL(1))),3);
result = kSuccess;

result = vpx_method_Window_2F7E_Set_20_Proxy_20_IconRef_case_1_local_5(PARAMETERS,TERMINAL(0),TERMINAL(3));

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(3));
FAILONFAILURE

result = kSuccess;

FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Window_2F7E_Get_20_Proxy_20_IconRef_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Window_2F7E_Get_20_Proxy_20_IconRef_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADERWITHNONE(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"GetWindowProxyIcon",ROOT(2));

result = vpx_method_Debug_20_Result(PARAMETERS,TERMINAL(0),TERMINAL(2),TERMINAL(1),NONE);

result = kSuccess;

FOOTERSINGLECASEWITHNONE(3)
}

enum opTrigger vpx_method_Window_2F7E_Get_20_Proxy_20_IconRef_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Window_2F7E_Get_20_Proxy_20_IconRef_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(5)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_WindowRef,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
NEXTCASEONSUCCESS

PUTINTEGER(GetWindowProxyIcon( GETPOINTER(0,OpaqueWindowPtr,*,ROOT(3),TERMINAL(1)),GETPOINTER(0,OpaqueIconRef,**,ROOT(4),NONE)),2);
result = kSuccess;

result = vpx_method_Window_2F7E_Get_20_Proxy_20_IconRef_case_1_local_5(PARAMETERS,TERMINAL(0),TERMINAL(2));

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(2));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERWITHNONE(5)
}

enum opTrigger vpx_method_Window_2F7E_Get_20_Proxy_20_IconRef_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Window_2F7E_Get_20_Proxy_20_IconRef_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Window_2F7E_Get_20_Proxy_20_IconRef(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Window_2F7E_Get_20_Proxy_20_IconRef_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Window_2F7E_Get_20_Proxy_20_IconRef_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Window_2F_Get_20_Project_20_Data(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Window_2F_Get_20_Method_20_Data(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = kSuccess;
FAILONSUCCESS

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Window_2F_Advance_20_Focus_case_1_local_5_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Window_2F_Advance_20_Focus_case_1_local_5_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(8)
INPUT(0,0)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,kWindowCompositingAttribute,ROOT(1));

PUTINTEGER(GetWindowAttributes( GETPOINTER(0,OpaqueWindowPtr,*,ROOT(3),TERMINAL(0)),GETPOINTER(4,unsigned int,*,ROOT(4),NONE)),2);
result = kSuccess;

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_method_Get_20_UInt32(PARAMETERS,TERMINAL(4),NONE,ROOT(5),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP_test_2D_one_3F_,2,1,TERMINAL(6),TERMINAL(1),ROOT(7));

result = kSuccess;

OUTPUT(0,TERMINAL(7))
FOOTERWITHNONE(8)
}

enum opTrigger vpx_method_Window_2F_Advance_20_Focus_case_1_local_5_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Window_2F_Advance_20_Focus_case_1_local_5_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"FALSE",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Window_2F_Advance_20_Focus_case_1_local_5_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Window_2F_Advance_20_Focus_case_1_local_5_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Window_2F_Advance_20_Focus_case_1_local_5_case_1_local_2_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Window_2F_Advance_20_Focus_case_1_local_5_case_1_local_2_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Window_2F_Advance_20_Focus_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Window_2F_Advance_20_Focus_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADERWITHNONE(8)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Window_2F_Advance_20_Focus_case_1_local_5_case_1_local_2(PARAMETERS,TERMINAL(0),ROOT(2));

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(2));
NEXTCASEONFAILURE

PUTINTEGER(GetRootControl( GETPOINTER(0,OpaqueWindowPtr,*,ROOT(4),TERMINAL(0)),GETPOINTER(0,OpaqueControlRef,**,ROOT(5),NONE)),3);
result = kSuccess;

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(3));
TERMINATEONFAILURE

PUTINTEGER(HIViewAdvanceFocus( GETPOINTER(0,OpaqueControlRef,*,ROOT(7),TERMINAL(5)),GETINTEGER(TERMINAL(1))),6);
result = kSuccess;

result = kSuccess;

FOOTERWITHNONE(8)
}

enum opTrigger vpx_method_Window_2F_Advance_20_Focus_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Window_2F_Advance_20_Focus_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

PUTINTEGER(AdvanceKeyboardFocus( GETPOINTER(0,OpaqueWindowPtr,*,ROOT(3),TERMINAL(0))),2);
result = kSuccess;

result = kSuccess;

FOOTER(4)
}

enum opTrigger vpx_method_Window_2F_Advance_20_Focus_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Window_2F_Advance_20_Focus_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Window_2F_Advance_20_Focus_case_1_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Window_2F_Advance_20_Focus_case_1_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Window_2F_Advance_20_Focus(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Default_20_Zero(PARAMETERS,TERMINAL(1),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_WindowRef,1,1,TERMINAL(0),ROOT(3));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
TERMINATEONSUCCESS

result = vpx_method_Window_2F_Advance_20_Focus_case_1_local_5(PARAMETERS,TERMINAL(3),TERMINAL(2));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Window_2F_Is_20_Compositing_3F__case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Window_2F_Is_20_Compositing_3F__case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(8)
INPUT(0,0)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,kWindowCompositingAttribute,ROOT(1));

PUTINTEGER(GetWindowAttributes( GETPOINTER(0,OpaqueWindowPtr,*,ROOT(3),TERMINAL(0)),GETPOINTER(4,unsigned int,*,ROOT(4),NONE)),2);
result = kSuccess;

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(2));
FAILONFAILURE

result = vpx_method_Get_20_UInt32(PARAMETERS,TERMINAL(4),NONE,ROOT(5),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP_test_2D_one_3F_,2,1,TERMINAL(6),TERMINAL(1),ROOT(7));

result = kSuccess;

OUTPUT(0,TERMINAL(7))
FOOTERSINGLECASEWITHNONE(8)
}

enum opTrigger vpx_method_Window_2F_Is_20_Compositing_3F__case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Window_2F_Is_20_Compositing_3F__case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_WindowRef,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
NEXTCASEONSUCCESS

result = vpx_method_Window_2F_Is_20_Compositing_3F__case_1_local_4(PARAMETERS,TERMINAL(1),ROOT(2));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Window_2F_Is_20_Compositing_3F__case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Window_2F_Is_20_Compositing_3F__case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"FALSE",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Window_2F_Is_20_Compositing_3F_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Window_2F_Is_20_Compositing_3F__case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Window_2F_Is_20_Compositing_3F__case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Window_2F_Refresh_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Window_2F_Refresh_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADERWITHNONE(5)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_WindowRef,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
NEXTCASEONSUCCESS

PUTPOINTER(Rect,*,GetWindowPortBounds( GETPOINTER(0,OpaqueWindowPtr,*,ROOT(3),TERMINAL(1)),GETPOINTER(8,Rect,*,ROOT(4),NONE)),2);
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Invalidate_20_Rect,2,0,TERMINAL(0),TERMINAL(2));

result = kSuccess;

FOOTERWITHNONE(5)
}

enum opTrigger vpx_method_Window_2F_Refresh_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Window_2F_Refresh_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_Window_2F_Refresh(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Window_2F_Refresh_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Window_2F_Refresh_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Window_2F_Close_20_All(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Close,1,0,TERMINAL(0));

result = vpx_constant(PARAMETERS,"( )",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASE(2)
}

/* Stop Universals */






Nat4	loadClasses_Window(V_Environment environment);
Nat4	loadClasses_Window(V_Environment environment)
{
	V_Class result = NULL;

	result = class_new("Window",environment);
	if(result == NULL) return kERROR;
	VPLC_Window_class_load(result,environment);
	return kNOERROR;

}

Nat4	loadUniversals_Window(V_Environment environment);
Nat4	loadUniversals_Window(V_Environment environment)
{
	V_Method result = NULL;

	result = method_new("WindowRef To Object",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_WindowRef_20_To_20_Object,NULL);

	result = method_new("Get Front Window",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Get_20_Front_20_Window,NULL);

	result = method_new("Get Front Window Type",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Get_20_Front_20_Window_20_Type,NULL);

	result = method_new("Close All Windows",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Close_20_All_20_Windows,NULL);

	result = method_new("Window/CE Handle Event",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Window_2F_CE_20_Handle_20_Event,NULL);

	result = method_new("Window/CE HICommand Update Status",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Window_2F_CE_20_HICommand_20_Update_20_Status,NULL);

	result = method_new("Window/CE HICommand Process",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Window_2F_CE_20_HICommand_20_Process,NULL);

	result = method_new("Window/CE Window Event",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Window_2F_CE_20_Window_20_Event,NULL);

	result = method_new("Window/Create Window Class",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Window_2F_Create_20_Window_20_Class,NULL);

	result = method_new("Window/Create Nib Window",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Window_2F_Create_20_Nib_20_Window,NULL);

	result = method_new("Window/Create With WindowRef",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Window_2F_Create_20_With_20_WindowRef,NULL);

	result = method_new("Window/Report Error",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Window_2F_Report_20_Error,NULL);

	result = method_new("Window/Get WindowRef",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Window_2F_Get_20_WindowRef,NULL);

	result = method_new("Window/Set WindowRef",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Window_2F_Set_20_WindowRef,NULL);

	result = method_new("Window/Initialize",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Window_2F_Initialize,NULL);

	result = method_new("Window/Initialize Window Events",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Window_2F_Initialize_20_Window_20_Events,NULL);

	result = method_new("Window/Dispose",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Window_2F_Dispose,NULL);

	result = method_new("Window/Close",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Window_2F_Close,NULL);

	result = method_new("Window/Get CGrafPtr",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Window_2F_Get_20_CGrafPtr,NULL);

	result = method_new("Window/Set Title",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Window_2F_Set_20_Title,NULL);

	result = method_new("Window/Copy Title",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Window_2F_Copy_20_Title,NULL);

	result = method_new("Window/Set Alternate Title",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Window_2F_Set_20_Alternate_20_Title,NULL);

	result = method_new("Window/Copy Alternate Title",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Window_2F_Copy_20_Alternate_20_Title,NULL);

	result = method_new("Window/Show",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Window_2F_Show,NULL);

	result = method_new("Window/Hide",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Window_2F_Hide,NULL);

	result = method_new("Window/Is Visible?",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Window_2F_Is_20_Visible_3F_,NULL);

	result = method_new("Window/Select",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Window_2F_Select,NULL);

	result = method_new("Window/Draw",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Window_2F_Draw,NULL);

	result = method_new("Window/Activated",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Window_2F_Activated,NULL);

	result = method_new("Window/Deactivated",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Window_2F_Deactivated,NULL);

	result = method_new("Window/Moved",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Window_2F_Moved,NULL);

	result = method_new("Window/Resized",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Window_2F_Resized,NULL);

	result = method_new("Window/Get Ideal Size",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Window_2F_Get_20_Ideal_20_Size,NULL);

	result = method_new("Window/Click Content",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Window_2F_Click_20_Content,NULL);

	result = method_new("Window/Move Content TopLeft To",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Window_2F_Move_20_Content_20_TopLeft_20_To,NULL);

	result = method_new("Window/Set Content Size",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Window_2F_Set_20_Content_20_Size,NULL);

	result = method_new("Window/Invalidate Region",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Window_2F_Invalidate_20_Region,NULL);

	result = method_new("Window/Invalidate Rect",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Window_2F_Invalidate_20_Rect,NULL);

	result = method_new("Window/Validate Region",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Window_2F_Validate_20_Region,NULL);

	result = method_new("Window/Validate Rect",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Window_2F_Validate_20_Rect,NULL);

	result = method_new("Window/Update Now",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Window_2F_Update_20_Now,NULL);

	result = method_new("Window/Find ControlRef",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Window_2F_Find_20_ControlRef,NULL);

	result = method_new("Window/Enable Control",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Window_2F_Enable_20_Control,NULL);

	result = method_new("Window/Disable Control",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Window_2F_Disable_20_Control,NULL);

	result = method_new("Window/Show Control",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Window_2F_Show_20_Control,NULL);

	result = method_new("Window/Hide Control",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Window_2F_Hide_20_Control,NULL);

	result = method_new("Window/CE Window Close",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Window_2F_CE_20_Window_20_Close,NULL);

	result = method_new("Window/CE Window Close All",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Window_2F_CE_20_Window_20_Close_20_All,NULL);

	result = method_new("Window/CE Window Click Content",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Window_2F_CE_20_Window_20_Click_20_Content,NULL);

	result = method_new("Window/CE Window Draw Content",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Window_2F_CE_20_Window_20_Draw_20_Content,NULL);

	result = method_new("Window/CE Window Activated",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Window_2F_CE_20_Window_20_Activated,NULL);

	result = method_new("Window/CE Window Deactivated",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Window_2F_CE_20_Window_20_Deactivated,NULL);

	result = method_new("Window/CE Window Bounds Changed",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Window_2F_CE_20_Window_20_Bounds_20_Changed,NULL);

	result = method_new("Window/CE Window Get Ideal Size",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Window_2F_CE_20_Window_20_Get_20_Ideal_20_Size,NULL);

	result = method_new("Window/CE Window Resize Completed",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Window_2F_CE_20_Window_20_Resize_20_Completed,NULL);

	result = method_new("Window/CE Window Drag Completed",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Window_2F_CE_20_Window_20_Drag_20_Completed,NULL);

	result = method_new("Window/Get Carbon EventTargetRef",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Window_2F_Get_20_Carbon_20_EventTargetRef,NULL);

	result = method_new("Window/Get Content HIViewRef",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Window_2F_Get_20_Content_20_HIViewRef,NULL);

	result = method_new("Window/Get Root HIViewRef",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Window_2F_Get_20_Root_20_HIViewRef,NULL);

	result = method_new("Window/Get Window Alpha",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Window_2F_Get_20_Window_20_Alpha,NULL);

	result = method_new("Window/Set Window Alpha",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Window_2F_Set_20_Window_20_Alpha,NULL);

	result = method_new("Window/Get Name",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Window_2F_Get_20_Name,NULL);

	result = method_new("Window/~Change Window Attributes",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Window_2F7E_Change_20_Window_20_Attributes,NULL);

	result = method_new("Window/~Set Automatic Control Drag Tracking?",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Window_2F7E_Set_20_Automatic_20_Control_20_Drag_20_Tracking_3F_,NULL);

	result = method_new("Window/Find Control",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Window_2F_Find_20_Control,NULL);

	result = method_new("Window/Default ControlID",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Window_2F_Default_20_ControlID,NULL);

	result = method_new("Window/Get Window Bounds",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Window_2F_Get_20_Window_20_Bounds,NULL);

	result = method_new("Window/Set Window Bounds",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Window_2F_Set_20_Window_20_Bounds,NULL);

	result = method_new("Window/~Set Window Modified",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Window_2F7E_Set_20_Window_20_Modified,NULL);

	result = method_new("Window/~Set Proxy Type",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Window_2F7E_Set_20_Proxy_20_Type,NULL);

	result = method_new("Window/~Set Proxy Alias",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Window_2F7E_Set_20_Proxy_20_Alias,NULL);

	result = method_new("Window/~Set Proxy FSSpec",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Window_2F7E_Set_20_Proxy_20_FSSpec,NULL);

	result = method_new("Window/~Set Proxy IconRef",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Window_2F7E_Set_20_Proxy_20_IconRef,NULL);

	result = method_new("Window/~Get Proxy IconRef",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Window_2F7E_Get_20_Proxy_20_IconRef,NULL);

	result = method_new("Window/Get Project Data",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Window_2F_Get_20_Project_20_Data,NULL);

	result = method_new("Window/Get Method Data",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Window_2F_Get_20_Method_20_Data,NULL);

	result = method_new("Window/Advance Focus",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Window_2F_Advance_20_Focus,NULL);

	result = method_new("Window/Is Compositing?",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Window_2F_Is_20_Compositing_3F_,NULL);

	result = method_new("Window/Refresh",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Window_2F_Refresh,NULL);

	result = method_new("Window/Close All",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Window_2F_Close_20_All,NULL);

	return kNOERROR;

}



Nat4	loadPersistents_Window(V_Environment environment);
Nat4	loadPersistents_Window(V_Environment environment)
{
	V_Value tempPersistent = NULL;
	V_Dictionary dictionary = environment->persistentsTable;

	return kNOERROR;

}

Nat4	load_Window(V_Environment environment);
Nat4	load_Window(V_Environment environment)
{

	loadClasses_Window(environment);
	loadUniversals_Window(environment);
	loadPersistents_Window(environment);
	return kNOERROR;

}

