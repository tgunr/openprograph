/* A VPL Section File */
/*

Debug.inl.c
Copyright: 2004 Andescotia LLC

*/

#include "MartenInlineProject.h"

enum opTrigger vpx_method_Debug_20_Init_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex);
enum opTrigger vpx_method_Debug_20_Init_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex)
{
HEADER(1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"*** Application Launched",ROOT(0));

result = vpx_call_primitive(PARAMETERS,VPLP_log_2D_error,1,0,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Debug_20_Init(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex)
{
HEADER(1)
result = kSuccess;

result = vpx_method_Debug_20_Init_case_1_local_2(PARAMETERS);

result = vpx_method_Debug_20_Detect_20_Verbosity(PARAMETERS);

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Debug_20_Detect_20_Verbosity_case_1_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Detect_20_Verbosity_case_1_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_test_2D_one_3F_,2,1,TERMINAL(1),TERMINAL(0),ROOT(3));

result = vpx_method_Boolean_20_To_20_Integer(PARAMETERS,TERMINAL(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP__2B2B_,2,1,TERMINAL(4),TERMINAL(2),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Debug_20_Detect_20_Verbosity_case_1_local_12(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Debug_20_Detect_20_Verbosity_case_1_local_12(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP__3D_,2,0,TERMINAL(0),TERMINAL(1));
TERMINATEONSUCCESS

result = vpx_method__22_Check_22_(PARAMETERS,TERMINAL(1),ROOT(2));

result = vpx_constant(PARAMETERS,"Debug Verbosity",ROOT(3));

result = vpx_method_Debug_20_OSError(PARAMETERS,TERMINAL(3),TERMINAL(2));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Debug_20_Detect_20_Verbosity(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex)
{
HEADER(9)
result = kSuccess;

PUTINTEGER(GetCurrentKeyModifiers(),0);
result = kSuccess;

result = vpx_extconstant(PARAMETERS,cmdKey,ROOT(1));

result = vpx_extconstant(PARAMETERS,controlKey,ROOT(2));

result = vpx_extconstant(PARAMETERS,shiftKey,ROOT(3));

result = vpx_extconstant(PARAMETERS,optionKey,ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,4,1,TERMINAL(1),TERMINAL(2),TERMINAL(3),TERMINAL(4),ROOT(5));

result = vpx_constant(PARAMETERS,"0",ROOT(6));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(5))) ){
REPEATBEGINWITHCOUNTER
LOOPTERMINALBEGIN(1)
LOOPTERMINAL(0,6,7)
result = vpx_method_Debug_20_Detect_20_Verbosity_case_1_local_9(PARAMETERS,LIST(5),TERMINAL(0),LOOP(0),ROOT(7));
REPEATFINISH
} else {
ROOTNULL(7,TERMINAL(6))
}

result = vpx_persistent(PARAMETERS,kVPXValue_appDEBUG_5F_VERBOSITY,0,1,ROOT(8));

result = vpx_persistent(PARAMETERS,kVPXValue_appDEBUG_5F_VERBOSITY,1,0,TERMINAL(7));

result = vpx_method_Debug_20_Detect_20_Verbosity_case_1_local_12(PARAMETERS,TERMINAL(8),TERMINAL(7));

result = kSuccess;

FOOTERSINGLECASE(9)
}

enum opTrigger vpx_method_Debug_20_OSError_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Debug_20_OSError_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_persistent(PARAMETERS,kVPXValue_appDEBUG_5F_VERBOSITY,0,1,ROOT(1));

result = vpx_match(PARAMETERS,"4",TERMINAL(1));
TERMINATEONSUCCESS

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(0));
FAILONSUCCESS

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Debug_20_OSError(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Debug_20_OSError_case_1_local_2(PARAMETERS,TERMINAL(1));
TERMINATEONFAILURE

result = vpx_method__22_Check_22_(PARAMETERS,TERMINAL(1),ROOT(2));

result = vpx_constant(PARAMETERS,"\": \"",ROOT(3));

result = vpx_method__22_Check_22_(PARAMETERS,TERMINAL(0),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,3,1,TERMINAL(4),TERMINAL(3),TERMINAL(2),ROOT(5));

result = vpx_method_Debug_20_Console(PARAMETERS,TERMINAL(5));

result = kSuccess;

FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Debug_20_Console_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Console_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
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

enum opTrigger vpx_method_Debug_20_Console_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Console_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_list_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_match(PARAMETERS,"( )",TERMINAL(0));
NEXTCASEONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(1)
}

enum opTrigger vpx_method_Debug_20_Console_case_1_local_2_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Console_case_1_local_2_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(0));
NEXTCASEONSUCCESS

