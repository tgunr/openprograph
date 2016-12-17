/* A VPL Section File */
/*

MyUtilities.inl.c
Copyright: 2004 Andescotia LLC

*/

#include "MartenInlineProject.h"

enum opTrigger vpx_method_Find_20_Instance_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Find_20_Instance_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Name",ROOT(1));

result = vpx_method_Replace_20_NULL(PARAMETERS,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Find_20_Instance_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Find_20_Instance_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_call_inject_get(PARAMETERS,INJECT(1),1,2,TERMINAL(0),ROOT(4),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_plus_2D_one,1,1,TERMINAL(3),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP_equals,2,0,TERMINAL(5),TERMINAL(2));
NEXTCASEONSUCCESS

result = vpx_constant(PARAMETERS,"NULL",ROOT(7));

result = kSuccess;

OUTPUT(0,TERMINAL(7))
OUTPUT(1,TERMINAL(6))
FOOTER(8)
}

enum opTrigger vpx_method_Find_20_Instance_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Find_20_Instance_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = kSuccess;
FINISHONSUCCESS

OUTPUT(0,TERMINAL(0))
OUTPUT(1,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_Find_20_Instance_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Find_20_Instance_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Find_20_Instance_case_1_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0,root1))
vpx_method_Find_20_Instance_case_1_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0,root1);
return outcome;
}

enum opTrigger vpx_method_Find_20_Instance_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Find_20_Instance_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"1",ROOT(3));

result = vpx_method_Find_20_Instance_case_1_local_3(PARAMETERS,TERMINAL(1),ROOT(4));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(0))) ){
REPEATBEGINWITHCOUNTER
LOOPTERMINALBEGIN(1)
LOOPTERMINAL(0,3,6)
result = vpx_method_Find_20_Instance_case_1_local_4(PARAMETERS,LIST(0),TERMINAL(4),TERMINAL(2),LOOP(0),ROOT(5),ROOT(6));
REPEATFINISH
} else {
ROOTNULL(5,NULL)
ROOTNULL(6,TERMINAL(3))
}

result = vpx_match(PARAMETERS,"NULL",TERMINAL(5));
NEXTCASEONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(6))
OUTPUT(1,TERMINAL(5))
FOOTER(7)
}

enum opTrigger vpx_method_Find_20_Instance_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Find_20_Instance_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"0",ROOT(3));

result = vpx_constant(PARAMETERS,"NULL",ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
OUTPUT(1,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Find_20_Instance(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Find_20_Instance_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0,root1))
vpx_method_Find_20_Instance_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0,root1);
return outcome;
}

enum opTrigger vpx_method_Lists_20_To_20_List_case_1_local_4_case_1_local_5_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Lists_20_To_20_List_case_1_local_4_case_1_local_5_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(1),ROOT(3));

result = vpx_match(PARAMETERS,"list",TERMINAL(3));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP__28_join_29_,2,1,TERMINAL(1),TERMINAL(2),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(0))
OUTPUT(1,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Lists_20_To_20_List_case_1_local_4_case_1_local_5_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Lists_20_To_20_List_case_1_local_4_case_1_local_5_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_attach_2D_r,2,1,TERMINAL(0),TERMINAL(1),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
OUTPUT(1,TERMINAL(2))
FOOTER(4)
}

enum opTrigger vpx_method_Lists_20_To_20_List_case_1_local_4_case_1_local_5_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Lists_20_To_20_List_case_1_local_4_case_1_local_5_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Lists_20_To_20_List_case_1_local_4_case_1_local_5_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0,root1))
vpx_method_Lists_20_To_20_List_case_1_local_4_case_1_local_5_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0,root1);
return outcome;
}

enum opTrigger vpx_method_Lists_20_To_20_List_case_1_local_4_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Lists_20_To_20_List_case_1_local_4_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_detach_2D_l,1,2,TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_method_Lists_20_To_20_List_case_1_local_4_case_1_local_5_case_1_local_3(PARAMETERS,TERMINAL(0),TERMINAL(2),TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP__28_length_29_,1,1,TERMINAL(5),ROOT(6));

result = vpx_match(PARAMETERS,"0",TERMINAL(6));
FINISHONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(4))
OUTPUT(1,TERMINAL(5))
FOOTERSINGLECASE(7)
}

enum opTrigger vpx_method_Lists_20_To_20_List_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Lists_20_To_20_List_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( )",ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP__28_length_29_,1,1,TERMINAL(0),ROOT(2));

result = vpx_match(PARAMETERS,"0",TERMINAL(2));
NEXTCASEONSUCCESS

REPEATBEGIN
LOOPTERMINALBEGIN(2)
LOOPTERMINAL(0,1,3)
LOOPTERMINAL(1,0,4)
result = vpx_method_Lists_20_To_20_List_case_1_local_4_case_1_local_5(PARAMETERS,LOOP(0),LOOP(1),ROOT(3),ROOT(4));
REPEATFINISH

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(5)
}

enum opTrigger vpx_method_Lists_20_To_20_List_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Lists_20_To_20_List_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(1)
}

enum opTrigger vpx_method_Lists_20_To_20_List_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Lists_20_To_20_List_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Lists_20_To_20_List_case_1_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Lists_20_To_20_List_case_1_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Lists_20_To_20_List_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Lists_20_To_20_List_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"list",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_method_Lists_20_To_20_List_case_1_local_4(PARAMETERS,TERMINAL(0),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Lists_20_To_20_List_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Lists_20_To_20_List_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_pack,1,1,TERMINAL(0),ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Lists_20_To_20_List(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Lists_20_To_20_List_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Lists_20_To_20_List_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Pascal_20_To_20_String(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(11)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"char",ROOT(1));

result = vpx_constant(PARAMETERS,"1",ROOT(2));

result = vpx_constant(PARAMETERS,"0",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_pointer_2D_to_2D_integer,3,3,TERMINAL(0),TERMINAL(3),TERMINAL(2),ROOT(4),ROOT(5),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP__2B_1,1,1,TERMINAL(6),ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP_make_2D_external,2,1,TERMINAL(1),TERMINAL(7),ROOT(8));

CopyPascalStringToC( GETCONSTPOINTER(unsigned char,*,TERMINAL(0)),GETPOINTER(1,char,*,ROOT(9),TERMINAL(8)));
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_pointer_2D_to_2D_string,1,1,TERMINAL(9),ROOT(10));

result = kSuccess;

OUTPUT(0,TERMINAL(10))
FOOTERSINGLECASE(11)
}

enum opTrigger vpx_method_String_20_To_20_Pascal(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_string_2D_to_2D_pointer,1,1,TERMINAL(0),ROOT(1));

CopyCStringToPascal( GETCONSTPOINTER(char,*,TERMINAL(1)),GETPOINTER(256,unsigned char,*,ROOT(2),NONE));
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASEWITHNONE(3)
}

enum opTrigger vpx_method_Carriage_20_Return(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0)
{
HEADER(2)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,kReturnCharCode,ROOT(0));

result = vpx_call_primitive(PARAMETERS,VPLP_from_2D_ascii,1,1,TERMINAL(0),ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Unix_20_Tab(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0)
{
HEADER(2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"9",ROOT(0));

result = vpx_call_primitive(PARAMETERS,VPLP_from_2D_ascii,1,1,TERMINAL(0),ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_List_20_Average(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"0",ROOT(1));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(0))) ){
REPEATBEGINWITHCOUNTER
LOOPTERMINALBEGIN(1)
LOOPTERMINAL(0,1,2)
result = vpx_call_primitive(PARAMETERS,VPLP__2B2B_,2,1,LIST(0),LOOP(0),ROOT(2));
REPEATFINISH
} else {
ROOTNULL(2,TERMINAL(1))
}

result = vpx_call_primitive(PARAMETERS,VPLP__28_length_29_,1,1,TERMINAL(0),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_idiv,2,2,TERMINAL(2),TERMINAL(3),ROOT(4),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Unix_20_Carriage_20_Return(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0)
{
HEADER(2)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,kLineFeedCharCode,ROOT(0));

result = vpx_call_primitive(PARAMETERS,VPLP_from_2D_ascii,1,1,TERMINAL(0),ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_TEST_20_Read_20_Project(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex)
{
HEADER(4)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,kWindowModalityAppModal,ROOT(0));

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = vpx_constant(PARAMETERS,"Nav Read Project Callback",ROOT(2));

result = vpx_constant(PARAMETERS,"( \'vplP\' )",ROOT(3));

result = vpx_method_Nav_20_Get_20_File(PARAMETERS,TERMINAL(3),TERMINAL(0),TERMINAL(1),TERMINAL(2));
TERMINATEONFAILURE

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Nav_20_Read_20_Project_20_Callback_case_1_local_2_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Nav_20_Read_20_Project_20_Callback_case_1_local_2_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Full_20_Path,1,1,TERMINAL(0),ROOT(1));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Nav_20_Read_20_Project_20_Callback_case_1_local_2_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Nav_20_Read_20_Project_20_Callback_case_1_local_2_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

OUTPUT(0,NONE)
FOOTERWITHNONE(1)
}

enum opTrigger vpx_method_Nav_20_Read_20_Project_20_Callback_case_1_local_2_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Nav_20_Read_20_Project_20_Callback_case_1_local_2_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Nav_20_Read_20_Project_20_Callback_case_1_local_2_case_1_local_6_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Nav_20_Read_20_Project_20_Callback_case_1_local_2_case_1_local_6_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Nav_20_Read_20_Project_20_Callback_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1,V_Object *root2);
enum opTrigger vpx_method_Nav_20_Read_20_Project_20_Callback_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1,V_Object *root2)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Canceled_3F_,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(1));
NEXTCASEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Reply_20_Selection,1,1,TERMINAL(0),ROOT(2));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"Items:",ROOT(3));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(2))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Nav_20_Read_20_Project_20_Callback_case_1_local_2_case_1_local_6(PARAMETERS,LIST(2),ROOT(4));
LISTROOT(4,0)
REPEATFINISH
LISTROOTFINISH(4,0)
LISTROOTEND
} else {
ROOTEMPTY(4)
}

result = kSuccess;

OUTPUT(0,TERMINAL(3))
OUTPUT(1,TERMINAL(4))
OUTPUT(2,TERMINAL(2))
FOOTER(5)
}

enum opTrigger vpx_method_Nav_20_Read_20_Project_20_Callback_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1,V_Object *root2);
enum opTrigger vpx_method_Nav_20_Read_20_Project_20_Callback_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1,V_Object *root2)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Cancel",ROOT(1));

result = vpx_constant(PARAMETERS,"NULL",ROOT(2));

result = vpx_constant(PARAMETERS,"(  )",ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
OUTPUT(1,TERMINAL(2))
OUTPUT(2,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_Nav_20_Read_20_Project_20_Callback_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1,V_Object *root2);
enum opTrigger vpx_method_Nav_20_Read_20_Project_20_Callback_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1,V_Object *root2)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Nav_20_Read_20_Project_20_Callback_case_1_local_2_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1,root2))
vpx_method_Nav_20_Read_20_Project_20_Callback_case_1_local_2_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1,root2);
return outcome;
}

enum opTrigger vpx_method_Nav_20_Read_20_Project_20_Callback_case_1_local_3_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Nav_20_Read_20_Project_20_Callback_case_1_local_3_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(0));
TERMINATEONSUCCESS

result = vpx_method_Debug_20_Console(PARAMETERS,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Nav_20_Read_20_Project_20_Callback_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Nav_20_Read_20_Project_20_Callback_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"User Selected: \"",ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(2),TERMINAL(0),ROOT(3));

result = vpx_method_Debug_20_Console(PARAMETERS,TERMINAL(3));

result = vpx_method_Nav_20_Read_20_Project_20_Callback_case_1_local_3_case_1_local_5(PARAMETERS,TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Nav_20_Read_20_Project_20_Callback_case_1_local_8_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Nav_20_Read_20_Project_20_Callback_case_1_local_8_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Read_20_Object_20_File,1,1,TERMINAL(0),ROOT(1));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Nav_20_Read_20_Project_20_Callback_case_1_local_8_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Nav_20_Read_20_Project_20_Callback_case_1_local_8_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Coerce_20_FSSpec,1,1,TERMINAL(0),ROOT(1));
FAILONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_open_2D_file,1,1,TERMINAL(1),ROOT(2));
FAILONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_read_2D_object,1,1,TERMINAL(2),ROOT(3));
CONTINUEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_close_2D_file,1,0,TERMINAL(2));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_Nav_20_Read_20_Project_20_Callback_case_1_local_8_case_3_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Nav_20_Read_20_Project_20_Callback_case_1_local_8_case_3_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(16)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

PUTINTEGER(FSGetDataForkName( GETPOINTER(512,HFSUniStr255,*,ROOT(3),NONE)),2);
result = kSuccess;

result = vpx_extconstant(PARAMETERS,fsRdPerm,ROOT(4));

result = vpx_constant(PARAMETERS,"1",ROOT(5));

result = vpx_method_New_20_UInt16(PARAMETERS,NONE,TERMINAL(5),ROOT(6));
FAILONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_FSRef,1,1,TERMINAL(0),ROOT(7));

result = vpx_extget(PARAMETERS,"unicode",1,2,TERMINAL(3),ROOT(8),ROOT(9));

result = vpx_extget(PARAMETERS,"length",1,2,TERMINAL(3),ROOT(10),ROOT(11));

PUTINTEGER(FSOpenFork( GETCONSTPOINTER(FSRef,*,TERMINAL(7)),GETINTEGER(TERMINAL(11)),GETCONSTPOINTER(unsigned short,*,TERMINAL(9)),GETINTEGER(TERMINAL(1)),GETPOINTER(2,short,*,ROOT(13),TERMINAL(6))),12);
result = kSuccess;

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(12));
FAILONFAILURE

result = vpx_method_Get_20_SInt16(PARAMETERS,TERMINAL(13),NONE,ROOT(14),ROOT(15));

result = vpx_method_Block_20_Free(PARAMETERS,TERMINAL(6));

result = kSuccess;

OUTPUT(0,TERMINAL(15))
FOOTERSINGLECASEWITHNONE(16)
}

enum opTrigger vpx_method_Nav_20_Read_20_Project_20_Callback_case_1_local_8_case_3_local_4_case_1_local_3_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0);
enum opTrigger vpx_method_Nav_20_Read_20_Project_20_Callback_case_1_local_8_case_3_local_4_case_1_local_3_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0)
{
HEADERWITHNONE(4)
result = kSuccess;

result = vpx_constant(PARAMETERS,"4",ROOT(0));

result = vpx_constant(PARAMETERS,"1",ROOT(1));

result = vpx_constant(PARAMETERS,"long long int",ROOT(2));

result = vpx_method_New_20_Integer_20_Block_20_Type(PARAMETERS,NONE,TERMINAL(0),TERMINAL(1),TERMINAL(2),ROOT(3));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASEWITHNONE(4)
}

enum opTrigger vpx_method_Nav_20_Read_20_Project_20_Callback_case_1_local_8_case_3_local_4_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Nav_20_Read_20_Project_20_Callback_case_1_local_8_case_3_local_4_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Nav_20_Read_20_Project_20_Callback_case_1_local_8_case_3_local_4_case_1_local_3_case_1_local_2(PARAMETERS,ROOT(1));
FAILONFAILURE

PUTINTEGER(FSGetForkSize( GETINTEGER(TERMINAL(0)),GETPOINTER(4,long long int,*,ROOT(3),TERMINAL(1))),2);
result = kSuccess;

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(2));
FAILONFAILURE

result = vpx_constant(PARAMETERS,"4",ROOT(4));

result = vpx_method_Get_20_UInt32(PARAMETERS,TERMINAL(3),TERMINAL(4),ROOT(5),ROOT(6));

result = vpx_method_Block_20_Free(PARAMETERS,TERMINAL(1));

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTERSINGLECASE(7)
}

enum opTrigger vpx_method_Nav_20_Read_20_Project_20_Callback_case_1_local_8_case_3_local_4_case_1_local_4_case_1_local_10_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Nav_20_Read_20_Project_20_Callback_case_1_local_8_case_3_local_4_case_1_local_4_case_1_local_10_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"0",ROOT(2));

