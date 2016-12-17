/* A VPL Section File */
/*

MyHelperData.inl.c
Copyright: 2004 Andescotia LLC

*/

#include "MartenInlineProject.h"

enum opTrigger vpx_method_Between_20_Strings(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1,V_Object *root2)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_method_Slice_20_String(PARAMETERS,TERMINAL(0),TERMINAL(1),ROOT(3),ROOT(4));

result = vpx_method_Prefix_20_String(PARAMETERS,TERMINAL(4),TERMINAL(2),ROOT(5),ROOT(6));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
OUTPUT(1,TERMINAL(5))
OUTPUT(2,TERMINAL(6))
FOOTERSINGLECASE(7)
}

enum opTrigger vpx_method_C_20_Action_20_To_20_VPL_20_Action_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_C_20_Action_20_To_20_VPL_20_Action_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"kNextCase",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"\"Next Case\"",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_C_20_Action_20_To_20_VPL_20_Action_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_C_20_Action_20_To_20_VPL_20_Action_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"kTerminate",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"Terminate",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_C_20_Action_20_To_20_VPL_20_Action_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_C_20_Action_20_To_20_VPL_20_Action_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"kFinish",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"Finish",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_C_20_Action_20_To_20_VPL_20_Action_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_C_20_Action_20_To_20_VPL_20_Action_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"kContinue",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"Continue",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_C_20_Action_20_To_20_VPL_20_Action_case_5(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_C_20_Action_20_To_20_VPL_20_Action_case_5(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"kFail",TERMINAL(0));
FAILONFAILURE

result = vpx_constant(PARAMETERS,"Fail",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_C_20_Action_20_To_20_VPL_20_Action(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_C_20_Action_20_To_20_VPL_20_Action_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_C_20_Action_20_To_20_VPL_20_Action_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_C_20_Action_20_To_20_VPL_20_Action_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_C_20_Action_20_To_20_VPL_20_Action_case_4(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_C_20_Action_20_To_20_VPL_20_Action_case_5(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_C_20_Boolean_20_To_20_VPL_20_Boolean_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_C_20_Boolean_20_To_20_VPL_20_Boolean_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"kTRUE",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"TRUE",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_C_20_Boolean_20_To_20_VPL_20_Boolean_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_C_20_Boolean_20_To_20_VPL_20_Boolean_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"kFALSE",TERMINAL(0));
FAILONFAILURE

result = vpx_constant(PARAMETERS,"FALSE",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_C_20_Boolean_20_To_20_VPL_20_Boolean(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_C_20_Boolean_20_To_20_VPL_20_Boolean_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_C_20_Boolean_20_To_20_VPL_20_Boolean_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_C_20_Control_20_To_20_VPL_20_Control_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_C_20_Control_20_To_20_VPL_20_Control_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"kSuccess",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"TRUE",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_C_20_Control_20_To_20_VPL_20_Control_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_C_20_Control_20_To_20_VPL_20_Control_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"kFailure",TERMINAL(0));
FAILONFAILURE

result = vpx_constant(PARAMETERS,"FALSE",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_C_20_Control_20_To_20_VPL_20_Control(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_C_20_Control_20_To_20_VPL_20_Control_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_C_20_Control_20_To_20_VPL_20_Control_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_C_20_Mode_20_To_20_VPL_20_Type_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_C_20_Mode_20_To_20_VPL_20_Type_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"iList",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"List",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_C_20_Mode_20_To_20_VPL_20_Type_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_C_20_Mode_20_To_20_VPL_20_Type_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"iLoop",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"Normal",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_C_20_Mode_20_To_20_VPL_20_Type_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_C_20_Mode_20_To_20_VPL_20_Type_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"iSimple",TERMINAL(0));
FAILONFAILURE

result = vpx_constant(PARAMETERS,"Normal",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_C_20_Mode_20_To_20_VPL_20_Type(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_C_20_Mode_20_To_20_VPL_20_Type_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_C_20_Mode_20_To_20_VPL_20_Type_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_C_20_Mode_20_To_20_VPL_20_Type_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_C_20_String_20_To_20_VPL_20_String(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"1",ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_prefix,2,2,TERMINAL(0),TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_suffix,2,2,TERMINAL(3),TERMINAL(1),ROOT(4),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Frame_20_Text_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Frame_20_Text_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(22)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Frame,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
NEXTCASEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,4,TERMINAL(2),ROOT(3),ROOT(4),ROOT(5),ROOT(6));

result = vpx_constant(PARAMETERS,"\"{ \"",ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP_to_2D_string,1,1,TERMINAL(3),ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(7),TERMINAL(8),ROOT(9));

result = vpx_constant(PARAMETERS,"\" \"",ROOT(10));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(9),TERMINAL(10),ROOT(11));

result = vpx_call_primitive(PARAMETERS,VPLP_to_2D_string,1,1,TERMINAL(5),ROOT(12));

result = vpx_call_primitive(PARAMETERS,VPLP_to_2D_string,1,1,TERMINAL(4),ROOT(13));

result = vpx_call_primitive(PARAMETERS,VPLP_to_2D_string,1,1,TERMINAL(6),ROOT(14));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(11),TERMINAL(13),ROOT(15));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(15),TERMINAL(10),ROOT(16));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(16),TERMINAL(12),ROOT(17));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(17),TERMINAL(10),ROOT(18));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(18),TERMINAL(14),ROOT(19));

result = vpx_constant(PARAMETERS,"\" }\"",ROOT(20));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(19),TERMINAL(20),ROOT(21));

result = kSuccess;

OUTPUT(0,TERMINAL(21))
FOOTER(22)
}

enum opTrigger vpx_method_Frame_20_Text_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Frame_20_Text_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"{ 0 0 0 0 }\"",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Frame_20_Text(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Frame_20_Text_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Frame_20_Text_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Frame_20_To_20_Text(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(25)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Frame,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,4,TERMINAL(2),ROOT(3),ROOT(4),ROOT(5),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP_iminus,2,1,TERMINAL(5),TERMINAL(3),ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP_iminus,2,1,TERMINAL(6),TERMINAL(4),ROOT(8));

result = vpx_constant(PARAMETERS,"\"{ \"",ROOT(9));

result = vpx_call_primitive(PARAMETERS,VPLP_to_2D_string,1,1,TERMINAL(3),ROOT(10));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(9),TERMINAL(10),ROOT(11));

result = vpx_constant(PARAMETERS,"\" \"",ROOT(12));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(11),TERMINAL(12),ROOT(13));

result = vpx_call_primitive(PARAMETERS,VPLP_to_2D_string,1,1,TERMINAL(7),ROOT(14));

result = vpx_call_primitive(PARAMETERS,VPLP_to_2D_string,1,1,TERMINAL(4),ROOT(15));

result = vpx_call_primitive(PARAMETERS,VPLP_to_2D_string,1,1,TERMINAL(8),ROOT(16));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(13),TERMINAL(15),ROOT(17));

result = vpx_constant(PARAMETERS,"\" }{ \"",ROOT(18));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(17),TERMINAL(18),ROOT(19));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(19),TERMINAL(14),ROOT(20));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(20),TERMINAL(12),ROOT(21));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(21),TERMINAL(16),ROOT(22));

result = vpx_constant(PARAMETERS,"\" }\"",ROOT(23));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(22),TERMINAL(23),ROOT(24));

result = kSuccess;

OUTPUT(0,TERMINAL(24))
FOOTERSINGLECASE(25)
}

enum opTrigger vpx_method_Mangle_20_Name_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Mangle_20_Name_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_exstring_2D_to_2D_cnstring,1,1,TERMINAL(0),ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Mangle_20_Name_case_2_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Mangle_20_Name_case_2_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(16)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"1",ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_middle,3,1,TERMINAL(0),TERMINAL(2),TERMINAL(1),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_is_2D_alnum,1,0,TERMINAL(3));
NEXTCASEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_to_2D_ascii,1,1,TERMINAL(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,1,TERMINAL(4),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_prefix,2,2,TERMINAL(0),TERMINAL(1),ROOT(6),ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP_suffix,2,2,TERMINAL(6),TERMINAL(2),ROOT(8),ROOT(9));

result = vpx_call_primitive(PARAMETERS,VPLP_to_2D_string,1,1,TERMINAL(5),ROOT(10));

result = vpx_constant(PARAMETERS,"\"_\"",ROOT(11));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,5,1,TERMINAL(8),TERMINAL(11),TERMINAL(10),TERMINAL(11),TERMINAL(7),ROOT(12));

result = vpx_constant(PARAMETERS,"4",ROOT(13));

result = vpx_call_primitive(PARAMETERS,VPLP_iplus,2,1,TERMINAL(1),TERMINAL(13),ROOT(14));

result = vpx_call_primitive(PARAMETERS,VPLP__22_length_22_,1,1,TERMINAL(12),ROOT(15));

result = vpx_call_primitive(PARAMETERS,VPLP_gte,2,0,TERMINAL(15),TERMINAL(14));
FINISHONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(12))
OUTPUT(1,TERMINAL(14))
FOOTER(16)
}

enum opTrigger vpx_method_Mangle_20_Name_case_2_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Mangle_20_Name_case_2_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP__22_length_22_,1,1,TERMINAL(0),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_plus_2D_one,1,1,TERMINAL(1),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_gte,2,0,TERMINAL(2),TERMINAL(3));
FINISHONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(0))
OUTPUT(1,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_Mangle_20_Name_case_2_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Mangle_20_Name_case_2_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Mangle_20_Name_case_2_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1))
vpx_method_Mangle_20_Name_case_2_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1);
return outcome;
}

enum opTrigger vpx_method_Mangle_20_Name_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Mangle_20_Name_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"1",ROOT(1));

REPEATBEGIN
LOOPTERMINALBEGIN(2)
LOOPTERMINAL(0,0,2)
LOOPTERMINAL(1,1,3)
result = vpx_method_Mangle_20_Name_case_2_local_3(PARAMETERS,LOOP(0),LOOP(1),ROOT(2),ROOT(3));
REPEATFINISH

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(4)
}

enum opTrigger vpx_method_Mangle_20_Name(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Mangle_20_Name_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Mangle_20_Name_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Parse_20_Frame_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Parse_20_Frame_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(13)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"{\"",ROOT(1));

result = vpx_constant(PARAMETERS,"\"}\"",ROOT(2));

result = vpx_method_Between_20_Strings(PARAMETERS,TERMINAL(0),TERMINAL(1),TERMINAL(2),ROOT(3),ROOT(4),ROOT(5));

result = vpx_constant(PARAMETERS,"\"(\"",ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(6),TERMINAL(4),ROOT(7));

result = vpx_constant(PARAMETERS,"\")\"",ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(7),TERMINAL(8),ROOT(9));

result = vpx_call_primitive(PARAMETERS,VPLP_from_2D_string,1,1,TERMINAL(9),ROOT(10));

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(10),ROOT(11));

result = vpx_match(PARAMETERS,"list",TERMINAL(11));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP__28_length_29_,1,1,TERMINAL(10),ROOT(12));

result = vpx_match(PARAMETERS,"4",TERMINAL(12));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(10))
FOOTER(13)
}

enum opTrigger vpx_method_Parse_20_Frame_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Parse_20_Frame_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(11)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Parse_20_Point(PARAMETERS,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_method_Parse_20_Point(PARAMETERS,TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_method_Add_20_Point(PARAMETERS,TERMINAL(1),TERMINAL(3),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,2,TERMINAL(1),ROOT(6),ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,2,TERMINAL(5),ROOT(8),ROOT(9));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,4,1,TERMINAL(6),TERMINAL(7),TERMINAL(8),TERMINAL(9),ROOT(10));

result = kSuccess;

OUTPUT(0,TERMINAL(10))
FOOTER(11)
}

enum opTrigger vpx_method_Parse_20_Frame(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Parse_20_Frame_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Parse_20_Frame_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Parse_20_Point_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Parse_20_Point_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(13)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"{\"",ROOT(1));

result = vpx_constant(PARAMETERS,"\"}\"",ROOT(2));

result = vpx_method_Between_20_Strings(PARAMETERS,TERMINAL(0),TERMINAL(1),TERMINAL(2),ROOT(3),ROOT(4),ROOT(5));

result = vpx_constant(PARAMETERS,"\"(\"",ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(6),TERMINAL(4),ROOT(7));

result = vpx_constant(PARAMETERS,"\")\"",ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(7),TERMINAL(8),ROOT(9));

result = vpx_call_primitive(PARAMETERS,VPLP_from_2D_string,1,1,TERMINAL(9),ROOT(10));

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(10),ROOT(11));

result = vpx_match(PARAMETERS,"list",TERMINAL(11));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP__28_length_29_,1,1,TERMINAL(10),ROOT(12));

result = vpx_match(PARAMETERS,"2",TERMINAL(12));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(10))
OUTPUT(1,TERMINAL(5))
FOOTER(13)
}

enum opTrigger vpx_method_Parse_20_Point_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Parse_20_Point_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( 20 20 )",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
OUTPUT(1,TERMINAL(0))
FOOTER(2)
}

enum opTrigger vpx_method_Parse_20_Point(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Parse_20_Point_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1))
vpx_method_Parse_20_Point_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1);
return outcome;
}

enum opTrigger vpx_method_Prefix_20_String_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Prefix_20_String_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Unquoted_20_In(PARAMETERS,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_match(PARAMETERS,"0",TERMINAL(2));
NEXTCASEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_minus_2D_one,1,1,TERMINAL(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_prefix,2,2,TERMINAL(0),TERMINAL(3),ROOT(4),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
OUTPUT(1,TERMINAL(5))
FOOTER(6)
}

enum opTrigger vpx_method_Prefix_20_String_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Prefix_20_String_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"\"",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
OUTPUT(1,TERMINAL(0))
FOOTER(3)
}

enum opTrigger vpx_method_Prefix_20_String(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Prefix_20_String_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1))
vpx_method_Prefix_20_String_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1);
return outcome;
}

enum opTrigger vpx_method_Sandwich_20_Strings_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Sandwich_20_Strings_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_In_20_Last(PARAMETERS,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_match(PARAMETERS,"0",TERMINAL(2));
NEXTCASEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_minus_2D_one,1,1,TERMINAL(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_prefix,2,2,TERMINAL(0),TERMINAL(3),ROOT(4),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
OUTPUT(1,TERMINAL(5))
FOOTER(6)
}

enum opTrigger vpx_method_Sandwich_20_Strings_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Sandwich_20_Strings_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"\"",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
OUTPUT(1,TERMINAL(0))
FOOTER(3)
}

enum opTrigger vpx_method_Sandwich_20_Strings_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Sandwich_20_Strings_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Sandwich_20_Strings_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1))
vpx_method_Sandwich_20_Strings_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1);
return outcome;
}

enum opTrigger vpx_method_Sandwich_20_Strings(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1,V_Object *root2)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_method_Slice_20_String(PARAMETERS,TERMINAL(0),TERMINAL(1),ROOT(3),ROOT(4));

result = vpx_method_Sandwich_20_Strings_case_1_local_3(PARAMETERS,TERMINAL(4),TERMINAL(2),ROOT(5),ROOT(6));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
OUTPUT(1,TERMINAL(5))
OUTPUT(2,TERMINAL(6))
FOOTERSINGLECASE(7)
}

enum opTrigger vpx_method_Slice_20_String_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Slice_20_String_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP__22_length_22_,1,1,TERMINAL(1),ROOT(2));

result = vpx_method_Unquoted_20_In(PARAMETERS,TERMINAL(0),TERMINAL(1),ROOT(3));

result = vpx_match(PARAMETERS,"0",TERMINAL(3));
NEXTCASEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_iplus,2,1,TERMINAL(3),TERMINAL(2),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_minus_2D_one,1,1,TERMINAL(4),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_prefix,2,2,TERMINAL(0),TERMINAL(5),ROOT(6),ROOT(7));

result = kSuccess;

OUTPUT(0,TERMINAL(6))
OUTPUT(1,TERMINAL(7))
FOOTER(8)
}

enum opTrigger vpx_method_Slice_20_String_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Slice_20_String_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"\"",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(0))
OUTPUT(1,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Slice_20_String(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Slice_20_String_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1))
vpx_method_Slice_20_String_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1);
return outcome;
}

enum opTrigger vpx_method_Trim_20_Whitespace_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Trim_20_Whitespace_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"\t\"",ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP__22_in_22_,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_match(PARAMETERS,"0",TERMINAL(2));
NEXTCASEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_minus_2D_one,1,1,TERMINAL(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_prefix,2,2,TERMINAL(0),TERMINAL(3),ROOT(4),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(6)
}