result = vpx_match(PARAMETERS,"NONE",TERMINAL(0));
NEXTCASEONSUCCESS

result = vpx_match(PARAMETERS,"( )",TERMINAL(0));
NEXTCASEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_to_2D_string,1,1,TERMINAL(0),ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Debug_20_Console_case_1_local_2_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Console_case_1_local_2_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"\"",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Debug_20_Console_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Console_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Debug_20_Console_case_1_local_2_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_Debug_20_Console_case_1_local_2_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_Debug_20_Console_case_1_local_2_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Debug_20_Console_case_1_local_2_case_4(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Debug_20_Console(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Debug_20_Console_case_1_local_2(PARAMETERS,TERMINAL(0),ROOT(1));

result = vpx_method__28_Check_29_(PARAMETERS,TERMINAL(1),ROOT(2));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(2))) ){
REPEATBEGINWITHCOUNTER
result = vpx_call_primitive(PARAMETERS,VPLP_log_2D_error,1,0,LIST(2));
REPEATFINISH
} else {
}

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Debug_20_Finish_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex);
enum opTrigger vpx_method_Debug_20_Finish_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex)
{
HEADER(1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"*** Application terminated",ROOT(0));

result = vpx_call_primitive(PARAMETERS,VPLP_log_2D_error,1,0,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Debug_20_Finish(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex)
{
HEADER(1)
result = kSuccess;

result = vpx_method_Debug_20_Finish_case_1_local_2(PARAMETERS);

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Debug_20_Verbosity_20_Level_3F_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_persistent(PARAMETERS,kVPXValue_appDEBUG_5F_VERBOSITY,0,1,ROOT(1));

result = vpx_method_Default_20_Zero(PARAMETERS,TERMINAL(0),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP__3E3D_,2,0,TERMINAL(1),TERMINAL(2));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Debug_20_Result_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Result_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"0",TERMINAL(0));
NEXTCASEONSUCCESS

result = vpx_constant(PARAMETERS,"1",ROOT(1));

result = vpx_method_Replace_20_NULL(PARAMETERS,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Debug_20_Result_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Result_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(1)
}

enum opTrigger vpx_method_Debug_20_Result_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Result_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Debug_20_Result_case_1_local_2_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Debug_20_Result_case_1_local_2_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Debug_20_Result_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Result_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Error",ROOT(1));

result = vpx_method_Replace_20_NULL(PARAMETERS,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Debug_20_Result_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Result_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(2));

result = vpx_method_Replace_20_NULL(PARAMETERS,TERMINAL(0),TERMINAL(2),ROOT(3));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(4)
}

enum opTrigger vpx_method_Debug_20_Result_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Result_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method__22_Check_22_(PARAMETERS,TERMINAL(1),ROOT(2));

result = vpx_constant(PARAMETERS,"/",ROOT(3));

result = vpx_method__22_Check_22_(PARAMETERS,TERMINAL(0),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,3,1,TERMINAL(4),TERMINAL(3),TERMINAL(2),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTER(6)
}

enum opTrigger vpx_method_Debug_20_Result_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Result_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Debug_20_Result_case_1_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Debug_20_Result_case_1_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Debug_20_Result_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Debug_20_Result_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"NONE",TERMINAL(1));
NEXTCASEONSUCCESS