result = vpx_method_Block_20_Copy(PARAMETERS,TERMINAL(1),NONE,TERMINAL(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_archive_2D_to_2D_object,1,1,TERMINAL(3),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERWITHNONE(5)
}

enum opTrigger vpx_method_Nav_20_Read_20_Project_20_Callback_case_1_local_8_case_3_local_4_case_1_local_4_case_1_local_10_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Nav_20_Read_20_Project_20_Callback_case_1_local_8_case_3_local_4_case_1_local_4_case_1_local_10_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
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

enum opTrigger vpx_method_Nav_20_Read_20_Project_20_Callback_case_1_local_8_case_3_local_4_case_1_local_4_case_1_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Nav_20_Read_20_Project_20_Callback_case_1_local_8_case_3_local_4_case_1_local_4_case_1_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Nav_20_Read_20_Project_20_Callback_case_1_local_8_case_3_local_4_case_1_local_4_case_1_local_10_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Nav_20_Read_20_Project_20_Callback_case_1_local_8_case_3_local_4_case_1_local_4_case_1_local_10_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Nav_20_Read_20_Project_20_Callback_case_1_local_8_case_3_local_4_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Nav_20_Read_20_Project_20_Callback_case_1_local_8_case_3_local_4_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADERWITHNONE(14)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,fsFromStart,ROOT(3));

result = vpx_constant(PARAMETERS,"1",ROOT(4));

result = vpx_method_Block_20_Allocate(PARAMETERS,TERMINAL(2),TERMINAL(4),ROOT(5));
FAILONFAILURE

result = vpx_constant(PARAMETERS,"1",ROOT(6));

result = vpx_method_New_20_UInt32(PARAMETERS,NONE,TERMINAL(6),ROOT(7));
FAILONFAILURE

result = vpx_extconstant(PARAMETERS,pleaseCacheMask,ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP__2B2B_,2,1,TERMINAL(3),TERMINAL(8),ROOT(9));

PUTINTEGER(FSReadFork( GETINTEGER(TERMINAL(0)),GETINTEGER(TERMINAL(9)),GETINTEGER(TERMINAL(1)),GETINTEGER(TERMINAL(2)),GETPOINTER(0,void,*,ROOT(11),TERMINAL(5)),GETPOINTER(4,unsigned long,*,ROOT(12),TERMINAL(7))),10);
result = kSuccess;

result = vpx_method_Nav_20_Read_20_Project_20_Callback_case_1_local_8_case_3_local_4_case_1_local_4_case_1_local_10(PARAMETERS,TERMINAL(10),TERMINAL(11),ROOT(13));

result = vpx_method_Block_20_Free(PARAMETERS,TERMINAL(5));

result = vpx_method_Block_20_Free(PARAMETERS,TERMINAL(7));

result = kSuccess;

OUTPUT(0,TERMINAL(13))
FOOTERSINGLECASEWITHNONE(14)
}

enum opTrigger vpx_method_Nav_20_Read_20_Project_20_Callback_case_1_local_8_case_3_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Nav_20_Read_20_Project_20_Callback_case_1_local_8_case_3_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"0",ROOT(1));

result = vpx_method_Nav_20_Read_20_Project_20_Callback_case_1_local_8_case_3_local_4_case_1_local_3(PARAMETERS,TERMINAL(0),ROOT(2));
NEXTCASEONFAILURE

result = vpx_method_Nav_20_Read_20_Project_20_Callback_case_1_local_8_case_3_local_4_case_1_local_4(PARAMETERS,TERMINAL(0),TERMINAL(1),TERMINAL(2),ROOT(3));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_Nav_20_Read_20_Project_20_Callback_case_1_local_8_case_3_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Nav_20_Read_20_Project_20_Callback_case_1_local_8_case_3_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Nav_20_Read_20_Project_20_Callback_case_1_local_8_case_3_local_4_case_3_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0);
enum opTrigger vpx_method_Nav_20_Read_20_Project_20_Callback_case_1_local_8_case_3_local_4_case_3_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0)
{
HEADERWITHNONE(4)
result = kSuccess;

result = vpx_constant(PARAMETERS,"4",ROOT(0));

result = vpx_constant(PARAMETERS,"1",ROOT(1));

result = vpx_constant(PARAMETERS,"long long int",ROOT(2));

result = vpx_method_New_20_Integer_20_Block_20_Type(PARAMETERS,NONE,TERMINAL(0),TERMINAL(1),TERMINAL(2),ROOT(3));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASEWITHNONE(4)
}

enum opTrigger vpx_method_Nav_20_Read_20_Project_20_Callback_case_1_local_8_case_3_local_4_case_3_local_13_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Nav_20_Read_20_Project_20_Callback_case_1_local_8_case_3_local_4_case_3_local_13_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_archive_2D_to_2D_object,1,1,TERMINAL(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Nav_20_Read_20_Project_20_Callback_case_1_local_8_case_3_local_4_case_3_local_13_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Nav_20_Read_20_Project_20_Callback_case_1_local_8_case_3_local_4_case_3_local_13_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
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

enum opTrigger vpx_method_Nav_20_Read_20_Project_20_Callback_case_1_local_8_case_3_local_4_case_3_local_13(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Nav_20_Read_20_Project_20_Callback_case_1_local_8_case_3_local_4_case_3_local_13(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Nav_20_Read_20_Project_20_Callback_case_1_local_8_case_3_local_4_case_3_local_13_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Nav_20_Read_20_Project_20_Callback_case_1_local_8_case_3_local_4_case_3_local_13_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Nav_20_Read_20_Project_20_Callback_case_1_local_8_case_3_local_4_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Nav_20_Read_20_Project_20_Callback_case_1_local_8_case_3_local_4_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(15)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Nav_20_Read_20_Project_20_Callback_case_1_local_8_case_3_local_4_case_3_local_2(PARAMETERS,ROOT(1));
NEXTCASEONFAILURE

PUTINTEGER(FSGetForkSize( GETINTEGER(TERMINAL(0)),GETPOINTER(4,long long int,*,ROOT(3),TERMINAL(1))),2);
result = kSuccess;

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_extconstant(PARAMETERS,fsFromStart,ROOT(4));

result = vpx_constant(PARAMETERS,"0",ROOT(5));

result = vpx_constant(PARAMETERS,"0",ROOT(6));

result = vpx_constant(PARAMETERS,"1",ROOT(7));

result = vpx_method_Get_20_UInt32(PARAMETERS,TERMINAL(3),TERMINAL(6),ROOT(8),ROOT(9));

result = vpx_method_Block_20_Free(PARAMETERS,TERMINAL(1));

result = vpx_method_Block_20_Allocate(PARAMETERS,TERMINAL(9),TERMINAL(7),ROOT(10));
NEXTCASEONFAILURE

PUTINTEGER(FSReadFork( GETINTEGER(TERMINAL(0)),GETINTEGER(TERMINAL(4)),GETINTEGER(TERMINAL(5)),GETINTEGER(TERMINAL(9)),GETPOINTER(0,void,*,ROOT(12),TERMINAL(10)),GETPOINTER(4,unsigned long,*,ROOT(13),NONE)),11);
result = kSuccess;

result = vpx_method_Nav_20_Read_20_Project_20_Callback_case_1_local_8_case_3_local_4_case_3_local_13(PARAMETERS,TERMINAL(11),TERMINAL(12),ROOT(14));

result = vpx_method_Block_20_Free(PARAMETERS,TERMINAL(10));

result = kSuccess;

OUTPUT(0,TERMINAL(14))
FOOTERWITHNONE(15)
}

enum opTrigger vpx_method_Nav_20_Read_20_Project_20_Callback_case_1_local_8_case_3_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Nav_20_Read_20_Project_20_Callback_case_1_local_8_case_3_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Nav_20_Read_20_Project_20_Callback_case_1_local_8_case_3_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_Nav_20_Read_20_Project_20_Callback_case_1_local_8_case_3_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Nav_20_Read_20_Project_20_Callback_case_1_local_8_case_3_local_4_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Nav_20_Read_20_Project_20_Callback_case_1_local_8_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Nav_20_Read_20_Project_20_Callback_case_1_local_8_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,fsRdPerm,ROOT(1));

result = vpx_method_Nav_20_Read_20_Project_20_Callback_case_1_local_8_case_3_local_3(PARAMETERS,TERMINAL(0),TERMINAL(1),ROOT(2));
FAILONFAILURE

result = vpx_method_Nav_20_Read_20_Project_20_Callback_case_1_local_8_case_3_local_4(PARAMETERS,TERMINAL(2),ROOT(3));

PUTINTEGER(FSCloseFork( GETINTEGER(TERMINAL(2))),4);
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(5)
}

enum opTrigger vpx_method_Nav_20_Read_20_Project_20_Callback_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Nav_20_Read_20_Project_20_Callback_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Nav_20_Read_20_Project_20_Callback_case_1_local_8_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_Nav_20_Read_20_Project_20_Callback_case_1_local_8_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Nav_20_Read_20_Project_20_Callback_case_1_local_8_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Nav_20_Read_20_Project_20_Callback_case_1_local_9_case_1_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0);
enum opTrigger vpx_method_Nav_20_Read_20_Project_20_Callback_case_1_local_9_case_1_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0)
{
HEADER(3)
result = kSuccess;

result = vpx_constant(PARAMETERS,"section",ROOT(0));

result = vpx_method_Get_20_File_20_Type_20_Extension(PARAMETERS,TERMINAL(0),ROOT(1),ROOT(2));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(3)
}

enum opTrigger vpx_method_Nav_20_Read_20_Project_20_Callback_case_1_local_9_case_1_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0);
enum opTrigger vpx_method_Nav_20_Read_20_Project_20_Callback_case_1_local_9_case_1_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0)
{
HEADER(1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"\"",ROOT(0));

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(1)
}

enum opTrigger vpx_method_Nav_20_Read_20_Project_20_Callback_case_1_local_9_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0);
enum opTrigger vpx_method_Nav_20_Read_20_Project_20_Callback_case_1_local_9_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Nav_20_Read_20_Project_20_Callback_case_1_local_9_case_1_local_7_case_1(environment, &outcome, inputRepeat, contextIndex,root0))
vpx_method_Nav_20_Read_20_Project_20_Callback_case_1_local_9_case_1_local_7_case_2(environment, &outcome, inputRepeat, contextIndex,root0);
return outcome;
}

enum opTrigger vpx_method_Nav_20_Read_20_Project_20_Callback_case_1_local_9_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Nav_20_Read_20_Project_20_Callback_case_1_local_9_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Name,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(3),TERMINAL(1),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Nav_20_Read_20_Project_20_Callback_case_1_local_9_case_1_local_9_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0);
enum opTrigger vpx_method_Nav_20_Read_20_Project_20_Callback_case_1_local_9_case_1_local_9_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0)
{
HEADER(3)
result = kSuccess;

result = vpx_constant(PARAMETERS,"library",ROOT(0));

result = vpx_method_Get_20_File_20_Type_20_Extension(PARAMETERS,TERMINAL(0),ROOT(1),ROOT(2));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(3)
}

enum opTrigger vpx_method_Nav_20_Read_20_Project_20_Callback_case_1_local_9_case_1_local_9_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0);
enum opTrigger vpx_method_Nav_20_Read_20_Project_20_Callback_case_1_local_9_case_1_local_9_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0)
{
HEADER(1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"\"",ROOT(0));

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(1)
}

enum opTrigger vpx_method_Nav_20_Read_20_Project_20_Callback_case_1_local_9_case_1_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0);
enum opTrigger vpx_method_Nav_20_Read_20_Project_20_Callback_case_1_local_9_case_1_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Nav_20_Read_20_Project_20_Callback_case_1_local_9_case_1_local_9_case_1(environment, &outcome, inputRepeat, contextIndex,root0))
vpx_method_Nav_20_Read_20_Project_20_Callback_case_1_local_9_case_1_local_9_case_2(environment, &outcome, inputRepeat, contextIndex,root0);
return outcome;
}

enum opTrigger vpx_method_Nav_20_Read_20_Project_20_Callback_case_1_local_9_case_1_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Nav_20_Read_20_Project_20_Callback_case_1_local_9_case_1_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Name,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(3),TERMINAL(1),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Nav_20_Read_20_Project_20_Callback_case_1_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Nav_20_Read_20_Project_20_Callback_case_1_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(14)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(0));
FAILONSUCCESS

result = vpx_get(PARAMETERS,kVPXValue_Lists,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,2,TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(4),ROOT(5),ROOT(6));

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(3),ROOT(7),ROOT(8));

result = vpx_method_Nav_20_Read_20_Project_20_Callback_case_1_local_9_case_1_local_7(PARAMETERS,ROOT(9));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(6))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Nav_20_Read_20_Project_20_Callback_case_1_local_9_case_1_local_8(PARAMETERS,LIST(6),TERMINAL(9),ROOT(10));
LISTROOT(10,0)
REPEATFINISH
LISTROOTFINISH(10,0)
LISTROOTEND
} else {
ROOTEMPTY(10)
}

result = vpx_method_Nav_20_Read_20_Project_20_Callback_case_1_local_9_case_1_local_9(PARAMETERS,ROOT(11));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(8))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Nav_20_Read_20_Project_20_Callback_case_1_local_9_case_1_local_10(PARAMETERS,LIST(8),TERMINAL(11),ROOT(12));
LISTROOT(12,0)
REPEATFINISH
LISTROOTFINISH(12,0)
LISTROOTEND
} else {
ROOTEMPTY(12)
}

result = vpx_call_primitive(PARAMETERS,VPLP__28_join_29_,2,1,TERMINAL(10),TERMINAL(12),ROOT(13));

result = kSuccess;

OUTPUT(0,TERMINAL(13))
FOOTERSINGLECASE(14)
}

enum opTrigger vpx_method_Nav_20_Read_20_Project_20_Callback_case_1_local_10_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Nav_20_Read_20_Project_20_Callback_case_1_local_10_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_FSRef,1,1,TERMINAL(0),ROOT(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Release,1,0,TERMINAL(0));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Nav_20_Read_20_Project_20_Callback_case_1_local_10_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Nav_20_Read_20_Project_20_Callback_case_1_local_10_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(1)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Release,1,0,TERMINAL(0));

result = kSuccess;
FAILONSUCCESS

OUTPUT(0,NONE)
FOOTERWITHNONE(1)
}

enum opTrigger vpx_method_Nav_20_Read_20_Project_20_Callback_case_1_local_10_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Nav_20_Read_20_Project_20_Callback_case_1_local_10_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Nav_20_Read_20_Project_20_Callback_case_1_local_10_case_1_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Nav_20_Read_20_Project_20_Callback_case_1_local_10_case_1_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Nav_20_Read_20_Project_20_Callback_case_1_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Nav_20_Read_20_Project_20_Callback_case_1_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(5)
INPUT(0,0)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_CF_20_URL,1,1,NONE,ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Capture_20_Main_20_Bundle,1,0,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_method_Nav_20_Read_20_Project_20_Callback_case_1_local_10_case_1_local_4(PARAMETERS,TERMINAL(1),ROOT(2));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Parent,1,1,TERMINAL(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(0),TERMINAL(3),ROOT(4));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
NEXTCASEONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERSINGLECASEWITHNONE(5)
}

enum opTrigger vpx_method_Nav_20_Read_20_Project_20_Callback_case_1_local_11(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Nav_20_Read_20_Project_20_Callback_case_1_local_11(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_Folder_20_Search,1,1,NONE,ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Search_20_Sync,3,2,TERMINAL(2),TERMINAL(0),TERMINAL(1),ROOT(3),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASEWITHNONE(5)
}

enum opTrigger vpx_method_Nav_20_Read_20_Project_20_Callback_case_1_local_12_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Nav_20_Read_20_Project_20_Callback_case_1_local_12_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(7)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Full_20_Path,1,1,TERMINAL(0),ROOT(1));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"\"\"",ROOT(2));

result = vpx_constant(PARAMETERS,"\" - is folder\"",ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Is_20_Folder_3F_,1,1,TERMINAL(0),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_choose,3,1,TERMINAL(4),TERMINAL(3),TERMINAL(2),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(1),TERMINAL(5),ROOT(6));

result = vpx_method_Debug_20_Console(PARAMETERS,TERMINAL(6));

result = kSuccess;

FOOTER(7)
}