enum opTrigger vpx_method_Trim_20_Whitespace_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Trim_20_Whitespace_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(1)
}

enum opTrigger vpx_method_Trim_20_Whitespace(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Trim_20_Whitespace_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Trim_20_Whitespace_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Unmangle_20_Name_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Unmangle_20_Name_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_cnstring_2D_to_2D_exstring,1,1,TERMINAL(0),ROOT(1));

result = vpx_method_Trim_20_Whitespace(PARAMETERS,TERMINAL(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Unmangle_20_Name_case_2_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Unmangle_20_Name_case_2_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(19)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"_\"",ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP__22_in_22_,2,1,TERMINAL(1),TERMINAL(2),ROOT(3));

result = vpx_match(PARAMETERS,"0",TERMINAL(3));
NEXTCASEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_prefix,2,2,TERMINAL(1),TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP__22_in_22_,2,1,TERMINAL(5),TERMINAL(2),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP_minus_2D_one,1,1,TERMINAL(6),ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP_prefix,2,2,TERMINAL(5),TERMINAL(7),ROOT(8),ROOT(9));

result = vpx_constant(PARAMETERS,"1",ROOT(10));

result = vpx_call_primitive(PARAMETERS,VPLP_prefix,2,2,TERMINAL(9),TERMINAL(10),ROOT(11),ROOT(12));

result = vpx_call_primitive(PARAMETERS,VPLP_from_2D_string,1,1,TERMINAL(8),ROOT(13));

result = vpx_call_primitive(PARAMETERS,VPLP_from_2D_ascii,1,1,TERMINAL(13),ROOT(14));

result = vpx_call_primitive(PARAMETERS,VPLP_suffix,2,2,TERMINAL(4),TERMINAL(10),ROOT(15),ROOT(16));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(0),TERMINAL(15),ROOT(17));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(17),TERMINAL(14),ROOT(18));

result = kSuccess;

OUTPUT(0,TERMINAL(18))
OUTPUT(1,TERMINAL(12))
FOOTER(19)
}

enum opTrigger vpx_method_Unmangle_20_Name_case_2_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Unmangle_20_Name_case_2_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_constant(PARAMETERS,"\"\"",ROOT(3));

result = kSuccess;
FINISHONSUCCESS

OUTPUT(0,TERMINAL(2))
OUTPUT(1,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_Unmangle_20_Name_case_2_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Unmangle_20_Name_case_2_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Unmangle_20_Name_case_2_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1))
vpx_method_Unmangle_20_Name_case_2_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1);
return outcome;
}

enum opTrigger vpx_method_Unmangle_20_Name_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Unmangle_20_Name_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"\"",ROOT(1));

REPEATBEGIN
LOOPTERMINALBEGIN(2)
LOOPTERMINAL(0,1,2)
LOOPTERMINAL(1,0,3)
result = vpx_method_Unmangle_20_Name_case_2_local_3(PARAMETERS,LOOP(0),LOOP(1),ROOT(2),ROOT(3));
REPEATFINISH

result = vpx_method_Trim_20_Whitespace(PARAMETERS,TERMINAL(2),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Unmangle_20_Name(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Unmangle_20_Name_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Unmangle_20_Name_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_VPL_20_Action_20_To_20_C_20_Action_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_VPL_20_Action_20_To_20_C_20_Action_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"Next Case",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"kNextCase",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_VPL_20_Action_20_To_20_C_20_Action_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_VPL_20_Action_20_To_20_C_20_Action_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"Terminate",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"kTerminate",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_VPL_20_Action_20_To_20_C_20_Action_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_VPL_20_Action_20_To_20_C_20_Action_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"Finish",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"kFinish",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_VPL_20_Action_20_To_20_C_20_Action_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_VPL_20_Action_20_To_20_C_20_Action_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"Continue",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"kContinue",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_VPL_20_Action_20_To_20_C_20_Action_case_5(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_VPL_20_Action_20_To_20_C_20_Action_case_5(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"Fail",TERMINAL(0));
FAILONFAILURE

result = vpx_constant(PARAMETERS,"kFail",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_VPL_20_Action_20_To_20_C_20_Action(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_VPL_20_Action_20_To_20_C_20_Action_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_VPL_20_Action_20_To_20_C_20_Action_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_VPL_20_Action_20_To_20_C_20_Action_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_VPL_20_Action_20_To_20_C_20_Action_case_4(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_VPL_20_Action_20_To_20_C_20_Action_case_5(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_VPL_20_Boolean_20_To_20_C_20_Boolean_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_VPL_20_Boolean_20_To_20_C_20_Boolean_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"\"NULL\"",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_VPL_20_Boolean_20_To_20_C_20_Boolean_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_VPL_20_Boolean_20_To_20_C_20_Boolean_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(1)
}

enum opTrigger vpx_method_VPL_20_Boolean_20_To_20_C_20_Boolean(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_VPL_20_Boolean_20_To_20_C_20_Boolean_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_VPL_20_Boolean_20_To_20_C_20_Boolean_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_VPL_20_Control_20_To_20_C_20_Control_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_VPL_20_Control_20_To_20_C_20_Control_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"kSuccess",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_VPL_20_Control_20_To_20_C_20_Control_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_VPL_20_Control_20_To_20_C_20_Control_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"FALSE",TERMINAL(0));
FAILONFAILURE

result = vpx_constant(PARAMETERS,"kFailure",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_VPL_20_Control_20_To_20_C_20_Control(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_VPL_20_Control_20_To_20_C_20_Control_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_VPL_20_Control_20_To_20_C_20_Control_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_VPL_20_String_20_To_20_C_20_String_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_VPL_20_String_20_To_20_C_20_String_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"\"NULL\"",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_VPL_20_String_20_To_20_C_20_String_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_VPL_20_String_20_To_20_C_20_String_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"\"\"\"",ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(1),TERMINAL(0),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(2),TERMINAL(1),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_VPL_20_String_20_To_20_C_20_String(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_VPL_20_String_20_To_20_C_20_String_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_VPL_20_String_20_To_20_C_20_String_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_VPL_20_Text_20_To_20_C_20_String_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_VPL_20_Text_20_To_20_C_20_String_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(0));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(1)
}

enum opTrigger vpx_method_VPL_20_Text_20_To_20_C_20_String_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_VPL_20_Text_20_To_20_C_20_String_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_exstring_2D_to_2D_instring,1,1,TERMINAL(0),ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_VPL_20_Text_20_To_20_C_20_String_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_VPL_20_Text_20_To_20_C_20_String_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_VPL_20_Text_20_To_20_C_20_String_case_1_local_2_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_VPL_20_Text_20_To_20_C_20_String_case_1_local_2_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_VPL_20_Text_20_To_20_C_20_String(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_method_VPL_20_Text_20_To_20_C_20_String_case_1_local_2(PARAMETERS,TERMINAL(0),ROOT(1));

result = vpx_method_VPL_20_String_20_To_20_C_20_String(PARAMETERS,TERMINAL(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_In_20_Last_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_In_20_Last_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP__22_length_22_,1,1,TERMINAL(0),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_gte,2,0,TERMINAL(3),TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP__22_in_2D_relative_22_,3,1,TERMINAL(0),TERMINAL(1),TERMINAL(2),ROOT(4));

result = vpx_match(PARAMETERS,"0",TERMINAL(4));
NEXTCASEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_iplus,2,1,TERMINAL(4),TERMINAL(2),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTER(6)
}

enum opTrigger vpx_method_In_20_Last_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_In_20_Last_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_minus_2D_one,1,1,TERMINAL(2),ROOT(3));

result = kSuccess;
FINISHONSUCCESS

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_In_20_Last_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_In_20_Last_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_In_20_Last_case_1_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
vpx_method_In_20_Last_case_1_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0);
return outcome;
}

enum opTrigger vpx_method_In_20_Last_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_In_20_Last_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP__22_in_22_,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_match(PARAMETERS,"0",TERMINAL(2));
NEXTCASEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_plus_2D_one,1,1,TERMINAL(2),ROOT(3));

REPEATBEGIN
LOOPTERMINALBEGIN(1)
LOOPTERMINAL(0,3,4)
result = vpx_method_In_20_Last_case_1_local_5(PARAMETERS,TERMINAL(0),TERMINAL(1),LOOP(0),ROOT(4));
REPEATFINISH

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_In_20_Last_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_In_20_Last_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"0",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_In_20_Last(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_In_20_Last_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_In_20_Last_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Get_20_Line_case_1_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Get_20_Line_case_1_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_equals,2,0,TERMINAL(0),TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"0",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Get_20_Line_case_1_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Get_20_Line_case_1_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_plus_2D_one,1,1,TERMINAL(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Get_20_Line_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Get_20_Line_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Get_20_Line_case_1_local_7_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Get_20_Line_case_1_local_7_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Get_20_Line_case_1_local_8_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Get_20_Line_case_1_local_8_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_match(PARAMETERS,"0",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"NULL",ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_Get_20_Line_case_1_local_8_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Get_20_Line_case_1_local_8_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_middle,3,1,TERMINAL(0),TERMINAL(1),TERMINAL(2),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_Get_20_Line_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Get_20_Line_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Get_20_Line_case_1_local_8_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
vpx_method_Get_20_Line_case_1_local_8_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0);
return outcome;
}

enum opTrigger vpx_method_Get_20_Line_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Get_20_Line_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_method_Carriage_20_Return(PARAMETERS,ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP__22_in_2D_relative_22_,3,1,TERMINAL(0),TERMINAL(3),TERMINAL(2),ROOT(4));

result = vpx_match(PARAMETERS,"0",TERMINAL(4));
NEXTCASEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_minus_2D_one,1,1,TERMINAL(4),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_iplus,2,1,TERMINAL(5),TERMINAL(2),ROOT(6));

result = vpx_method_Get_20_Line_case_1_local_7(PARAMETERS,TERMINAL(1),TERMINAL(6),ROOT(7));

result = vpx_method_Get_20_Line_case_1_local_8(PARAMETERS,TERMINAL(0),TERMINAL(5),TERMINAL(2),ROOT(8));

result = kSuccess;

OUTPUT(0,TERMINAL(8))
OUTPUT(1,TERMINAL(7))
FOOTER(9)
}

enum opTrigger vpx_method_Get_20_Line_case_2_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Get_20_Line_case_2_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_equals,2,0,TERMINAL(0),TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"0",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Get_20_Line_case_2_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Get_20_Line_case_2_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_plus_2D_one,1,1,TERMINAL(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Get_20_Line_case_2_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Get_20_Line_case_2_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Get_20_Line_case_2_local_7_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Get_20_Line_case_2_local_7_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Get_20_Line_case_2_local_8_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Get_20_Line_case_2_local_8_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_match(PARAMETERS,"0",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"NULL",ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_Get_20_Line_case_2_local_8_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Get_20_Line_case_2_local_8_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_middle,3,1,TERMINAL(0),TERMINAL(1),TERMINAL(2),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_Get_20_Line_case_2_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Get_20_Line_case_2_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Get_20_Line_case_2_local_8_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
vpx_method_Get_20_Line_case_2_local_8_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0);
return outcome;
}

enum opTrigger vpx_method_Get_20_Line_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Get_20_Line_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_method_Unix_20_Carriage_20_Return(PARAMETERS,ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP__22_in_2D_relative_22_,3,1,TERMINAL(0),TERMINAL(3),TERMINAL(2),ROOT(4));

result = vpx_match(PARAMETERS,"0",TERMINAL(4));
NEXTCASEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_minus_2D_one,1,1,TERMINAL(4),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_iplus,2,1,TERMINAL(5),TERMINAL(2),ROOT(6));

result = vpx_method_Get_20_Line_case_2_local_7(PARAMETERS,TERMINAL(1),TERMINAL(6),ROOT(7));

result = vpx_method_Get_20_Line_case_2_local_8(PARAMETERS,TERMINAL(0),TERMINAL(5),TERMINAL(2),ROOT(8));

result = kSuccess;

OUTPUT(0,TERMINAL(8))
OUTPUT(1,TERMINAL(7))
FOOTER(9)
}

enum opTrigger vpx_method_Get_20_Line_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Get_20_Line_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_iminus,2,1,TERMINAL(1),TERMINAL(2),ROOT(3));

result = vpx_constant(PARAMETERS,"0",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_plus_2D_one,1,1,TERMINAL(3),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_middle,3,1,TERMINAL(0),TERMINAL(5),TERMINAL(2),ROOT(6));

result = kSuccess;

OUTPUT(0,TERMINAL(6))
OUTPUT(1,TERMINAL(4))
FOOTER(7)
}

enum opTrigger vpx_method_Get_20_Line(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Get_20_Line_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0,root1))
if(vpx_method_Get_20_Line_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0,root1))
vpx_method_Get_20_Line_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0,root1);
return outcome;
}

enum opTrigger vpx_method_Unquoted_20_In_case_1_local_4_case_1_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Unquoted_20_In_case_1_local_4_case_1_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"0",TERMINAL(0));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(1)
}

enum opTrigger vpx_method_Unquoted_20_In_case_1_local_4_case_1_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Unquoted_20_In_case_1_local_4_case_1_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"2",ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_iplus,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Unquoted_20_In_case_1_local_4_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Unquoted_20_In_case_1_local_4_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Unquoted_20_In_case_1_local_4_case_1_local_7_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Unquoted_20_In_case_1_local_4_case_1_local_7_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Unquoted_20_In_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0);
enum opTrigger vpx_method_Unquoted_20_In_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_plus_2D_one,1,1,TERMINAL(1),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP__22_length_22_,1,1,TERMINAL(0),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_gte,2,0,TERMINAL(5),TERMINAL(4));
FAILONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP__22_in_2D_relative_22_,3,1,TERMINAL(0),TERMINAL(2),TERMINAL(4),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP__22_in_2D_relative_22_,3,1,TERMINAL(0),TERMINAL(3),TERMINAL(4),ROOT(7));

result = vpx_method_Unquoted_20_In_case_1_local_4_case_1_local_7(PARAMETERS,TERMINAL(7),ROOT(8));

result = vpx_match(PARAMETERS,"0",TERMINAL(6));
FAILONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_equals,2,0,TERMINAL(6),TERMINAL(8));
FINISHONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTERSINGLECASE(9)
}

enum opTrigger vpx_method_Unquoted_20_In_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Unquoted_20_In_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"0",ROOT(2));

result = vpx_method_Quote_20_String(PARAMETERS,TERMINAL(1),ROOT(3));

REPEATBEGIN
LOOPTERMINALBEGIN(1)
LOOPTERMINAL(0,2,4)
result = vpx_method_Unquoted_20_In_case_1_local_4(PARAMETERS,TERMINAL(0),LOOP(0),TERMINAL(1),TERMINAL(3),ROOT(4));
NEXTCASEONFAILURE
REPEATFINISH

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Unquoted_20_In_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Unquoted_20_In_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"0",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Unquoted_20_In(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Unquoted_20_In_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Unquoted_20_In_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Quote_20_String(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"\\\"\"\"",ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(1),TERMINAL(0),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(2),TERMINAL(1),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Strip_20_Suffix_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Strip_20_Suffix_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\".\"",ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP__22_in_22_,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_match(PARAMETERS,"0",TERMINAL(2));
NEXTCASEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_minus_2D_one,1,1,TERMINAL(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_prefix,2,2,TERMINAL(0),TERMINAL(3),ROOT(4),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(6)
}

enum opTrigger vpx_method_Strip_20_Suffix_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Strip_20_Suffix_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(1)
}

enum opTrigger vpx_method_Strip_20_Suffix(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Strip_20_Suffix_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Strip_20_Suffix_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Get_20_Export_20_Mode_20_Extension_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0);
enum opTrigger vpx_method_Get_20_Export_20_Mode_20_Extension_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0)
{
HEADER(2)
result = kSuccess;

result = vpx_persistent(PARAMETERS,kVPXValue_Export_20_Mode,0,1,ROOT(0));

result = vpx_match(PARAMETERS,"Experimental",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"\".inl\"",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Get_20_Export_20_Mode_20_Extension_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0);
enum opTrigger vpx_method_Get_20_Export_20_Mode_20_Extension_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0)
{
HEADER(1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\".rnt\"",ROOT(0));

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(1)
}