result = vpx_method_Debug_20_OSError(PARAMETERS,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Debug_20_Result_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Debug_20_Result_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Debug_20_Console(PARAMETERS,TERMINAL(0));

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Debug_20_Result_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Debug_20_Result_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Debug_20_Result_case_1_local_6_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Debug_20_Result_case_1_local_6_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Debug_20_Result(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_method_Debug_20_Result_case_1_local_2(PARAMETERS,TERMINAL(3),ROOT(4));

result = vpx_method_Debug_20_Verbosity_20_Level_3F_(PARAMETERS,TERMINAL(4),ROOT(5));
TERMINATEONFAILURE

result = vpx_method_Debug_20_Result_case_1_local_4(PARAMETERS,TERMINAL(1),ROOT(6));

result = vpx_method_Debug_20_Result_case_1_local_5(PARAMETERS,TERMINAL(0),TERMINAL(6),ROOT(7));

result = vpx_method_Debug_20_Result_case_1_local_6(PARAMETERS,TERMINAL(7),TERMINAL(2));

result = kSuccess;

FOOTERSINGLECASE(8)
}

enum opTrigger vpx_method_Debug_20_Value_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Value_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(0),ROOT(3));

result = vpx_constant(PARAMETERS,"type",ROOT(4));

result = vpx_method_Debug_20_Result(PARAMETERS,TERMINAL(1),TERMINAL(4),TERMINAL(3),TERMINAL(2));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Debug_20_Value_case_1_local_3_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Value_case_1_local_3_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"1",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"*",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Debug_20_Value_case_1_local_3_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Value_case_1_local_3_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"2",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"**",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Debug_20_Value_case_1_local_3_case_1_local_6_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Value_case_1_local_3_case_1_local_6_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"\"",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Debug_20_Value_case_1_local_3_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Debug_20_Value_case_1_local_3_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Debug_20_Value_case_1_local_3_case_1_local_6_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_Debug_20_Value_case_1_local_3_case_1_local_6_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Debug_20_Value_case_1_local_3_case_1_local_6_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Debug_20_Value_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3);
enum opTrigger vpx_method_Debug_20_Value_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3)
{
HEADER(16)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_match(PARAMETERS,"external",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_external_2D_type,1,1,TERMINAL(1),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_from_2D_pointer,1,1,TERMINAL(1),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_external_2D_level,1,1,TERMINAL(1),ROOT(6));

result = vpx_method_Debug_20_Value_case_1_local_3_case_1_local_6(PARAMETERS,TERMINAL(6),ROOT(7));

result = vpx_constant(PARAMETERS,"@",ROOT(8));

result = vpx_constant(PARAMETERS,"16",ROOT(9));

result = vpx_call_primitive(PARAMETERS,VPLP_to_2D_string,1,1,TERMINAL(5),ROOT(10));

result = vpx_constant(PARAMETERS,"10",ROOT(11));

result = vpx_call_primitive(PARAMETERS,VPLP_string_2D_to_2D_base,3,2,TERMINAL(10),TERMINAL(11),TERMINAL(9),ROOT(12),ROOT(13));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,4,1,TERMINAL(4),TERMINAL(7),TERMINAL(8),TERMINAL(10),ROOT(14));

result = vpx_constant(PARAMETERS,"\"\"",ROOT(15));

result = vpx_method_Debug_20_Result(PARAMETERS,TERMINAL(2),TERMINAL(15),TERMINAL(14),TERMINAL(3));

result = kSuccess;

FOOTER(16)
}

enum opTrigger vpx_method_Debug_20_Value_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3);
enum opTrigger vpx_method_Debug_20_Value_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_constant(PARAMETERS,"value",ROOT(4));

result = vpx_method_Debug_20_Result(PARAMETERS,TERMINAL(2),TERMINAL(4),TERMINAL(1),TERMINAL(3));

result = kSuccess;

FOOTER(5)
}

enum opTrigger vpx_method_Debug_20_Value_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3);
enum opTrigger vpx_method_Debug_20_Value_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Debug_20_Value_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3))
vpx_method_Debug_20_Value_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3);
return outcome;
}