enum opTrigger vpx_method_Nav_20_Read_20_Project_20_Callback_case_1_local_12_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Nav_20_Read_20_Project_20_Callback_case_1_local_12_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_Nav_20_Read_20_Project_20_Callback_case_1_local_12_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Nav_20_Read_20_Project_20_Callback_case_1_local_12_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Nav_20_Read_20_Project_20_Callback_case_1_local_12_case_1_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Nav_20_Read_20_Project_20_Callback_case_1_local_12_case_1_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Nav_20_Read_20_Project_20_Callback_case_1_local_12(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Nav_20_Read_20_Project_20_Callback_case_1_local_12(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"Found: \"",ROOT(1));

result = vpx_method_Debug_20_Console(PARAMETERS,TERMINAL(1));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(0))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Nav_20_Read_20_Project_20_Callback_case_1_local_12_case_1_local_4(PARAMETERS,LIST(0));
REPEATFINISH
} else {
}

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Nav_20_Read_20_Project_20_Callback(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(10)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Nav_20_Read_20_Project_20_Callback_case_1_local_2(PARAMETERS,TERMINAL(0),ROOT(1),ROOT(2),ROOT(3));

result = vpx_method_Nav_20_Read_20_Project_20_Callback_case_1_local_3(PARAMETERS,TERMINAL(1),TERMINAL(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
TERMINATEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,1,TERMINAL(3),ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Parent,1,1,TERMINAL(4),ROOT(5));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(5));
TERMINATEONSUCCESS

result = vpx_method_Nav_20_Read_20_Project_20_Callback_case_1_local_8(PARAMETERS,TERMINAL(4),ROOT(6));
TERMINATEONFAILURE

result = vpx_method_Nav_20_Read_20_Project_20_Callback_case_1_local_9(PARAMETERS,TERMINAL(6),ROOT(7));
TERMINATEONFAILURE

result = vpx_method_Nav_20_Read_20_Project_20_Callback_case_1_local_10(PARAMETERS,TERMINAL(5),ROOT(8));

result = vpx_method_Nav_20_Read_20_Project_20_Callback_case_1_local_11(PARAMETERS,TERMINAL(8),TERMINAL(7),ROOT(9));

result = vpx_method_Nav_20_Read_20_Project_20_Callback_case_1_local_12(PARAMETERS,TERMINAL(9));

result = kSuccess;

FOOTERSINGLECASE(10)
}

enum opTrigger vpx_method_Get_20_VPL_20_Data(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0)
{
HEADER(3)
result = kSuccess;

result = vpx_method_Get_20_Application(PARAMETERS,ROOT(0));

result = vpx_get(PARAMETERS,kVPXValue_VPL_20_Data,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Get_20_Viewer_20_Windows_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Get_20_Viewer_20_Windows_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_attributes,1,2,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP__28_join_29_,2,1,TERMINAL(1),TERMINAL(2),ROOT(3));

result = vpx_constant(PARAMETERS,"Data",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP__28_in_29_,2,1,TERMINAL(3),TERMINAL(4),ROOT(5));

result = vpx_match(PARAMETERS,"0",TERMINAL(5));
NEXTCASEONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(6)
}

enum opTrigger vpx_method_Get_20_Viewer_20_Windows_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Get_20_Viewer_20_Windows_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

OUTPUT(0,NONE)
FOOTERWITHNONE(1)
}

enum opTrigger vpx_method_Get_20_Viewer_20_Windows_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Get_20_Viewer_20_Windows_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Get_20_Viewer_20_Windows_case_1_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Get_20_Viewer_20_Windows_case_1_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Get_20_Viewer_20_Windows_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0);
enum opTrigger vpx_method_Get_20_Viewer_20_Windows_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0)
{
HEADER(3)
result = kSuccess;

result = vpx_method_Get_20_Desktop(PARAMETERS,ROOT(0));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Windows,1,1,TERMINAL(0),ROOT(1));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(1))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Get_20_Viewer_20_Windows_case_1_local_4(PARAMETERS,LIST(1),ROOT(2));
LISTROOT(2,0)
REPEATFINISH
LISTROOTFINISH(2,0)
LISTROOTEND
} else {
ROOTEMPTY(2)
}

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Get_20_Viewer_20_Windows_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0);
enum opTrigger vpx_method_Get_20_Viewer_20_Windows_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0)
{
HEADER(3)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Project Viewer Window",ROOT(0));

result = vpx_method_Get_20_Desktop(PARAMETERS,ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Find_20_Windows_20_Type,2,1,TERMINAL(1),TERMINAL(0),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Get_20_Viewer_20_Windows(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Get_20_Viewer_20_Windows_case_1(environment, &outcome, inputRepeat, contextIndex,root0))
vpx_method_Get_20_Viewer_20_Windows_case_2(environment, &outcome, inputRepeat, contextIndex,root0);
return outcome;
}

enum opTrigger vpx_method_Get_20_Tool_20_Set(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0)
{
HEADER(1)
result = kSuccess;

result = vpx_persistent(PARAMETERS,kVPXValue_Tool_20_Set,0,1,ROOT(0));

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Get_20_Stack_20_Service(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0)
{
HEADER(2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Stack Service",ROOT(0));

result = vpx_method_Find_20_Service(PARAMETERS,TERMINAL(0),ROOT(1));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Find_20_Instance_20_Values_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Find_20_Instance_20_Values_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Name",ROOT(1));

result = vpx_method_Replace_20_NULL(PARAMETERS,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Find_20_Instance_20_Values_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Find_20_Instance_20_Values_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Default_20_List(PARAMETERS,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"( )",TERMINAL(1));
FAILONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP__28_length_29_,1,1,TERMINAL(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_make_2D_list,1,1,TERMINAL(2),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
OUTPUT(1,TERMINAL(3))
FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Find_20_Instance_20_Values_case_1_local_4_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Find_20_Instance_20_Values_case_1_local_4_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

if( (repeatLimit = vpx_multiplex(1,TERMINAL(0))) ){
REPEATBEGINWITHCOUNTER
result = vpx_match(PARAMETERS,"UNDEFINED",LIST(0));
TERMINATEONFAILURE
REPEATFINISH
} else {
}

result = kSuccess;
FAILONSUCCESS

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Find_20_Instance_20_Values_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Find_20_Instance_20_Values_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1)
{
HEADER(10)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_call_inject_get(PARAMETERS,INJECT(1),1,2,TERMINAL(0),ROOT(4),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP__28_in_29_,2,1,TERMINAL(2),TERMINAL(5),ROOT(6));

result = vpx_match(PARAMETERS,"0",TERMINAL(6));
NEXTCASEONSUCCESS

result = vpx_constant(PARAMETERS,"UNDEFINED",ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP_set_2D_nth,3,1,TERMINAL(2),TERMINAL(7),TERMINAL(6),ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP_set_2D_nth,3,1,TERMINAL(3),TERMINAL(0),TERMINAL(6),ROOT(9));

result = vpx_method_Find_20_Instance_20_Values_case_1_local_4_case_1_local_8(PARAMETERS,TERMINAL(8));
FINISHONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(8))
OUTPUT(1,TERMINAL(9))
FOOTER(10)
}

enum opTrigger vpx_method_Find_20_Instance_20_Values_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Find_20_Instance_20_Values_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(2))
OUTPUT(1,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_Find_20_Instance_20_Values_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Find_20_Instance_20_Values_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Find_20_Instance_20_Values_case_1_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0,root1))
vpx_method_Find_20_Instance_20_Values_case_1_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0,root1);
return outcome;
}

enum opTrigger vpx_method_Find_20_Instance_20_Values_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Find_20_Instance_20_Values_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_method_Find_20_Instance_20_Values_case_1_local_2(PARAMETERS,TERMINAL(1),ROOT(3));

result = vpx_method_Find_20_Instance_20_Values_case_1_local_3(PARAMETERS,TERMINAL(2),ROOT(4),ROOT(5));
NEXTCASEONFAILURE

if( (repeatLimit = vpx_multiplex(1,TERMINAL(0))) ){
REPEATBEGINWITHCOUNTER
LOOPTERMINALBEGIN(2)
LOOPTERMINAL(0,4,6)
LOOPTERMINAL(1,5,7)
result = vpx_method_Find_20_Instance_20_Values_case_1_local_4(PARAMETERS,LIST(0),TERMINAL(3),LOOP(0),LOOP(1),ROOT(6),ROOT(7));
REPEATFINISH
} else {
ROOTNULL(6,TERMINAL(4))
ROOTNULL(7,TERMINAL(5))
}

result = kSuccess;

OUTPUT(0,TERMINAL(7))
FOOTER(8)
}

enum opTrigger vpx_method_Find_20_Instance_20_Values_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Find_20_Instance_20_Values_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( )",ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_Find_20_Instance_20_Values(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Find_20_Instance_20_Values_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
vpx_method_Find_20_Instance_20_Values_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0);
return outcome;
}

enum opTrigger vpx_method_Unique_20_Name_20_For_20_String_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Unique_20_Name_20_For_20_String_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(15)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP__22_reverse_22_,1,1,TERMINAL(0),ROOT(1));

result = vpx_constant(PARAMETERS,"\"#\"",ROOT(2));

result = vpx_method__22_Split_20_At_22_(PARAMETERS,TERMINAL(1),TERMINAL(2),ROOT(3),ROOT(4),ROOT(5));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP__22_reverse_22_,1,1,TERMINAL(3),ROOT(6));

result = vpx_method__22_Trim_22_(PARAMETERS,TERMINAL(6),ROOT(7));

result = vpx_match(PARAMETERS,"\"\"",TERMINAL(7));
NEXTCASEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_from_2D_string,1,1,TERMINAL(7),ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP_integer_3F_,1,0,TERMINAL(8));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP__2B_1,1,1,TERMINAL(8),ROOT(9));

result = vpx_call_primitive(PARAMETERS,VPLP__22_reverse_22_,1,1,TERMINAL(5),ROOT(10));

result = vpx_method__22_Trim_22_(PARAMETERS,TERMINAL(10),ROOT(11));

result = vpx_call_primitive(PARAMETERS,VPLP_to_2D_string,1,1,TERMINAL(9),ROOT(12));

result = vpx_constant(PARAMETERS,"\" \"",ROOT(13));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,4,1,TERMINAL(11),TERMINAL(13),TERMINAL(2),TERMINAL(12),ROOT(14));

result = kSuccess;

OUTPUT(0,TERMINAL(14))
FOOTER(15)
}

enum opTrigger vpx_method_Unique_20_Name_20_For_20_String_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Unique_20_Name_20_For_20_String_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\" #1\"",ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Unique_20_Name_20_For_20_String(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Unique_20_Name_20_For_20_String_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Unique_20_Name_20_For_20_String_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Put_20_URLs_20_On_20_Scrap_case_1_local_2_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Put_20_URLs_20_On_20_Scrap_case_1_local_2_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = vpx_method_To_20_CFStringRef(PARAMETERS,TERMINAL(0),ROOT(2));

result = vpx_extconstant(PARAMETERS,kCFStringEncodingUTF8,ROOT(3));

PUTPOINTER(__CFString,*,CFURLCreateStringByAddingPercentEscapes( GETCONSTPOINTER(__CFAllocator,*,TERMINAL(1)),GETCONSTPOINTER(__CFString,*,TERMINAL(2)),GETCONSTPOINTER(__CFString,*,TERMINAL(1)),GETCONSTPOINTER(__CFString,*,TERMINAL(1)),GETINTEGER(TERMINAL(3))),4);
result = kSuccess;

CFRelease( GETCONSTPOINTER(void,*,TERMINAL(2)));
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(4));
NEXTCASEONSUCCESS

result = vpx_method_From_20_CFStringRef(PARAMETERS,TERMINAL(4),ROOT(5));

CFRelease( GETCONSTPOINTER(void,*,TERMINAL(4)));
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTER(6)
}

enum opTrigger vpx_method_Put_20_URLs_20_On_20_Scrap_case_1_local_2_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Put_20_URLs_20_On_20_Scrap_case_1_local_2_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"\"",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Put_20_URLs_20_On_20_Scrap_case_1_local_2_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Put_20_URLs_20_On_20_Scrap_case_1_local_2_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Put_20_URLs_20_On_20_Scrap_case_1_local_2_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Put_20_URLs_20_On_20_Scrap_case_1_local_2_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Put_20_URLs_20_On_20_Scrap_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Put_20_URLs_20_On_20_Scrap_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_URL,1,1,TERMINAL(0),ROOT(1));

result = vpx_method_Put_20_URLs_20_On_20_Scrap_case_1_local_2_case_1_local_3(PARAMETERS,TERMINAL(1),ROOT(2));

result = vpx_match(PARAMETERS,"\"\"",TERMINAL(2));
NEXTCASEONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Put_20_URLs_20_On_20_Scrap_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Put_20_URLs_20_On_20_Scrap_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

OUTPUT(0,NONE)
FOOTERWITHNONE(1)
}

enum opTrigger vpx_method_Put_20_URLs_20_On_20_Scrap_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Put_20_URLs_20_On_20_Scrap_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Put_20_URLs_20_On_20_Scrap_case_1_local_2_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Put_20_URLs_20_On_20_Scrap_case_1_local_2_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Put_20_URLs_20_On_20_Scrap(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADERWITHNONE(5)
INPUT(0,0)
result = kSuccess;

if( (repeatLimit = vpx_multiplex(1,TERMINAL(0))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Put_20_URLs_20_On_20_Scrap_case_1_local_2(PARAMETERS,LIST(0),ROOT(1));
LISTROOT(1,0)
REPEATFINISH
LISTROOTFINISH(1,0)
LISTROOTEND
} else {
ROOTEMPTY(1)
}

result = vpx_method_Get_20_Return_20_String(PARAMETERS,NONE,ROOT(2));

result = vpx_method__28_To_20_String_29_(PARAMETERS,TERMINAL(1),TERMINAL(2),ROOT(3));

result = vpx_constant(PARAMETERS,"FALSE",ROOT(4));

result = vpx_method_Put_20_TEXT_20_On_20_Scrap(PARAMETERS,TERMINAL(3),TERMINAL(4));

result = kSuccess;

FOOTERSINGLECASEWITHNONE(5)
}

enum opTrigger vpx_method_Put_20_TEXT_20_On_20_Scrap_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Put_20_TEXT_20_On_20_Scrap_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(1));
TERMINATEONFAILURE

PUTINTEGER(ClearScrap( GETPOINTER(0,OpaqueScrapRef,**,ROOT(3),TERMINAL(0))),2);
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Put_20_TEXT_20_On_20_Scrap(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADERWITHNONE(10)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Default_20_TRUE(PARAMETERS,TERMINAL(1),ROOT(2));

PUTINTEGER(GetCurrentScrap( GETPOINTER(0,OpaqueScrapRef,**,ROOT(4),NONE)),3);
result = kSuccess;

result = vpx_constant(PARAMETERS,"\'TEXT\'",ROOT(5));

result = vpx_extconstant(PARAMETERS,kScrapFlavorMaskNone,ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP_byte_2D_length,1,1,TERMINAL(0),ROOT(7));

result = vpx_method_Put_20_TEXT_20_On_20_Scrap_case_1_local_7(PARAMETERS,TERMINAL(4),TERMINAL(2));

PUTINTEGER(PutScrapFlavor( GETPOINTER(0,OpaqueScrapRef,*,ROOT(9),TERMINAL(4)),GETINTEGER(TERMINAL(5)),GETINTEGER(TERMINAL(6)),GETINTEGER(TERMINAL(7)),GETCONSTPOINTER(void,*,TERMINAL(0))),8);
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASEWITHNONE(10)
}

enum opTrigger vpx_method_Formalize_20_Data_20_Name_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Formalize_20_Data_20_Name_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"1",ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_prefix,2,2,TERMINAL(0),TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_constant(PARAMETERS,"\"/\"",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP__3D_,2,1,TERMINAL(4),TERMINAL(2),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Formalize_20_Data_20_Name_case_1_local_3_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Formalize_20_Data_20_Name_case_1_local_3_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"constant",TERMINAL(0));
FAILONSUCCESS

result = vpx_match(PARAMETERS,"match",TERMINAL(0));
FAILONSUCCESS

result = vpx_match(PARAMETERS,"evaluate",TERMINAL(0));
FAILONSUCCESS

result = vpx_match(PARAMETERS,"local",TERMINAL(0));
FAILONSUCCESS

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_Formalize_20_Data_20_Name_case_1_local_3_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Formalize_20_Data_20_Name_case_1_local_3_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"persistent",TERMINAL(0));
TERMINATEONSUCCESS

result = vpx_match(PARAMETERS,"instance",TERMINAL(0));
TERMINATEONSUCCESS

result = vpx_match(PARAMETERS,"get",TERMINAL(0));
TERMINATEONSUCCESS

result = vpx_match(PARAMETERS,"set",TERMINAL(0));
TERMINATEONSUCCESS

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_Formalize_20_Data_20_Name_case_1_local_3_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Formalize_20_Data_20_Name_case_1_local_3_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Formalize_20_Data_20_Name_case_1_local_3_case_1_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Formalize_20_Data_20_Name_case_1_local_3_case_1_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Formalize_20_Data_20_Name_case_1_local_3_case_1_local_9_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Formalize_20_Data_20_Name_case_1_local_3_case_1_local_9_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"1",ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_prefix,2,2,TERMINAL(0),TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_match(PARAMETERS,"\"/\"",TERMINAL(2));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_Formalize_20_Data_20_Name_case_1_local_3_case_1_local_9_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Formalize_20_Data_20_Name_case_1_local_3_case_1_local_9_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;
FINISHONSUCCESS