enum opTrigger vpx_method_Get_20_Export_20_Mode_20_Extension(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Get_20_Export_20_Mode_20_Extension_case_1(environment, &outcome, inputRepeat, contextIndex,root0))
vpx_method_Get_20_Export_20_Mode_20_Extension_case_2(environment, &outcome, inputRepeat, contextIndex,root0);
return outcome;
}

enum opTrigger vpx_method_Get_20_File_20_Type_20_Extension_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Get_20_File_20_Type_20_Extension_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"project",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,".vpx",ROOT(1));

result = vpx_constant(PARAMETERS,"\'vplP\'",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
OUTPUT(1,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Get_20_File_20_Type_20_Extension_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Get_20_File_20_Type_20_Extension_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"section",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,".vpl",ROOT(1));

result = vpx_constant(PARAMETERS,"\'vplS\'",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
OUTPUT(1,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Get_20_File_20_Type_20_Extension_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Get_20_File_20_Type_20_Extension_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"library",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,".framework",ROOT(1));

result = vpx_constant(PARAMETERS,"\'vplB\'",ROOT(2));

result = vpx_constant(PARAMETERS,"\'FMWK\'",ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
OUTPUT(1,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_Get_20_File_20_Type_20_Extension_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Get_20_File_20_Type_20_Extension_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"app",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,".app",ROOT(1));

result = vpx_constant(PARAMETERS,"\'APPL\'",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
OUTPUT(1,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Get_20_File_20_Type_20_Extension_case_5(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Get_20_File_20_Type_20_Extension_case_5(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"build",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,".vpxbuild",ROOT(1));

result = vpx_constant(PARAMETERS,"\'vplG\'",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
OUTPUT(1,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Get_20_File_20_Type_20_Extension_case_6(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Get_20_File_20_Type_20_Extension_case_6(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"param",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,".vpxparam",ROOT(1));

result = vpx_constant(PARAMETERS,"\'TEXT\'",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
OUTPUT(1,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Get_20_File_20_Type_20_Extension_case_7(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Get_20_File_20_Type_20_Extension_case_7(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADERWITHNONE(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;
FAILONSUCCESS

OUTPUT(0,NONE)
OUTPUT(1,NONE)
FOOTERWITHNONE(1)
}

enum opTrigger vpx_method_Get_20_File_20_Type_20_Extension(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Get_20_File_20_Type_20_Extension_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1))
if(vpx_method_Get_20_File_20_Type_20_Extension_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1))
if(vpx_method_Get_20_File_20_Type_20_Extension_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1))
if(vpx_method_Get_20_File_20_Type_20_Extension_case_4(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1))
if(vpx_method_Get_20_File_20_Type_20_Extension_case_5(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1))
if(vpx_method_Get_20_File_20_Type_20_Extension_case_6(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1))
vpx_method_Get_20_File_20_Type_20_Extension_case_7(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1);
return outcome;
}




	Nat4 tempAttribute_Persistent_20_Data_2F_Name[] = {
0000000000, 0X00000030, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X13000000, 0X556E7469, 0X746C6564, 0X20506572,
0X73697374, 0X656E7400
	};
	Nat4 tempAttribute_Primitive_20_Data_2F_Inarity[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Primitive_20_Data_2F_Outarity[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_VPL_20_Data_2F_Frame[] = {
0000000000, 0X0000008C, 0X00000028, 0X00000005, 0X00000014, 0X00000050, 0X0000004C, 0X00000048,
0X00000044, 0X0000003C, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000044,
0X00000004, 0X00000054, 0X0000006C, 0X00000084, 0X0000009C, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0X0000003C, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000,
0X0000003C, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000104, 0X00000004,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000168
	};
	Nat4 tempAttribute_VPL_20_Data_2F_List[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_VPL_20_Data_2F_Helper_20_Name[] = {
0000000000, 0X0000002C, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X0C000000, 0X50726F6A, 0X65637420, 0X44617461,
0000000000
	};
	Nat4 tempAttribute_Resource_20_File_20_Data_2F_Name[] = {
0000000000, 0X00000028, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X08000000, 0X556E7469, 0X746C6564, 0000000000
	};


Nat4 VPLC_Persistent_20_Data_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Persistent_20_Data_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 179 322 }{ 122 378 } */
	tempAttribute = attribute_add("Owner",tempClass,NULL,environment);
	tempAttribute = attribute_add("Name",tempClass,tempAttribute_Persistent_20_Data_2F_Name,environment);
	tempAttribute = attribute_add("Value",tempClass,NULL,environment);
	tempAttribute = attribute_add("Record",tempClass,NULL,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"Helper Data");
	return kNOERROR;
}

/* Start Universals: { 369 435 }{ 342 355 } */
enum opTrigger vpx_method_Persistent_20_Data_2F_Full_20_Name(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Name,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Persistent_20_Data_2F_Open_case_1_local_3_case_1_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Persistent_20_Data_2F_Open_case_1_local_3_case_1_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_external_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(1)
}

enum opTrigger vpx_method_Persistent_20_Data_2F_Open_case_1_local_3_case_1_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Persistent_20_Data_2F_Open_case_1_local_3_case_1_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Object_20_To_20_Instance(PARAMETERS,TERMINAL(0),ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_object_2D_to_2D_archive,1,2,TERMINAL(1),ROOT(2),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(4)
}

enum opTrigger vpx_method_Persistent_20_Data_2F_Open_case_1_local_3_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Persistent_20_Data_2F_Open_case_1_local_3_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Persistent_20_Data_2F_Open_case_1_local_3_case_1_local_7_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Persistent_20_Data_2F_Open_case_1_local_3_case_1_local_7_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Persistent_20_Data_2F_Open_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Persistent_20_Data_2F_Open_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(10)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Project_20_Data,1,1,TERMINAL(0),ROOT(1));

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Full_20_Name,1,1,TERMINAL(0),ROOT(4));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
FAILONSUCCESS

result = vpx_get(PARAMETERS,kVPXValue_Value,TERMINAL(0),ROOT(5),ROOT(6));

result = vpx_method_Persistent_20_Data_2F_Open_case_1_local_3_case_1_local_7(PARAMETERS,TERMINAL(6),ROOT(7));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Create_20_Persistent,3,1,TERMINAL(3),TERMINAL(4),TERMINAL(7),ROOT(8));
NEXTCASEONFAILURE

result = vpx_match(PARAMETERS,"NULL",TERMINAL(8));
FAILONSUCCESS

result = vpx_set(PARAMETERS,kVPXValue_Record,TERMINAL(0),TERMINAL(8),ROOT(9));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Update_20_Value,1,0,TERMINAL(9));

result = kSuccess;
FINISHONSUCCESS

FOOTER(10)
}

enum opTrigger vpx_method_Persistent_20_Data_2F_Open_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Persistent_20_Data_2F_Open_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(8)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Name,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_method_Unique_20_Name_20_For_20_String(PARAMETERS,TERMINAL(2),ROOT(3));

result = vpx_set(PARAMETERS,kVPXValue_Name,TERMINAL(1),TERMINAL(3),ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_Owner,TERMINAL(4),ROOT(5),ROOT(6));

result = vpx_set(PARAMETERS,kVPXValue_Name,TERMINAL(6),TERMINAL(3),ROOT(7));

result = kSuccess;

FOOTER(8)
}

enum opTrigger vpx_method_Persistent_20_Data_2F_Open_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Persistent_20_Data_2F_Open_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Persistent_20_Data_2F_Open_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Persistent_20_Data_2F_Open_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Persistent_20_Data_2F_Open_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Persistent_20_Data_2F_Open_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_context_super_method(PARAMETERS,kVPXMethod_Open,2,0,TERMINAL(0),TERMINAL(1));

REPEATBEGIN
result = vpx_method_Persistent_20_Data_2F_Open_case_1_local_3(PARAMETERS,TERMINAL(0));
NEXTCASEONFAILURE
REPEATFINISH

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Persistent_20_Data_2F_Open_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Persistent_20_Data_2F_Open_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Persistent record create failure!",ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_show,1,0,TERMINAL(2));

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_Persistent_20_Data_2F_Open(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Persistent_20_Data_2F_Open_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Persistent_20_Data_2F_Open_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Persistent_20_Data_2F_Close_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Persistent_20_Data_2F_Close_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(0));
TERMINATEONSUCCESS

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
TERMINATEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Destroy_20_Persistent,2,0,TERMINAL(3),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Persistent_20_Data_2F_Close(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Record,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Project_20_Data,1,1,TERMINAL(0),ROOT(3));

result = vpx_constant(PARAMETERS,"NULL",ROOT(4));

result = vpx_method_Persistent_20_Data_2F_Close_case_1_local_5(PARAMETERS,TERMINAL(3),TERMINAL(2));

result = vpx_set(PARAMETERS,kVPXValue_Record,TERMINAL(1),TERMINAL(4),ROOT(5));

result = vpx_call_context_super_method(PARAMETERS,kVPXMethod_Close,1,0,TERMINAL(5));

result = kSuccess;

FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Persistent_20_Data_2F_Set_20_Name_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Persistent_20_Data_2F_Set_20_Name_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Project_20_Data,1,1,TERMINAL(0),ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Full_20_Name,1,1,TERMINAL(0),ROOT(5));

result = vpx_constant(PARAMETERS,"NULL",ROOT(6));

result = vpx_constant(PARAMETERS,"persistent",ROOT(7));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Rename_20_Element,5,0,TERMINAL(4),TERMINAL(6),TERMINAL(5),TERMINAL(1),TERMINAL(7));
FAILONFAILURE

result = kSuccess;

FOOTERSINGLECASE(8)
}

enum opTrigger vpx_method_Persistent_20_Data_2F_Set_20_Name_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Persistent_20_Data_2F_Set_20_Name_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Formalize_20_Data_20_Name(PARAMETERS,TERMINAL(0),TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_method_Persistent_20_Data_2F_Set_20_Name_case_1_local_3(PARAMETERS,TERMINAL(0),TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_call_context_super_method(PARAMETERS,kVPXMethod_Set_20_Name,2,0,TERMINAL(0),TERMINAL(2));

result = kSuccess;

FOOTER(4)
}

enum opTrigger vpx_method_Persistent_20_Data_2F_Set_20_Name_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Persistent_20_Data_2F_Set_20_Name_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Full_20_Name,1,1,TERMINAL(0),ROOT(2));

result = vpx_method_Formalize_20_Data_20_Name(PARAMETERS,TERMINAL(0),TERMINAL(1),ROOT(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP__3D_,2,0,TERMINAL(2),TERMINAL(3));
NEXTCASEONFAILURE

result = kSuccess;

FOOTER(5)
}

enum opTrigger vpx_method_Persistent_20_Data_2F_Set_20_Name_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Persistent_20_Data_2F_Set_20_Name_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Duplicate_20_Data_20_Name_20_Error(PARAMETERS,TERMINAL(0),TERMINAL(1));

result = kSuccess;
FAILONSUCCESS

FOOTER(2)
}

enum opTrigger vpx_method_Persistent_20_Data_2F_Set_20_Name_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Persistent_20_Data_2F_Set_20_Name_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Duplicate persistent name!",ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_show,1,0,TERMINAL(2));
FAILONSUCCESS

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_Persistent_20_Data_2F_Set_20_Name(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Persistent_20_Data_2F_Set_20_Name_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
if(vpx_method_Persistent_20_Data_2F_Set_20_Name_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
if(vpx_method_Persistent_20_Data_2F_Set_20_Name_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Persistent_20_Data_2F_Set_20_Name_case_4(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Persistent_20_Data_2F_Update_20_Record(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Persistent_20_Data_2F_Handle_20_Item_20_Click_case_1_local_3_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Persistent_20_Data_2F_Handle_20_Item_20_Click_case_1_local_3_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(1),ROOT(2));

result = vpx_match(PARAMETERS,"List Value Window",TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Data,TERMINAL(1),ROOT(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_equals,2,0,TERMINAL(0),TERMINAL(4));
NEXTCASEONFAILURE

result = kSuccess;
FINISHONSUCCESS

OUTPUT(0,TERMINAL(3))
FOOTER(5)
}

enum opTrigger vpx_method_Persistent_20_Data_2F_Handle_20_Item_20_Click_case_1_local_3_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Persistent_20_Data_2F_Handle_20_Item_20_Click_case_1_local_3_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
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

enum opTrigger vpx_method_Persistent_20_Data_2F_Handle_20_Item_20_Click_case_1_local_3_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Persistent_20_Data_2F_Handle_20_Item_20_Click_case_1_local_3_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Persistent_20_Data_2F_Handle_20_Item_20_Click_case_1_local_3_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Persistent_20_Data_2F_Handle_20_Item_20_Click_case_1_local_3_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Persistent_20_Data_2F_Handle_20_Item_20_Click_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Persistent_20_Data_2F_Handle_20_Item_20_Click_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Get_20_Desktop_20_Windows(PARAMETERS,ROOT(2));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(2))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Persistent_20_Data_2F_Handle_20_Item_20_Click_case_1_local_3_case_1_local_3(PARAMETERS,TERMINAL(1),LIST(2),ROOT(3));
REPEATFINISH
} else {
ROOTNULL(3,NULL)
}

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Persistent_20_Data_2F_Handle_20_Item_20_Click_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Persistent_20_Data_2F_Handle_20_Item_20_Click_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Value_20_Address,1,1,TERMINAL(0),ROOT(3));

result = vpx_method_Persistent_20_Data_2F_Handle_20_Item_20_Click_case_1_local_3(PARAMETERS,TERMINAL(1),TERMINAL(3),ROOT(4));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(4));
NEXTCASEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Select_20_Window,1,0,TERMINAL(4));

result = kSuccess;

FOOTER(5)
}

enum opTrigger vpx_method_Persistent_20_Data_2F_Handle_20_Item_20_Click_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Persistent_20_Data_2F_Handle_20_Item_20_Click_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADERWITHNONE(13)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Value_20_Address,1,1,TERMINAL(0),ROOT(3));

result = vpx_instantiate(PARAMETERS,kVPXClass_List_20_Value_20_Window,1,1,NONE,ROOT(4));

result = vpx_set(PARAMETERS,kVPXValue_Item,TERMINAL(4),TERMINAL(1),ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Project_20_Data,1,1,TERMINAL(0),ROOT(6));

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(6),ROOT(7),ROOT(8));

result = vpx_set(PARAMETERS,kVPXValue_Project,TERMINAL(5),TERMINAL(7),ROOT(9));

result = vpx_constant(PARAMETERS,"value",ROOT(10));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Object_20_To_20_Value,3,1,TERMINAL(8),TERMINAL(3),TERMINAL(10),ROOT(11));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Install_20_Data,2,0,TERMINAL(9),TERMINAL(11));

result = vpx_method_Get_20_Desktop(PARAMETERS,ROOT(12));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Add_20_Window,2,0,TERMINAL(12),TERMINAL(9));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open,2,0,TERMINAL(9),TERMINAL(12));

result = kSuccess;

FOOTERWITHNONE(13)
}

enum opTrigger vpx_method_Persistent_20_Data_2F_Handle_20_Item_20_Click_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Persistent_20_Data_2F_Handle_20_Item_20_Click_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADERWITHNONE(11)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Value_20_Address,1,1,TERMINAL(0),ROOT(3));

result = vpx_instantiate(PARAMETERS,kVPXClass_List_20_Value_20_Window,1,1,NONE,ROOT(4));

result = vpx_set(PARAMETERS,kVPXValue_Item,TERMINAL(4),TERMINAL(1),ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Project_20_Data,1,1,TERMINAL(0),ROOT(6));

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(6),ROOT(7),ROOT(8));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Simple_20_Value_3F_,2,0,TERMINAL(8),TERMINAL(3));
TERMINATEONFAILURE

result = vpx_set(PARAMETERS,kVPXValue_Project,TERMINAL(5),TERMINAL(7),ROOT(9));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Install_20_Data,2,0,TERMINAL(9),TERMINAL(3));

result = vpx_method_Get_20_Desktop(PARAMETERS,ROOT(10));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Add_20_Window,2,0,TERMINAL(10),TERMINAL(9));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open,2,0,TERMINAL(9),TERMINAL(10));

result = kSuccess;

FOOTERWITHNONE(11)
}

enum opTrigger vpx_method_Persistent_20_Data_2F_Handle_20_Item_20_Click(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Persistent_20_Data_2F_Handle_20_Item_20_Click_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2))
if(vpx_method_Persistent_20_Data_2F_Handle_20_Item_20_Click_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2))
vpx_method_Persistent_20_Data_2F_Handle_20_Item_20_Click_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2);
return outcome;
}