enum opTrigger vpx_method_Debug_20_Value(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_method_Debug_20_Value_case_1_local_2(PARAMETERS,TERMINAL(1),TERMINAL(0),TERMINAL(2),ROOT(3));

result = vpx_method_Debug_20_Value_case_1_local_3(PARAMETERS,TERMINAL(3),TERMINAL(1),TERMINAL(0),TERMINAL(2));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Debug_20_Unimp(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Unimlemented Feature",ROOT(1));

result = vpx_method_Debug_20_OSError(PARAMETERS,TERMINAL(1),TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Run_20_Test_20_Tool_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Run_20_Test_20_Tool_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_prefix,2,2,TERMINAL(0),TERMINAL(1),ROOT(2),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Run_20_Test_20_Tool(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex)
{
HEADER(11)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_methods,0,1,ROOT(0));

result = vpx_constant(PARAMETERS,"\"TEST \"",ROOT(1));

result = vpx_constant(PARAMETERS,"prefix",ROOT(2));

result = vpx_method__2822_All_20_In_2229_(PARAMETERS,TERMINAL(0),TERMINAL(1),TERMINAL(2),ROOT(3));

result = vpx_constant(PARAMETERS,"Please choose a test method",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP__22_length_22_,1,1,TERMINAL(1),ROOT(5));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(3))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Run_20_Test_20_Tool_case_1_local_8(PARAMETERS,LIST(3),TERMINAL(5),ROOT(6));
LISTROOT(6,0)
REPEATFINISH
LISTROOTFINISH(6,0)
LISTROOTEND
} else {
ROOTEMPTY(6)
}

result = vpx_call_primitive(PARAMETERS,VPLP_select,2,1,TERMINAL(6),TERMINAL(4),ROOT(7));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(7));
TERMINATEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP__28_in_29_,2,1,TERMINAL(6),TERMINAL(7),ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_nth,2,1,TERMINAL(3),TERMINAL(8),ROOT(9));

result = vpx_method_Execute_20_Callback(PARAMETERS,TERMINAL(9),ROOT(10));

result = kSuccess;

FOOTERSINGLECASE(11)
}









Nat4	loadClasses_Debug(V_Environment environment);
Nat4	loadClasses_Debug(V_Environment environment)
{
	V_Class result = NULL;

	return kNOERROR;

}

Nat4	loadUniversals_Debug(V_Environment environment);
Nat4	loadUniversals_Debug(V_Environment environment)
{
	V_Method result = NULL;

	result = method_new("Debug Init",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Debug_20_Init,NULL);

	result = method_new("Debug Detect Verbosity",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Debug_20_Detect_20_Verbosity,NULL);

	result = method_new("Debug OSError",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Debug_20_OSError,NULL);

	result = method_new("Debug Console",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Debug_20_Console,NULL);

	result = method_new("Debug Finish",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Debug_20_Finish,NULL);

	result = method_new("Debug Verbosity Level?",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Debug_20_Verbosity_20_Level_3F_,NULL);

	result = method_new("Debug Result",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Debug_20_Result,NULL);

	result = method_new("Debug Value",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Debug_20_Value,NULL);

	result = method_new("Debug Unimp",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Debug_20_Unimp,NULL);

	result = method_new("Run Test Tool",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Run_20_Test_20_Tool,"Tool");

	return kNOERROR;

}


	Nat4 tempPersistent_appDEBUG_5F_VERBOSITY[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};

Nat4	loadPersistents_Debug(V_Environment environment);
Nat4	loadPersistents_Debug(V_Environment environment)
{
	V_Value tempPersistent = NULL;
	V_Dictionary dictionary = environment->persistentsTable;

	tempPersistent = create_persistentNode("appDEBUG_VERBOSITY",tempPersistent_appDEBUG_5F_VERBOSITY,environment);
	add_node(dictionary,tempPersistent->objectName,tempPersistent);

	return kNOERROR;

}

Nat4	load_Debug(V_Environment environment);
Nat4	load_Debug(V_Environment environment)
{

	loadClasses_Debug(environment);
	loadUniversals_Debug(environment);
	loadPersistents_Debug(environment);
	return kNOERROR;

}