OUTPUT(0,TERMINAL(0))
FOOTER(1)
}

enum opTrigger vpx_method_Formalize_20_Data_20_Name_case_1_local_3_case_1_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Formalize_20_Data_20_Name_case_1_local_3_case_1_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Formalize_20_Data_20_Name_case_1_local_3_case_1_local_9_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Formalize_20_Data_20_Name_case_1_local_3_case_1_local_9_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Formalize_20_Data_20_Name_case_1_local_3_case_1_local_10_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Formalize_20_Data_20_Name_case_1_local_3_case_1_local_10_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"1",ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_suffix,2,2,TERMINAL(0),TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_match(PARAMETERS,"\"/\"",TERMINAL(3));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(4)
}

enum opTrigger vpx_method_Formalize_20_Data_20_Name_case_1_local_3_case_1_local_10_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Formalize_20_Data_20_Name_case_1_local_3_case_1_local_10_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;
FINISHONSUCCESS

OUTPUT(0,TERMINAL(0))
FOOTER(1)
}

enum opTrigger vpx_method_Formalize_20_Data_20_Name_case_1_local_3_case_1_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Formalize_20_Data_20_Name_case_1_local_3_case_1_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Formalize_20_Data_20_Name_case_1_local_3_case_1_local_10_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Formalize_20_Data_20_Name_case_1_local_3_case_1_local_10_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Formalize_20_Data_20_Name_case_1_local_3_case_1_local_11_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Formalize_20_Data_20_Name_case_1_local_3_case_1_local_11_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(8)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"/\"",ROOT(1));

result = vpx_method__22_Split_20_At_22_(PARAMETERS,TERMINAL(0),TERMINAL(1),ROOT(2),ROOT(3),ROOT(4));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"( ( \"/\" \"\" ) )",ROOT(5));

result = vpx_method__22_Replace_22_(PARAMETERS,TERMINAL(4),TERMINAL(5),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,3,1,TERMINAL(2),TERMINAL(3),TERMINAL(6),ROOT(7));

result = kSuccess;

OUTPUT(0,TERMINAL(7))
FOOTER(8)
}

enum opTrigger vpx_method_Formalize_20_Data_20_Name_case_1_local_3_case_1_local_11_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Formalize_20_Data_20_Name_case_1_local_3_case_1_local_11_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(1)
}

enum opTrigger vpx_method_Formalize_20_Data_20_Name_case_1_local_3_case_1_local_11(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Formalize_20_Data_20_Name_case_1_local_3_case_1_local_11(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Formalize_20_Data_20_Name_case_1_local_3_case_1_local_11_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Formalize_20_Data_20_Name_case_1_local_3_case_1_local_11_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Formalize_20_Data_20_Name_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Formalize_20_Data_20_Name_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(11)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(0),ROOT(3));

result = vpx_match(PARAMETERS,"Operation Data",TERMINAL(3));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Type,TERMINAL(0),ROOT(4),ROOT(5));

result = vpx_method_Formalize_20_Data_20_Name_case_1_local_3_case_1_local_5(PARAMETERS,TERMINAL(5));
FAILONFAILURE

result = vpx_match(PARAMETERS,"universal",TERMINAL(5));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Call_20_Super,TERMINAL(0),ROOT(6),ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP_or,2,0,TERMINAL(2),TERMINAL(7));
NEXTCASEONSUCCESS

REPEATBEGIN
LOOPTERMINALBEGIN(1)
LOOPTERMINAL(0,1,8)
result = vpx_method_Formalize_20_Data_20_Name_case_1_local_3_case_1_local_9(PARAMETERS,LOOP(0),ROOT(8));
REPEATFINISH

REPEATBEGIN
LOOPTERMINALBEGIN(1)
LOOPTERMINAL(0,8,9)
result = vpx_method_Formalize_20_Data_20_Name_case_1_local_3_case_1_local_10(PARAMETERS,LOOP(0),ROOT(9));
REPEATFINISH

result = vpx_method_Formalize_20_Data_20_Name_case_1_local_3_case_1_local_11(PARAMETERS,TERMINAL(9),ROOT(10));

result = kSuccess;

OUTPUT(0,TERMINAL(10))
FOOTER(11)
}

enum opTrigger vpx_method_Formalize_20_Data_20_Name_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Formalize_20_Data_20_Name_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( ( \"/\" \"\" ) )",ROOT(3));

result = vpx_method__22_Replace_22_(PARAMETERS,TERMINAL(1),TERMINAL(3),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Formalize_20_Data_20_Name_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Formalize_20_Data_20_Name_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Formalize_20_Data_20_Name_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
vpx_method_Formalize_20_Data_20_Name_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0);
return outcome;
}

enum opTrigger vpx_method_Formalize_20_Data_20_Name_case_1_local_4_case_1_local_4_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1,V_Object *root2);
enum opTrigger vpx_method_Formalize_20_Data_20_Name_case_1_local_4_case_1_local_4_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1,V_Object *root2)
{
HEADER(11)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP__22_length_22_,1,1,TERMINAL(0),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP__3E_,2,0,TERMINAL(3),TERMINAL(2));
FAILONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP__22_in_22_,3,1,TERMINAL(0),TERMINAL(1),TERMINAL(2),ROOT(4));

result = vpx_match(PARAMETERS,"0",TERMINAL(4));
FAILONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP__2D_1,1,1,TERMINAL(4),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_prefix,2,2,TERMINAL(0),TERMINAL(5),ROOT(6),ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP__22_length_22_,1,1,TERMINAL(1),ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP_prefix,2,2,TERMINAL(7),TERMINAL(8),ROOT(9),ROOT(10));

result = kSuccess;

OUTPUT(0,TERMINAL(6))
OUTPUT(1,TERMINAL(9))
OUTPUT(2,TERMINAL(10))
FOOTERSINGLECASE(11)
}

enum opTrigger vpx_method_Formalize_20_Data_20_Name_case_1_local_4_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Formalize_20_Data_20_Name_case_1_local_4_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(11)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\" \"",ROOT(2));

result = vpx_method_Formalize_20_Data_20_Name_case_1_local_4_case_1_local_4_case_1_local_3(PARAMETERS,TERMINAL(0),TERMINAL(2),TERMINAL(1),ROOT(3),ROOT(4),ROOT(5));
NEXTCASEONFAILURE

result = vpx_method__22_LTrim_22_(PARAMETERS,TERMINAL(5),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(3),TERMINAL(4),ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP__22_length_22_,1,1,TERMINAL(7),ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(7),TERMINAL(6),ROOT(9));

result = vpx_call_primitive(PARAMETERS,VPLP__2B_1,1,1,TERMINAL(8),ROOT(10));

result = kSuccess;

OUTPUT(0,TERMINAL(9))
OUTPUT(1,TERMINAL(10))
FOOTER(11)
}

enum opTrigger vpx_method_Formalize_20_Data_20_Name_case_1_local_4_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Formalize_20_Data_20_Name_case_1_local_4_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;
FINISHONSUCCESS

OUTPUT(0,TERMINAL(0))
OUTPUT(1,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Formalize_20_Data_20_Name_case_1_local_4_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Formalize_20_Data_20_Name_case_1_local_4_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Formalize_20_Data_20_Name_case_1_local_4_case_1_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1))
vpx_method_Formalize_20_Data_20_Name_case_1_local_4_case_1_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1);
return outcome;
}

enum opTrigger vpx_method_Formalize_20_Data_20_Name_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Formalize_20_Data_20_Name_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"1",ROOT(1));

result = vpx_method__22_Trim_22_(PARAMETERS,TERMINAL(0),ROOT(2));

REPEATBEGIN
LOOPTERMINALBEGIN(2)
LOOPTERMINAL(0,2,3)
LOOPTERMINAL(1,1,4)
result = vpx_method_Formalize_20_Data_20_Name_case_1_local_4_case_1_local_4(PARAMETERS,LOOP(0),LOOP(1),ROOT(3),ROOT(4));
REPEATFINISH

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Formalize_20_Data_20_Name_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Formalize_20_Data_20_Name_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Formalize_20_Data_20_Name_case_1_local_2(PARAMETERS,TERMINAL(1),ROOT(2));

result = vpx_method_Formalize_20_Data_20_Name_case_1_local_3(PARAMETERS,TERMINAL(0),TERMINAL(1),TERMINAL(2),ROOT(3));
NEXTCASEONFAILURE

result = vpx_method_Formalize_20_Data_20_Name_case_1_local_4(PARAMETERS,TERMINAL(3),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
OUTPUT(1,TERMINAL(2))
FOOTER(5)
}

enum opTrigger vpx_method_Formalize_20_Data_20_Name_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Formalize_20_Data_20_Name_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"FALSE",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
OUTPUT(1,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Formalize_20_Data_20_Name(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Formalize_20_Data_20_Name_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1))
vpx_method_Formalize_20_Data_20_Name_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1);
return outcome;
}

enum opTrigger vpx_method_Duplicate_20_Data_20_Name_20_Error_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Duplicate_20_Data_20_Name_20_Error_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADERWITHNONE(10)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Container,1,1,TERMINAL(0),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Name_20_Singular,1,1,TERMINAL(2),ROOT(3));

result = vpx_constant(PARAMETERS,"\"The %s \xE2\x80\x9C%s\xE2\x80\x9D already exists.\"",ROOT(4));

result = vpx_method_Formalize_20_Data_20_Name(PARAMETERS,TERMINAL(0),TERMINAL(1),ROOT(5),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP_lowercase,1,1,TERMINAL(3),ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP_format,3,1,TERMINAL(4),TERMINAL(7),TERMINAL(5),ROOT(8));

result = vpx_constant(PARAMETERS,"Duplicate Item Name",ROOT(9));

result = vpx_method_Do_20_User_20_Notice(PARAMETERS,TERMINAL(9),TERMINAL(8),NONE,NONE);

result = kSuccess;

FOOTERWITHNONE(10)
}

enum opTrigger vpx_method_Duplicate_20_Data_20_Name_20_Error_case_2_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Duplicate_20_Data_20_Name_20_Error_case_2_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = vpx_method_To_20_CFStringRef(PARAMETERS,TERMINAL(0),ROOT(2));

result = vpx_constant(PARAMETERS,"0.0",ROOT(3));

result = vpx_extconstant(PARAMETERS,kCFUserNotificationStopAlertLevel,ROOT(4));

PUTINTEGER(CFUserNotificationDisplayNotice( GETREAL(TERMINAL(3)),GETINTEGER(TERMINAL(4)),GETCONSTPOINTER(__CFURL,*,TERMINAL(1)),GETCONSTPOINTER(__CFURL,*,TERMINAL(1)),GETCONSTPOINTER(__CFURL,*,TERMINAL(1)),GETCONSTPOINTER(__CFString,*,TERMINAL(2)),GETCONSTPOINTER(__CFString,*,TERMINAL(1)),GETCONSTPOINTER(__CFString,*,TERMINAL(1))),5);
result = kSuccess;

CFRelease( GETCONSTPOINTER(void,*,TERMINAL(2)));
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Duplicate_20_Data_20_Name_20_Error_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Duplicate_20_Data_20_Name_20_Error_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Container,1,1,TERMINAL(0),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Name_20_Singular,1,1,TERMINAL(2),ROOT(3));

result = vpx_constant(PARAMETERS,"\"The %s \xE2\x80\x9C%s\xE2\x80\x9D already exists.\"",ROOT(4));

result = vpx_method_Formalize_20_Data_20_Name(PARAMETERS,TERMINAL(0),TERMINAL(1),ROOT(5),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP_lowercase,1,1,TERMINAL(3),ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP_format,3,1,TERMINAL(4),TERMINAL(7),TERMINAL(5),ROOT(8));

result = vpx_method_Debug_20_Console(PARAMETERS,TERMINAL(8));

result = vpx_method_Duplicate_20_Data_20_Name_20_Error_case_2_local_9(PARAMETERS,TERMINAL(8));

result = kSuccess;

FOOTER(9)
}

enum opTrigger vpx_method_Duplicate_20_Data_20_Name_20_Error(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Duplicate_20_Data_20_Name_20_Error_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Duplicate_20_Data_20_Name_20_Error_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Do_20_User_20_Notice_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Do_20_User_20_Notice_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
NEXTCASEONSUCCESS

result = vpx_method_Debug_20_OSError(PARAMETERS,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Do_20_User_20_Notice_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Do_20_User_20_Notice_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Debug_20_Console(PARAMETERS,TERMINAL(0));

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Do_20_User_20_Notice_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Do_20_User_20_Notice_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Do_20_User_20_Notice_case_1_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Do_20_User_20_Notice_case_1_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Do_20_User_20_Notice_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Do_20_User_20_Notice_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Do_20_User_20_Notice_case_1_local_7_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Do_20_User_20_Notice_case_1_local_7_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(0));
NEXTCASEONSUCCESS

result = vpx_method_To_20_CFStringRef(PARAMETERS,TERMINAL(0),ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Do_20_User_20_Notice_case_1_local_7_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Do_20_User_20_Notice_case_1_local_7_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Do_20_User_20_Notice_case_1_local_7_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Do_20_User_20_Notice_case_1_local_7_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Do_20_User_20_Notice_case_1_local_7_case_1_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Do_20_User_20_Notice_case_1_local_7_case_1_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Do_20_User_20_Notice_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3);
enum opTrigger vpx_method_Do_20_User_20_Notice_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(4));

result = vpx_method_To_20_CFStringRef(PARAMETERS,TERMINAL(1),ROOT(5));

result = vpx_constant(PARAMETERS,"0.0",ROOT(6));

result = vpx_method_Do_20_User_20_Notice_case_1_local_7_case_1_local_5(PARAMETERS,TERMINAL(2),ROOT(7));

PUTINTEGER(CFUserNotificationDisplayNotice( GETREAL(TERMINAL(6)),GETINTEGER(TERMINAL(0)),GETCONSTPOINTER(__CFURL,*,TERMINAL(4)),GETCONSTPOINTER(__CFURL,*,TERMINAL(4)),GETCONSTPOINTER(__CFURL,*,TERMINAL(4)),GETCONSTPOINTER(__CFString,*,TERMINAL(5)),GETCONSTPOINTER(__CFString,*,TERMINAL(7)),GETCONSTPOINTER(__CFString,*,TERMINAL(4))),8);
result = kSuccess;

CFRelease( GETCONSTPOINTER(void,*,TERMINAL(5)));
result = kSuccess;

result = vpx_method_CF_20_Release(PARAMETERS,TERMINAL(7));

result = kSuccess;

FOOTERSINGLECASE(9)
}

enum opTrigger vpx_method_Do_20_User_20_Notice(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_method_Default_20_Zero(PARAMETERS,TERMINAL(2),ROOT(4));

result = vpx_method_Default_20_NULL(PARAMETERS,TERMINAL(1),ROOT(5));

result = vpx_method_Do_20_User_20_Notice_case_1_local_4(PARAMETERS,TERMINAL(0),TERMINAL(5));

result = vpx_method_Do_20_User_20_Notice_case_1_local_5(PARAMETERS,TERMINAL(0),TERMINAL(4));
TERMINATEONFAILURE

result = vpx_method_Default_20_FALSE(PARAMETERS,TERMINAL(3),ROOT(6));

result = vpx_method_Do_20_User_20_Notice_case_1_local_7(PARAMETERS,TERMINAL(4),TERMINAL(0),TERMINAL(5),TERMINAL(6));

result = kSuccess;

FOOTERSINGLECASE(7)
}




	Nat4 tempAttribute_Tool_20_Tracker_2F_Dirty_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X05970003, 0000000000, 0000000000,