enum opTrigger vpx_method_Persistent_20_Data_2F_Get_20_Direct_20_Value(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Record,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Project_20_Data,1,1,TERMINAL(1),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Archive,2,1,TERMINAL(5),TERMINAL(2),ROOT(6));

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTERSINGLECASE(7)
}

enum opTrigger vpx_method_Persistent_20_Data_2F_Set_20_Direct_20_Value(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Value_20_Address,2,0,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Persistent_20_Data_2F_Update_20_Value(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Direct_20_Value,1,1,TERMINAL(0),ROOT(1));

result = vpx_set(PARAMETERS,kVPXValue_Value,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Persistent_20_Data_2F_Set_20_Value_20_Address(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Record,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Project_20_Data,1,1,TERMINAL(2),ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(4),ROOT(5),ROOT(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Value,3,0,TERMINAL(6),TERMINAL(3),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(7)
}

enum opTrigger vpx_method_Persistent_20_Data_2F_Get_20_Value_20_Address(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Record,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Project_20_Data,1,1,TERMINAL(1),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Value,2,1,TERMINAL(5),TERMINAL(2),ROOT(6));

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTERSINGLECASE(7)
}

enum opTrigger vpx_method_Persistent_20_Data_2F_Set_20_Value(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Project_20_Data,1,1,TERMINAL(0),ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_constant(PARAMETERS,"string",ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Object_20_To_20_Value,3,1,TERMINAL(4),TERMINAL(1),TERMINAL(5),ROOT(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Direct_20_Value,2,0,TERMINAL(0),TERMINAL(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Make_20_Dirty,1,0,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(7)
}

enum opTrigger vpx_method_Persistent_20_Data_2F_Get_20_Value(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Value_20_Address,1,1,TERMINAL(0),ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Project_20_Data,1,1,TERMINAL(0),ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Object_20_To_20_Text,2,1,TERMINAL(4),TERMINAL(1),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Persistent_20_Data_2F_Set_20_CPX_20_Text_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Persistent_20_Data_2F_Set_20_CPX_20_Text_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Project_20_Data,1,1,TERMINAL(0),ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Full_20_Name,1,1,TERMINAL(0),ROOT(5));

result = vpx_constant(PARAMETERS,"NULL",ROOT(6));

result = vpx_constant(PARAMETERS,"persistent",ROOT(7));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Rename_20_Element,5,0,TERMINAL(4),TERMINAL(6),TERMINAL(5),TERMINAL(1),TERMINAL(7));
NEXTCASEONFAILURE

result = kSuccess;
FINISHONSUCCESS

OUTPUT(0,TERMINAL(1))
FOOTER(8)
}

enum opTrigger vpx_method_Persistent_20_Data_2F_Set_20_CPX_20_Text_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Persistent_20_Data_2F_Set_20_CPX_20_Text_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Unique_20_Name_20_For_20_String(PARAMETERS,TERMINAL(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Persistent_20_Data_2F_Set_20_CPX_20_Text_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Persistent_20_Data_2F_Set_20_CPX_20_Text_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Persistent_20_Data_2F_Set_20_CPX_20_Text_case_1_local_2_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Persistent_20_Data_2F_Set_20_CPX_20_Text_case_1_local_2_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Persistent_20_Data_2F_Set_20_CPX_20_Text_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Persistent_20_Data_2F_Set_20_CPX_20_Text_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

REPEATBEGIN
LOOPTERMINALBEGIN(1)
LOOPTERMINAL(0,1,2)
result = vpx_method_Persistent_20_Data_2F_Set_20_CPX_20_Text_case_1_local_2(PARAMETERS,TERMINAL(0),LOOP(0),ROOT(2));
REPEATFINISH

result = vpx_call_context_super_method(PARAMETERS,kVPXMethod_Set_20_Name,2,0,TERMINAL(0),TERMINAL(2));

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_Persistent_20_Data_2F_Set_20_CPX_20_Text_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Persistent_20_Data_2F_Set_20_CPX_20_Text_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Duplicate persistent name!",ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_show,1,0,TERMINAL(2));
FAILONSUCCESS

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_Persistent_20_Data_2F_Set_20_CPX_20_Text(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Persistent_20_Data_2F_Set_20_CPX_20_Text_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Persistent_20_Data_2F_Set_20_CPX_20_Text_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Persistent_20_Data_2F_Parse_20_CPX_20_Buffer_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2);
enum opTrigger vpx_method_Persistent_20_Data_2F_Parse_20_CPX_20_Buffer_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2)
{
HEADER(13)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_constant(PARAMETERS,"4",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_text,3,3,TERMINAL(3),TERMINAL(2),TERMINAL(4),ROOT(5),ROOT(6),ROOT(7));

result = vpx_match(PARAMETERS,"pdat",TERMINAL(7));
NEXTCASEONFAILURE

result = vpx_method_Parse_20_Object(PARAMETERS,TERMINAL(1),TERMINAL(6),TERMINAL(5),ROOT(8),ROOT(9),ROOT(10),ROOT(11));

result = vpx_set(PARAMETERS,kVPXValue_Value,TERMINAL(0),TERMINAL(11),ROOT(12));

result = kSuccess;

OUTPUT(0,TERMINAL(12))
OUTPUT(1,TERMINAL(8))
OUTPUT(2,TERMINAL(9))
FOOTER(13)
}

enum opTrigger vpx_method_Persistent_20_Data_2F_Parse_20_CPX_20_Buffer_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2);
enum opTrigger vpx_method_Persistent_20_Data_2F_Parse_20_CPX_20_Buffer_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2)
{
HEADER(15)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_constant(PARAMETERS,"4",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_text,3,3,TERMINAL(3),TERMINAL(2),TERMINAL(4),ROOT(5),ROOT(6),ROOT(7));

result = vpx_match(PARAMETERS,"nind",TERMINAL(7));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"2",ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_integer,3,3,TERMINAL(5),TERMINAL(6),TERMINAL(8),ROOT(9),ROOT(10),ROOT(11));

result = vpx_constant(PARAMETERS,"/Set CPX Text",ROOT(12));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,3,1,TERMINAL(0),TERMINAL(11),TERMINAL(12),ROOT(13));

result = vpx_call_primitive(PARAMETERS,VPLP_attach_2D_r,2,1,TERMINAL(1),TERMINAL(13),ROOT(14));

result = kSuccess;

OUTPUT(0,TERMINAL(0))
OUTPUT(1,TERMINAL(14))
OUTPUT(2,TERMINAL(10))
FOOTER(15)
}

enum opTrigger vpx_method_Persistent_20_Data_2F_Parse_20_CPX_20_Buffer_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2);
enum opTrigger vpx_method_Persistent_20_Data_2F_Parse_20_CPX_20_Buffer_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2)
{
HEADER(10)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_constant(PARAMETERS,"8",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_text,3,3,TERMINAL(3),TERMINAL(2),TERMINAL(4),ROOT(5),ROOT(6),ROOT(7));

result = vpx_match(PARAMETERS,"end pers",TERMINAL(7));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_detach_2D_l,1,2,TERMINAL(1),ROOT(8),ROOT(9));

result = kSuccess;

OUTPUT(0,TERMINAL(8))
OUTPUT(1,TERMINAL(9))
OUTPUT(2,TERMINAL(6))
FOOTER(10)
}

enum opTrigger vpx_method_Persistent_20_Data_2F_Parse_20_CPX_20_Buffer_case_4_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Persistent_20_Data_2F_Parse_20_CPX_20_Buffer_case_4_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_integer,3,3,TERMINAL(0),TERMINAL(1),TERMINAL(2),ROOT(3),ROOT(4),ROOT(5));

result = vpx_match(PARAMETERS,"0",TERMINAL(5));
FINISHONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Persistent_20_Data_2F_Parse_20_CPX_20_Buffer_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2);
enum opTrigger vpx_method_Persistent_20_Data_2F_Parse_20_CPX_20_Buffer_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2)
{
HEADER(12)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_constant(PARAMETERS,"4",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_text,3,3,TERMINAL(3),TERMINAL(2),TERMINAL(4),ROOT(5),ROOT(6),ROOT(7));

result = vpx_match(PARAMETERS,"comm",TERMINAL(7));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"1",ROOT(8));

result = vpx_constant(PARAMETERS,"6",ROOT(9));

result = vpx_call_primitive(PARAMETERS,VPLP__2B2B_,2,1,TERMINAL(6),TERMINAL(9),ROOT(10));

REPEATBEGIN
LOOPTERMINALBEGIN(1)
LOOPTERMINAL(0,10,11)
result = vpx_method_Persistent_20_Data_2F_Parse_20_CPX_20_Buffer_case_4_local_8(PARAMETERS,TERMINAL(5),LOOP(0),TERMINAL(8),ROOT(11));
REPEATFINISH

result = kSuccess;

OUTPUT(0,TERMINAL(0))
OUTPUT(1,TERMINAL(1))
OUTPUT(2,TERMINAL(11))
FOOTER(12)
}

enum opTrigger vpx_method_Persistent_20_Data_2F_Parse_20_CPX_20_Buffer_case_5(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2);
enum opTrigger vpx_method_Persistent_20_Data_2F_Parse_20_CPX_20_Buffer_case_5(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP__2B_1,1,1,TERMINAL(2),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_external_2D_size,1,1,TERMINAL(3),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP__3E3D_,2,0,TERMINAL(4),TERMINAL(5));
FINISHONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(0))
OUTPUT(1,TERMINAL(1))
OUTPUT(2,TERMINAL(4))
FOOTER(6)
}

enum opTrigger vpx_method_Persistent_20_Data_2F_Parse_20_CPX_20_Buffer(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Persistent_20_Data_2F_Parse_20_CPX_20_Buffer_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0,root1,root2))
if(vpx_method_Persistent_20_Data_2F_Parse_20_CPX_20_Buffer_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0,root1,root2))
if(vpx_method_Persistent_20_Data_2F_Parse_20_CPX_20_Buffer_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0,root1,root2))
if(vpx_method_Persistent_20_Data_2F_Parse_20_CPX_20_Buffer_case_4(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0,root1,root2))
vpx_method_Persistent_20_Data_2F_Parse_20_CPX_20_Buffer_case_5(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0,root1,root2);
return outcome;
}

/* Stop Universals */



Nat4 VPLC_Primitive_20_Data_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Primitive_20_Data_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 220 346 }{ 200 300 } */
	tempAttribute = attribute_add("Owner",tempClass,NULL,environment);
	tempAttribute = attribute_add("Name",tempClass,NULL,environment);
	tempAttribute = attribute_add("Text",tempClass,NULL,environment);
	tempAttribute = attribute_add("Inarity",tempClass,tempAttribute_Primitive_20_Data_2F_Inarity,environment);
	tempAttribute = attribute_add("Outarity",tempClass,tempAttribute_Primitive_20_Data_2F_Outarity,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"Helper Data");
	return kNOERROR;
}

/* Start Universals: { 469 333 }{ 216 324 } */
enum opTrigger vpx_method_Primitive_20_Data_2F_Get_20_Project_20_Data_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Primitive_20_Data_2F_Get_20_Project_20_Data_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(10)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Owner,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
NEXTCASEONSUCCESS

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(4));
NEXTCASEONSUCCESS

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(4),ROOT(5),ROOT(6));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(6));
NEXTCASEONSUCCESS

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(6),ROOT(7),ROOT(8));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(8));
NEXTCASEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Project_20_Data,1,1,TERMINAL(8),ROOT(9));

result = kSuccess;

OUTPUT(0,TERMINAL(9))
FOOTER(10)
}

enum opTrigger vpx_method_Primitive_20_Data_2F_Get_20_Project_20_Data_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Primitive_20_Data_2F_Get_20_Project_20_Data_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Primitive_20_Data_2F_Get_20_Project_20_Data(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Primitive_20_Data_2F_Get_20_Project_20_Data_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Primitive_20_Data_2F_Get_20_Project_20_Data_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Primitive_20_Data_2F_H_20_File_20_Name(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Name,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_constant(PARAMETERS,"\".h\"",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(2),TERMINAL(3),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Primitive_20_Data_2F_Handle_20_Item_20_Click_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Primitive_20_Data_2F_Handle_20_Item_20_Click_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_AH_20_Lookup_20_Anchor,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_Primitive_20_Data_2F_Handle_20_Item_20_Click_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Primitive_20_Data_2F_Handle_20_Item_20_Click_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Sorry: No info available yet!",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_show,1,0,TERMINAL(3));

result = kSuccess;

FOOTER(4)
}

enum opTrigger vpx_method_Primitive_20_Data_2F_Handle_20_Item_20_Click_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Primitive_20_Data_2F_Handle_20_Item_20_Click_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(11)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Name,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Grandparent_20_Helper,1,1,TERMINAL(3),ROOT(5));

result = vpx_get(PARAMETERS,kVPXValue_File,TERMINAL(5),ROOT(6),ROOT(7));

result = vpx_constant(PARAMETERS,"\".html\"",ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(4),TERMINAL(8),ROOT(9));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Bundle_20_Resource_20_FSRef,2,1,TERMINAL(7),TERMINAL(9),ROOT(10));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod__7E_LSOpenFSRef,1,0,TERMINAL(10));
NEXTCASEONFAILURE

result = kSuccess;

FOOTER(11)
}

enum opTrigger vpx_method_Primitive_20_Data_2F_Handle_20_Item_20_Click(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Primitive_20_Data_2F_Handle_20_Item_20_Click_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2))
if(vpx_method_Primitive_20_Data_2F_Handle_20_Item_20_Click_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2))
vpx_method_Primitive_20_Data_2F_Handle_20_Item_20_Click_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2);
return outcome;
}

enum opTrigger vpx_method_Primitive_20_Data_2F_Have_20_Row_20_Values_3F_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
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

enum opTrigger vpx_method_Primitive_20_Data_2F_Can_20_Create_3F_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;
FAILONSUCCESS

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Primitive_20_Data_2F_Can_20_Delete_3F_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;
FAILONSUCCESS

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Primitive_20_Data_2F_Install_20_Proxy(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(10)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(1),ROOT(3),ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(4),ROOT(5),ROOT(6));

result = vpx_get(PARAMETERS,kVPXValue_File,TERMINAL(6),ROOT(7),ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(8));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Update_20_Alias,1,0,TERMINAL(8));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Alias_20_Record,1,1,TERMINAL(8),ROOT(9));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(9));
TERMINATEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod__7E_Set_20_Proxy_20_Alias,2,0,TERMINAL(2),TERMINAL(9));
TERMINATEONFAILURE

result = kSuccess;

FOOTERSINGLECASE(10)
}

enum opTrigger vpx_method_Primitive_20_Data_2F_AH_20_Lookup_20_Anchor(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_AH_20_Create_20_Anchor,1,1,TERMINAL(0),ROOT(1));
FAILONFAILURE

result = vpx_method_AH_20_Lookup_20_Anchor(PARAMETERS,TERMINAL(1),ROOT(2));

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(2));
FAILONFAILURE

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Primitive_20_Data_2F_AH_20_Create_20_Anchor_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Primitive_20_Data_2F_AH_20_Create_20_Anchor_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(8)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_FSRef,1,1,TERMINAL(0),ROOT(1));
FAILONFAILURE

result = vpx_constant(PARAMETERS,"NULL",ROOT(2));

PUTPOINTER(__CFURL,*,CFURLCreateFromFSRef( GETCONSTPOINTER(__CFAllocator,*,TERMINAL(2)),GETCONSTPOINTER(FSRef,*,TERMINAL(1))),3);
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
FAILONSUCCESS

PUTPOINTER(__CFBundle,*,CFBundleCreate( GETCONSTPOINTER(__CFAllocator,*,TERMINAL(2)),GETCONSTPOINTER(__CFURL,*,TERMINAL(3))),4);
result = kSuccess;

CFRelease( GETCONSTPOINTER(void,*,TERMINAL(3)));
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(4));
FAILONSUCCESS

PUTPOINTER(__CFString,*,CFBundleGetIdentifier( GETPOINTER(0,__CFBundle,*,ROOT(6),TERMINAL(4))),5);
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(5));
FAILONSUCCESS

result = vpx_method_From_20_CFStringRef(PARAMETERS,TERMINAL(5),ROOT(7));

result = kSuccess;