0000000000, 0000000000, 0X00010020
	};
	Nat4 tempAttribute_Tool_20_Tracker_2F_Tools[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X05970007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Stack_20_UI_20_Service_2F_Name[] = {
0000000000, 0X0000002C, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X06540006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X0D000000, 0X53746163, 0X6B205365, 0X72766963,
0X65000000
	};
	Nat4 tempAttribute_Stack_20_UI_20_Service_2F_Required_20_Services[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Stack_20_UI_20_Service_2F_Initial_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0X00010000
	};
	Nat4 tempAttribute_Stack_20_UI_20_Service_2F_Active_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Stack_20_UI_20_Service_2F_Stacks[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X031E0007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Stack_20_Data_2F_Frame[] = {
0000000000, 0X0000008C, 0X00000028, 0X00000005, 0X00000014, 0X00000050, 0X0000004C, 0X00000048,
0X00000044, 0X0000003C, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000044,
0X00000004, 0X00000054, 0X0000006C, 0X00000084, 0X0000009C, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0X0000003C, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000,
0X0000003C, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000104, 0X00000004,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000168
	};
	Nat4 tempAttribute_Stack_20_Data_2F_List[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_VPLProject_20_AppName_20_Sheet_2F_Name[] = {
0000000000, 0X00000034, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X15000000, 0X556E7469, 0X746C6564, 0X20536865,
0X65742057, 0X696E646F, 0X77000000
	};
	Nat4 tempAttribute_VPLProject_20_AppName_20_Sheet_2F_Window_20_Event_20_Handler[] = {
0000000000, 0X000005A8, 0X00000114, 0X00000040, 0X00000014, 0X00000688, 0X00000684, 0X0000067C,
0X00000418, 0X00000634, 0X00000630, 0X00000628, 0X00000414, 0X000005E0, 0X000005DC, 0X000005D4,
0X00000410, 0X0000058C, 0X00000588, 0X00000580, 0X0000040C, 0X00000538, 0X00000534, 0X0000052C,
0X00000408, 0X000004E4, 0X000004E0, 0X000004D8, 0X00000404, 0X00000490, 0X0000048C, 0X00000484,
0X00000400, 0X0000043C, 0X00000438, 0X00000430, 0X000003FC, 0X000003F4, 0X00000180, 0X0000017C,
0X000003AC, 0X00000168, 0X00000380, 0X00000164, 0X00000354, 0X0000033C, 0X00000314, 0X0000031C,
0X000002FC, 0X000002F4, 0X0000015C, 0X000002CC, 0X000002B4, 0X0000028C, 0X00000294, 0X00000210,
0X00000268, 0X00000250, 0X00000228, 0X00000230, 0X0000020C, 0X00000204, 0X00000158, 0X000001D4,
0X00000154, 0X000001A4, 0X0000014C, 0X00000128, 0X00000130, 0X27000008, 0000000000, 0000000000,
0000000000, 0000000000, 0X0000014C, 0X00000011, 0X00000134, 0X43617262, 0X6F6E2045, 0X76656E74,
0X2043616C, 0X6C626163, 0X6B000000, 0X00000190, 0000000000, 0X000001C0, 0X000001F0, 0X000002E0,
0000000000, 0X0000036C, 0X00000398, 0000000000, 0000000000, 0000000000, 0000000000, 0X000003C8,
0X000003E0, 0000000000, 0000000000, 0000000000, 0X00000006, 0000000000, 0000000000, 0000000000,
0000000000, 0X000001AC, 0X11000000, 0X6B457665, 0X6E74436C, 0X61737357, 0X696E646F, 0X77000000,
0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X000001DC, 0X10000000, 0X2F434520,
0X48616E64, 0X6C652045, 0X76656E74, 0000000000, 0X00000007, 0000000000, 0000000000, 0000000000,
0000000000, 0X0000020C, 0X00000002, 0X00000214, 0X00000278, 0X15000008, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000250, 0X00000001, 0X00000234, 0X41747472, 0X69627574, 0X6520496E,
0X70757420, 0X53706563, 0X69666965, 0X72000000, 0X00000254, 0X00000006, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000270, 0X05000000, 0X4F776E65, 0X72000000, 0X15000008, 0000000000,
0000000000, 0000000000, 0000000000, 0X000002B4, 0X00000001, 0X00000298, 0X41747472, 0X69627574,
0X6520496E, 0X70757420, 0X53706563, 0X69666965, 0X72000000, 0X000002B8, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X000002D4, 0X09000000, 0X54686520, 0X4576656E, 0X74000000,
0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X000002FC, 0X00000001, 0X00000300,
0X16000008, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000033C, 0X00000001, 0X00000320,
0X41747472, 0X69627574, 0X65204F75, 0X74707574, 0X20537065, 0X63696669, 0X65720000, 0X00000340,
0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000035C, 0X0F000000, 0X43616C6C,
0X6261636B, 0X20526573, 0X756C7400, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000388, 0X0F000000, 0X2F446F20, 0X43452043, 0X616C6C62, 0X61636B00, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X000003B4, 0X13000000, 0X4576656E, 0X7448616E, 0X646C6572,
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
	Nat4 tempAttribute_VPLProject_20_AppName_20_Sheet_2F_Null_20_on_20_Cancel_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};


Nat4 VPLC_Tool_20_Tracker_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Tool_20_Tracker_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 200 300 } */
	tempAttribute = attribute_add("Dirty?",tempClass,tempAttribute_Tool_20_Tracker_2F_Dirty_3F_,environment);
	tempAttribute = attribute_add("Tools",tempClass,tempAttribute_Tool_20_Tracker_2F_Tools,environment);
/* Stop Attributes */

/* NULL SUPER CLASS */
	return kNOERROR;
}

/* Start Universals: { 412 537 }{ 200 300 } */
enum opTrigger vpx_method_Tool_20_Tracker_2F_Find_20_Tools_case_1_local_2_case_1_local_5_case_1_local_5_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Tool_20_Tracker_2F_Find_20_Tools_case_1_local_2_case_1_local_5_case_1_local_5_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(7)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Select_20_Name,1,1,TERMINAL(2),ROOT(3));

result = vpx_instantiate(PARAMETERS,kVPXClass_Key_20_Sort_20_Helper,1,1,NONE,ROOT(4));

result = vpx_set(PARAMETERS,kVPXValue_Key,TERMINAL(4),TERMINAL(3),ROOT(5));

result = vpx_set(PARAMETERS,kVPXValue_Value,TERMINAL(4),TERMINAL(0),ROOT(6));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERSINGLECASEWITHNONE(7)
}

enum opTrigger vpx_method_Tool_20_Tracker_2F_Find_20_Tools_case_1_local_2_case_1_local_5_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Tool_20_Tracker_2F_Find_20_Tools_case_1_local_2_case_1_local_5_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(3)
INPUT(0,0)
result = kSuccess;

if( (repeatLimit = vpx_multiplex(1,TERMINAL(0))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Tool_20_Tracker_2F_Find_20_Tools_case_1_local_2_case_1_local_5_case_1_local_5_case_1_local_2(PARAMETERS,LIST(0),ROOT(1));
LISTROOT(1,0)
REPEATFINISH
LISTROOTFINISH(1,0)
LISTROOTEND
} else {
ROOTEMPTY(1)
}

result = vpx_method_Key_20_Sort_20_Helper_2F_Sort_20_Key_20_Helper_20_List(PARAMETERS,TERMINAL(1),NONE,ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASEWITHNONE(3)
}

enum opTrigger vpx_method_Tool_20_Tracker_2F_Find_20_Tools_case_1_local_2_case_1_local_5_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Tool_20_Tracker_2F_Find_20_Tools_case_1_local_2_case_1_local_5_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP__3D_,2,0,TERMINAL(0),TERMINAL(1));
TERMINATEONSUCCESS

result = vpx_set(PARAMETERS,kVPXValue_List,TERMINAL(2),TERMINAL(0),ROOT(3));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Tool_20_Tracker_2F_Find_20_Tools_case_1_local_2_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Tool_20_Tracker_2F_Find_20_Tools_case_1_local_2_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Tools",ROOT(1));

result = vpx_method_Find_20_Project_20_Info_20_List(PARAMETERS,TERMINAL(0),TERMINAL(1),ROOT(2));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List,1,1,TERMINAL(2),ROOT(3));

result = vpx_method_Tool_20_Tracker_2F_Find_20_Tools_case_1_local_2_case_1_local_5_case_1_local_5(PARAMETERS,TERMINAL(3),ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Name,1,1,TERMINAL(0),ROOT(5));

result = vpx_method_Tool_20_Tracker_2F_Find_20_Tools_case_1_local_2_case_1_local_5_case_1_local_7(PARAMETERS,TERMINAL(4),TERMINAL(3),TERMINAL(2));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
OUTPUT(1,TERMINAL(5))
FOOTER(6)
}

enum opTrigger vpx_method_Tool_20_Tracker_2F_Find_20_Tools_case_1_local_2_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Tool_20_Tracker_2F_Find_20_Tools_case_1_local_2_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADERWITHNONE(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

OUTPUT(0,NONE)
OUTPUT(1,NONE)
FOOTERWITHNONE(1)
}

enum opTrigger vpx_method_Tool_20_Tracker_2F_Find_20_Tools_case_1_local_2_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Tool_20_Tracker_2F_Find_20_Tools_case_1_local_2_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Tool_20_Tracker_2F_Find_20_Tools_case_1_local_2_case_1_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1))
vpx_method_Tool_20_Tracker_2F_Find_20_Tools_case_1_local_2_case_1_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1);
return outcome;
}

enum opTrigger vpx_method_Tool_20_Tracker_2F_Find_20_Tools_case_1_local_2_case_1_local_8_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Tool_20_Tracker_2F_Find_20_Tools_case_1_local_2_case_1_local_8_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\'Tl00\'",ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP__2B2B_,2,1,TERMINAL(1),TERMINAL(0),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Tool_20_Tracker_2F_Find_20_Tools_case_1_local_2_case_1_local_8_case_1_local_6_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Tool_20_Tracker_2F_Find_20_Tools_case_1_local_2_case_1_local_8_case_1_local_6_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Select_20_Name,1,1,TERMINAL(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_detach_2D_l,1,2,TERMINAL(1),ROOT(5),ROOT(6));

result = vpx_constant(PARAMETERS,"0",ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,3,1,TERMINAL(4),TERMINAL(7),TERMINAL(5),ROOT(8));

result = kSuccess;

OUTPUT(0,TERMINAL(8))
OUTPUT(1,TERMINAL(6))
FOOTERSINGLECASE(9)
}

enum opTrigger vpx_method_Tool_20_Tracker_2F_Find_20_Tools_case_1_local_2_case_1_local_8_case_1_local_6_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Tool_20_Tracker_2F_Find_20_Tools_case_1_local_2_case_1_local_8_case_1_local_6_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_extconstant(PARAMETERS,kMenuItemAttrDisabled,ROOT(3));

result = vpx_constant(PARAMETERS,"0",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,3,1,TERMINAL(1),TERMINAL(3),TERMINAL(4),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_attach_2D_l,2,1,TERMINAL(5),TERMINAL(2),ROOT(6));

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTER(7)
}

enum opTrigger vpx_method_Tool_20_Tracker_2F_Find_20_Tools_case_1_local_2_case_1_local_8_case_1_local_6_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Tool_20_Tracker_2F_Find_20_Tools_case_1_local_2_case_1_local_8_case_1_local_6_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Tool_20_Tracker_2F_Find_20_Tools_case_1_local_2_case_1_local_8_case_1_local_6_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Tool_20_Tracker_2F_Find_20_Tools_case_1_local_2_case_1_local_8_case_1_local_6_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Tool_20_Tracker_2F_Find_20_Tools_case_1_local_2_case_1_local_8_case_1_local_6_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
vpx_method_Tool_20_Tracker_2F_Find_20_Tools_case_1_local_2_case_1_local_8_case_1_local_6_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0);
return outcome;
}

enum opTrigger vpx_method_Tool_20_Tracker_2F_Find_20_Tools_case_1_local_2_case_1_local_8_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Tool_20_Tracker_2F_Find_20_Tools_case_1_local_2_case_1_local_8_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

if( (repeatLimit = vpx_multiplex(1,TERMINAL(0))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
LOOPTERMINALBEGIN(1)
LOOPTERMINAL(0,1,5)
result = vpx_method_Tool_20_Tracker_2F_Find_20_Tools_case_1_local_2_case_1_local_8_case_1_local_6_case_1_local_2(PARAMETERS,LIST(0),LOOP(0),ROOT(4),ROOT(5));
LISTROOT(4,0)
REPEATFINISH
LISTROOTFINISH(4,0)
LISTROOTEND
} else {
ROOTEMPTY(4)
ROOTNULL(5,TERMINAL(1))
}

result = vpx_method_Tool_20_Tracker_2F_Find_20_Tools_case_1_local_2_case_1_local_8_case_1_local_6_case_1_local_3(PARAMETERS,TERMINAL(3),TERMINAL(2),TERMINAL(4),ROOT(6));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
OUTPUT(1,TERMINAL(6))
FOOTERSINGLECASE(7)
}

enum opTrigger vpx_method_Tool_20_Tracker_2F_Find_20_Tools_case_1_local_2_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Tool_20_Tracker_2F_Find_20_Tools_case_1_local_2_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(11)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"1",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP__28_length_29_,1,1,TERMINAL(2),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP__3E_,2,1,TERMINAL(4),TERMINAL(3),ROOT(5));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(1))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Tool_20_Tracker_2F_Find_20_Tools_case_1_local_2_case_1_local_8_case_1_local_5(PARAMETERS,LIST(1),ROOT(6));
LISTROOT(6,0)
REPEATFINISH
LISTROOTFINISH(6,0)
LISTROOTEND
} else {
ROOTEMPTY(6)
}

if( (repeatLimit = vpx_multiplex(2,TERMINAL(0),TERMINAL(2))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
LOOPTERMINALBEGIN(1)
LOOPTERMINAL(0,6,7)
result = vpx_method_Tool_20_Tracker_2F_Find_20_Tools_case_1_local_2_case_1_local_8_case_1_local_6(PARAMETERS,LIST(0),LOOP(0),LIST(2),TERMINAL(5),ROOT(7),ROOT(8));
LISTROOT(8,0)
REPEATFINISH
LISTROOTFINISH(8,0)
LISTROOTEND
} else {
ROOTNULL(7,TERMINAL(6))
ROOTEMPTY(8)
}

result = vpx_constant(PARAMETERS,"( )",ROOT(9));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(8))) ){
REPEATBEGINWITHCOUNTER
LOOPTERMINALBEGIN(1)
LOOPTERMINAL(0,9,10)
result = vpx_call_primitive(PARAMETERS,VPLP__28_join_29_,2,1,LOOP(0),LIST(8),ROOT(10));
REPEATFINISH
} else {
ROOTNULL(10,TERMINAL(9))
}

result = kSuccess;

OUTPUT(0,TERMINAL(10))
FOOTERSINGLECASE(11)
}

enum opTrigger vpx_method_Tool_20_Tracker_2F_Find_20_Tools_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Tool_20_Tracker_2F_Find_20_Tools_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(8)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Get_20_VPL_20_Data(PARAMETERS,ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Projects,1,1,TERMINAL(1),ROOT(2));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(2))) ){
LISTROOTBEGIN(2)
REPEATBEGINWITHCOUNTER
result = vpx_method_Tool_20_Tracker_2F_Find_20_Tools_case_1_local_2_case_1_local_5(PARAMETERS,LIST(2),ROOT(3),ROOT(4));
LISTROOT(3,0)
LISTROOT(4,1)
REPEATFINISH
LISTROOTFINISH(3,0)
LISTROOTFINISH(4,1)
LISTROOTEND
} else {
ROOTEMPTY(3)
ROOTEMPTY(4)
}

result = vpx_method__28_Flatten_29_(PARAMETERS,TERMINAL(3),ROOT(5));

result = vpx_method_Make_20_Count(PARAMETERS,TERMINAL(5),ROOT(6));

result = vpx_method_Tool_20_Tracker_2F_Find_20_Tools_case_1_local_2_case_1_local_8(PARAMETERS,TERMINAL(3),TERMINAL(6),TERMINAL(4),ROOT(7));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
OUTPUT(1,TERMINAL(7))
FOOTER(8)
}

enum opTrigger vpx_method_Tool_20_Tracker_2F_Find_20_Tools_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Tool_20_Tracker_2F_Find_20_Tools_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( )",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
OUTPUT(1,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Tool_20_Tracker_2F_Find_20_Tools_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Tool_20_Tracker_2F_Find_20_Tools_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Tool_20_Tracker_2F_Find_20_Tools_case_1_local_2_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1))
vpx_method_Tool_20_Tracker_2F_Find_20_Tools_case_1_local_2_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1);
return outcome;
}

enum opTrigger vpx_method_Tool_20_Tracker_2F_Find_20_Tools(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(9)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Tool_20_Tracker_2F_Find_20_Tools_case_1_local_2(PARAMETERS,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_Tools,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP__3D_,2,1,TERMINAL(4),TERMINAL(1),ROOT(5));

result = vpx_set(PARAMETERS,kVPXValue_Tools,TERMINAL(3),TERMINAL(1),ROOT(6));

result = vpx_constant(PARAMETERS,"TRUE",ROOT(7));

result = vpx_set(PARAMETERS,kVPXValue_Dirty_3F_,TERMINAL(0),TERMINAL(7),ROOT(8));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
OUTPUT(1,TERMINAL(2))
FOOTERSINGLECASE(9)
}

enum opTrigger vpx_method_Tool_20_Tracker_2F_Make_20_Dirty(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"FALSE",ROOT(1));

result = vpx_set(PARAMETERS,kVPXValue_Dirty_3F_,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Tool_20_Tracker_2F_Update_20_Menu_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Tool_20_Tracker_2F_Update_20_Menu_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"1",ROOT(1));

PUTINTEGER(CountMenuItems( GETPOINTER(0,OpaqueMenuRef,*,ROOT(3),TERMINAL(0))),2);
result = kSuccess;

PUTINTEGER(DeleteMenuItems( GETPOINTER(0,OpaqueMenuRef,*,ROOT(5),TERMINAL(0)),GETINTEGER(TERMINAL(1)),GETINTEGER(TERMINAL(2))),4);
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Tool_20_Tracker_2F_Update_20_Menu_case_1_local_7_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Tool_20_Tracker_2F_Update_20_Menu_case_1_local_7_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(12)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,3,TERMINAL(1),ROOT(2),ROOT(3),ROOT(4));

result = vpx_method_To_20_CFStringRef(PARAMETERS,TERMINAL(2),ROOT(5));

result = vpx_constant(PARAMETERS,"NULL",ROOT(6));

result = vpx_extconstant(PARAMETERS,kMenuItemAttrIgnoreMeta,ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP_bit_2D_or,2,1,TERMINAL(7),TERMINAL(3),ROOT(8));

PUTINTEGER(AppendMenuItemTextWithCFString( GETPOINTER(0,OpaqueMenuRef,*,ROOT(10),TERMINAL(0)),GETCONSTPOINTER(__CFString,*,TERMINAL(5)),GETINTEGER(TERMINAL(8)),GETINTEGER(TERMINAL(4)),GETPOINTER(2,unsigned short,*,ROOT(11),TERMINAL(6))),9);
result = kSuccess;

CFRelease( GETCONSTPOINTER(void,*,TERMINAL(5)));
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(12)
}

enum opTrigger vpx_method_Tool_20_Tracker_2F_Update_20_Menu_case_1_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Tool_20_Tracker_2F_Update_20_Menu_case_1_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"(  )",TERMINAL(0));
NEXTCASEONSUCCESS

if( (repeatLimit = vpx_multiplex(1,TERMINAL(0))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Tool_20_Tracker_2F_Update_20_Menu_case_1_local_7_case_1_local_3(PARAMETERS,TERMINAL(1),LIST(0));
REPEATFINISH
} else {
}

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Tool_20_Tracker_2F_Update_20_Menu_case_1_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Tool_20_Tracker_2F_Update_20_Menu_case_1_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(10)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"No Tools Installed",ROOT(2));

result = vpx_method_To_20_CFStringRef(PARAMETERS,TERMINAL(2),ROOT(3));

result = vpx_extconstant(PARAMETERS,kMenuItemAttrDisabled,ROOT(4));

result = vpx_constant(PARAMETERS,"0",ROOT(5));

result = vpx_constant(PARAMETERS,"NULL",ROOT(6));

PUTINTEGER(AppendMenuItemTextWithCFString( GETPOINTER(0,OpaqueMenuRef,*,ROOT(8),TERMINAL(1)),GETCONSTPOINTER(__CFString,*,TERMINAL(3)),GETINTEGER(TERMINAL(4)),GETINTEGER(TERMINAL(5)),GETPOINTER(2,unsigned short,*,ROOT(9),TERMINAL(6))),7);
result = kSuccess;

CFRelease( GETCONSTPOINTER(void,*,TERMINAL(3)));
result = kSuccess;

result = kSuccess;

FOOTER(10)
}

enum opTrigger vpx_method_Tool_20_Tracker_2F_Update_20_Menu_case_1_local_7_case_3_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Tool_20_Tracker_2F_Update_20_Menu_case_1_local_7_case_3_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Select_20_Name,1,1,TERMINAL(2),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Tool_20_Tracker_2F_Update_20_Menu_case_1_local_7_case_3_local_6_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Tool_20_Tracker_2F_Update_20_Menu_case_1_local_7_case_3_local_6_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\'Tl00\'",ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP__2B2B_,2,1,TERMINAL(1),TERMINAL(0),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Tool_20_Tracker_2F_Update_20_Menu_case_1_local_7_case_3_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Tool_20_Tracker_2F_Update_20_Menu_case_1_local_7_case_3_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(10)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_method_To_20_CFStringRef(PARAMETERS,TERMINAL(1),ROOT(3));

result = vpx_constant(PARAMETERS,"NULL",ROOT(4));

result = vpx_method_Tool_20_Tracker_2F_Update_20_Menu_case_1_local_7_case_3_local_6_case_1_local_4(PARAMETERS,TERMINAL(2),ROOT(5));

result = vpx_extconstant(PARAMETERS,kMenuItemAttrIgnoreMeta,ROOT(6));

PUTINTEGER(AppendMenuItemTextWithCFString( GETPOINTER(0,OpaqueMenuRef,*,ROOT(8),TERMINAL(0)),GETCONSTPOINTER(__CFString,*,TERMINAL(3)),GETINTEGER(TERMINAL(6)),GETINTEGER(TERMINAL(5)),GETPOINTER(2,unsigned short,*,ROOT(9),TERMINAL(4))),7);
result = kSuccess;

CFRelease( GETCONSTPOINTER(void,*,TERMINAL(3)));
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(10)
}

enum opTrigger vpx_method_Tool_20_Tracker_2F_Update_20_Menu_case_1_local_7_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Tool_20_Tracker_2F_Update_20_Menu_case_1_local_7_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

if( (repeatLimit = vpx_multiplex(1,TERMINAL(0))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Tool_20_Tracker_2F_Update_20_Menu_case_1_local_7_case_3_local_2(PARAMETERS,LIST(0),ROOT(2));
LISTROOT(2,0)
REPEATFINISH
LISTROOTFINISH(2,0)
LISTROOTEND
} else {
ROOTEMPTY(2)
}

result = vpx_method_Make_20_Count(PARAMETERS,TERMINAL(2),ROOT(3));

result = vpx_match(PARAMETERS,"(  )",TERMINAL(3));
NEXTCASEONSUCCESS

if( (repeatLimit = vpx_multiplex(2,TERMINAL(2),TERMINAL(3))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Tool_20_Tracker_2F_Update_20_Menu_case_1_local_7_case_3_local_6(PARAMETERS,TERMINAL(1),LIST(2),LIST(3));
REPEATFINISH
} else {
}

result = kSuccess;

FOOTER(5)
}

enum opTrigger vpx_method_Tool_20_Tracker_2F_Update_20_Menu_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Tool_20_Tracker_2F_Update_20_Menu_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Tool_20_Tracker_2F_Update_20_Menu_case_1_local_7_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
if(vpx_method_Tool_20_Tracker_2F_Update_20_Menu_case_1_local_7_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Tool_20_Tracker_2F_Update_20_Menu_case_1_local_7_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Tool_20_Tracker_2F_Update_20_Menu_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Tool_20_Tracker_2F_Update_20_Menu_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Find_20_Tools,1,2,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_constant(PARAMETERS,"2222",ROOT(3));

PUTPOINTER(OpaqueMenuRef,*,GetMenuHandle( GETINTEGER(TERMINAL(3))),4);
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(4));
NEXTCASEONSUCCESS

result = vpx_method_Tool_20_Tracker_2F_Update_20_Menu_case_1_local_6(PARAMETERS,TERMINAL(4));

result = vpx_method_Tool_20_Tracker_2F_Update_20_Menu_case_1_local_7(PARAMETERS,TERMINAL(2),TERMINAL(4));

result = kSuccess;

FOOTER(5)
}

enum opTrigger vpx_method_Tool_20_Tracker_2F_Update_20_Menu_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Tool_20_Tracker_2F_Update_20_Menu_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_Tool_20_Tracker_2F_Update_20_Menu(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Tool_20_Tracker_2F_Update_20_Menu_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Tool_20_Tracker_2F_Update_20_Menu_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Tool_20_Tracker_2F_Close(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( )",ROOT(1));

result = vpx_set(PARAMETERS,kVPXValue_Tools,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Make_20_Dirty,1,0,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Tool_20_Tracker_2F_Open(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Tool_20_Tracker_2F_Can_20_Do_3F_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"TRUE",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Tool_20_Tracker_2F_Run_20_Tool_20_Number(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(11)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Tools,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_method__28_Safe_20_Get_29_(PARAMETERS,TERMINAL(3),TERMINAL(1),ROOT(4));
TERMINATEONFAILURE

result = vpx_constant(PARAMETERS,"( )",ROOT(5));

result = vpx_constant(PARAMETERS,"0",ROOT(6));

result = vpx_constant(PARAMETERS,"FALSE",ROOT(7));

result = vpx_constant(PARAMETERS,"NULL",ROOT(8));

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(4),ROOT(9),ROOT(10));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Execute,5,0,TERMINAL(10),TERMINAL(5),TERMINAL(6),TERMINAL(8),TERMINAL(7));
TERMINATEONFAILURE

result = kSuccess;

FOOTERSINGLECASE(11)
}

enum opTrigger vpx_method_Tool_20_Tracker_2F_Run_20_Tool_20_Name(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADERWITHNONE(12)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Tools,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_method_Find_20_Instance(PARAMETERS,TERMINAL(3),NONE,TERMINAL(1),ROOT(4),ROOT(5));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(5));
TERMINATEONSUCCESS

result = vpx_constant(PARAMETERS,"( )",ROOT(6));

result = vpx_constant(PARAMETERS,"0",ROOT(7));

result = vpx_constant(PARAMETERS,"FALSE",ROOT(8));

result = vpx_constant(PARAMETERS,"NULL",ROOT(9));

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(5),ROOT(10),ROOT(11));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Execute,5,0,TERMINAL(11),TERMINAL(6),TERMINAL(7),TERMINAL(9),TERMINAL(8));
TERMINATEONFAILURE

result = kSuccess;

FOOTERSINGLECASEWITHNONE(12)
}

/* Stop Universals */



Nat4 VPLC_Stack_20_UI_20_Service_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Stack_20_UI_20_Service_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 200 300 } */
	tempAttribute = attribute_add("Name",tempClass,tempAttribute_Stack_20_UI_20_Service_2F_Name,environment);
	tempAttribute = attribute_add("Required Services",tempClass,tempAttribute_Stack_20_UI_20_Service_2F_Required_20_Services,environment);
	tempAttribute = attribute_add("Initial?",tempClass,tempAttribute_Stack_20_UI_20_Service_2F_Initial_3F_,environment);
	tempAttribute = attribute_add("Active?",tempClass,tempAttribute_Stack_20_UI_20_Service_2F_Active_3F_,environment);
	tempAttribute = attribute_add("Stacks",tempClass,tempAttribute_Stack_20_UI_20_Service_2F_Stacks,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"Service Abstract");
	return kNOERROR;
}

/* Start Universals: { 538 845 }{ 200 300 } */
enum opTrigger vpx_method_Stack_20_UI_20_Service_2F_Update_20_Menu_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Stack_20_UI_20_Service_2F_Update_20_Menu_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Stacks,TERMINAL(0),ROOT(1),ROOT(2));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(2))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Construct_20_Title,1,1,LIST(2),ROOT(3));
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

enum opTrigger vpx_method_Stack_20_UI_20_Service_2F_Update_20_Menu_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex);
enum opTrigger vpx_method_Stack_20_UI_20_Service_2F_Update_20_Menu_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex)
{
HEADER(1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"0",ROOT(0));

HiliteMenu( GETINTEGER(TERMINAL(0)));
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Stack_20_UI_20_Service_2F_Update_20_Menu_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Stack_20_UI_20_Service_2F_Update_20_Menu_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0,V_Object *root1)
{
HEADERWITHNONE(9)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(0));

result = vpx_constant(PARAMETERS,"\'rStk\'",ROOT(1));

result = vpx_constant(PARAMETERS,"1",ROOT(2));

PUTINTEGER(GetIndMenuItemWithCommandID( GETPOINTER(0,OpaqueMenuRef,*,ROOT(4),TERMINAL(0)),GETINTEGER(TERMINAL(1)),GETINTEGER(TERMINAL(2)),GETPOINTER(0,OpaqueMenuRef,**,ROOT(5),NONE),GETPOINTER(2,unsigned short,*,ROOT(6),NONE)),3);
result = kSuccess;

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(3));
FAILONFAILURE

result = vpx_method_Get_20_UInt16(PARAMETERS,TERMINAL(6),NONE,ROOT(7),ROOT(8));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
OUTPUT(1,TERMINAL(8))
FOOTERSINGLECASEWITHNONE(9)
}

enum opTrigger vpx_method_Stack_20_UI_20_Service_2F_Update_20_Menu_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Stack_20_UI_20_Service_2F_Update_20_Menu_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

PUTINTEGER(CountMenuItems( GETPOINTER(0,OpaqueMenuRef,*,ROOT(3),TERMINAL(0))),2);
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP__2B_1,1,1,TERMINAL(1),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP__2D2D_,2,1,TERMINAL(2),TERMINAL(1),ROOT(5));

result = vpx_constant(PARAMETERS,"0",ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP__3E_,2,0,TERMINAL(5),TERMINAL(6));
TERMINATEONFAILURE

PUTINTEGER(DeleteMenuItems( GETPOINTER(0,OpaqueMenuRef,*,ROOT(8),TERMINAL(0)),GETINTEGER(TERMINAL(4)),GETINTEGER(TERMINAL(5))),7);
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(9)
}

enum opTrigger vpx_method_Stack_20_UI_20_Service_2F_Update_20_Menu_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Stack_20_UI_20_Service_2F_Update_20_Menu_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"(  )",TERMINAL(1));
TERMINATEONSUCCESS

result = vpx_constant(PARAMETERS,"NULL",ROOT(2));

result = vpx_extconstant(PARAMETERS,kMenuItemAttrSeparator,ROOT(3));

result = vpx_constant(PARAMETERS,"0",ROOT(4));

PUTINTEGER(AppendMenuItemTextWithCFString( GETPOINTER(0,OpaqueMenuRef,*,ROOT(6),TERMINAL(0)),GETCONSTPOINTER(__CFString,*,TERMINAL(2)),GETINTEGER(TERMINAL(3)),GETINTEGER(TERMINAL(4)),GETPOINTER(2,unsigned short,*,ROOT(7),TERMINAL(2))),5);
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(8)
}

enum opTrigger vpx_method_Stack_20_UI_20_Service_2F_Update_20_Menu_case_1_local_7_case_1_local_4_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Stack_20_UI_20_Service_2F_Update_20_Menu_case_1_local_7_case_1_local_4_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\'Sk00\'",ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP__2B2B_,2,1,TERMINAL(1),TERMINAL(0),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Stack_20_UI_20_Service_2F_Update_20_Menu_case_1_local_7_case_1_local_4_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Stack_20_UI_20_Service_2F_Update_20_Menu_case_1_local_7_case_1_local_4_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Stack",ROOT(2));

result = vpx_method_Find_20_Item_20_IconRef(PARAMETERS,TERMINAL(2),ROOT(3));
TERMINATEONFAILURE

result = vpx_extconstant(PARAMETERS,kMenuIconRefType,ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_from_2D_pointer,1,1,TERMINAL(3),ROOT(5));

PUTINTEGER(SetMenuItemIconHandle( GETPOINTER(0,OpaqueMenuRef,*,ROOT(7),TERMINAL(0)),GETINTEGER(TERMINAL(1)),GETINTEGER(TERMINAL(4)),GETPOINTER(1,char,**,ROOT(8),TERMINAL(5))),6);
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(9)
}

enum opTrigger vpx_method_Stack_20_UI_20_Service_2F_Update_20_Menu_case_1_local_7_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Stack_20_UI_20_Service_2F_Update_20_Menu_case_1_local_7_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADERWITHNONE(11)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,kMenuItemAttrIgnoreMeta,ROOT(3));

result = vpx_method_Stack_20_UI_20_Service_2F_Update_20_Menu_case_1_local_7_case_1_local_4_case_1_local_3(PARAMETERS,TERMINAL(2),ROOT(4));

result = vpx_method_To_20_CFStringRef(PARAMETERS,TERMINAL(1),ROOT(5));

PUTINTEGER(AppendMenuItemTextWithCFString( GETPOINTER(0,OpaqueMenuRef,*,ROOT(7),TERMINAL(0)),GETCONSTPOINTER(__CFString,*,TERMINAL(5)),GETINTEGER(TERMINAL(3)),GETINTEGER(TERMINAL(4)),GETPOINTER(2,unsigned short,*,ROOT(8),NONE)),6);
result = kSuccess;

result = vpx_method_Get_20_UInt16(PARAMETERS,TERMINAL(8),NONE,ROOT(9),ROOT(10));

CFRelease( GETCONSTPOINTER(void,*,TERMINAL(5)));
result = kSuccess;