OUTPUT(0,TERMINAL(7))
FOOTERSINGLECASE(8)
}

enum opTrigger vpx_method_Primitive_20_Data_2F_AH_20_Create_20_Anchor(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(10)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Grandparent_20_Helper,1,1,TERMINAL(0),ROOT(1));

result = vpx_get(PARAMETERS,kVPXValue_File,TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_method_Primitive_20_Data_2F_AH_20_Create_20_Anchor_case_1_local_4(PARAMETERS,TERMINAL(3),ROOT(4));
FAILONFAILURE

result = vpx_constant(PARAMETERS,"_",ROOT(5));

result = vpx_get(PARAMETERS,kVPXValue_Name,TERMINAL(0),ROOT(6),ROOT(7));

result = vpx_method_Mangle_20_Name(PARAMETERS,TERMINAL(7),ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,3,1,TERMINAL(4),TERMINAL(5),TERMINAL(8),ROOT(9));

result = kSuccess;

OUTPUT(0,TERMINAL(9))
FOOTERSINGLECASE(10)
}

/* Stop Universals */



Nat4 VPLC_Primitives_20_Data_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Primitives_20_Data_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 200 300 } */
	tempAttribute = attribute_add("Owner",tempClass,NULL,environment);
	tempAttribute = attribute_add("Name",tempClass,NULL,environment);
	tempAttribute = attribute_add("File",tempClass,NULL,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"Helper Data");
	return kNOERROR;
}

/* Start Universals: { 305 342 }{ 404 376 } */
enum opTrigger vpx_method_Primitives_20_Data_2F_Get_20_Primitives_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Primitives_20_Data_2F_Get_20_Primitives_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Primitives_20_Data_2F_Get_20_Primitives(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Primitive Data",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(2),ROOT(3),ROOT(4));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(4))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Primitives_20_Data_2F_Get_20_Primitives_case_1_local_5(PARAMETERS,LIST(4),ROOT(5));
LISTROOT(5,0)
REPEATFINISH
LISTROOTFINISH(5,0)
LISTROOTEND
} else {
ROOTEMPTY(5)
}

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Primitives_20_Data_2F_Get_20_Project_20_Data_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Primitives_20_Data_2F_Get_20_Project_20_Data_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(10)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Owner,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
NEXTCASEONSUCCESS

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(4));
NEXTCASEONSUCCESS

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(4),ROOT(5),ROOT(6));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(6));
NEXTCASEONSUCCESS

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(6),ROOT(7),ROOT(8));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(8));
NEXTCASEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Project_20_Data,1,1,TERMINAL(8),ROOT(9));

result = kSuccess;

OUTPUT(0,TERMINAL(9))
FOOTER(10)
}

enum opTrigger vpx_method_Primitives_20_Data_2F_Get_20_Project_20_Data_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Primitives_20_Data_2F_Get_20_Project_20_Data_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Primitives_20_Data_2F_Get_20_Project_20_Data(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Primitives_20_Data_2F_Get_20_Project_20_Data_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Primitives_20_Data_2F_Get_20_Project_20_Data_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Primitives_20_Data_2F_H_20_File_20_Name(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Name,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_constant(PARAMETERS,"\".h\"",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(2),TERMINAL(3),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Primitives_20_Data_2F_Initialize_20_Item_20_Data(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADERWITHNONE(7)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_List_20_Data,1,1,NONE,ROOT(2));

result = vpx_constant(PARAMETERS,"\"Primitive Data\"",ROOT(3));

result = vpx_set(PARAMETERS,kVPXValue_Helper_20_Name,TERMINAL(2),TERMINAL(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,1,1,TERMINAL(4),ROOT(5));

result = vpx_set(PARAMETERS,kVPXValue_Lists,TERMINAL(1),TERMINAL(5),ROOT(6));

result = kSuccess;

FOOTERSINGLECASEWITHNONE(7)
}

enum opTrigger vpx_method_Primitives_20_Data_2F_Make_20_Dirty_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Primitives_20_Data_2F_Make_20_Dirty_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Send_20_Refresh,1,0,TERMINAL(0));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Project_20_Data,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
NEXTCASEONSUCCESS

result = vpx_get(PARAMETERS,kVPXValue_Dirty,TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_match(PARAMETERS,"FALSE",TERMINAL(3));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"TRUE",ROOT(4));

result = vpx_set(PARAMETERS,kVPXValue_Dirty,TERMINAL(2),TERMINAL(4),ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Send_20_Refresh,1,0,TERMINAL(5));

result = kSuccess;

FOOTER(6)
}

enum opTrigger vpx_method_Primitives_20_Data_2F_Make_20_Dirty_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Primitives_20_Data_2F_Make_20_Dirty_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_Primitives_20_Data_2F_Make_20_Dirty(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Primitives_20_Data_2F_Make_20_Dirty_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Primitives_20_Data_2F_Make_20_Dirty_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Primitives_20_Data_2F_Have_20_Row_20_Values_3F_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
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

enum opTrigger vpx_method_Primitives_20_Data_2F_Install_20_Proxy_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Primitives_20_Data_2F_Install_20_Proxy_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_context_super_method(PARAMETERS,kVPXMethod_Install_20_Proxy,3,0,TERMINAL(0),TERMINAL(1),TERMINAL(2));

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_Primitives_20_Data_2F_Install_20_Proxy_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Primitives_20_Data_2F_Install_20_Proxy_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(10)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(1),ROOT(3),ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(4),ROOT(5),ROOT(6));

result = vpx_get(PARAMETERS,kVPXValue_File,TERMINAL(6),ROOT(7),ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(8));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Update_20_Alias,1,0,TERMINAL(8));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Alias_20_Record,1,1,TERMINAL(8),ROOT(9));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(9));
TERMINATEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod__7E_Set_20_Proxy_20_Alias,2,0,TERMINAL(2),TERMINAL(9));
TERMINATEONFAILURE

result = kSuccess;

FOOTER(10)
}

enum opTrigger vpx_method_Primitives_20_Data_2F_Install_20_Proxy(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Primitives_20_Data_2F_Install_20_Proxy_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2))
vpx_method_Primitives_20_Data_2F_Install_20_Proxy_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2);
return outcome;
}

enum opTrigger vpx_method_Primitives_20_Data_2F_Get_20_Name_20_Singular(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Bundle",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Primitives_20_Data_2F_Get_20_File(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_File,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Primitives_20_Data_2F_Set_20_File(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_File,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Primitives_20_Data_2F_Can_20_Create_3F_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;
FAILONSUCCESS

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Primitives_20_Data_2F_Create_20_With_20_FSRef_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Primitives_20_Data_2F_Create_20_With_20_FSRef_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(1)
}

enum opTrigger vpx_method_Primitives_20_Data_2F_Create_20_With_20_FSRef_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Primitives_20_Data_2F_Create_20_With_20_FSRef_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"MacOS Bundle Reference",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_FSRef,1,1,TERMINAL(0),ROOT(2));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_New_20_From_20_FSRef,2,0,TERMINAL(1),TERMINAL(2));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(3)
}

enum opTrigger vpx_method_Primitives_20_Data_2F_Create_20_With_20_FSRef_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Primitives_20_Data_2F_Create_20_With_20_FSRef_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Primitives_20_Data_2F_Create_20_With_20_FSRef_case_1_local_2_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Primitives_20_Data_2F_Create_20_With_20_FSRef_case_1_local_2_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Primitives_20_Data_2F_Create_20_With_20_FSRef_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Primitives_20_Data_2F_Create_20_With_20_FSRef_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,kCFURLPOSIXPathStyle,ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Full_20_Path_20_CFString,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));
FAILONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_String,1,1,TERMINAL(2),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Release,1,0,TERMINAL(2));

result = vpx_match(PARAMETERS,"\"\"",TERMINAL(3));
FAILONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Primitives_20_Data_2F_Create_20_With_20_FSRef_case_1_local_6_case_1_local_4_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Primitives_20_Data_2F_Create_20_With_20_FSRef_case_1_local_6_case_1_local_4_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_external_3F_,1,0,TERMINAL(0));
FAILONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_from_2D_pointer,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"0",TERMINAL(1));
FAILONSUCCESS

result = vpx_constant(PARAMETERS,"__CFString",ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_set_2D_external_2D_type,2,1,TERMINAL(0),TERMINAL(2),ROOT(3));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Primitives_20_Data_2F_Create_20_With_20_FSRef_case_1_local_6_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Primitives_20_Data_2F_Create_20_With_20_FSRef_case_1_local_6_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"MartenLibraryID",ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Value_20_For_20_Info_20_Dictionary_20_Key,2,1,TERMINAL(0),TERMINAL(2),ROOT(3));

result = vpx_method_Primitives_20_Data_2F_Create_20_With_20_FSRef_case_1_local_6_case_1_local_4_case_1_local_4(PARAMETERS,TERMINAL(3));
NEXTCASEONFAILURE

result = vpx_method_From_20_CFStringRef(PARAMETERS,TERMINAL(3),ROOT(4));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(4));
NEXTCASEONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Primitives_20_Data_2F_Create_20_With_20_FSRef_case_1_local_6_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Primitives_20_Data_2F_Create_20_With_20_FSRef_case_1_local_6_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Bundle_20_Identifier,1,1,TERMINAL(0),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_String,1,1,TERMINAL(2),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Dispose,1,0,TERMINAL(2));

result = vpx_match(PARAMETERS,"\"\"",TERMINAL(3));
NEXTCASEONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_Primitives_20_Data_2F_Create_20_With_20_FSRef_case_1_local_6_case_1_local_4_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Primitives_20_Data_2F_Create_20_With_20_FSRef_case_1_local_6_case_1_local_4_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Primitives_20_Data_2F_Create_20_With_20_FSRef_case_1_local_6_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Primitives_20_Data_2F_Create_20_With_20_FSRef_case_1_local_6_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Primitives_20_Data_2F_Create_20_With_20_FSRef_case_1_local_6_case_1_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
if(vpx_method_Primitives_20_Data_2F_Create_20_With_20_FSRef_case_1_local_6_case_1_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Primitives_20_Data_2F_Create_20_With_20_FSRef_case_1_local_6_case_1_local_4_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Primitives_20_Data_2F_Create_20_With_20_FSRef_case_1_local_6_case_1_local_5_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Primitives_20_Data_2F_Create_20_With_20_FSRef_case_1_local_6_case_1_local_5_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_external_3F_,1,0,TERMINAL(0));
FAILONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_from_2D_pointer,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"0",TERMINAL(1));
FAILONSUCCESS

result = vpx_constant(PARAMETERS,"__CFString",ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_set_2D_external_2D_type,2,1,TERMINAL(0),TERMINAL(2),ROOT(3));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Primitives_20_Data_2F_Create_20_With_20_FSRef_case_1_local_6_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Primitives_20_Data_2F_Create_20_With_20_FSRef_case_1_local_6_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"MartenItemName",ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Value_20_For_20_Info_20_Dictionary_20_Key,2,1,TERMINAL(0),TERMINAL(2),ROOT(3));

result = vpx_method_Primitives_20_Data_2F_Create_20_With_20_FSRef_case_1_local_6_case_1_local_5_case_1_local_4(PARAMETERS,TERMINAL(3));
NEXTCASEONFAILURE

result = vpx_method_From_20_CFStringRef(PARAMETERS,TERMINAL(3),ROOT(4));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(4));
NEXTCASEONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Primitives_20_Data_2F_Create_20_With_20_FSRef_case_1_local_6_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Primitives_20_Data_2F_Create_20_With_20_FSRef_case_1_local_6_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Primitives_20_Data_2F_Create_20_With_20_FSRef_case_1_local_6_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Primitives_20_Data_2F_Create_20_With_20_FSRef_case_1_local_6_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Primitives_20_Data_2F_Create_20_With_20_FSRef_case_1_local_6_case_1_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Primitives_20_Data_2F_Create_20_With_20_FSRef_case_1_local_6_case_1_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Primitives_20_Data_2F_Create_20_With_20_FSRef_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Primitives_20_Data_2F_Create_20_With_20_FSRef_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADERWITHNONE(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_CF_20_Bundle,1,1,NONE,ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Create_20_From_20_FSRef,2,0,TERMINAL(2),TERMINAL(0));

result = vpx_method_Primitives_20_Data_2F_Create_20_With_20_FSRef_case_1_local_6_case_1_local_4(PARAMETERS,TERMINAL(2),TERMINAL(1),ROOT(3));

result = vpx_method_Primitives_20_Data_2F_Create_20_With_20_FSRef_case_1_local_6_case_1_local_5(PARAMETERS,TERMINAL(2),TERMINAL(1),ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Dispose,1,0,TERMINAL(2));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
OUTPUT(1,TERMINAL(4))
FOOTERSINGLECASEWITHNONE(5)
}

enum opTrigger vpx_method_Primitives_20_Data_2F_Create_20_With_20_FSRef_case_1_local_8_case_1_local_8_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Primitives_20_Data_2F_Create_20_With_20_FSRef_case_1_local_8_case_1_local_8_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(5)
INPUT(0,0)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_Primitive_20_Data,1,1,NONE,ROOT(1));

result = vpx_instantiate(PARAMETERS,kVPXClass_Item_20_Data,1,1,NONE,ROOT(2));

result = vpx_set(PARAMETERS,kVPXValue_Name,TERMINAL(1),TERMINAL(0),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Install_20_Helper,2,0,TERMINAL(2),TERMINAL(3));

result = vpx_set(PARAMETERS,kVPXValue_Owner,TERMINAL(3),TERMINAL(2),ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Initialize_20_Item_20_Data,2,0,TERMINAL(4),TERMINAL(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASEWITHNONE(5)
}

enum opTrigger vpx_method_Primitives_20_Data_2F_Create_20_With_20_FSRef_case_1_local_8_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Primitives_20_Data_2F_Create_20_With_20_FSRef_case_1_local_8_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

if( (repeatLimit = vpx_multiplex(1,TERMINAL(1))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Primitives_20_Data_2F_Create_20_With_20_FSRef_case_1_local_8_case_1_local_8_case_1_local_2(PARAMETERS,LIST(1),ROOT(2));
LISTROOT(2,0)
REPEATFINISH
LISTROOTFINISH(2,0)
LISTROOTEND
} else {
ROOTEMPTY(2)
}

result = vpx_constant(PARAMETERS,"Primitive Data",ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(0),TERMINAL(3),ROOT(4));

result = vpx_set(PARAMETERS,kVPXValue_List,TERMINAL(4),TERMINAL(2),ROOT(5));

result = kSuccess;

FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Primitives_20_Data_2F_Create_20_With_20_FSRef_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4,V_Object *root0);
enum opTrigger vpx_method_Primitives_20_Data_2F_Create_20_With_20_FSRef_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4,V_Object *root0)
{
HEADERWITHNONE(10)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
INPUT(4,4)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_Item_20_Data,1,1,NONE,ROOT(5));

result = vpx_set(PARAMETERS,kVPXValue_Name,TERMINAL(0),TERMINAL(2),ROOT(6));

result = vpx_set(PARAMETERS,kVPXValue_File,TERMINAL(6),TERMINAL(1),ROOT(7));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Install_20_Helper,2,0,TERMINAL(5),TERMINAL(6));

result = vpx_set(PARAMETERS,kVPXValue_Owner,TERMINAL(7),TERMINAL(5),ROOT(8));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Initialize_20_Item_20_Data,2,0,TERMINAL(8),TERMINAL(5));

result = vpx_method_Primitives_20_Data_2F_Create_20_With_20_FSRef_case_1_local_8_case_1_local_8(PARAMETERS,TERMINAL(5),TERMINAL(4));

result = vpx_set(PARAMETERS,kVPXValue_Name,TERMINAL(5),TERMINAL(3),ROOT(9));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTERSINGLECASEWITHNONE(10)
}

enum opTrigger vpx_method_Primitives_20_Data_2F_Create_20_With_20_FSRef(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(10)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_method_Primitives_20_Data_2F_Create_20_With_20_FSRef_case_1_local_2(PARAMETERS,TERMINAL(1),ROOT(3));

result = vpx_method_Primitives_20_Data_2F_Create_20_With_20_FSRef_case_1_local_3(PARAMETERS,TERMINAL(3),ROOT(4));
FAILONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Name_20_As_20_String,1,1,TERMINAL(3),ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Load_20_Bundle,3,0,TERMINAL(2),TERMINAL(4),TERMINAL(5));
FAILONFAILURE