result = vpx_method_Stack_20_UI_20_Service_2F_Update_20_Menu_case_1_local_7_case_1_local_4_case_1_local_8(PARAMETERS,TERMINAL(0),TERMINAL(10));

result = kSuccess;

FOOTERSINGLECASEWITHNONE(11)
}

enum opTrigger vpx_method_Stack_20_UI_20_Service_2F_Update_20_Menu_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Stack_20_UI_20_Service_2F_Update_20_Menu_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Make_20_Count(PARAMETERS,TERMINAL(1),ROOT(2));

result = vpx_match(PARAMETERS,"(  )",TERMINAL(2));
TERMINATEONSUCCESS

if( (repeatLimit = vpx_multiplex(2,TERMINAL(1),TERMINAL(2))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Stack_20_UI_20_Service_2F_Update_20_Menu_case_1_local_7_case_1_local_4(PARAMETERS,TERMINAL(0),LIST(1),LIST(2));
REPEATFINISH
} else {
}

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Stack_20_UI_20_Service_2F_Update_20_Menu(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Stack_20_UI_20_Service_2F_Update_20_Menu_case_1_local_2(PARAMETERS,TERMINAL(0),ROOT(1));

result = vpx_method_Stack_20_UI_20_Service_2F_Update_20_Menu_case_1_local_3(PARAMETERS);

result = vpx_method_Stack_20_UI_20_Service_2F_Update_20_Menu_case_1_local_4(PARAMETERS,ROOT(2),ROOT(3));
TERMINATEONFAILURE

result = vpx_method_Stack_20_UI_20_Service_2F_Update_20_Menu_case_1_local_5(PARAMETERS,TERMINAL(2),TERMINAL(3));

result = vpx_method_Stack_20_UI_20_Service_2F_Update_20_Menu_case_1_local_6(PARAMETERS,TERMINAL(2),TERMINAL(1));

result = vpx_method_Stack_20_UI_20_Service_2F_Update_20_Menu_case_1_local_7(PARAMETERS,TERMINAL(2),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Stack_20_UI_20_Service_2F_Add_20_Stack(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Stacks,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_attach_2D_r,2,1,TERMINAL(3),TERMINAL(1),ROOT(4));

result = vpx_set(PARAMETERS,kVPXValue_Stacks,TERMINAL(2),TERMINAL(4),ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Post_20_Menu_20_Update,1,0,TERMINAL(5));

result = kSuccess;

FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Stack_20_UI_20_Service_2F_Remove_20_Stack(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Stacks,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP__28_in_29_,2,1,TERMINAL(3),TERMINAL(1),ROOT(4));

result = vpx_match(PARAMETERS,"0",TERMINAL(4));
TERMINATEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_detach_2D_nth,2,2,TERMINAL(3),TERMINAL(4),ROOT(5),ROOT(6));

result = vpx_set(PARAMETERS,kVPXValue_Stacks,TERMINAL(2),TERMINAL(5),ROOT(7));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Post_20_Menu_20_Update,1,0,TERMINAL(7));

result = kSuccess;

FOOTERSINGLECASE(8)
}

enum opTrigger vpx_method_Stack_20_UI_20_Service_2F_Select_20_Stack_20_Number(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Stacks,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_method__28_Safe_20_Get_29_(PARAMETERS,TERMINAL(3),TERMINAL(1),ROOT(4));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open_20_Editor,1,0,TERMINAL(4));

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Stack_20_UI_20_Service_2F_Post_20_Menu_20_Update(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADERWITHNONE(3)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"/Update Menu",ROOT(1));

result = vpx_method_New_20_Callback(PARAMETERS,TERMINAL(1),TERMINAL(0),NONE,ROOT(2));

result = vpx_method_Execute_20_Callback_20_Deferred(PARAMETERS,TERMINAL(2),NONE,NONE,NONE,NONE);

result = kSuccess;

FOOTERSINGLECASEWITHNONE(3)
}

/* Stop Universals */



Nat4 VPLC_Stack_20_Data_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Stack_20_Data_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 200 300 } */
	tempAttribute = attribute_add("Parent",tempClass,NULL,environment);
	tempAttribute = attribute_add("Method",tempClass,NULL,environment);
	tempAttribute = attribute_add("Editor",tempClass,NULL,environment);
	tempAttribute = attribute_add("Frame",tempClass,tempAttribute_Stack_20_Data_2F_Frame,environment);
	tempAttribute = attribute_add("List",tempClass,tempAttribute_Stack_20_Data_2F_List,environment);
/* Stop Attributes */

/* NULL SUPER CLASS */
	return kNOERROR;
}

/* Start Universals: { 522 829 }{ 333 326 } */
enum opTrigger vpx_method_Stack_20_Data_2F_Open_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Stack_20_Data_2F_Open_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Get_20_Stack_20_Service(PARAMETERS,ROOT(1));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Add_20_Stack,2,0,TERMINAL(1),TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Stack_20_Data_2F_Open(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Method,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_set(PARAMETERS,kVPXValue_Stack_20_Frames,TERMINAL(1),TERMINAL(0),ROOT(3));

result = vpx_method_Stack_20_Data_2F_Open_case_1_local_4(PARAMETERS,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Stack_20_Data_2F_Close_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Stack_20_Data_2F_Close_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Get_20_Stack_20_Service(PARAMETERS,ROOT(1));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Remove_20_Stack,2,0,TERMINAL(1),TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Stack_20_Data_2F_Close(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Stack_20_Data_2F_Close_case_1_local_2(PARAMETERS,TERMINAL(0));

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = vpx_set(PARAMETERS,kVPXValue_Method,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Post_20_Close_20_UI,1,0,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Stack_20_Data_2F_Open_20_Editor_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Stack_20_Data_2F_Open_20_Editor_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
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

result = kSuccess;

FOOTER(5)
}

enum opTrigger vpx_method_Stack_20_Data_2F_Open_20_Editor_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Stack_20_Data_2F_Open_20_Editor_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(7)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Construct_20_Editor,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_set(PARAMETERS,kVPXValue_Editor,TERMINAL(0),TERMINAL(2),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Install_20_Data,2,0,TERMINAL(2),TERMINAL(0));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open,2,0,TERMINAL(2),TERMINAL(1));

result = vpx_get(PARAMETERS,kVPXValue_View,TERMINAL(2),ROOT(4),ROOT(5));

result = vpx_constant(PARAMETERS,"TRUE",ROOT(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Target,3,0,TERMINAL(4),TERMINAL(5),TERMINAL(6));

result = kSuccess;

FOOTER(7)
}

enum opTrigger vpx_method_Stack_20_Data_2F_Open_20_Editor(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Stack_20_Data_2F_Open_20_Editor_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Stack_20_Data_2F_Open_20_Editor_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Stack_20_Data_2F_Construct_20_Editor_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Stack_20_Data_2F_Construct_20_Editor_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(17)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"3",ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_nth,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_constant(PARAMETERS,"4",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_nth,2,1,TERMINAL(0),TERMINAL(3),ROOT(4));

result = vpx_constant(PARAMETERS,"16",ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_iminus,2,1,TERMINAL(4),TERMINAL(5),ROOT(6));

result = vpx_constant(PARAMETERS,"0",ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(7),TERMINAL(6),ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(2),TERMINAL(4),ROOT(9));

result = vpx_call_primitive(PARAMETERS,VPLP__28_join_29_,2,1,TERMINAL(8),TERMINAL(9),ROOT(10));

result = vpx_instantiate(PARAMETERS,kVPXClass_VPLScroll_20_Bar,1,1,NONE,ROOT(11));

result = vpx_set(PARAMETERS,kVPXValue_Frame,TERMINAL(11),TERMINAL(10),ROOT(12));

result = vpx_constant(PARAMETERS,"100",ROOT(13));

result = vpx_set(PARAMETERS,kVPXValue_Maximum,TERMINAL(12),TERMINAL(13),ROOT(14));

result = vpx_extconstant(PARAMETERS,kControlScrollBarLiveProc,ROOT(15));

result = vpx_set(PARAMETERS,kVPXValue_Procedure_20_ID,TERMINAL(14),TERMINAL(15),ROOT(16));

result = kSuccess;

OUTPUT(0,TERMINAL(16))
FOOTERSINGLECASEWITHNONE(17)
}

enum opTrigger vpx_method_Stack_20_Data_2F_Construct_20_Editor(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(9)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_Stack_20_Window,1,1,NONE,ROOT(2));

result = vpx_instantiate(PARAMETERS,kVPXClass_Stack_20_View,1,1,NONE,ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Frame,TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_method_Stack_20_Data_2F_Construct_20_Editor_case_1_local_5(PARAMETERS,TERMINAL(5),ROOT(6));

result = vpx_set(PARAMETERS,kVPXValue_Vertical_20_Scroll_20_Bar,TERMINAL(4),TERMINAL(6),ROOT(7));

result = vpx_set(PARAMETERS,kVPXValue_View,TERMINAL(2),TERMINAL(7),ROOT(8));

result = kSuccess;

OUTPUT(0,TERMINAL(8))
FOOTERSINGLECASEWITHNONE(9)
}

enum opTrigger vpx_method_Stack_20_Data_2F_Get_20_Editor(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Editor,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Stack_20_Data_2F_Close_20_Editor_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Stack_20_Data_2F_Close_20_Editor_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Editor,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
NEXTCASEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Close,1,0,TERMINAL(1));

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Stack_20_Data_2F_Close_20_Editor_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Stack_20_Data_2F_Close_20_Editor_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_Stack_20_Data_2F_Close_20_Editor(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Stack_20_Data_2F_Close_20_Editor_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Stack_20_Data_2F_Close_20_Editor_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Stack_20_Data_2F_Construct_20_Title_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Stack_20_Data_2F_Construct_20_Title_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(14)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"Stack: x\"",ROOT(1));

result = vpx_constant(PARAMETERS,"TRUE",ROOT(2));

result = vpx_constant(PARAMETERS,"8",ROOT(3));

result = vpx_constant(PARAMETERS,"10",ROOT(4));

result = vpx_constant(PARAMETERS,"16",ROOT(5));

result = vpx_get(PARAMETERS,kVPXValue_Method,TERMINAL(0),ROOT(6),ROOT(7));

result = vpx_get(PARAMETERS,kVPXValue_Thread,TERMINAL(7),ROOT(8),ROOT(9));

result = vpx_call_primitive(PARAMETERS,VPLP_to_2D_string,1,1,TERMINAL(9),ROOT(10));

result = vpx_call_primitive(PARAMETERS,VPLP_string_2D_to_2D_base,5,2,TERMINAL(10),TERMINAL(4),TERMINAL(5),TERMINAL(3),TERMINAL(2),ROOT(11),ROOT(12));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(1),TERMINAL(12),ROOT(13));

result = kSuccess;

OUTPUT(0,TERMINAL(13))
FOOTER(14)
}

enum opTrigger vpx_method_Stack_20_Data_2F_Construct_20_Title_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Stack_20_Data_2F_Construct_20_Title_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Stack Frames",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Stack_20_Data_2F_Construct_20_Title(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Stack_20_Data_2F_Construct_20_Title_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Stack_20_Data_2F_Construct_20_Title_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Stack_20_Data_2F_Send_20_Refresh(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Editor,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
TERMINATEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Refresh_20_Data,1,0,TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Stack_20_Data_2F_Has_20_Case_20_Stack_3F__case_1_local_3_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Stack_20_Data_2F_Has_20_Case_20_Stack_3F__case_1_local_3_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Case_20_Stack,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP__3D_,2,0,TERMINAL(3),TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"TRUE",ROOT(4));

result = kSuccess;
FINISHONSUCCESS

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Stack_20_Data_2F_Has_20_Case_20_Stack_3F__case_1_local_3_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Stack_20_Data_2F_Has_20_Case_20_Stack_3F__case_1_local_3_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
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

enum opTrigger vpx_method_Stack_20_Data_2F_Has_20_Case_20_Stack_3F__case_1_local_3_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Stack_20_Data_2F_Has_20_Case_20_Stack_3F__case_1_local_3_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Stack_20_Data_2F_Has_20_Case_20_Stack_3F__case_1_local_3_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Stack_20_Data_2F_Has_20_Case_20_Stack_3F__case_1_local_3_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Stack_20_Data_2F_Has_20_Case_20_Stack_3F__case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Stack_20_Data_2F_Has_20_Case_20_Stack_3F__case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Case_20_Stack,TERMINAL(1),ROOT(2),ROOT(3));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(0))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Stack_20_Data_2F_Has_20_Case_20_Stack_3F__case_1_local_3_case_1_local_3(PARAMETERS,LIST(0),TERMINAL(3),ROOT(4));
REPEATFINISH
} else {
ROOTNULL(4,NULL)
}

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Stack_20_Data_2F_Has_20_Case_20_Stack_3F_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_method_Stack_20_Data_2F_Has_20_Case_20_Stack_3F__case_1_local_3(PARAMETERS,TERMINAL(3),TERMINAL(1),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Stack_20_Data_2F_Add_20_View(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Stack_20_Data_2F_Remove_20_View(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Stack_20_Data_2F_Post_20_Close_20_UI(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADERWITHNONE(3)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"/Close UI",ROOT(1));

result = vpx_method_New_20_Callback(PARAMETERS,TERMINAL(1),TERMINAL(0),NONE,ROOT(2));

result = vpx_method_Execute_20_Callback_20_Deferred(PARAMETERS,TERMINAL(2),NONE,NONE,NONE,NONE);

result = kSuccess;

FOOTERSINGLECASEWITHNONE(3)
}

enum opTrigger vpx_method_Stack_20_Data_2F_Close_20_UI(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Close_20_Editor,1,0,TERMINAL(0));

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = vpx_set(PARAMETERS,kVPXValue_Editor,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Stack_20_Data_2F_Continue(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Current_20_State,1,1,TERMINAL(0),ROOT(1));

result = kSuccess;

FOOTERSINGLECASE(2)
}

/* Stop Universals */



Nat4 VPLC_VPLProject_20_AppName_20_Sheet_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_VPLProject_20_AppName_20_Sheet_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 200 300 } */
	tempAttribute = attribute_add("Name",tempClass,tempAttribute_VPLProject_20_AppName_20_Sheet_2F_Name,environment);
	tempAttribute = attribute_add("WindowRef",tempClass,NULL,environment);
	tempAttribute = attribute_add("Window Event Handler",tempClass,tempAttribute_VPLProject_20_AppName_20_Sheet_2F_Window_20_Event_20_Handler,environment);
	tempAttribute = attribute_add("Parent Window",tempClass,NULL,environment);
	tempAttribute = attribute_add("Data",tempClass,NULL,environment);
	tempAttribute = attribute_add("Null on Cancel?",tempClass,tempAttribute_VPLProject_20_AppName_20_Sheet_2F_Null_20_on_20_Cancel_3F_,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"Sheet Window");
	return kNOERROR;
}

/* Start Universals: { 549 1013 }{ 272 314 } */
enum opTrigger vpx_method_VPLProject_20_AppName_20_Sheet_2F_Open(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADERWITHNONE(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Parent_20_Window,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_constant(PARAMETERS,"main",ROOT(3));

result = vpx_constant(PARAMETERS,"App Name Sheet",ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Create_20_Nib_20_Window,3,0,TERMINAL(0),TERMINAL(3),TERMINAL(4));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open_20_Controls,1,0,TERMINAL(0));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Show,1,0,TERMINAL(0));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Advance_20_Focus,2,0,TERMINAL(0),NONE);

result = kSuccess;

FOOTERSINGLECASEWITHNONE(5)
}

enum opTrigger vpx_method_VPLProject_20_AppName_20_Sheet_2F_Open_20_Controls_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_VPLProject_20_AppName_20_Sheet_2F_Open_20_Controls_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Find_20_Name_20_Text,1,1,TERMINAL(0),ROOT(1));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Application_20_Name,1,1,TERMINAL(0),ROOT(2));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Text,2,0,TERMINAL(1),TERMINAL(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_VPLProject_20_AppName_20_Sheet_2F_Open_20_Controls_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_VPLProject_20_AppName_20_Sheet_2F_Open_20_Controls_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(8)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Null_20_on_20_Cancel_3F_,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(2));
TERMINATEONFAILURE

result = vpx_constant(PARAMETERS,"( \'Save\' 1 )",ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Find_20_ControlRef,2,1,TERMINAL(0),TERMINAL(3),ROOT(4));
TERMINATEONFAILURE

result = vpx_constant(PARAMETERS,"TRUE",ROOT(5));

PUTINTEGER(HIViewSetVisible( GETPOINTER(0,OpaqueControlRef,*,ROOT(7),TERMINAL(4)),GETINTEGER(TERMINAL(5))),6);
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(8)
}

enum opTrigger vpx_method_VPLProject_20_AppName_20_Sheet_2F_Open_20_Controls(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_method_VPLProject_20_AppName_20_Sheet_2F_Open_20_Controls_case_1_local_2(PARAMETERS,TERMINAL(0));

result = vpx_method_VPLProject_20_AppName_20_Sheet_2F_Open_20_Controls_case_1_local_3(PARAMETERS,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_VPLProject_20_AppName_20_Sheet_2F_Find_20_Name_20_Text_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_VPLProject_20_AppName_20_Sheet_2F_Find_20_Name_20_Text_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( \'Name\' 1 )",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Find_20_Control,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_VPLProject_20_AppName_20_Sheet_2F_Find_20_Name_20_Text_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_VPLProject_20_AppName_20_Sheet_2F_Find_20_Name_20_Text_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(3)
INPUT(0,0)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_Edit_20_Unicode_20_Text_20_Control,1,1,NONE,ROOT(1));

result = vpx_constant(PARAMETERS,"( \'Name\' 1 )",ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Create_20_From_20_ID,3,0,TERMINAL(1),TERMINAL(0),TERMINAL(2));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERWITHNONE(3)
}

enum opTrigger vpx_method_VPLProject_20_AppName_20_Sheet_2F_Find_20_Name_20_Text_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_VPLProject_20_AppName_20_Sheet_2F_Find_20_Name_20_Text_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = kSuccess;
FAILONSUCCESS

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_VPLProject_20_AppName_20_Sheet_2F_Find_20_Name_20_Text(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_VPLProject_20_AppName_20_Sheet_2F_Find_20_Name_20_Text_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_VPLProject_20_AppName_20_Sheet_2F_Find_20_Name_20_Text_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_VPLProject_20_AppName_20_Sheet_2F_Find_20_Name_20_Text_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_VPLProject_20_AppName_20_Sheet_2F_Get_20_Project_20_Data_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_VPLProject_20_AppName_20_Sheet_2F_Get_20_Project_20_Data_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_VPLProject_20_AppName_20_Sheet_2F_Get_20_Project_20_Data_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_VPLProject_20_AppName_20_Sheet_2F_Get_20_Project_20_Data_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Parent_20_Window,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Project_20_Data,1,1,TERMINAL(2),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_VPLProject_20_AppName_20_Sheet_2F_Get_20_Project_20_Data_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_VPLProject_20_AppName_20_Sheet_2F_Get_20_Project_20_Data_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_VPLProject_20_AppName_20_Sheet_2F_Get_20_Project_20_Data(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_VPLProject_20_AppName_20_Sheet_2F_Get_20_Project_20_Data_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_VPLProject_20_AppName_20_Sheet_2F_Get_20_Project_20_Data_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_VPLProject_20_AppName_20_Sheet_2F_Get_20_Project_20_Data_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_VPLProject_20_AppName_20_Sheet_2F_Get_20_Application_20_Name(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Data,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
FAILONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Application_20_Name,1,1,TERMINAL(1),ROOT(2));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_VPLProject_20_AppName_20_Sheet_2F_Set_20_Application_20_Name(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Data,1,1,TERMINAL(0),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
FAILONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Application_20_Name,2,0,TERMINAL(2),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_VPLProject_20_AppName_20_Sheet_2F_CE_20_HICommand_20_Process_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0);
enum opTrigger vpx_method_VPLProject_20_AppName_20_Sheet_2F_CE_20_HICommand_20_Process_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,kHICommandOK,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_HIC_20_OK,1,0,TERMINAL(0));

result = vpx_extconstant(PARAMETERS,noErr,ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_VPLProject_20_AppName_20_Sheet_2F_CE_20_HICommand_20_Process_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0);
enum opTrigger vpx_method_VPLProject_20_AppName_20_Sheet_2F_CE_20_HICommand_20_Process_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,kHICommandCancel,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_HIC_20_Cancel,1,0,TERMINAL(0));

result = vpx_extconstant(PARAMETERS,noErr,ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_VPLProject_20_AppName_20_Sheet_2F_CE_20_HICommand_20_Process_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0);
enum opTrigger vpx_method_VPLProject_20_AppName_20_Sheet_2F_CE_20_HICommand_20_Process_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,kHICommandSaveAs,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_HIC_20_Save_20_As,1,0,TERMINAL(0));

result = vpx_extconstant(PARAMETERS,noErr,ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_VPLProject_20_AppName_20_Sheet_2F_CE_20_HICommand_20_Process_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0);
enum opTrigger vpx_method_VPLProject_20_AppName_20_Sheet_2F_CE_20_HICommand_20_Process_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0)
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

enum opTrigger vpx_method_VPLProject_20_AppName_20_Sheet_2F_CE_20_HICommand_20_Process(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_VPLProject_20_AppName_20_Sheet_2F_CE_20_HICommand_20_Process_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0))
if(vpx_method_VPLProject_20_AppName_20_Sheet_2F_CE_20_HICommand_20_Process_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0))
if(vpx_method_VPLProject_20_AppName_20_Sheet_2F_CE_20_HICommand_20_Process_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0))
vpx_method_VPLProject_20_AppName_20_Sheet_2F_CE_20_HICommand_20_Process_case_4(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0);
return outcome;
}

enum opTrigger vpx_method_VPLProject_20_AppName_20_Sheet_2F_HIC_20_OK_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_VPLProject_20_AppName_20_Sheet_2F_HIC_20_OK_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Find_20_Name_20_Text,1,1,TERMINAL(0),ROOT(1));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Text,1,1,TERMINAL(1),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Application_20_Name,2,0,TERMINAL(0),TERMINAL(2));
TERMINATEONFAILURE

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_VPLProject_20_AppName_20_Sheet_2F_HIC_20_OK(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_method_VPLProject_20_AppName_20_Sheet_2F_HIC_20_OK_case_1_local_2(PARAMETERS,TERMINAL(0));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Close,1,0,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_VPLProject_20_AppName_20_Sheet_2F_HIC_20_Cancel_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_VPLProject_20_AppName_20_Sheet_2F_HIC_20_Cancel_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_VPLProject_20_AppName_20_Sheet_2F_HIC_20_Cancel_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_VPLProject_20_AppName_20_Sheet_2F_HIC_20_Cancel_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Null_20_on_20_Cancel_3F_,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(2));
TERMINATEONFAILURE

result = vpx_constant(PARAMETERS,"NULL",ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Application_20_Name,2,0,TERMINAL(0),TERMINAL(3));
TERMINATEONFAILURE

result = kSuccess;

FOOTER(4)
}

enum opTrigger vpx_method_VPLProject_20_AppName_20_Sheet_2F_HIC_20_Cancel_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_VPLProject_20_AppName_20_Sheet_2F_HIC_20_Cancel_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_VPLProject_20_AppName_20_Sheet_2F_HIC_20_Cancel_case_1_local_2_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_VPLProject_20_AppName_20_Sheet_2F_HIC_20_Cancel_case_1_local_2_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_VPLProject_20_AppName_20_Sheet_2F_HIC_20_Cancel(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_method_VPLProject_20_AppName_20_Sheet_2F_HIC_20_Cancel_case_1_local_2(PARAMETERS,TERMINAL(0));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Close,1,0,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_VPLProject_20_AppName_20_Sheet_2F_Close(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_context_super_method(PARAMETERS,kVPXMethod_Close,1,0,TERMINAL(0));

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = vpx_set(PARAMETERS,kVPXValue_Data,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_method_Set_20_Arrow_20_Cursor(PARAMETERS);

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_VPLProject_20_AppName_20_Sheet_2F_Get_20_Data(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Data,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_VPLProject_20_AppName_20_Sheet_2F_HIC_20_Save_20_As_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_VPLProject_20_AppName_20_Sheet_2F_HIC_20_Save_20_As_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Application_20_Name,2,0,TERMINAL(0),TERMINAL(1));
TERMINATEONFAILURE

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_VPLProject_20_AppName_20_Sheet_2F_HIC_20_Save_20_As(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_method_VPLProject_20_AppName_20_Sheet_2F_HIC_20_Save_20_As_case_1_local_2(PARAMETERS,TERMINAL(0));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Close,1,0,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(1)
}

/* Stop Universals */






Nat4	loadClasses_MyUtilities(V_Environment environment);
Nat4	loadClasses_MyUtilities(V_Environment environment)
{
	V_Class result = NULL;

	result = class_new("Tool Tracker",environment);
	if(result == NULL) return kERROR;
	VPLC_Tool_20_Tracker_class_load(result,environment);
	result = class_new("Stack UI Service",environment);
	if(result == NULL) return kERROR;
	VPLC_Stack_20_UI_20_Service_class_load(result,environment);
	result = class_new("Stack Data",environment);
	if(result == NULL) return kERROR;
	VPLC_Stack_20_Data_class_load(result,environment);
	result = class_new("VPLProject AppName Sheet",environment);
	if(result == NULL) return kERROR;
	VPLC_VPLProject_20_AppName_20_Sheet_class_load(result,environment);
	return kNOERROR;

}

Nat4	loadUniversals_MyUtilities(V_Environment environment);
Nat4	loadUniversals_MyUtilities(V_Environment environment)
{
	V_Method result = NULL;

	result = method_new("Find Instance",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Find_20_Instance,NULL);

	result = method_new("Lists To List",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Lists_20_To_20_List,NULL);

	result = method_new("Pascal To String",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Pascal_20_To_20_String,NULL);

	result = method_new("String To Pascal",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_String_20_To_20_Pascal,NULL);

	result = method_new("Carriage Return",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Carriage_20_Return,NULL);

	result = method_new("Unix Tab",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Unix_20_Tab,NULL);

	result = method_new("List Average",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_List_20_Average,NULL);

	result = method_new("Unix Carriage Return",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Unix_20_Carriage_20_Return,NULL);

	result = method_new("TEST Read Project",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_TEST_20_Read_20_Project,"NULL");

	result = method_new("Nav Read Project Callback",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Nav_20_Read_20_Project_20_Callback,NULL);

	result = method_new("Get VPL Data",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Get_20_VPL_20_Data,NULL);

	result = method_new("Get Viewer Windows",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Get_20_Viewer_20_Windows,NULL);

	result = method_new("Get Tool Set",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Get_20_Tool_20_Set,NULL);

	result = method_new("Get Stack Service",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Get_20_Stack_20_Service,NULL);

	result = method_new("Find Instance Values",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Find_20_Instance_20_Values,NULL);

	result = method_new("Unique Name For String",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Unique_20_Name_20_For_20_String,NULL);

	result = method_new("Put URLs On Scrap",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Put_20_URLs_20_On_20_Scrap,NULL);

	result = method_new("Put TEXT On Scrap",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Put_20_TEXT_20_On_20_Scrap,NULL);

	result = method_new("Formalize Data Name",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Formalize_20_Data_20_Name,NULL);

	result = method_new("Duplicate Data Name Error",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Duplicate_20_Data_20_Name_20_Error,NULL);

	result = method_new("Do User Notice",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Do_20_User_20_Notice,NULL);

	result = method_new("Tool Tracker/Find Tools",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Tool_20_Tracker_2F_Find_20_Tools,NULL);

	result = method_new("Tool Tracker/Make Dirty",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Tool_20_Tracker_2F_Make_20_Dirty,NULL);

	result = method_new("Tool Tracker/Update Menu",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Tool_20_Tracker_2F_Update_20_Menu,NULL);

	result = method_new("Tool Tracker/Close",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Tool_20_Tracker_2F_Close,NULL);

	result = method_new("Tool Tracker/Open",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Tool_20_Tracker_2F_Open,NULL);

	result = method_new("Tool Tracker/Can Do?",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Tool_20_Tracker_2F_Can_20_Do_3F_,NULL);

	result = method_new("Tool Tracker/Run Tool Number",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Tool_20_Tracker_2F_Run_20_Tool_20_Number,NULL);

	result = method_new("Tool Tracker/Run Tool Name",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Tool_20_Tracker_2F_Run_20_Tool_20_Name,NULL);

	result = method_new("Stack UI Service/Update Menu",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Stack_20_UI_20_Service_2F_Update_20_Menu,NULL);

	result = method_new("Stack UI Service/Add Stack",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Stack_20_UI_20_Service_2F_Add_20_Stack,NULL);

	result = method_new("Stack UI Service/Remove Stack",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Stack_20_UI_20_Service_2F_Remove_20_Stack,NULL);

	result = method_new("Stack UI Service/Select Stack Number",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Stack_20_UI_20_Service_2F_Select_20_Stack_20_Number,NULL);

	result = method_new("Stack UI Service/Post Menu Update",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Stack_20_UI_20_Service_2F_Post_20_Menu_20_Update,NULL);

	result = method_new("Stack Data/Open",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Stack_20_Data_2F_Open,NULL);

	result = method_new("Stack Data/Close",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Stack_20_Data_2F_Close,NULL);

	result = method_new("Stack Data/Open Editor",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Stack_20_Data_2F_Open_20_Editor,NULL);

	result = method_new("Stack Data/Construct Editor",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Stack_20_Data_2F_Construct_20_Editor,NULL);

	result = method_new("Stack Data/Get Editor",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Stack_20_Data_2F_Get_20_Editor,NULL);

	result = method_new("Stack Data/Close Editor",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Stack_20_Data_2F_Close_20_Editor,NULL);

	result = method_new("Stack Data/Construct Title",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Stack_20_Data_2F_Construct_20_Title,NULL);

	result = method_new("Stack Data/Send Refresh",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Stack_20_Data_2F_Send_20_Refresh,NULL);

	result = method_new("Stack Data/Has Case Stack?",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Stack_20_Data_2F_Has_20_Case_20_Stack_3F_,NULL);

	result = method_new("Stack Data/Add View",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Stack_20_Data_2F_Add_20_View,NULL);

	result = method_new("Stack Data/Remove View",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Stack_20_Data_2F_Remove_20_View,NULL);

	result = method_new("Stack Data/Post Close UI",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Stack_20_Data_2F_Post_20_Close_20_UI,NULL);

	result = method_new("Stack Data/Close UI",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Stack_20_Data_2F_Close_20_UI,NULL);

	result = method_new("Stack Data/Continue",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Stack_20_Data_2F_Continue,NULL);

	result = method_new("VPLProject AppName Sheet/Open",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLProject_20_AppName_20_Sheet_2F_Open,NULL);

	result = method_new("VPLProject AppName Sheet/Open Controls",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLProject_20_AppName_20_Sheet_2F_Open_20_Controls,NULL);

	result = method_new("VPLProject AppName Sheet/Find Name Text",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLProject_20_AppName_20_Sheet_2F_Find_20_Name_20_Text,NULL);

	result = method_new("VPLProject AppName Sheet/Get Project Data",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLProject_20_AppName_20_Sheet_2F_Get_20_Project_20_Data,NULL);

	result = method_new("VPLProject AppName Sheet/Get Application Name",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLProject_20_AppName_20_Sheet_2F_Get_20_Application_20_Name,NULL);

	result = method_new("VPLProject AppName Sheet/Set Application Name",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLProject_20_AppName_20_Sheet_2F_Set_20_Application_20_Name,NULL);

	result = method_new("VPLProject AppName Sheet/CE HICommand Process",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLProject_20_AppName_20_Sheet_2F_CE_20_HICommand_20_Process,NULL);

	result = method_new("VPLProject AppName Sheet/HIC OK",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLProject_20_AppName_20_Sheet_2F_HIC_20_OK,NULL);

	result = method_new("VPLProject AppName Sheet/HIC Cancel",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLProject_20_AppName_20_Sheet_2F_HIC_20_Cancel,NULL);

	result = method_new("VPLProject AppName Sheet/Close",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLProject_20_AppName_20_Sheet_2F_Close,NULL);

	result = method_new("VPLProject AppName Sheet/Get Data",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLProject_20_AppName_20_Sheet_2F_Get_20_Data,NULL);

	result = method_new("VPLProject AppName Sheet/HIC Save As",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLProject_20_AppName_20_Sheet_2F_HIC_20_Save_20_As,NULL);

	return kNOERROR;

}



Nat4	loadPersistents_MyUtilities(V_Environment environment);
Nat4	loadPersistents_MyUtilities(V_Environment environment)
{
	V_Value tempPersistent = NULL;
	V_Dictionary dictionary = environment->persistentsTable;

	return kNOERROR;

}

Nat4	load_MyUtilities(V_Environment environment);
Nat4	load_MyUtilities(V_Environment environment)
{

	loadClasses_MyUtilities(environment);
	loadUniversals_MyUtilities(environment);
	loadPersistents_MyUtilities(environment);
	return kNOERROR;

}