result = vpx_method_Primitives_20_Data_2F_Create_20_With_20_FSRef_case_1_local_6(PARAMETERS,TERMINAL(3),TERMINAL(5),ROOT(6),ROOT(7));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Bundle_20_Primitives,2,1,TERMINAL(2),TERMINAL(6),ROOT(8));

result = vpx_method_Primitives_20_Data_2F_Create_20_With_20_FSRef_case_1_local_8(PARAMETERS,TERMINAL(0),TERMINAL(3),TERMINAL(5),TERMINAL(7),TERMINAL(8),ROOT(9));

result = kSuccess;

OUTPUT(0,TERMINAL(9))
FOOTERSINGLECASE(10)
}

enum opTrigger vpx_method_Primitives_20_Data_2F_Get_20_Load_20_Function_20_Name_case_1_local_4_case_1_local_4_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Primitives_20_Data_2F_Get_20_Load_20_Function_20_Name_case_1_local_4_case_1_local_4_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_external_3F_,1,0,TERMINAL(0));
FAILONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_from_2D_pointer,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"0",TERMINAL(1));
FAILONSUCCESS

result = vpx_constant(PARAMETERS,"__CFString",ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_set_2D_external_2D_type,2,1,TERMINAL(0),TERMINAL(2),ROOT(3));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Primitives_20_Data_2F_Get_20_Load_20_Function_20_Name_case_1_local_4_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Primitives_20_Data_2F_Get_20_Load_20_Function_20_Name_case_1_local_4_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"MartenLoadFunction",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Value_20_For_20_Info_20_Dictionary_20_Key,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_method_Primitives_20_Data_2F_Get_20_Load_20_Function_20_Name_case_1_local_4_case_1_local_4_case_1_local_4(PARAMETERS,TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_method_From_20_CFStringRef(PARAMETERS,TERMINAL(2),ROOT(3));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
NEXTCASEONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_Primitives_20_Data_2F_Get_20_Load_20_Function_20_Name_case_1_local_4_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Primitives_20_Data_2F_Get_20_Load_20_Function_20_Name_case_1_local_4_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Primitives_20_Data_2F_Get_20_Load_20_Function_20_Name_case_1_local_4_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Primitives_20_Data_2F_Get_20_Load_20_Function_20_Name_case_1_local_4_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Primitives_20_Data_2F_Get_20_Load_20_Function_20_Name_case_1_local_4_case_1_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Primitives_20_Data_2F_Get_20_Load_20_Function_20_Name_case_1_local_4_case_1_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Primitives_20_Data_2F_Get_20_Load_20_Function_20_Name_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Primitives_20_Data_2F_Get_20_Load_20_Function_20_Name_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(3)
INPUT(0,0)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_CF_20_Bundle,1,1,NONE,ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Create_20_From_20_FSRef,2,0,TERMINAL(1),TERMINAL(0));

result = vpx_method_Primitives_20_Data_2F_Get_20_Load_20_Function_20_Name_case_1_local_4_case_1_local_4(PARAMETERS,TERMINAL(1),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Dispose,1,0,TERMINAL(1));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASEWITHNONE(3)
}

enum opTrigger vpx_method_Primitives_20_Data_2F_Get_20_Load_20_Function_20_Name(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_File,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
FAILONSUCCESS

result = vpx_method_Primitives_20_Data_2F_Get_20_Load_20_Function_20_Name_case_1_local_4(PARAMETERS,TERMINAL(2),ROOT(3));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
FAILONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Primitives_20_Data_2F_Get_20_Library_20_ID_case_1_local_4_case_1_local_4_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Primitives_20_Data_2F_Get_20_Library_20_ID_case_1_local_4_case_1_local_4_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_external_3F_,1,0,TERMINAL(0));
FAILONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_from_2D_pointer,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"0",TERMINAL(1));
FAILONSUCCESS

result = vpx_constant(PARAMETERS,"__CFString",ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_set_2D_external_2D_type,2,1,TERMINAL(0),TERMINAL(2),ROOT(3));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Primitives_20_Data_2F_Get_20_Library_20_ID_case_1_local_4_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Primitives_20_Data_2F_Get_20_Library_20_ID_case_1_local_4_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"MartenLibraryID",ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Value_20_For_20_Info_20_Dictionary_20_Key,2,1,TERMINAL(0),TERMINAL(2),ROOT(3));

result = vpx_method_Primitives_20_Data_2F_Get_20_Library_20_ID_case_1_local_4_case_1_local_4_case_1_local_4(PARAMETERS,TERMINAL(3));
NEXTCASEONFAILURE

result = vpx_method_From_20_CFStringRef(PARAMETERS,TERMINAL(3),ROOT(4));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(4));
NEXTCASEONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Primitives_20_Data_2F_Get_20_Library_20_ID_case_1_local_4_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Primitives_20_Data_2F_Get_20_Library_20_ID_case_1_local_4_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Bundle_20_Identifier,1,1,TERMINAL(0),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_String,1,1,TERMINAL(2),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Dispose,1,0,TERMINAL(2));

result = vpx_match(PARAMETERS,"\"\"",TERMINAL(3));
NEXTCASEONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_Primitives_20_Data_2F_Get_20_Library_20_ID_case_1_local_4_case_1_local_4_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Primitives_20_Data_2F_Get_20_Library_20_ID_case_1_local_4_case_1_local_4_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Name_20_As_20_String,1,1,TERMINAL(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Primitives_20_Data_2F_Get_20_Library_20_ID_case_1_local_4_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Primitives_20_Data_2F_Get_20_Library_20_ID_case_1_local_4_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Primitives_20_Data_2F_Get_20_Library_20_ID_case_1_local_4_case_1_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
if(vpx_method_Primitives_20_Data_2F_Get_20_Library_20_ID_case_1_local_4_case_1_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Primitives_20_Data_2F_Get_20_Library_20_ID_case_1_local_4_case_1_local_4_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Primitives_20_Data_2F_Get_20_Library_20_ID_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Primitives_20_Data_2F_Get_20_Library_20_ID_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(3)
INPUT(0,0)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_CF_20_Bundle,1,1,NONE,ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Create_20_From_20_FSRef,2,0,TERMINAL(1),TERMINAL(0));

result = vpx_method_Primitives_20_Data_2F_Get_20_Library_20_ID_case_1_local_4_case_1_local_4(PARAMETERS,TERMINAL(1),TERMINAL(0),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Dispose,1,0,TERMINAL(1));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASEWITHNONE(3)
}

enum opTrigger vpx_method_Primitives_20_Data_2F_Get_20_Library_20_ID_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Primitives_20_Data_2F_Get_20_Library_20_ID_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_File,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
NEXTCASEONSUCCESS

result = vpx_method_Primitives_20_Data_2F_Get_20_Library_20_ID_case_1_local_4(PARAMETERS,TERMINAL(2),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_Primitives_20_Data_2F_Get_20_Library_20_ID_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Primitives_20_Data_2F_Get_20_Library_20_ID_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Name,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Primitives_20_Data_2F_Get_20_Library_20_ID(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Primitives_20_Data_2F_Get_20_Library_20_ID_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Primitives_20_Data_2F_Get_20_Library_20_ID_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Primitives_20_Data_2F_Get_20_Link_20_Frameworks_case_1_local_4_case_1_local_4_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Primitives_20_Data_2F_Get_20_Link_20_Frameworks_case_1_local_4_case_1_local_4_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_external_3F_,1,0,TERMINAL(0));
FAILONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_from_2D_pointer,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"0",TERMINAL(1));
FAILONSUCCESS

result = vpx_constant(PARAMETERS,"__CFString",ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_set_2D_external_2D_type,2,1,TERMINAL(0),TERMINAL(2),ROOT(3));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Primitives_20_Data_2F_Get_20_Link_20_Frameworks_case_1_local_4_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Primitives_20_Data_2F_Get_20_Link_20_Frameworks_case_1_local_4_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"MartenLinkFrameworks",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Value_20_For_20_Info_20_Dictionary_20_Key,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_method_Primitives_20_Data_2F_Get_20_Link_20_Frameworks_case_1_local_4_case_1_local_4_case_1_local_4(PARAMETERS,TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_method_From_20_CFType(PARAMETERS,TERMINAL(2),ROOT(3));
NEXTCASEONFAILURE

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
NEXTCASEONSUCCESS

result = vpx_method_Default_20_List(PARAMETERS,TERMINAL(3),ROOT(4));

result = vpx_match(PARAMETERS,"( )",TERMINAL(4));
NEXTCASEONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Primitives_20_Data_2F_Get_20_Link_20_Frameworks_case_1_local_4_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Primitives_20_Data_2F_Get_20_Link_20_Frameworks_case_1_local_4_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( )",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Primitives_20_Data_2F_Get_20_Link_20_Frameworks_case_1_local_4_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Primitives_20_Data_2F_Get_20_Link_20_Frameworks_case_1_local_4_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Primitives_20_Data_2F_Get_20_Link_20_Frameworks_case_1_local_4_case_1_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Primitives_20_Data_2F_Get_20_Link_20_Frameworks_case_1_local_4_case_1_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Primitives_20_Data_2F_Get_20_Link_20_Frameworks_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Primitives_20_Data_2F_Get_20_Link_20_Frameworks_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(3)
INPUT(0,0)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_CF_20_Bundle,1,1,NONE,ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Create_20_From_20_FSRef,2,0,TERMINAL(1),TERMINAL(0));

result = vpx_method_Primitives_20_Data_2F_Get_20_Link_20_Frameworks_case_1_local_4_case_1_local_4(PARAMETERS,TERMINAL(1),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Dispose,1,0,TERMINAL(1));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASEWITHNONE(3)
}

enum opTrigger vpx_method_Primitives_20_Data_2F_Get_20_Link_20_Frameworks_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Primitives_20_Data_2F_Get_20_Link_20_Frameworks_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_File,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
NEXTCASEONSUCCESS

result = vpx_method_Primitives_20_Data_2F_Get_20_Link_20_Frameworks_case_1_local_4(PARAMETERS,TERMINAL(2),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_Primitives_20_Data_2F_Get_20_Link_20_Frameworks_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Primitives_20_Data_2F_Get_20_Link_20_Frameworks_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( )",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Primitives_20_Data_2F_Get_20_Link_20_Frameworks(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Primitives_20_Data_2F_Get_20_Link_20_Frameworks_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Primitives_20_Data_2F_Get_20_Link_20_Frameworks_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Primitives_20_Data_2F_Get_20_Link_20_Headers_case_1_local_4_case_1_local_4_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Primitives_20_Data_2F_Get_20_Link_20_Headers_case_1_local_4_case_1_local_4_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_external_3F_,1,0,TERMINAL(0));
FAILONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_from_2D_pointer,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"0",TERMINAL(1));
FAILONSUCCESS

result = vpx_constant(PARAMETERS,"__CFString",ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_set_2D_external_2D_type,2,1,TERMINAL(0),TERMINAL(2),ROOT(3));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Primitives_20_Data_2F_Get_20_Link_20_Headers_case_1_local_4_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Primitives_20_Data_2F_Get_20_Link_20_Headers_case_1_local_4_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"MartenLinkHeaders",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Value_20_For_20_Info_20_Dictionary_20_Key,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_method_Primitives_20_Data_2F_Get_20_Link_20_Headers_case_1_local_4_case_1_local_4_case_1_local_4(PARAMETERS,TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_method_From_20_CFType(PARAMETERS,TERMINAL(2),ROOT(3));
NEXTCASEONFAILURE

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
NEXTCASEONSUCCESS

result = vpx_method_Default_20_List(PARAMETERS,TERMINAL(3),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Primitives_20_Data_2F_Get_20_Link_20_Headers_case_1_local_4_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Primitives_20_Data_2F_Get_20_Link_20_Headers_case_1_local_4_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( )",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Primitives_20_Data_2F_Get_20_Link_20_Headers_case_1_local_4_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Primitives_20_Data_2F_Get_20_Link_20_Headers_case_1_local_4_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Primitives_20_Data_2F_Get_20_Link_20_Headers_case_1_local_4_case_1_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Primitives_20_Data_2F_Get_20_Link_20_Headers_case_1_local_4_case_1_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Primitives_20_Data_2F_Get_20_Link_20_Headers_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Primitives_20_Data_2F_Get_20_Link_20_Headers_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(3)
INPUT(0,0)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_CF_20_Bundle,1,1,NONE,ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Create_20_From_20_FSRef,2,0,TERMINAL(1),TERMINAL(0));

result = vpx_method_Primitives_20_Data_2F_Get_20_Link_20_Headers_case_1_local_4_case_1_local_4(PARAMETERS,TERMINAL(1),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Dispose,1,0,TERMINAL(1));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASEWITHNONE(3)
}

enum opTrigger vpx_method_Primitives_20_Data_2F_Get_20_Link_20_Headers_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Primitives_20_Data_2F_Get_20_Link_20_Headers_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_File,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
NEXTCASEONSUCCESS

result = vpx_method_Primitives_20_Data_2F_Get_20_Link_20_Headers_case_1_local_4(PARAMETERS,TERMINAL(2),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_Primitives_20_Data_2F_Get_20_Link_20_Headers_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Primitives_20_Data_2F_Get_20_Link_20_Headers_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( )",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Primitives_20_Data_2F_Get_20_Link_20_Headers(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Primitives_20_Data_2F_Get_20_Link_20_Headers_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Primitives_20_Data_2F_Get_20_Link_20_Headers_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Primitives_20_Data_2F_Get_20_Link_20_Is_20_Private_3F__case_1_local_4_case_1_local_4_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Primitives_20_Data_2F_Get_20_Link_20_Is_20_Private_3F__case_1_local_4_case_1_local_4_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_external_3F_,1,0,TERMINAL(0));
FAILONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_from_2D_pointer,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"0",TERMINAL(1));
FAILONSUCCESS

result = vpx_constant(PARAMETERS,"__CFString",ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_set_2D_external_2D_type,2,1,TERMINAL(0),TERMINAL(2),ROOT(3));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Primitives_20_Data_2F_Get_20_Link_20_Is_20_Private_3F__case_1_local_4_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Primitives_20_Data_2F_Get_20_Link_20_Is_20_Private_3F__case_1_local_4_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"MartenLinkIsPrivate",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Value_20_For_20_Info_20_Dictionary_20_Key,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_method_Primitives_20_Data_2F_Get_20_Link_20_Is_20_Private_3F__case_1_local_4_case_1_local_4_case_1_local_4(PARAMETERS,TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_method_From_20_CFType(PARAMETERS,TERMINAL(2),ROOT(3));
NEXTCASEONFAILURE

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
NEXTCASEONSUCCESS

result = vpx_method_Coerce_20_Boolean(PARAMETERS,TERMINAL(3),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Primitives_20_Data_2F_Get_20_Link_20_Is_20_Private_3F__case_1_local_4_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Primitives_20_Data_2F_Get_20_Link_20_Is_20_Private_3F__case_1_local_4_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"FALSE",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Primitives_20_Data_2F_Get_20_Link_20_Is_20_Private_3F__case_1_local_4_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Primitives_20_Data_2F_Get_20_Link_20_Is_20_Private_3F__case_1_local_4_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Primitives_20_Data_2F_Get_20_Link_20_Is_20_Private_3F__case_1_local_4_case_1_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Primitives_20_Data_2F_Get_20_Link_20_Is_20_Private_3F__case_1_local_4_case_1_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Primitives_20_Data_2F_Get_20_Link_20_Is_20_Private_3F__case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Primitives_20_Data_2F_Get_20_Link_20_Is_20_Private_3F__case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(3)
INPUT(0,0)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_CF_20_Bundle,1,1,NONE,ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Create_20_From_20_FSRef,2,0,TERMINAL(1),TERMINAL(0));

result = vpx_method_Primitives_20_Data_2F_Get_20_Link_20_Is_20_Private_3F__case_1_local_4_case_1_local_4(PARAMETERS,TERMINAL(1),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Dispose,1,0,TERMINAL(1));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASEWITHNONE(3)
}

enum opTrigger vpx_method_Primitives_20_Data_2F_Get_20_Link_20_Is_20_Private_3F__case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Primitives_20_Data_2F_Get_20_Link_20_Is_20_Private_3F__case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_File,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
NEXTCASEONSUCCESS

result = vpx_method_Primitives_20_Data_2F_Get_20_Link_20_Is_20_Private_3F__case_1_local_4(PARAMETERS,TERMINAL(2),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_Primitives_20_Data_2F_Get_20_Link_20_Is_20_Private_3F__case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Primitives_20_Data_2F_Get_20_Link_20_Is_20_Private_3F__case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"FALSE",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Primitives_20_Data_2F_Get_20_Link_20_Is_20_Private_3F_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Primitives_20_Data_2F_Get_20_Link_20_Is_20_Private_3F__case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Primitives_20_Data_2F_Get_20_Link_20_Is_20_Private_3F__case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Primitives_20_Data_2F_Get_20_Compile_20_Requires_20_ObjC_3F__case_1_local_4_case_1_local_4_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Primitives_20_Data_2F_Get_20_Compile_20_Requires_20_ObjC_3F__case_1_local_4_case_1_local_4_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_external_3F_,1,0,TERMINAL(0));
FAILONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_from_2D_pointer,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"0",TERMINAL(1));
FAILONSUCCESS

result = vpx_constant(PARAMETERS,"__CFString",ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_set_2D_external_2D_type,2,1,TERMINAL(0),TERMINAL(2),ROOT(3));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Primitives_20_Data_2F_Get_20_Compile_20_Requires_20_ObjC_3F__case_1_local_4_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Primitives_20_Data_2F_Get_20_Compile_20_Requires_20_ObjC_3F__case_1_local_4_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"MartenCompileRequiresObjC",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Value_20_For_20_Info_20_Dictionary_20_Key,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_method_Primitives_20_Data_2F_Get_20_Compile_20_Requires_20_ObjC_3F__case_1_local_4_case_1_local_4_case_1_local_4(PARAMETERS,TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_method_From_20_CFType(PARAMETERS,TERMINAL(2),ROOT(3));
NEXTCASEONFAILURE

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
NEXTCASEONSUCCESS

result = vpx_method_Coerce_20_Boolean(PARAMETERS,TERMINAL(3),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Primitives_20_Data_2F_Get_20_Compile_20_Requires_20_ObjC_3F__case_1_local_4_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Primitives_20_Data_2F_Get_20_Compile_20_Requires_20_ObjC_3F__case_1_local_4_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"FALSE",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Primitives_20_Data_2F_Get_20_Compile_20_Requires_20_ObjC_3F__case_1_local_4_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Primitives_20_Data_2F_Get_20_Compile_20_Requires_20_ObjC_3F__case_1_local_4_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Primitives_20_Data_2F_Get_20_Compile_20_Requires_20_ObjC_3F__case_1_local_4_case_1_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Primitives_20_Data_2F_Get_20_Compile_20_Requires_20_ObjC_3F__case_1_local_4_case_1_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Primitives_20_Data_2F_Get_20_Compile_20_Requires_20_ObjC_3F__case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Primitives_20_Data_2F_Get_20_Compile_20_Requires_20_ObjC_3F__case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(3)
INPUT(0,0)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_CF_20_Bundle,1,1,NONE,ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Create_20_From_20_FSRef,2,0,TERMINAL(1),TERMINAL(0));

result = vpx_method_Primitives_20_Data_2F_Get_20_Compile_20_Requires_20_ObjC_3F__case_1_local_4_case_1_local_4(PARAMETERS,TERMINAL(1),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Dispose,1,0,TERMINAL(1));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASEWITHNONE(3)
}

enum opTrigger vpx_method_Primitives_20_Data_2F_Get_20_Compile_20_Requires_20_ObjC_3F__case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Primitives_20_Data_2F_Get_20_Compile_20_Requires_20_ObjC_3F__case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_File,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
NEXTCASEONSUCCESS

result = vpx_method_Primitives_20_Data_2F_Get_20_Compile_20_Requires_20_ObjC_3F__case_1_local_4(PARAMETERS,TERMINAL(2),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_Primitives_20_Data_2F_Get_20_Compile_20_Requires_20_ObjC_3F__case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Primitives_20_Data_2F_Get_20_Compile_20_Requires_20_ObjC_3F__case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"FALSE",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Primitives_20_Data_2F_Get_20_Compile_20_Requires_20_ObjC_3F_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Primitives_20_Data_2F_Get_20_Compile_20_Requires_20_ObjC_3F__case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Primitives_20_Data_2F_Get_20_Compile_20_Requires_20_ObjC_3F__case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

/* Stop Universals */



Nat4 VPLC_VPL_20_Data_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_VPL_20_Data_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 138 403 } */
	tempAttribute = attribute_add("Parent",tempClass,NULL,environment);
	tempAttribute = attribute_add("Frame",tempClass,tempAttribute_VPL_20_Data_2F_Frame,environment);
	tempAttribute = attribute_add("List",tempClass,tempAttribute_VPL_20_Data_2F_List,environment);
	tempAttribute = attribute_add("Helper Name",tempClass,tempAttribute_VPL_20_Data_2F_Helper_20_Name,environment);
	tempAttribute = attribute_add("Controller",tempClass,NULL,environment);
	tempAttribute = attribute_add("Attachments",tempClass,NULL,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"List Data");
	return kNOERROR;
}

/* Start Universals: { 60 60 }{ 200 300 } */
enum opTrigger vpx_method_VPL_20_Data_2F_Get_20_Project_20_Data_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_VPL_20_Data_2F_Get_20_Project_20_Data_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(8)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP__28_length_29_,1,1,TERMINAL(2),ROOT(3));

result = vpx_match(PARAMETERS,"1",TERMINAL(3));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,1,TERMINAL(2),ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(4),ROOT(5),ROOT(6));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(6));
NEXTCASEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Project_20_Data,1,1,TERMINAL(6),ROOT(7));

result = kSuccess;

OUTPUT(0,TERMINAL(7))
FOOTER(8)
}

enum opTrigger vpx_method_VPL_20_Data_2F_Get_20_Project_20_Data_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_VPL_20_Data_2F_Get_20_Project_20_Data_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_VPL_20_Data_2F_Get_20_Project_20_Data(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_VPL_20_Data_2F_Get_20_Project_20_Data_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_VPL_20_Data_2F_Get_20_Project_20_Data_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_VPL_20_Data_2F_Get_20_Section_20_Data(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_VPL_20_Data_2F_Get_20_URL(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"///\"",ROOT(1));

result = vpx_persistent(PARAMETERS,kVPXValue_URL_20_Prefix,0,1,ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(2),TERMINAL(1),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_VPL_20_Data_2F_Get_20_Projects_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_VPL_20_Data_2F_Get_20_Projects_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
NEXTCASEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Project_20_Data,1,1,TERMINAL(2),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_VPL_20_Data_2F_Get_20_Projects_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_VPL_20_Data_2F_Get_20_Projects_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

OUTPUT(0,NONE)
FOOTERWITHNONE(1)
}

enum opTrigger vpx_method_VPL_20_Data_2F_Get_20_Projects_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_VPL_20_Data_2F_Get_20_Projects_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_VPL_20_Data_2F_Get_20_Projects_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_VPL_20_Data_2F_Get_20_Projects_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_VPL_20_Data_2F_Get_20_Projects(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(0),ROOT(1),ROOT(2));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(2))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_VPL_20_Data_2F_Get_20_Projects_case_1_local_3(PARAMETERS,LIST(2),ROOT(3));
LISTROOT(3,0)
REPEATFINISH
LISTROOTFINISH(3,0)
LISTROOTEND
} else {
ROOTEMPTY(3)
}

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_VPL_20_Data_2F_Fast_20_Quit(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(1)
}

/* Stop Universals */



Nat4 VPLC_Resource_20_File_20_Data_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Resource_20_File_20_Data_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 200 300 } */
	tempAttribute = attribute_add("Owner",tempClass,NULL,environment);
	tempAttribute = attribute_add("Name",tempClass,tempAttribute_Resource_20_File_20_Data_2F_Name,environment);
	tempAttribute = attribute_add("File",tempClass,NULL,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"Helper Data");
	return kNOERROR;
}

/* Start Universals: { 424 483 }{ 302 302 } */
enum opTrigger vpx_method_Resource_20_File_20_Data_2F_Close(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = vpx_set(PARAMETERS,kVPXValue_File,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_call_context_super_method(PARAMETERS,kVPXMethod_Close,1,0,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Resource_20_File_20_Data_2F_Make_20_Dirty_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Resource_20_File_20_Data_2F_Make_20_Dirty_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Send_20_Refresh,1,0,TERMINAL(0));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Project_20_Data,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
NEXTCASEONSUCCESS

result = vpx_get(PARAMETERS,kVPXValue_Dirty,TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_match(PARAMETERS,"FALSE",TERMINAL(3));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"TRUE",ROOT(4));

result = vpx_set(PARAMETERS,kVPXValue_Dirty,TERMINAL(2),TERMINAL(4),ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Send_20_Refresh,1,0,TERMINAL(5));

result = kSuccess;

FOOTER(6)
}

enum opTrigger vpx_method_Resource_20_File_20_Data_2F_Make_20_Dirty_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Resource_20_File_20_Data_2F_Make_20_Dirty_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_Resource_20_File_20_Data_2F_Make_20_Dirty(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Resource_20_File_20_Data_2F_Make_20_Dirty_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Resource_20_File_20_Data_2F_Make_20_Dirty_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Resource_20_File_20_Data_2F_Remove_20_Self(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_File_20_Delete_20_Resource,1,0,TERMINAL(0));

result = vpx_call_context_super_method(PARAMETERS,kVPXMethod_Remove_20_Self,1,0,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Resource_20_File_20_Data_2F_Copy_20_Original(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Name_20_As_20_String,1,1,TERMINAL(1),ROOT(3));

result = vpx_set(PARAMETERS,kVPXValue_Name,TERMINAL(0),TERMINAL(3),ROOT(4));

result = vpx_set(PARAMETERS,kVPXValue_File,TERMINAL(4),TERMINAL(1),ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_File_20_Update_20_Resource,2,0,TERMINAL(5),TERMINAL(2));
TERMINATEONFAILURE

result = kSuccess;

FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Resource_20_File_20_Data_2F_Get_20_Resource_20_FSRef_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Resource_20_File_20_Data_2F_Get_20_Resource_20_FSRef_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(1));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Resource_20_File_20_Data_2F_Get_20_Resource_20_FSRef_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Resource_20_File_20_Data_2F_Get_20_Resource_20_FSRef_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Project_20_Data,1,1,TERMINAL(0),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
FAILONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Resource_20_File_20_Data_2F_Get_20_Resource_20_FSRef_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Resource_20_File_20_Data_2F_Get_20_Resource_20_FSRef_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Resource_20_File_20_Data_2F_Get_20_Resource_20_FSRef_case_1_local_2_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Resource_20_File_20_Data_2F_Get_20_Resource_20_FSRef_case_1_local_2_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Resource_20_File_20_Data_2F_Get_20_Resource_20_FSRef_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Resource_20_File_20_Data_2F_Get_20_Resource_20_FSRef_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(11)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(2));

PUTPOINTER(__CFURL,*,CFURLCreateFromFSRef( GETCONSTPOINTER(__CFAllocator,*,TERMINAL(2)),GETCONSTPOINTER(FSRef,*,TERMINAL(0))),3);
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
FAILONSUCCESS

PUTPOINTER(__CFBundle,*,CFBundleCreate( GETCONSTPOINTER(__CFAllocator,*,TERMINAL(2)),GETCONSTPOINTER(__CFURL,*,TERMINAL(3))),4);
result = kSuccess;

CFRelease( GETCONSTPOINTER(void,*,TERMINAL(3)));
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(4));
FAILONSUCCESS

PUTPOINTER(__CFURL,*,CFBundleCopyResourcesDirectoryURL( GETPOINTER(0,__CFBundle,*,ROOT(6),TERMINAL(4))),5);
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(5));
FAILONSUCCESS

result = vpx_constant(PARAMETERS,"FALSE",ROOT(7));

PUTPOINTER(__CFURL,*,CFURLCreateCopyAppendingPathComponent( GETCONSTPOINTER(__CFAllocator,*,TERMINAL(2)),GETCONSTPOINTER(__CFURL,*,TERMINAL(5)),GETCONSTPOINTER(__CFString,*,TERMINAL(1)),GETINTEGER(TERMINAL(7))),8);
result = kSuccess;

CFRelease( GETCONSTPOINTER(void,*,TERMINAL(5)));
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(8));
FAILONSUCCESS

PUTINTEGER(CFURLGetFSRef( GETCONSTPOINTER(__CFURL,*,TERMINAL(8)),GETPOINTER(144,FSRef,*,ROOT(10),NONE)),9);
result = kSuccess;

CFRelease( GETCONSTPOINTER(void,*,TERMINAL(8)));
result = kSuccess;

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(9));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(10))
FOOTERSINGLECASEWITHNONE(11)
}

enum opTrigger vpx_method_Resource_20_File_20_Data_2F_Get_20_Resource_20_FSRef(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(12)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Resource_20_File_20_Data_2F_Get_20_Resource_20_FSRef_case_1_local_2(PARAMETERS,TERMINAL(0),TERMINAL(1),ROOT(2));
FAILONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(4));
FAILONSUCCESS

result = vpx_get(PARAMETERS,kVPXValue_File,TERMINAL(4),ROOT(5),ROOT(6));

result = vpx_get(PARAMETERS,kVPXValue_Name,TERMINAL(0),ROOT(7),ROOT(8));

result = vpx_method_To_20_CFStringRef(PARAMETERS,TERMINAL(8),ROOT(9));

result = vpx_method_Resource_20_File_20_Data_2F_Get_20_Resource_20_FSRef_case_1_local_8(PARAMETERS,TERMINAL(6),TERMINAL(9),ROOT(10));
FAILONFAILURE

result = vpx_method_New_20_FSRef(PARAMETERS,TERMINAL(10),ROOT(11));
FAILONFAILURE

CFRelease( GETCONSTPOINTER(void,*,TERMINAL(9)));
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(11))
FOOTERSINGLECASE(12)
}

enum opTrigger vpx_method_Resource_20_File_20_Data_2F_File_20_Delete_20_Resource(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADERWITHNONE(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Resource_20_FSRef,2,1,TERMINAL(0),NONE,ROOT(1));
TERMINATEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(1));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Delete,1,0,TERMINAL(1));
CONTINUEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Close,1,0,TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASEWITHNONE(2)
}

enum opTrigger vpx_method_Resource_20_File_20_Data_2F_File_20_Open_20_Resource_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Resource_20_File_20_Data_2F_File_20_Open_20_Resource_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADERWITHNONE(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Resource_20_FSRef,2,1,TERMINAL(0),NONE,ROOT(1));
TERMINATEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(1));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod__7E_LSOpenFSRef,1,0,TERMINAL(1));
CONTINUEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Close,1,0,TERMINAL(1));

result = kSuccess;

FOOTERWITHNONE(2)
}

enum opTrigger vpx_method_Resource_20_File_20_Data_2F_File_20_Open_20_Resource_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Resource_20_File_20_Data_2F_File_20_Open_20_Resource_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_File,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(2));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod__7E_LSOpenFSRef,1,0,TERMINAL(2));
CONTINUEONFAILURE

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_Resource_20_File_20_Data_2F_File_20_Open_20_Resource(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Resource_20_File_20_Data_2F_File_20_Open_20_Resource_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Resource_20_File_20_Data_2F_File_20_Open_20_Resource_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Resource_20_File_20_Data_2F_File_20_Update_20_Resource_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Resource_20_File_20_Data_2F_File_20_Update_20_Resource_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(1));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Resource_20_File_20_Data_2F_File_20_Update_20_Resource_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Resource_20_File_20_Data_2F_File_20_Update_20_Resource_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Project_20_Data,1,1,TERMINAL(0),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
FAILONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Resource_20_File_20_Data_2F_File_20_Update_20_Resource_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Resource_20_File_20_Data_2F_File_20_Update_20_Resource_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Resource_20_File_20_Data_2F_File_20_Update_20_Resource_case_1_local_2_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Resource_20_File_20_Data_2F_File_20_Update_20_Resource_case_1_local_2_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Resource_20_File_20_Data_2F_File_20_Update_20_Resource_case_1_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Resource_20_File_20_Data_2F_File_20_Update_20_Resource_case_1_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(8)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

PUTPOINTER(__CFURL,*,CFURLCreateFromFSRef( GETCONSTPOINTER(__CFAllocator,*,TERMINAL(1)),GETCONSTPOINTER(FSRef,*,TERMINAL(0))),2);
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
FAILONSUCCESS

PUTPOINTER(__CFBundle,*,CFBundleCreate( GETCONSTPOINTER(__CFAllocator,*,TERMINAL(1)),GETCONSTPOINTER(__CFURL,*,TERMINAL(2))),3);
result = kSuccess;

CFRelease( GETCONSTPOINTER(void,*,TERMINAL(2)));
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
FAILONSUCCESS

PUTPOINTER(__CFURL,*,CFBundleCopyResourcesDirectoryURL( GETPOINTER(0,__CFBundle,*,ROOT(5),TERMINAL(3))),4);
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(4));
FAILONSUCCESS

PUTINTEGER(CFURLGetFSRef( GETCONSTPOINTER(__CFURL,*,TERMINAL(4)),GETPOINTER(144,FSRef,*,ROOT(7),NONE)),6);
result = kSuccess;

CFRelease( GETCONSTPOINTER(void,*,TERMINAL(4)));
result = kSuccess;

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(6));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(7))
FOOTERSINGLECASEWITHNONE(8)
}

enum opTrigger vpx_method_Resource_20_File_20_Data_2F_File_20_Update_20_Resource(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(12)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Resource_20_File_20_Data_2F_File_20_Update_20_Resource_case_1_local_2(PARAMETERS,TERMINAL(0),TERMINAL(1),ROOT(2));
FAILONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(4));
FAILONSUCCESS

result = vpx_get(PARAMETERS,kVPXValue_File,TERMINAL(0),ROOT(5),ROOT(6));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(6));
FAILONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_FSRef,1,1,TERMINAL(6),ROOT(7));
FAILONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_File,TERMINAL(4),ROOT(8),ROOT(9));

result = vpx_method_Resource_20_File_20_Data_2F_File_20_Update_20_Resource_case_1_local_9(PARAMETERS,TERMINAL(9),ROOT(10));
FAILONFAILURE

result = vpx_constant(PARAMETERS,"Replace",ROOT(11));

result = vpx_call_primitive(PARAMETERS,VPLP_copy_2D_object,3,0,TERMINAL(7),TERMINAL(10),TERMINAL(11));
FAILONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Resources_20_Changed,1,0,TERMINAL(4));

result = kSuccess;

FOOTERSINGLECASE(12)
}

enum opTrigger vpx_method_Resource_20_File_20_Data_2F_Handle_20_Item_20_Click(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_File_20_Open_20_Resource,1,0,TERMINAL(0));
TERMINATEONFAILURE

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Resource_20_File_20_Data_2F_Set_20_Name_case_1_local_3_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Resource_20_File_20_Data_2F_Set_20_Name_case_1_local_3_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADERWITHNONE(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Resource_20_FSRef,2,1,TERMINAL(0),NONE,ROOT(2));
TERMINATEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(2));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Rename,2,0,TERMINAL(2),TERMINAL(1));
CONTINUEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Close,1,0,TERMINAL(2));

result = kSuccess;

FOOTERSINGLECASEWITHNONE(3)
}

enum opTrigger vpx_method_Resource_20_File_20_Data_2F_Set_20_Name_case_1_local_3_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Resource_20_File_20_Data_2F_Set_20_Name_case_1_local_3_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_File,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(3));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Rename,2,0,TERMINAL(3),TERMINAL(1));
CONTINUEONFAILURE

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Resource_20_File_20_Data_2F_Set_20_Name_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Resource_20_File_20_Data_2F_Set_20_Name_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Resource_20_File_20_Data_2F_Set_20_Name_case_1_local_3_case_1_local_2(PARAMETERS,TERMINAL(0),TERMINAL(1));

result = vpx_method_Resource_20_File_20_Data_2F_Set_20_Name_case_1_local_3_case_1_local_3(PARAMETERS,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Resource_20_File_20_Data_2F_Set_20_Name(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_context_super_method(PARAMETERS,kVPXMethod_Set_20_Name,2,0,TERMINAL(0),TERMINAL(1));

result = vpx_method_Resource_20_File_20_Data_2F_Set_20_Name_case_1_local_3(PARAMETERS,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Resource_20_File_20_Data_2F_Have_20_Row_20_Values_3F_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"TRUE",ROOT(1));

result = vpx_constant(PARAMETERS,"NULL",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
OUTPUT(1,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Resource_20_File_20_Data_2F_Get_20_File(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_File,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Resource_20_File_20_Data_2F_Set_20_File(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_File,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Resource_20_File_20_Data_2F_Can_20_Create_3F_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;
FAILONSUCCESS

FOOTERSINGLECASE(1)
}

/* Stop Universals */






Nat4	loadClasses_MyHelperData(V_Environment environment);
Nat4	loadClasses_MyHelperData(V_Environment environment)
{
	V_Class result = NULL;

	result = class_new("Persistent Data",environment);
	if(result == NULL) return kERROR;
	VPLC_Persistent_20_Data_class_load(result,environment);
	result = class_new("Primitive Data",environment);
	if(result == NULL) return kERROR;
	VPLC_Primitive_20_Data_class_load(result,environment);
	result = class_new("Primitives Data",environment);
	if(result == NULL) return kERROR;
	VPLC_Primitives_20_Data_class_load(result,environment);
	result = class_new("VPL Data",environment);
	if(result == NULL) return kERROR;
	VPLC_VPL_20_Data_class_load(result,environment);
	result = class_new("Resource File Data",environment);
	if(result == NULL) return kERROR;
	VPLC_Resource_20_File_20_Data_class_load(result,environment);
	return kNOERROR;

}

Nat4	loadUniversals_MyHelperData(V_Environment environment);
Nat4	loadUniversals_MyHelperData(V_Environment environment)
{
	V_Method result = NULL;

	result = method_new("Between Strings",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Between_20_Strings,NULL);

	result = method_new("C Action To VPL Action",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_C_20_Action_20_To_20_VPL_20_Action,NULL);

	result = method_new("C Boolean To VPL Boolean",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_C_20_Boolean_20_To_20_VPL_20_Boolean,NULL);

	result = method_new("C Control To VPL Control",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_C_20_Control_20_To_20_VPL_20_Control,NULL);

	result = method_new("C Mode To VPL Type",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_C_20_Mode_20_To_20_VPL_20_Type,NULL);

	result = method_new("C String To VPL String",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_C_20_String_20_To_20_VPL_20_String,NULL);

	result = method_new("Frame Text",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Frame_20_Text,NULL);

	result = method_new("Frame To Text",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Frame_20_To_20_Text,NULL);

	result = method_new("Mangle Name",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Mangle_20_Name,NULL);

	result = method_new("Parse Frame",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Parse_20_Frame,NULL);

	result = method_new("Parse Point",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Parse_20_Point,NULL);

	result = method_new("Prefix String",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Prefix_20_String,NULL);

	result = method_new("Sandwich Strings",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Sandwich_20_Strings,NULL);

	result = method_new("Slice String",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Slice_20_String,NULL);

	result = method_new("Trim Whitespace",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Trim_20_Whitespace,NULL);

	result = method_new("Unmangle Name",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Unmangle_20_Name,NULL);

	result = method_new("VPL Action To C Action",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPL_20_Action_20_To_20_C_20_Action,NULL);

	result = method_new("VPL Boolean To C Boolean",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPL_20_Boolean_20_To_20_C_20_Boolean,NULL);

	result = method_new("VPL Control To C Control",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPL_20_Control_20_To_20_C_20_Control,NULL);

	result = method_new("VPL String To C String",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPL_20_String_20_To_20_C_20_String,NULL);

	result = method_new("VPL Text To C String",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPL_20_Text_20_To_20_C_20_String,NULL);

	result = method_new("In Last",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_In_20_Last,NULL);

	result = method_new("Get Line",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Get_20_Line,NULL);

	result = method_new("Unquoted In",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Unquoted_20_In,NULL);

	result = method_new("Quote String",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Quote_20_String,NULL);

	result = method_new("Strip Suffix",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Strip_20_Suffix,NULL);

	result = method_new("Get Export Mode Extension",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Get_20_Export_20_Mode_20_Extension,NULL);

	result = method_new("Get File Type Extension",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Get_20_File_20_Type_20_Extension,NULL);

	result = method_new("Persistent Data/Full Name",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Persistent_20_Data_2F_Full_20_Name,NULL);

	result = method_new("Persistent Data/Open",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Persistent_20_Data_2F_Open,NULL);

	result = method_new("Persistent Data/Close",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Persistent_20_Data_2F_Close,NULL);

	result = method_new("Persistent Data/Set Name",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Persistent_20_Data_2F_Set_20_Name,NULL);

	result = method_new("Persistent Data/Update Record",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Persistent_20_Data_2F_Update_20_Record,NULL);

	result = method_new("Persistent Data/Handle Item Click",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Persistent_20_Data_2F_Handle_20_Item_20_Click,NULL);

	result = method_new("Persistent Data/Get Direct Value",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Persistent_20_Data_2F_Get_20_Direct_20_Value,NULL);

	result = method_new("Persistent Data/Set Direct Value",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Persistent_20_Data_2F_Set_20_Direct_20_Value,NULL);

	result = method_new("Persistent Data/Update Value",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Persistent_20_Data_2F_Update_20_Value,NULL);

	result = method_new("Persistent Data/Set Value Address",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Persistent_20_Data_2F_Set_20_Value_20_Address,NULL);

	result = method_new("Persistent Data/Get Value Address",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Persistent_20_Data_2F_Get_20_Value_20_Address,NULL);

	result = method_new("Persistent Data/Set Value",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Persistent_20_Data_2F_Set_20_Value,NULL);

	result = method_new("Persistent Data/Get Value",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Persistent_20_Data_2F_Get_20_Value,NULL);

	result = method_new("Persistent Data/Set CPX Text",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Persistent_20_Data_2F_Set_20_CPX_20_Text,NULL);

	result = method_new("Persistent Data/Parse CPX Buffer",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Persistent_20_Data_2F_Parse_20_CPX_20_Buffer,NULL);

	result = method_new("Primitive Data/Get Project Data",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Primitive_20_Data_2F_Get_20_Project_20_Data,NULL);

	result = method_new("Primitive Data/H File Name",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Primitive_20_Data_2F_H_20_File_20_Name,NULL);

	result = method_new("Primitive Data/Handle Item Click",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Primitive_20_Data_2F_Handle_20_Item_20_Click,NULL);

	result = method_new("Primitive Data/Have Row Values?",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Primitive_20_Data_2F_Have_20_Row_20_Values_3F_,NULL);

	result = method_new("Primitive Data/Can Create?",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Primitive_20_Data_2F_Can_20_Create_3F_,NULL);

	result = method_new("Primitive Data/Can Delete?",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Primitive_20_Data_2F_Can_20_Delete_3F_,NULL);

	result = method_new("Primitive Data/Install Proxy",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Primitive_20_Data_2F_Install_20_Proxy,NULL);

	result = method_new("Primitive Data/AH Lookup Anchor",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Primitive_20_Data_2F_AH_20_Lookup_20_Anchor,NULL);

	result = method_new("Primitive Data/AH Create Anchor",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Primitive_20_Data_2F_AH_20_Create_20_Anchor,NULL);

	result = method_new("Primitives Data/Get Primitives",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Primitives_20_Data_2F_Get_20_Primitives,NULL);

	result = method_new("Primitives Data/Get Project Data",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Primitives_20_Data_2F_Get_20_Project_20_Data,NULL);

	result = method_new("Primitives Data/H File Name",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Primitives_20_Data_2F_H_20_File_20_Name,NULL);

	result = method_new("Primitives Data/Initialize Item Data",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Primitives_20_Data_2F_Initialize_20_Item_20_Data,NULL);

	result = method_new("Primitives Data/Make Dirty",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Primitives_20_Data_2F_Make_20_Dirty,NULL);

	result = method_new("Primitives Data/Have Row Values?",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Primitives_20_Data_2F_Have_20_Row_20_Values_3F_,NULL);

	result = method_new("Primitives Data/Install Proxy",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Primitives_20_Data_2F_Install_20_Proxy,NULL);

	result = method_new("Primitives Data/Get Name Singular",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Primitives_20_Data_2F_Get_20_Name_20_Singular,NULL);

	result = method_new("Primitives Data/Get File",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Primitives_20_Data_2F_Get_20_File,NULL);

	result = method_new("Primitives Data/Set File",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Primitives_20_Data_2F_Set_20_File,NULL);

	result = method_new("Primitives Data/Can Create?",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Primitives_20_Data_2F_Can_20_Create_3F_,NULL);

	result = method_new("Primitives Data/Create With FSRef",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Primitives_20_Data_2F_Create_20_With_20_FSRef,NULL);

	result = method_new("Primitives Data/Get Load Function Name",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Primitives_20_Data_2F_Get_20_Load_20_Function_20_Name,NULL);

	result = method_new("Primitives Data/Get Library ID",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Primitives_20_Data_2F_Get_20_Library_20_ID,NULL);

	result = method_new("Primitives Data/Get Link Frameworks",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Primitives_20_Data_2F_Get_20_Link_20_Frameworks,NULL);

	result = method_new("Primitives Data/Get Link Headers",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Primitives_20_Data_2F_Get_20_Link_20_Headers,NULL);

	result = method_new("Primitives Data/Get Link Is Private?",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Primitives_20_Data_2F_Get_20_Link_20_Is_20_Private_3F_,NULL);

	result = method_new("Primitives Data/Get Compile Requires ObjC?",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Primitives_20_Data_2F_Get_20_Compile_20_Requires_20_ObjC_3F_,NULL);

	result = method_new("VPL Data/Get Project Data",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPL_20_Data_2F_Get_20_Project_20_Data,NULL);

	result = method_new("VPL Data/Get Section Data",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPL_20_Data_2F_Get_20_Section_20_Data,NULL);

	result = method_new("VPL Data/Get URL",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPL_20_Data_2F_Get_20_URL,NULL);

	result = method_new("VPL Data/Get Projects",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPL_20_Data_2F_Get_20_Projects,NULL);

	result = method_new("VPL Data/Fast Quit",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPL_20_Data_2F_Fast_20_Quit,NULL);

	result = method_new("Resource File Data/Close",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Resource_20_File_20_Data_2F_Close,NULL);

	result = method_new("Resource File Data/Make Dirty",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Resource_20_File_20_Data_2F_Make_20_Dirty,NULL);

	result = method_new("Resource File Data/Remove Self",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Resource_20_File_20_Data_2F_Remove_20_Self,NULL);

	result = method_new("Resource File Data/Copy Original",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Resource_20_File_20_Data_2F_Copy_20_Original,NULL);

	result = method_new("Resource File Data/Get Resource FSRef",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Resource_20_File_20_Data_2F_Get_20_Resource_20_FSRef,NULL);

	result = method_new("Resource File Data/File Delete Resource",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Resource_20_File_20_Data_2F_File_20_Delete_20_Resource,NULL);

	result = method_new("Resource File Data/File Open Resource",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Resource_20_File_20_Data_2F_File_20_Open_20_Resource,NULL);

	result = method_new("Resource File Data/File Update Resource",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Resource_20_File_20_Data_2F_File_20_Update_20_Resource,NULL);

	result = method_new("Resource File Data/Handle Item Click",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Resource_20_File_20_Data_2F_Handle_20_Item_20_Click,NULL);

	result = method_new("Resource File Data/Set Name",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Resource_20_File_20_Data_2F_Set_20_Name,NULL);

	result = method_new("Resource File Data/Have Row Values?",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Resource_20_File_20_Data_2F_Have_20_Row_20_Values_3F_,NULL);

	result = method_new("Resource File Data/Get File",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Resource_20_File_20_Data_2F_Get_20_File,NULL);

	result = method_new("Resource File Data/Set File",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Resource_20_File_20_Data_2F_Set_20_File,NULL);

	result = method_new("Resource File Data/Can Create?",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Resource_20_File_20_Data_2F_Can_20_Create_3F_,NULL);

	return kNOERROR;

}



Nat4	loadPersistents_MyHelperData(V_Environment environment);
Nat4	loadPersistents_MyHelperData(V_Environment environment)
{
	V_Value tempPersistent = NULL;
	V_Dictionary dictionary = environment->persistentsTable;

	return kNOERROR;

}

Nat4	load_MyHelperData(V_Environment environment);
Nat4	load_MyHelperData(V_Environment environment)
{

	loadClasses_MyHelperData(environment);
	loadUniversals_MyHelperData(environment);
	loadPersistents_MyHelperData(environment);
	return kNOERROR;

}

