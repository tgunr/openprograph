/* A VPL Section File */
/*

Project Window.inl.c
Copyright: 2004 Andescotia LLC

*/

#include "MartenInlineProject.h"

enum opTrigger vpx_method_Get_20_Front_20_Project_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0);
enum opTrigger vpx_method_Get_20_Front_20_Project_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0)
{
HEADER(2)
result = kSuccess;

result = vpx_method_Get_20_Front_20_Window(PARAMETERS,ROOT(0));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Project_20_Data,1,1,TERMINAL(0),ROOT(1));
NEXTCASEONFAILURE

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
FAILONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Get_20_Front_20_Project_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0);
enum opTrigger vpx_method_Get_20_Front_20_Project_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0)
{
HEADER(2)
result = kSuccess;

result = vpx_method_Get_20_VPL_20_Data(PARAMETERS,ROOT(0));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Project_20_Data,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
FAILONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Get_20_Front_20_Project(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Get_20_Front_20_Project_case_1(environment, &outcome, inputRepeat, contextIndex,root0))
vpx_method_Get_20_Front_20_Project_case_2(environment, &outcome, inputRepeat, contextIndex,root0);
return outcome;
}

enum opTrigger vpx_method_Front_20_Or_20_New_20_Project_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0);
enum opTrigger vpx_method_Front_20_Or_20_New_20_Project_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0)
{
HEADER(1)
result = kSuccess;

result = vpx_method_Get_20_Front_20_Project(PARAMETERS,ROOT(0));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(1)
}

enum opTrigger vpx_method_Front_20_Or_20_New_20_Project_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0);
enum opTrigger vpx_method_Front_20_Or_20_New_20_Project_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0)
{
HEADER(3)
result = kSuccess;

result = vpx_method_Get_20_VPL_20_Data(PARAMETERS,ROOT(0));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_New_20_Element,1,1,TERMINAL(0),ROOT(1));
FAILONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open_20_Editor,1,0,TERMINAL(0));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Project_20_Data,1,1,TERMINAL(0),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
FAILONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Front_20_Or_20_New_20_Project(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Front_20_Or_20_New_20_Project_case_1(environment, &outcome, inputRepeat, contextIndex,root0))
vpx_method_Front_20_Or_20_New_20_Project_case_2(environment, &outcome, inputRepeat, contextIndex,root0);
return outcome;
}

enum opTrigger vpx_method_Open_20_Project_20_File_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Open_20_Project_20_File_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
NEXTCASEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Project_20_Data,1,1,TERMINAL(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(4));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_File,1,1,TERMINAL(4),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(5));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Compare,2,0,TERMINAL(5),TERMINAL(1));
NEXTCASEONFAILURE

result = kSuccess;
FINISHONSUCCESS

OUTPUT(0,TERMINAL(0))
FOOTER(6)
}

enum opTrigger vpx_method_Open_20_Project_20_File_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Open_20_Project_20_File_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
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

enum opTrigger vpx_method_Open_20_Project_20_File_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Open_20_Project_20_File_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Open_20_Project_20_File_case_1_local_6_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Open_20_Project_20_File_case_1_local_6_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Open_20_Project_20_File_case_1_local_8_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Open_20_Project_20_File_case_1_local_8_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Data,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP__3D_,2,0,TERMINAL(3),TERMINAL(1));
NEXTCASEONFAILURE

result = kSuccess;
FINISHONSUCCESS

OUTPUT(0,TERMINAL(0))
FOOTER(4)
}

enum opTrigger vpx_method_Open_20_Project_20_File_case_1_local_8_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Open_20_Project_20_File_case_1_local_8_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
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

enum opTrigger vpx_method_Open_20_Project_20_File_case_1_local_8_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Open_20_Project_20_File_case_1_local_8_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Open_20_Project_20_File_case_1_local_8_case_1_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Open_20_Project_20_File_case_1_local_8_case_1_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Open_20_Project_20_File_case_1_local_8_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0);
enum opTrigger vpx_method_Open_20_Project_20_File_case_1_local_8_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0)
{
HEADER(3)
result = kSuccess;

result = vpx_method_Get_20_Viewer_20_Windows(PARAMETERS,ROOT(0));

result = vpx_match(PARAMETERS,"( )",TERMINAL(0));
NEXTCASEONSUCCESS

result = vpx_method_Get_20_VPL_20_Data(PARAMETERS,ROOT(1));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(0))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Open_20_Project_20_File_case_1_local_8_case_1_local_5(PARAMETERS,LIST(0),TERMINAL(1),ROOT(2));
REPEATFINISH
} else {
ROOTNULL(2,NULL)
}

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(2));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Open_20_Project_20_File_case_1_local_8_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0);
enum opTrigger vpx_method_Open_20_Project_20_File_case_1_local_8_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0)
{
HEADER(3)
result = kSuccess;

result = vpx_method_Get_20_VPL_20_Data(PARAMETERS,ROOT(0));

result = vpx_constant(PARAMETERS,"TRUE",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Construct_20_Editor,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open_20_With_20_Data,2,0,TERMINAL(2),TERMINAL(0));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Open_20_Project_20_File_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0);
enum opTrigger vpx_method_Open_20_Project_20_File_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Open_20_Project_20_File_case_1_local_8_case_1(environment, &outcome, inputRepeat, contextIndex,root0))
vpx_method_Open_20_Project_20_File_case_1_local_8_case_2(environment, &outcome, inputRepeat, contextIndex,root0);
return outcome;
}

enum opTrigger vpx_method_Open_20_Project_20_File_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Open_20_Project_20_File_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(7)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_method_Get_20_VPL_20_Data(PARAMETERS,ROOT(1));

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_match(PARAMETERS,"( )",TERMINAL(3));
NEXTCASEONSUCCESS

if( (repeatLimit = vpx_multiplex(1,TERMINAL(3))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Open_20_Project_20_File_case_1_local_6(PARAMETERS,LIST(3),TERMINAL(0),ROOT(4));
REPEATFINISH
} else {
ROOTNULL(4,NULL)
}

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(4));
NEXTCASEONFAILURE

result = vpx_method_Open_20_Project_20_File_case_1_local_8(PARAMETERS,ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Select_20_Window,1,0,TERMINAL(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Select_20_Data,2,1,TERMINAL(5),TERMINAL(4),ROOT(6));

result = kSuccess;

FOOTER(7)
}

enum opTrigger vpx_method_Open_20_Project_20_File_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Open_20_Project_20_File_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADERWITHNONE(4)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_instantiate(PARAMETERS,kVPXClass_Project_20_Open_20_Activity,1,1,NONE,ROOT(1));

result = vpx_set(PARAMETERS,kVPXValue_Project_20_File,TERMINAL(1),TERMINAL(0),ROOT(2));

result = vpx_constant(PARAMETERS,"FALSE",ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Do,2,0,TERMINAL(2),TERMINAL(3));

result = kSuccess;

FOOTERWITHNONE(4)
}

enum opTrigger vpx_method_Open_20_Project_20_File_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Open_20_Project_20_File_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADERWITHNONE(6)
INPUT(0,0)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,kWindowModalityNone,ROOT(1));

result = vpx_constant(PARAMETERS,"NULL",ROOT(2));

result = vpx_constant(PARAMETERS,"( \'vplP\' )",ROOT(3));

result = vpx_constant(PARAMETERS,"File Open Project Callback",ROOT(4));

result = vpx_method_New_20_Callback(PARAMETERS,TERMINAL(4),NONE,NONE,ROOT(5));

result = vpx_method_Nav_20_Get_20_File(PARAMETERS,TERMINAL(3),TERMINAL(1),TERMINAL(2),TERMINAL(5));
TERMINATEONFAILURE

result = kSuccess;

FOOTERWITHNONE(6)
}

enum opTrigger vpx_method_Open_20_Project_20_File_case_4_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Open_20_Project_20_File_case_4_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
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

enum opTrigger vpx_method_Open_20_Project_20_File_case_4_local_3_case_2_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Open_20_Project_20_File_case_4_local_3_case_2_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
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

enum opTrigger vpx_method_Open_20_Project_20_File_case_4_local_3_case_2_local_4_case_1_local_3_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0);
enum opTrigger vpx_method_Open_20_Project_20_File_case_4_local_3_case_2_local_4_case_1_local_3_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0)
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

enum opTrigger vpx_method_Open_20_Project_20_File_case_4_local_3_case_2_local_4_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Open_20_Project_20_File_case_4_local_3_case_2_local_4_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Open_20_Project_20_File_case_4_local_3_case_2_local_4_case_1_local_3_case_1_local_2(PARAMETERS,ROOT(1));
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

enum opTrigger vpx_method_Open_20_Project_20_File_case_4_local_3_case_2_local_4_case_1_local_4_case_1_local_10_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Open_20_Project_20_File_case_4_local_3_case_2_local_4_case_1_local_4_case_1_local_10_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
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

result = vpx_method_Block_20_Free(PARAMETERS,TERMINAL(3));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERWITHNONE(5)
}

enum opTrigger vpx_method_Open_20_Project_20_File_case_4_local_3_case_2_local_4_case_1_local_4_case_1_local_10_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Open_20_Project_20_File_case_4_local_3_case_2_local_4_case_1_local_4_case_1_local_10_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
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

enum opTrigger vpx_method_Open_20_Project_20_File_case_4_local_3_case_2_local_4_case_1_local_4_case_1_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Open_20_Project_20_File_case_4_local_3_case_2_local_4_case_1_local_4_case_1_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Open_20_Project_20_File_case_4_local_3_case_2_local_4_case_1_local_4_case_1_local_10_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Open_20_Project_20_File_case_4_local_3_case_2_local_4_case_1_local_4_case_1_local_10_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Open_20_Project_20_File_case_4_local_3_case_2_local_4_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Open_20_Project_20_File_case_4_local_3_case_2_local_4_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
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

result = vpx_method_Open_20_Project_20_File_case_4_local_3_case_2_local_4_case_1_local_4_case_1_local_10(PARAMETERS,TERMINAL(10),TERMINAL(11),ROOT(13));

result = vpx_method_Block_20_Free(PARAMETERS,TERMINAL(5));

result = vpx_method_Block_20_Free(PARAMETERS,TERMINAL(7));

result = kSuccess;

OUTPUT(0,TERMINAL(13))
FOOTERSINGLECASEWITHNONE(14)
}

enum opTrigger vpx_method_Open_20_Project_20_File_case_4_local_3_case_2_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Open_20_Project_20_File_case_4_local_3_case_2_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"0",ROOT(1));

result = vpx_method_Open_20_Project_20_File_case_4_local_3_case_2_local_4_case_1_local_3(PARAMETERS,TERMINAL(0),ROOT(2));
NEXTCASEONFAILURE

result = vpx_method_Open_20_Project_20_File_case_4_local_3_case_2_local_4_case_1_local_4(PARAMETERS,TERMINAL(0),TERMINAL(1),TERMINAL(2),ROOT(3));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_Open_20_Project_20_File_case_4_local_3_case_2_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Open_20_Project_20_File_case_4_local_3_case_2_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Open_20_Project_20_File_case_4_local_3_case_2_local_4_case_3_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0);
enum opTrigger vpx_method_Open_20_Project_20_File_case_4_local_3_case_2_local_4_case_3_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0)
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

enum opTrigger vpx_method_Open_20_Project_20_File_case_4_local_3_case_2_local_4_case_3_local_13_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Open_20_Project_20_File_case_4_local_3_case_2_local_4_case_3_local_13_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
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

enum opTrigger vpx_method_Open_20_Project_20_File_case_4_local_3_case_2_local_4_case_3_local_13_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Open_20_Project_20_File_case_4_local_3_case_2_local_4_case_3_local_13_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
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

enum opTrigger vpx_method_Open_20_Project_20_File_case_4_local_3_case_2_local_4_case_3_local_13(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Open_20_Project_20_File_case_4_local_3_case_2_local_4_case_3_local_13(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Open_20_Project_20_File_case_4_local_3_case_2_local_4_case_3_local_13_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Open_20_Project_20_File_case_4_local_3_case_2_local_4_case_3_local_13_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Open_20_Project_20_File_case_4_local_3_case_2_local_4_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Open_20_Project_20_File_case_4_local_3_case_2_local_4_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(15)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Open_20_Project_20_File_case_4_local_3_case_2_local_4_case_3_local_2(PARAMETERS,ROOT(1));
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

result = vpx_method_Open_20_Project_20_File_case_4_local_3_case_2_local_4_case_3_local_13(PARAMETERS,TERMINAL(11),TERMINAL(12),ROOT(14));

result = vpx_method_Block_20_Free(PARAMETERS,TERMINAL(10));

result = kSuccess;

OUTPUT(0,TERMINAL(14))
FOOTERWITHNONE(15)
}

enum opTrigger vpx_method_Open_20_Project_20_File_case_4_local_3_case_2_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Open_20_Project_20_File_case_4_local_3_case_2_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Open_20_Project_20_File_case_4_local_3_case_2_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_Open_20_Project_20_File_case_4_local_3_case_2_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Open_20_Project_20_File_case_4_local_3_case_2_local_4_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Open_20_Project_20_File_case_4_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Open_20_Project_20_File_case_4_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,fsRdPerm,ROOT(1));

result = vpx_method_Open_20_Project_20_File_case_4_local_3_case_2_local_3(PARAMETERS,TERMINAL(0),TERMINAL(1),ROOT(2));
FAILONFAILURE

result = vpx_method_Open_20_Project_20_File_case_4_local_3_case_2_local_4(PARAMETERS,TERMINAL(2),ROOT(3));

PUTINTEGER(FSCloseFork( GETINTEGER(TERMINAL(2))),4);
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(5)
}

enum opTrigger vpx_method_Open_20_Project_20_File_case_4_local_3_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Open_20_Project_20_File_case_4_local_3_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
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

enum opTrigger vpx_method_Open_20_Project_20_File_case_4_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Open_20_Project_20_File_case_4_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Open_20_Project_20_File_case_4_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_Open_20_Project_20_File_case_4_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Open_20_Project_20_File_case_4_local_3_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Open_20_Project_20_File_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Open_20_Project_20_File_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_method_Open_20_Project_20_File_case_4_local_3(PARAMETERS,TERMINAL(0),ROOT(1));
FAILONFAILURE

result = vpx_method_Get_20_VPL_20_Data(PARAMETERS,ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(1),ROOT(3),ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Add_20_To_20_List_20_Data,2,0,TERMINAL(4),TERMINAL(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open_20_Editor,1,0,TERMINAL(2));

result = kSuccess;

FOOTER(5)
}

enum opTrigger vpx_method_Open_20_Project_20_File(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Open_20_Project_20_File_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
if(vpx_method_Open_20_Project_20_File_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0))
if(vpx_method_Open_20_Project_20_File_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Open_20_Project_20_File_case_4(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Open_20_Library_20_File_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Open_20_Library_20_File_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(1)
}

enum opTrigger vpx_method_Open_20_Library_20_File_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Open_20_Library_20_File_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Front_20_Or_20_New_20_Project(PARAMETERS,ROOT(1));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Open_20_Library_20_File_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Open_20_Library_20_File_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Open_20_Library_20_File_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Open_20_Library_20_File_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Open_20_Library_20_File_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Open_20_Library_20_File_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_method_Open_20_Library_20_File_case_1_local_3(PARAMETERS,TERMINAL(0),ROOT(2));
FAILONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Add_20_Primitives_20_File,2,0,TERMINAL(2),TERMINAL(1));

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_Open_20_Library_20_File_case_2_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Open_20_Library_20_File_case_2_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(1)
}

enum opTrigger vpx_method_Open_20_Library_20_File_case_2_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Open_20_Library_20_File_case_2_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"FRONT",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Open_20_Library_20_File_case_2_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Open_20_Library_20_File_case_2_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Open_20_Library_20_File_case_2_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Open_20_Library_20_File_case_2_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Open_20_Library_20_File_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Open_20_Library_20_File_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADERWITHNONE(8)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,kWindowModalityNone,ROOT(2));

result = vpx_constant(PARAMETERS,"( \'vplB\' )",ROOT(3));

result = vpx_constant(PARAMETERS,"File Open Library Callback",ROOT(4));

result = vpx_method_Open_20_Library_20_File_case_2_local_5(PARAMETERS,TERMINAL(0),ROOT(5));
FAILONFAILURE

result = vpx_method_New_20_Callback(PARAMETERS,TERMINAL(4),TERMINAL(5),NONE,ROOT(6));

result = vpx_constant(PARAMETERS,"NULL",ROOT(7));

result = vpx_method_Nav_20_Get_20_File(PARAMETERS,TERMINAL(3),TERMINAL(2),TERMINAL(7),TERMINAL(6));
TERMINATEONFAILURE

result = kSuccess;

FOOTERWITHNONE(8)
}

enum opTrigger vpx_method_Open_20_Library_20_File(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Open_20_Library_20_File_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Open_20_Library_20_File_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Open_20_Section_20_File_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Open_20_Section_20_File_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(1)
}

enum opTrigger vpx_method_Open_20_Section_20_File_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Open_20_Section_20_File_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Front_20_Or_20_New_20_Project(PARAMETERS,ROOT(1));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Open_20_Section_20_File_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Open_20_Section_20_File_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Open_20_Section_20_File_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Open_20_Section_20_File_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Open_20_Section_20_File_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Open_20_Section_20_File_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_method_Open_20_Section_20_File_case_1_local_3(PARAMETERS,TERMINAL(0),ROOT(2));
FAILONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Add_20_Section_20_Data,2,0,TERMINAL(2),TERMINAL(1));

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_Open_20_Section_20_File_case_2_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Open_20_Section_20_File_case_2_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(1)
}

enum opTrigger vpx_method_Open_20_Section_20_File_case_2_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Open_20_Section_20_File_case_2_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Front_20_Or_20_New_20_Project(PARAMETERS,ROOT(1));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Open_20_Section_20_File_case_2_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Open_20_Section_20_File_case_2_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Open_20_Section_20_File_case_2_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Open_20_Section_20_File_case_2_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Open_20_Section_20_File_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Open_20_Section_20_File_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_list_3F_,1,0,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_method_Open_20_Section_20_File_case_2_local_3(PARAMETERS,TERMINAL(0),ROOT(2));
FAILONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Add_20_Section_20_Data,2,0,TERMINAL(2),TERMINAL(1));

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_Open_20_Section_20_File_case_3_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Open_20_Section_20_File_case_3_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(1)
}

enum opTrigger vpx_method_Open_20_Section_20_File_case_3_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Open_20_Section_20_File_case_3_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"FRONT",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Open_20_Section_20_File_case_3_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Open_20_Section_20_File_case_3_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Open_20_Section_20_File_case_3_local_6_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Open_20_Section_20_File_case_3_local_6_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Open_20_Section_20_File_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Open_20_Section_20_File_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADERWITHNONE(8)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,kWindowModalityNone,ROOT(2));

result = vpx_constant(PARAMETERS,"NULL",ROOT(3));

result = vpx_constant(PARAMETERS,"( \'vplS\' )",ROOT(4));

result = vpx_constant(PARAMETERS,"File Open Section Callback",ROOT(5));

result = vpx_method_Open_20_Section_20_File_case_3_local_6(PARAMETERS,TERMINAL(0),ROOT(6));
FAILONFAILURE

result = vpx_method_New_20_Callback(PARAMETERS,TERMINAL(5),TERMINAL(6),NONE,ROOT(7));

result = vpx_method_Nav_20_Get_20_File(PARAMETERS,TERMINAL(4),TERMINAL(2),TERMINAL(3),TERMINAL(7));
TERMINATEONFAILURE

result = kSuccess;

FOOTERWITHNONE(8)
}

enum opTrigger vpx_method_Open_20_Section_20_File(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Open_20_Section_20_File_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
if(vpx_method_Open_20_Section_20_File_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Open_20_Section_20_File_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Open_20_Application_20_File_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Open_20_Application_20_File_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_persistent(PARAMETERS,kVPXValue_VPZ_20_Access_20_Control,0,1,ROOT(1));

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(1));
NEXTCASEONSUCCESS

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Open_20_Application_20_File_case_2_local_4_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Open_20_Application_20_File_case_2_local_4_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADERWITHNONE(8)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Application.vpz",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Bundle_20_Resource_20_FSRef,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));
FAILONFAILURE

result = vpx_constant(PARAMETERS,"TRUE",ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod__7E_FSGetCatalogInfo,5,4,TERMINAL(2),NONE,NONE,TERMINAL(3),TERMINAL(3),ROOT(4),ROOT(5),ROOT(6),ROOT(7));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(6))
OUTPUT(1,TERMINAL(7))
FOOTERWITHNONE(8)
}

enum opTrigger vpx_method_Open_20_Application_20_File_case_2_local_4_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Open_20_Application_20_File_case_2_local_4_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADERWITHNONE(19)
INPUT(0,0)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,kFSCatInfoNone,ROOT(1));

result = vpx_constant(PARAMETERS,"NULL",ROOT(2));

PUTINTEGER(CFStringGetSystemEncoding(),3);
result = kSuccess;

result = vpx_constant(PARAMETERS,"Application.vpz",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_string_2D_to_2D_pointer,1,1,TERMINAL(4),ROOT(5));

PUTPOINTER(__CFString,*,CFStringCreateWithCString( GETCONSTPOINTER(__CFAllocator,*,TERMINAL(2)),GETCONSTPOINTER(char,*,TERMINAL(5)),GETINTEGER(TERMINAL(3))),6);
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(7));

PUTPOINTER(__CFURL,*,CFURLCreateFromFSRef( GETCONSTPOINTER(__CFAllocator,*,TERMINAL(7)),GETCONSTPOINTER(FSRef,*,TERMINAL(0))),8);
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(8));
FAILONSUCCESS

PUTPOINTER(__CFBundle,*,CFBundleCreate( GETCONSTPOINTER(__CFAllocator,*,TERMINAL(7)),GETCONSTPOINTER(__CFURL,*,TERMINAL(8))),9);
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(9));
FAILONSUCCESS

PUTPOINTER(__CFURL,*,CFBundleCopyResourceURL( GETPOINTER(0,__CFBundle,*,ROOT(11),TERMINAL(9)),GETCONSTPOINTER(__CFString,*,TERMINAL(6)),GETCONSTPOINTER(__CFString,*,TERMINAL(2)),GETCONSTPOINTER(__CFString,*,TERMINAL(2))),10);
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(10));
FAILONSUCCESS

PUTINTEGER(CFURLGetFSRef( GETCONSTPOINTER(__CFURL,*,TERMINAL(10)),GETPOINTER(144,FSRef,*,ROOT(13),NONE)),12);
result = kSuccess;

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(12));
FAILONFAILURE

PUTINTEGER(FSGetCatalogInfo( GETCONSTPOINTER(FSRef,*,TERMINAL(13)),GETINTEGER(TERMINAL(1)),GETPOINTER(148,FSCatalogInfo,*,ROOT(15),TERMINAL(2)),GETPOINTER(512,HFSUniStr255,*,ROOT(16),TERMINAL(2)),GETPOINTER(72,FSSpec,*,ROOT(17),NONE),GETPOINTER(144,FSRef,*,ROOT(18),NONE)),14);
result = kSuccess;

CFRelease( GETCONSTPOINTER(void,*,TERMINAL(8)));
result = kSuccess;

CFRelease( GETCONSTPOINTER(void,*,TERMINAL(6)));
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(17))
OUTPUT(1,TERMINAL(18))
FOOTERWITHNONE(19)
}

enum opTrigger vpx_method_Open_20_Application_20_File_case_2_local_4_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Open_20_Application_20_File_case_2_local_4_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Open_20_Application_20_File_case_2_local_4_case_1_local_6_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1))
vpx_method_Open_20_Application_20_File_case_2_local_4_case_1_local_6_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1);
return outcome;
}

enum opTrigger vpx_method_Open_20_Application_20_File_case_2_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1,V_Object *root2);
enum opTrigger vpx_method_Open_20_Application_20_File_case_2_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1,V_Object *root2)
{
HEADER(7)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_FSRef,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
FAILONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_FSSpec,1,1,TERMINAL(0),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
FAILONSUCCESS

result = vpx_method_Open_20_Application_20_File_case_2_local_4_case_1_local_6(PARAMETERS,TERMINAL(0),ROOT(3),ROOT(4));
FAILONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_open_2D_file,1,1,TERMINAL(3),ROOT(5));
FAILONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_read_2D_object,1,1,TERMINAL(5),ROOT(6));
CONTINUEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_close_2D_file,1,0,TERMINAL(5));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(6))
OUTPUT(1,TERMINAL(2))
OUTPUT(2,TERMINAL(4))
FOOTERSINGLECASE(7)
}

enum opTrigger vpx_method_Open_20_Application_20_File_case_2_local_6_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Open_20_Application_20_File_case_2_local_6_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_Name,TERMINAL(2),ROOT(3),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Open_20_Application_20_File_case_2_local_6_case_1_local_9_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Open_20_Application_20_File_case_2_local_6_case_1_local_9_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP__28_in_29_,2,1,TERMINAL(1),TERMINAL(0),ROOT(3));

result = vpx_match(PARAMETERS,"0",TERMINAL(3));
NEXTCASEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_nth,2,1,TERMINAL(2),TERMINAL(3),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Open_20_Application_20_File_case_2_local_6_case_1_local_9_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Open_20_Application_20_File_case_2_local_6_case_1_local_9_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADERWITHNONE(3)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = kSuccess;

OUTPUT(0,NONE)
FOOTERWITHNONE(3)
}

enum opTrigger vpx_method_Open_20_Application_20_File_case_2_local_6_case_1_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Open_20_Application_20_File_case_2_local_6_case_1_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Open_20_Application_20_File_case_2_local_6_case_1_local_9_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
vpx_method_Open_20_Application_20_File_case_2_local_6_case_1_local_9_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0);
return outcome;
}

enum opTrigger vpx_method_Open_20_Application_20_File_case_2_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Open_20_Application_20_File_case_2_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(11)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Primitives Data",ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(0),TERMINAL(2),ROOT(3));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_method_New_20_FSRef(PARAMETERS,TERMINAL(1),ROOT(6));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Directory_20_Items,1,1,TERMINAL(6),ROOT(7));
NEXTCASEONFAILURE

if( (repeatLimit = vpx_multiplex(1,TERMINAL(7))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Name_20_As_20_String,1,1,LIST(7),ROOT(8));
LISTROOT(8,0)
REPEATFINISH
LISTROOTFINISH(8,0)
LISTROOTEND
} else {
ROOTEMPTY(8)
}

if( (repeatLimit = vpx_multiplex(1,TERMINAL(5))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Open_20_Application_20_File_case_2_local_6_case_1_local_8(PARAMETERS,LIST(5),ROOT(9));
LISTROOT(9,0)
REPEATFINISH
LISTROOTFINISH(9,0)
LISTROOTEND
} else {
ROOTEMPTY(9)
}

if( (repeatLimit = vpx_multiplex(1,TERMINAL(9))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Open_20_Application_20_File_case_2_local_6_case_1_local_9(PARAMETERS,LIST(9),TERMINAL(8),TERMINAL(7),ROOT(10));
LISTROOT(10,0)
REPEATFINISH
LISTROOTFINISH(10,0)
LISTROOTEND
} else {
ROOTEMPTY(10)
}

result = kSuccess;

OUTPUT(0,TERMINAL(10))
FOOTER(11)
}

enum opTrigger vpx_method_Open_20_Application_20_File_case_2_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Open_20_Application_20_File_case_2_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
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

enum opTrigger vpx_method_Open_20_Application_20_File_case_2_local_6_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Open_20_Application_20_File_case_2_local_6_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(9)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,kFSCatInfoNone,ROOT(2));

PUTINTEGER(FSGetCatalogInfo( GETCONSTPOINTER(FSRef,*,TERMINAL(1)),GETINTEGER(TERMINAL(2)),GETPOINTER(148,FSCatalogInfo,*,ROOT(4),NONE),GETPOINTER(512,HFSUniStr255,*,ROOT(5),NONE),GETPOINTER(72,FSSpec,*,ROOT(6),NONE),GETPOINTER(144,FSRef,*,ROOT(7),NONE)),3);
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_vpx_2D_folder_2D_fsspecs,1,1,TERMINAL(6),ROOT(8));

result = kSuccess;

OUTPUT(0,TERMINAL(8))
FOOTERWITHNONE(9)
}

enum opTrigger vpx_method_Open_20_Application_20_File_case_2_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Open_20_Application_20_File_case_2_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Open_20_Application_20_File_case_2_local_6_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
if(vpx_method_Open_20_Application_20_File_case_2_local_6_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Open_20_Application_20_File_case_2_local_6_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Open_20_Application_20_File_case_2_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Open_20_Application_20_File_case_2_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(18)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Project,TERMINAL(0),TERMINAL(1),ROOT(3));

result = vpx_persistent(PARAMETERS,kVPXValue_Interpreter_20_Mode,0,1,ROOT(4));

result = vpx_constant(PARAMETERS,"FALSE",ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_create_2D_environment,3,6,TERMINAL(4),TERMINAL(2),TERMINAL(5),ROOT(6),ROOT(7),ROOT(8),ROOT(9),ROOT(10),ROOT(11));
FAILONFAILURE

result = vpx_set(PARAMETERS,kVPXValue_Environment,TERMINAL(3),TERMINAL(6),ROOT(12));

result = vpx_set(PARAMETERS,kVPXValue_Write_20_Name,TERMINAL(12),TERMINAL(7),ROOT(13));

result = vpx_set(PARAMETERS,kVPXValue_Read_20_Name,TERMINAL(13),TERMINAL(8),ROOT(14));

result = vpx_set(PARAMETERS,kVPXValue_Write_20_Descriptor,TERMINAL(14),TERMINAL(9),ROOT(15));

result = vpx_set(PARAMETERS,kVPXValue_Read_20_Descriptor,TERMINAL(15),TERMINAL(10),ROOT(16));

result = vpx_set(PARAMETERS,kVPXValue_File,TERMINAL(16),TERMINAL(11),ROOT(17));

result = kSuccess;

FOOTERSINGLECASE(18)
}

enum opTrigger vpx_method_Open_20_Application_20_File_case_2_local_13_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Open_20_Application_20_File_case_2_local_13_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_constant(PARAMETERS,"FALSE",ROOT(3));

result = vpx_set(PARAMETERS,kVPXValue_Dirty,TERMINAL(2),TERMINAL(3),ROOT(4));

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Open_20_Application_20_File_case_2_local_13(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Open_20_Application_20_File_case_2_local_13(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Section Data",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(2),ROOT(3),ROOT(4));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(4))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Open_20_Application_20_File_case_2_local_13_case_1_local_5(PARAMETERS,LIST(4));
REPEATFINISH
} else {
}

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Open_20_Application_20_File_case_2_local_14(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Open_20_Application_20_File_case_2_local_14(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Import_20_Primitives,2,0,TERMINAL(3),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Open_20_Application_20_File_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Open_20_Application_20_File_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADERWITHNONE(12)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_method_Get_20_VPL_20_Data(PARAMETERS,ROOT(1));

result = vpx_method_Open_20_Application_20_File_case_2_local_4(PARAMETERS,TERMINAL(0),ROOT(2),ROOT(3),ROOT(4));
TERMINATEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(2),ROOT(5),ROOT(6));

result = vpx_method_Open_20_Application_20_File_case_2_local_6(PARAMETERS,TERMINAL(6),TERMINAL(4),ROOT(7));

result = vpx_instantiate(PARAMETERS,kVPXClass_Interpreter,1,1,NONE,ROOT(8));

result = vpx_method_Open_20_Application_20_File_case_2_local_8(PARAMETERS,TERMINAL(8),TERMINAL(6),TERMINAL(3));
TERMINATEONFAILURE

result = vpx_set(PARAMETERS,kVPXValue_Environment,TERMINAL(6),TERMINAL(8),ROOT(9));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Add_20_To_20_List_20_Data,2,0,TERMINAL(9),TERMINAL(1));

result = vpx_constant(PARAMETERS,"FALSE",ROOT(10));

result = vpx_set(PARAMETERS,kVPXValue_Dirty,TERMINAL(9),TERMINAL(10),ROOT(11));

result = vpx_method_Open_20_Application_20_File_case_2_local_13(PARAMETERS,TERMINAL(11));

result = vpx_method_Open_20_Application_20_File_case_2_local_14(PARAMETERS,TERMINAL(5),TERMINAL(7));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open_20_Editor,1,0,TERMINAL(1));

result = kSuccess;

FOOTERWITHNONE(12)
}

enum opTrigger vpx_method_Open_20_Application_20_File_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Open_20_Application_20_File_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADERWITHNONE(6)
INPUT(0,0)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,kWindowModalityNone,ROOT(1));

result = vpx_constant(PARAMETERS,"NULL",ROOT(2));

result = vpx_constant(PARAMETERS,"( \'APPL\' )",ROOT(3));

result = vpx_constant(PARAMETERS,"File Open Application Callback",ROOT(4));

result = vpx_method_New_20_Callback(PARAMETERS,TERMINAL(4),NONE,NONE,ROOT(5));

result = vpx_method_Nav_20_Choose_20_File(PARAMETERS,TERMINAL(3),TERMINAL(1),TERMINAL(2),TERMINAL(5));
TERMINATEONFAILURE

result = kSuccess;

FOOTERWITHNONE(6)
}

enum opTrigger vpx_method_Open_20_Application_20_File(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Open_20_Application_20_File_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
if(vpx_method_Open_20_Application_20_File_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Open_20_Application_20_File_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Open_20_Resource_20_File_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Open_20_Resource_20_File_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(1)
}

enum opTrigger vpx_method_Open_20_Resource_20_File_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Open_20_Resource_20_File_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Front_20_Or_20_New_20_Project(PARAMETERS,ROOT(1));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Open_20_Resource_20_File_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Open_20_Resource_20_File_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Open_20_Resource_20_File_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Open_20_Resource_20_File_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Open_20_Resource_20_File_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Open_20_Resource_20_File_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_method_Open_20_Resource_20_File_case_1_local_3(PARAMETERS,TERMINAL(0),ROOT(2));
FAILONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Add_20_Resource_20_File,2,0,TERMINAL(2),TERMINAL(1));

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_Open_20_Resource_20_File_case_2_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Open_20_Resource_20_File_case_2_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(1)
}

enum opTrigger vpx_method_Open_20_Resource_20_File_case_2_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Open_20_Resource_20_File_case_2_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"FRONT",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Open_20_Resource_20_File_case_2_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Open_20_Resource_20_File_case_2_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Open_20_Resource_20_File_case_2_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Open_20_Resource_20_File_case_2_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Open_20_Resource_20_File_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Open_20_Resource_20_File_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADERWITHNONE(8)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,kWindowModalityNone,ROOT(2));

result = vpx_constant(PARAMETERS,"(  )",ROOT(3));

result = vpx_constant(PARAMETERS,"File Open Resource Callback",ROOT(4));

result = vpx_method_Open_20_Resource_20_File_case_2_local_5(PARAMETERS,TERMINAL(0),ROOT(5));
FAILONFAILURE

result = vpx_method_New_20_Callback(PARAMETERS,TERMINAL(4),TERMINAL(5),NONE,ROOT(6));

result = vpx_constant(PARAMETERS,"NULL",ROOT(7));

result = vpx_method_Nav_20_Choose_20_Object(PARAMETERS,TERMINAL(2),TERMINAL(7),TERMINAL(6));
TERMINATEONFAILURE

result = kSuccess;

FOOTERWITHNONE(8)
}

enum opTrigger vpx_method_Open_20_Resource_20_File(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Open_20_Resource_20_File_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Open_20_Resource_20_File_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_File_20_Open_20_Project_20_Callback_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_File_20_Open_20_Project_20_Callback_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Open_20_Project_20_File(PARAMETERS,TERMINAL(0));
NEXTCASEONFAILURE

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_File_20_Open_20_Project_20_Callback_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_File_20_Open_20_Project_20_Callback_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_File_20_Open_20_Project_20_Callback_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_File_20_Open_20_Project_20_Callback_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_File_20_Open_20_Project_20_Callback_case_1_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_File_20_Open_20_Project_20_Callback_case_1_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_File_20_Open_20_Project_20_Callback_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_File_20_Open_20_Project_20_Callback_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Canceled_3F_,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(1));
NEXTCASEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Reply_20_Selection,1,1,TERMINAL(0),ROOT(2));
NEXTCASEONFAILURE

if( (repeatLimit = vpx_multiplex(1,TERMINAL(2))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_File_20_Open_20_Project_20_Callback_case_1_local_5(PARAMETERS,LIST(2));
REPEATFINISH
} else {
}

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_File_20_Open_20_Project_20_Callback_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_File_20_Open_20_Project_20_Callback_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_File_20_Open_20_Project_20_Callback(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_File_20_Open_20_Project_20_Callback_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_File_20_Open_20_Project_20_Callback_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_File_20_Open_20_Library_20_Callback_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_File_20_Open_20_Library_20_Callback_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Open_20_Library_20_File(PARAMETERS,TERMINAL(1),TERMINAL(0));
NEXTCASEONFAILURE

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_File_20_Open_20_Library_20_Callback_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_File_20_Open_20_Library_20_Callback_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_File_20_Open_20_Library_20_Callback_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_File_20_Open_20_Library_20_Callback_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_File_20_Open_20_Library_20_Callback_case_1_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_File_20_Open_20_Library_20_Callback_case_1_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_File_20_Open_20_Library_20_Callback_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_File_20_Open_20_Library_20_Callback_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Canceled_3F_,1,1,TERMINAL(1),ROOT(2));

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(2));
NEXTCASEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Reply_20_Selection,1,1,TERMINAL(1),ROOT(3));
NEXTCASEONFAILURE

if( (repeatLimit = vpx_multiplex(1,TERMINAL(3))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_File_20_Open_20_Library_20_Callback_case_1_local_5(PARAMETERS,LIST(3),TERMINAL(0));
REPEATFINISH
} else {
}

result = kSuccess;

FOOTER(4)
}

enum opTrigger vpx_method_File_20_Open_20_Library_20_Callback_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_File_20_Open_20_Library_20_Callback_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_File_20_Open_20_Library_20_Callback(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_File_20_Open_20_Library_20_Callback_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_File_20_Open_20_Library_20_Callback_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_File_20_Open_20_Section_20_Callback_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_File_20_Open_20_Section_20_Callback_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Canceled_3F_,1,1,TERMINAL(1),ROOT(2));

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(2));
NEXTCASEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Reply_20_Selection,1,1,TERMINAL(1),ROOT(3));
NEXTCASEONFAILURE

result = vpx_method_Open_20_Section_20_File(PARAMETERS,TERMINAL(0),TERMINAL(3));
NEXTCASEONFAILURE

result = kSuccess;

FOOTER(4)
}

enum opTrigger vpx_method_File_20_Open_20_Section_20_Callback_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_File_20_Open_20_Section_20_Callback_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_File_20_Open_20_Section_20_Callback(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_File_20_Open_20_Section_20_Callback_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_File_20_Open_20_Section_20_Callback_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_File_20_Open_20_Application_20_Callback_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_File_20_Open_20_Application_20_Callback_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Open_20_Application_20_File(PARAMETERS,TERMINAL(0));
NEXTCASEONFAILURE

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_File_20_Open_20_Application_20_Callback_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_File_20_Open_20_Application_20_Callback_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_File_20_Open_20_Application_20_Callback_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_File_20_Open_20_Application_20_Callback_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_File_20_Open_20_Application_20_Callback_case_1_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_File_20_Open_20_Application_20_Callback_case_1_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_File_20_Open_20_Application_20_Callback_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_File_20_Open_20_Application_20_Callback_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Canceled_3F_,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(1));
NEXTCASEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Reply_20_Selection,1,1,TERMINAL(0),ROOT(2));
NEXTCASEONFAILURE

if( (repeatLimit = vpx_multiplex(1,TERMINAL(2))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_File_20_Open_20_Application_20_Callback_case_1_local_5(PARAMETERS,LIST(2));
REPEATFINISH
} else {
}

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_File_20_Open_20_Application_20_Callback_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_File_20_Open_20_Application_20_Callback_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_File_20_Open_20_Application_20_Callback(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_File_20_Open_20_Application_20_Callback_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_File_20_Open_20_Application_20_Callback_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_File_20_Open_20_Recource_20_Callback_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_File_20_Open_20_Recource_20_Callback_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Open_20_Resource_20_File(PARAMETERS,TERMINAL(1),TERMINAL(0));
NEXTCASEONFAILURE

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_File_20_Open_20_Recource_20_Callback_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_File_20_Open_20_Recource_20_Callback_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_File_20_Open_20_Recource_20_Callback_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_File_20_Open_20_Recource_20_Callback_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_File_20_Open_20_Recource_20_Callback_case_1_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_File_20_Open_20_Recource_20_Callback_case_1_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_File_20_Open_20_Recource_20_Callback_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_File_20_Open_20_Recource_20_Callback_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Canceled_3F_,1,1,TERMINAL(1),ROOT(2));

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(2));
NEXTCASEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Reply_20_Selection,1,1,TERMINAL(1),ROOT(3));
NEXTCASEONFAILURE

if( (repeatLimit = vpx_multiplex(1,TERMINAL(3))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_File_20_Open_20_Recource_20_Callback_case_1_local_5(PARAMETERS,LIST(3),TERMINAL(0));
REPEATFINISH
} else {
}

result = kSuccess;

FOOTER(4)
}

enum opTrigger vpx_method_File_20_Open_20_Recource_20_Callback_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_File_20_Open_20_Recource_20_Callback_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_File_20_Open_20_Recource_20_Callback(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_File_20_Open_20_Recource_20_Callback_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_File_20_Open_20_Recource_20_Callback_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Select_20_Section_case_1_local_3_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Select_20_Section_case_1_local_3_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Name,1,1,TERMINAL(0),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP__28_in_29_,2,1,TERMINAL(1),TERMINAL(2),ROOT(3));

result = vpx_match(PARAMETERS,"0",TERMINAL(3));
NEXTCASEONSUCCESS

result = kSuccess;

OUTPUT(0,NONE)
FOOTERWITHNONE(4)
}

enum opTrigger vpx_method_Select_20_Section_case_1_local_3_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Select_20_Section_case_1_local_3_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(2)
}

enum opTrigger vpx_method_Select_20_Section_case_1_local_3_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Select_20_Section_case_1_local_3_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Select_20_Section_case_1_local_3_case_1_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Select_20_Section_case_1_local_3_case_1_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Select_20_Section_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Select_20_Section_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Default_20_List(PARAMETERS,TERMINAL(1),ROOT(2));

result = vpx_match(PARAMETERS,"( )",TERMINAL(2));
NEXTCASEONSUCCESS

if( (repeatLimit = vpx_multiplex(1,TERMINAL(0))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Select_20_Section_case_1_local_3_case_1_local_4(PARAMETERS,LIST(0),TERMINAL(2),ROOT(3));
LISTROOT(3,0)
REPEATFINISH
LISTROOTFINISH(3,0)
LISTROOTEND
} else {
ROOTEMPTY(3)
}

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_Select_20_Section_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Select_20_Section_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(2)
}

enum opTrigger vpx_method_Select_20_Section_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Select_20_Section_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Select_20_Section_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Select_20_Section_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Select_20_Section(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(11)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Section_20_Items,1,1,TERMINAL(0),ROOT(3));

result = vpx_method_Select_20_Section_case_1_local_3(PARAMETERS,TERMINAL(3),TERMINAL(2),ROOT(4));

result = vpx_match(PARAMETERS,"( )",TERMINAL(4));
FAILONSUCCESS

if( (repeatLimit = vpx_multiplex(1,TERMINAL(4))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Name,1,1,LIST(4),ROOT(5));
LISTROOT(5,0)
REPEATFINISH
LISTROOTFINISH(5,0)
LISTROOTEND
} else {
ROOTEMPTY(5)
}

result = vpx_call_primitive(PARAMETERS,VPLP_sort,1,1,TERMINAL(5),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP_select,2,1,TERMINAL(6),TERMINAL(1),ROOT(7));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(7));
FAILONSUCCESS

result = vpx_constant(PARAMETERS,"Name",ROOT(8));

result = vpx_method_Find_20_Instance(PARAMETERS,TERMINAL(4),TERMINAL(8),TERMINAL(7),ROOT(9),ROOT(10));

result = vpx_match(PARAMETERS,"0",TERMINAL(9));
FAILONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(10))
FOOTERSINGLECASE(11)
}

enum opTrigger vpx_method_Select_20_Class_case_1_local_3_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Select_20_Class_case_1_local_3_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Name,1,1,TERMINAL(0),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP__28_in_29_,2,1,TERMINAL(1),TERMINAL(2),ROOT(3));

result = vpx_match(PARAMETERS,"0",TERMINAL(3));
NEXTCASEONSUCCESS

result = kSuccess;

OUTPUT(0,NONE)
FOOTERWITHNONE(4)
}

enum opTrigger vpx_method_Select_20_Class_case_1_local_3_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Select_20_Class_case_1_local_3_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(2)
}

enum opTrigger vpx_method_Select_20_Class_case_1_local_3_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Select_20_Class_case_1_local_3_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Select_20_Class_case_1_local_3_case_1_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Select_20_Class_case_1_local_3_case_1_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Select_20_Class_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Select_20_Class_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Default_20_List(PARAMETERS,TERMINAL(1),ROOT(2));

result = vpx_match(PARAMETERS,"( )",TERMINAL(2));
NEXTCASEONSUCCESS

if( (repeatLimit = vpx_multiplex(1,TERMINAL(0))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Select_20_Class_case_1_local_3_case_1_local_4(PARAMETERS,LIST(0),TERMINAL(2),ROOT(3));
LISTROOT(3,0)
REPEATFINISH
LISTROOTFINISH(3,0)
LISTROOTEND
} else {
ROOTEMPTY(3)
}

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_Select_20_Class_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Select_20_Class_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(2)
}

enum opTrigger vpx_method_Select_20_Class_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Select_20_Class_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Select_20_Class_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Select_20_Class_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Select_20_Class(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(11)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Class_20_Items,1,1,TERMINAL(0),ROOT(3));

result = vpx_method_Select_20_Class_case_1_local_3(PARAMETERS,TERMINAL(3),TERMINAL(2),ROOT(4));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(4))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Name,1,1,LIST(4),ROOT(5));
LISTROOT(5,0)
REPEATFINISH
LISTROOTFINISH(5,0)
LISTROOTEND
} else {
ROOTEMPTY(5)
}

result = vpx_call_primitive(PARAMETERS,VPLP_sort,1,1,TERMINAL(5),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP_select,2,1,TERMINAL(6),TERMINAL(1),ROOT(7));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(7));
FAILONSUCCESS

result = vpx_constant(PARAMETERS,"Name",ROOT(8));

result = vpx_method_Find_20_Instance(PARAMETERS,TERMINAL(4),TERMINAL(8),TERMINAL(7),ROOT(9),ROOT(10));

result = vpx_match(PARAMETERS,"0",TERMINAL(9));
FAILONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(10))
FOOTERSINGLECASE(11)
}

enum opTrigger vpx_method_Get_20_Value_20_Clipboard(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0)
{
HEADER(1)
result = kSuccess;

result = vpx_persistent(PARAMETERS,kVPXValue_Value_20_Clipboard,0,1,ROOT(0));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(0));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Create_20_Class_20_Heirarchy_20_List_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Create_20_Class_20_Heirarchy_20_List_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Name",ROOT(1));

result = vpx_constant(PARAMETERS,"FALSE",ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_sort,3,1,TERMINAL(0),TERMINAL(2),TERMINAL(1),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Create_20_Class_20_Heirarchy_20_List_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Create_20_Class_20_Heirarchy_20_List_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_list_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_method_Create_20_Class_20_Heirarchy_20_List_case_1_local_3(PARAMETERS,TERMINAL(0),ROOT(1));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(1))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Create_20_Class_20_Heirarchy_20_List(PARAMETERS,LIST(1),ROOT(2));
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

enum opTrigger vpx_method_Create_20_Class_20_Heirarchy_20_List_case_2_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Create_20_Class_20_Heirarchy_20_List_case_2_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Name",ROOT(1));

result = vpx_constant(PARAMETERS,"FALSE",ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_sort,3,1,TERMINAL(0),TERMINAL(2),TERMINAL(1),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Create_20_Class_20_Heirarchy_20_List_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Create_20_Class_20_Heirarchy_20_List_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(8)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Name,1,1,TERMINAL(0),ROOT(1));

result = vpx_get(PARAMETERS,kVPXValue_Sub_20_Classes,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_method_Create_20_Class_20_Heirarchy_20_List_case_2_local_4(PARAMETERS,TERMINAL(3),ROOT(4));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(4))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Create_20_Class_20_Heirarchy_20_List(PARAMETERS,LIST(4),ROOT(5));
LISTROOT(5,0)
REPEATFINISH
LISTROOTFINISH(5,0)
LISTROOTEND
} else {
ROOTEMPTY(5)
}

result = vpx_call_primitive(PARAMETERS,VPLP_attach_2D_l,2,1,TERMINAL(1),TERMINAL(5),ROOT(6));

result = vpx_method__28_One_29_(PARAMETERS,TERMINAL(6),ROOT(7));

result = kSuccess;

OUTPUT(0,TERMINAL(7))
FOOTER(8)
}

enum opTrigger vpx_method_Create_20_Class_20_Heirarchy_20_List(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Create_20_Class_20_Heirarchy_20_List_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Create_20_Class_20_Heirarchy_20_List_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Modifier_20_Key_20_Pressed_3F__case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Modifier_20_Key_20_Pressed_3F__case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_bit_2D_and,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP__3D_,2,0,TERMINAL(2),TERMINAL(1));
FAILONFAILURE

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Modifier_20_Key_20_Pressed_3F_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

PUTINTEGER(GetCurrentKeyModifiers(),1);
result = kSuccess;

result = vpx_extconstant(PARAMETERS,cmdKey,ROOT(2));

result = vpx_method_Replace_20_NULL(PARAMETERS,TERMINAL(0),TERMINAL(2),ROOT(3));

result = vpx_method__28_Check_29_(PARAMETERS,TERMINAL(3),ROOT(4));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(4))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Modifier_20_Key_20_Pressed_3F__case_1_local_6(PARAMETERS,TERMINAL(1),LIST(4));
FAILONFAILURE
REPEATFINISH
} else {
}

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Get_20_Front_20_Method_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0);
enum opTrigger vpx_method_Get_20_Front_20_Method_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0)
{
HEADER(2)
result = kSuccess;

result = vpx_method_Get_20_Front_20_Window(PARAMETERS,ROOT(0));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Method_20_Data,1,1,TERMINAL(0),ROOT(1));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Get_20_Front_20_Method_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0);
enum opTrigger vpx_method_Get_20_Front_20_Method_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0)
{
HEADER(1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(0));

result = kSuccess;
FAILONSUCCESS

OUTPUT(0,TERMINAL(0))
FOOTER(1)
}

enum opTrigger vpx_method_Get_20_Front_20_Method(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Get_20_Front_20_Method_case_1(environment, &outcome, inputRepeat, contextIndex,root0))
vpx_method_Get_20_Front_20_Method_case_2(environment, &outcome, inputRepeat, contextIndex,root0);
return outcome;
}

enum opTrigger vpx_method_Get_20_Item_20_Helper_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Get_20_Item_20_Helper_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"Item Data",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(3));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_Get_20_Item_20_Helper_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Get_20_Item_20_Helper_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"List Data",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(3));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(5));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTER(6)
}

enum opTrigger vpx_method_Get_20_Item_20_Helper_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Get_20_Item_20_Helper_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
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

enum opTrigger vpx_method_Get_20_Item_20_Helper(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Get_20_Item_20_Helper_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_Get_20_Item_20_Helper_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Get_20_Item_20_Helper_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Import_20_CPX_20_File_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Import_20_CPX_20_File_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(1)
}

enum opTrigger vpx_method_Import_20_CPX_20_File_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Import_20_CPX_20_File_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Front_20_Or_20_New_20_Project(PARAMETERS,ROOT(1));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Import_20_CPX_20_File_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Import_20_CPX_20_File_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Import_20_CPX_20_File_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Import_20_CPX_20_File_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Import_20_CPX_20_File_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Import_20_CPX_20_File_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_method_Import_20_CPX_20_File_case_1_local_3(PARAMETERS,TERMINAL(0),ROOT(2));
FAILONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Import_20_CPX,2,0,TERMINAL(2),TERMINAL(1));

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_Import_20_CPX_20_File_case_2_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Import_20_CPX_20_File_case_2_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(1)
}

enum opTrigger vpx_method_Import_20_CPX_20_File_case_2_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Import_20_CPX_20_File_case_2_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Front_20_Or_20_New_20_Project(PARAMETERS,ROOT(1));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Import_20_CPX_20_File_case_2_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Import_20_CPX_20_File_case_2_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Import_20_CPX_20_File_case_2_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Import_20_CPX_20_File_case_2_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Import_20_CPX_20_File_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Import_20_CPX_20_File_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_list_3F_,1,0,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_method_Import_20_CPX_20_File_case_2_local_3(PARAMETERS,TERMINAL(0),ROOT(2));
FAILONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Import_20_CPX,2,0,TERMINAL(2),TERMINAL(1));

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_Import_20_CPX_20_File_case_3_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Import_20_CPX_20_File_case_3_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(1)
}

enum opTrigger vpx_method_Import_20_CPX_20_File_case_3_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Import_20_CPX_20_File_case_3_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"FRONT",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Import_20_CPX_20_File_case_3_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Import_20_CPX_20_File_case_3_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Import_20_CPX_20_File_case_3_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Import_20_CPX_20_File_case_3_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Import_20_CPX_20_File_case_3_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Import_20_CPX_20_File_case_3_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(6)
INPUT(0,0)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_Nav_20_Get_20_File_20_Dialog,1,1,NONE,ROOT(1));

result = vpx_constant(PARAMETERS,"( \'PROG\' )",ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Type_20_List,2,0,TERMINAL(1),TERMINAL(2));

result = vpx_extconstant(PARAMETERS,kWindowModalityNone,ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Modality,2,0,TERMINAL(1),TERMINAL(3));

result = vpx_constant(PARAMETERS,"NULL",ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Parent_20_Window,2,0,TERMINAL(1),TERMINAL(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Completion_20_Behavior,2,0,TERMINAL(1),TERMINAL(0));

result = vpx_constant(PARAMETERS,"\'PIVL\'",ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Creator_20_Code,2,0,TERMINAL(1),TERMINAL(5));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASEWITHNONE(6)
}

enum opTrigger vpx_method_Import_20_CPX_20_File_case_3_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Import_20_CPX_20_File_case_3_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Run,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_Import_20_CPX_20_File_case_3_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Import_20_CPX_20_File_case_3_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Close,1,0,TERMINAL(0));

result = kSuccess;
FAILONSUCCESS

FOOTER(1)
}

enum opTrigger vpx_method_Import_20_CPX_20_File_case_3_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Import_20_CPX_20_File_case_3_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Import_20_CPX_20_File_case_3_local_7_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Import_20_CPX_20_File_case_3_local_7_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Import_20_CPX_20_File_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Import_20_CPX_20_File_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADERWITHNONE(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"File Import CPX Callback",ROOT(2));

result = vpx_method_Import_20_CPX_20_File_case_3_local_3(PARAMETERS,TERMINAL(0),ROOT(3));
FAILONFAILURE

result = vpx_method_New_20_Callback(PARAMETERS,TERMINAL(2),TERMINAL(3),NONE,ROOT(4));

result = vpx_method_Import_20_CPX_20_File_case_3_local_5(PARAMETERS,TERMINAL(4),ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open,1,0,TERMINAL(5));
FAILONFAILURE

result = vpx_method_Import_20_CPX_20_File_case_3_local_7(PARAMETERS,TERMINAL(5));
FAILONFAILURE

result = kSuccess;

FOOTERWITHNONE(6)
}

enum opTrigger vpx_method_Import_20_CPX_20_File(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Import_20_CPX_20_File_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
if(vpx_method_Import_20_CPX_20_File_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Import_20_CPX_20_File_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_File_20_Import_20_CPX_20_Callback_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_File_20_Import_20_CPX_20_Callback_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Canceled_3F_,1,1,TERMINAL(1),ROOT(2));

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(2));
NEXTCASEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Reply_20_Selection,1,1,TERMINAL(1),ROOT(3));
NEXTCASEONFAILURE

result = vpx_method_Import_20_CPX_20_File(PARAMETERS,TERMINAL(0),TERMINAL(3));
NEXTCASEONFAILURE

result = kSuccess;

FOOTER(4)
}

enum opTrigger vpx_method_File_20_Import_20_CPX_20_Callback_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_File_20_Import_20_CPX_20_Callback_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_File_20_Import_20_CPX_20_Callback(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_File_20_Import_20_CPX_20_Callback_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_File_20_Import_20_CPX_20_Callback_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Add_20_Files_20_To_20_Project_case_1_local_3_case_1_local_2_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Add_20_Files_20_To_20_Project_case_1_local_3_case_1_local_2_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_match(PARAMETERS,"\'vplB\'",TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_method_Open_20_Library_20_File(PARAMETERS,TERMINAL(0),TERMINAL(1));
FAILONFAILURE

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_Add_20_Files_20_To_20_Project_case_1_local_3_case_1_local_2_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Add_20_Files_20_To_20_Project_case_1_local_3_case_1_local_2_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_match(PARAMETERS,"\'FMWK\'",TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_method_Open_20_Library_20_File(PARAMETERS,TERMINAL(0),TERMINAL(1));
FAILONFAILURE

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_Add_20_Files_20_To_20_Project_case_1_local_3_case_1_local_2_case_1_local_4_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Add_20_Files_20_To_20_Project_case_1_local_3_case_1_local_2_case_1_local_4_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_match(PARAMETERS,"\'vplS\'",TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_method_Open_20_Section_20_File(PARAMETERS,TERMINAL(0),TERMINAL(1));
FAILONFAILURE

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_Add_20_Files_20_To_20_Project_case_1_local_3_case_1_local_2_case_1_local_4_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Add_20_Files_20_To_20_Project_case_1_local_3_case_1_local_2_case_1_local_4_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_match(PARAMETERS,"\'vplP\'",TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_method_Open_20_Project_20_File(PARAMETERS,TERMINAL(1));
FAILONFAILURE

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_Add_20_Files_20_To_20_Project_case_1_local_3_case_1_local_2_case_1_local_4_case_5(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Add_20_Files_20_To_20_Project_case_1_local_3_case_1_local_2_case_1_local_4_case_5(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_match(PARAMETERS,"\'APPL\'",TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_method_Open_20_Application_20_File(PARAMETERS,TERMINAL(1));

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_Add_20_Files_20_To_20_Project_case_1_local_3_case_1_local_2_case_1_local_4_case_6(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Add_20_Files_20_To_20_Project_case_1_local_3_case_1_local_2_case_1_local_4_case_6(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_method_Open_20_Resource_20_File(PARAMETERS,TERMINAL(0),TERMINAL(1));
FAILONFAILURE

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_Add_20_Files_20_To_20_Project_case_1_local_3_case_1_local_2_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Add_20_Files_20_To_20_Project_case_1_local_3_case_1_local_2_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Add_20_Files_20_To_20_Project_case_1_local_3_case_1_local_2_case_1_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2))
if(vpx_method_Add_20_Files_20_To_20_Project_case_1_local_3_case_1_local_2_case_1_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2))
if(vpx_method_Add_20_Files_20_To_20_Project_case_1_local_3_case_1_local_2_case_1_local_4_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2))
if(vpx_method_Add_20_Files_20_To_20_Project_case_1_local_3_case_1_local_2_case_1_local_4_case_4(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2))
if(vpx_method_Add_20_Files_20_To_20_Project_case_1_local_3_case_1_local_2_case_1_local_4_case_5(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2))
vpx_method_Add_20_Files_20_To_20_Project_case_1_local_3_case_1_local_2_case_1_local_4_case_6(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2);
return outcome;
}

enum opTrigger vpx_method_Add_20_Files_20_To_20_Project_case_1_local_3_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Add_20_Files_20_To_20_Project_case_1_local_3_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Finder_20_Info,1,3,TERMINAL(0),ROOT(2),ROOT(3),ROOT(4));
NEXTCASEONFAILURE

result = vpx_match(PARAMETERS,"\'vplS\'",TERMINAL(2));
FAILONSUCCESS

result = vpx_method_Add_20_Files_20_To_20_Project_case_1_local_3_case_1_local_2_case_1_local_4(PARAMETERS,TERMINAL(1),TERMINAL(0),TERMINAL(2));
NEXTCASEONFAILURE

result = kSuccess;

FOOTER(5)
}

enum opTrigger vpx_method_Add_20_Files_20_To_20_Project_case_1_local_3_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Add_20_Files_20_To_20_Project_case_1_local_3_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Add_20_Files_20_To_20_Project_case_1_local_3_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Add_20_Files_20_To_20_Project_case_1_local_3_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Add_20_Files_20_To_20_Project_case_1_local_3_case_1_local_2_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Add_20_Files_20_To_20_Project_case_1_local_3_case_1_local_2_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Add_20_Files_20_To_20_Project_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Add_20_Files_20_To_20_Project_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Add_20_Files_20_To_20_Project_case_1_local_3_case_1_local_2(PARAMETERS,TERMINAL(1),TERMINAL(0));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,NONE)
FOOTERWITHNONE(2)
}

enum opTrigger vpx_method_Add_20_Files_20_To_20_Project_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Add_20_Files_20_To_20_Project_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Add_20_Files_20_To_20_Project_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Add_20_Files_20_To_20_Project_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Add_20_Files_20_To_20_Project_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Add_20_Files_20_To_20_Project_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Add_20_Files_20_To_20_Project_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Add_20_Files_20_To_20_Project_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"( )",TERMINAL(1));
TERMINATEONSUCCESS

result = vpx_method_Open_20_Section_20_File(PARAMETERS,TERMINAL(0),TERMINAL(1));
TERMINATEONFAILURE

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Add_20_Files_20_To_20_Project(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method__28_Check_29_(PARAMETERS,TERMINAL(1),ROOT(2));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(2))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Add_20_Files_20_To_20_Project_case_1_local_3(PARAMETERS,TERMINAL(0),LIST(2),ROOT(3));
LISTROOT(3,0)
REPEATFINISH
LISTROOTFINISH(3,0)
LISTROOTEND
} else {
ROOTEMPTY(3)
}

result = vpx_method_Add_20_Files_20_To_20_Project_case_1_local_4(PARAMETERS,TERMINAL(0),TERMINAL(3));

result = kSuccess;

FOOTERSINGLECASE(4)
}




	Nat4 tempAttribute_Project_20_Viewer_20_Window_2F_Name[] = {
0000000000, 0X0000002C, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X0000000E, 0X50726F6A, 0X65637420, 0X56696577,
0X65720000
	};
	Nat4 tempAttribute_Project_20_Viewer_20_Window_2F_Window_20_Event_20_Handler[] = {
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
	Nat4 tempAttribute_Project_20_Viewer_20_Window_2F_Drawers[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Project_20_Window_20_HIToolbar_2F_Identifier[] = {
0000000000, 0X00000038, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X0000001B, 0X636F6D2E, 0X6D616376, 0X706C2E68,
0X69746F6F, 0X6C626172, 0X2E766965, 0X77657200
	};
	Nat4 tempAttribute_Project_20_Window_20_HIToolbar_2F_Attributes[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000003
	};
	Nat4 tempAttribute_Project_20_Window_20_HIToolbar_2F_Known_20_Items[] = {
0000000000, 0X00000A0C, 0X000001A8, 0X00000065, 0X00000014, 0X00000B68, 0X00000B64, 0X00000B60,
0X00000B3C, 0X00000B44, 0X00000AFC, 0X00000B14, 0X00000AF4, 0X00000AD0, 0X00000AD8, 0X000009B4,
0X00000AA0, 0X000009AC, 0X000009A4, 0X000009A0, 0X00000A4C, 0X0000099C, 0X00000998, 0X00000994,
0X00000990, 0X000009D0, 0X0000098C, 0X00000970, 0X00000978, 0X000001E0, 0X00000910, 0X0000090C,
0X00000908, 0X000008E4, 0X000008EC, 0X000008A4, 0X000008BC, 0X0000089C, 0X00000878, 0X00000880,
0X0000072C, 0X00000840, 0X00000728, 0X00000818, 0X00000724, 0X0000071C, 0X00000718, 0X000007C4,
0X00000714, 0X00000710, 0X0000070C, 0X00000708, 0X00000748, 0X00000704, 0X000006E8, 0X000006F0,
0X000001DC, 0X00000648, 0X00000644, 0X00000640, 0X00000660, 0X0000063C, 0X00000618, 0X00000620,
0X000001D8, 0X00000578, 0X00000574, 0X00000570, 0X00000590, 0X0000056C, 0X00000548, 0X00000550,
0X000001D4, 0X000004A4, 0X000004A0, 0X0000049C, 0X000004BC, 0X00000498, 0X00000474, 0X0000047C,
0X000001D0, 0X000003D4, 0X000003D0, 0X000003CC, 0X000003EC, 0X000003C8, 0X000003A4, 0X000003AC,
0X000001CC, 0X00000300, 0X000002FC, 0X000002F8, 0X00000318, 0X000002F4, 0X000002D0, 0X000002D8,
0X000001C8, 0X00000228, 0X00000224, 0X00000220, 0X00000240, 0X0000021C, 0X000001F8, 0X00000200,
0X000001C4, 0X000001BC, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X000001C4,
0X00000008, 0X000001E4, 0X000002BC, 0X00000390, 0X00000460, 0X00000534, 0X00000604, 0X000006D4,
0X0000095C, 0X00700008, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000021C, 0X00000004,
0X00000204, 0X4849546F, 0X6F6C6261, 0X72204275, 0X696C7449, 0X6E204974, 0X656D0000, 0X0000022C,
0X00000274, 0X0000028C, 0X000002A4, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000248, 0X00000029, 0X636F6D2E, 0X6170706C, 0X652E6869, 0X746F6F6C, 0X626F782E, 0X746F6F6C,
0X6261722E, 0X666C6578, 0X69626C65, 0X73706163, 0X65000000, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0X00002710, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000064, 0X00000003, 0000000000, 0000000000, 0000000000, 0000000000, 0X00010000, 0X00700008,
0000000000, 0000000000, 0000000000, 0000000000, 0X000002F4, 0X00000004, 0X000002DC, 0X4849546F,
0X6F6C6261, 0X72204275, 0X696C7449, 0X6E204974, 0X656D0000, 0X00000304, 0X00000348, 0X00000360,
0X00000378, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000320, 0X00000025,
0X636F6D2E, 0X6170706C, 0X652E6869, 0X746F6F6C, 0X626F782E, 0X746F6F6C, 0X6261722E, 0X73657061,
0X7261746F, 0X72000000, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000062, 0X00000003, 0000000000,
0000000000, 0000000000, 0000000000, 0X00010000, 0X00700008, 0000000000, 0000000000, 0000000000,
0000000000, 0X000003C8, 0X00000004, 0X000003B0, 0X4849546F, 0X6F6C6261, 0X72204275, 0X696C7449,
0X6E204974, 0X656D0000, 0X000003D8, 0X00000418, 0X00000430, 0X00000448, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X000003F4, 0X00000021, 0X636F6D2E, 0X6170706C, 0X652E6869,
0X746F6F6C, 0X626F782E, 0X746F6F6C, 0X6261722E, 0X73706163, 0X65000000, 0X00000004, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000004, 0000000000, 0000000000, 0000000000,
0000000000, 0X00000063, 0X00000003, 0000000000, 0000000000, 0000000000, 0000000000, 0X00010000,
0X00700008, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000498, 0X00000004, 0X00000480,
0X4849546F, 0X6F6C6261, 0X72204275, 0X696C7449, 0X6E204974, 0X656D0000, 0X000004A8, 0X000004EC,
0X00000504, 0X0000051C, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X000004C4,
0X00000025, 0X636F6D2E, 0X6170706C, 0X652E6869, 0X746F6F6C, 0X626F782E, 0X746F6F6C, 0X6261722E,
0X63757374, 0X6F6D697A, 0X65000000, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000,
0X00002711, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000061, 0X00000003,
0000000000, 0000000000, 0000000000, 0000000000, 0X00010000, 0X00700008, 0000000000, 0000000000,
0000000000, 0000000000, 0X0000056C, 0X00000004, 0X00000554, 0X4849546F, 0X6F6C6261, 0X72204275,
0X696C7449, 0X6E204974, 0X656D0000, 0X0000057C, 0X000005BC, 0X000005D4, 0X000005EC, 0X00000006,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000598, 0X00000021, 0X636F6D2E, 0X6170706C,
0X652E6869, 0X746F6F6C, 0X626F782E, 0X746F6F6C, 0X6261722E, 0X7072696E, 0X74000000, 0X00000004,
0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000060, 0X00000003, 0000000000, 0000000000, 0000000000, 0000000000,
0X00010000, 0X00700008, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000063C, 0X00000004,
0X00000624, 0X4849546F, 0X6F6C6261, 0X72204275, 0X696C7449, 0X6E204974, 0X656D0000, 0X0000064C,
0X0000068C, 0X000006A4, 0X000006BC, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000668, 0X00000021, 0X636F6D2E, 0X6170706C, 0X652E6869, 0X746F6F6C, 0X626F782E, 0X746F6F6C,
0X6261722E, 0X666F6E74, 0X73000000, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000,
0000000000, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000005F, 0X00000003,
0000000000, 0000000000, 0000000000, 0000000000, 0X00010000, 0X00710008, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000704, 0X0000000C, 0X000006F4, 0X4849546F, 0X6F6C6261, 0X72204974,
0X656D0000, 0X00000734, 0X00000768, 0X00000780, 0X00000798, 0X000007B0, 0X000007D4, 0X000007EC,
0000000000, 0X00000804, 0X0000082C, 0X00000864, 0000000000, 0X00000006, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000750, 0X00000017, 0X636F6D2E, 0X63757374, 0X6F6D2E74, 0X6573742E,
0X72656775, 0X6C617200, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000000A,
0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000000A, 0X00000003, 0000000000,
0000000000, 0000000000, 0000000000, 0X00010000, 0X00000006, 0000000000, 0000000000, 0000000000,
0000000000, 0X000007CC, 0X00000006, 0X44656C65, 0X74650000, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000,
0X54527368, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000820, 0X0000000B,
0X44656C65, 0X74652049, 0X74656D00, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000848, 0X00000019, 0X52656D6F, 0X76652074, 0X68652073, 0X656C6563, 0X74656420, 0X6974656D,
0X2E000000, 0X00790008, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000089C, 0X00000003,
0X00000884, 0X4D61634F, 0X53204963, 0X6F6E2052, 0X65666572, 0X656E6365, 0000000000, 0X000008A8,
0000000000, 0X000008D0, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X000008C4,
0X0000000A, 0X54726173, 0X68204963, 0X6F6E0000, 0X007A0008, 0000000000, 0000000000, 0000000000,
0000000000, 0X00000908, 0X00000003, 0X000008F0, 0X4D61634F, 0X53204963, 0X6F6E2052, 0X65676973,
0X74726172, 0000000000, 0X00000914, 0X0000092C, 0X00000944, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0X7464656C, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000,
0X6D616373, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0XFFFF8000, 0X00710008,
0000000000, 0000000000, 0000000000, 0000000000, 0X0000098C, 0X0000000C, 0X0000097C, 0X4849546F,
0X6F6C6261, 0X72204974, 0X656D0000, 0X000009BC, 0X000009F0, 0X00000A08, 0X00000A20, 0X00000A38,
0X00000A5C, 0X00000A74, 0000000000, 0X00000A8C, 0000000000, 0X00000ABC, 0000000000, 0X00000006,
0000000000, 0000000000, 0000000000, 0000000000, 0X000009D8, 0X00000016, 0X636F6D2E, 0X63757374,
0X6F6D2E74, 0X6573742E, 0X73776974, 0X63680000, 0X00000004, 0000000000, 0000000000, 0000000000,
0000000000, 0X00000005, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000005,
0X00000003, 0000000000, 0000000000, 0000000000, 0000000000, 0X00010000, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000A54, 0X00000004, 0X56696577, 0000000000, 0X00000004,
0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0X54646256, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000AA8, 0X00000010, 0X546F6767, 0X6C65206C, 0X69737420, 0X76696577, 0000000000, 0X00790008,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000AF4, 0X00000003, 0X00000ADC, 0X4D61634F,
0X53204963, 0X6F6E2052, 0X65666572, 0X656E6365, 0000000000, 0X00000B00, 0000000000, 0X00000B28,
0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000B1C, 0X0000000A, 0X4170706C,
0X65204C6F, 0X676F0000, 0X007A0008, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000B60,
0X00000003, 0X00000B48, 0X4D61634F, 0X53204963, 0X6F6E2052, 0X65676973, 0X74726172, 0000000000,
0X00000B6C, 0X00000B84, 0X00000B9C, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000,
0X61726E67, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X6D616373, 0X00000004,
0000000000, 0000000000, 0000000000, 0000000000, 0XFFFF8000
	};
	Nat4 tempAttribute_Project_20_Window_20_HIToolbar_2F_Items[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Project_20_Window_20_HIToolbar_2F_Visible_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Project_20_Window_20_HIToolbar_2F_Supports_20_Drop_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0X00010000
	};
	Nat4 tempAttribute_Project_20_Window_20_HIToolbar_2F_Windows[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Project_20_Window_20_HIToolbar_2F_HIToolbar_20_Events[] = {
0000000000, 0X00000448, 0X000000D4, 0X00000030, 0X00000014, 0X000004E8, 0X000004E4, 0X000004DC,
0X000003C8, 0X00000494, 0X00000490, 0X00000488, 0X000003C4, 0X00000440, 0X0000043C, 0X00000434,
0X000003C0, 0X000003EC, 0X000003E8, 0X000003E0, 0X000003BC, 0X000003B4, 0X00000140, 0X0000013C,
0X0000036C, 0X00000128, 0X00000340, 0X00000124, 0X00000314, 0X000002FC, 0X000002D4, 0X000002DC,
0X000002BC, 0X000002B4, 0X0000011C, 0X0000028C, 0X00000274, 0X0000024C, 0X00000254, 0X000001D0,
0X00000228, 0X00000210, 0X000001E8, 0X000001F0, 0X000001CC, 0X000001C4, 0X00000118, 0X00000194,
0X00000114, 0X00000164, 0X0000010C, 0X000000E8, 0X000000F0, 0X00270008, 0000000000, 0000000000,
0000000000, 0000000000, 0X0000010C, 0X00000011, 0X000000F4, 0X43617262, 0X6F6E2045, 0X76656E74,
0X2043616C, 0X6C626163, 0X6B000000, 0X00000150, 0000000000, 0X00000180, 0X000001B0, 0X000002A0,
0000000000, 0X0000032C, 0X00000358, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000388,
0X000003A0, 0000000000, 0000000000, 0000000000, 0X00000006, 0000000000, 0000000000, 0000000000,
0000000000, 0X0000016C, 0X00000012, 0X6B457665, 0X6E74436C, 0X61737354, 0X6F6F6C62, 0X61720000,
0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000019C, 0X00000010, 0X2F434520,
0X48616E64, 0X6C652045, 0X76656E74, 0000000000, 0X00000007, 0000000000, 0000000000, 0000000000,
0000000000, 0X000001CC, 0X00000002, 0X000001D4, 0X00000238, 0X00150008, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000210, 0X00000001, 0X000001F4, 0X41747472, 0X69627574, 0X6520496E,
0X70757420, 0X53706563, 0X69666965, 0X72000000, 0X00000214, 0X00000006, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000230, 0X00000005, 0X4F776E65, 0X72000000, 0X00150008, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000274, 0X00000001, 0X00000258, 0X41747472, 0X69627574,
0X6520496E, 0X70757420, 0X53706563, 0X69666965, 0X72000000, 0X00000278, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000294, 0X00000009, 0X54686520, 0X4576656E, 0X74000000,
0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X000002BC, 0X00000001, 0X000002C0,
0X00160008, 0000000000, 0000000000, 0000000000, 0000000000, 0X000002FC, 0X00000001, 0X000002E0,
0X41747472, 0X69627574, 0X65204F75, 0X74707574, 0X20537065, 0X63696669, 0X65720000, 0X00000300,
0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000031C, 0X0000000F, 0X43616C6C,
0X6261636B, 0X20526573, 0X756C7400, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000348, 0X0000000F, 0X2F446F20, 0X43452043, 0X616C6C62, 0X61636B00, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000374, 0X00000013, 0X4576656E, 0X7448616E, 0X646C6572,
0X50726F63, 0X50747200, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X000003BC, 0X00000004, 0X000003CC,
0X00000420, 0X00000474, 0X000004C8, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000,
0X000003E8, 0X00000002, 0X000003F0, 0X00000408, 0X00000004, 0000000000, 0000000000, 0000000000,
0000000000, 0X74626172, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000001,
0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000043C, 0X00000002, 0X00000444,
0X0000045C, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X74626172, 0X00000004,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000002, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000490, 0X00000002, 0X00000498, 0X000004B0, 0X00000004, 0000000000,
0000000000, 0000000000, 0000000000, 0X74626172, 0X00000004, 0000000000, 0000000000, 0000000000,
0000000000, 0X00000003, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X000004E4,
0X00000002, 0X000004EC, 0X00000504, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000,
0X74626172, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000004
	};
	Nat4 tempAttribute_Project_20_Databrowser_20_Control_2F_Name[] = {
0000000000, 0X0000003C, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X0000001C, 0X556E7469, 0X746C6564, 0X20446174,
0X6142726F, 0X77736572, 0X20436F6E, 0X74726F6C, 0000000000
	};
	Nat4 tempAttribute_Project_20_Databrowser_20_Control_2F_Control_20_Event_20_Handler[] = {
0000000000, 0X000003F4, 0X000000C4, 0X0000002C, 0X00000014, 0X00000484, 0X00000480, 0X00000478,
0X000003B8, 0X00000430, 0X0000042C, 0X00000424, 0X000003B4, 0X000003DC, 0X000003D8, 0X000003D0,
0X000003B0, 0X000003A8, 0X00000130, 0X0000012C, 0X00000360, 0X00000118, 0X00000334, 0X00000114,
0X00000308, 0X000002F0, 0X000002C8, 0X000002D0, 0X000002B0, 0X000002A8, 0X0000010C, 0X00000280,
0X00000268, 0X00000240, 0X00000248, 0X000001C4, 0X0000021C, 0X00000204, 0X000001DC, 0X000001E4,
0X000001C0, 0X000001B8, 0X00000108, 0X00000188, 0X00000104, 0X00000154, 0X000000FC, 0X000000D8,
0X000000E0, 0X00270008, 0000000000, 0000000000, 0000000000, 0000000000, 0X000000FC, 0X00000011,
0X000000E4, 0X43617262, 0X6F6E2045, 0X76656E74, 0X2043616C, 0X6C626163, 0X6B000000, 0X00000140,
0000000000, 0X00000174, 0X000001A4, 0X00000294, 0000000000, 0X00000320, 0X0000034C, 0000000000,
0000000000, 0000000000, 0000000000, 0X0000037C, 0X00000394, 0000000000, 0000000000, 0000000000,
0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000015C, 0X00000016, 0X436F6E74,
0X726F6C20, 0X4576656E, 0X74204361, 0X6C6C6261, 0X636B0000, 0X00000006, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000190, 0X00000010, 0X2F434520, 0X48616E64, 0X6C652045, 0X76656E74,
0000000000, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X000001C0, 0X00000002,
0X000001C8, 0X0000022C, 0X00150008, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000204,
0X00000001, 0X000001E8, 0X41747472, 0X69627574, 0X6520496E, 0X70757420, 0X53706563, 0X69666965,
0X72000000, 0X00000208, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000224,
0X00000005, 0X4F776E65, 0X72000000, 0X00150008, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000268, 0X00000001, 0X0000024C, 0X41747472, 0X69627574, 0X6520496E, 0X70757420, 0X53706563,
0X69666965, 0X72000000, 0X0000026C, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000288, 0X00000009, 0X54686520, 0X4576656E, 0X74000000, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0X000002B0, 0X00000001, 0X000002B4, 0X00160008, 0000000000, 0000000000,
0000000000, 0000000000, 0X000002F0, 0X00000001, 0X000002D4, 0X41747472, 0X69627574, 0X65204F75,
0X74707574, 0X20537065, 0X63696669, 0X65720000, 0X000002F4, 0X00000006, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000310, 0X0000000F, 0X43616C6C, 0X6261636B, 0X20526573, 0X756C7400,
0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000033C, 0X0000000F, 0X2F446F20,
0X43452043, 0X616C6C62, 0X61636B00, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000368, 0X00000013, 0X4576656E, 0X7448616E, 0X646C6572, 0X50726F63, 0X50747200, 0X00000004,
0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0X000003B0, 0X00000003, 0X000003BC, 0X00000410, 0X00000464, 0X00000007,
0000000000, 0000000000, 0000000000, 0000000000, 0X000003D8, 0X00000002, 0X000003E0, 0X000003F8,
0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X636E746C, 0X00000004, 0000000000,
0000000000, 0000000000, 0000000000, 0X000003E9, 0X00000007, 0000000000, 0000000000, 0000000000,
0000000000, 0X0000042C, 0X00000002, 0X00000434, 0X0000044C, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0X636D6473, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000001, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000480, 0X00000002,
0X00000488, 0X000004A0, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X636D6473,
0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000002
	};
	Nat4 tempAttribute_Project_20_Databrowser_20_Control_2F_Item_20_Callbacks[] = {
0000000000, 0X00000F6C, 0X00000230, 0X00000087, 0X00000014, 0X00000FD8, 0X00000FD4, 0X00001134,
0X00000FC8, 0X000010F0, 0X00000FC4, 0X000010AC, 0X00000FC0, 0X0000107C, 0X00000FBC, 0X00000FB4,
0X00000FB0, 0X00001024, 0X00000FAC, 0X00000FF0, 0X00000FA4, 0X00000F7C, 0X00000F84, 0X00000290,
0X00000DB0, 0X00000DAC, 0X00000F04, 0X00000DA0, 0X00000EC4, 0X00000D9C, 0X00000E84, 0X00000D98,
0X00000E54, 0X00000D94, 0X00000D8C, 0X00000D88, 0X00000DFC, 0X00000D84, 0X00000DC8, 0X00000D7C,
0X00000D54, 0X00000D5C, 0X0000028C, 0X00000B94, 0X00000B90, 0X00000CE0, 0X00000B84, 0X00000CA4,
0X00000B80, 0X00000C68, 0X00000B7C, 0X00000C38, 0X00000B78, 0X00000B70, 0X00000B6C, 0X00000BE0,
0X00000B68, 0X00000BAC, 0X00000B60, 0X00000B38, 0X00000B40, 0X00000288, 0X00000980, 0X0000097C,
0X00000AC8, 0X00000970, 0X00000A90, 0X0000096C, 0X00000A54, 0X00000968, 0X00000A24, 0X00000964,
0X0000095C, 0X00000958, 0X000009CC, 0X00000954, 0X00000998, 0X0000094C, 0X00000924, 0X0000092C,
0X00000284, 0X00000764, 0X00000760, 0X000008B0, 0X00000754, 0X00000874, 0X00000750, 0X00000838,
0X0000074C, 0X00000808, 0X00000748, 0X00000740, 0X0000073C, 0X000007B0, 0X00000738, 0X0000077C,
0X00000730, 0X00000708, 0X00000710, 0X00000280, 0X00000514, 0X00000510, 0X00000688, 0X00000504,
0X00000640, 0X00000500, 0X000005F8, 0X000004FC, 0X000005B8, 0X000004F8, 0X000004F0, 0X000004EC,
0X00000560, 0X000004E8, 0X0000052C, 0X000004E0, 0X000004B8, 0X000004C0, 0X0000027C, 0X00000308,
0X00000304, 0X00000448, 0X000002F8, 0X00000410, 0X000002F4, 0X000003D8, 0X000002F0, 0X000003AC,
0X000002EC, 0X000002E4, 0X000002E0, 0X00000354, 0X000002DC, 0X00000320, 0X000002D4, 0X000002AC,
0X000002B4, 0X00000274, 0X00000244, 0X0000024C, 0X00990008, 0000000000, 0000000000, 0000000000,
0000000000, 0X0000026C, 0X0000000B, 0X00000250, 0X44617461, 0X62726F77, 0X73657220, 0X4974656D,
0X2043616C, 0X6C626163, 0X6B730000, 0000000000, 0000000000, 0X00000298, 0000000000, 0X000004A4,
0X000006F4, 0X00000910, 0X00000B24, 0X00000D40, 0X00000F68, 0000000000, 0X009A0008, 0000000000,
0000000000, 0000000000, 0000000000, 0X000002D4, 0X0000000E, 0X000002B8, 0X44617461, 0X62726F77,
0X73657220, 0X4974656D, 0X2043616C, 0X6C626163, 0X6B000000, 0X0000030C, 0000000000, 0X00000340,
0X00000360, 0X0000037C, 0000000000, 0X00000398, 0X000003C4, 0X000003FC, 0X00000434, 0000000000,
0000000000, 0X00000470, 0X00000488, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000328, 0X00000014, 0X44617461, 0X62726F77, 0X73657220, 0X43616C6C, 0X6261636B, 0000000000,
0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000035C, 0000000000, 0000000000,
0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000007,
0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X000003B4, 0X0000000E, 0X2F446F20, 0X44424974, 0X656D4461,
0X74610000, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X000003E0, 0X0000001A,
0X44617461, 0X42726F77, 0X73657249, 0X74656D44, 0X61746150, 0X726F6350, 0X74720000, 0X00000006,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000418, 0X00000019, 0X4E657744, 0X61746142,
0X726F7773, 0X65724974, 0X656D4461, 0X74615550, 0X50000000, 0X00000006, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000450, 0X0000001D, 0X44697370, 0X6F736544, 0X61746142, 0X726F7773,
0X65724974, 0X656D4461, 0X74615550, 0X50000000, 0X00000004, 0000000000, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000,
0000000000, 0X009A0008, 0000000000, 0000000000, 0000000000, 0000000000, 0X000004E0, 0X0000000E,
0X000004C4, 0X44617461, 0X62726F77, 0X73657220, 0X4974656D, 0X2043616C, 0X6C626163, 0X6B000000,
0X00000518, 0000000000, 0X0000054C, 0X0000056C, 0X00000588, 0000000000, 0X000005A4, 0X000005E4,
0X0000062C, 0X00000674, 0000000000, 0000000000, 0X000006C0, 0X000006D8, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000534, 0X00000014, 0X44617461, 0X62726F77, 0X73657220,
0X43616C6C, 0X6261636B, 0000000000, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000568, 0000000000, 0000000000, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000,
0000000000, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X000005C0, 0X00000020,
0X2F446F20, 0X44424974, 0X656D4E6F, 0X74696669, 0X63617469, 0X6F6E2057, 0X69746820, 0X4974656D,
0000000000, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000600, 0X0000002A,
0X44617461, 0X42726F77, 0X73657249, 0X74656D4E, 0X6F746966, 0X69636174, 0X696F6E57, 0X69746849,
0X74656D50, 0X726F6350, 0X74720000, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000648, 0X00000029, 0X4E657744, 0X61746142, 0X726F7773, 0X65724974, 0X656D4E6F, 0X74696669,
0X63617469, 0X6F6E5769, 0X74684974, 0X656D5550, 0X50000000, 0X00000006, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000690, 0X0000002D, 0X44697370, 0X6F736544, 0X61746142, 0X726F7773,
0X65724974, 0X656D4E6F, 0X74696669, 0X63617469, 0X6F6E5769, 0X74684974, 0X656D5550, 0X50000000,
0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000007, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0X009A0008, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000730, 0X0000000E, 0X00000714, 0X44617461, 0X62726F77, 0X73657220,
0X4974656D, 0X2043616C, 0X6C626163, 0X6B000000, 0X00000768, 0000000000, 0X0000079C, 0X000007BC,
0X000007D8, 0000000000, 0X000007F4, 0X00000824, 0X00000860, 0X0000089C, 0000000000, 0000000000,
0X000008DC, 0X000008F4, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000784,
0X00000014, 0X44617461, 0X62726F77, 0X73657220, 0X43616C6C, 0X6261636B, 0000000000, 0X00000006,
0000000000, 0000000000, 0000000000, 0000000000, 0X000007B8, 0000000000, 0000000000, 0X00000007,
0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000007, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000006, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000810, 0X00000013, 0X2F446F20, 0X44424472, 0X61672041, 0X64642049,
0X74656D00, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000840, 0X0000001D,
0X44617461, 0X42726F77, 0X73657241, 0X64644472, 0X61674974, 0X656D5072, 0X6F635074, 0X72000000,
0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000087C, 0X0000001C, 0X4E657744,
0X61746142, 0X726F7773, 0X65724164, 0X64447261, 0X67497465, 0X6D555050, 0000000000, 0X00000006,
0000000000, 0000000000, 0000000000, 0000000000, 0X000008B8, 0X00000020, 0X44697370, 0X6F736544,
0X61746142, 0X726F7773, 0X65724164, 0X64447261, 0X67497465, 0X6D555050, 0000000000, 0X00000004,
0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000, 0X009A0008, 0000000000, 0000000000, 0000000000,
0000000000, 0X0000094C, 0X0000000E, 0X00000930, 0X44617461, 0X62726F77, 0X73657220, 0X4974656D,
0X2043616C, 0X6C626163, 0X6B000000, 0X00000984, 0000000000, 0X000009B8, 0X000009D8, 0X000009F4,
0000000000, 0X00000A10, 0X00000A40, 0X00000A7C, 0X00000AB4, 0000000000, 0000000000, 0X00000AF0,
0X00000B08, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X000009A0, 0X00000014,
0X44617461, 0X62726F77, 0X73657220, 0X43616C6C, 0X6261636B, 0000000000, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X000009D4, 0000000000, 0000000000, 0X00000007, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000006, 0000000000, 0000000000, 0000000000,
0000000000, 0X00000A2C, 0X00000012, 0X2F446F20, 0X44424472, 0X61672041, 0X63636570, 0X743F0000,
0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000A5C, 0X0000001C, 0X44617461,
0X42726F77, 0X73657241, 0X63636570, 0X74447261, 0X6750726F, 0X63507472, 0000000000, 0X00000006,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000A98, 0X0000001B, 0X4E657744, 0X61746142,
0X726F7773, 0X65724163, 0X63657074, 0X44726167, 0X55505000, 0X00000006, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000AD0, 0X0000001F, 0X44697370, 0X6F736544, 0X61746142, 0X726F7773,
0X65724163, 0X63657074, 0X44726167, 0X55505000, 0X00000004, 0000000000, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000,
0000000000, 0X009A0008, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000B60, 0X0000000E,
0X00000B44, 0X44617461, 0X62726F77, 0X73657220, 0X4974656D, 0X2043616C, 0X6C626163, 0X6B000000,
0X00000B98, 0000000000, 0X00000BCC, 0X00000BEC, 0X00000C08, 0000000000, 0X00000C24, 0X00000C54,
0X00000C90, 0X00000CCC, 0000000000, 0000000000, 0X00000D0C, 0X00000D24, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000BB4, 0X00000014, 0X44617461, 0X62726F77, 0X73657220,
0X43616C6C, 0X6261636B, 0000000000, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000BE8, 0000000000, 0000000000, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000,
0000000000, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000C40, 0X00000012,
0X2F446F20, 0X44424472, 0X61672052, 0X65636569, 0X76650000, 0X00000006, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000C70, 0X0000001D, 0X44617461, 0X42726F77, 0X73657252, 0X65636569,
0X76654472, 0X61675072, 0X6F635074, 0X72000000, 0X00000006, 0000000000, 0000000000, 0000000000,
0000000000, 0X00000CAC, 0X0000001C, 0X4E657744, 0X61746142, 0X726F7773, 0X65725265, 0X63656976,
0X65447261, 0X67555050, 0000000000, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000CE8, 0X00000020, 0X44697370, 0X6F736544, 0X61746142, 0X726F7773, 0X65725265, 0X63656976,
0X65447261, 0X67555050, 0000000000, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000,
0000000000, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000,
0X009A0008, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000D7C, 0X0000000E, 0X00000D60,
0X44617461, 0X62726F77, 0X73657220, 0X4974656D, 0X2043616C, 0X6C626163, 0X6B000000, 0X00000DB4,
0000000000, 0X00000DE8, 0X00000E08, 0X00000E24, 0000000000, 0X00000E40, 0X00000E70, 0X00000EB0,
0X00000EF0, 0000000000, 0000000000, 0X00000F34, 0X00000F4C, 0X00000006, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000DD0, 0X00000014, 0X44617461, 0X62726F77, 0X73657220, 0X43616C6C,
0X6261636B, 0000000000, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000E04,
0000000000, 0000000000, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000,
0000000000, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000E5C, 0X00000010, 0X2F446F20,
0X44424354, 0X4D204372, 0X65617465, 0000000000, 0X00000006, 0000000000, 0000000000, 0000000000,
0000000000, 0X00000E8C, 0X00000023, 0X44617461, 0X42726F77, 0X73657247, 0X6574436F, 0X6E746578,
0X7475616C, 0X4D656E75, 0X50726F63, 0X50747200, 0X00000006, 0000000000, 0000000000, 0000000000,
0000000000, 0X00000ECC, 0X00000022, 0X4E657744, 0X61746142, 0X726F7773, 0X65724765, 0X74436F6E,
0X74657874, 0X75616C4D, 0X656E7555, 0X50500000, 0X00000006, 0000000000, 0000000000, 0000000000,
0000000000, 0X00000F0C, 0X00000026, 0X44697370, 0X6F736544, 0X61746142, 0X726F7773, 0X65724765,
0X74436F6E, 0X74657874, 0X75616C4D, 0X656E7555, 0X50500000, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000,
0000000000, 0000000000, 0X009A0008, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000FA4,
0X0000000E, 0X00000F88, 0X44617461, 0X62726F77, 0X73657220, 0X4974656D, 0X2043616C, 0X6C626163,
0X6B000000, 0X00000FDC, 0000000000, 0X00001010, 0X00001030, 0X0000104C, 0000000000, 0X00001068,
0X00001098, 0X000010DC, 0X00001120, 0000000000, 0000000000, 0X00001168, 0X00001180, 0X00000006,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000FF8, 0X00000014, 0X44617461, 0X62726F77,
0X73657220, 0X43616C6C, 0X6261636B, 0000000000, 0X00000006, 0000000000, 0000000000, 0000000000,
0000000000, 0X0000102C, 0000000000, 0000000000, 0X00000007, 0000000000, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X00001084,
0X00000010, 0X2F446F20, 0X44424354, 0X4D205365, 0X6C656374, 0000000000, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X000010B4, 0X00000026, 0X44617461, 0X42726F77, 0X73657253,
0X656C6563, 0X74436F6E, 0X74657874, 0X75616C4D, 0X656E7550, 0X726F6350, 0X74720000, 0X00000006,
0000000000, 0000000000, 0000000000, 0000000000, 0X000010F8, 0X00000025, 0X4E657744, 0X61746142,
0X726F7773, 0X65725365, 0X6C656374, 0X436F6E74, 0X65787475, 0X616C4D65, 0X6E755550, 0X50000000,
0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000113C, 0X00000029, 0X44697370,
0X6F736544, 0X61746142, 0X726F7773, 0X65725365, 0X6C656374, 0X436F6E74, 0X65787475, 0X616C4D65,
0X6E755550, 0X50000000, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Project_20_Databrowser_20_Control_2F_Root_20_Data_20_Item[] = {
0000000000, 0X000000E4, 0X00000034, 0X00000008, 0X00000014, 0X00000084, 0X00000080, 0X0000007C,
0X00000078, 0X0000009C, 0X0000006C, 0X00000048, 0X00000050, 0X00D80008, 0000000000, 0000000000,
0000000000, 0000000000, 0X0000006C, 0X00000007, 0X00000054, 0X50726F6A, 0X65637420, 0X44422049,
0X74656D20, 0X526F6F74, 0000000000, 0X00000088, 0000000000, 0000000000, 0X000000B4, 0X000000CC,
0X000000E4, 0X000000FC, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X000000A4,
0X0000000E, 0X526F6F74, 0X20497465, 0X6D204461, 0X74610000, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0X00010000, 0X00000003, 0000000000, 0000000000, 0000000000, 0000000000,
0X00010000, 0X00000003, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000007,
0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Project_20_Databrowser_20_Control_2F_Viewer[] = {
0000000000, 0X00000590, 0X000000FC, 0X0000003A, 0X00000014, 0X00000138, 0X00000658, 0X00000634,
0X0000063C, 0X00000134, 0X00000178, 0X000004F0, 0X000004EC, 0X000004E8, 0X000004E4, 0X000004E0,
0X000004DC, 0X000004D8, 0X00000550, 0X000004D4, 0X000004D0, 0X000004CC, 0X000004C8, 0X000004A4,
0X000004AC, 0X000001A0, 0X00000378, 0X00000374, 0X00000370, 0X0000036C, 0X00000368, 0X00000364,
0X00000360, 0X000003D8, 0X0000035C, 0X00000358, 0X00000354, 0X00000350, 0X0000032C, 0X00000334,
0X0000019C, 0X00000204, 0X00000200, 0X000001FC, 0X000001F8, 0X000001F4, 0X000001F0, 0X000001EC,
0X00000264, 0X000001E8, 0X000001E4, 0X000001E0, 0X000001DC, 0X000001B8, 0X000001C0, 0X00000198,
0X00000190, 0X00000174, 0X00000150, 0X00000158, 0X00000130, 0X00000110, 0X00000118, 0X009D0008,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000130, 0X00000003, 0X0000011C, 0X44617461,
0X62726F77, 0X73657220, 0X56696577, 0X65720000, 0X0000013C, 0X00000620, 0X00000674, 0X009E0008,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000174, 0X00000002, 0X0000015C, 0X44617461,
0X62726F77, 0X73657220, 0X4C697374, 0X20566965, 0X77000000, 0X0000017C, 0X00000608, 0X02390007,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000198, 0X00000003, 0X000001A4, 0X00000318,
0X00000490, 0X009C0008, 0000000000, 0000000000, 0000000000, 0000000000, 0X000001DC, 0X0000000B,
0X000001C4, 0X44617461, 0X62726F77, 0X73657220, 0X4C697374, 0X20436F6C, 0X756D6E00, 0X00000208,
0X00000220, 0X00000238, 0X00000250, 0X00000270, 0X00000288, 0X000002A0, 0X000002B8, 0X000002D0,
0X000002E8, 0X00000300, 0X1F4F0004, 0000000000, 0000000000, 0000000000, 0000000000, 0X44727479,
0X1F6E0004, 0000000000, 0000000000, 0000000000, 0000000000, 0X63686278, 0X00000004, 0000000000,
0000000000, 0000000000, 0000000000, 0X00070001, 0X02390006, 0000000000, 0000000000, 0000000000,
0000000000, 0X0000026C, 0000000000, 0000000000, 0X00000003, 0000000000, 0000000000, 0000000000,
0000000000, 0X00010000, 0X00000003, 0000000000, 0000000000, 0000000000, 0000000000, 0X00010000,
0X00000003, 0000000000, 0000000000, 0000000000, 0000000000, 0X00010000, 0X00000004, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000001, 0X02330004, 0000000000, 0000000000, 0000000000,
0000000000, 0X00000018, 0X02350004, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000018,
0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0X009C0008, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000350, 0X0000000B, 0X00000338, 0X44617461, 0X62726F77,
0X73657220, 0X4C697374, 0X20436F6C, 0X756D6E00, 0X0000037C, 0X00000394, 0X000003AC, 0X000003C4,
0X000003E8, 0X00000400, 0X00000418, 0X00000430, 0X00000448, 0X00000460, 0X00000478, 0X00000004,
0000000000, 0000000000, 0000000000, 0000000000, 0X6E616D65, 0X023D0004, 0000000000, 0000000000,
0000000000, 0000000000, 0X74657874, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000,
0X00070001, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X000003E0, 0X00000004,
0X4E616D65, 0000000000, 0X00000003, 0000000000, 0000000000, 0000000000, 0000000000, 0X00010000,
0X00000003, 0000000000, 0000000000, 0000000000, 0000000000, 0X00010000, 0X00000003, 0000000000,
0000000000, 0000000000, 0000000000, 0X00010000, 0X00000004, 0000000000, 0000000000, 0000000000,
0000000000, 0X00000001, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X000000FA,
0X02350004, 0000000000, 0000000000, 0000000000, 0000000000, 0X000000FA, 0X00000004, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000, 0X009C0008, 0000000000, 0000000000, 0000000000,
0000000000, 0X000004C8, 0X0000000B, 0X000004B0, 0X44617461, 0X62726F77, 0X73657220, 0X4C697374,
0X20436F6C, 0X756D6E00, 0X000004F4, 0X0000050C, 0X00000524, 0X0000053C, 0X00000560, 0X00000578,
0X00000590, 0X000005A8, 0X000005C0, 0X000005D8, 0X000005F0, 0X15220004, 0000000000, 0000000000,
0000000000, 0000000000, 0X56616C75, 0X1F2E0004, 0000000000, 0000000000, 0000000000, 0000000000,
0X74657874, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X00070001, 0X1F4F0006,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000558, 0X00000005, 0X56616C75, 0X65000000,
0X00000003, 0000000000, 0000000000, 0000000000, 0000000000, 0X00010000, 0X00000003, 0000000000,
0000000000, 0000000000, 0000000000, 0X00010000, 0X00000003, 0000000000, 0000000000, 0000000000,
0000000000, 0X00010000, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000001,
0X02350004, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000032, 0X1F440004, 0000000000,
0000000000, 0000000000, 0000000000, 0X000000C8, 0X00000004, 0000000000, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X6E616D65,
0X009F0008, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000658, 0X00000001, 0X00000640,
0X44617461, 0X62726F77, 0X73657220, 0X436F6C75, 0X6D6E2056, 0X69657700, 0X0000065C, 0X00000004,
0000000000, 0000000000, 0000000000, 0000000000, 0X7469636E, 0X02330004, 0000000000, 0000000000,
0000000000, 0000000000, 0X6C737476
	};
	Nat4 tempAttribute_Project_20_DB_20_Item_20_Data_2F_Name[] = {
0000000000, 0X00000030, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X00000012, 0X556E7469, 0X746C6564, 0X20497465,
0X6D204461, 0X74610000
	};
	Nat4 tempAttribute_Project_20_DB_20_Item_20_Data_2F_Container_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Project_20_DB_20_Item_20_Data_2F_Open_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Project_20_DB_20_Item_20_Data_2F_Editable_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0X00010000
	};
	Nat4 tempAttribute_Project_20_DB_20_Item_20_Data_2F_Content[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Project_20_DB_20_Item_20_Root_2F_Name[] = {
0000000000, 0X0000002C, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X0000000E, 0X526F6F74, 0X20497465, 0X6D204461,
0X74610000
	};
	Nat4 tempAttribute_Project_20_DB_20_Item_20_Root_2F_Container_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0X00010000
	};
	Nat4 tempAttribute_Project_20_DB_20_Item_20_Root_2F_Open_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0X00010000
	};
	Nat4 tempAttribute_Project_20_DB_20_Item_20_Root_2F_Editable_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Project_20_DB_20_Item_20_Root_2F_Content[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Value_20_Clipboard_2F_Archive_20_Size[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X02F70004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Project_20_DB_20_Method_20_Data_2F_Name[] = {
0000000000, 0X00000030, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X00000012, 0X556E7469, 0X746C6564, 0X20497465,
0X6D204461, 0X74610000
	};
	Nat4 tempAttribute_Project_20_DB_20_Method_20_Data_2F_Container_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0X00010000
	};
	Nat4 tempAttribute_Project_20_DB_20_Method_20_Data_2F_Open_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Project_20_DB_20_Method_20_Data_2F_Editable_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0X00010000
	};
	Nat4 tempAttribute_Project_20_DB_20_Method_20_Data_2F_Content[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Project_20_DB_20_Case_20_Data_2F_Name[] = {
0000000000, 0X00000030, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X00000012, 0X556E7469, 0X746C6564, 0X20497465,
0X6D204461, 0X74610000
	};
	Nat4 tempAttribute_Project_20_DB_20_Case_20_Data_2F_Container_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Project_20_DB_20_Case_20_Data_2F_Open_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Project_20_DB_20_Case_20_Data_2F_Editable_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Project_20_DB_20_Case_20_Data_2F_Content[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};


Nat4 VPLC_Project_20_Viewer_20_Window_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Project_20_Viewer_20_Window_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 200 300 } */
	tempAttribute = attribute_add("Name",tempClass,tempAttribute_Project_20_Viewer_20_Window_2F_Name,environment);
	tempAttribute = attribute_add("WindowRef",tempClass,NULL,environment);
	tempAttribute = attribute_add("Window Event Handler",tempClass,tempAttribute_Project_20_Viewer_20_Window_2F_Window_20_Event_20_Handler,environment);
	tempAttribute = attribute_add("Drawers",tempClass,tempAttribute_Project_20_Viewer_20_Window_2F_Drawers,environment);
	tempAttribute = attribute_add("Data",tempClass,NULL,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"Document Window");
	return kNOERROR;
}

/* Start Universals: { 398 1269 }{ 726 326 } */
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"\'FLap\'",TERMINAL(0));
TERMINATEONSUCCESS

result = vpx_match(PARAMETERS,"\'WNin\'",TERMINAL(0));
TERMINATEONSUCCESS

result = kSuccess;
FAILONSUCCESS

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Project_20_Viewer_20_Window_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2_case_1_local_2(PARAMETERS,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Project_20_Data,1,1,TERMINAL(0),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
FAILONSUCCESS

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2_case_2_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2_case_2_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,kHICommandSaveAs,TERMINAL(0));
TERMINATEONSUCCESS

result = vpx_extmatch(PARAMETERS,kHICommandSave,TERMINAL(0));
TERMINATEONSUCCESS

result = vpx_match(PARAMETERS,"\'FLex\'",TERMINAL(0));
TERMINATEONSUCCESS

result = vpx_match(PARAMETERS,"\'FLua\'",TERMINAL(0));
TERMINATEONSUCCESS

result = kSuccess;
FAILONSUCCESS

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Project_20_Viewer_20_Window_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2_case_2_local_2(PARAMETERS,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Save_20_Data,1,1,TERMINAL(0),ROOT(2));

result = vpx_match(PARAMETERS,"(  )",TERMINAL(2));
FAILONSUCCESS

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2_case_3_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2_case_3_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

OUTPUT(0,NONE)
FOOTERWITHNONE(1)
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2_case_3_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2_case_3_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_File,1,1,TERMINAL(0),ROOT(1));
NEXTCASEONFAILURE

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
NEXTCASEONSUCCESS

result = vpx_get(PARAMETERS,kVPXValue_Dirty,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_match(PARAMETERS,"FALSE",TERMINAL(3));
NEXTCASEONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(4)
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2_case_3_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2_case_3_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Viewer_20_Window_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2_case_3_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Project_20_Viewer_20_Window_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2_case_3_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,kHICommandRevert,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Save_20_Data,1,1,TERMINAL(0),ROOT(2));

result = vpx_match(PARAMETERS,"(  )",TERMINAL(2));
FAILONSUCCESS

if( (repeatLimit = vpx_multiplex(1,TERMINAL(2))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Project_20_Viewer_20_Window_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2_case_3_local_5(PARAMETERS,LIST(2),ROOT(3));
LISTROOT(3,0)
REPEATFINISH
LISTROOTFINISH(3,0)
LISTROOTEND
} else {
ROOTEMPTY(3)
}

result = vpx_match(PARAMETERS,"(  )",TERMINAL(3));
FAILONSUCCESS

result = kSuccess;

FOOTER(4)
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2_case_4_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2_case_4_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"\'WNsc\'",TERMINAL(0));
TERMINATEONSUCCESS

result = vpx_match(PARAMETERS,"\'WNun\'",TERMINAL(0));
TERMINATEONSUCCESS

result = vpx_match(PARAMETERS,"\'WNcl\'",TERMINAL(0));
TERMINATEONSUCCESS

result = vpx_match(PARAMETERS,"\'WNpr\'",TERMINAL(0));
TERMINATEONSUCCESS

result = vpx_match(PARAMETERS,"\'WNmt\'",TERMINAL(0));
TERMINATEONSUCCESS

result = vpx_match(PARAMETERS,"\'WNat\'",TERMINAL(0));
TERMINATEONSUCCESS

result = vpx_match(PARAMETERS,"\'WNer\'",TERMINAL(0));
TERMINATEONSUCCESS

result = vpx_match(PARAMETERS,"\'WNca\'",TERMINAL(0));
TERMINATEONSUCCESS

result = kSuccess;
FAILONSUCCESS

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Project_20_Viewer_20_Window_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2_case_4_local_2(PARAMETERS,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Project_20_Data,1,1,TERMINAL(0),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
FAILONSUCCESS

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2_case_5(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2_case_5(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"\'EXra\'",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Project_20_Data,1,1,TERMINAL(0),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
FAILONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Find_20_MAIN,1,1,TERMINAL(2),ROOT(3));
FAILONFAILURE

result = kSuccess;

FOOTER(4)
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2_case_6_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2_case_6_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"\'EXrm\'",TERMINAL(0));
TERMINATEONSUCCESS

result = vpx_match(PARAMETERS,"\'EXdm\'",TERMINAL(0));
TERMINATEONSUCCESS

result = kSuccess;
FAILONSUCCESS

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2_case_6(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2_case_6(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Project_20_Viewer_20_Window_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2_case_6_local_2(PARAMETERS,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Method_20_Data,1,1,TERMINAL(0),ROOT(2));
FAILONFAILURE

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
FAILONSUCCESS

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2_case_7_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2_case_7_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"\'EXcd\'",TERMINAL(0));
TERMINATEONSUCCESS

result = vpx_match(PARAMETERS,"\'EXsd\'",TERMINAL(0));
TERMINATEONSUCCESS

result = kSuccess;
FAILONSUCCESS

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2_case_7_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2_case_7_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"Item Data",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_All_20_Breakpoints,1,1,TERMINAL(3),ROOT(4));

result = vpx_match(PARAMETERS,"( )",TERMINAL(4));
FAILONFAILURE

result = kSuccess;

FOOTER(5)
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2_case_7_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2_case_7_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2_case_7_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2_case_7_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Viewer_20_Window_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2_case_7_local_6_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Project_20_Viewer_20_Window_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2_case_7_local_6_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2_case_7(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2_case_7(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Project_20_Viewer_20_Window_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2_case_7_local_2(PARAMETERS,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Find_20_List_20_View,1,1,TERMINAL(0),ROOT(2));
FAILONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Select_20_Values,1,1,TERMINAL(2),ROOT(3));

result = vpx_match(PARAMETERS,"(  )",TERMINAL(3));
FAILONSUCCESS

if( (repeatLimit = vpx_multiplex(1,TERMINAL(3))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Project_20_Viewer_20_Window_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2_case_7_local_6(PARAMETERS,LIST(3));
TERMINATEONFAILURE
REPEATFINISH
} else {
}

result = kSuccess;
FAILONSUCCESS

FOOTER(4)
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2_case_8(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2_case_8(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;
FAILONSUCCESS

FOOTER(2)
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2_case_9_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2_case_9_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,kHICommandClear,TERMINAL(0));
TERMINATEONSUCCESS

result = kSuccess;
FAILONSUCCESS

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2_case_9_local_8_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2_case_9_local_8_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(0),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP__3D_,2,0,TERMINAL(3),TERMINAL(1));
FAILONFAILURE

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
NEXTCASEONSUCCESS

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(0),ROOT(4),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(5),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP__3D_,2,0,TERMINAL(6),TERMINAL(2));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTER(7)
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2_case_9_local_8_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2_case_9_local_8_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(4),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTER(6)
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2_case_9_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2_case_9_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Viewer_20_Window_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2_case_9_local_8_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
vpx_method_Project_20_Viewer_20_Window_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2_case_9_local_8_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2_case_9(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2_case_9(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Project_20_Viewer_20_Window_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2_case_9_local_2(PARAMETERS,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Find_20_List_20_View,1,1,TERMINAL(0),ROOT(2));
FAILONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Select_20_Values,1,1,TERMINAL(2),ROOT(3));

result = vpx_match(PARAMETERS,"(  )",TERMINAL(3));
FAILONSUCCESS

result = vpx_constant(PARAMETERS,"Item Data",ROOT(4));

result = vpx_constant(PARAMETERS,"NULL",ROOT(5));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(3))) ){
REPEATBEGINWITHCOUNTER
LOOPTERMINALBEGIN(1)
LOOPTERMINAL(0,5,6)
result = vpx_method_Project_20_Viewer_20_Window_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2_case_9_local_8(PARAMETERS,LIST(3),TERMINAL(4),LOOP(0),ROOT(6));
FAILONFAILURE
REPEATFINISH
} else {
ROOTNULL(6,TERMINAL(5))
}

result = kSuccess;

FOOTER(7)
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Viewer_20_Window_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
if(vpx_method_Project_20_Viewer_20_Window_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
if(vpx_method_Project_20_Viewer_20_Window_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
if(vpx_method_Project_20_Viewer_20_Window_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2_case_4(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
if(vpx_method_Project_20_Viewer_20_Window_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2_case_5(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
if(vpx_method_Project_20_Viewer_20_Window_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2_case_6(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
if(vpx_method_Project_20_Viewer_20_Window_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2_case_7(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
if(vpx_method_Project_20_Viewer_20_Window_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2_case_8(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Project_20_Viewer_20_Window_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2_case_9(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_CE_20_HICommand_20_Update_20_Status_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_CE_20_HICommand_20_Update_20_Status_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_method_Project_20_Viewer_20_Window_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2(PARAMETERS,TERMINAL(0),TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"NULL",ROOT(4));

EnableMenuCommand( GETPOINTER(0,OpaqueMenuRef,*,ROOT(5),TERMINAL(4)),GETINTEGER(TERMINAL(1)));
result = kSuccess;

result = vpx_extconstant(PARAMETERS,noErr,ROOT(6));

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTER(7)
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_CE_20_HICommand_20_Update_20_Status_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_CE_20_HICommand_20_Update_20_Status_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_call_context_super_method(PARAMETERS,kVPXMethod_CE_20_HICommand_20_Update_20_Status,4,1,TERMINAL(0),TERMINAL(1),TERMINAL(2),TERMINAL(3),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_CE_20_HICommand_20_Update_20_Status(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Viewer_20_Window_2F_CE_20_HICommand_20_Update_20_Status_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0))
vpx_method_Project_20_Viewer_20_Window_2F_CE_20_HICommand_20_Update_20_Status_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_CE_20_HICommand_20_Process_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_CE_20_HICommand_20_Process_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_match(PARAMETERS,"\'TdbV\'",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Toggle_20_DataBrowser,1,0,TERMINAL(0));

result = vpx_extconstant(PARAMETERS,noErr,ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_CE_20_HICommand_20_Process_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_CE_20_HICommand_20_Process_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_match(PARAMETERS,"\'tiSr\'",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_extconstant(PARAMETERS,noErr,ROOT(4));

result = vpx_method_TEST_20_CFURL_20_2(PARAMETERS);

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_CE_20_HICommand_20_Process_case_3_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_CE_20_HICommand_20_Process_case_3_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"\'TRsh\'",TERMINAL(0));
TERMINATEONSUCCESS

result = vpx_extmatch(PARAMETERS,kHICommandClear,TERMINAL(0));
TERMINATEONSUCCESS

result = kSuccess;
FAILONSUCCESS

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_CE_20_HICommand_20_Process_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_CE_20_HICommand_20_Process_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_method_Project_20_Viewer_20_Window_2F_CE_20_HICommand_20_Process_case_3_local_2(PARAMETERS,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_HIC_20_Edit_20_Clear,1,0,TERMINAL(0));

result = vpx_extconstant(PARAMETERS,noErr,ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_CE_20_HICommand_20_Process_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_CE_20_HICommand_20_Process_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_match(PARAMETERS,"\'FLap\'",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_extconstant(PARAMETERS,noErr,ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_HIC_20_File_20_Add_20_To_20_Project,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_CE_20_HICommand_20_Process_case_5(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_CE_20_HICommand_20_Process_case_5(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_match(PARAMETERS,"\'FLex\'",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_extconstant(PARAMETERS,noErr,ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_HIC_20_File_20_Export,1,0,TERMINAL(0));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_CE_20_HICommand_20_Process_case_6(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_CE_20_HICommand_20_Process_case_6(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,noErr,ROOT(4));

result = vpx_extmatch(PARAMETERS,kHICommandSave,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_HIC_20_File_20_Save,1,0,TERMINAL(0));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_CE_20_HICommand_20_Process_case_7(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_CE_20_HICommand_20_Process_case_7(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,noErr,ROOT(4));

result = vpx_extmatch(PARAMETERS,kHICommandSaveAs,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_HIC_20_File_20_Save_20_As,1,0,TERMINAL(0));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_CE_20_HICommand_20_Process_case_8(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_CE_20_HICommand_20_Process_case_8(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,noErr,ROOT(4));

result = vpx_extmatch(PARAMETERS,kHICommandRevert,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_HIC_20_File_20_Revert,1,0,TERMINAL(0));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_CE_20_HICommand_20_Process_case_9(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_CE_20_HICommand_20_Process_case_9(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_match(PARAMETERS,"\'WNer\'",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_extconstant(PARAMETERS,noErr,ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_HIC_20_Info_20_Last_20_Error,1,0,TERMINAL(0));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_CE_20_HICommand_20_Process_case_10(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_CE_20_HICommand_20_Process_case_10(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_match(PARAMETERS,"\'EXcp\'",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_extconstant(PARAMETERS,noErr,ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_HIC_20_Info_20_Check_20_Program,1,0,TERMINAL(0));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_CE_20_HICommand_20_Process_case_11(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_CE_20_HICommand_20_Process_case_11(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_match(PARAMETERS,"\'EXrm\'",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_extconstant(PARAMETERS,noErr,ROOT(4));

result = vpx_constant(PARAMETERS,"FALSE",ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_HIC_20_Exec_20_Execute_20_Method,2,0,TERMINAL(0),TERMINAL(5));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(6)
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_CE_20_HICommand_20_Process_case_12(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_CE_20_HICommand_20_Process_case_12(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_match(PARAMETERS,"\'EXdm\'",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_extconstant(PARAMETERS,noErr,ROOT(4));

result = vpx_constant(PARAMETERS,"TRUE",ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_HIC_20_Exec_20_Execute_20_Method,2,0,TERMINAL(0),TERMINAL(5));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(6)
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_CE_20_HICommand_20_Process_case_13(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_CE_20_HICommand_20_Process_case_13(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_match(PARAMETERS,"\'EXra\'",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_extconstant(PARAMETERS,noErr,ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_HIC_20_Exec_20_Run_20_Application,1,0,TERMINAL(0));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_CE_20_HICommand_20_Process_case_14_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_CE_20_HICommand_20_Process_case_14_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"\'WNsc\'",TERMINAL(0));
TERMINATEONSUCCESS

result = vpx_match(PARAMETERS,"\'WNun\'",TERMINAL(0));
TERMINATEONSUCCESS

result = vpx_match(PARAMETERS,"\'WNcl\'",TERMINAL(0));
TERMINATEONSUCCESS

result = vpx_match(PARAMETERS,"\'WNpr\'",TERMINAL(0));
TERMINATEONSUCCESS

result = vpx_match(PARAMETERS,"\'WNmt\'",TERMINAL(0));
TERMINATEONSUCCESS

result = vpx_match(PARAMETERS,"\'WNat\'",TERMINAL(0));
TERMINATEONSUCCESS

result = vpx_match(PARAMETERS,"\'WNca\'",TERMINAL(0));
TERMINATEONSUCCESS

result = kSuccess;
FAILONSUCCESS

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_CE_20_HICommand_20_Process_case_14(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_CE_20_HICommand_20_Process_case_14(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_method_Project_20_Viewer_20_Window_2F_CE_20_HICommand_20_Process_case_14_local_2(PARAMETERS,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_HIC_20_Windows_20_Project,2,0,TERMINAL(0),TERMINAL(1));

result = vpx_extconstant(PARAMETERS,noErr,ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_CE_20_HICommand_20_Process_case_15(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_CE_20_HICommand_20_Process_case_15(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_match(PARAMETERS,"\'WNin\'",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_HIC_20_Window_20_Info,1,0,TERMINAL(0));

result = vpx_extconstant(PARAMETERS,noErr,ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_CE_20_HICommand_20_Process_case_16(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_CE_20_HICommand_20_Process_case_16(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_match(PARAMETERS,"\'EXcd\'",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_HIC_20_Clear_20_Breakpoints,1,0,TERMINAL(0));

result = vpx_extconstant(PARAMETERS,noErr,ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_CE_20_HICommand_20_Process_case_17(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_CE_20_HICommand_20_Process_case_17(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_match(PARAMETERS,"\'EXsd\'",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_HIC_20_Show_20_Breakpoints,1,0,TERMINAL(0));

result = vpx_extconstant(PARAMETERS,noErr,ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_CE_20_HICommand_20_Process_case_18_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_CE_20_HICommand_20_Process_case_18_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
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

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_CE_20_HICommand_20_Process_case_18(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_CE_20_HICommand_20_Process_case_18(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Return_20_Event_20_Not_20_Handled,1,1,TERMINAL(3),ROOT(4));

result = vpx_method_Project_20_Viewer_20_Window_2F_CE_20_HICommand_20_Process_case_18_local_3(PARAMETERS,TERMINAL(0),TERMINAL(1));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_CE_20_HICommand_20_Process(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Viewer_20_Window_2F_CE_20_HICommand_20_Process_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0))
if(vpx_method_Project_20_Viewer_20_Window_2F_CE_20_HICommand_20_Process_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0))
if(vpx_method_Project_20_Viewer_20_Window_2F_CE_20_HICommand_20_Process_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0))
if(vpx_method_Project_20_Viewer_20_Window_2F_CE_20_HICommand_20_Process_case_4(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0))
if(vpx_method_Project_20_Viewer_20_Window_2F_CE_20_HICommand_20_Process_case_5(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0))
if(vpx_method_Project_20_Viewer_20_Window_2F_CE_20_HICommand_20_Process_case_6(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0))
if(vpx_method_Project_20_Viewer_20_Window_2F_CE_20_HICommand_20_Process_case_7(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0))
if(vpx_method_Project_20_Viewer_20_Window_2F_CE_20_HICommand_20_Process_case_8(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0))
if(vpx_method_Project_20_Viewer_20_Window_2F_CE_20_HICommand_20_Process_case_9(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0))
if(vpx_method_Project_20_Viewer_20_Window_2F_CE_20_HICommand_20_Process_case_10(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0))
if(vpx_method_Project_20_Viewer_20_Window_2F_CE_20_HICommand_20_Process_case_11(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0))
if(vpx_method_Project_20_Viewer_20_Window_2F_CE_20_HICommand_20_Process_case_12(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0))
if(vpx_method_Project_20_Viewer_20_Window_2F_CE_20_HICommand_20_Process_case_13(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0))
if(vpx_method_Project_20_Viewer_20_Window_2F_CE_20_HICommand_20_Process_case_14(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0))
if(vpx_method_Project_20_Viewer_20_Window_2F_CE_20_HICommand_20_Process_case_15(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0))
if(vpx_method_Project_20_Viewer_20_Window_2F_CE_20_HICommand_20_Process_case_16(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0))
if(vpx_method_Project_20_Viewer_20_Window_2F_CE_20_HICommand_20_Process_case_17(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0))
vpx_method_Project_20_Viewer_20_Window_2F_CE_20_HICommand_20_Process_case_18(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_CE_20_Window_20_Bounds_20_Changed_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_CE_20_Window_20_Bounds_20_Changed_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Update_20_Data,1,0,TERMINAL(0));

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_CE_20_Window_20_Bounds_20_Changed_case_2_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_CE_20_Window_20_Bounds_20_Changed_case_2_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
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

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_CE_20_Window_20_Bounds_20_Changed_case_2_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_CE_20_Window_20_Bounds_20_Changed_case_2_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
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

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_CE_20_Window_20_Bounds_20_Changed_case_2_local_5_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_CE_20_Window_20_Bounds_20_Changed_case_2_local_5_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;
FAILONSUCCESS

FOOTER(2)
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_CE_20_Window_20_Bounds_20_Changed_case_2_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_CE_20_Window_20_Bounds_20_Changed_case_2_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Viewer_20_Window_2F_CE_20_Window_20_Bounds_20_Changed_case_2_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
if(vpx_method_Project_20_Viewer_20_Window_2F_CE_20_Window_20_Bounds_20_Changed_case_2_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Project_20_Viewer_20_Window_2F_CE_20_Window_20_Bounds_20_Changed_case_2_local_5_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_CE_20_Window_20_Bounds_20_Changed_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_CE_20_Window_20_Bounds_20_Changed_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,kEventParamAttributes,ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_EP_20_UInt32,2,2,TERMINAL(1),TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(3));
NEXTCASEONFAILURE

result = vpx_method_Project_20_Viewer_20_Window_2F_CE_20_Window_20_Bounds_20_Changed_case_2_local_5(PARAMETERS,TERMINAL(0),TERMINAL(4));
NEXTCASEONFAILURE

result = kSuccess;

FOOTER(5)
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_CE_20_Window_20_Bounds_20_Changed_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_CE_20_Window_20_Bounds_20_Changed_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;
FAILONSUCCESS

FOOTER(2)
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_CE_20_Window_20_Bounds_20_Changed(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Viewer_20_Window_2F_CE_20_Window_20_Bounds_20_Changed_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
if(vpx_method_Project_20_Viewer_20_Window_2F_CE_20_Window_20_Bounds_20_Changed_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Project_20_Viewer_20_Window_2F_CE_20_Window_20_Bounds_20_Changed_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_Open(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open_20_Record,1,0,TERMINAL(0));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Show,1,0,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_Close_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_Close_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Data,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(2));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Remove_20_View,2,0,TERMINAL(2),TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_Close(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Data,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Extract_20_Data,2,0,TERMINAL(1),TERMINAL(2));

result = vpx_method_Project_20_Viewer_20_Window_2F_Close_case_1_local_4(PARAMETERS,TERMINAL(0));

result = vpx_call_context_super_method(PARAMETERS,kVPXMethod_Close,1,0,TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_Toggle_20_DataBrowser(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Find_20_List_20_View,1,1,TERMINAL(0),ROOT(1));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Toggle_20_View,1,0,TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_Set_20_Busy_3F_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Default_20_FALSE(PARAMETERS,TERMINAL(1),ROOT(2));

result = vpx_constant(PARAMETERS,"( \'Wait\' 1 )",ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Find_20_Control,2,1,TERMINAL(0),TERMINAL(3),ROOT(4));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Visible_3F_,2,0,TERMINAL(4),TERMINAL(2));

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_Set_20_Prompt(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( \'Text\' 1 )",ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Find_20_Control,2,1,TERMINAL(0),TERMINAL(2),ROOT(3));
TERMINATEONFAILURE

result = vpx_constant(PARAMETERS,"\"\"",ROOT(4));

result = vpx_method_Replace_20_NULL(PARAMETERS,TERMINAL(1),TERMINAL(4),ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Text,2,0,TERMINAL(3),TERMINAL(5));

result = kSuccess;

FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_xFile_20_New_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_xFile_20_New_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Get_20_VPL_20_Data(PARAMETERS,ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open_20_With_20_Data,2,0,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_xFile_20_New_case_2_local_3_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_xFile_20_New_case_2_local_3_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0)
{
HEADER(3)
result = kSuccess;

result = vpx_method_Get_20_Application(PARAMETERS,ROOT(0));

result = vpx_get(PARAMETERS,kVPXValue_VPL_20_Data,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_xFile_20_New_case_2_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_xFile_20_New_case_2_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Project_20_Viewer_20_Window_2F_xFile_20_New_case_2_local_3_case_1_local_2(PARAMETERS,ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Install_20_Data,2,0,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_xFile_20_New_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_xFile_20_New_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open_20_Record,1,0,TERMINAL(0));

result = vpx_method_Project_20_Viewer_20_Window_2F_xFile_20_New_case_2_local_3(PARAMETERS,TERMINAL(0));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Show,1,0,TERMINAL(0));

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_xFile_20_New(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Viewer_20_Window_2F_xFile_20_New_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Project_20_Viewer_20_Window_2F_xFile_20_New_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_xFile_20_New_20_Project_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_xFile_20_New_20_Project_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Get_20_VPL_20_Data(PARAMETERS,ROOT(1));

result = vpx_set(PARAMETERS,kVPXValue_Data,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_xFile_20_New_20_Project(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open_20_Record,1,0,TERMINAL(0));

result = vpx_method_Project_20_Viewer_20_Window_2F_xFile_20_New_20_Project_case_1_local_3(PARAMETERS,TERMINAL(0));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_New_20_Element,1,0,TERMINAL(0));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Show,1,0,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_Extract_20_Data_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_Extract_20_Data_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADERWITHNONE(5)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Window_20_Bounds,2,1,TERMINAL(0),NONE,ROOT(1));

result = vpx_get(PARAMETERS,kVPXValue_Data,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_set(PARAMETERS,kVPXValue_Frame,TERMINAL(3),TERMINAL(1),ROOT(4));

result = kSuccess;

FOOTERSINGLECASEWITHNONE(5)
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_Extract_20_Data_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_Extract_20_Data_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_Extract_20_Data(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Project_20_Viewer_20_Window_2F_Extract_20_Data_case_1_local_2(PARAMETERS,TERMINAL(0));

result = vpx_method_Project_20_Viewer_20_Window_2F_Extract_20_Data_case_1_local_3(PARAMETERS,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_Install_20_Data_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_Install_20_Data_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(0),ROOT(2));

result = vpx_match(PARAMETERS,"Item Data",TERMINAL(2));
TERMINATEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Install_20_Names,2,0,TERMINAL(4),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_Install_20_Data_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_Install_20_Data_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADERWITHNONE(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Frame,TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
TERMINATEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Window_20_Bounds,3,0,TERMINAL(0),NONE,TERMINAL(3));

result = kSuccess;

FOOTERSINGLECASEWITHNONE(4)
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_Install_20_Data_case_1_local_9_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_Install_20_Data_case_1_local_9_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

if( (repeatLimit = vpx_multiplex(1,TERMINAL(2))) ){
LISTROOTBEGIN(2)
REPEATBEGINWITHCOUNTER
result = vpx_get(PARAMETERS,kVPXValue_Value,LIST(2),ROOT(3),ROOT(4));
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

result = vpx_call_primitive(PARAMETERS,VPLP__28_in_29_,2,1,TERMINAL(4),TERMINAL(1),ROOT(5));

result = vpx_match(PARAMETERS,"0",TERMINAL(5));
NEXTCASEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_nth,2,1,TERMINAL(3),TERMINAL(5),ROOT(6));

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTER(7)
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_Install_20_Data_case_1_local_9_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_Install_20_Data_case_1_local_9_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Viewer Item",ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Create_20_Item,3,1,TERMINAL(1),TERMINAL(3),TERMINAL(0),ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Install_20_Data,2,0,TERMINAL(4),TERMINAL(1));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_Install_20_Data_case_1_local_9_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_Install_20_Data_case_1_local_9_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Viewer_20_Window_2F_Install_20_Data_case_1_local_9_case_1_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
vpx_method_Project_20_Viewer_20_Window_2F_Install_20_Data_case_1_local_9_case_1_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_Install_20_Data_case_1_local_9_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_Install_20_Data_case_1_local_9_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Find_20_List_20_View,1,1,TERMINAL(1),ROOT(2));
TERMINATEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Content_20_List,1,1,TERMINAL(2),ROOT(5));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(4))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Project_20_Viewer_20_Window_2F_Install_20_Data_case_1_local_9_case_1_local_5(PARAMETERS,TERMINAL(2),LIST(4),TERMINAL(5),ROOT(6));
LISTROOT(6,0)
REPEATFINISH
LISTROOTFINISH(6,0)
LISTROOTEND
} else {
ROOTEMPTY(6)
}

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Content_20_List,2,0,TERMINAL(2),TERMINAL(6));

result = kSuccess;

FOOTER(7)
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_Install_20_Data_case_1_local_9_case_2_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_Install_20_Data_case_1_local_9_case_2_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Create_20_Item,1,1,TERMINAL(0),ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Size,1,1,TERMINAL(4),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(1),TERMINAL(2),ROOT(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Location,2,0,TERMINAL(4),TERMINAL(6));

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,1,TERMINAL(5),ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP_iplus,2,1,TERMINAL(1),TERMINAL(7),ROOT(8));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Install_20_Data,2,0,TERMINAL(4),TERMINAL(0));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
OUTPUT(1,TERMINAL(8))
FOOTERSINGLECASE(9)
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_Install_20_Data_case_1_local_9_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_Install_20_Data_case_1_local_9_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(10)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_constant(PARAMETERS,"0",ROOT(4));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(3))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
LOOPTERMINALBEGIN(1)
LOOPTERMINAL(0,4,6)
result = vpx_method_Project_20_Viewer_20_Window_2F_Install_20_Data_case_1_local_9_case_2_local_4(PARAMETERS,LIST(3),LOOP(0),TERMINAL(4),TERMINAL(4),ROOT(5),ROOT(6));
LISTROOT(5,0)
REPEATFINISH
LISTROOTFINISH(5,0)
LISTROOTEND
} else {
ROOTEMPTY(5)
ROOTNULL(6,TERMINAL(4))
}

result = vpx_get(PARAMETERS,kVPXValue_View,TERMINAL(1),ROOT(7),ROOT(8));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Content,2,0,TERMINAL(8),TERMINAL(5));

result = vpx_persistent(PARAMETERS,kVPXValue_List_20_View_20_Canvas_20_Buffer,0,1,ROOT(9));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Update_20_Canvas_20_Limits,2,0,TERMINAL(8),TERMINAL(9));

result = kSuccess;

FOOTER(10)
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_Install_20_Data_case_1_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_Install_20_Data_case_1_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Viewer_20_Window_2F_Install_20_Data_case_1_local_9_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Project_20_Viewer_20_Window_2F_Install_20_Data_case_1_local_9_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_Install_20_Data(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Data,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Add_20_View,2,0,TERMINAL(1),TERMINAL(0));

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(1),ROOT(3),ROOT(4));

result = vpx_method_Project_20_Viewer_20_Window_2F_Install_20_Data_case_1_local_5(PARAMETERS,TERMINAL(4),TERMINAL(3));

result = vpx_method_Project_20_Viewer_20_Window_2F_Install_20_Data_case_1_local_6(PARAMETERS,TERMINAL(2),TERMINAL(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Construct_20_Title,1,1,TERMINAL(1),ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Title,2,0,TERMINAL(2),TERMINAL(5));

result = vpx_method_Project_20_Viewer_20_Window_2F_Install_20_Data_case_1_local_9(PARAMETERS,TERMINAL(1),TERMINAL(2));

result = kSuccess;

FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_Refresh_20_Data(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Data,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Install_20_Data,2,0,TERMINAL(1),TERMINAL(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Update_20_Now,1,0,TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_Update_20_Data(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Data,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Extract_20_Data,2,0,TERMINAL(1),TERMINAL(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_Reinstall_20_Data(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Update_20_Data,1,0,TERMINAL(0));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Refresh_20_Data,1,0,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_Find_20_List_20_View_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_Find_20_List_20_View_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( \'List\' 1 )",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Find_20_Control,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_Find_20_List_20_View_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_Find_20_List_20_View_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(3)
INPUT(0,0)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_Project_20_Databrowser_20_Control,1,1,NONE,ROOT(1));

result = vpx_constant(PARAMETERS,"( \'List\' 1 )",ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Create_20_From_20_ID,3,0,TERMINAL(1),TERMINAL(0),TERMINAL(2));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERWITHNONE(3)
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_Find_20_List_20_View_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_Find_20_List_20_View_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;
FAILONSUCCESS

OUTPUT(0,NONE)
FOOTERWITHNONE(1)
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_Find_20_List_20_View(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Viewer_20_Window_2F_Find_20_List_20_View_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_Project_20_Viewer_20_Window_2F_Find_20_List_20_View_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Project_20_Viewer_20_Window_2F_Find_20_List_20_View_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_New_20_Element(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Data,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_New_20_Element,1,1,TERMINAL(2),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Refresh_20_Data,1,0,TERMINAL(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Make_20_Dirty,1,0,TERMINAL(3));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_Open_20_Record_case_1_local_7_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_Open_20_Record_case_1_local_7_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADERWITHNONE(4)
INPUT(0,0)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_Static_20_Text_20_Control,1,1,NONE,ROOT(1));

result = vpx_constant(PARAMETERS,"( \'Text\' 1 )",ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Create_20_From_20_ID,3,0,TERMINAL(1),TERMINAL(0),TERMINAL(2));
TERMINATEONFAILURE

result = vpx_constant(PARAMETERS,"\"\"",ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Text,2,0,TERMINAL(1),TERMINAL(3));

result = kSuccess;

FOOTERSINGLECASEWITHNONE(4)
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_Open_20_Record_case_1_local_7_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_Open_20_Record_case_1_local_7_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Find_20_List_20_View,1,1,TERMINAL(0),ROOT(1));
TERMINATEONFAILURE

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_Open_20_Record_case_1_local_7_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_Open_20_Record_case_1_local_7_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADERWITHNONE(4)
INPUT(0,0)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_Window_20_Control,1,1,NONE,ROOT(1));

result = vpx_constant(PARAMETERS,"( \'Wait\' 1 )",ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Create_20_From_20_ID,3,0,TERMINAL(1),TERMINAL(0),TERMINAL(2));
TERMINATEONFAILURE

result = vpx_constant(PARAMETERS,"FALSE",ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Busy_3F_,2,0,TERMINAL(0),TERMINAL(3));

result = kSuccess;

FOOTERSINGLECASEWITHNONE(4)
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_Open_20_Record_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_Open_20_Record_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Project_20_Viewer_20_Window_2F_Open_20_Record_case_1_local_7_case_1_local_2(PARAMETERS,TERMINAL(0));

result = vpx_method_Project_20_Viewer_20_Window_2F_Open_20_Record_case_1_local_7_case_1_local_3(PARAMETERS,TERMINAL(0));

result = vpx_method_Project_20_Viewer_20_Window_2F_Open_20_Record_case_1_local_7_case_1_local_4(PARAMETERS,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_Open_20_Record(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_WindowRef,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
TERMINATEONFAILURE

result = vpx_constant(PARAMETERS,"main",ROOT(3));

result = vpx_constant(PARAMETERS,"Viewer Window",ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Create_20_Nib_20_Window,3,0,TERMINAL(0),TERMINAL(3),TERMINAL(4));

result = vpx_method_Project_20_Viewer_20_Window_2F_Open_20_Record_case_1_local_7(PARAMETERS,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_Open_20_With_20_Data(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open_20_Record,1,0,TERMINAL(0));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Install_20_Data,2,0,TERMINAL(0),TERMINAL(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Show,1,0,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_Get_20_Project_20_Data(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Data,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Project_20_Data,1,1,TERMINAL(2),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_Get_20_Section_20_Data_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_Get_20_Section_20_Data_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(9)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Data,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(2),ROOT(3));

result = vpx_match(PARAMETERS,"List Data",TERMINAL(3));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(2),ROOT(4),ROOT(5));

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(5),ROOT(6),ROOT(7));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Section_20_Data,1,1,TERMINAL(7),ROOT(8));

result = kSuccess;

OUTPUT(0,TERMINAL(8))
FOOTER(9)
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_Get_20_Section_20_Data_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_Get_20_Section_20_Data_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Data,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Section_20_Data,1,1,TERMINAL(2),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_Get_20_Section_20_Data(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Viewer_20_Window_2F_Get_20_Section_20_Data_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Project_20_Viewer_20_Window_2F_Get_20_Section_20_Data_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_Get_20_Method_20_Data_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_Get_20_Method_20_Data_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(9)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Find_20_List_20_View,1,1,TERMINAL(0),ROOT(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Select_20_Values,1,1,TERMINAL(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP__28_length_29_,1,1,TERMINAL(2),ROOT(3));

result = vpx_match(PARAMETERS,"1",TERMINAL(3));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,1,TERMINAL(2),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(4),ROOT(5));

result = vpx_match(PARAMETERS,"Item Data",TERMINAL(5));
FAILONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(4),ROOT(6),ROOT(7));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Method_20_Data,1,1,TERMINAL(7),ROOT(8));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(8));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(8))
FOOTER(9)
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_Get_20_Method_20_Data_case_2_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_Get_20_Method_20_Data_case_2_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"Item Data",TERMINAL(1));
FAILONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(3),ROOT(4));

result = vpx_match(PARAMETERS,"Universal Data",TERMINAL(4));
FAILONFAILURE

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_Get_20_Method_20_Data_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_Get_20_Method_20_Data_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Data,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(2),ROOT(3));

result = vpx_match(PARAMETERS,"Item Data",TERMINAL(3));
FAILONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(2),ROOT(4),ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Method_20_Data,1,1,TERMINAL(5),ROOT(6));
NEXTCASEONFAILURE

result = vpx_method_Project_20_Viewer_20_Window_2F_Get_20_Method_20_Data_case_2_local_8(PARAMETERS,TERMINAL(6));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(6));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTER(7)
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_Get_20_Method_20_Data_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_Get_20_Method_20_Data_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_Get_20_Method_20_Data(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Viewer_20_Window_2F_Get_20_Method_20_Data_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_Project_20_Viewer_20_Window_2F_Get_20_Method_20_Data_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Project_20_Viewer_20_Window_2F_Get_20_Method_20_Data_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_Get_20_Save_20_Data_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_Get_20_Save_20_Data_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"Item Data",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Section_20_Data,1,1,TERMINAL(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(4));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_File,1,1,TERMINAL(4),ROOT(5));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(6)
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_Get_20_Save_20_Data_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_Get_20_Save_20_Data_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

OUTPUT(0,NONE)
FOOTERWITHNONE(1)
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_Get_20_Save_20_Data_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_Get_20_Save_20_Data_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Viewer_20_Window_2F_Get_20_Save_20_Data_case_1_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Project_20_Viewer_20_Window_2F_Get_20_Save_20_Data_case_1_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_Get_20_Save_20_Data_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_Get_20_Save_20_Data_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Find_20_List_20_View,1,1,TERMINAL(0),ROOT(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Select_20_Values,1,1,TERMINAL(1),ROOT(2));

result = vpx_match(PARAMETERS,"(  )",TERMINAL(2));
NEXTCASEONSUCCESS

if( (repeatLimit = vpx_multiplex(1,TERMINAL(2))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Project_20_Viewer_20_Window_2F_Get_20_Save_20_Data_case_1_local_5(PARAMETERS,LIST(2),ROOT(3));
LISTROOT(3,0)
REPEATFINISH
LISTROOTFINISH(3,0)
LISTROOTEND
} else {
ROOTEMPTY(3)
}

result = vpx_method__28_Unique_29_(PARAMETERS,TERMINAL(3),ROOT(4));

result = vpx_match(PARAMETERS,"(  )",TERMINAL(3));
NEXTCASEONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_Get_20_Save_20_Data_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_Get_20_Save_20_Data_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Section_20_Data,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
NEXTCASEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_pack,1,1,TERMINAL(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_Get_20_Save_20_Data_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_Get_20_Save_20_Data_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Project_20_Data,1,1,TERMINAL(0),ROOT(1));

result = vpx_method__28_Check_29_(PARAMETERS,TERMINAL(1),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
NEXTCASEONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_Get_20_Save_20_Data_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_Get_20_Save_20_Data_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( )",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_Get_20_Save_20_Data(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Viewer_20_Window_2F_Get_20_Save_20_Data_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_Project_20_Viewer_20_Window_2F_Get_20_Save_20_Data_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_Project_20_Viewer_20_Window_2F_Get_20_Save_20_Data_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Project_20_Viewer_20_Window_2F_Get_20_Save_20_Data_case_4(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_Refresh(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Update_20_Now,1,0,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_File_20_Add_20_To_20_Project_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_File_20_Add_20_To_20_Project_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;
FAILONSUCCESS

FOOTER(1)
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_File_20_Add_20_To_20_Project_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_File_20_Add_20_To_20_Project_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADERWITHNONE(1)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Open_20_Library_20_File(PARAMETERS,NONE,NONE);
TERMINATEONFAILURE

result = kSuccess;

FOOTERWITHNONE(1)
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_File_20_Add_20_To_20_Project(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_File_20_Add_20_To_20_Project_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_File_20_Add_20_To_20_Project_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_File_20_Export_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_File_20_Export_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADERWITHNONE(4)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Save_20_Data,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"(  )",TERMINAL(1));
TERMINATEONSUCCESS

result = vpx_instantiate(PARAMETERS,kVPXClass_Project_20_Save_20_Activity,1,1,NONE,ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Project_20_Data,1,1,TERMINAL(0),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_C_20_Save,3,0,TERMINAL(2),TERMINAL(3),TERMINAL(1));

result = kSuccess;

FOOTERWITHNONE(4)
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_File_20_Export_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_File_20_Export_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_File_20_Export(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_File_20_Export_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_File_20_Export_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_File_20_Save_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_File_20_Save_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADERWITHNONE(4)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Save_20_Data,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"(  )",TERMINAL(1));
TERMINATEONSUCCESS

result = vpx_instantiate(PARAMETERS,kVPXClass_Project_20_Save_20_Activity,1,1,NONE,ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Project_20_Data,1,1,TERMINAL(0),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Object_20_Save,3,0,TERMINAL(2),TERMINAL(3),TERMINAL(1));

result = kSuccess;

FOOTERWITHNONE(4)
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_File_20_Save_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_File_20_Save_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADERWITHNONE(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Save_20_Data,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"(  )",TERMINAL(1));
TERMINATEONSUCCESS

if( (repeatLimit = vpx_multiplex(1,TERMINAL(1))) ){
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Save_20_File,2,0,LIST(1),NONE);
REPEATFINISH
} else {
}

result = kSuccess;

FOOTERWITHNONE(2)
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_File_20_Save(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_File_20_Save_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_File_20_Save_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_File_20_Save_20_As_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_File_20_Save_20_As_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADERWITHNONE(4)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Save_20_Data,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"(  )",TERMINAL(1));
TERMINATEONSUCCESS

result = vpx_instantiate(PARAMETERS,kVPXClass_Project_20_Save_20_Activity,1,1,NONE,ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Project_20_Data,1,1,TERMINAL(0),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Object_20_Save_20_As,3,0,TERMINAL(2),TERMINAL(3),TERMINAL(1));

result = kSuccess;

FOOTERWITHNONE(4)
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_File_20_Save_20_As_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_File_20_Save_20_As_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Save_20_Data,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"(  )",TERMINAL(1));
TERMINATEONSUCCESS

result = vpx_constant(PARAMETERS,"NULL",ROOT(2));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(1))) ){
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Save_20_File,2,0,LIST(1),TERMINAL(2));
REPEATFINISH
} else {
}

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_File_20_Save_20_As(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_File_20_Save_20_As_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_File_20_Save_20_As_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_File_20_Revert(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_Edit_20_Clear(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Find_20_List_20_View,1,1,TERMINAL(0),ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_HIC_20_Edit_20_Clear,1,0,TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_Info_20_Last_20_Error(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Project_20_Data,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
TERMINATEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Show_20_Errors,1,0,TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_Info_20_Check_20_Program(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_Window_20_Info(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Project_20_Data,1,1,TERMINAL(0),ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(1));
TERMINATEONFAILURE

result = vpx_method_Show_20_Project_20_Info(PARAMETERS,TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_Windows_20_Project_case_1_local_9_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_Windows_20_Project_case_1_local_9_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"Section Data",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open_20_Editor,1,0,TERMINAL(2));

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_Windows_20_Project_case_1_local_9_case_2_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_Windows_20_Project_case_1_local_9_case_2_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"\"Class Data\"",TERMINAL(0));
TERMINATEONSUCCESS

result = vpx_match(PARAMETERS,"\"Persistent Data\"",TERMINAL(0));
TERMINATEONSUCCESS

result = vpx_match(PARAMETERS,"Universal Data",TERMINAL(0));
TERMINATEONSUCCESS

result = kSuccess;
FAILONSUCCESS

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_Windows_20_Project_case_1_local_9_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_Windows_20_Project_case_1_local_9_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADERWITHNONE(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_Windows_20_Project_case_1_local_9_case_2_local_2(PARAMETERS,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"View data from which section?",ROOT(2));

result = vpx_method_Select_20_Section(PARAMETERS,TERMINAL(0),TERMINAL(2),NONE,ROOT(3));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(3),TERMINAL(1),ROOT(4));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open_20_Editor,1,0,TERMINAL(4));

result = kSuccess;

FOOTERWITHNONE(5)
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_Windows_20_Project_case_1_local_9_case_3_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_Windows_20_Project_case_1_local_9_case_3_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"\"Method Data\"",TERMINAL(0));
TERMINATEONSUCCESS

result = vpx_match(PARAMETERS,"\"Attribute Data\"",TERMINAL(0));
TERMINATEONSUCCESS

result = vpx_match(PARAMETERS,"\"Class Attribute Data\"",TERMINAL(0));
TERMINATEONSUCCESS

result = kSuccess;
FAILONSUCCESS

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_Windows_20_Project_case_1_local_9_case_3_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_Windows_20_Project_case_1_local_9_case_3_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"\"Method Data\"",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"Universal Data",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_Windows_20_Project_case_1_local_9_case_3_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_Windows_20_Project_case_1_local_9_case_3_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(1)
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_Windows_20_Project_case_1_local_9_case_3_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_Windows_20_Project_case_1_local_9_case_3_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_Windows_20_Project_case_1_local_9_case_3_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_Windows_20_Project_case_1_local_9_case_3_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_Windows_20_Project_case_1_local_9_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_Windows_20_Project_case_1_local_9_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADERWITHNONE(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_Windows_20_Project_case_1_local_9_case_3_local_2(PARAMETERS,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"View data from what class?",ROOT(2));

result = vpx_method_Select_20_Class(PARAMETERS,TERMINAL(0),TERMINAL(2),NONE,ROOT(3));
TERMINATEONFAILURE

result = vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_Windows_20_Project_case_1_local_9_case_3_local_5(PARAMETERS,TERMINAL(1),ROOT(4));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(3),TERMINAL(4),ROOT(5));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open_20_Editor,1,0,TERMINAL(5));

result = kSuccess;

FOOTERWITHNONE(6)
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_Windows_20_Project_case_1_local_9_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_Windows_20_Project_case_1_local_9_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_Windows_20_Project_case_1_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_Windows_20_Project_case_1_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_Windows_20_Project_case_1_local_9_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
if(vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_Windows_20_Project_case_1_local_9_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
if(vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_Windows_20_Project_case_1_local_9_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_Windows_20_Project_case_1_local_9_case_4(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_Windows_20_Project_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_Windows_20_Project_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( \"Section Data\" \"Universal Data\" \"Class Data\" \"Persistent Data\" \"Method Data\" \"Attribute Data\" \"Class Attribute Data\" )",ROOT(2));

result = vpx_constant(PARAMETERS,"( \'WNsc\' \'WNun\' \'WNcl\' \'WNpr\' \'WNmt\' \'WNat\' \'WNca\' )",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP__28_in_29_,2,1,TERMINAL(3),TERMINAL(1),ROOT(4));

result = vpx_match(PARAMETERS,"0",TERMINAL(4));
NEXTCASEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_nth,2,1,TERMINAL(2),TERMINAL(4),ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Project_20_Data,1,1,TERMINAL(0),ROOT(6));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(6));
NEXTCASEONSUCCESS

result = vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_Windows_20_Project_case_1_local_9(PARAMETERS,TERMINAL(6),TERMINAL(5));

result = kSuccess;

FOOTER(7)
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_Windows_20_Project_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_Windows_20_Project_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_Windows_20_Project(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_Windows_20_Project_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_Windows_20_Project_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_Exec_20_Execute_20_Method_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_Exec_20_Execute_20_Method_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Method_20_Data,1,1,TERMINAL(0),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
NEXTCASEONSUCCESS

result = vpx_constant(PARAMETERS,"( )",ROOT(3));

result = vpx_constant(PARAMETERS,"0",ROOT(4));

result = vpx_constant(PARAMETERS,"NULL",ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Execute,5,0,TERMINAL(2),TERMINAL(3),TERMINAL(4),TERMINAL(5),TERMINAL(1));
NEXTCASEONFAILURE

result = kSuccess;

FOOTER(6)
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_Exec_20_Execute_20_Method_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_Exec_20_Execute_20_Method_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_Exec_20_Execute_20_Method(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_Exec_20_Execute_20_Method_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_Exec_20_Execute_20_Method_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_Exec_20_Run_20_Application(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Project_20_Data,1,1,TERMINAL(0),ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(1));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Execute_20_MAIN,1,0,TERMINAL(1));
TERMINATEONFAILURE

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_Expose_20_URL_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1,V_Object *root2);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_Expose_20_URL_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1,V_Object *root2)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Find_20_Item_20_Name,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open_20_Container,1,1,TERMINAL(2),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Force_20_Reinstall,1,0,TERMINAL(2));

result = vpx_constant(PARAMETERS,"TRUE",ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
OUTPUT(1,TERMINAL(2))
OUTPUT(2,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_Expose_20_URL_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1,V_Object *root2);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_Expose_20_URL_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1,V_Object *root2)
{
HEADERWITHNONE(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"FALSE",ROOT(2));

result = kSuccess;
FINISHONSUCCESS

OUTPUT(0,TERMINAL(0))
OUTPUT(1,NONE)
OUTPUT(2,TERMINAL(2))
FOOTERWITHNONE(3)
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_Expose_20_URL_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1,V_Object *root2);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_Expose_20_URL_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1,V_Object *root2)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Viewer_20_Window_2F_Expose_20_URL_case_1_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1,root2))
vpx_method_Project_20_Viewer_20_Window_2F_Expose_20_URL_case_1_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1,root2);
return outcome;
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_Expose_20_URL_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_Expose_20_URL_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(12)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Find_20_List_20_View,1,1,TERMINAL(0),ROOT(2));
TERMINATEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Root_20_Data_20_Item,TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_method_VPL_20_Parse_20_URL(PARAMETERS,TERMINAL(1),ROOT(5));
NEXTCASEONFAILURE

if( (repeatLimit = vpx_multiplex(1,TERMINAL(5))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
LOOPTERMINALBEGIN(1)
LOOPTERMINAL(0,4,6)
result = vpx_method_Project_20_Viewer_20_Window_2F_Expose_20_URL_case_1_local_5(PARAMETERS,LOOP(0),LIST(5),ROOT(6),ROOT(7),ROOT(8));
NEXTCASEONFAILURE
LISTROOT(7,0)
REPEATFINISH
LISTROOTFINISH(7,0)
LISTROOTEND
} else {
ROOTNULL(6,TERMINAL(4))
ROOTEMPTY(7)
ROOTNULL(8,NULL)
}

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(8));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"\'name\'",ROOT(9));

result = vpx_extconstant(PARAMETERS,kDataBrowserRevealAndCenterInView,ROOT(10));

result = vpx_call_data_method(PARAMETERS,kVPXMethod__7E_Reveal_20_DBItem,4,1,TERMINAL(2),TERMINAL(6),TERMINAL(9),TERMINAL(10),ROOT(11));

result = kSuccess;

FOOTER(12)
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_Expose_20_URL_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_Expose_20_URL_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_Expose_20_URL(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Viewer_20_Window_2F_Expose_20_URL_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Project_20_Viewer_20_Window_2F_Expose_20_URL_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_Clear_20_Breakpoints_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_Clear_20_Breakpoints_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"Item Data",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_All_20_Breakpoints,1,1,TERMINAL(3),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_Clear_20_Breakpoints_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_Clear_20_Breakpoints_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

OUTPUT(0,NONE)
FOOTERWITHNONE(1)
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_Clear_20_Breakpoints_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_Clear_20_Breakpoints_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_Clear_20_Breakpoints_case_1_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_Clear_20_Breakpoints_case_1_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_Clear_20_Breakpoints_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_Clear_20_Breakpoints_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(7)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Find_20_List_20_View,1,1,TERMINAL(0),ROOT(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Select_20_Values,1,1,TERMINAL(1),ROOT(2));

result = vpx_match(PARAMETERS,"(  )",TERMINAL(2));
NEXTCASEONSUCCESS

if( (repeatLimit = vpx_multiplex(1,TERMINAL(2))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_Clear_20_Breakpoints_case_1_local_5(PARAMETERS,LIST(2),ROOT(3));
LISTROOT(3,0)
REPEATFINISH
LISTROOTFINISH(3,0)
LISTROOTEND
} else {
ROOTEMPTY(3)
}

result = vpx_method__28_Flatten_29_(PARAMETERS,TERMINAL(3),ROOT(4));

result = vpx_method__28_Unique_29_(PARAMETERS,TERMINAL(4),ROOT(5));

result = vpx_match(PARAMETERS,"( )",TERMINAL(5));
NEXTCASEONSUCCESS

result = vpx_constant(PARAMETERS,"FALSE",ROOT(6));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(5))) ){
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Breakpoint,2,0,LIST(5),TERMINAL(6));
REPEATFINISH
} else {
}

result = kSuccess;

FOOTER(7)
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_Clear_20_Breakpoints_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_Clear_20_Breakpoints_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_Clear_20_Breakpoints(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_Clear_20_Breakpoints_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_Clear_20_Breakpoints_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_Show_20_Breakpoints_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_Show_20_Breakpoints_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"Item Data",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_All_20_Breakpoints,1,1,TERMINAL(3),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_Show_20_Breakpoints_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_Show_20_Breakpoints_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

OUTPUT(0,NONE)
FOOTERWITHNONE(1)
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_Show_20_Breakpoints_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_Show_20_Breakpoints_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_Show_20_Breakpoints_case_1_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_Show_20_Breakpoints_case_1_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_Show_20_Breakpoints_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_Show_20_Breakpoints_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(8)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Find_20_List_20_View,1,1,TERMINAL(0),ROOT(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Select_20_Values,1,1,TERMINAL(1),ROOT(2));

result = vpx_match(PARAMETERS,"(  )",TERMINAL(2));
NEXTCASEONSUCCESS

if( (repeatLimit = vpx_multiplex(1,TERMINAL(2))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_Show_20_Breakpoints_case_1_local_5(PARAMETERS,LIST(2),ROOT(3));
LISTROOT(3,0)
REPEATFINISH
LISTROOTFINISH(3,0)
LISTROOTEND
} else {
ROOTEMPTY(3)
}

result = vpx_method__28_Flatten_29_(PARAMETERS,TERMINAL(3),ROOT(4));

result = vpx_method_Get_20_Application(PARAMETERS,ROOT(5));

result = vpx_constant(PARAMETERS,"Operation Data",ROOT(6));

result = vpx_constant(PARAMETERS,"List of Breakpoint Operations",ROOT(7));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Display_20_List,4,0,TERMINAL(5),TERMINAL(4),TERMINAL(6),TERMINAL(7));

result = kSuccess;

FOOTER(8)
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_Show_20_Breakpoints_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_Show_20_Breakpoints_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_Show_20_Breakpoints(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_Show_20_Breakpoints_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_Show_20_Breakpoints_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_Get_20_All_20_Breakpoints(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

OUTPUT(0,NONE)
FOOTERSINGLECASEWITHNONE(1)
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_In_20_Message_20_Group_3F__case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_In_20_Message_20_Group_3F__case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(0),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP__28_in_29_,2,1,TERMINAL(1),TERMINAL(2),ROOT(3));

result = vpx_match(PARAMETERS,"0",TERMINAL(3));
NEXTCASEONSUCCESS

result = vpx_constant(PARAMETERS,"TRUE",ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_In_20_Message_20_Group_3F__case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_In_20_Message_20_Group_3F__case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
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

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_In_20_Message_20_Group_3F_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Viewer_20_Window_2F_In_20_Message_20_Group_3F__case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Project_20_Viewer_20_Window_2F_In_20_Message_20_Group_3F__case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_Data_20_Message_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_Data_20_Message_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"Refresh",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Reinstall_20_Data,1,0,TERMINAL(0));

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_Data_20_Message_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_Data_20_Message_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"Remove Self",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Close,1,0,TERMINAL(0));

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_Data_20_Message_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_Data_20_Message_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_Data_20_Message(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Viewer_20_Window_2F_Data_20_Message_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
if(vpx_method_Project_20_Viewer_20_Window_2F_Data_20_Message_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Project_20_Viewer_20_Window_2F_Data_20_Message_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_Select_20_Item(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Find_20_List_20_View,1,1,TERMINAL(0),ROOT(2));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Select_20_Items,2,0,TERMINAL(2),TERMINAL(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Select,1,0,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_File_20_Update_20_App_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_File_20_Update_20_App_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_All_20_Attributes,1,1,TERMINAL(0),ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Persistents,1,1,TERMINAL(0),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP__28_join_29_,2,1,TERMINAL(1),TERMINAL(2),ROOT(3));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(3))) ){
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Update_20_Value,1,0,LIST(3));
REPEATFINISH
} else {
}

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_File_20_Update_20_App_case_1_local_11_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_File_20_Update_20_App_case_1_local_11_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADERWITHNONE(9)
INPUT(0,0)
result = kSuccess;

result = vpx_method_New_20_FSRef(PARAMETERS,TERMINAL(0),ROOT(1));
FAILONFAILURE

result = vpx_constant(PARAMETERS,"Application.vpz",ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Bundle_20_Resource_20_FSRef,2,1,TERMINAL(1),TERMINAL(2),ROOT(3));
FAILONFAILURE

result = vpx_constant(PARAMETERS,"TRUE",ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod__7E_FSGetCatalogInfo,5,4,TERMINAL(3),NONE,NONE,TERMINAL(4),TERMINAL(4),ROOT(5),ROOT(6),ROOT(7),ROOT(8));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(7))
OUTPUT(1,TERMINAL(8))
FOOTERWITHNONE(9)
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_File_20_Update_20_App_case_1_local_11_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_File_20_Update_20_App_case_1_local_11_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADERWITHNONE(19)
INPUT(0,0)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,kFSCatInfoNone,ROOT(1));

result = vpx_constant(PARAMETERS,"NULL",ROOT(2));

PUTINTEGER(CFStringGetSystemEncoding(),3);
result = kSuccess;

result = vpx_constant(PARAMETERS,"Application.vpz",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_string_2D_to_2D_pointer,1,1,TERMINAL(4),ROOT(5));

PUTPOINTER(__CFString,*,CFStringCreateWithCString( GETCONSTPOINTER(__CFAllocator,*,TERMINAL(2)),GETCONSTPOINTER(char,*,TERMINAL(5)),GETINTEGER(TERMINAL(3))),6);
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(7));

PUTPOINTER(__CFURL,*,CFURLCreateFromFSRef( GETCONSTPOINTER(__CFAllocator,*,TERMINAL(7)),GETCONSTPOINTER(FSRef,*,TERMINAL(0))),8);
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(8));
FAILONSUCCESS

PUTPOINTER(__CFBundle,*,CFBundleCreate( GETCONSTPOINTER(__CFAllocator,*,TERMINAL(7)),GETCONSTPOINTER(__CFURL,*,TERMINAL(8))),9);
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(9));
FAILONSUCCESS

PUTPOINTER(__CFURL,*,CFBundleCopyResourceURL( GETPOINTER(0,__CFBundle,*,ROOT(11),TERMINAL(9)),GETCONSTPOINTER(__CFString,*,TERMINAL(6)),GETCONSTPOINTER(__CFString,*,TERMINAL(2)),GETCONSTPOINTER(__CFString,*,TERMINAL(2))),10);
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(10));
FAILONSUCCESS

PUTINTEGER(CFURLGetFSRef( GETCONSTPOINTER(__CFURL,*,TERMINAL(10)),GETPOINTER(144,FSRef,*,ROOT(13),NONE)),12);
result = kSuccess;

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(12));
FAILONFAILURE

PUTINTEGER(FSGetCatalogInfo( GETCONSTPOINTER(FSRef,*,TERMINAL(13)),GETINTEGER(TERMINAL(1)),GETPOINTER(148,FSCatalogInfo,*,ROOT(15),TERMINAL(2)),GETPOINTER(512,HFSUniStr255,*,ROOT(16),TERMINAL(2)),GETPOINTER(72,FSSpec,*,ROOT(17),NONE),GETPOINTER(144,FSRef,*,ROOT(18),NONE)),14);
result = kSuccess;

CFRelease( GETCONSTPOINTER(void,*,TERMINAL(8)));
result = kSuccess;

CFRelease( GETCONSTPOINTER(void,*,TERMINAL(6)));
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(17))
OUTPUT(1,TERMINAL(18))
FOOTERWITHNONE(19)
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_File_20_Update_20_App_case_1_local_11_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_File_20_Update_20_App_case_1_local_11_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_File_20_Update_20_App_case_1_local_11_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1))
vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_File_20_Update_20_App_case_1_local_11_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1);
return outcome;
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_File_20_Update_20_App_case_1_local_11_case_1_local_10_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_File_20_Update_20_App_case_1_local_11_case_1_local_10_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADERWITHNONE(9)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_File,TERMINAL(3),ROOT(4),ROOT(5));

PUTINTEGER(FSpMakeFSRef( GETCONSTPOINTER(FSSpec,*,TERMINAL(5)),GETPOINTER(144,FSRef,*,ROOT(7),NONE)),6);
result = kSuccess;

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(6));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"Replace",ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP_copy_2D_object,3,0,TERMINAL(7),TERMINAL(1),TERMINAL(8));
NEXTCASEONFAILURE

result = kSuccess;

FOOTERWITHNONE(9)
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_File_20_Update_20_App_case_1_local_11_case_1_local_10_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_File_20_Update_20_App_case_1_local_11_case_1_local_10_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(10)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_File,TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_extget(PARAMETERS,"name",1,2,TERMINAL(5),ROOT(6),ROOT(7));

result = vpx_method_Pascal_20_To_20_String(PARAMETERS,TERMINAL(7),ROOT(8));

result = vpx_constant(PARAMETERS,"\"Problem with copying \"",ROOT(9));

result = vpx_call_primitive(PARAMETERS,VPLP_show,2,0,TERMINAL(9),TERMINAL(8));

result = kSuccess;

FOOTER(10)
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_File_20_Update_20_App_case_1_local_11_case_1_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_File_20_Update_20_App_case_1_local_11_case_1_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_File_20_Update_20_App_case_1_local_11_case_1_local_10_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_File_20_Update_20_App_case_1_local_11_case_1_local_10_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_File_20_Update_20_App_case_1_local_11_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_File_20_Update_20_App_case_1_local_11_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(11)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_File,TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_File_20_Update_20_App_case_1_local_11_case_1_local_3(PARAMETERS,TERMINAL(3),ROOT(4),ROOT(5));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_open_2D_file,1,1,TERMINAL(4),ROOT(6));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_write_2D_object,2,0,TERMINAL(6),TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_close_2D_file,1,0,TERMINAL(6));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"Primitives Data",ROOT(7));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(0),TERMINAL(7),ROOT(8));

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(8),ROOT(9),ROOT(10));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(10))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_File_20_Update_20_App_case_1_local_11_case_1_local_10(PARAMETERS,LIST(10),TERMINAL(5));
REPEATFINISH
} else {
}

result = kSuccess;

FOOTER(11)
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_File_20_Update_20_App_case_1_local_11_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_File_20_Update_20_App_case_1_local_11_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Couldn\'t update executable!",ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_show,1,0,TERMINAL(2));

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_File_20_Update_20_App_case_1_local_11(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_File_20_Update_20_App_case_1_local_11(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_File_20_Update_20_App_case_1_local_11_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_File_20_Update_20_App_case_1_local_11_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_File_20_Update_20_App(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(14)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Get_20_Front_20_Project(PARAMETERS,ROOT(1));
TERMINATEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Owner,TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_constant(PARAMETERS,"NULL",ROOT(6));

result = vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_File_20_Update_20_App_case_1_local_6(PARAMETERS,TERMINAL(1));

result = vpx_constant(PARAMETERS,"NULL",ROOT(7));

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(1),ROOT(8),ROOT(9));

result = vpx_set(PARAMETERS,kVPXValue_Environment,TERMINAL(8),TERMINAL(7),ROOT(10));

result = vpx_set(PARAMETERS,kVPXValue_Parent,TERMINAL(4),TERMINAL(6),ROOT(11));

result = vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_File_20_Update_20_App_case_1_local_11(PARAMETERS,TERMINAL(11),TERMINAL(9));

result = vpx_set(PARAMETERS,kVPXValue_Parent,TERMINAL(11),TERMINAL(5),ROOT(12));

result = vpx_set(PARAMETERS,kVPXValue_Environment,TERMINAL(10),TERMINAL(9),ROOT(13));

result = kSuccess;

FOOTERSINGLECASE(14)
}

/* Stop Universals */



Nat4 VPLC_Project_20_Window_20_HIToolbar_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Project_20_Window_20_HIToolbar_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 436 567 }{ 265 554 } */
	tempAttribute = attribute_add("HIObject Reference",tempClass,NULL,environment);
	tempAttribute = attribute_add("Identifier",tempClass,tempAttribute_Project_20_Window_20_HIToolbar_2F_Identifier,environment);
	tempAttribute = attribute_add("Attributes",tempClass,tempAttribute_Project_20_Window_20_HIToolbar_2F_Attributes,environment);
	tempAttribute = attribute_add("Known Items",tempClass,tempAttribute_Project_20_Window_20_HIToolbar_2F_Known_20_Items,environment);
	tempAttribute = attribute_add("Items",tempClass,tempAttribute_Project_20_Window_20_HIToolbar_2F_Items,environment);
	tempAttribute = attribute_add("Visible?",tempClass,tempAttribute_Project_20_Window_20_HIToolbar_2F_Visible_3F_,environment);
	tempAttribute = attribute_add("Supports Drop?",tempClass,tempAttribute_Project_20_Window_20_HIToolbar_2F_Supports_20_Drop_3F_,environment);
	tempAttribute = attribute_add("Windows",tempClass,tempAttribute_Project_20_Window_20_HIToolbar_2F_Windows,environment);
	tempAttribute = attribute_add("HIToolbar Reference",tempClass,NULL,environment);
	tempAttribute = attribute_add("HIToolbar Events",tempClass,tempAttribute_Project_20_Window_20_HIToolbar_2F_HIToolbar_20_Events,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"HIToolbar");
	return kNOERROR;
}

/* Start Universals: { 60 60 }{ 200 300 } */
/* Stop Universals */



Nat4 VPLC_Project_20_Databrowser_20_Control_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Project_20_Databrowser_20_Control_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 206 557 }{ 160 428 } */
	tempAttribute = attribute_add("Name",tempClass,tempAttribute_Project_20_Databrowser_20_Control_2F_Name,environment);
	tempAttribute = attribute_add("ControlRef",tempClass,NULL,environment);
	tempAttribute = attribute_add("Control Event Handler",tempClass,tempAttribute_Project_20_Databrowser_20_Control_2F_Control_20_Event_20_Handler,environment);
	tempAttribute = attribute_add("Item Callbacks",tempClass,tempAttribute_Project_20_Databrowser_20_Control_2F_Item_20_Callbacks,environment);
	tempAttribute = attribute_add("Root Data Item",tempClass,tempAttribute_Project_20_Databrowser_20_Control_2F_Root_20_Data_20_Item,environment);
	tempAttribute = attribute_add("Viewer",tempClass,tempAttribute_Project_20_Databrowser_20_Control_2F_Viewer,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"Databrowser Control");
	return kNOERROR;
}

/* Start Universals: { 430 972 }{ 279 302 } */
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0)
{
HEADERWITHNONE(4)
result = kSuccess;

result = vpx_constant(PARAMETERS,"0",ROOT(0));

result = vpx_constant(PARAMETERS,"2240",ROOT(1));

PUTINTEGER(CreateNewMenu( GETINTEGER(TERMINAL(0)),GETINTEGER(TERMINAL(0)),GETPOINTER(0,OpaqueMenuRef,**,ROOT(3),NONE)),2);
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASEWITHNONE(4)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_5_case_1_local_2_case_1_local_10_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_5_case_1_local_2_case_1_local_10_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"Item Data",TERMINAL(1));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(2)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_5_case_1_local_2_case_1_local_10_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_5_case_1_local_2_case_1_local_10_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"List Data",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(3),ROOT(4));

result = vpx_match(PARAMETERS,"Item Data",TERMINAL(4));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(5)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_5_case_1_local_2_case_1_local_10_case_1_local_2_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_5_case_1_local_2_case_1_local_10_case_1_local_2_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;
FAILONSUCCESS

OUTPUT(0,NONE)
FOOTERWITHNONE(1)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_5_case_1_local_2_case_1_local_10_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_5_case_1_local_2_case_1_local_10_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_5_case_1_local_2_case_1_local_10_case_1_local_2_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_5_case_1_local_2_case_1_local_10_case_1_local_2_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_5_case_1_local_2_case_1_local_10_case_1_local_2_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_5_case_1_local_2_case_1_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_5_case_1_local_2_case_1_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_5_case_1_local_2_case_1_local_10_case_1_local_2(PARAMETERS,TERMINAL(0),ROOT(2));
FAILONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(4),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP__28_in_29_,2,1,TERMINAL(1),TERMINAL(5),ROOT(6));

result = vpx_match(PARAMETERS,"0",TERMINAL(6));
FAILONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(7)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_5_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_5_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(11)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Select_20_List,1,1,TERMINAL(0),ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP__28_length_29_,1,1,TERMINAL(1),ROOT(2));

result = vpx_match(PARAMETERS,"1",TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,1,TERMINAL(1),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Value,1,1,TERMINAL(3),ROOT(4));

result = vpx_constant(PARAMETERS,"( \"Class Data\" \"Attribute Data\" \"Class Attribute Data\" \"Persistent Data\" )",ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,1,1,TERMINAL(4),ROOT(6));

result = vpx_constant(PARAMETERS,"( \"Class Data\" )",ROOT(7));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(6))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_5_case_1_local_2_case_1_local_10(PARAMETERS,LIST(6),TERMINAL(7),ROOT(8));
NEXTCASEONFAILURE
REPEATFINISH
} else {
ROOTNULL(8,NULL)
}

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(8),ROOT(9),ROOT(10));

result = kSuccess;

OUTPUT(0,TERMINAL(10))
FOOTER(11)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_5_case_1_local_2_case_2_local_9_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_5_case_1_local_2_case_2_local_9_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"Item Data",TERMINAL(1));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(2)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_5_case_1_local_2_case_2_local_9_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_5_case_1_local_2_case_2_local_9_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"List Data",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(3),ROOT(4));

result = vpx_match(PARAMETERS,"Item Data",TERMINAL(4));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(5)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_5_case_1_local_2_case_2_local_9_case_1_local_2_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_5_case_1_local_2_case_2_local_9_case_1_local_2_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;
FAILONSUCCESS

OUTPUT(0,NONE)
FOOTERWITHNONE(1)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_5_case_1_local_2_case_2_local_9_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_5_case_1_local_2_case_2_local_9_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_5_case_1_local_2_case_2_local_9_case_1_local_2_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_5_case_1_local_2_case_2_local_9_case_1_local_2_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_5_case_1_local_2_case_2_local_9_case_1_local_2_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_5_case_1_local_2_case_2_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_5_case_1_local_2_case_2_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_5_case_1_local_2_case_2_local_9_case_1_local_2(PARAMETERS,TERMINAL(0),ROOT(2));
FAILONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(4),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP__28_in_29_,2,1,TERMINAL(1),TERMINAL(5),ROOT(6));

result = vpx_match(PARAMETERS,"0",TERMINAL(6));
FAILONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(7)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_5_case_1_local_2_case_2_local_11(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_5_case_1_local_2_case_2_local_11(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(13)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Value_20_Address,1,1,TERMINAL(0),ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Project_20_Data,1,1,TERMINAL(0),ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Classes,1,1,TERMINAL(3),ROOT(5));

result = vpx_constant(PARAMETERS,"Name",ROOT(6));

result = vpx_constant(PARAMETERS,"type",ROOT(7));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Value_20_Data,3,1,TERMINAL(4),TERMINAL(1),TERMINAL(7),ROOT(8));

result = vpx_match(PARAMETERS,"instance",TERMINAL(8));
FAILONFAILURE

result = vpx_constant(PARAMETERS,"name",ROOT(9));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Value_20_Data,3,1,TERMINAL(4),TERMINAL(1),TERMINAL(9),ROOT(10));

result = vpx_method_Find_20_Instance(PARAMETERS,TERMINAL(5),TERMINAL(6),TERMINAL(10),ROOT(11),ROOT(12));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(12));
FAILONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(12))
FOOTERSINGLECASE(13)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_5_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_5_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(11)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Select_20_List,1,1,TERMINAL(0),ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP__28_length_29_,1,1,TERMINAL(1),ROOT(2));

result = vpx_match(PARAMETERS,"1",TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,1,TERMINAL(1),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Value,1,1,TERMINAL(3),ROOT(4));

result = vpx_constant(PARAMETERS,"( \"Attribute Data\" \"Class Attribute Data\" \"Persistent Data\" )",ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,1,1,TERMINAL(4),ROOT(6));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(6))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_5_case_1_local_2_case_2_local_9(PARAMETERS,LIST(6),TERMINAL(5),ROOT(7));
NEXTCASEONFAILURE
REPEATFINISH
} else {
ROOTNULL(7,NULL)
}

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(7),ROOT(8),ROOT(9));

result = vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_5_case_1_local_2_case_2_local_11(PARAMETERS,TERMINAL(9),ROOT(10));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(10))
FOOTER(11)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_5_case_1_local_2_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_5_case_1_local_2_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;
FAILONSUCCESS

OUTPUT(0,NONE)
FOOTERWITHNONE(1)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_5_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_5_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_5_case_1_local_2_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_5_case_1_local_2_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_5_case_1_local_2_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_5_case_1_local_3_case_1_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_5_case_1_local_3_case_1_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Value,1,1,TERMINAL(2),ROOT(3));

result = vpx_match(PARAMETERS,"Editor",TERMINAL(3));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(4)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_5_case_1_local_3_case_1_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_5_case_1_local_3_case_1_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

OUTPUT(0,NONE)
FOOTERWITHNONE(1)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_5_case_1_local_3_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_5_case_1_local_3_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_5_case_1_local_3_case_1_local_7_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_5_case_1_local_3_case_1_local_7_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_5_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_5_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(8)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Super_20_Instance,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
FINISHONSUCCESS

result = vpx_constant(PARAMETERS,"Universal Data",ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(0),TERMINAL(3),ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(4),ROOT(5),ROOT(6));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(6))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_5_case_1_local_3_case_1_local_7(PARAMETERS,LIST(6),ROOT(7));
LISTROOT(7,0)
REPEATFINISH
LISTROOTFINISH(7,0)
LISTROOTEND
} else {
ROOTEMPTY(7)
}

result = kSuccess;

OUTPUT(0,TERMINAL(2))
OUTPUT(1,TERMINAL(7))
FOOTERSINGLECASE(8)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(8)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_5_case_1_local_2(PARAMETERS,TERMINAL(0),ROOT(1));
NEXTCASEONFAILURE

LISTROOTBEGIN(1)
REPEATBEGIN
LOOPTERMINALBEGIN(1)
LOOPTERMINAL(0,1,2)
result = vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_5_case_1_local_3(PARAMETERS,LOOP(0),ROOT(2),ROOT(3));
LISTROOT(3,0)
REPEATFINISH
LISTROOTFINISH(3,0)
LISTROOTEND

result = vpx_method__28_Flatten_29_(PARAMETERS,TERMINAL(3),ROOT(4));

result = vpx_match(PARAMETERS,"( )",TERMINAL(4));
NEXTCASEONSUCCESS

if( (repeatLimit = vpx_multiplex(1,TERMINAL(4))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Name,1,1,LIST(4),ROOT(5));
LISTROOT(5,0)
REPEATFINISH
LISTROOTFINISH(5,0)
LISTROOTEND
} else {
ROOTEMPTY(5)
}

result = vpx_constant(PARAMETERS,"\"Run \"",ROOT(6));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(5))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(6),LIST(5),ROOT(7));
LISTROOT(7,0)
REPEATFINISH
LISTROOTFINISH(7,0)
LISTROOTEND
} else {
ROOTEMPTY(7)
}

result = kSuccess;

OUTPUT(0,TERMINAL(7))
FOOTER(8)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( )",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_5_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_5_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( )",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_5_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_6_case_1_local_2_case_1_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_6_case_1_local_2_case_1_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"List Data",TERMINAL(1));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(2)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_6_case_1_local_2_case_1_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_6_case_1_local_2_case_1_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"Item Data",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(3),ROOT(4));

result = vpx_match(PARAMETERS,"List Data",TERMINAL(4));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(5)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_6_case_1_local_2_case_1_local_7_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_6_case_1_local_2_case_1_local_7_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;
FAILONSUCCESS

OUTPUT(0,NONE)
FOOTERWITHNONE(1)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_6_case_1_local_2_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_6_case_1_local_2_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_6_case_1_local_2_case_1_local_7_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_6_case_1_local_2_case_1_local_7_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_6_case_1_local_2_case_1_local_7_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_6_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_6_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Select_20_List,1,1,TERMINAL(0),ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP__28_length_29_,1,1,TERMINAL(1),ROOT(2));

result = vpx_match(PARAMETERS,"1",TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,1,TERMINAL(1),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Value,1,1,TERMINAL(3),ROOT(4));

result = vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_6_case_1_local_2_case_1_local_7(PARAMETERS,TERMINAL(4),ROOT(5));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTER(6)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_6_case_1_local_2_case_2_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_6_case_1_local_2_case_2_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"List Data",TERMINAL(1));
TERMINATEONSUCCESS

result = vpx_match(PARAMETERS,"VPL Data",TERMINAL(1));
TERMINATEONSUCCESS

result = kSuccess;
FAILONSUCCESS

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_6_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_6_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Window,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
NEXTCASEONSUCCESS

result = vpx_get(PARAMETERS,kVPXValue_Data,TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_6_case_1_local_2_case_2_local_5(PARAMETERS,TERMINAL(3));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_6_case_1_local_2_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_6_case_1_local_2_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;
FAILONSUCCESS

OUTPUT(0,NONE)
FOOTERWITHNONE(1)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_6_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_6_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_6_case_1_local_2_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_6_case_1_local_2_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_6_case_1_local_2_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_6_case_1_local_2(PARAMETERS,TERMINAL(0),ROOT(1));
FAILONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Name_20_Singular,1,1,TERMINAL(1),ROOT(2));

result = vpx_constant(PARAMETERS,"\"New \"",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(3),TERMINAL(2),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,1,1,TERMINAL(4),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_7_case_1_local_2_case_1_local_9_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_7_case_1_local_2_case_1_local_9_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"Item Data",TERMINAL(1));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(2)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_7_case_1_local_2_case_1_local_9_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_7_case_1_local_2_case_1_local_9_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"List Data",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(3),ROOT(4));

result = vpx_match(PARAMETERS,"Item Data",TERMINAL(4));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(5)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_7_case_1_local_2_case_1_local_9_case_1_local_2_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_7_case_1_local_2_case_1_local_9_case_1_local_2_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;
FAILONSUCCESS

OUTPUT(0,NONE)
FOOTERWITHNONE(1)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_7_case_1_local_2_case_1_local_9_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_7_case_1_local_2_case_1_local_9_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_7_case_1_local_2_case_1_local_9_case_1_local_2_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_7_case_1_local_2_case_1_local_9_case_1_local_2_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_7_case_1_local_2_case_1_local_9_case_1_local_2_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_7_case_1_local_2_case_1_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_7_case_1_local_2_case_1_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_7_case_1_local_2_case_1_local_9_case_1_local_2(PARAMETERS,TERMINAL(0),ROOT(2));
FAILONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(4),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP__28_in_29_,2,1,TERMINAL(1),TERMINAL(5),ROOT(6));

result = vpx_match(PARAMETERS,"0",TERMINAL(6));
FAILONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(7)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_7_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_7_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(10)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Select_20_List,1,1,TERMINAL(0),ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP__28_length_29_,1,1,TERMINAL(1),ROOT(2));

result = vpx_match(PARAMETERS,"1",TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,1,TERMINAL(1),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Value,1,1,TERMINAL(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,1,1,TERMINAL(4),ROOT(5));

result = vpx_constant(PARAMETERS,"( \"Universal Data\" )",ROOT(6));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(5))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_7_case_1_local_2_case_1_local_9(PARAMETERS,LIST(5),TERMINAL(6),ROOT(7));
NEXTCASEONFAILURE
REPEATFINISH
} else {
ROOTNULL(7,NULL)
}

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(7),ROOT(8),ROOT(9));

result = kSuccess;

OUTPUT(0,TERMINAL(9))
FOOTER(10)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_7_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_7_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;
FAILONSUCCESS

OUTPUT(0,NONE)
FOOTERWITHNONE(1)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_7_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_7_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_7_case_1_local_2_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_7_case_1_local_2_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_7_case_1_local_4_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_7_case_1_local_4_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

PUTINTEGER(CountMenuItems( GETPOINTER(0,OpaqueMenuRef,*,ROOT(2),TERMINAL(0))),1);
result = kSuccess;

result = vpx_match(PARAMETERS,"0",TERMINAL(1));
TERMINATEONSUCCESS

result = vpx_constant(PARAMETERS,"1",ROOT(3));

PUTINTEGER(DeleteMenuItems( GETPOINTER(0,OpaqueMenuRef,*,ROOT(5),TERMINAL(0)),GETINTEGER(TERMINAL(3)),GETINTEGER(TERMINAL(1))),4);
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_7_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_7_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"2242",ROOT(1));

PUTPOINTER(OpaqueMenuRef,*,GetMenuHandle( GETINTEGER(TERMINAL(1))),2);
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
NEXTCASEONSUCCESS

result = vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_7_case_1_local_4_case_1_local_5(PARAMETERS,TERMINAL(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_7_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_7_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(10)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"0",ROOT(1));

result = vpx_constant(PARAMETERS,"2242",ROOT(2));

PUTINTEGER(CreateNewMenu( GETINTEGER(TERMINAL(2)),GETINTEGER(TERMINAL(1)),GETPOINTER(0,OpaqueMenuRef,**,ROOT(4),NONE)),3);
result = kSuccess;

result = vpx_extconstant(PARAMETERS,kInsertHierarchicalMenu,ROOT(5));

InsertMenu( GETPOINTER(0,OpaqueMenuRef,*,ROOT(6),TERMINAL(4)),GETINTEGER(TERMINAL(5)));
result = kSuccess;

result = vpx_method_To_20_CFStringRef(PARAMETERS,TERMINAL(0),ROOT(7));

PUTINTEGER(SetMenuTitleWithCFString( GETPOINTER(0,OpaqueMenuRef,*,ROOT(9),TERMINAL(4)),GETCONSTPOINTER(__CFString,*,TERMINAL(7))),8);
result = kSuccess;

CFRelease( GETCONSTPOINTER(void,*,TERMINAL(7)));
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERWITHNONE(10)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_7_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_7_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_7_case_1_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_7_case_1_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_7_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_7_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Grandparent_20_Helper,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
FAILONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(1),ROOT(2));

result = vpx_match(PARAMETERS,"Class Data",TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"( \"Constructor\" \"Destructor\" \"Editor\" \"Tool\" )",ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
OUTPUT(1,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_7_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_7_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( \"Tool\" \"Main\" )",ROOT(1));

result = vpx_constant(PARAMETERS,"( \"Tool\" \"MAIN\" )",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
OUTPUT(1,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_7_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_7_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_7_case_1_local_6_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1))
vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_7_case_1_local_6_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1);
return outcome;
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_7_case_1_local_8_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_7_case_1_local_8_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0)
{
HEADER(12)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Value,1,1,TERMINAL(0),ROOT(4));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(4));
NEXTCASEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_string_3F_,1,0,TERMINAL(4));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP__28_in_29_,2,1,TERMINAL(3),TERMINAL(4),ROOT(5));

result = vpx_match(PARAMETERS,"0",TERMINAL(5));
NEXTCASEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_detach_2D_nth,2,2,TERMINAL(2),TERMINAL(5),ROOT(6),ROOT(7));

result = vpx_constant(PARAMETERS,"\"-\"",ROOT(8));

result = vpx_constant(PARAMETERS,"\" \"",ROOT(9));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,3,1,TERMINAL(1),TERMINAL(9),TERMINAL(7),ROOT(10));

result = vpx_call_primitive(PARAMETERS,VPLP_attach_2D_r,3,1,TERMINAL(6),TERMINAL(8),TERMINAL(10),ROOT(11));

result = kSuccess;

OUTPUT(0,TERMINAL(11))
FOOTER(12)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_7_case_1_local_8_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_7_case_1_local_8_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(4)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_7_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_7_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_7_case_1_local_8_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0))
vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_7_case_1_local_8_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_7_case_1_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_7_case_1_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADERWITHNONE(7)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_To_20_CFStringRef(PARAMETERS,TERMINAL(0),ROOT(2));

result = vpx_constant(PARAMETERS,"0",ROOT(3));

PUTINTEGER(AppendMenuItemTextWithCFString( GETPOINTER(0,OpaqueMenuRef,*,ROOT(5),TERMINAL(1)),GETCONSTPOINTER(__CFString,*,TERMINAL(2)),GETINTEGER(TERMINAL(3)),GETINTEGER(TERMINAL(3)),GETPOINTER(2,unsigned short,*,ROOT(6),NONE)),4);
result = kSuccess;

CFRelease( GETCONSTPOINTER(void,*,TERMINAL(2)));
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASEWITHNONE(7)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(20)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_7_case_1_local_2(PARAMETERS,TERMINAL(0),ROOT(2));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"Install",ROOT(3));

result = vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_7_case_1_local_4(PARAMETERS,TERMINAL(3),ROOT(4));

result = vpx_constant(PARAMETERS,"( \"Editor\" \"Tool\" \"Constructor\" \"Destructor\" \"Main\" )",ROOT(5));

result = vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_7_case_1_local_6(PARAMETERS,TERMINAL(2),ROOT(6),ROOT(7));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"Uninstall",ROOT(8));

result = vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_7_case_1_local_8(PARAMETERS,TERMINAL(2),TERMINAL(8),TERMINAL(6),TERMINAL(7),ROOT(9));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(9))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_7_case_1_local_9(PARAMETERS,LIST(9),TERMINAL(4));
REPEATFINISH
} else {
}

result = vpx_method_To_20_CFStringRef(PARAMETERS,TERMINAL(3),ROOT(10));

result = vpx_constant(PARAMETERS,"0",ROOT(11));

PUTINTEGER(AppendMenuItemTextWithCFString( GETPOINTER(0,OpaqueMenuRef,*,ROOT(13),TERMINAL(1)),GETCONSTPOINTER(__CFString,*,TERMINAL(10)),GETINTEGER(TERMINAL(11)),GETINTEGER(TERMINAL(11)),GETPOINTER(2,unsigned short,*,ROOT(14),NONE)),12);
result = kSuccess;

CFRelease( GETCONSTPOINTER(void,*,TERMINAL(10)));
result = kSuccess;

result = vpx_method_Get_20_UInt16(PARAMETERS,TERMINAL(14),NONE,ROOT(15),ROOT(16));

PUTINTEGER(SetMenuItemHierarchicalMenu( GETPOINTER(0,OpaqueMenuRef,*,ROOT(18),TERMINAL(1)),GETINTEGER(TERMINAL(16)),GETPOINTER(0,OpaqueMenuRef,*,ROOT(19),TERMINAL(4))),17);
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(16))
FOOTERWITHNONE(20)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
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

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_7_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_7_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_8_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_8_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_match(PARAMETERS,"( )",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP__28_join_29_,2,1,TERMINAL(0),TERMINAL(2),ROOT(3));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_8_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_8_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( \"-\" )",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP__28_join_29_,3,1,TERMINAL(0),TERMINAL(3),TERMINAL(2),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_8_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_8_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_9_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_9_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(0),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP__3D_,2,0,TERMINAL(2),TERMINAL(1));
FAILONFAILURE

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_9_case_1_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_9_case_1_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"12345678",ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_scrap,1,2,TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
NEXTCASEONSUCCESS

result = vpx_constant(PARAMETERS,"\"Paste\"",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_attach_2D_r,2,1,TERMINAL(0),TERMINAL(4),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTER(6)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_9_case_1_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_9_case_1_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(1)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_9_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_9_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_9_case_1_local_7_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_9_case_1_local_7_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_9_case_1_local_10_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_9_case_1_local_10_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Get_20_Value_20_Clipboard(PARAMETERS,ROOT(2));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"\'EDcv\'",ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Can_20_Do_3F_,3,0,TERMINAL(2),TERMINAL(3),TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"Copy Value",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_attach_2D_r,2,1,TERMINAL(0),TERMINAL(4),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTER(6)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_9_case_1_local_10_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_9_case_1_local_10_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(2)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_9_case_1_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_9_case_1_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_9_case_1_local_10_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_9_case_1_local_10_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_9_case_1_local_11_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_9_case_1_local_11_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Get_20_Value_20_Clipboard(PARAMETERS,ROOT(2));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"\'EDpv\'",ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Can_20_Do_3F_,3,0,TERMINAL(2),TERMINAL(3),TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"Paste Value",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_attach_2D_r,2,1,TERMINAL(0),TERMINAL(4),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTER(6)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_9_case_1_local_11_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_9_case_1_local_11_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(2)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_9_case_1_local_11(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_9_case_1_local_11(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_9_case_1_local_11_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_9_case_1_local_11_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_9_case_1_local_13_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_9_case_1_local_13_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_detach_2D_r,1,2,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_match(PARAMETERS,"-",TERMINAL(2));
NEXTCASEONSUCCESS

result = vpx_constant(PARAMETERS,"( - )",ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_9_case_1_local_13_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_9_case_1_local_13_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( )",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_9_case_1_local_13(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_9_case_1_local_13(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_9_case_1_local_13_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_9_case_1_local_13_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_9_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_9_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(12)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Select_20_Values,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"(  )",TERMINAL(1));
NEXTCASEONSUCCESS

result = vpx_constant(PARAMETERS,"Item Data",ROOT(2));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(1))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_9_case_1_local_5(PARAMETERS,LIST(1),TERMINAL(2));
NEXTCASEONFAILURE
REPEATFINISH
} else {
}

result = vpx_constant(PARAMETERS,"( \"Cut\" \"Copy\" )",ROOT(3));

result = vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_9_case_1_local_7(PARAMETERS,TERMINAL(3),ROOT(4));

result = vpx_constant(PARAMETERS,"( \"Clear\" \"-\" )",ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP__28_join_29_,2,1,TERMINAL(4),TERMINAL(5),ROOT(6));

result = vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_9_case_1_local_10(PARAMETERS,TERMINAL(6),TERMINAL(1),ROOT(7));

result = vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_9_case_1_local_11(PARAMETERS,TERMINAL(7),TERMINAL(1),ROOT(8));

result = vpx_constant(PARAMETERS,"( Duplicate )",ROOT(9));

result = vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_9_case_1_local_13(PARAMETERS,TERMINAL(8),ROOT(10));

result = vpx_call_primitive(PARAMETERS,VPLP__28_join_29_,3,1,TERMINAL(8),TERMINAL(10),TERMINAL(9),ROOT(11));

result = kSuccess;

OUTPUT(0,TERMINAL(11))
FOOTER(12)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_9_case_2_local_4_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_9_case_2_local_4_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(0),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP__3D_,2,0,TERMINAL(2),TERMINAL(1));
FAILONFAILURE

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_9_case_2_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_9_case_2_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"List Data",ROOT(1));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(0))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_9_case_2_local_4_case_1_local_3(PARAMETERS,LIST(0),TERMINAL(1));
NEXTCASEONFAILURE
REPEATFINISH
} else {
}

result = vpx_constant(PARAMETERS,"12345678",ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_scrap,1,2,TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
NEXTCASEONSUCCESS

result = vpx_constant(PARAMETERS,"( \"Paste\" )",ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTER(6)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_9_case_2_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_9_case_2_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"(  )",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_9_case_2_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_9_case_2_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_9_case_2_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_9_case_2_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_9_case_2_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_9_case_2_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Get_20_Value_20_Clipboard(PARAMETERS,ROOT(2));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"\'EDpv\'",ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Can_20_Do_3F_,3,0,TERMINAL(2),TERMINAL(3),TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"Paste Value",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_attach_2D_r,2,1,TERMINAL(0),TERMINAL(4),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTER(6)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_9_case_2_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_9_case_2_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(2)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_9_case_2_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_9_case_2_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_9_case_2_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_9_case_2_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_9_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_9_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Select_20_Values,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"(  )",TERMINAL(1));
NEXTCASEONSUCCESS

result = vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_9_case_2_local_4(PARAMETERS,TERMINAL(1),ROOT(2));

result = vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_9_case_2_local_5(PARAMETERS,TERMINAL(2),TERMINAL(1),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_9_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_9_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( )",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_9_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_9_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_9_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_10_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_10_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"( )",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP__28_join_29_,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_10_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_10_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"(  )",TERMINAL(1));
NEXTCASEONSUCCESS

result = vpx_constant(PARAMETERS,"( \"-\" )",ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP__28_join_29_,3,1,TERMINAL(0),TERMINAL(2),TERMINAL(1),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_10_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_10_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(2)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_10_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
if(vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_10_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_10_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_11(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_11(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADERWITHNONE(7)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_To_20_CFStringRef(PARAMETERS,TERMINAL(0),ROOT(2));

result = vpx_constant(PARAMETERS,"0",ROOT(3));

PUTINTEGER(AppendMenuItemTextWithCFString( GETPOINTER(0,OpaqueMenuRef,*,ROOT(5),TERMINAL(1)),GETCONSTPOINTER(__CFString,*,TERMINAL(2)),GETINTEGER(TERMINAL(3)),GETINTEGER(TERMINAL(3)),GETPOINTER(2,unsigned short,*,ROOT(6),NONE)),4);
result = kSuccess;

CFRelease( GETCONSTPOINTER(void,*,TERMINAL(2)));
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASEWITHNONE(7)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3)
{
HEADER(11)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = vpx_constant(PARAMETERS,"NULL",ROOT(2));

result = vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_4(PARAMETERS,ROOT(3));

result = vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_5(PARAMETERS,TERMINAL(0),ROOT(4));
FAILONFAILURE

result = vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_6(PARAMETERS,TERMINAL(0),ROOT(5));
FAILONFAILURE

result = vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_7(PARAMETERS,TERMINAL(0),TERMINAL(3),ROOT(6));

result = vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_8(PARAMETERS,TERMINAL(4),TERMINAL(6),TERMINAL(5),ROOT(7));

result = vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_9(PARAMETERS,TERMINAL(0),ROOT(8));

result = vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_10(PARAMETERS,TERMINAL(7),TERMINAL(8),ROOT(9));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(9))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create_case_1_local_11(PARAMETERS,LIST(9),TERMINAL(3));
REPEATFINISH
} else {
}

result = vpx_extconstant(PARAMETERS,kCMHelpItemRemoveHelp,ROOT(10));

result = kSuccess;

OUTPUT(0,TERMINAL(10))
OUTPUT(1,TERMINAL(1))
OUTPUT(2,TERMINAL(2))
OUTPUT(3,TERMINAL(3))
FOOTERSINGLECASE(11)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"3",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_extconstant(PARAMETERS,kCMMenuItemSelected,ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(0))
OUTPUT(1,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(1))
OUTPUT(1,TERMINAL(0))
FOOTER(2)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_2_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1))
vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_2_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1);
return outcome;
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"0",TERMINAL(1));
NEXTCASEONSUCCESS

PUTPOINTER(OpaqueMenuRef,*,GetMenuHandle( GETINTEGER(TERMINAL(1))),2);
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
NEXTCASEONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"0",TERMINAL(1));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(2)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_4_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_4_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
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

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
if(vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_4_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

PUTINTEGER(CopyMenuItemTextAsCFString( GETPOINTER(0,OpaqueMenuRef,*,ROOT(3),TERMINAL(0)),GETINTEGER(TERMINAL(1)),GETPOINTER(0,__CFString,**,ROOT(4),NONE)),2);
result = kSuccess;

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_method_From_20_CFStringRef(PARAMETERS,TERMINAL(4),ROOT(5));

CFRelease( GETCONSTPOINTER(void,*,TERMINAL(4)));
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTERWITHNONE(6)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"\"",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_1_local_3_case_1_local_6_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_1_local_3_case_1_local_6_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"Item Data",TERMINAL(1));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(2)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_1_local_3_case_1_local_6_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_1_local_3_case_1_local_6_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"List Data",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(3),ROOT(4));

result = vpx_match(PARAMETERS,"Item Data",TERMINAL(4));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(5)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_1_local_3_case_1_local_6_case_1_local_3_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_1_local_3_case_1_local_6_case_1_local_3_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;
FAILONSUCCESS

OUTPUT(0,NONE)
FOOTERWITHNONE(1)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_1_local_3_case_1_local_6_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_1_local_3_case_1_local_6_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_1_local_3_case_1_local_6_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_1_local_3_case_1_local_6_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_1_local_3_case_1_local_6_case_1_local_3_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_1_local_3_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_1_local_3_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Value,1,1,TERMINAL(0),ROOT(2));

result = vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_1_local_3_case_1_local_6_case_1_local_3(PARAMETERS,TERMINAL(2),ROOT(3));
FAILONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(5),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP__28_in_29_,2,1,TERMINAL(1),TERMINAL(6),ROOT(7));

result = vpx_match(PARAMETERS,"0",TERMINAL(7));
FAILONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(0))
OUTPUT(1,TERMINAL(5))
FOOTERSINGLECASE(8)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Select_20_List,1,1,TERMINAL(0),ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP__28_length_29_,1,1,TERMINAL(1),ROOT(2));

result = vpx_match(PARAMETERS,"1",TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"( \"Universal Data\" )",ROOT(3));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(1))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_1_local_3_case_1_local_6(PARAMETERS,LIST(1),TERMINAL(3),ROOT(4),ROOT(5));
NEXTCASEONFAILURE
REPEATFINISH
} else {
ROOTNULL(4,NULL)
ROOTNULL(5,NULL)
}

result = kSuccess;

OUTPUT(0,TERMINAL(4))
OUTPUT(1,TERMINAL(5))
FOOTER(6)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
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

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1))
vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1);
return outcome;
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Grandparent_20_Helper,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
FAILONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(1),ROOT(2));

result = vpx_match(PARAMETERS,"Class Data",TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"( \"Constructor\" \"Destructor\" \"Editor\" \"Tool\" NULL NULL )",ROOT(3));

result = vpx_constant(PARAMETERS,"( TRUE TRUE FALSE FALSE FALSE FALSE )",ROOT(4));

result = vpx_constant(PARAMETERS,"( ( 1 1 ) ( 1 0 ) ( 2 2 ) ( 0 0 ) NULL NULL )",ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
OUTPUT(1,TERMINAL(5))
OUTPUT(2,TERMINAL(3))
OUTPUT(3,TERMINAL(1))
FOOTER(6)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( FALSE TRUE FALSE FALSE )",ROOT(1));

result = vpx_constant(PARAMETERS,"( \"Tool\" \"MAIN\" NULL NULL )",ROOT(2));

result = vpx_constant(PARAMETERS,"( ( 0 0 ) ( 1 1 ) NULL NULL )",ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Project_20_Data,1,1,TERMINAL(0),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
OUTPUT(1,TERMINAL(3))
OUTPUT(2,TERMINAL(2))
OUTPUT(3,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_1_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1,root2,root3))
vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_1_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1,root2,root3);
return outcome;
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2)
{
HEADER(12)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Value,1,1,TERMINAL(0),ROOT(4));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(4));
NEXTCASEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_string_3F_,1,0,TERMINAL(4));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP__28_in_29_,2,1,TERMINAL(3),TERMINAL(4),ROOT(5));

result = vpx_match(PARAMETERS,"0",TERMINAL(5));
NEXTCASEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_detach_2D_nth,2,2,TERMINAL(3),TERMINAL(5),ROOT(6),ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP_detach_2D_nth,2,2,TERMINAL(2),TERMINAL(5),ROOT(8),ROOT(9));

result = vpx_call_primitive(PARAMETERS,VPLP_detach_2D_nth,2,2,TERMINAL(1),TERMINAL(5),ROOT(10),ROOT(11));

result = kSuccess;

OUTPUT(0,TERMINAL(10))
OUTPUT(1,TERMINAL(8))
OUTPUT(2,TERMINAL(6))
FOOTER(12)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(1))
OUTPUT(1,TERMINAL(2))
OUTPUT(2,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_1_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0,root1,root2))
vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_1_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0,root1,root2);
return outcome;
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(2));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Universals,1,1,TERMINAL(0),ROOT(3));

result = vpx_constant(PARAMETERS,"Text",ROOT(4));

result = vpx_method_Find_20_Instance(PARAMETERS,TERMINAL(3),TERMINAL(4),TERMINAL(1),ROOT(5),ROOT(6));

result = vpx_match(PARAMETERS,"0",TERMINAL(5));
TERMINATEONSUCCESS

result = vpx_constant(PARAMETERS,"NULL",ROOT(7));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Value,2,0,TERMINAL(6),TERMINAL(7));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Send_20_Refresh,1,0,TERMINAL(6));

result = kSuccess;

FOOTERSINGLECASE(8)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_1_local_10_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_1_local_10_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
TERMINATEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,2,TERMINAL(1),ROOT(2),ROOT(3));

result = kSuccess;

FOOTER(4)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_1_local_10_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_1_local_10_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_1_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_1_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_1_local_10_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_1_local_10_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_1_local_13(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_1_local_13(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex)
{
HEADERWITHNONE(1)
result = kSuccess;

result = vpx_method_Get_20_Application(PARAMETERS,ROOT(0));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Install_20_Tools,2,0,TERMINAL(0),NONE);

result = kSuccess;

FOOTERSINGLECASEWITHNONE(1)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3)
{
HEADER(16)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_match(PARAMETERS,"2242",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_1_local_3(PARAMETERS,TERMINAL(0),ROOT(4),ROOT(5));
TERMINATEONFAILURE

result = vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_1_local_4(PARAMETERS,TERMINAL(5),ROOT(6),ROOT(7),ROOT(8),ROOT(9));
TERMINATEONFAILURE

result = vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_1_local_5(PARAMETERS,TERMINAL(5),TERMINAL(6),TERMINAL(7),TERMINAL(8),ROOT(10),ROOT(11),ROOT(12));

result = vpx_method__28_Safe_20_Get_29_(PARAMETERS,TERMINAL(12),TERMINAL(2),ROOT(13));
TERMINATEONFAILURE

result = vpx_method__28_Safe_20_Get_29_(PARAMETERS,TERMINAL(10),TERMINAL(2),ROOT(14));
TERMINATEONFAILURE

result = vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_1_local_8(PARAMETERS,TERMINAL(9),TERMINAL(13),TERMINAL(14));

result = vpx_method__28_Safe_20_Get_29_(PARAMETERS,TERMINAL(11),TERMINAL(2),ROOT(15));
TERMINATEONFAILURE

result = vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_1_local_10(PARAMETERS,TERMINAL(5),TERMINAL(15));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Value,2,0,TERMINAL(5),TERMINAL(13));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Send_20_Refresh,1,0,TERMINAL(4));

result = vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_1_local_13(PARAMETERS);

result = kSuccess;

FOOTER(16)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_2_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_2_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"New \"",ROOT(2));

result = vpx_method__22_Prefix_22_(PARAMETERS,TERMINAL(1),TERMINAL(2));
FAILONFAILURE

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_2_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_2_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"1",TERMINAL(0));
NEXTCASEONFAILURE

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_2_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_2_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_2_local_2_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_2_local_2_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_2_local_3_case_1_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_2_local_3_case_1_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(0),ROOT(2));

result = vpx_match(PARAMETERS,"List Data",TERMINAL(2));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(0))
OUTPUT(1,TERMINAL(1))
FOOTER(3)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_2_local_3_case_1_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_2_local_3_case_1_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(0),ROOT(2));

result = vpx_match(PARAMETERS,"Item Data",TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(4),ROOT(5));

result = vpx_match(PARAMETERS,"List Data",TERMINAL(5));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Owner,TERMINAL(1),ROOT(6),ROOT(7));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
OUTPUT(1,TERMINAL(7))
FOOTER(8)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_2_local_3_case_1_local_7_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_2_local_3_case_1_local_7_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADERWITHNONE(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;
FAILONSUCCESS

OUTPUT(0,NONE)
OUTPUT(1,NONE)
FOOTERWITHNONE(2)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_2_local_3_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_2_local_3_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_2_local_3_case_1_local_7_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1))
if(vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_2_local_3_case_1_local_7_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1))
vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_2_local_3_case_1_local_7_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1);
return outcome;
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_2_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_2_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(7)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Select_20_List,1,1,TERMINAL(0),ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP__28_length_29_,1,1,TERMINAL(1),ROOT(2));

result = vpx_match(PARAMETERS,"1",TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,1,TERMINAL(1),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Value,1,1,TERMINAL(3),ROOT(4));

result = vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_2_local_3_case_1_local_7(PARAMETERS,TERMINAL(4),TERMINAL(3),ROOT(5),ROOT(6));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(5))
OUTPUT(1,TERMINAL(6))
FOOTER(7)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_2_local_3_case_2_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_2_local_3_case_2_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"List Data",TERMINAL(1));
TERMINATEONSUCCESS

result = vpx_match(PARAMETERS,"VPL Data",TERMINAL(1));
TERMINATEONSUCCESS

result = kSuccess;
FAILONSUCCESS

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_2_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_2_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Window,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
NEXTCASEONSUCCESS

result = vpx_get(PARAMETERS,kVPXValue_Data,TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_2_local_3_case_2_local_5(PARAMETERS,TERMINAL(3));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Root_20_Data_20_Item,TERMINAL(0),ROOT(4),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
OUTPUT(1,TERMINAL(5))
FOOTER(6)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_2_local_3_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_2_local_3_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
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

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_2_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_2_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_2_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1))
if(vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_2_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1))
vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_2_local_3_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1);
return outcome;
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_2_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_2_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(0));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Force_20_Reinstall,1,0,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_2_local_8_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_2_local_8_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Value,1,1,TERMINAL(0),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP__3D_,2,0,TERMINAL(2),TERMINAL(1));
NEXTCASEONFAILURE

result = kSuccess;
FINISHONSUCCESS

OUTPUT(0,TERMINAL(0))
FOOTER(3)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_2_local_8_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_2_local_8_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
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

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_2_local_8_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_2_local_8_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_2_local_8_case_1_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_2_local_8_case_1_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_2_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_2_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
TERMINATEONSUCCESS

result = vpx_get(PARAMETERS,kVPXValue_Content,TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Owner,TERMINAL(0),ROOT(4),ROOT(5));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(3))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_2_local_8_case_1_local_5(PARAMETERS,LIST(3),TERMINAL(5),ROOT(6));
REPEATFINISH
} else {
ROOTNULL(6,NULL)
}

result = vpx_match(PARAMETERS,"NULL",TERMINAL(6));
TERMINATEONSUCCESS

result = vpx_constant(PARAMETERS,"\'name\'",ROOT(7));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Databrowser,1,1,TERMINAL(1),ROOT(8));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(8));
TERMINATEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Select_20_List,2,0,TERMINAL(8),TERMINAL(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Edit_20_Item,2,0,TERMINAL(6),TERMINAL(7));

result = kSuccess;

FOOTERSINGLECASE(9)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_2_local_2(PARAMETERS,TERMINAL(2),TERMINAL(3));
NEXTCASEONFAILURE

result = vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_2_local_3(PARAMETERS,TERMINAL(0),ROOT(4),ROOT(5));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_New_20_Element,1,1,TERMINAL(4),ROOT(6));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Refresh_20_Data,1,0,TERMINAL(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Make_20_Dirty,1,0,TERMINAL(6));

result = vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_2_local_7(PARAMETERS,TERMINAL(5));

result = vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_2_local_8(PARAMETERS,TERMINAL(6),TERMINAL(5));

result = kSuccess;

FOOTER(7)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_3_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_3_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"Run \"",ROOT(1));

result = vpx_method__22_Prefix_22_(PARAMETERS,TERMINAL(0),TERMINAL(1));
FAILONFAILURE

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_3_local_3_case_1_local_10_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_3_local_3_case_1_local_10_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"Item Data",TERMINAL(1));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(2)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_3_local_3_case_1_local_10_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_3_local_3_case_1_local_10_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"List Data",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(3),ROOT(4));

result = vpx_match(PARAMETERS,"Item Data",TERMINAL(4));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(5)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_3_local_3_case_1_local_10_case_1_local_2_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_3_local_3_case_1_local_10_case_1_local_2_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;
FAILONSUCCESS

OUTPUT(0,NONE)
FOOTERWITHNONE(1)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_3_local_3_case_1_local_10_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_3_local_3_case_1_local_10_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_3_local_3_case_1_local_10_case_1_local_2_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_3_local_3_case_1_local_10_case_1_local_2_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_3_local_3_case_1_local_10_case_1_local_2_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_3_local_3_case_1_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_3_local_3_case_1_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_3_local_3_case_1_local_10_case_1_local_2(PARAMETERS,TERMINAL(0),ROOT(2));
FAILONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(4),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP__28_in_29_,2,1,TERMINAL(1),TERMINAL(5),ROOT(6));

result = vpx_match(PARAMETERS,"0",TERMINAL(6));
FAILONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(7)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_3_local_3_case_1_local_12(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_3_local_3_case_1_local_12(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADERWITHNONE(13)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = vpx_get(PARAMETERS,kVPXValue_Record,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Project_20_Data,1,1,TERMINAL(0),ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(4),ROOT(5),ROOT(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Class_20_Instance,2,1,TERMINAL(6),TERMINAL(3),ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(7),TERMINAL(1),ROOT(8));

result = vpx_instantiate(PARAMETERS,kVPXClass_Set_20_Instance_20_Task,1,1,NONE,ROOT(9));

result = vpx_set(PARAMETERS,kVPXValue_Class,TERMINAL(9),TERMINAL(0),ROOT(10));

result = vpx_constant(PARAMETERS,"NULL",ROOT(11));

result = vpx_set(PARAMETERS,kVPXValue_Instance,TERMINAL(10),TERMINAL(11),ROOT(12));

result = kSuccess;

OUTPUT(0,TERMINAL(8))
OUTPUT(1,TERMINAL(9))
FOOTERSINGLECASEWITHNONE(13)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_3_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1,V_Object *root2);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_3_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1,V_Object *root2)
{
HEADER(13)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Select_20_List,1,1,TERMINAL(0),ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP__28_length_29_,1,1,TERMINAL(1),ROOT(2));

result = vpx_match(PARAMETERS,"1",TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,1,TERMINAL(1),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Value,1,1,TERMINAL(3),ROOT(4));

result = vpx_constant(PARAMETERS,"( \"Class Data\" \"Attribute Data\" \"Class Attribute Data\" \"Persistent Data\" )",ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,1,1,TERMINAL(4),ROOT(6));

result = vpx_constant(PARAMETERS,"( \"Class Data\" )",ROOT(7));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(6))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_3_local_3_case_1_local_10(PARAMETERS,LIST(6),TERMINAL(7),ROOT(8));
NEXTCASEONFAILURE
REPEATFINISH
} else {
ROOTNULL(8,NULL)
}

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(8),ROOT(9),ROOT(10));

result = vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_3_local_3_case_1_local_12(PARAMETERS,TERMINAL(10),ROOT(11),ROOT(12));

result = kSuccess;

OUTPUT(0,TERMINAL(10))
OUTPUT(1,TERMINAL(11))
OUTPUT(2,TERMINAL(12))
FOOTER(13)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_3_local_3_case_2_local_9_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_3_local_3_case_2_local_9_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"Item Data",TERMINAL(1));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(2)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_3_local_3_case_2_local_9_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_3_local_3_case_2_local_9_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"List Data",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(3),ROOT(4));

result = vpx_match(PARAMETERS,"Item Data",TERMINAL(4));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(5)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_3_local_3_case_2_local_9_case_1_local_2_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_3_local_3_case_2_local_9_case_1_local_2_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;
FAILONSUCCESS

OUTPUT(0,NONE)
FOOTERWITHNONE(1)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_3_local_3_case_2_local_9_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_3_local_3_case_2_local_9_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_3_local_3_case_2_local_9_case_1_local_2_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_3_local_3_case_2_local_9_case_1_local_2_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_3_local_3_case_2_local_9_case_1_local_2_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_3_local_3_case_2_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_3_local_3_case_2_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_3_local_3_case_2_local_9_case_1_local_2(PARAMETERS,TERMINAL(0),ROOT(2));
FAILONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(4),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP__28_in_29_,2,1,TERMINAL(1),TERMINAL(5),ROOT(6));

result = vpx_match(PARAMETERS,"0",TERMINAL(6));
FAILONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(7)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_3_local_3_case_2_local_11(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1,V_Object *root2);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_3_local_3_case_2_local_11(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1,V_Object *root2)
{
HEADERWITHNONE(18)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Value_20_Address,1,1,TERMINAL(0),ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Project_20_Data,1,1,TERMINAL(0),ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Classes,1,1,TERMINAL(3),ROOT(5));

result = vpx_constant(PARAMETERS,"Name",ROOT(6));

result = vpx_constant(PARAMETERS,"type",ROOT(7));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Value_20_Data,3,1,TERMINAL(4),TERMINAL(1),TERMINAL(7),ROOT(8));

result = vpx_match(PARAMETERS,"instance",TERMINAL(8));
FAILONFAILURE

result = vpx_constant(PARAMETERS,"name",ROOT(9));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Value_20_Data,3,1,TERMINAL(4),TERMINAL(1),TERMINAL(9),ROOT(10));

result = vpx_method_Find_20_Instance(PARAMETERS,TERMINAL(5),TERMINAL(6),TERMINAL(10),ROOT(11),ROOT(12));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(12));
FAILONSUCCESS

result = vpx_constant(PARAMETERS,"NULL",ROOT(13));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(1),TERMINAL(13),ROOT(14));

result = vpx_instantiate(PARAMETERS,kVPXClass_Set_20_Instance_20_Task,1,1,NONE,ROOT(15));

result = vpx_set(PARAMETERS,kVPXValue_Class,TERMINAL(15),TERMINAL(12),ROOT(16));

result = vpx_set(PARAMETERS,kVPXValue_Instance,TERMINAL(16),TERMINAL(1),ROOT(17));

result = kSuccess;

OUTPUT(0,TERMINAL(12))
OUTPUT(1,TERMINAL(14))
OUTPUT(2,TERMINAL(15))
FOOTERSINGLECASEWITHNONE(18)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_3_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1,V_Object *root2);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_3_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1,V_Object *root2)
{
HEADER(13)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Select_20_List,1,1,TERMINAL(0),ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP__28_length_29_,1,1,TERMINAL(1),ROOT(2));

result = vpx_match(PARAMETERS,"1",TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,1,TERMINAL(1),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Value,1,1,TERMINAL(3),ROOT(4));

result = vpx_constant(PARAMETERS,"( \"Attribute Data\" \"Class Attribute Data\" \"Persistent Data\" )",ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,1,1,TERMINAL(4),ROOT(6));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(6))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_3_local_3_case_2_local_9(PARAMETERS,LIST(6),TERMINAL(5),ROOT(7));
NEXTCASEONFAILURE
REPEATFINISH
} else {
ROOTNULL(7,NULL)
}

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(7),ROOT(8),ROOT(9));

result = vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_3_local_3_case_2_local_11(PARAMETERS,TERMINAL(9),ROOT(10),ROOT(11),ROOT(12));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(10))
OUTPUT(1,TERMINAL(11))
OUTPUT(2,TERMINAL(12))
FOOTER(13)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_3_local_3_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1,V_Object *root2);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_3_local_3_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1,V_Object *root2)
{
HEADERWITHNONE(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;
FAILONSUCCESS

OUTPUT(0,NONE)
OUTPUT(1,NONE)
OUTPUT(2,NONE)
FOOTERWITHNONE(1)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_3_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1,V_Object *root2);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_3_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1,V_Object *root2)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_3_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1,root2))
if(vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_3_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1,root2))
vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_3_local_3_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1,root2);
return outcome;
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_3_local_4_case_1_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_3_local_4_case_1_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Value,1,1,TERMINAL(2),ROOT(3));

result = vpx_match(PARAMETERS,"Editor",TERMINAL(3));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(4)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_3_local_4_case_1_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_3_local_4_case_1_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

OUTPUT(0,NONE)
FOOTERWITHNONE(1)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_3_local_4_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_3_local_4_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_3_local_4_case_1_local_7_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_3_local_4_case_1_local_7_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_3_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_3_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(8)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Super_20_Instance,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
FINISHONSUCCESS

result = vpx_constant(PARAMETERS,"Universal Data",ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(0),TERMINAL(3),ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(4),ROOT(5),ROOT(6));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(6))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_3_local_4_case_1_local_7(PARAMETERS,LIST(6),ROOT(7));
LISTROOT(7,0)
REPEATFINISH
LISTROOTFINISH(7,0)
LISTROOTEND
} else {
ROOTEMPTY(7)
}

result = kSuccess;

OUTPUT(0,TERMINAL(2))
OUTPUT(1,TERMINAL(7))
FOOTERSINGLECASE(8)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3)
{
HEADER(13)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_3_local_2(PARAMETERS,TERMINAL(3));
NEXTCASEONFAILURE

result = vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_3_local_3(PARAMETERS,TERMINAL(0),ROOT(4),ROOT(5),ROOT(6));
NEXTCASEONFAILURE

LISTROOTBEGIN(1)
REPEATBEGIN
LOOPTERMINALBEGIN(1)
LOOPTERMINAL(0,4,7)
result = vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_3_local_4(PARAMETERS,LOOP(0),ROOT(7),ROOT(8));
LISTROOT(8,0)
REPEATFINISH
LISTROOTFINISH(8,0)
LISTROOTEND

result = vpx_method__28_Flatten_29_(PARAMETERS,TERMINAL(8),ROOT(9));

result = vpx_match(PARAMETERS,"( )",TERMINAL(9));
NEXTCASEONSUCCESS

result = vpx_method__28_Safe_20_Get_29_(PARAMETERS,TERMINAL(9),TERMINAL(2),ROOT(10));
NEXTCASEONFAILURE

result = vpx_match(PARAMETERS,"NULL",TERMINAL(10));
NEXTCASEONSUCCESS

result = vpx_constant(PARAMETERS,"FALSE",ROOT(11));

result = vpx_constant(PARAMETERS,"2",ROOT(12));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Execute,5,0,TERMINAL(10),TERMINAL(5),TERMINAL(12),TERMINAL(6),TERMINAL(11));
TERMINATEONFAILURE

result = kSuccess;

FOOTER(13)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_4_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_4_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"Cut",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_HIC_20_Edit_20_Cut,1,0,TERMINAL(0));

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_4_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_4_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"Copy",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_HIC_20_Edit_20_Copy,1,0,TERMINAL(0));

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_4_local_2_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_4_local_2_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"Paste",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_HIC_20_Edit_20_Paste,1,0,TERMINAL(0));

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_4_local_2_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_4_local_2_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"Clear",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_HIC_20_Edit_20_Clear,1,0,TERMINAL(0));

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_4_local_2_case_5(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_4_local_2_case_5(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"Duplicate",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_HIC_20_Edit_20_Duplicate,1,0,TERMINAL(0));

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_4_local_2_case_6(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_4_local_2_case_6(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"Copy Value",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_HIC_20_Edit_20_Copy_20_Value,1,0,TERMINAL(0));

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_4_local_2_case_7(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_4_local_2_case_7(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"Paste Value",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_HIC_20_Edit_20_Paste_20_Value,1,0,TERMINAL(0));

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_4_local_2_case_8(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_4_local_2_case_8(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;
FAILONSUCCESS

FOOTER(2)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_4_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_4_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_4_local_2_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
if(vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_4_local_2_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
if(vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_4_local_2_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
if(vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_4_local_2_case_4(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
if(vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_4_local_2_case_5(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
if(vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_4_local_2_case_6(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
if(vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_4_local_2_case_7(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_4_local_2_case_8(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_4_local_2(PARAMETERS,TERMINAL(0),TERMINAL(3));
NEXTCASEONFAILURE

result = kSuccess;

FOOTER(4)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_5(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_5(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_method_Debug_20_Console(PARAMETERS,TERMINAL(3));

result = kSuccess;
FAILONSUCCESS

FOOTER(4)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3))
if(vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3))
if(vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3))
if(vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_4(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3))
vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6_case_5(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3);
return outcome;
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
INPUT(4,4)
result = kSuccess;

result = vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_2(PARAMETERS,TERMINAL(2),TERMINAL(4),ROOT(5),ROOT(6));

result = vpx_extmatch(PARAMETERS,kCMMenuItemSelected,TERMINAL(6));
NEXTCASEONFAILURE

result = vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_4(PARAMETERS,TERMINAL(1),TERMINAL(3),ROOT(7));

result = vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_5(PARAMETERS,TERMINAL(7),TERMINAL(5),ROOT(8));

result = vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1_local_6(PARAMETERS,TERMINAL(0),TERMINAL(3),TERMINAL(5),TERMINAL(8));
NEXTCASEONFAILURE

result = kSuccess;

FOOTER(9)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_2_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_2_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,kCMMenuItemSelected,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"Selected Item",ROOT(2));

result = vpx_method_Debug_20_OSError(PARAMETERS,TERMINAL(2),TERMINAL(1));

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_2_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_2_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Selection Type",ROOT(2));

result = vpx_method_Debug_20_OSError(PARAMETERS,TERMINAL(2),TERMINAL(0));

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_2_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_2_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_2_local_2_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_2_local_2_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
INPUT(4,4)
result = kSuccess;

result = vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_2_local_2(PARAMETERS,TERMINAL(2),TERMINAL(4));

result = kSuccess;

FOOTER(5)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,terminal4))
vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,terminal4);
return outcome;
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,kHICommandClear,TERMINAL(0));
TERMINATEONSUCCESS

result = vpx_extmatch(PARAMETERS,kHICommandCopy,TERMINAL(0));
TERMINATEONSUCCESS

result = vpx_extmatch(PARAMETERS,kHICommandCut,TERMINAL(0));
TERMINATEONSUCCESS

result = vpx_match(PARAMETERS,"\'Trsh\'",TERMINAL(0));
TERMINATEONSUCCESS

result = vpx_match(PARAMETERS,"\'EDdu\'",TERMINAL(0));
TERMINATEONSUCCESS

result = kSuccess;
FAILONSUCCESS

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(0),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP__3D_,2,0,TERMINAL(2),TERMINAL(1));
FAILONFAILURE

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Project_20_Databrowser_20_Control_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2_case_1_local_2(PARAMETERS,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Select_20_Values,1,1,TERMINAL(0),ROOT(2));

result = vpx_match(PARAMETERS,"(  )",TERMINAL(2));
FAILONSUCCESS

result = vpx_constant(PARAMETERS,"Item Data",ROOT(3));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(2))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Project_20_Databrowser_20_Control_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2_case_1_local_6(PARAMETERS,LIST(2),TERMINAL(3));
NEXTCASEONFAILURE
REPEATFINISH
} else {
}

result = kSuccess;

FOOTER(4)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2_case_2_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2_case_2_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,kHICommandPaste,TERMINAL(0));
TERMINATEONSUCCESS

result = kSuccess;
FAILONSUCCESS

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Project_20_Databrowser_20_Control_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2_case_2_local_2(PARAMETERS,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Select_20_Values,1,1,TERMINAL(0),ROOT(2));

result = vpx_match(PARAMETERS,"(  )",TERMINAL(2));
FAILONSUCCESS

result = vpx_constant(PARAMETERS,"12345678",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_scrap,1,2,TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(4));
FAILONSUCCESS

result = kSuccess;

FOOTER(6)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2_case_3_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2_case_3_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"\'EDmt\'",TERMINAL(0));
TERMINATEONSUCCESS

result = kSuccess;
FAILONSUCCESS

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2_case_3_local_5_case_1_local_3_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2_case_3_local_5_case_1_local_3_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"Item Data",TERMINAL(1));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(2)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2_case_3_local_5_case_1_local_3_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2_case_3_local_5_case_1_local_3_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;
FAILONSUCCESS

OUTPUT(0,NONE)
FOOTERWITHNONE(1)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2_case_3_local_5_case_1_local_3_case_1_local_2_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2_case_3_local_5_case_1_local_3_case_1_local_2_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"List Data",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(3),ROOT(4));

result = vpx_match(PARAMETERS,"Item Data",TERMINAL(4));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(5)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2_case_3_local_5_case_1_local_3_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2_case_3_local_5_case_1_local_3_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Databrowser_20_Control_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2_case_3_local_5_case_1_local_3_case_1_local_2_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_Project_20_Databrowser_20_Control_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2_case_3_local_5_case_1_local_3_case_1_local_2_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Project_20_Databrowser_20_Control_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2_case_3_local_5_case_1_local_3_case_1_local_2_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2_case_3_local_5_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2_case_3_local_5_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Project_20_Databrowser_20_Control_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2_case_3_local_5_case_1_local_3_case_1_local_2(PARAMETERS,TERMINAL(0),ROOT(2));
FAILONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(4),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP__28_in_29_,2,1,TERMINAL(1),TERMINAL(5),ROOT(6));

result = vpx_match(PARAMETERS,"0",TERMINAL(6));
FAILONSUCCESS

result = kSuccess;

FOOTERSINGLECASE(7)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2_case_3_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2_case_3_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( \"Class Data\" \"Universal Data\" \"Persistent Data\" )",ROOT(1));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(0))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Project_20_Databrowser_20_Control_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2_case_3_local_5_case_1_local_3(PARAMETERS,LIST(0),TERMINAL(1));
NEXTCASEONFAILURE
REPEATFINISH
} else {
}

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2_case_3_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2_case_3_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;
FAILONSUCCESS

FOOTER(1)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2_case_3_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2_case_3_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Databrowser_20_Control_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2_case_3_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Project_20_Databrowser_20_Control_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2_case_3_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Project_20_Databrowser_20_Control_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2_case_3_local_2(PARAMETERS,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Select_20_Values,1,1,TERMINAL(0),ROOT(2));

result = vpx_match(PARAMETERS,"(  )",TERMINAL(2));
FAILONSUCCESS

result = vpx_method_Project_20_Databrowser_20_Control_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2_case_3_local_5(PARAMETERS,TERMINAL(2));
FAILONFAILURE

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2_case_4_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2_case_4_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"\'EDcv\'",TERMINAL(0));
TERMINATEONSUCCESS

result = vpx_match(PARAMETERS,"\'EDpv\'",TERMINAL(0));
TERMINATEONSUCCESS

result = kSuccess;
FAILONSUCCESS

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Project_20_Databrowser_20_Control_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2_case_4_local_2(PARAMETERS,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Select_20_Values,1,1,TERMINAL(0),ROOT(2));

result = vpx_match(PARAMETERS,"(  )",TERMINAL(2));
FAILONSUCCESS

result = vpx_method_Get_20_Value_20_Clipboard(PARAMETERS,ROOT(3));
FAILONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Can_20_Do_3F_,3,0,TERMINAL(3),TERMINAL(1),TERMINAL(2));
FAILONFAILURE

result = kSuccess;

FOOTER(4)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2_case_5_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2_case_5_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"\'EDpa\'",TERMINAL(0));
TERMINATEONSUCCESS

result = kSuccess;
FAILONSUCCESS

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2_case_5_local_6_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2_case_5_local_6_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"Item Data",TERMINAL(1));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(2)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2_case_5_local_6_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2_case_5_local_6_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;
FAILONSUCCESS

OUTPUT(0,NONE)
FOOTERWITHNONE(1)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2_case_5_local_6_case_1_local_2_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2_case_5_local_6_case_1_local_2_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"List Data",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(3),ROOT(4));

result = vpx_match(PARAMETERS,"Item Data",TERMINAL(4));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(5)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2_case_5_local_6_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2_case_5_local_6_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Databrowser_20_Control_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2_case_5_local_6_case_1_local_2_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_Project_20_Databrowser_20_Control_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2_case_5_local_6_case_1_local_2_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Project_20_Databrowser_20_Control_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2_case_5_local_6_case_1_local_2_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2_case_5_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2_case_5_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Project_20_Databrowser_20_Control_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2_case_5_local_6_case_1_local_2(PARAMETERS,TERMINAL(0),ROOT(2));
FAILONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(4),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP__28_in_29_,2,1,TERMINAL(1),TERMINAL(5),ROOT(6));

result = vpx_match(PARAMETERS,"0",TERMINAL(6));
FAILONSUCCESS

result = kSuccess;

FOOTERSINGLECASE(7)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2_case_5(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2_case_5(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Project_20_Databrowser_20_Control_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2_case_5_local_2(PARAMETERS,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Select_20_Values,1,1,TERMINAL(0),ROOT(2));

result = vpx_match(PARAMETERS,"(  )",TERMINAL(2));
FAILONSUCCESS

result = vpx_constant(PARAMETERS,"( \"Attribute Data\" \"Class Attribute Data\" )",ROOT(3));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(2))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Project_20_Databrowser_20_Control_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2_case_5_local_6(PARAMETERS,LIST(2),TERMINAL(3));
NEXTCASEONFAILURE
REPEATFINISH
} else {
}

result = kSuccess;

FOOTER(4)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2_case_6(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2_case_6(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;
FAILONSUCCESS

FOOTER(2)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Databrowser_20_Control_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
if(vpx_method_Project_20_Databrowser_20_Control_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
if(vpx_method_Project_20_Databrowser_20_Control_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
if(vpx_method_Project_20_Databrowser_20_Control_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2_case_4(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
if(vpx_method_Project_20_Databrowser_20_Control_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2_case_5(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Project_20_Databrowser_20_Control_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2_case_6(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_CE_20_HICommand_20_Update_20_Status_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_CE_20_HICommand_20_Update_20_Status_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_method_Project_20_Databrowser_20_Control_2F_CE_20_HICommand_20_Update_20_Status_case_1_local_2(PARAMETERS,TERMINAL(0),TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"NULL",ROOT(4));

EnableMenuCommand( GETPOINTER(0,OpaqueMenuRef,*,ROOT(5),TERMINAL(4)),GETINTEGER(TERMINAL(1)));
result = kSuccess;

result = vpx_extconstant(PARAMETERS,noErr,ROOT(6));

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTER(7)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_CE_20_HICommand_20_Update_20_Status_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_CE_20_HICommand_20_Update_20_Status_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0)
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

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_CE_20_HICommand_20_Update_20_Status(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Databrowser_20_Control_2F_CE_20_HICommand_20_Update_20_Status_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0))
vpx_method_Project_20_Databrowser_20_Control_2F_CE_20_HICommand_20_Update_20_Status_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_CE_20_HICommand_20_Process_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_CE_20_HICommand_20_Process_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,kHICommandClear,TERMINAL(0));
TERMINATEONSUCCESS

result = vpx_match(PARAMETERS,"\'TRsh\'",TERMINAL(0));
TERMINATEONSUCCESS

result = kSuccess;
FAILONSUCCESS

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_CE_20_HICommand_20_Process_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_CE_20_HICommand_20_Process_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_method_Project_20_Databrowser_20_Control_2F_CE_20_HICommand_20_Process_case_1_local_2(PARAMETERS,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_HIC_20_Edit_20_Clear,1,0,TERMINAL(0));

result = vpx_extconstant(PARAMETERS,noErr,ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_CE_20_HICommand_20_Process_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_CE_20_HICommand_20_Process_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,kHICommandCopy,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_HIC_20_Edit_20_Copy,1,0,TERMINAL(0));

result = vpx_extconstant(PARAMETERS,noErr,ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_CE_20_HICommand_20_Process_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_CE_20_HICommand_20_Process_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,kHICommandCut,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_HIC_20_Edit_20_Cut,1,0,TERMINAL(0));

result = vpx_extconstant(PARAMETERS,noErr,ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_CE_20_HICommand_20_Process_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_CE_20_HICommand_20_Process_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,kHICommandPaste,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_HIC_20_Edit_20_Paste,1,0,TERMINAL(0));

result = vpx_extconstant(PARAMETERS,noErr,ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_CE_20_HICommand_20_Process_case_5(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_CE_20_HICommand_20_Process_case_5(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_match(PARAMETERS,"\'EDdu\'",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_HIC_20_Edit_20_Duplicate,1,0,TERMINAL(0));

result = vpx_extconstant(PARAMETERS,noErr,ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_CE_20_HICommand_20_Process_case_6(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_CE_20_HICommand_20_Process_case_6(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_match(PARAMETERS,"\'EDmt\'",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_HIC_20_Edit_20_Move_20_To,1,0,TERMINAL(0));

result = vpx_extconstant(PARAMETERS,noErr,ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_CE_20_HICommand_20_Process_case_7(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_CE_20_HICommand_20_Process_case_7(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_match(PARAMETERS,"\'EDpa\'",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_HIC_20_Edit_20_Propagate_20_Attribute,1,0,TERMINAL(0));

result = vpx_extconstant(PARAMETERS,noErr,ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_CE_20_HICommand_20_Process_case_8(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_CE_20_HICommand_20_Process_case_8(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_match(PARAMETERS,"\'EDcv\'",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_HIC_20_Edit_20_Copy_20_Value,1,0,TERMINAL(0));

result = vpx_extconstant(PARAMETERS,noErr,ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_CE_20_HICommand_20_Process_case_9(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_CE_20_HICommand_20_Process_case_9(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_match(PARAMETERS,"\'EDpv\'",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_HIC_20_Edit_20_Paste_20_Value,1,0,TERMINAL(0));

result = vpx_extconstant(PARAMETERS,noErr,ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_CE_20_HICommand_20_Process_case_10(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_CE_20_HICommand_20_Process_case_10(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0)
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

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_CE_20_HICommand_20_Process(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Databrowser_20_Control_2F_CE_20_HICommand_20_Process_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0))
if(vpx_method_Project_20_Databrowser_20_Control_2F_CE_20_HICommand_20_Process_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0))
if(vpx_method_Project_20_Databrowser_20_Control_2F_CE_20_HICommand_20_Process_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0))
if(vpx_method_Project_20_Databrowser_20_Control_2F_CE_20_HICommand_20_Process_case_4(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0))
if(vpx_method_Project_20_Databrowser_20_Control_2F_CE_20_HICommand_20_Process_case_5(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0))
if(vpx_method_Project_20_Databrowser_20_Control_2F_CE_20_HICommand_20_Process_case_6(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0))
if(vpx_method_Project_20_Databrowser_20_Control_2F_CE_20_HICommand_20_Process_case_7(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0))
if(vpx_method_Project_20_Databrowser_20_Control_2F_CE_20_HICommand_20_Process_case_8(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0))
if(vpx_method_Project_20_Databrowser_20_Control_2F_CE_20_HICommand_20_Process_case_9(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0))
vpx_method_Project_20_Databrowser_20_Control_2F_CE_20_HICommand_20_Process_case_10(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_HIC_20_Edit_20_Clear_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_HIC_20_Edit_20_Clear_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADERWITHNONE(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Select_20_List,1,1,TERMINAL(0),ROOT(1));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(1))) ){
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Delete_20_Data,1,0,LIST(1));
REPEATFINISH
} else {
}

result = vpx_method_Get_20_Application(PARAMETERS,ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Install_20_Tools,2,0,TERMINAL(2),NONE);

result = kSuccess;

FOOTERWITHNONE(3)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_HIC_20_Edit_20_Clear_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_HIC_20_Edit_20_Clear_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Select_20_List,1,1,TERMINAL(0),ROOT(1));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(1))) ){
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Delete_20_Data,1,0,LIST(1));
REPEATFINISH
} else {
}

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Window,1,1,TERMINAL(0),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
TERMINATEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Refresh_20_Data,1,0,TERMINAL(2));

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_HIC_20_Edit_20_Clear(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Databrowser_20_Control_2F_HIC_20_Edit_20_Clear_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Project_20_Databrowser_20_Control_2F_HIC_20_Edit_20_Clear_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_HIC_20_Edit_20_Copy(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(7)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Select_20_Values,1,1,TERMINAL(0),ROOT(1));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(1))) ){
LISTROOTBEGIN(2)
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Isolate,1,2,LIST(1),ROOT(2),ROOT(3));
LISTROOT(2,0)
LISTROOT(3,1)
REPEATFINISH
LISTROOTFINISH(2,0)
LISTROOTFINISH(3,1)
LISTROOTEND
} else {
ROOTEMPTY(2)
ROOTEMPTY(3)
}

result = vpx_call_primitive(PARAMETERS,VPLP_object_2D_to_2D_archive,1,2,TERMINAL(2),ROOT(4),ROOT(5));

result = vpx_constant(PARAMETERS,"12345678",ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP_put_2D_scrap,3,0,TERMINAL(5),TERMINAL(6),TERMINAL(4));

if( (repeatLimit = vpx_multiplex(2,TERMINAL(2),TERMINAL(3))) ){
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Integrate,2,0,LIST(2),LIST(3));
REPEATFINISH
} else {
}

result = kSuccess;

FOOTERSINGLECASE(7)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_HIC_20_Edit_20_Cut(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_HIC_20_Edit_20_Copy,1,0,TERMINAL(0));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_HIC_20_Edit_20_Clear,1,0,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_HIC_20_Edit_20_Paste_case_1_local_6_case_1_local_3_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_HIC_20_Edit_20_Paste_case_1_local_6_case_1_local_3_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"List Data",TERMINAL(1));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(2)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_HIC_20_Edit_20_Paste_case_1_local_6_case_1_local_3_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_HIC_20_Edit_20_Paste_case_1_local_6_case_1_local_3_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"Item Data",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(3),ROOT(4));

result = vpx_match(PARAMETERS,"List Data",TERMINAL(4));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(5)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_HIC_20_Edit_20_Paste_case_1_local_6_case_1_local_3_case_1_local_4_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_HIC_20_Edit_20_Paste_case_1_local_6_case_1_local_3_case_1_local_4_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;
FAILONSUCCESS

OUTPUT(0,NONE)
FOOTERWITHNONE(1)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_HIC_20_Edit_20_Paste_case_1_local_6_case_1_local_3_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_HIC_20_Edit_20_Paste_case_1_local_6_case_1_local_3_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Databrowser_20_Control_2F_HIC_20_Edit_20_Paste_case_1_local_6_case_1_local_3_case_1_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_Project_20_Databrowser_20_Control_2F_HIC_20_Edit_20_Paste_case_1_local_6_case_1_local_3_case_1_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Project_20_Databrowser_20_Control_2F_HIC_20_Edit_20_Paste_case_1_local_6_case_1_local_3_case_1_local_4_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_HIC_20_Edit_20_Paste_case_1_local_6_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_HIC_20_Edit_20_Paste_case_1_local_6_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(3),ROOT(4));

result = vpx_method_Project_20_Databrowser_20_Control_2F_HIC_20_Edit_20_Paste_case_1_local_6_case_1_local_3_case_1_local_4(PARAMETERS,TERMINAL(1),ROOT(5));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Helper_20_Name,TERMINAL(5),ROOT(6),ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP_equals,2,0,TERMINAL(7),TERMINAL(4));
NEXTCASEONFAILURE

result = vpx_set(PARAMETERS,kVPXValue_Owner,TERMINAL(3),TERMINAL(2),ROOT(8));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Add_20_To_20_List_20_Data,2,0,TERMINAL(8),TERMINAL(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_After_20_Import,1,0,TERMINAL(8));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Make_20_Dirty,1,0,TERMINAL(8));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Send_20_Refresh,1,0,TERMINAL(5));

result = kSuccess;

FOOTER(9)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_HIC_20_Edit_20_Paste_case_1_local_6_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_HIC_20_Edit_20_Paste_case_1_local_6_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_HIC_20_Edit_20_Paste_case_1_local_6_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_HIC_20_Edit_20_Paste_case_1_local_6_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Databrowser_20_Control_2F_HIC_20_Edit_20_Paste_case_1_local_6_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Project_20_Databrowser_20_Control_2F_HIC_20_Edit_20_Paste_case_1_local_6_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_HIC_20_Edit_20_Paste_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_HIC_20_Edit_20_Paste_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_copy,1,1,TERMINAL(1),ROOT(2));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(0))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Project_20_Databrowser_20_Control_2F_HIC_20_Edit_20_Paste_case_1_local_6_case_1_local_3(PARAMETERS,TERMINAL(2),LIST(0));
REPEATFINISH
} else {
}

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_HIC_20_Edit_20_Paste_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_HIC_20_Edit_20_Paste_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Close,1,0,TERMINAL(1));

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_HIC_20_Edit_20_Paste_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_HIC_20_Edit_20_Paste_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Databrowser_20_Control_2F_HIC_20_Edit_20_Paste_case_1_local_6_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Project_20_Databrowser_20_Control_2F_HIC_20_Edit_20_Paste_case_1_local_6_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_HIC_20_Edit_20_Paste_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_HIC_20_Edit_20_Paste_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex)
{
HEADERWITHNONE(1)
result = kSuccess;

result = vpx_method_Get_20_Application(PARAMETERS,ROOT(0));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Install_20_Tools,2,0,TERMINAL(0),NONE);

result = kSuccess;

FOOTERSINGLECASEWITHNONE(1)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_HIC_20_Edit_20_Paste_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_HIC_20_Edit_20_Paste_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Select_20_Values,1,1,TERMINAL(0),ROOT(1));

result = vpx_constant(PARAMETERS,"12345678",ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_scrap,1,2,TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_archive_2D_to_2D_object,1,1,TERMINAL(3),ROOT(5));
TERMINATEONFAILURE

if( (repeatLimit = vpx_multiplex(1,TERMINAL(5))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Project_20_Databrowser_20_Control_2F_HIC_20_Edit_20_Paste_case_1_local_6(PARAMETERS,TERMINAL(1),LIST(5));
REPEATFINISH
} else {
}

result = vpx_method_Project_20_Databrowser_20_Control_2F_HIC_20_Edit_20_Paste_case_1_local_7(PARAMETERS);

result = kSuccess;

FOOTER(6)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_HIC_20_Edit_20_Paste_case_2_local_6_case_1_local_3_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_HIC_20_Edit_20_Paste_case_2_local_6_case_1_local_3_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"List Data",TERMINAL(1));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(2)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_HIC_20_Edit_20_Paste_case_2_local_6_case_1_local_3_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_HIC_20_Edit_20_Paste_case_2_local_6_case_1_local_3_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"Item Data",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(3),ROOT(4));

result = vpx_match(PARAMETERS,"List Data",TERMINAL(4));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(5)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_HIC_20_Edit_20_Paste_case_2_local_6_case_1_local_3_case_1_local_4_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_HIC_20_Edit_20_Paste_case_2_local_6_case_1_local_3_case_1_local_4_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;
FAILONSUCCESS

OUTPUT(0,NONE)
FOOTERWITHNONE(1)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_HIC_20_Edit_20_Paste_case_2_local_6_case_1_local_3_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_HIC_20_Edit_20_Paste_case_2_local_6_case_1_local_3_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Databrowser_20_Control_2F_HIC_20_Edit_20_Paste_case_2_local_6_case_1_local_3_case_1_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_Project_20_Databrowser_20_Control_2F_HIC_20_Edit_20_Paste_case_2_local_6_case_1_local_3_case_1_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Project_20_Databrowser_20_Control_2F_HIC_20_Edit_20_Paste_case_2_local_6_case_1_local_3_case_1_local_4_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_HIC_20_Edit_20_Paste_case_2_local_6_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_HIC_20_Edit_20_Paste_case_2_local_6_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(3),ROOT(4));

result = vpx_method_Project_20_Databrowser_20_Control_2F_HIC_20_Edit_20_Paste_case_2_local_6_case_1_local_3_case_1_local_4(PARAMETERS,TERMINAL(1),ROOT(5));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Helper_20_Name,TERMINAL(5),ROOT(6),ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP_equals,2,0,TERMINAL(7),TERMINAL(4));
NEXTCASEONFAILURE

result = vpx_set(PARAMETERS,kVPXValue_Owner,TERMINAL(3),TERMINAL(2),ROOT(8));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Add_20_To_20_List_20_Data,2,0,TERMINAL(8),TERMINAL(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_After_20_Import,1,0,TERMINAL(8));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Make_20_Dirty,1,0,TERMINAL(8));

result = kSuccess;

FOOTER(9)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_HIC_20_Edit_20_Paste_case_2_local_6_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_HIC_20_Edit_20_Paste_case_2_local_6_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_HIC_20_Edit_20_Paste_case_2_local_6_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_HIC_20_Edit_20_Paste_case_2_local_6_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Databrowser_20_Control_2F_HIC_20_Edit_20_Paste_case_2_local_6_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Project_20_Databrowser_20_Control_2F_HIC_20_Edit_20_Paste_case_2_local_6_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_HIC_20_Edit_20_Paste_case_2_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_HIC_20_Edit_20_Paste_case_2_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_copy,1,1,TERMINAL(1),ROOT(2));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(0))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Project_20_Databrowser_20_Control_2F_HIC_20_Edit_20_Paste_case_2_local_6_case_1_local_3(PARAMETERS,TERMINAL(2),LIST(0));
REPEATFINISH
} else {
}

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_HIC_20_Edit_20_Paste_case_2_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_HIC_20_Edit_20_Paste_case_2_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Close,1,0,TERMINAL(1));

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_HIC_20_Edit_20_Paste_case_2_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_HIC_20_Edit_20_Paste_case_2_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Databrowser_20_Control_2F_HIC_20_Edit_20_Paste_case_2_local_6_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Project_20_Databrowser_20_Control_2F_HIC_20_Edit_20_Paste_case_2_local_6_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_HIC_20_Edit_20_Paste_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_HIC_20_Edit_20_Paste_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(7)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Select_20_Values,1,1,TERMINAL(0),ROOT(1));

result = vpx_constant(PARAMETERS,"12345678",ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_scrap,1,2,TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_archive_2D_to_2D_object,1,1,TERMINAL(3),ROOT(5));
TERMINATEONFAILURE

if( (repeatLimit = vpx_multiplex(1,TERMINAL(5))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Project_20_Databrowser_20_Control_2F_HIC_20_Edit_20_Paste_case_2_local_6(PARAMETERS,TERMINAL(1),LIST(5));
REPEATFINISH
} else {
}

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Window,1,1,TERMINAL(0),ROOT(6));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(6));
TERMINATEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Refresh_20_Data,1,0,TERMINAL(6));

result = kSuccess;

FOOTER(7)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_HIC_20_Edit_20_Paste(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Databrowser_20_Control_2F_HIC_20_Edit_20_Paste_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Project_20_Databrowser_20_Control_2F_HIC_20_Edit_20_Paste_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_HIC_20_Edit_20_Move_20_To_case_1_local_7_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_HIC_20_Edit_20_Move_20_To_case_1_local_7_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(16)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(1),ROOT(3),ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(2),ROOT(5),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP__28_in_29_,2,1,TERMINAL(4),TERMINAL(0),ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP_detach_2D_nth,2,2,TERMINAL(4),TERMINAL(7),ROOT(8),ROOT(9));

result = vpx_set(PARAMETERS,kVPXValue_List,TERMINAL(3),TERMINAL(8),ROOT(10));

result = vpx_call_primitive(PARAMETERS,VPLP_attach_2D_r,2,1,TERMINAL(6),TERMINAL(9),ROOT(11));

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(9),ROOT(12),ROOT(13));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Make_20_Dirty,1,0,TERMINAL(13));

result = vpx_set(PARAMETERS,kVPXValue_List,TERMINAL(5),TERMINAL(11),ROOT(14));

result = vpx_set(PARAMETERS,kVPXValue_Parent,TERMINAL(9),TERMINAL(14),ROOT(15));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Make_20_Dirty,1,0,TERMINAL(13));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Refresh_20_Editors,1,0,TERMINAL(10));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Refresh_20_Editors,1,0,TERMINAL(14));

result = kSuccess;

FOOTERSINGLECASE(16)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_HIC_20_Edit_20_Move_20_To_case_1_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_HIC_20_Edit_20_Move_20_To_case_1_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Helper_20_Name,TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(1),TERMINAL(5),ROOT(6));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP__3D_,2,0,TERMINAL(3),TERMINAL(6));
NEXTCASEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Send_20_Remove_20_Self,1,0,TERMINAL(2));

result = vpx_method_Project_20_Databrowser_20_Control_2F_HIC_20_Edit_20_Move_20_To_case_1_local_7_case_1_local_7(PARAMETERS,TERMINAL(2),TERMINAL(3),TERMINAL(6));

result = kSuccess;

FOOTER(7)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_HIC_20_Edit_20_Move_20_To_case_1_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_HIC_20_Edit_20_Move_20_To_case_1_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_HIC_20_Edit_20_Move_20_To_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_HIC_20_Edit_20_Move_20_To_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Databrowser_20_Control_2F_HIC_20_Edit_20_Move_20_To_case_1_local_7_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Project_20_Databrowser_20_Control_2F_HIC_20_Edit_20_Move_20_To_case_1_local_7_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_HIC_20_Edit_20_Move_20_To(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADERWITHNONE(5)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Project_20_Data,1,1,TERMINAL(0),ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(1));
TERMINATEONFAILURE

result = vpx_constant(PARAMETERS,"Pick a section to move items into.",ROOT(2));

result = vpx_method_Select_20_Section(PARAMETERS,TERMINAL(1),TERMINAL(2),NONE,ROOT(3));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Select_20_Values,1,1,TERMINAL(0),ROOT(4));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(4))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Project_20_Databrowser_20_Control_2F_HIC_20_Edit_20_Move_20_To_case_1_local_7(PARAMETERS,LIST(4),TERMINAL(3));
REPEATFINISH
} else {
}

result = kSuccess;

FOOTERSINGLECASEWITHNONE(5)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_HIC_20_Edit_20_Duplicate_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_HIC_20_Edit_20_Duplicate_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(7)
INPUT(0,0)
result = kSuccess;

if( (repeatLimit = vpx_multiplex(1,TERMINAL(0))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_get(PARAMETERS,kVPXValue_Parent,LIST(0),ROOT(1),ROOT(2));
LISTROOT(2,0)
REPEATFINISH
LISTROOTFINISH(2,0)
LISTROOTEND
} else {
ROOTNULL(1,NULL)
ROOTEMPTY(2)
}

if( (repeatLimit = vpx_multiplex(1,TERMINAL(0))) ){
LISTROOTBEGIN(2)
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Isolate,1,2,LIST(0),ROOT(3),ROOT(4));
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

result = vpx_call_primitive(PARAMETERS,VPLP_object_2D_to_2D_archive,1,2,TERMINAL(3),ROOT(5),ROOT(6));

if( (repeatLimit = vpx_multiplex(2,TERMINAL(3),TERMINAL(4))) ){
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Integrate,2,0,LIST(3),LIST(4));
REPEATFINISH
} else {
}

result = kSuccess;

OUTPUT(0,TERMINAL(5))
OUTPUT(1,TERMINAL(2))
FOOTERSINGLECASE(7)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_HIC_20_Edit_20_Duplicate_case_1_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_HIC_20_Edit_20_Duplicate_case_1_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(3),ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_Helper_20_Name,TERMINAL(1),ROOT(5),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP_equals,2,0,TERMINAL(6),TERMINAL(4));
NEXTCASEONFAILURE

result = vpx_set(PARAMETERS,kVPXValue_Owner,TERMINAL(3),TERMINAL(2),ROOT(7));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Add_20_To_20_List_20_Data,2,0,TERMINAL(7),TERMINAL(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_After_20_Import,1,0,TERMINAL(7));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Make_20_Dirty,1,0,TERMINAL(7));

result = kSuccess;

FOOTER(8)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_HIC_20_Edit_20_Duplicate_case_1_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_HIC_20_Edit_20_Duplicate_case_1_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_HIC_20_Edit_20_Duplicate_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_HIC_20_Edit_20_Duplicate_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Databrowser_20_Control_2F_HIC_20_Edit_20_Duplicate_case_1_local_7_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Project_20_Databrowser_20_Control_2F_HIC_20_Edit_20_Duplicate_case_1_local_7_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_HIC_20_Edit_20_Duplicate_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_HIC_20_Edit_20_Duplicate_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

if( (repeatLimit = vpx_multiplex(1,TERMINAL(0))) ){
LISTROOTBEGIN(2)
REPEATBEGINWITHCOUNTER
result = vpx_get(PARAMETERS,kVPXValue_Owner,LIST(0),ROOT(1),ROOT(2));
LISTROOT(1,0)
LISTROOT(2,1)
REPEATFINISH
LISTROOTFINISH(1,0)
LISTROOTFINISH(2,1)
LISTROOTEND
} else {
ROOTEMPTY(1)
ROOTEMPTY(2)
}

result = vpx_method__28_Unique_29_(PARAMETERS,TERMINAL(2),ROOT(3));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(3))) ){
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Send_20_Refresh,1,0,LIST(3));
REPEATFINISH
} else {
}

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_HIC_20_Edit_20_Duplicate_case_1_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_HIC_20_Edit_20_Duplicate_case_1_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex)
{
HEADERWITHNONE(1)
result = kSuccess;

result = vpx_method_Get_20_Application(PARAMETERS,ROOT(0));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Install_20_Tools,2,0,TERMINAL(0),NONE);

result = kSuccess;

FOOTERSINGLECASEWITHNONE(1)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_HIC_20_Edit_20_Duplicate_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_HIC_20_Edit_20_Duplicate_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Select_20_List,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"(  )",TERMINAL(1));
TERMINATEONSUCCESS

if( (repeatLimit = vpx_multiplex(1,TERMINAL(1))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Value,1,1,LIST(1),ROOT(2));
LISTROOT(2,0)
REPEATFINISH
LISTROOTFINISH(2,0)
LISTROOTEND
} else {
ROOTEMPTY(2)
}

result = vpx_method_Project_20_Databrowser_20_Control_2F_HIC_20_Edit_20_Duplicate_case_1_local_5(PARAMETERS,TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_archive_2D_to_2D_object,1,1,TERMINAL(3),ROOT(5));

if( (repeatLimit = vpx_multiplex(2,TERMINAL(5),TERMINAL(4))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Project_20_Databrowser_20_Control_2F_HIC_20_Edit_20_Duplicate_case_1_local_7(PARAMETERS,LIST(5),LIST(4));
REPEATFINISH
} else {
}

result = vpx_method_Project_20_Databrowser_20_Control_2F_HIC_20_Edit_20_Duplicate_case_1_local_8(PARAMETERS,TERMINAL(1));

result = vpx_method_Project_20_Databrowser_20_Control_2F_HIC_20_Edit_20_Duplicate_case_1_local_9(PARAMETERS);

result = kSuccess;

FOOTER(6)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_HIC_20_Edit_20_Duplicate_case_2_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_HIC_20_Edit_20_Duplicate_case_2_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(7)
INPUT(0,0)
result = kSuccess;

if( (repeatLimit = vpx_multiplex(1,TERMINAL(0))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_get(PARAMETERS,kVPXValue_Parent,LIST(0),ROOT(1),ROOT(2));
LISTROOT(2,0)
REPEATFINISH
LISTROOTFINISH(2,0)
LISTROOTEND
} else {
ROOTNULL(1,NULL)
ROOTEMPTY(2)
}

if( (repeatLimit = vpx_multiplex(1,TERMINAL(0))) ){
LISTROOTBEGIN(2)
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Isolate,1,2,LIST(0),ROOT(3),ROOT(4));
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

result = vpx_call_primitive(PARAMETERS,VPLP_object_2D_to_2D_archive,1,2,TERMINAL(3),ROOT(5),ROOT(6));

if( (repeatLimit = vpx_multiplex(2,TERMINAL(3),TERMINAL(4))) ){
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Integrate,2,0,LIST(3),LIST(4));
REPEATFINISH
} else {
}

result = kSuccess;

OUTPUT(0,TERMINAL(5))
OUTPUT(1,TERMINAL(2))
FOOTERSINGLECASE(7)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_HIC_20_Edit_20_Duplicate_case_2_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_HIC_20_Edit_20_Duplicate_case_2_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(3),ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_Helper_20_Name,TERMINAL(1),ROOT(5),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP_equals,2,0,TERMINAL(6),TERMINAL(4));
NEXTCASEONFAILURE

result = vpx_set(PARAMETERS,kVPXValue_Owner,TERMINAL(3),TERMINAL(2),ROOT(7));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Add_20_To_20_List_20_Data,2,0,TERMINAL(7),TERMINAL(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_After_20_Import,1,0,TERMINAL(7));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Make_20_Dirty,1,0,TERMINAL(7));

result = kSuccess;

FOOTER(8)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_HIC_20_Edit_20_Duplicate_case_2_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_HIC_20_Edit_20_Duplicate_case_2_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_HIC_20_Edit_20_Duplicate_case_2_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_HIC_20_Edit_20_Duplicate_case_2_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Databrowser_20_Control_2F_HIC_20_Edit_20_Duplicate_case_2_local_6_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Project_20_Databrowser_20_Control_2F_HIC_20_Edit_20_Duplicate_case_2_local_6_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_HIC_20_Edit_20_Duplicate_case_2_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_HIC_20_Edit_20_Duplicate_case_2_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Window,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
TERMINATEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Refresh_20_Data,1,0,TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_HIC_20_Edit_20_Duplicate_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_HIC_20_Edit_20_Duplicate_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Select_20_Values,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"(  )",TERMINAL(1));
TERMINATEONSUCCESS

result = vpx_method_Project_20_Databrowser_20_Control_2F_HIC_20_Edit_20_Duplicate_case_2_local_4(PARAMETERS,TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_archive_2D_to_2D_object,1,1,TERMINAL(2),ROOT(4));

if( (repeatLimit = vpx_multiplex(2,TERMINAL(4),TERMINAL(3))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Project_20_Databrowser_20_Control_2F_HIC_20_Edit_20_Duplicate_case_2_local_6(PARAMETERS,LIST(4),LIST(3));
REPEATFINISH
} else {
}

result = vpx_method_Project_20_Databrowser_20_Control_2F_HIC_20_Edit_20_Duplicate_case_2_local_7(PARAMETERS,TERMINAL(0));

result = kSuccess;

FOOTER(5)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_HIC_20_Edit_20_Duplicate(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Databrowser_20_Control_2F_HIC_20_Edit_20_Duplicate_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Project_20_Databrowser_20_Control_2F_HIC_20_Edit_20_Duplicate_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_Get_20_Project_20_Data_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_Get_20_Project_20_Data_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Window,1,1,TERMINAL(0),ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Project_20_Data,1,1,TERMINAL(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_Get_20_Project_20_Data_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_Get_20_Project_20_Data_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_Get_20_Project_20_Data(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Databrowser_20_Control_2F_Get_20_Project_20_Data_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Project_20_Databrowser_20_Control_2F_Get_20_Project_20_Data_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_HIC_20_Edit_20_Propagate_20_Attribute(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Select_20_List,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"(  )",TERMINAL(1));
TERMINATEONSUCCESS

result = vpx_constant(PARAMETERS,"Propagate Attributes",ROOT(2));

result = vpx_method_Debug_20_Unimp(PARAMETERS,TERMINAL(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_HIC_20_Edit_20_Paste_20_Value_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_HIC_20_Edit_20_Paste_20_Value_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Select_20_Values,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"(  )",TERMINAL(1));
NEXTCASEONSUCCESS

result = vpx_method_Get_20_Value_20_Clipboard(PARAMETERS,ROOT(2));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Project_20_Data,1,1,TERMINAL(0),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Paste_20_Value,3,0,TERMINAL(2),TERMINAL(3),TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Refresh_20_Selection,1,0,TERMINAL(0));

result = kSuccess;

FOOTER(4)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_HIC_20_Edit_20_Paste_20_Value_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_HIC_20_Edit_20_Paste_20_Value_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_HIC_20_Edit_20_Paste_20_Value(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Databrowser_20_Control_2F_HIC_20_Edit_20_Paste_20_Value_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Project_20_Databrowser_20_Control_2F_HIC_20_Edit_20_Paste_20_Value_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_HIC_20_Edit_20_Copy_20_Value_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_HIC_20_Edit_20_Copy_20_Value_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Select_20_Values,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"(  )",TERMINAL(1));
NEXTCASEONSUCCESS

result = vpx_method_Get_20_Value_20_Clipboard(PARAMETERS,ROOT(2));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Project_20_Data,1,1,TERMINAL(0),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Copy_20_Value,3,0,TERMINAL(2),TERMINAL(3),TERMINAL(1));
NEXTCASEONFAILURE

result = kSuccess;

FOOTER(4)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_HIC_20_Edit_20_Copy_20_Value_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_HIC_20_Edit_20_Copy_20_Value_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_HIC_20_Edit_20_Copy_20_Value(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Databrowser_20_Control_2F_HIC_20_Edit_20_Copy_20_Value_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Project_20_Databrowser_20_Control_2F_HIC_20_Edit_20_Copy_20_Value_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_Refresh_20_Selection(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Select_20_List,1,1,TERMINAL(0),ROOT(1));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(1))) ){
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Send_20_Refresh,1,0,LIST(1));
REPEATFINISH
} else {
}

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_Select_20_Items_case_1_local_4_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_Select_20_Items_case_1_local_4_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Value,1,1,TERMINAL(0),ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP__3D_,2,0,TERMINAL(4),TERMINAL(1));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(5)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_Select_20_Items_case_1_local_4_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_Select_20_Items_case_1_local_4_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

OUTPUT(0,NONE)
FOOTERWITHNONE(2)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_Select_20_Items_case_1_local_4_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_Select_20_Items_case_1_local_4_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_Databrowser_20_Control_2F_Select_20_Items_case_1_local_4_case_1_local_2_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Project_20_Databrowser_20_Control_2F_Select_20_Items_case_1_local_4_case_1_local_2_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_Select_20_Items_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_Select_20_Items_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

if( (repeatLimit = vpx_multiplex(1,TERMINAL(0))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Project_20_Databrowser_20_Control_2F_Select_20_Items_case_1_local_4_case_1_local_2(PARAMETERS,LIST(0),TERMINAL(1),ROOT(2));
LISTROOT(2,0)
REPEATFINISH
LISTROOTFINISH(2,0)
LISTROOTEND
} else {
ROOTEMPTY(2)
}

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Project_20_Databrowser_20_Control_2F_Select_20_Items(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method__28_Check_29_(PARAMETERS,TERMINAL(1),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Content_20_List,1,1,TERMINAL(0),ROOT(3));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(2))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Project_20_Databrowser_20_Control_2F_Select_20_Items_case_1_local_4(PARAMETERS,TERMINAL(3),LIST(2),ROOT(4));
LISTROOT(4,0)
REPEATFINISH
LISTROOTFINISH(4,0)
LISTROOTEND
} else {
ROOTEMPTY(4)
}

result = vpx_method__28_Flatten_29_(PARAMETERS,TERMINAL(4),ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Select_20_List,2,0,TERMINAL(0),TERMINAL(5));

result = kSuccess;

FOOTERSINGLECASE(6)
}

/* Stop Universals */



Nat4 VPLC_Project_20_DB_20_Item_20_Data_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Project_20_DB_20_Item_20_Data_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 200 300 } */
	tempAttribute = attribute_add("Name",tempClass,tempAttribute_Project_20_DB_20_Item_20_Data_2F_Name,environment);
	tempAttribute = attribute_add("Owner",tempClass,NULL,environment);
	tempAttribute = attribute_add("Value",tempClass,NULL,environment);
	tempAttribute = attribute_add("Container?",tempClass,tempAttribute_Project_20_DB_20_Item_20_Data_2F_Container_3F_,environment);
	tempAttribute = attribute_add("Open?",tempClass,tempAttribute_Project_20_DB_20_Item_20_Data_2F_Open_3F_,environment);
	tempAttribute = attribute_add("Editable?",tempClass,tempAttribute_Project_20_DB_20_Item_20_Data_2F_Editable_3F_,environment);
	tempAttribute = attribute_add("Content",tempClass,tempAttribute_Project_20_DB_20_Item_20_Data_2F_Content,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"Databrowser Item Data");
	return kNOERROR;
}

/* Start Universals: { 713 1160 }{ 436 332 } */
enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Install_20_Data_case_1_local_6_case_1_local_8_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Install_20_Data_case_1_local_6_case_1_local_8_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Install_20_Data_case_1_local_6_case_1_local_8_case_2_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Install_20_Data_case_1_local_6_case_1_local_8_case_2_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Value,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP__3D_,2,0,TERMINAL(3),TERMINAL(1));
FAILONFAILURE

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Install_20_Data_case_1_local_6_case_1_local_8_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Install_20_Data_case_1_local_6_case_1_local_8_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Content,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_match(PARAMETERS,"(  )",TERMINAL(3));
TERMINATEONSUCCESS

if( (repeatLimit = vpx_multiplex(2,TERMINAL(3),TERMINAL(1))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Project_20_DB_20_Item_20_Data_2F_Install_20_Data_case_1_local_6_case_1_local_8_case_2_local_4(PARAMETERS,LIST(3),LIST(1));
TERMINATEONFAILURE
REPEATFINISH
} else {
}

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Databrowser,1,1,TERMINAL(2),ROOT(4));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(4));
TERMINATEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Update_20_Item_20_List,2,0,TERMINAL(4),TERMINAL(3));

result = kSuccess;
FAILONSUCCESS

FOOTER(5)
}

enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Install_20_Data_case_1_local_6_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Install_20_Data_case_1_local_6_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_DB_20_Item_20_Data_2F_Install_20_Data_case_1_local_6_case_1_local_8_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Project_20_DB_20_Item_20_Data_2F_Install_20_Data_case_1_local_6_case_1_local_8_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Install_20_Data_case_1_local_6_case_1_local_10_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Install_20_Data_case_1_local_6_case_1_local_10_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

if( (repeatLimit = vpx_multiplex(1,TERMINAL(1))) ){
LISTROOTBEGIN(2)
REPEATBEGINWITHCOUNTER
result = vpx_get(PARAMETERS,kVPXValue_Value,LIST(1),ROOT(2),ROOT(3));
LISTROOT(2,0)
LISTROOT(3,1)
REPEATFINISH
LISTROOTFINISH(2,0)
LISTROOTFINISH(3,1)
LISTROOTEND
} else {
ROOTEMPTY(2)
ROOTEMPTY(3)
}

result = vpx_call_primitive(PARAMETERS,VPLP__28_in_29_,2,1,TERMINAL(3),TERMINAL(0),ROOT(4));

result = vpx_match(PARAMETERS,"0",TERMINAL(4));
NEXTCASEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_nth,2,1,TERMINAL(2),TERMINAL(4),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTER(6)
}

enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Install_20_Data_case_1_local_6_case_1_local_10_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Install_20_Data_case_1_local_6_case_1_local_10_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(10)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_Project_20_DB_20_Item_20_Data,1,1,NONE,ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Name,1,1,TERMINAL(0),ROOT(3));

result = vpx_set(PARAMETERS,kVPXValue_Name,TERMINAL(2),TERMINAL(3),ROOT(4));

result = vpx_constant(PARAMETERS,"TRUE",ROOT(5));

result = vpx_set(PARAMETERS,kVPXValue_Container_3F_,TERMINAL(4),TERMINAL(5),ROOT(6));

result = vpx_constant(PARAMETERS,"FALSE",ROOT(7));

result = vpx_set(PARAMETERS,kVPXValue_Editable_3F_,TERMINAL(6),TERMINAL(7),ROOT(8));

result = vpx_set(PARAMETERS,kVPXValue_Value,TERMINAL(2),TERMINAL(0),ROOT(9));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Add_20_View,2,0,TERMINAL(0),TERMINAL(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERWITHNONE(10)
}

enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Install_20_Data_case_1_local_6_case_1_local_10_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Install_20_Data_case_1_local_6_case_1_local_10_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Create_20_Item,1,1,TERMINAL(0),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Install_20_Data,2,0,TERMINAL(2),TERMINAL(0));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Install_20_Data_case_1_local_6_case_1_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Install_20_Data_case_1_local_6_case_1_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_DB_20_Item_20_Data_2F_Install_20_Data_case_1_local_6_case_1_local_10_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
if(vpx_method_Project_20_DB_20_Item_20_Data_2F_Install_20_Data_case_1_local_6_case_1_local_10_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Project_20_DB_20_Item_20_Data_2F_Install_20_Data_case_1_local_6_case_1_local_10_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Install_20_Data_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Install_20_Data_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(10)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(1),ROOT(2));

result = vpx_match(PARAMETERS,"Item Data",TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Lists,TERMINAL(1),ROOT(3),ROOT(4));

result = vpx_match(PARAMETERS,"(  )",TERMINAL(4));
NEXTCASEONSUCCESS

result = vpx_constant(PARAMETERS,"TRUE",ROOT(5));

result = vpx_set(PARAMETERS,kVPXValue_Container_3F_,TERMINAL(0),TERMINAL(5),ROOT(6));

result = vpx_method_Project_20_DB_20_Item_20_Data_2F_Install_20_Data_case_1_local_6_case_1_local_8(PARAMETERS,TERMINAL(6),TERMINAL(4));
TERMINATEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Content,TERMINAL(6),ROOT(7),ROOT(8));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(4))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Project_20_DB_20_Item_20_Data_2F_Install_20_Data_case_1_local_6_case_1_local_10(PARAMETERS,LIST(4),TERMINAL(8),ROOT(9));
LISTROOT(9,0)
REPEATFINISH
LISTROOTFINISH(9,0)
LISTROOTEND
} else {
ROOTEMPTY(9)
}

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Items,2,0,TERMINAL(6),TERMINAL(9));

result = kSuccess;

FOOTER(10)
}

enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Install_20_Data_case_1_local_6_case_2_local_8_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Install_20_Data_case_1_local_6_case_2_local_8_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

if( (repeatLimit = vpx_multiplex(1,TERMINAL(2))) ){
LISTROOTBEGIN(2)
REPEATBEGINWITHCOUNTER
result = vpx_get(PARAMETERS,kVPXValue_Value,LIST(2),ROOT(3),ROOT(4));
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

result = vpx_call_primitive(PARAMETERS,VPLP__28_in_29_,2,1,TERMINAL(4),TERMINAL(1),ROOT(5));

result = vpx_match(PARAMETERS,"0",TERMINAL(5));
NEXTCASEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_nth,2,1,TERMINAL(3),TERMINAL(5),ROOT(6));

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTER(7)
}

enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Install_20_Data_case_1_local_6_case_2_local_8_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Install_20_Data_case_1_local_6_case_2_local_8_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Viewer Item",ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Create_20_Item,3,1,TERMINAL(1),TERMINAL(3),TERMINAL(0),ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Install_20_Data,2,0,TERMINAL(4),TERMINAL(1));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Install_20_Data_case_1_local_6_case_2_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Install_20_Data_case_1_local_6_case_2_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_DB_20_Item_20_Data_2F_Install_20_Data_case_1_local_6_case_2_local_8_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
vpx_method_Project_20_DB_20_Item_20_Data_2F_Install_20_Data_case_1_local_6_case_2_local_8_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Install_20_Data_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Install_20_Data_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(10)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(1),ROOT(2));

result = vpx_match(PARAMETERS,"List Data",TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"TRUE",ROOT(3));

result = vpx_set(PARAMETERS,kVPXValue_Container_3F_,TERMINAL(0),TERMINAL(3),ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_Content,TERMINAL(4),ROOT(5),ROOT(6));

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(1),ROOT(7),ROOT(8));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(8))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Project_20_DB_20_Item_20_Data_2F_Install_20_Data_case_1_local_6_case_2_local_8(PARAMETERS,TERMINAL(5),LIST(8),TERMINAL(6),ROOT(9));
LISTROOT(9,0)
REPEATFINISH
LISTROOTFINISH(9,0)
LISTROOTEND
} else {
ROOTEMPTY(9)
}

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Items,2,0,TERMINAL(4),TERMINAL(9));

result = kSuccess;

FOOTER(10)
}

enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Install_20_Data_case_1_local_6_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Install_20_Data_case_1_local_6_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(1),ROOT(2),ROOT(3));

result = kSuccess;

FOOTER(4)
}

enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Install_20_Data_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Install_20_Data_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_DB_20_Item_20_Data_2F_Install_20_Data_case_1_local_6_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
if(vpx_method_Project_20_DB_20_Item_20_Data_2F_Install_20_Data_case_1_local_6_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Project_20_DB_20_Item_20_Data_2F_Install_20_Data_case_1_local_6_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Install_20_Data(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Value,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Add_20_View,2,0,TERMINAL(1),TERMINAL(0));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Name,1,1,TERMINAL(1),ROOT(3));

result = vpx_set(PARAMETERS,kVPXValue_Name,TERMINAL(0),TERMINAL(3),ROOT(4));

result = vpx_method_Project_20_DB_20_Item_20_Data_2F_Install_20_Data_case_1_local_6(PARAMETERS,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Add_20_Content_20_Items(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Reinstall_20_Data,1,0,TERMINAL(0));

result = vpx_call_context_super_method(PARAMETERS,kVPXMethod_Add_20_Content_20_Items,1,0,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Initialize_20_Value(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Add_20_View,2,0,TERMINAL(1),TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Reinstall_20_Data_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Reinstall_20_Data_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Value,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Install_20_Data,2,0,TERMINAL(0),TERMINAL(2));

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Reinstall_20_Data_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Reinstall_20_Data_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_ItemID,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"0",TERMINAL(1));
NEXTCASEONSUCCESS

result = vpx_get(PARAMETERS,kVPXValue_Owner,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(3));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Value,TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(5));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Install_20_Data,2,0,TERMINAL(2),TERMINAL(5));

result = kSuccess;

FOOTER(6)
}

enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Reinstall_20_Data_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Reinstall_20_Data_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Reinstall_20_Data(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_DB_20_Item_20_Data_2F_Reinstall_20_Data_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
if(vpx_method_Project_20_DB_20_Item_20_Data_2F_Reinstall_20_Data_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Project_20_DB_20_Item_20_Data_2F_Reinstall_20_Data_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Change_20_Item_20_Data_20_Property_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Change_20_Item_20_Data_20_Property_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"\'name\'",TERMINAL(0));
TERMINATEONSUCCESS

result = vpx_extmatch(PARAMETERS,kDataBrowserItemSelfIdentityProperty,TERMINAL(0));
TERMINATEONSUCCESS

result = kSuccess;
FAILONSUCCESS

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Change_20_Item_20_Data_20_Property_case_1_local_4_case_1_local_9_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Change_20_Item_20_Data_20_Property_case_1_local_4_case_1_local_9_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"\"          \"",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,NULL,ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Change_20_Item_20_Data_20_Property_case_1_local_4_case_1_local_9_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Change_20_Item_20_Data_20_Property_case_1_local_4_case_1_local_9_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(1)
}

enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Change_20_Item_20_Data_20_Property_case_1_local_4_case_1_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Change_20_Item_20_Data_20_Property_case_1_local_4_case_1_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_DB_20_Item_20_Data_2F_Change_20_Item_20_Data_20_Property_case_1_local_4_case_1_local_9_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Project_20_DB_20_Item_20_Data_2F_Change_20_Item_20_Data_20_Property_case_1_local_4_case_1_local_9_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Change_20_Item_20_Data_20_Property_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Change_20_Item_20_Data_20_Property_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(11)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_method_CF_20_String_2F_New(PARAMETERS,TERMINAL(1),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_String,1,1,TERMINAL(3),ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Release,1,0,TERMINAL(3));

result = vpx_get(PARAMETERS,kVPXValue_Value,TERMINAL(2),ROOT(5),ROOT(6));

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(6),ROOT(7),ROOT(8));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Name,1,1,TERMINAL(8),ROOT(9));

result = vpx_method_Project_20_DB_20_Item_20_Data_2F_Change_20_Item_20_Data_20_Property_case_1_local_4_case_1_local_9(PARAMETERS,TERMINAL(4),ROOT(10));

result = vpx_call_primitive(PARAMETERS,VPLP__3D_,2,0,TERMINAL(9),TERMINAL(10));
TERMINATEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Name,2,0,TERMINAL(8),TERMINAL(10));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Change_20_Name,2,0,TERMINAL(2),TERMINAL(10));

result = kSuccess;

FOOTER(11)
}

enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Change_20_Item_20_Data_20_Property_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Change_20_Item_20_Data_20_Property_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

CFRelease( GETCONSTPOINTER(void,*,TERMINAL(1)));
result = kSuccess;

result = vpx_constant(PARAMETERS,"GetDataBrowserItemDataText",ROOT(3));

result = vpx_method_Debug_20_OSError(PARAMETERS,TERMINAL(3),TERMINAL(0));

result = kSuccess;
FAILONSUCCESS

FOOTER(4)
}

enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Change_20_Item_20_Data_20_Property_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Change_20_Item_20_Data_20_Property_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_DB_20_Item_20_Data_2F_Change_20_Item_20_Data_20_Property_case_1_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2))
vpx_method_Project_20_DB_20_Item_20_Data_2F_Change_20_Item_20_Data_20_Property_case_1_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2);
return outcome;
}

enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Change_20_Item_20_Data_20_Property_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Change_20_Item_20_Data_20_Property_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADERWITHNONE(7)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_method_Project_20_DB_20_Item_20_Data_2F_Change_20_Item_20_Data_20_Property_case_1_local_2(PARAMETERS,TERMINAL(1));
NEXTCASEONFAILURE

PUTINTEGER(GetDataBrowserItemDataText( GETPOINTER(0,void,*,ROOT(4),TERMINAL(2)),GETPOINTER(0,__CFString,**,ROOT(5),NONE)),3);
result = kSuccess;

result = vpx_method_Project_20_DB_20_Item_20_Data_2F_Change_20_Item_20_Data_20_Property_case_1_local_4(PARAMETERS,TERMINAL(3),TERMINAL(5),TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_extconstant(PARAMETERS,noErr,ROOT(6));

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTERWITHNONE(7)
}

enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Change_20_Item_20_Data_20_Property_case_2_local_4_case_1_local_9_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Change_20_Item_20_Data_20_Property_case_2_local_4_case_1_local_9_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(0),ROOT(1));

result = vpx_constant(PARAMETERS,"NULL",ROOT(2));

result = vpx_constant(PARAMETERS,"( \"Universal Data\" \"Class Data\" )",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP__28_in_29_,2,1,TERMINAL(3),TERMINAL(1),ROOT(4));

result = vpx_match(PARAMETERS,"0",TERMINAL(4));
NEXTCASEONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(5)
}

enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Change_20_Item_20_Data_20_Property_case_2_local_4_case_1_local_9_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Change_20_Item_20_Data_20_Property_case_2_local_4_case_1_local_9_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"\"",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Change_20_Item_20_Data_20_Property_case_2_local_4_case_1_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Change_20_Item_20_Data_20_Property_case_2_local_4_case_1_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_DB_20_Item_20_Data_2F_Change_20_Item_20_Data_20_Property_case_2_local_4_case_1_local_9_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Project_20_DB_20_Item_20_Data_2F_Change_20_Item_20_Data_20_Property_case_2_local_4_case_1_local_9_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Change_20_Item_20_Data_20_Property_case_2_local_4_case_1_local_10_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Change_20_Item_20_Data_20_Property_case_2_local_4_case_1_local_10_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"\"          \"",TERMINAL(0));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Change_20_Item_20_Data_20_Property_case_2_local_4_case_1_local_10_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Change_20_Item_20_Data_20_Property_case_2_local_4_case_1_local_10_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"\"\"",TERMINAL(0));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Change_20_Item_20_Data_20_Property_case_2_local_4_case_1_local_10_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Change_20_Item_20_Data_20_Property_case_2_local_4_case_1_local_10_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(2)
}

enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Change_20_Item_20_Data_20_Property_case_2_local_4_case_1_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Change_20_Item_20_Data_20_Property_case_2_local_4_case_1_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_DB_20_Item_20_Data_2F_Change_20_Item_20_Data_20_Property_case_2_local_4_case_1_local_10_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
if(vpx_method_Project_20_DB_20_Item_20_Data_2F_Change_20_Item_20_Data_20_Property_case_2_local_4_case_1_local_10_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Project_20_DB_20_Item_20_Data_2F_Change_20_Item_20_Data_20_Property_case_2_local_4_case_1_local_10_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Change_20_Item_20_Data_20_Property_case_2_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Change_20_Item_20_Data_20_Property_case_2_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(12)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_method_CF_20_String_2F_New(PARAMETERS,TERMINAL(1),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_String,1,1,TERMINAL(3),ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Release,1,0,TERMINAL(3));

result = vpx_get(PARAMETERS,kVPXValue_Value,TERMINAL(2),ROOT(5),ROOT(6));

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(6),ROOT(7),ROOT(8));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Value,1,1,TERMINAL(8),ROOT(9));

result = vpx_method_Project_20_DB_20_Item_20_Data_2F_Change_20_Item_20_Data_20_Property_case_2_local_4_case_1_local_9(PARAMETERS,TERMINAL(8),ROOT(10));

result = vpx_method_Project_20_DB_20_Item_20_Data_2F_Change_20_Item_20_Data_20_Property_case_2_local_4_case_1_local_10(PARAMETERS,TERMINAL(4),TERMINAL(10),ROOT(11));

result = vpx_call_primitive(PARAMETERS,VPLP__3D_,2,0,TERMINAL(9),TERMINAL(11));
TERMINATEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Value,2,0,TERMINAL(8),TERMINAL(11));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Send_20_Refresh,1,0,TERMINAL(6));

result = kSuccess;

FOOTER(12)
}

enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Change_20_Item_20_Data_20_Property_case_2_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Change_20_Item_20_Data_20_Property_case_2_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

CFRelease( GETCONSTPOINTER(void,*,TERMINAL(1)));
result = kSuccess;

result = vpx_constant(PARAMETERS,"GetDataBrowserItemDataValue",ROOT(3));

result = vpx_method_Debug_20_OSError(PARAMETERS,TERMINAL(3),TERMINAL(0));

result = kSuccess;
FAILONSUCCESS

FOOTER(4)
}

enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Change_20_Item_20_Data_20_Property_case_2_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Change_20_Item_20_Data_20_Property_case_2_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_DB_20_Item_20_Data_2F_Change_20_Item_20_Data_20_Property_case_2_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2))
vpx_method_Project_20_DB_20_Item_20_Data_2F_Change_20_Item_20_Data_20_Property_case_2_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2);
return outcome;
}

enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Change_20_Item_20_Data_20_Property_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Change_20_Item_20_Data_20_Property_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADERWITHNONE(7)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_match(PARAMETERS,"\'Valu\'",TERMINAL(1));
NEXTCASEONFAILURE

PUTINTEGER(GetDataBrowserItemDataText( GETPOINTER(0,void,*,ROOT(4),TERMINAL(2)),GETPOINTER(0,__CFString,**,ROOT(5),NONE)),3);
result = kSuccess;

result = vpx_method_Project_20_DB_20_Item_20_Data_2F_Change_20_Item_20_Data_20_Property_case_2_local_4(PARAMETERS,TERMINAL(3),TERMINAL(5),TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_extconstant(PARAMETERS,noErr,ROOT(6));

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTERWITHNONE(7)
}

enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Change_20_Item_20_Data_20_Property_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Change_20_Item_20_Data_20_Property_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,errDataBrowserPropertyNotSupported,ROOT(3));

result = vpx_constant(PARAMETERS,"Unchanged Property",ROOT(4));

result = vpx_method_Debug_20_OSError(PARAMETERS,TERMINAL(4),TERMINAL(1));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(5)
}

enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Change_20_Item_20_Data_20_Property(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_DB_20_Item_20_Data_2F_Change_20_Item_20_Data_20_Property_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
if(vpx_method_Project_20_DB_20_Item_20_Data_2F_Change_20_Item_20_Data_20_Property_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
vpx_method_Project_20_DB_20_Item_20_Data_2F_Change_20_Item_20_Data_20_Property_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Set_20_Item_20_Data_20_Property_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Set_20_Item_20_Data_20_Property_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"1024",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP__3C3D_,2,0,TERMINAL(1),TERMINAL(3));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Item_20_Meta_20_Property,3,1,TERMINAL(0),TERMINAL(1),TERMINAL(2),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Set_20_Item_20_Data_20_Property_case_2_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Set_20_Item_20_Data_20_Property_case_2_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,NULL,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"\"          \"",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Set_20_Item_20_Data_20_Property_case_2_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Set_20_Item_20_Data_20_Property_case_2_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(1)
}

enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Set_20_Item_20_Data_20_Property_case_2_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Set_20_Item_20_Data_20_Property_case_2_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_DB_20_Item_20_Data_2F_Set_20_Item_20_Data_20_Property_case_2_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Project_20_DB_20_Item_20_Data_2F_Set_20_Item_20_Data_20_Property_case_2_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Set_20_Item_20_Data_20_Property_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Set_20_Item_20_Data_20_Property_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(10)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_match(PARAMETERS,"\'name\'",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Identity_20_Name,1,1,TERMINAL(0),ROOT(3));

result = vpx_method_Project_20_DB_20_Item_20_Data_2F_Set_20_Item_20_Data_20_Property_case_2_local_4(PARAMETERS,TERMINAL(3),ROOT(4));

result = vpx_method_To_20_CFStringRef(PARAMETERS,TERMINAL(4),ROOT(5));

PUTINTEGER(SetDataBrowserItemDataText( GETPOINTER(0,void,*,ROOT(7),TERMINAL(2)),GETCONSTPOINTER(__CFString,*,TERMINAL(5))),6);
result = kSuccess;

CFRelease( GETCONSTPOINTER(void,*,TERMINAL(5)));
result = kSuccess;

result = vpx_extconstant(PARAMETERS,noErr,ROOT(8));

result = vpx_constant(PARAMETERS,"SetDBItemDataText",ROOT(9));

result = vpx_method_Debug_20_OSError(PARAMETERS,TERMINAL(9),TERMINAL(6));

result = kSuccess;

OUTPUT(0,TERMINAL(8))
FOOTER(10)
}

enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Set_20_Item_20_Data_20_Property_case_3_local_8_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Set_20_Item_20_Data_20_Property_case_3_local_8_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,NULL,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"\"          \"",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Set_20_Item_20_Data_20_Property_case_3_local_8_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Set_20_Item_20_Data_20_Property_case_3_local_8_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"\"          \"",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Set_20_Item_20_Data_20_Property_case_3_local_8_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Set_20_Item_20_Data_20_Property_case_3_local_8_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(1)
}

enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Set_20_Item_20_Data_20_Property_case_3_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Set_20_Item_20_Data_20_Property_case_3_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_DB_20_Item_20_Data_2F_Set_20_Item_20_Data_20_Property_case_3_local_8_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_Project_20_DB_20_Item_20_Data_2F_Set_20_Item_20_Data_20_Property_case_3_local_8_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Project_20_DB_20_Item_20_Data_2F_Set_20_Item_20_Data_20_Property_case_3_local_8_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Set_20_Item_20_Data_20_Property_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Set_20_Item_20_Data_20_Property_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(15)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_match(PARAMETERS,"\'Valu\'",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Value,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(4),ROOT(5));

result = vpx_match(PARAMETERS,"Item Data",TERMINAL(5));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(4),ROOT(6),ROOT(7));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Value,1,1,TERMINAL(7),ROOT(8));

result = vpx_method_Project_20_DB_20_Item_20_Data_2F_Set_20_Item_20_Data_20_Property_case_3_local_8(PARAMETERS,TERMINAL(8),ROOT(9));

result = vpx_method_To_20_CFStringRef(PARAMETERS,TERMINAL(9),ROOT(10));

PUTINTEGER(SetDataBrowserItemDataText( GETPOINTER(0,void,*,ROOT(12),TERMINAL(2)),GETCONSTPOINTER(__CFString,*,TERMINAL(10))),11);
result = kSuccess;

CFRelease( GETCONSTPOINTER(void,*,TERMINAL(10)));
result = kSuccess;

result = vpx_extconstant(PARAMETERS,noErr,ROOT(13));

result = vpx_constant(PARAMETERS,"SetDBItemDataText",ROOT(14));

result = vpx_method_Debug_20_OSError(PARAMETERS,TERMINAL(14),TERMINAL(11));

result = kSuccess;

OUTPUT(0,TERMINAL(13))
FOOTER(15)
}

enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Set_20_Item_20_Data_20_Property_case_4_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Set_20_Item_20_Data_20_Property_case_4_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(0),ROOT(1));

result = vpx_constant(PARAMETERS,"( \"Project Data\" \"Section Data\" )",ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP__28_in_29_,2,1,TERMINAL(2),TERMINAL(1),ROOT(3));

result = vpx_match(PARAMETERS,"0",TERMINAL(3));
FAILONSUCCESS

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Set_20_Item_20_Data_20_Property_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Set_20_Item_20_Data_20_Property_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(14)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_match(PARAMETERS,"\'Drty\'",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Value,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(4),ROOT(5));

result = vpx_match(PARAMETERS,"Item Data",TERMINAL(5));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(4),ROOT(6),ROOT(7));

result = vpx_method_Project_20_DB_20_Item_20_Data_2F_Set_20_Item_20_Data_20_Property_case_4_local_7(PARAMETERS,TERMINAL(7));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Dirty,TERMINAL(7),ROOT(8),ROOT(9));

result = vpx_call_primitive(PARAMETERS,VPLP_boolean_3F_,1,0,TERMINAL(9));
NEXTCASEONFAILURE

PUTINTEGER(SetDataBrowserItemDataBooleanValue( GETPOINTER(0,void,*,ROOT(11),TERMINAL(2)),GETINTEGER(TERMINAL(9))),10);
result = kSuccess;

result = vpx_extconstant(PARAMETERS,noErr,ROOT(12));

result = vpx_constant(PARAMETERS,"SetDBItemDatDirtyValue",ROOT(13));

result = vpx_method_Debug_20_OSError(PARAMETERS,TERMINAL(13),TERMINAL(10));

result = kSuccess;

OUTPUT(0,TERMINAL(12))
FOOTER(14)
}

enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Set_20_Item_20_Data_20_Property_case_5(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Set_20_Item_20_Data_20_Property_case_5(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,errDataBrowserPropertyNotSupported,ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Set_20_Item_20_Data_20_Property(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_DB_20_Item_20_Data_2F_Set_20_Item_20_Data_20_Property_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
if(vpx_method_Project_20_DB_20_Item_20_Data_2F_Set_20_Item_20_Data_20_Property_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
if(vpx_method_Project_20_DB_20_Item_20_Data_2F_Set_20_Item_20_Data_20_Property_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
if(vpx_method_Project_20_DB_20_Item_20_Data_2F_Set_20_Item_20_Data_20_Property_case_4(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
vpx_method_Project_20_DB_20_Item_20_Data_2F_Set_20_Item_20_Data_20_Property_case_5(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Double_20_Clicked_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Double_20_Clicked_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Set_20_Arrow_20_Cursor(PARAMETERS);

result = kSuccess;
NEXTCASEONSUCCESS

FOOTER(1)
}

enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Double_20_Clicked_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Double_20_Clicked_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADERWITHNONE(11)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Modifier_20_Key_20_Pressed_3F_(PARAMETERS,NONE);
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Owner,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_Value,TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(4));
NEXTCASEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(4),ROOT(5));

result = vpx_match(PARAMETERS,"Item Data",TERMINAL(5));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(4),ROOT(6),ROOT(7));

result = vpx_get(PARAMETERS,kVPXValue_Content,TERMINAL(2),ROOT(8),ROOT(9));

result = vpx_call_primitive(PARAMETERS,VPLP__28_in_29_,2,1,TERMINAL(9),TERMINAL(0),ROOT(10));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Handle_20_Item_20_Click,3,0,TERMINAL(7),TERMINAL(0),TERMINAL(10));

result = kSuccess;

FOOTERWITHNONE(11)
}

enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Double_20_Clicked_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Double_20_Clicked_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(13)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Container_3F_,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(2));
NEXTCASEONSUCCESS

result = vpx_get(PARAMETERS,kVPXValue_Owner,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_Value,TERMINAL(3),ROOT(5),ROOT(6));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(6));
NEXTCASEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(6),ROOT(7));

result = vpx_match(PARAMETERS,"Item Data",TERMINAL(7));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(6),ROOT(8),ROOT(9));

result = vpx_get(PARAMETERS,kVPXValue_Content,TERMINAL(4),ROOT(10),ROOT(11));

result = vpx_call_primitive(PARAMETERS,VPLP__28_in_29_,2,1,TERMINAL(11),TERMINAL(0),ROOT(12));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Handle_20_Item_20_Click,3,0,TERMINAL(9),TERMINAL(0),TERMINAL(12));

result = kSuccess;

FOOTER(13)
}

enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Double_20_Clicked_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Double_20_Clicked_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Toggle_20_Container,1,0,TERMINAL(0));

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Double_20_Clicked(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_DB_20_Item_20_Data_2F_Double_20_Clicked_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
if(vpx_method_Project_20_DB_20_Item_20_Data_2F_Double_20_Clicked_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0))
if(vpx_method_Project_20_DB_20_Item_20_Data_2F_Double_20_Clicked_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Project_20_DB_20_Item_20_Data_2F_Double_20_Clicked_case_4(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Delete_20_Data(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Value,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
TERMINATEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(2),ROOT(3));

result = vpx_match(PARAMETERS,"Item Data",TERMINAL(3));
TERMINATEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(2),ROOT(4),ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Make_20_Dirty,1,0,TERMINAL(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Send_20_Remove_20_Self,1,0,TERMINAL(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Remove_20_Self,1,0,TERMINAL(5));

result = kSuccess;

FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Force_20_Reinstall_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Force_20_Reinstall_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Owner,1,1,TERMINAL(1),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
TERMINATEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_ItemID,1,1,TERMINAL(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,1,1,TERMINAL(1),ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod__7E_Update_20_Items,5,1,TERMINAL(0),TERMINAL(3),TERMINAL(4),NONE,NONE,ROOT(5));

result = vpx_extmatch(PARAMETERS,kDataBrowserNoItem,TERMINAL(3));
FINISHONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASEWITHNONE(6)
}

enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Force_20_Reinstall(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADERWITHNONE(7)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Add_20_Content_20_Items,1,0,TERMINAL(0));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Databrowser,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
TERMINATEONSUCCESS

result = vpx_get(PARAMETERS,kVPXValue_Content,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_ItemID,1,1,TERMINAL(2),ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod__7E_Update_20_Items,5,1,TERMINAL(1),TERMINAL(4),TERMINAL(3),NONE,NONE,ROOT(5));

REPEATBEGIN
LOOPTERMINALBEGIN(1)
LOOPTERMINAL(0,0,6)
result = vpx_method_Project_20_DB_20_Item_20_Data_2F_Force_20_Reinstall_case_1_local_8(PARAMETERS,TERMINAL(1),LOOP(0),ROOT(6));
REPEATFINISH

result = kSuccess;

FOOTERSINGLECASEWITHNONE(7)
}

enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Drag_20_Add_20_Item_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Drag_20_Add_20_Item_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(8)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"0",ROOT(2));

PUTINTEGER(GetDragItemReferenceNumber( GETPOINTER(0,OpaqueDragRef,*,ROOT(4),TERMINAL(0)),GETINTEGER(TERMINAL(2)),GETPOINTER(4,unsigned int,*,ROOT(5),TERMINAL(1))),3);
result = kSuccess;

result = vpx_method_Get_20_UInt32(PARAMETERS,TERMINAL(5),NONE,ROOT(6),ROOT(7));

result = kSuccess;

OUTPUT(0,TERMINAL(7))
FOOTERSINGLECASEWITHNONE(8)
}

enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Drag_20_Add_20_Item_case_1_local_5_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Drag_20_Add_20_Item_case_1_local_5_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
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

enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Drag_20_Add_20_Item_case_1_local_5_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Drag_20_Add_20_Item_case_1_local_5_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"\"",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Drag_20_Add_20_Item_case_1_local_5_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Drag_20_Add_20_Item_case_1_local_5_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_DB_20_Item_20_Data_2F_Drag_20_Add_20_Item_case_1_local_5_case_1_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Project_20_DB_20_Item_20_Data_2F_Drag_20_Add_20_Item_case_1_local_5_case_1_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Drag_20_Add_20_Item_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Drag_20_Add_20_Item_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(11)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_URL,1,1,TERMINAL(0),ROOT(3));

result = vpx_constant(PARAMETERS,"\'TEXT\'",ROOT(4));

result = vpx_method_Project_20_DB_20_Item_20_Data_2F_Drag_20_Add_20_Item_case_1_local_5_case_1_local_4(PARAMETERS,TERMINAL(3),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_byte_2D_length,1,1,TERMINAL(5),ROOT(6));

result = vpx_constant(PARAMETERS,"0",ROOT(7));

result = vpx_method_To_20_CString(PARAMETERS,TERMINAL(5),ROOT(8));

PUTINTEGER(AddDragItemFlavor( GETPOINTER(0,OpaqueDragRef,*,ROOT(10),TERMINAL(1)),GETINTEGER(TERMINAL(2)),GETINTEGER(TERMINAL(4)),GETCONSTPOINTER(void,*,TERMINAL(8)),GETINTEGER(TERMINAL(6)),GETINTEGER(TERMINAL(7))),9);
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(11)
}

enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Drag_20_Add_20_Item_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Drag_20_Add_20_Item_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,typeUInt32,ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_ItemID,1,1,TERMINAL(0),ROOT(4));

result = vpx_constant(PARAMETERS,"4",ROOT(5));

result = vpx_constant(PARAMETERS,"0",ROOT(6));

PUTINTEGER(AddDragItemFlavor( GETPOINTER(0,OpaqueDragRef,*,ROOT(8),TERMINAL(1)),GETINTEGER(TERMINAL(2)),GETINTEGER(TERMINAL(3)),GETCONSTPOINTER(void,*,TERMINAL(4)),GETINTEGER(TERMINAL(5)),GETINTEGER(TERMINAL(6))),7);
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(9)
}

enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Drag_20_Add_20_Item_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Drag_20_Add_20_Item_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Value,1,1,TERMINAL(0),ROOT(3));

result = vpx_constant(PARAMETERS,"TRUE",ROOT(4));

result = vpx_method_Project_20_DB_20_Item_20_Data_2F_Drag_20_Add_20_Item_case_1_local_4(PARAMETERS,TERMINAL(1),TERMINAL(2),ROOT(5));

result = vpx_method_Project_20_DB_20_Item_20_Data_2F_Drag_20_Add_20_Item_case_1_local_5(PARAMETERS,TERMINAL(3),TERMINAL(1),TERMINAL(5));

result = vpx_method_Project_20_DB_20_Item_20_Data_2F_Drag_20_Add_20_Item_case_1_local_6(PARAMETERS,TERMINAL(0),TERMINAL(1),TERMINAL(5));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(6)
}

enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Drag_20_Add_20_Item_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Drag_20_Add_20_Item_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"FALSE",ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Drag_20_Add_20_Item(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_DB_20_Item_20_Data_2F_Drag_20_Add_20_Item_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
vpx_method_Project_20_DB_20_Item_20_Data_2F_Drag_20_Add_20_Item_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Drag_20_Accept_3F_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"FALSE",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Drag_20_Receive_case_1_local_5_case_1_local_4_case_1_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Drag_20_Receive_case_1_local_5_case_1_local_4_case_1_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADERWITHNONE(9)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_method_Get_20_UInt32(PARAMETERS,TERMINAL(2),NONE,ROOT(3),ROOT(4));

result = vpx_constant(PARAMETERS,"0",ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_text,3,3,TERMINAL(1),TERMINAL(5),TERMINAL(4),ROOT(6),ROOT(7),ROOT(8));

result = kSuccess;

OUTPUT(0,TERMINAL(8))
FOOTERSINGLECASEWITHNONE(9)
}

enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Drag_20_Receive_case_1_local_5_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Drag_20_Receive_case_1_local_5_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(13)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\'TEXT\'",ROOT(2));

result = vpx_constant(PARAMETERS,"1",ROOT(3));

result = vpx_constant(PARAMETERS,"4096",ROOT(4));

result = vpx_constant(PARAMETERS,"void",ROOT(5));

result = vpx_method_Create_20_Block_20_Type(PARAMETERS,TERMINAL(5),TERMINAL(4),TERMINAL(3),ROOT(6));

result = vpx_constant(PARAMETERS,"0",ROOT(7));

PUTINTEGER(GetFlavorData( GETPOINTER(0,OpaqueDragRef,*,ROOT(9),TERMINAL(0)),GETINTEGER(TERMINAL(1)),GETINTEGER(TERMINAL(2)),GETPOINTER(0,void,*,ROOT(10),TERMINAL(6)),GETPOINTER(4,long int,*,ROOT(11),NONE),GETINTEGER(TERMINAL(7))),8);
result = kSuccess;

result = vpx_method_Project_20_DB_20_Item_20_Data_2F_Drag_20_Receive_case_1_local_5_case_1_local_4_case_1_local_9(PARAMETERS,TERMINAL(8),TERMINAL(10),TERMINAL(11),ROOT(12));

result = vpx_method_Block_20_Free(PARAMETERS,TERMINAL(6));

result = kSuccess;

OUTPUT(0,TERMINAL(12))
FOOTERSINGLECASEWITHNONE(13)
}

enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Drag_20_Receive_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Drag_20_Receive_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(8)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

PUTINTEGER(GetDragItemReferenceNumber( GETPOINTER(0,OpaqueDragRef,*,ROOT(3),TERMINAL(0)),GETINTEGER(TERMINAL(1)),GETPOINTER(4,unsigned int,*,ROOT(4),NONE)),2);
result = kSuccess;

result = vpx_method_Get_20_UInt32(PARAMETERS,TERMINAL(4),NONE,ROOT(5),ROOT(6));

result = vpx_method_Project_20_DB_20_Item_20_Data_2F_Drag_20_Receive_case_1_local_5_case_1_local_4(PARAMETERS,TERMINAL(0),TERMINAL(6),ROOT(7));

result = kSuccess;

OUTPUT(0,TERMINAL(7))
FOOTERSINGLECASEWITHNONE(8)
}

enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Drag_20_Receive_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Drag_20_Receive_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method__28_One_29_(PARAMETERS,TERMINAL(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_string_3F_,1,0,TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Databrowser,1,1,TERMINAL(0),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Window,1,1,TERMINAL(3),ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Expose_20_URL,2,0,TERMINAL(4),TERMINAL(2));

result = vpx_constant(PARAMETERS,"TRUE",ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTER(6)
}

enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Drag_20_Receive_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Drag_20_Receive_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
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

enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Drag_20_Receive_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Drag_20_Receive_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_DB_20_Item_20_Data_2F_Drag_20_Receive_case_1_local_6_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Project_20_DB_20_Item_20_Data_2F_Drag_20_Receive_case_1_local_6_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Drag_20_Receive_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Drag_20_Receive_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(10)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

PUTINTEGER(CountDragItems( GETPOINTER(0,OpaqueDragRef,*,ROOT(3),TERMINAL(1)),GETPOINTER(2,unsigned short,*,ROOT(4),NONE)),2);
result = kSuccess;

result = vpx_method_Get_20_UInt16(PARAMETERS,TERMINAL(4),NONE,ROOT(5),ROOT(6));

result = vpx_method_Make_20_Count(PARAMETERS,TERMINAL(6),ROOT(7));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(7))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Project_20_DB_20_Item_20_Data_2F_Drag_20_Receive_case_1_local_5(PARAMETERS,TERMINAL(1),LIST(7),ROOT(8));
LISTROOT(8,0)
REPEATFINISH
LISTROOTFINISH(8,0)
LISTROOTEND
} else {
ROOTEMPTY(8)
}

result = vpx_method_Project_20_DB_20_Item_20_Data_2F_Drag_20_Receive_case_1_local_6(PARAMETERS,TERMINAL(0),TERMINAL(8),ROOT(9));

result = kSuccess;

OUTPUT(0,TERMINAL(9))
FOOTERWITHNONE(10)
}

enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Drag_20_Receive_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Drag_20_Receive_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
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

enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Drag_20_Receive(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_DB_20_Item_20_Data_2F_Drag_20_Receive_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Project_20_DB_20_Item_20_Data_2F_Drag_20_Receive_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Change_20_Name(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Name,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Update_20_Items(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADERWITHNONE(6)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Databrowser,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
TERMINATEONSUCCESS

result = vpx_get(PARAMETERS,kVPXValue_Content,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_ItemID,1,1,TERMINAL(2),ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod__7E_Update_20_Items,5,1,TERMINAL(1),TERMINAL(4),TERMINAL(3),NONE,NONE,ROOT(5));

result = kSuccess;

FOOTERSINGLECASEWITHNONE(6)
}

enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Update_20_Self(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADERWITHNONE(5)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Databrowser,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
TERMINATEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_ParentID,1,1,TERMINAL(0),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,1,1,TERMINAL(0),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod__7E_Update_20_Items,5,1,TERMINAL(1),TERMINAL(2),TERMINAL(3),NONE,NONE,ROOT(4));

result = kSuccess;

FOOTERSINGLECASEWITHNONE(5)
}

enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Get_20_Identity_20_Name_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Get_20_Identity_20_Name_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Value,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Name,1,1,TERMINAL(2),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Get_20_Identity_20_Name_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Get_20_Identity_20_Name_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Name,1,1,TERMINAL(0),ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Get_20_Identity_20_Name(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_DB_20_Item_20_Data_2F_Get_20_Identity_20_Name_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Project_20_DB_20_Item_20_Data_2F_Get_20_Identity_20_Name_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Set_20_Value(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Value,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Direct_20_Value,2,0,TERMINAL(5),TERMINAL(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Make_20_Dirty,1,0,TERMINAL(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Force_20_Reinstall,1,0,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Dispose_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Dispose_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Value,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(2));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Remove_20_View,2,0,TERMINAL(2),TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Dispose(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Project_20_DB_20_Item_20_Data_2F_Dispose_case_1_local_2(PARAMETERS,TERMINAL(0));

result = vpx_call_context_super_method(PARAMETERS,kVPXMethod_Dispose,1,0,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_In_20_Message_20_Group_3F__case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_In_20_Message_20_Group_3F__case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(0),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP__28_in_29_,2,1,TERMINAL(1),TERMINAL(2),ROOT(3));

result = vpx_match(PARAMETERS,"0",TERMINAL(3));
NEXTCASEONSUCCESS

result = vpx_constant(PARAMETERS,"TRUE",ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_In_20_Message_20_Group_3F__case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_In_20_Message_20_Group_3F__case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
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

enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_In_20_Message_20_Group_3F_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_DB_20_Item_20_Data_2F_In_20_Message_20_Group_3F__case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Project_20_DB_20_Item_20_Data_2F_In_20_Message_20_Group_3F__case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Data_20_Message_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Data_20_Message_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Owner,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
NEXTCASEONFAILURE

result = kSuccess;

FOOTER(4)
}

enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Data_20_Message_case_2_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Data_20_Message_case_2_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Owner,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
TERMINATEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Remove_20_Items,2,0,TERMINAL(1),TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Data_20_Message_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Data_20_Message_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"Remove Self",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_method_Project_20_DB_20_Item_20_Data_2F_Data_20_Message_case_2_local_3(PARAMETERS,TERMINAL(0));

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Data_20_Message_case_3_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Data_20_Message_case_3_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Open_3F_,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Add_20_Content_20_Items,1,0,TERMINAL(0));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Update_20_Items,1,0,TERMINAL(0));

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Data_20_Message_case_3_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Data_20_Message_case_3_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Update_20_Items,1,0,TERMINAL(0));

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Data_20_Message_case_3_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Data_20_Message_case_3_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_DB_20_Item_20_Data_2F_Data_20_Message_case_3_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Project_20_DB_20_Item_20_Data_2F_Data_20_Message_case_3_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Data_20_Message_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Data_20_Message_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Reinstall_20_Data,1,0,TERMINAL(0));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Update_20_Self,1,0,TERMINAL(0));

result = vpx_method_Project_20_DB_20_Item_20_Data_2F_Data_20_Message_case_3_local_4(PARAMETERS,TERMINAL(0));

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Data_20_Message_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Data_20_Message_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"Refresh",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Reinstall_20_Data,1,0,TERMINAL(0));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Update_20_Self,1,0,TERMINAL(0));

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Data_20_Message_case_5(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Data_20_Message_case_5(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Data_20_Message(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_DB_20_Item_20_Data_2F_Data_20_Message_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
if(vpx_method_Project_20_DB_20_Item_20_Data_2F_Data_20_Message_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
if(vpx_method_Project_20_DB_20_Item_20_Data_2F_Data_20_Message_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
if(vpx_method_Project_20_DB_20_Item_20_Data_2F_Data_20_Message_case_4(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Project_20_DB_20_Item_20_Data_2F_Data_20_Message_case_5(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Send_20_Refresh_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Send_20_Refresh_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Value,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Refresh_20_Data,1,0,TERMINAL(2));

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Send_20_Refresh_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Send_20_Refresh_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Send_20_Refresh(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_DB_20_Item_20_Data_2F_Send_20_Refresh_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Project_20_DB_20_Item_20_Data_2F_Send_20_Refresh_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Send_20_Reinstall_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Send_20_Reinstall_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Value,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Send_20_Reinstall,1,0,TERMINAL(2));

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Send_20_Reinstall_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Send_20_Reinstall_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Send_20_Reinstall(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_DB_20_Item_20_Data_2F_Send_20_Reinstall_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Project_20_DB_20_Item_20_Data_2F_Send_20_Reinstall_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Destroy_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Destroy_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Value,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(2));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Name,1,1,TERMINAL(0),ROOT(3));

result = vpx_constant(PARAMETERS,"Destruct DBItem with value",ROOT(4));

result = vpx_method_Debug_20_OSError(PARAMETERS,TERMINAL(4),TERMINAL(3));

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Destroy(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Project_20_DB_20_Item_20_Data_2F_Destroy_case_1_local_2(PARAMETERS,TERMINAL(0));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Dispose,1,0,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Initialize_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Initialize_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Value,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(2));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Add_20_View,2,0,TERMINAL(2),TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Project_20_DB_20_Item_20_Data_2F_Initialize(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_context_super_method(PARAMETERS,kVPXMethod_Initialize,2,0,TERMINAL(0),TERMINAL(1));

result = vpx_method_Project_20_DB_20_Item_20_Data_2F_Initialize_case_1_local_3(PARAMETERS,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(2)
}

/* Stop Universals */



Nat4 VPLC_Project_20_DB_20_Item_20_Root_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Project_20_DB_20_Item_20_Root_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 141 374 }{ 200 300 } */
	tempAttribute = attribute_add("Name",tempClass,tempAttribute_Project_20_DB_20_Item_20_Root_2F_Name,environment);
	tempAttribute = attribute_add("Owner",tempClass,NULL,environment);
	tempAttribute = attribute_add("Value",tempClass,NULL,environment);
	tempAttribute = attribute_add("Container?",tempClass,tempAttribute_Project_20_DB_20_Item_20_Root_2F_Container_3F_,environment);
	tempAttribute = attribute_add("Open?",tempClass,tempAttribute_Project_20_DB_20_Item_20_Root_2F_Open_3F_,environment);
	tempAttribute = attribute_add("Editable?",tempClass,tempAttribute_Project_20_DB_20_Item_20_Root_2F_Editable_3F_,environment);
	tempAttribute = attribute_add("Content",tempClass,tempAttribute_Project_20_DB_20_Item_20_Root_2F_Content,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"Project DB Item Data");
	return kNOERROR;
}

/* Start Universals: { 60 60 }{ 200 300 } */
enum opTrigger vpx_method_Project_20_DB_20_Item_20_Root_2F_Get_20_ItemID(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,kDataBrowserNoItem,ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Project_20_DB_20_Item_20_Root_2F_Reinstall_20_Data(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Project_20_DB_20_Item_20_Root_2F_Initialize_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_DB_20_Item_20_Root_2F_Initialize_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Databrowser_20_Item_20_Data_2F_Get_20_ItemID(PARAMETERS,TERMINAL(1),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_ControlRef,1,1,TERMINAL(0),ROOT(3));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
TERMINATEONSUCCESS

PUTINTEGER(SetDataBrowserTarget( GETPOINTER(0,OpaqueControlRef,*,ROOT(5),TERMINAL(3)),GETINTEGER(TERMINAL(2))),4);
result = kSuccess;

result = vpx_constant(PARAMETERS,"SetDataBrowserTarget",ROOT(6));

result = vpx_method_Debug_20_OSError(PARAMETERS,TERMINAL(6),TERMINAL(4));

result = kSuccess;

FOOTERSINGLECASE(7)
}

enum opTrigger vpx_method_Project_20_DB_20_Item_20_Root_2F_Initialize(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Project_20_DB_20_Item_20_Root_2F_Initialize_case_1_local_2(PARAMETERS,TERMINAL(1),TERMINAL(0));

result = vpx_call_context_super_method(PARAMETERS,kVPXMethod_Initialize,2,0,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Project_20_DB_20_Item_20_Root_2F_Drag_20_Accept_3F_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"TRUE",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Project_20_DB_20_Item_20_Root_2F_Drag_20_Receive_case_1_local_5_case_1_local_4_case_1_local_9_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Project_20_DB_20_Item_20_Root_2F_Drag_20_Receive_case_1_local_5_case_1_local_4_case_1_local_9_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADERWITHNONE(9)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_method_Get_20_UInt32(PARAMETERS,TERMINAL(2),NONE,ROOT(3),ROOT(4));

result = vpx_constant(PARAMETERS,"0",ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_text,3,3,TERMINAL(1),TERMINAL(5),TERMINAL(4),ROOT(6),ROOT(7),ROOT(8));

result = kSuccess;

OUTPUT(0,TERMINAL(8))
FOOTERWITHNONE(9)
}

enum opTrigger vpx_method_Project_20_DB_20_Item_20_Root_2F_Drag_20_Receive_case_1_local_5_case_1_local_4_case_1_local_9_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Project_20_DB_20_Item_20_Root_2F_Drag_20_Receive_case_1_local_5_case_1_local_4_case_1_local_9_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADERWITHNONE(3)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = kSuccess;

OUTPUT(0,NONE)
FOOTERWITHNONE(3)
}

enum opTrigger vpx_method_Project_20_DB_20_Item_20_Root_2F_Drag_20_Receive_case_1_local_5_case_1_local_4_case_1_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Project_20_DB_20_Item_20_Root_2F_Drag_20_Receive_case_1_local_5_case_1_local_4_case_1_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_DB_20_Item_20_Root_2F_Drag_20_Receive_case_1_local_5_case_1_local_4_case_1_local_9_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
vpx_method_Project_20_DB_20_Item_20_Root_2F_Drag_20_Receive_case_1_local_5_case_1_local_4_case_1_local_9_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_DB_20_Item_20_Root_2F_Drag_20_Receive_case_1_local_5_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_DB_20_Item_20_Root_2F_Drag_20_Receive_case_1_local_5_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(13)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\'TEXT\'",ROOT(2));

result = vpx_constant(PARAMETERS,"1",ROOT(3));

result = vpx_constant(PARAMETERS,"4096",ROOT(4));

result = vpx_constant(PARAMETERS,"void",ROOT(5));

result = vpx_method_Create_20_Block_20_Type(PARAMETERS,TERMINAL(5),TERMINAL(4),TERMINAL(3),ROOT(6));

result = vpx_constant(PARAMETERS,"0",ROOT(7));

PUTINTEGER(GetFlavorData( GETPOINTER(0,OpaqueDragRef,*,ROOT(9),TERMINAL(0)),GETINTEGER(TERMINAL(1)),GETINTEGER(TERMINAL(2)),GETPOINTER(0,void,*,ROOT(10),TERMINAL(6)),GETPOINTER(4,long int,*,ROOT(11),NONE),GETINTEGER(TERMINAL(7))),8);
result = kSuccess;

result = vpx_method_Project_20_DB_20_Item_20_Root_2F_Drag_20_Receive_case_1_local_5_case_1_local_4_case_1_local_9(PARAMETERS,TERMINAL(8),TERMINAL(10),TERMINAL(11),ROOT(12));

result = vpx_method_Block_20_Free(PARAMETERS,TERMINAL(6));

result = kSuccess;

OUTPUT(0,TERMINAL(12))
FOOTERSINGLECASEWITHNONE(13)
}

enum opTrigger vpx_method_Project_20_DB_20_Item_20_Root_2F_Drag_20_Receive_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_DB_20_Item_20_Root_2F_Drag_20_Receive_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(8)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

PUTINTEGER(GetDragItemReferenceNumber( GETPOINTER(0,OpaqueDragRef,*,ROOT(3),TERMINAL(0)),GETINTEGER(TERMINAL(1)),GETPOINTER(4,unsigned int,*,ROOT(4),NONE)),2);
result = kSuccess;

result = vpx_method_Get_20_UInt32(PARAMETERS,TERMINAL(4),NONE,ROOT(5),ROOT(6));

result = vpx_method_Project_20_DB_20_Item_20_Root_2F_Drag_20_Receive_case_1_local_5_case_1_local_4(PARAMETERS,TERMINAL(0),TERMINAL(6),ROOT(7));

result = kSuccess;

OUTPUT(0,TERMINAL(7))
FOOTERSINGLECASEWITHNONE(8)
}

enum opTrigger vpx_method_Project_20_DB_20_Item_20_Root_2F_Drag_20_Receive_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_DB_20_Item_20_Root_2F_Drag_20_Receive_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method__28_One_29_(PARAMETERS,TERMINAL(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_string_3F_,1,0,TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Databrowser,1,1,TERMINAL(0),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Window,1,1,TERMINAL(3),ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Expose_20_URL,2,0,TERMINAL(4),TERMINAL(2));

result = vpx_constant(PARAMETERS,"TRUE",ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTER(6)
}

enum opTrigger vpx_method_Project_20_DB_20_Item_20_Root_2F_Drag_20_Receive_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_DB_20_Item_20_Root_2F_Drag_20_Receive_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
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

enum opTrigger vpx_method_Project_20_DB_20_Item_20_Root_2F_Drag_20_Receive_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_DB_20_Item_20_Root_2F_Drag_20_Receive_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_DB_20_Item_20_Root_2F_Drag_20_Receive_case_1_local_6_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Project_20_DB_20_Item_20_Root_2F_Drag_20_Receive_case_1_local_6_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_DB_20_Item_20_Root_2F_Drag_20_Receive_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_DB_20_Item_20_Root_2F_Drag_20_Receive_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(10)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

PUTINTEGER(CountDragItems( GETPOINTER(0,OpaqueDragRef,*,ROOT(3),TERMINAL(1)),GETPOINTER(2,unsigned short,*,ROOT(4),NONE)),2);
result = kSuccess;

result = vpx_method_Get_20_UInt16(PARAMETERS,TERMINAL(4),NONE,ROOT(5),ROOT(6));

result = vpx_method_Make_20_Count(PARAMETERS,TERMINAL(6),ROOT(7));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(7))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Project_20_DB_20_Item_20_Root_2F_Drag_20_Receive_case_1_local_5(PARAMETERS,TERMINAL(1),LIST(7),ROOT(8));
LISTROOT(8,0)
REPEATFINISH
LISTROOTFINISH(8,0)
LISTROOTEND
} else {
ROOTEMPTY(8)
}

result = vpx_method_Project_20_DB_20_Item_20_Root_2F_Drag_20_Receive_case_1_local_6(PARAMETERS,TERMINAL(0),TERMINAL(8),ROOT(9));

result = kSuccess;

OUTPUT(0,TERMINAL(9))
FOOTERWITHNONE(10)
}

enum opTrigger vpx_method_Project_20_DB_20_Item_20_Root_2F_Drag_20_Receive_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_DB_20_Item_20_Root_2F_Drag_20_Receive_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
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

enum opTrigger vpx_method_Project_20_DB_20_Item_20_Root_2F_Drag_20_Receive(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_DB_20_Item_20_Root_2F_Drag_20_Receive_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Project_20_DB_20_Item_20_Root_2F_Drag_20_Receive_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

/* Stop Universals */



Nat4 VPLC_Value_20_Clipboard_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Value_20_Clipboard_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 200 300 } */
	tempAttribute = attribute_add("Archive Value",tempClass,NULL,environment);
	tempAttribute = attribute_add("Archive Size",tempClass,tempAttribute_Value_20_Clipboard_2F_Archive_20_Size,environment);
/* Stop Attributes */

/* NULL SUPER CLASS */
	return kNOERROR;
}

/* Start Universals: { 60 60 }{ 200 300 } */
enum opTrigger vpx_method_Value_20_Clipboard_2F_Can_20_Do_3F__case_1_local_4_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Value_20_Clipboard_2F_Can_20_Do_3F__case_1_local_4_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"Item Data",TERMINAL(1));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(2)
}

enum opTrigger vpx_method_Value_20_Clipboard_2F_Can_20_Do_3F__case_1_local_4_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Value_20_Clipboard_2F_Can_20_Do_3F__case_1_local_4_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;
FAILONSUCCESS

OUTPUT(0,NONE)
FOOTERWITHNONE(1)
}

enum opTrigger vpx_method_Value_20_Clipboard_2F_Can_20_Do_3F__case_1_local_4_case_1_local_2_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Value_20_Clipboard_2F_Can_20_Do_3F__case_1_local_4_case_1_local_2_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"List Data",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(3),ROOT(4));

result = vpx_match(PARAMETERS,"Item Data",TERMINAL(4));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(5)
}

enum opTrigger vpx_method_Value_20_Clipboard_2F_Can_20_Do_3F__case_1_local_4_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Value_20_Clipboard_2F_Can_20_Do_3F__case_1_local_4_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Value_20_Clipboard_2F_Can_20_Do_3F__case_1_local_4_case_1_local_2_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_Value_20_Clipboard_2F_Can_20_Do_3F__case_1_local_4_case_1_local_2_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Value_20_Clipboard_2F_Can_20_Do_3F__case_1_local_4_case_1_local_2_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Value_20_Clipboard_2F_Can_20_Do_3F__case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Value_20_Clipboard_2F_Can_20_Do_3F__case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Value_20_Clipboard_2F_Can_20_Do_3F__case_1_local_4_case_1_local_2(PARAMETERS,TERMINAL(0),ROOT(2));
FAILONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(4),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP__28_in_29_,2,1,TERMINAL(1),TERMINAL(5),ROOT(6));

result = vpx_match(PARAMETERS,"0",TERMINAL(6));
FAILONSUCCESS

result = kSuccess;

FOOTERSINGLECASE(7)
}

enum opTrigger vpx_method_Value_20_Clipboard_2F_Can_20_Do_3F__case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Value_20_Clipboard_2F_Can_20_Do_3F__case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_match(PARAMETERS,"\'EDcv\'",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"( \"Attribute Data\" \"Class Attribute Data\" \"Persistent Data\" )",ROOT(3));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(2))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Value_20_Clipboard_2F_Can_20_Do_3F__case_1_local_4(PARAMETERS,LIST(2),TERMINAL(3));
FAILONFAILURE
REPEATFINISH
} else {
}

result = kSuccess;

FOOTER(4)
}

enum opTrigger vpx_method_Value_20_Clipboard_2F_Can_20_Do_3F__case_2_local_6_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Value_20_Clipboard_2F_Can_20_Do_3F__case_2_local_6_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"Item Data",TERMINAL(1));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(2)
}

enum opTrigger vpx_method_Value_20_Clipboard_2F_Can_20_Do_3F__case_2_local_6_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Value_20_Clipboard_2F_Can_20_Do_3F__case_2_local_6_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;
FAILONSUCCESS

OUTPUT(0,NONE)
FOOTERWITHNONE(1)
}

enum opTrigger vpx_method_Value_20_Clipboard_2F_Can_20_Do_3F__case_2_local_6_case_1_local_2_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Value_20_Clipboard_2F_Can_20_Do_3F__case_2_local_6_case_1_local_2_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"List Data",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(3),ROOT(4));

result = vpx_match(PARAMETERS,"Item Data",TERMINAL(4));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(5)
}

enum opTrigger vpx_method_Value_20_Clipboard_2F_Can_20_Do_3F__case_2_local_6_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Value_20_Clipboard_2F_Can_20_Do_3F__case_2_local_6_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Value_20_Clipboard_2F_Can_20_Do_3F__case_2_local_6_case_1_local_2_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_Value_20_Clipboard_2F_Can_20_Do_3F__case_2_local_6_case_1_local_2_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Value_20_Clipboard_2F_Can_20_Do_3F__case_2_local_6_case_1_local_2_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Value_20_Clipboard_2F_Can_20_Do_3F__case_2_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Value_20_Clipboard_2F_Can_20_Do_3F__case_2_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Value_20_Clipboard_2F_Can_20_Do_3F__case_2_local_6_case_1_local_2(PARAMETERS,TERMINAL(0),ROOT(2));
FAILONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(4),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP__28_in_29_,2,1,TERMINAL(1),TERMINAL(5),ROOT(6));

result = vpx_match(PARAMETERS,"0",TERMINAL(6));
FAILONSUCCESS

result = kSuccess;

FOOTERSINGLECASE(7)
}

enum opTrigger vpx_method_Value_20_Clipboard_2F_Can_20_Do_3F__case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Value_20_Clipboard_2F_Can_20_Do_3F__case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_match(PARAMETERS,"\'EDpv\'",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Archive_20_Value,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(4));
FAILONSUCCESS

result = vpx_constant(PARAMETERS,"( \"Attribute Data\" \"Class Attribute Data\" \"Persistent Data\" )",ROOT(5));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(2))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Value_20_Clipboard_2F_Can_20_Do_3F__case_2_local_6(PARAMETERS,LIST(2),TERMINAL(5));
FAILONFAILURE
REPEATFINISH
} else {
}

result = kSuccess;

FOOTER(6)
}

enum opTrigger vpx_method_Value_20_Clipboard_2F_Can_20_Do_3F__case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Value_20_Clipboard_2F_Can_20_Do_3F__case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = kSuccess;
FAILONSUCCESS

FOOTER(3)
}

enum opTrigger vpx_method_Value_20_Clipboard_2F_Can_20_Do_3F_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Value_20_Clipboard_2F_Can_20_Do_3F__case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2))
if(vpx_method_Value_20_Clipboard_2F_Can_20_Do_3F__case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2))
vpx_method_Value_20_Clipboard_2F_Can_20_Do_3F__case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2);
return outcome;
}

enum opTrigger vpx_method_Value_20_Clipboard_2F_Copy_20_Value_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Value_20_Clipboard_2F_Copy_20_Value_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Value_20_Address,1,1,TERMINAL(2),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_Value_20_Clipboard_2F_Copy_20_Value_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Value_20_Clipboard_2F_Copy_20_Value_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(1)
}

enum opTrigger vpx_method_Value_20_Clipboard_2F_Copy_20_Value_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Value_20_Clipboard_2F_Copy_20_Value_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Value_20_Clipboard_2F_Copy_20_Value_case_1_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Value_20_Clipboard_2F_Copy_20_Value_case_1_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Value_20_Clipboard_2F_Copy_20_Value(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(12)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(1),ROOT(3),ROOT(4));

result = vpx_constant(PARAMETERS,"archive",ROOT(5));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(2))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Value_20_Clipboard_2F_Copy_20_Value_case_1_local_4(PARAMETERS,LIST(2),ROOT(6));
LISTROOT(6,0)
REPEATFINISH
LISTROOTFINISH(6,0)
LISTROOTEND
} else {
ROOTEMPTY(6)
}

if( (repeatLimit = vpx_multiplex(1,TERMINAL(6))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Value_20_Data,3,1,TERMINAL(4),LIST(6),TERMINAL(5),ROOT(7));
LISTROOT(7,0)
REPEATFINISH
LISTROOTFINISH(7,0)
LISTROOTEND
} else {
ROOTEMPTY(7)
}

result = vpx_call_primitive(PARAMETERS,VPLP_object_2D_to_2D_archive,1,2,TERMINAL(7),ROOT(8),ROOT(9));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Clear,1,0,TERMINAL(0));

result = vpx_set(PARAMETERS,kVPXValue_Archive_20_Value,TERMINAL(0),TERMINAL(8),ROOT(10));

result = vpx_set(PARAMETERS,kVPXValue_Archive_20_Size,TERMINAL(10),TERMINAL(9),ROOT(11));

result = kSuccess;

FOOTERSINGLECASE(12)
}

enum opTrigger vpx_method_Value_20_Clipboard_2F_Paste_20_Value_case_1_local_4_case_1_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Value_20_Clipboard_2F_Paste_20_Value_case_1_local_4_case_1_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(0),ROOT(2));

result = vpx_match(PARAMETERS,"Value Item",TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Value,2,0,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_Value_20_Clipboard_2F_Paste_20_Value_case_1_local_4_case_1_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Value_20_Clipboard_2F_Paste_20_Value_case_1_local_4_case_1_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Value_20_Address,2,0,TERMINAL(3),TERMINAL(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Make_20_Dirty,1,0,TERMINAL(3));

result = kSuccess;

FOOTER(4)
}

enum opTrigger vpx_method_Value_20_Clipboard_2F_Paste_20_Value_case_1_local_4_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Value_20_Clipboard_2F_Paste_20_Value_case_1_local_4_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Value_20_Clipboard_2F_Paste_20_Value_case_1_local_4_case_1_local_7_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Value_20_Clipboard_2F_Paste_20_Value_case_1_local_4_case_1_local_7_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Value_20_Clipboard_2F_Paste_20_Value_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Value_20_Clipboard_2F_Paste_20_Value_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(1),ROOT(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_archive_2D_to_2D_object,1,1,TERMINAL(0),ROOT(5));

result = vpx_constant(PARAMETERS,"archive",ROOT(6));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(5))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Object_20_To_20_Value,3,1,TERMINAL(4),LIST(5),TERMINAL(6),ROOT(7));
LISTROOT(7,0)
REPEATFINISH
LISTROOTFINISH(7,0)
LISTROOTEND
} else {
ROOTEMPTY(7)
}

result = vpx_method__28_One_29_(PARAMETERS,TERMINAL(7),ROOT(8));

result = vpx_method_Value_20_Clipboard_2F_Paste_20_Value_case_1_local_4_case_1_local_7(PARAMETERS,TERMINAL(2),TERMINAL(8));

result = kSuccess;

FOOTERSINGLECASE(9)
}

enum opTrigger vpx_method_Value_20_Clipboard_2F_Paste_20_Value(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Archive_20_Value,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(4));
FAILONSUCCESS

if( (repeatLimit = vpx_multiplex(1,TERMINAL(2))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Value_20_Clipboard_2F_Paste_20_Value_case_1_local_4(PARAMETERS,TERMINAL(4),TERMINAL(1),LIST(2));
REPEATFINISH
} else {
}

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Value_20_Clipboard_2F_Clear(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = vpx_set(PARAMETERS,kVPXValue_Archive_20_Value,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_constant(PARAMETERS,"0",ROOT(3));

result = vpx_set(PARAMETERS,kVPXValue_Archive_20_Size,TERMINAL(0),TERMINAL(3),ROOT(4));

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Value_20_Clipboard_2F_Open(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Value_20_Clipboard_2F_Close(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Clear,1,0,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(1)
}

/* Stop Universals */



Nat4 VPLC_Project_20_DB_20_Method_20_Data_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Project_20_DB_20_Method_20_Data_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 200 300 } */
	tempAttribute = attribute_add("Name",tempClass,tempAttribute_Project_20_DB_20_Method_20_Data_2F_Name,environment);
	tempAttribute = attribute_add("Owner",tempClass,NULL,environment);
	tempAttribute = attribute_add("Value",tempClass,NULL,environment);
	tempAttribute = attribute_add("Container?",tempClass,tempAttribute_Project_20_DB_20_Method_20_Data_2F_Container_3F_,environment);
	tempAttribute = attribute_add("Open?",tempClass,tempAttribute_Project_20_DB_20_Method_20_Data_2F_Open_3F_,environment);
	tempAttribute = attribute_add("Editable?",tempClass,tempAttribute_Project_20_DB_20_Method_20_Data_2F_Editable_3F_,environment);
	tempAttribute = attribute_add("Content",tempClass,tempAttribute_Project_20_DB_20_Method_20_Data_2F_Content,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"Project DB Item Data");
	return kNOERROR;
}

/* Start Universals: { 342 1186 }{ 200 300 } */
enum opTrigger vpx_method_Project_20_DB_20_Method_20_Data_2F_Install_20_Data_case_1_local_5_case_1_local_11_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_DB_20_Method_20_Data_2F_Install_20_Data_case_1_local_5_case_1_local_11_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_match(PARAMETERS,"( )",TERMINAL(2));
NEXTCASEONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Project_20_DB_20_Method_20_Data_2F_Install_20_Data_case_1_local_5_case_1_local_11_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_DB_20_Method_20_Data_2F_Install_20_Data_case_1_local_5_case_1_local_11_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_New_20_Element,1,1,TERMINAL(0),ROOT(1));

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,1,1,TERMINAL(1),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Project_20_DB_20_Method_20_Data_2F_Install_20_Data_case_1_local_5_case_1_local_11(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_DB_20_Method_20_Data_2F_Install_20_Data_case_1_local_5_case_1_local_11(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_DB_20_Method_20_Data_2F_Install_20_Data_case_1_local_5_case_1_local_11_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Project_20_DB_20_Method_20_Data_2F_Install_20_Data_case_1_local_5_case_1_local_11_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_DB_20_Method_20_Data_2F_Install_20_Data_case_1_local_5_case_1_local_12(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_DB_20_Method_20_Data_2F_Install_20_Data_case_1_local_5_case_1_local_12(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(0),ROOT(2));

result = vpx_match(PARAMETERS,"Item Data",TERMINAL(2));
TERMINATEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Install_20_Names,2,0,TERMINAL(4),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Project_20_DB_20_Method_20_Data_2F_Install_20_Data_case_1_local_5_case_1_local_13_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_DB_20_Method_20_Data_2F_Install_20_Data_case_1_local_5_case_1_local_13_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

if( (repeatLimit = vpx_multiplex(1,TERMINAL(1))) ){
LISTROOTBEGIN(2)
REPEATBEGINWITHCOUNTER
result = vpx_get(PARAMETERS,kVPXValue_Value,LIST(1),ROOT(2),ROOT(3));
LISTROOT(2,0)
LISTROOT(3,1)
REPEATFINISH
LISTROOTFINISH(2,0)
LISTROOTFINISH(3,1)
LISTROOTEND
} else {
ROOTEMPTY(2)
ROOTEMPTY(3)
}

result = vpx_call_primitive(PARAMETERS,VPLP__28_in_29_,2,1,TERMINAL(3),TERMINAL(0),ROOT(4));

result = vpx_match(PARAMETERS,"0",TERMINAL(4));
NEXTCASEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_nth,2,1,TERMINAL(2),TERMINAL(4),ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Name,1,1,TERMINAL(0),ROOT(6));

result = vpx_set(PARAMETERS,kVPXValue_Name,TERMINAL(5),TERMINAL(6),ROOT(7));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTER(8)
}

enum opTrigger vpx_method_Project_20_DB_20_Method_20_Data_2F_Install_20_Data_case_1_local_5_case_1_local_13_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_DB_20_Method_20_Data_2F_Install_20_Data_case_1_local_5_case_1_local_13_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(10)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_Project_20_DB_20_Case_20_Data,1,1,NONE,ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Name,1,1,TERMINAL(0),ROOT(3));

result = vpx_set(PARAMETERS,kVPXValue_Name,TERMINAL(2),TERMINAL(3),ROOT(4));

result = vpx_constant(PARAMETERS,"FALSE",ROOT(5));

result = vpx_set(PARAMETERS,kVPXValue_Container_3F_,TERMINAL(4),TERMINAL(5),ROOT(6));

result = vpx_constant(PARAMETERS,"FALSE",ROOT(7));

result = vpx_set(PARAMETERS,kVPXValue_Editable_3F_,TERMINAL(6),TERMINAL(7),ROOT(8));

result = vpx_set(PARAMETERS,kVPXValue_Value,TERMINAL(2),TERMINAL(0),ROOT(9));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Add_20_View,2,0,TERMINAL(0),TERMINAL(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERWITHNONE(10)
}

enum opTrigger vpx_method_Project_20_DB_20_Method_20_Data_2F_Install_20_Data_case_1_local_5_case_1_local_13(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Project_20_DB_20_Method_20_Data_2F_Install_20_Data_case_1_local_5_case_1_local_13(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_DB_20_Method_20_Data_2F_Install_20_Data_case_1_local_5_case_1_local_13_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Project_20_DB_20_Method_20_Data_2F_Install_20_Data_case_1_local_5_case_1_local_13_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_DB_20_Method_20_Data_2F_Install_20_Data_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_DB_20_Method_20_Data_2F_Install_20_Data_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(12)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_persistent(PARAMETERS,kVPXValue_Deep_20_Case_20_Items_3F_,0,1,ROOT(2));

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(1),ROOT(3));

result = vpx_match(PARAMETERS,"Item Data",TERMINAL(3));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"TRUE",ROOT(4));

result = vpx_set(PARAMETERS,kVPXValue_Container_3F_,TERMINAL(0),TERMINAL(4),ROOT(5));

result = vpx_get(PARAMETERS,kVPXValue_Content,TERMINAL(5),ROOT(6),ROOT(7));

result = vpx_constant(PARAMETERS,"Case Data",ROOT(8));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(1),TERMINAL(8),ROOT(9));
NEXTCASEONFAILURE

result = vpx_method_Project_20_DB_20_Method_20_Data_2F_Install_20_Data_case_1_local_5_case_1_local_11(PARAMETERS,TERMINAL(9),ROOT(10));

result = vpx_method_Project_20_DB_20_Method_20_Data_2F_Install_20_Data_case_1_local_5_case_1_local_12(PARAMETERS,TERMINAL(1),TERMINAL(9));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(10))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Project_20_DB_20_Method_20_Data_2F_Install_20_Data_case_1_local_5_case_1_local_13(PARAMETERS,LIST(10),TERMINAL(7),ROOT(11));
LISTROOT(11,0)
REPEATFINISH
LISTROOTFINISH(11,0)
LISTROOTEND
} else {
ROOTEMPTY(11)
}

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Items,2,0,TERMINAL(5),TERMINAL(11));

result = kSuccess;

FOOTER(12)
}

enum opTrigger vpx_method_Project_20_DB_20_Method_20_Data_2F_Install_20_Data_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_DB_20_Method_20_Data_2F_Install_20_Data_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"FALSE",ROOT(2));

result = vpx_set(PARAMETERS,kVPXValue_Container_3F_,TERMINAL(0),TERMINAL(2),ROOT(3));

result = vpx_constant(PARAMETERS,"( )",ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Items,2,0,TERMINAL(3),TERMINAL(4));

result = kSuccess;

FOOTER(5)
}

enum opTrigger vpx_method_Project_20_DB_20_Method_20_Data_2F_Install_20_Data_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_DB_20_Method_20_Data_2F_Install_20_Data_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_DB_20_Method_20_Data_2F_Install_20_Data_case_1_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Project_20_DB_20_Method_20_Data_2F_Install_20_Data_case_1_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Project_20_DB_20_Method_20_Data_2F_Install_20_Data(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Value,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Name,1,1,TERMINAL(1),ROOT(3));

result = vpx_set(PARAMETERS,kVPXValue_Name,TERMINAL(0),TERMINAL(3),ROOT(4));

result = vpx_method_Project_20_DB_20_Method_20_Data_2F_Install_20_Data_case_1_local_5(PARAMETERS,TERMINAL(0),TERMINAL(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Add_20_View,2,0,TERMINAL(1),TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Project_20_DB_20_Method_20_Data_2F_Double_20_Clicked_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex);
enum opTrigger vpx_method_Project_20_DB_20_Method_20_Data_2F_Double_20_Clicked_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex)
{
HEADER(1)
result = kSuccess;

result = vpx_persistent(PARAMETERS,kVPXValue_Deep_20_Case_20_Items_3F_,0,1,ROOT(0));

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(0));
NEXTCASEONSUCCESS

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_Project_20_DB_20_Method_20_Data_2F_Double_20_Clicked_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex);
enum opTrigger vpx_method_Project_20_DB_20_Method_20_Data_2F_Double_20_Clicked_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex)
{
HEADERWITHNONE(1)
result = kSuccess;

result = vpx_method_Modifier_20_Key_20_Pressed_3F_(PARAMETERS,NONE);
FAILONFAILURE

result = kSuccess;

FOOTERWITHNONE(1)
}

enum opTrigger vpx_method_Project_20_DB_20_Method_20_Data_2F_Double_20_Clicked_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex);
enum opTrigger vpx_method_Project_20_DB_20_Method_20_Data_2F_Double_20_Clicked_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_DB_20_Method_20_Data_2F_Double_20_Clicked_case_1_local_2_case_1(environment, &outcome, inputRepeat, contextIndex))
vpx_method_Project_20_DB_20_Method_20_Data_2F_Double_20_Clicked_case_1_local_2_case_2(environment, &outcome, inputRepeat, contextIndex);
return outcome;
}

enum opTrigger vpx_method_Project_20_DB_20_Method_20_Data_2F_Double_20_Clicked_case_1_local_4_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_DB_20_Method_20_Data_2F_Double_20_Clicked_case_1_local_4_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_match(PARAMETERS,"( )",TERMINAL(2));
NEXTCASEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,1,TERMINAL(2),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_Project_20_DB_20_Method_20_Data_2F_Double_20_Clicked_case_1_local_4_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_DB_20_Method_20_Data_2F_Double_20_Clicked_case_1_local_4_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_New_20_Element,1,1,TERMINAL(0),ROOT(1));

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(0),ROOT(2),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(4)
}

enum opTrigger vpx_method_Project_20_DB_20_Method_20_Data_2F_Double_20_Clicked_case_1_local_4_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Project_20_DB_20_Method_20_Data_2F_Double_20_Clicked_case_1_local_4_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_DB_20_Method_20_Data_2F_Double_20_Clicked_case_1_local_4_case_1_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Project_20_DB_20_Method_20_Data_2F_Double_20_Clicked_case_1_local_4_case_1_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Project_20_DB_20_Method_20_Data_2F_Double_20_Clicked_case_1_local_4_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Project_20_DB_20_Method_20_Data_2F_Double_20_Clicked_case_1_local_4_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(0),ROOT(2));

result = vpx_match(PARAMETERS,"Item Data",TERMINAL(2));
TERMINATEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Install_20_Names,2,0,TERMINAL(4),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Project_20_DB_20_Method_20_Data_2F_Double_20_Clicked_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Project_20_DB_20_Method_20_Data_2F_Double_20_Clicked_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Case Data",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));
FAILONFAILURE

result = vpx_method_Project_20_DB_20_Method_20_Data_2F_Double_20_Clicked_case_1_local_4_case_1_local_4(PARAMETERS,TERMINAL(2),ROOT(3));

result = vpx_method_Project_20_DB_20_Method_20_Data_2F_Double_20_Clicked_case_1_local_4_case_1_local_5(PARAMETERS,TERMINAL(0),TERMINAL(2));

result = vpx_constant(PARAMETERS,"Operation Data",ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(3),TERMINAL(4),ROOT(5));
FAILONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open_20_Editor,1,0,TERMINAL(5));

result = kSuccess;

FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Project_20_DB_20_Method_20_Data_2F_Double_20_Clicked_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Project_20_DB_20_Method_20_Data_2F_Double_20_Clicked_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Project_20_DB_20_Method_20_Data_2F_Double_20_Clicked_case_1_local_2(PARAMETERS);
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Value,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_method_Project_20_DB_20_Method_20_Data_2F_Double_20_Clicked_case_1_local_4(PARAMETERS,TERMINAL(2));
NEXTCASEONFAILURE

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_Project_20_DB_20_Method_20_Data_2F_Double_20_Clicked_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Project_20_DB_20_Method_20_Data_2F_Double_20_Clicked_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_call_context_super_method(PARAMETERS,kVPXMethod_Double_20_Clicked,1,0,TERMINAL(0));

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_Project_20_DB_20_Method_20_Data_2F_Double_20_Clicked(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Project_20_DB_20_Method_20_Data_2F_Double_20_Clicked_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Project_20_DB_20_Method_20_Data_2F_Double_20_Clicked_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Project_20_DB_20_Method_20_Data_2F_Change_20_Name_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Project_20_DB_20_Method_20_Data_2F_Change_20_Name_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(7)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Value,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_constant(PARAMETERS,"Case Data",ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(2),TERMINAL(5),ROOT(6));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Install_20_Names,2,0,TERMINAL(4),TERMINAL(6));

result = kSuccess;

FOOTERSINGLECASE(7)
}

enum opTrigger vpx_method_Project_20_DB_20_Method_20_Data_2F_Change_20_Name(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Name,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_method_Project_20_DB_20_Method_20_Data_2F_Change_20_Name_case_1_local_3(PARAMETERS,TERMINAL(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Send_20_Refresh,1,0,TERMINAL(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

/* Stop Universals */



Nat4 VPLC_Project_20_DB_20_Case_20_Data_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Project_20_DB_20_Case_20_Data_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 200 300 } */
	tempAttribute = attribute_add("Name",tempClass,tempAttribute_Project_20_DB_20_Case_20_Data_2F_Name,environment);
	tempAttribute = attribute_add("Owner",tempClass,NULL,environment);
	tempAttribute = attribute_add("Value",tempClass,NULL,environment);
	tempAttribute = attribute_add("Container?",tempClass,tempAttribute_Project_20_DB_20_Case_20_Data_2F_Container_3F_,environment);
	tempAttribute = attribute_add("Open?",tempClass,tempAttribute_Project_20_DB_20_Case_20_Data_2F_Open_3F_,environment);
	tempAttribute = attribute_add("Editable?",tempClass,tempAttribute_Project_20_DB_20_Case_20_Data_2F_Editable_3F_,environment);
	tempAttribute = attribute_add("Content",tempClass,tempAttribute_Project_20_DB_20_Case_20_Data_2F_Content,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"Project DB Item Data");
	return kNOERROR;
}

/* Start Universals: { 60 60 }{ 200 300 } */
enum opTrigger vpx_method_Project_20_DB_20_Case_20_Data_2F_Double_20_Clicked(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Value,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_constant(PARAMETERS,"Operation Data",ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(2),TERMINAL(3),ROOT(4));
TERMINATEONFAILURE

result = vpx_method_Set_20_Arrow_20_Cursor(PARAMETERS);

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open_20_Editor,1,0,TERMINAL(4));

result = kSuccess;

FOOTERSINGLECASE(5)
}

/* Stop Universals */






Nat4	loadClasses_Project_20_Window(V_Environment environment);
Nat4	loadClasses_Project_20_Window(V_Environment environment)
{
	V_Class result = NULL;

	result = class_new("Project Viewer Window",environment);
	if(result == NULL) return kERROR;
	VPLC_Project_20_Viewer_20_Window_class_load(result,environment);
	result = class_new("Project Window HIToolbar",environment);
	if(result == NULL) return kERROR;
	VPLC_Project_20_Window_20_HIToolbar_class_load(result,environment);
	result = class_new("Project Databrowser Control",environment);
	if(result == NULL) return kERROR;
	VPLC_Project_20_Databrowser_20_Control_class_load(result,environment);
	result = class_new("Project DB Item Data",environment);
	if(result == NULL) return kERROR;
	VPLC_Project_20_DB_20_Item_20_Data_class_load(result,environment);
	result = class_new("Project DB Item Root",environment);
	if(result == NULL) return kERROR;
	VPLC_Project_20_DB_20_Item_20_Root_class_load(result,environment);
	result = class_new("Value Clipboard",environment);
	if(result == NULL) return kERROR;
	VPLC_Value_20_Clipboard_class_load(result,environment);
	result = class_new("Project DB Method Data",environment);
	if(result == NULL) return kERROR;
	VPLC_Project_20_DB_20_Method_20_Data_class_load(result,environment);
	result = class_new("Project DB Case Data",environment);
	if(result == NULL) return kERROR;
	VPLC_Project_20_DB_20_Case_20_Data_class_load(result,environment);
	return kNOERROR;

}

Nat4	loadUniversals_Project_20_Window(V_Environment environment);
Nat4	loadUniversals_Project_20_Window(V_Environment environment)
{
	V_Method result = NULL;

	result = method_new("Get Front Project",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Get_20_Front_20_Project,NULL);

	result = method_new("Front Or New Project",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Front_20_Or_20_New_20_Project,NULL);

	result = method_new("Open Project File",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Open_20_Project_20_File,NULL);

	result = method_new("Open Library File",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Open_20_Library_20_File,NULL);

	result = method_new("Open Section File",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Open_20_Section_20_File,NULL);

	result = method_new("Open Application File",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Open_20_Application_20_File,NULL);

	result = method_new("Open Resource File",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Open_20_Resource_20_File,NULL);

	result = method_new("File Open Project Callback",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_File_20_Open_20_Project_20_Callback,NULL);

	result = method_new("File Open Library Callback",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_File_20_Open_20_Library_20_Callback,NULL);

	result = method_new("File Open Section Callback",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_File_20_Open_20_Section_20_Callback,NULL);

	result = method_new("File Open Application Callback",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_File_20_Open_20_Application_20_Callback,NULL);

	result = method_new("File Open Recource Callback",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_File_20_Open_20_Recource_20_Callback,NULL);

	result = method_new("Select Section",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Select_20_Section,NULL);

	result = method_new("Select Class",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Select_20_Class,NULL);

	result = method_new("Get Value Clipboard",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Get_20_Value_20_Clipboard,NULL);

	result = method_new("Create Class Heirarchy List",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Create_20_Class_20_Heirarchy_20_List,NULL);

	result = method_new("Modifier Key Pressed?",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Modifier_20_Key_20_Pressed_3F_,NULL);

	result = method_new("Get Front Method",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Get_20_Front_20_Method,NULL);

	result = method_new("Get Item Helper",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Get_20_Item_20_Helper,NULL);

	result = method_new("Import CPX File",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Import_20_CPX_20_File,NULL);

	result = method_new("File Import CPX Callback",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_File_20_Import_20_CPX_20_Callback,NULL);

	result = method_new("Add Files To Project",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Add_20_Files_20_To_20_Project,NULL);

	result = method_new("Project Viewer Window/CE HICommand Update Status",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_Viewer_20_Window_2F_CE_20_HICommand_20_Update_20_Status,NULL);

	result = method_new("Project Viewer Window/CE HICommand Process",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_Viewer_20_Window_2F_CE_20_HICommand_20_Process,NULL);

	result = method_new("Project Viewer Window/CE Window Bounds Changed",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_Viewer_20_Window_2F_CE_20_Window_20_Bounds_20_Changed,NULL);

	result = method_new("Project Viewer Window/Open",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_Viewer_20_Window_2F_Open,NULL);

	result = method_new("Project Viewer Window/Close",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_Viewer_20_Window_2F_Close,NULL);

	result = method_new("Project Viewer Window/Toggle DataBrowser",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_Viewer_20_Window_2F_Toggle_20_DataBrowser,NULL);

	result = method_new("Project Viewer Window/Set Busy?",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_Viewer_20_Window_2F_Set_20_Busy_3F_,NULL);

	result = method_new("Project Viewer Window/Set Prompt",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_Viewer_20_Window_2F_Set_20_Prompt,NULL);

	result = method_new("Project Viewer Window/xFile New",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_Viewer_20_Window_2F_xFile_20_New,NULL);

	result = method_new("Project Viewer Window/xFile New Project",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_Viewer_20_Window_2F_xFile_20_New_20_Project,NULL);

	result = method_new("Project Viewer Window/Extract Data",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_Viewer_20_Window_2F_Extract_20_Data,NULL);

	result = method_new("Project Viewer Window/Install Data",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_Viewer_20_Window_2F_Install_20_Data,NULL);

	result = method_new("Project Viewer Window/Refresh Data",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_Viewer_20_Window_2F_Refresh_20_Data,NULL);

	result = method_new("Project Viewer Window/Update Data",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_Viewer_20_Window_2F_Update_20_Data,NULL);

	result = method_new("Project Viewer Window/Reinstall Data",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_Viewer_20_Window_2F_Reinstall_20_Data,NULL);

	result = method_new("Project Viewer Window/Find List View",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_Viewer_20_Window_2F_Find_20_List_20_View,NULL);

	result = method_new("Project Viewer Window/New Element",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_Viewer_20_Window_2F_New_20_Element,NULL);

	result = method_new("Project Viewer Window/Open Record",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_Viewer_20_Window_2F_Open_20_Record,NULL);

	result = method_new("Project Viewer Window/Open With Data",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_Viewer_20_Window_2F_Open_20_With_20_Data,NULL);

	result = method_new("Project Viewer Window/Get Project Data",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_Viewer_20_Window_2F_Get_20_Project_20_Data,NULL);

	result = method_new("Project Viewer Window/Get Section Data",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_Viewer_20_Window_2F_Get_20_Section_20_Data,NULL);

	result = method_new("Project Viewer Window/Get Method Data",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_Viewer_20_Window_2F_Get_20_Method_20_Data,NULL);

	result = method_new("Project Viewer Window/Get Save Data",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_Viewer_20_Window_2F_Get_20_Save_20_Data,NULL);

	result = method_new("Project Viewer Window/Refresh",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_Viewer_20_Window_2F_Refresh,NULL);

	result = method_new("Project Viewer Window/HIC File Add To Project",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_File_20_Add_20_To_20_Project,NULL);

	result = method_new("Project Viewer Window/HIC File Export",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_File_20_Export,NULL);

	result = method_new("Project Viewer Window/HIC File Save",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_File_20_Save,NULL);

	result = method_new("Project Viewer Window/HIC File Save As",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_File_20_Save_20_As,NULL);

	result = method_new("Project Viewer Window/HIC File Revert",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_File_20_Revert,NULL);

	result = method_new("Project Viewer Window/HIC Edit Clear",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_Edit_20_Clear,NULL);

	result = method_new("Project Viewer Window/HIC Info Last Error",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_Info_20_Last_20_Error,NULL);

	result = method_new("Project Viewer Window/HIC Info Check Program",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_Info_20_Check_20_Program,NULL);

	result = method_new("Project Viewer Window/HIC Window Info",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_Window_20_Info,NULL);

	result = method_new("Project Viewer Window/HIC Windows Project",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_Windows_20_Project,NULL);

	result = method_new("Project Viewer Window/HIC Exec Execute Method",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_Exec_20_Execute_20_Method,NULL);

	result = method_new("Project Viewer Window/HIC Exec Run Application",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_Exec_20_Run_20_Application,NULL);

	result = method_new("Project Viewer Window/Expose URL",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_Viewer_20_Window_2F_Expose_20_URL,NULL);

	result = method_new("Project Viewer Window/HIC Clear Breakpoints",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_Clear_20_Breakpoints,NULL);

	result = method_new("Project Viewer Window/HIC Show Breakpoints",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_Show_20_Breakpoints,NULL);

	result = method_new("Project Viewer Window/Get All Breakpoints",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_Viewer_20_Window_2F_Get_20_All_20_Breakpoints,NULL);

	result = method_new("Project Viewer Window/In Message Group?",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_Viewer_20_Window_2F_In_20_Message_20_Group_3F_,NULL);

	result = method_new("Project Viewer Window/Data Message",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_Viewer_20_Window_2F_Data_20_Message,NULL);

	result = method_new("Project Viewer Window/Select Item",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_Viewer_20_Window_2F_Select_20_Item,NULL);

	result = method_new("Project Viewer Window/HIC File Update App",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_Viewer_20_Window_2F_HIC_20_File_20_Update_20_App,NULL);

	result = method_new("Project Databrowser Control/DB CTM Create",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Create,NULL);

	result = method_new("Project Databrowser Control/DB CTM Select",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_Databrowser_20_Control_2F_DB_20_CTM_20_Select,NULL);

	result = method_new("Project Databrowser Control/CE HICommand Update Status",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_Databrowser_20_Control_2F_CE_20_HICommand_20_Update_20_Status,NULL);

	result = method_new("Project Databrowser Control/CE HICommand Process",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_Databrowser_20_Control_2F_CE_20_HICommand_20_Process,NULL);

	result = method_new("Project Databrowser Control/HIC Edit Clear",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_Databrowser_20_Control_2F_HIC_20_Edit_20_Clear,NULL);

	result = method_new("Project Databrowser Control/HIC Edit Copy",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_Databrowser_20_Control_2F_HIC_20_Edit_20_Copy,NULL);

	result = method_new("Project Databrowser Control/HIC Edit Cut",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_Databrowser_20_Control_2F_HIC_20_Edit_20_Cut,NULL);

	result = method_new("Project Databrowser Control/HIC Edit Paste",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_Databrowser_20_Control_2F_HIC_20_Edit_20_Paste,NULL);

	result = method_new("Project Databrowser Control/HIC Edit Move To",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_Databrowser_20_Control_2F_HIC_20_Edit_20_Move_20_To,NULL);

	result = method_new("Project Databrowser Control/HIC Edit Duplicate",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_Databrowser_20_Control_2F_HIC_20_Edit_20_Duplicate,NULL);

	result = method_new("Project Databrowser Control/Get Project Data",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_Databrowser_20_Control_2F_Get_20_Project_20_Data,NULL);

	result = method_new("Project Databrowser Control/HIC Edit Propagate Attribute",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_Databrowser_20_Control_2F_HIC_20_Edit_20_Propagate_20_Attribute,NULL);

	result = method_new("Project Databrowser Control/HIC Edit Paste Value",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_Databrowser_20_Control_2F_HIC_20_Edit_20_Paste_20_Value,NULL);

	result = method_new("Project Databrowser Control/HIC Edit Copy Value",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_Databrowser_20_Control_2F_HIC_20_Edit_20_Copy_20_Value,NULL);

	result = method_new("Project Databrowser Control/Refresh Selection",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_Databrowser_20_Control_2F_Refresh_20_Selection,NULL);

	result = method_new("Project Databrowser Control/Select Items",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_Databrowser_20_Control_2F_Select_20_Items,NULL);

	result = method_new("Project DB Item Data/Install Data",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_DB_20_Item_20_Data_2F_Install_20_Data,NULL);

	result = method_new("Project DB Item Data/Add Content Items",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_DB_20_Item_20_Data_2F_Add_20_Content_20_Items,NULL);

	result = method_new("Project DB Item Data/Initialize Value",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_DB_20_Item_20_Data_2F_Initialize_20_Value,NULL);

	result = method_new("Project DB Item Data/Reinstall Data",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_DB_20_Item_20_Data_2F_Reinstall_20_Data,NULL);

	result = method_new("Project DB Item Data/Change Item Data Property",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_DB_20_Item_20_Data_2F_Change_20_Item_20_Data_20_Property,NULL);

	result = method_new("Project DB Item Data/Set Item Data Property",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_DB_20_Item_20_Data_2F_Set_20_Item_20_Data_20_Property,NULL);

	result = method_new("Project DB Item Data/Double Clicked",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_DB_20_Item_20_Data_2F_Double_20_Clicked,NULL);

	result = method_new("Project DB Item Data/Delete Data",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_DB_20_Item_20_Data_2F_Delete_20_Data,NULL);

	result = method_new("Project DB Item Data/Force Reinstall",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_DB_20_Item_20_Data_2F_Force_20_Reinstall,NULL);

	result = method_new("Project DB Item Data/Drag Add Item",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_DB_20_Item_20_Data_2F_Drag_20_Add_20_Item,NULL);

	result = method_new("Project DB Item Data/Drag Accept?",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_DB_20_Item_20_Data_2F_Drag_20_Accept_3F_,NULL);

	result = method_new("Project DB Item Data/Drag Receive",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_DB_20_Item_20_Data_2F_Drag_20_Receive,NULL);

	result = method_new("Project DB Item Data/Change Name",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_DB_20_Item_20_Data_2F_Change_20_Name,NULL);

	result = method_new("Project DB Item Data/Update Items",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_DB_20_Item_20_Data_2F_Update_20_Items,NULL);

	result = method_new("Project DB Item Data/Update Self",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_DB_20_Item_20_Data_2F_Update_20_Self,NULL);

	result = method_new("Project DB Item Data/Get Identity Name",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_DB_20_Item_20_Data_2F_Get_20_Identity_20_Name,NULL);

	result = method_new("Project DB Item Data/Set Value",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_DB_20_Item_20_Data_2F_Set_20_Value,NULL);

	result = method_new("Project DB Item Data/Dispose",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_DB_20_Item_20_Data_2F_Dispose,NULL);

	result = method_new("Project DB Item Data/In Message Group?",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_DB_20_Item_20_Data_2F_In_20_Message_20_Group_3F_,NULL);

	result = method_new("Project DB Item Data/Data Message",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_DB_20_Item_20_Data_2F_Data_20_Message,NULL);

	result = method_new("Project DB Item Data/Send Refresh",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_DB_20_Item_20_Data_2F_Send_20_Refresh,NULL);

	result = method_new("Project DB Item Data/Send Reinstall",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_DB_20_Item_20_Data_2F_Send_20_Reinstall,NULL);

	result = method_new("Project DB Item Data/Destroy",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_DB_20_Item_20_Data_2F_Destroy,"Destructor");

	result = method_new("Project DB Item Data/Initialize",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_DB_20_Item_20_Data_2F_Initialize,NULL);

	result = method_new("Project DB Item Root/Get ItemID",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_DB_20_Item_20_Root_2F_Get_20_ItemID,NULL);

	result = method_new("Project DB Item Root/Reinstall Data",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_DB_20_Item_20_Root_2F_Reinstall_20_Data,NULL);

	result = method_new("Project DB Item Root/Initialize",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_DB_20_Item_20_Root_2F_Initialize,NULL);

	result = method_new("Project DB Item Root/Drag Accept?",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_DB_20_Item_20_Root_2F_Drag_20_Accept_3F_,NULL);

	result = method_new("Project DB Item Root/Drag Receive",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_DB_20_Item_20_Root_2F_Drag_20_Receive,NULL);

	result = method_new("Value Clipboard/Can Do?",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Value_20_Clipboard_2F_Can_20_Do_3F_,NULL);

	result = method_new("Value Clipboard/Copy Value",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Value_20_Clipboard_2F_Copy_20_Value,NULL);

	result = method_new("Value Clipboard/Paste Value",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Value_20_Clipboard_2F_Paste_20_Value,NULL);

	result = method_new("Value Clipboard/Clear",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Value_20_Clipboard_2F_Clear,NULL);

	result = method_new("Value Clipboard/Open",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Value_20_Clipboard_2F_Open,NULL);

	result = method_new("Value Clipboard/Close",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Value_20_Clipboard_2F_Close,NULL);

	result = method_new("Project DB Method Data/Install Data",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_DB_20_Method_20_Data_2F_Install_20_Data,NULL);

	result = method_new("Project DB Method Data/Double Clicked",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_DB_20_Method_20_Data_2F_Double_20_Clicked,NULL);

	result = method_new("Project DB Method Data/Change Name",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_DB_20_Method_20_Data_2F_Change_20_Name,NULL);

	result = method_new("Project DB Case Data/Double Clicked",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Project_20_DB_20_Case_20_Data_2F_Double_20_Clicked,NULL);

	return kNOERROR;

}


	Nat4 tempPersistent_Project_20_Viewer_20_Window_2F_Toolbar[] = {
0000000000, 0X00000F70, 0X00000294, 0X000000A0, 0X00000014, 0X000011D0, 0X000011CC, 0X000011C4,
0X000010B0, 0X0000117C, 0X00001178, 0X00001170, 0X000010AC, 0X00001128, 0X00001124, 0X0000111C,
0X000010A8, 0X000010D4, 0X000010D0, 0X000010C8, 0X000010A4, 0X0000109C, 0X00000E28, 0X00000E24,
0X00001054, 0X00000E10, 0X00001028, 0X00000E0C, 0X00000FFC, 0X00000FE4, 0X00000FBC, 0X00000FC4,
0X00000FA4, 0X00000F9C, 0X00000E04, 0X00000F74, 0X00000F5C, 0X00000F34, 0X00000F3C, 0X00000EB8,
0X00000F10, 0X00000EF8, 0X00000ED0, 0X00000ED8, 0X00000EB4, 0X00000EAC, 0X00000E00, 0X00000E7C,
0X00000DFC, 0X00000E4C, 0X00000DF4, 0X00000DD0, 0X00000DD8, 0X000002F4, 0X000002EC, 0X000002E8,
0X000002E4, 0X000002E0, 0X00000D08, 0X00000D04, 0X00000D00, 0X00000CDC, 0X00000CE4, 0X00000C9C,
0X00000CB4, 0X00000C94, 0X00000C70, 0X00000C78, 0X00000B54, 0X00000C40, 0X00000B4C, 0X00000B44,
0X00000B40, 0X00000BEC, 0X00000B3C, 0X00000B38, 0X00000B34, 0X00000B30, 0X00000B70, 0X00000B2C,
0X00000B10, 0X00000B18, 0X00000380, 0X00000AB0, 0X00000AAC, 0X00000AA8, 0X00000A84, 0X00000A8C,
0X00000A44, 0X00000A5C, 0X00000A3C, 0X00000A18, 0X00000A20, 0X000008CC, 0X000009E0, 0X000008C8,
0X000009B8, 0X000008C4, 0X000008BC, 0X000008B8, 0X00000964, 0X000008B4, 0X000008B0, 0X000008AC,
0X000008A8, 0X000008E8, 0X000008A4, 0X00000888, 0X00000890, 0X0000037C, 0X000007E8, 0X000007E4,
0X000007E0, 0X00000800, 0X000007DC, 0X000007B8, 0X000007C0, 0X00000378, 0X00000718, 0X00000714,
0X00000710, 0X00000730, 0X0000070C, 0X000006E8, 0X000006F0, 0X00000374, 0X00000644, 0X00000640,
0X0000063C, 0X0000065C, 0X00000638, 0X00000614, 0X0000061C, 0X00000370, 0X00000574, 0X00000570,
0X0000056C, 0X0000058C, 0X00000568, 0X00000544, 0X0000054C, 0X0000036C, 0X000004A0, 0X0000049C,
0X00000498, 0X000004B8, 0X00000494, 0X00000470, 0X00000478, 0X00000368, 0X000003C8, 0X000003C4,
0X000003C0, 0X000003E0, 0X000003BC, 0X00000398, 0X000003A0, 0X00000364, 0X0000035C, 0X000002DC,
0X000002D8, 0X0000030C, 0X000002D4, 0X000002A8, 0X000002B0, 0X00D50008, 0000000000, 0000000000,
0000000000, 0000000000, 0X000002D0, 0X0000000A, 0X000002B4, 0X50726F6A, 0X65637420, 0X57696E64,
0X6F772048, 0X49546F6F, 0X6C626172, 0000000000, 0000000000, 0X000002F8, 0X00000330, 0X00000348,
0X00000D54, 0X00000D70, 0X00000D88, 0X00000DA0, 0000000000, 0X00000DBC, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000314, 0X0000001B, 0X636F6D2E, 0X6D616376, 0X706C2E68,
0X69746F6F, 0X6C626172, 0X2E766965, 0X77657200, 0X00000004, 0000000000, 0000000000, 0000000000,
0000000000, 0X00000003, 0X03580007, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000364,
0X00000008, 0X00000384, 0X0000045C, 0X00000530, 0X00000600, 0X000006D4, 0X000007A4, 0X00000874,
0X00000AFC, 0X00700008, 0000000000, 0000000000, 0000000000, 0000000000, 0X000003BC, 0X00000004,
0X000003A4, 0X4849546F, 0X6F6C6261, 0X72204275, 0X696C7449, 0X6E204974, 0X656D0000, 0X000003CC,
0X00000414, 0X0000042C, 0X00000444, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000,
0X000003E8, 0X00000029, 0X636F6D2E, 0X6170706C, 0X652E6869, 0X746F6F6C, 0X626F782E, 0X746F6F6C,
0X6261722E, 0X666C6578, 0X69626C65, 0X73706163, 0X65000000, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0X00002710, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000064, 0X00000003, 0000000000, 0000000000, 0000000000, 0000000000, 0X00010000, 0X00700008,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000494, 0X00000004, 0X0000047C, 0X4849546F,
0X6F6C6261, 0X72204275, 0X696C7449, 0X6E204974, 0X656D0000, 0X000004A4, 0X000004E8, 0X00000500,
0X00000518, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X000004C0, 0X00000025,
0X636F6D2E, 0X6170706C, 0X652E6869, 0X746F6F6C, 0X626F782E, 0X746F6F6C, 0X6261722E, 0X73657061,
0X7261746F, 0X72000000, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000062, 0X00000003, 0000000000,
0000000000, 0000000000, 0000000000, 0X00010000, 0X00700008, 0000000000, 0000000000, 0000000000,
0000000000, 0X00000568, 0X00000004, 0X00000550, 0X4849546F, 0X6F6C6261, 0X72204275, 0X696C7449,
0X6E204974, 0X656D0000, 0X00000578, 0X000005B8, 0X000005D0, 0X000005E8, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000594, 0X00000021, 0X636F6D2E, 0X6170706C, 0X652E6869,
0X746F6F6C, 0X626F782E, 0X746F6F6C, 0X6261722E, 0X73706163, 0X65000000, 0X00000004, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000004, 0000000000, 0000000000, 0000000000,
0000000000, 0X00000063, 0X00000003, 0000000000, 0000000000, 0000000000, 0000000000, 0X00010000,
0X00700008, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000638, 0X00000004, 0X00000620,
0X4849546F, 0X6F6C6261, 0X72204275, 0X696C7449, 0X6E204974, 0X656D0000, 0X00000648, 0X0000068C,
0X000006A4, 0X000006BC, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000664,
0X00000025, 0X636F6D2E, 0X6170706C, 0X652E6869, 0X746F6F6C, 0X626F782E, 0X746F6F6C, 0X6261722E,
0X63757374, 0X6F6D697A, 0X65000000, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000,
0X00002711, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000061, 0X00000003,
0000000000, 0000000000, 0000000000, 0000000000, 0X00010000, 0X00700008, 0000000000, 0000000000,
0000000000, 0000000000, 0X0000070C, 0X00000004, 0X000006F4, 0X4849546F, 0X6F6C6261, 0X72204275,
0X696C7449, 0X6E204974, 0X656D0000, 0X0000071C, 0X0000075C, 0X00000774, 0X0000078C, 0X00000006,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000738, 0X00000021, 0X636F6D2E, 0X6170706C,
0X652E6869, 0X746F6F6C, 0X626F782E, 0X746F6F6C, 0X6261722E, 0X7072696E, 0X74000000, 0X00000004,
0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000060, 0X00000003, 0000000000, 0000000000, 0000000000, 0000000000,
0X00010000, 0X00700008, 0000000000, 0000000000, 0000000000, 0000000000, 0X000007DC, 0X00000004,
0X000007C4, 0X4849546F, 0X6F6C6261, 0X72204275, 0X696C7449, 0X6E204974, 0X656D0000, 0X000007EC,
0X0000082C, 0X00000844, 0X0000085C, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000808, 0X00000021, 0X636F6D2E, 0X6170706C, 0X652E6869, 0X746F6F6C, 0X626F782E, 0X746F6F6C,
0X6261722E, 0X666F6E74, 0X73000000, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000,
0000000000, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000005F, 0X00000003,
0000000000, 0000000000, 0000000000, 0000000000, 0X00010000, 0X00710008, 0000000000, 0000000000,
0000000000, 0000000000, 0X000008A4, 0X0000000C, 0X00000894, 0X4849546F, 0X6F6C6261, 0X72204974,
0X656D0000, 0X000008D4, 0X00000908, 0X00000920, 0X00000938, 0X00000950, 0X00000974, 0X0000098C,
0000000000, 0X000009A4, 0X000009CC, 0X00000A04, 0000000000, 0X00000006, 0000000000, 0000000000,
0000000000, 0000000000, 0X000008F0, 0X00000017, 0X636F6D2E, 0X63757374, 0X6F6D2E74, 0X6573742E,
0X72656775, 0X6C617200, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000000A,
0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000000A, 0X00000003, 0000000000,
0000000000, 0000000000, 0000000000, 0X00010000, 0X00000006, 0000000000, 0000000000, 0000000000,
0000000000, 0X0000096C, 0X00000006, 0X44656C65, 0X74650000, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000,
0X54527368, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X000009C0, 0X0000000B,
0X44656C65, 0X74652049, 0X74656D00, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000,
0X000009E8, 0X00000019, 0X52656D6F, 0X76652074, 0X68652073, 0X656C6563, 0X74656420, 0X6974656D,
0X2E000000, 0X00790008, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000A3C, 0X00000003,
0X00000A24, 0X4D61634F, 0X53204963, 0X6F6E2052, 0X65666572, 0X656E6365, 0000000000, 0X00000A48,
0000000000, 0X00000A70, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000A64,
0X0000000A, 0X54726173, 0X68204963, 0X6F6E0000, 0X007A0008, 0000000000, 0000000000, 0000000000,
0000000000, 0X00000AA8, 0X00000003, 0X00000A90, 0X4D61634F, 0X53204963, 0X6F6E2052, 0X65676973,
0X74726172, 0000000000, 0X00000AB4, 0X00000ACC, 0X00000AE4, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0X7464656C, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000,
0X6D616373, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0XFFFF8000, 0X00710008,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000B2C, 0X0000000C, 0X00000B1C, 0X4849546F,
0X6F6C6261, 0X72204974, 0X656D0000, 0X00000B5C, 0X00000B90, 0X00000BA8, 0X00000BC0, 0X00000BD8,
0X00000BFC, 0X00000C14, 0000000000, 0X00000C2C, 0000000000, 0X00000C5C, 0000000000, 0X00000006,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000B78, 0X00000016, 0X636F6D2E, 0X63757374,
0X6F6D2E74, 0X6573742E, 0X73776974, 0X63680000, 0X00000004, 0000000000, 0000000000, 0000000000,
0000000000, 0X00000005, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000005,
0X00000003, 0000000000, 0000000000, 0000000000, 0000000000, 0X00010000, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000BF4, 0X00000004, 0X56696577, 0000000000, 0X00000004,
0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0X54646256, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000C48, 0X00000010, 0X546F6767, 0X6C65206C, 0X69737420, 0X76696577, 0000000000, 0X00790008,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000C94, 0X00000003, 0X00000C7C, 0X4D61634F,
0X53204963, 0X6F6E2052, 0X65666572, 0X656E6365, 0000000000, 0X00000CA0, 0000000000, 0X00000CC8,
0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000CBC, 0X0000000A, 0X4170706C,
0X65204C6F, 0X676F0000, 0X007A0008, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000D00,
0X00000003, 0X00000CE8, 0X4D61634F, 0X53204963, 0X6F6E2052, 0X65676973, 0X74726172, 0000000000,
0X00000D0C, 0X00000D24, 0X00000D3C, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000,
0X61726E67, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X6D616373, 0X00000004,
0000000000, 0000000000, 0000000000, 0000000000, 0XFFFF8000, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000003, 0000000000, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000003, 0000000000, 0000000000, 0000000000, 0000000000, 0X00010000,
0X025A0007, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0X00270008,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000DF4, 0X00000011, 0X00000DDC, 0X43617262,
0X6F6E2045, 0X76656E74, 0X2043616C, 0X6C626163, 0X6B000000, 0X00000E38, 0000000000, 0X00000E68,
0X00000E98, 0X00000F88, 0000000000, 0X00001014, 0X00001040, 0000000000, 0000000000, 0000000000,
0000000000, 0X00001070, 0X00001088, 0000000000, 0000000000, 0000000000, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000E54, 0X00000012, 0X6B457665, 0X6E74436C, 0X61737354,
0X6F6F6C62, 0X61720000, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000E84,
0X00000010, 0X2F434520, 0X48616E64, 0X6C652045, 0X76656E74, 0000000000, 0X00000007, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000EB4, 0X00000002, 0X00000EBC, 0X00000F20, 0X00150008,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000EF8, 0X00000001, 0X00000EDC, 0X41747472,
0X69627574, 0X6520496E, 0X70757420, 0X53706563, 0X69666965, 0X72000000, 0X00000EFC, 0X00000006,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000F18, 0X00000005, 0X4F776E65, 0X72000000,
0X00150008, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000F5C, 0X00000001, 0X00000F40,
0X41747472, 0X69627574, 0X6520496E, 0X70757420, 0X53706563, 0X69666965, 0X72000000, 0X00000F60,
0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000F7C, 0X00000009, 0X54686520,
0X4576656E, 0X74000000, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000FA4,
0X00000001, 0X00000FA8, 0X00160008, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000FE4,
0X00000001, 0X00000FC8, 0X41747472, 0X69627574, 0X65204F75, 0X74707574, 0X20537065, 0X63696669,
0X65720000, 0X00000FE8, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X00001004,
0X0000000F, 0X43616C6C, 0X6261636B, 0X20526573, 0X756C7400, 0X00000006, 0000000000, 0000000000,
0000000000, 0000000000, 0X00001030, 0X0000000F, 0X2F446F20, 0X43452043, 0X616C6C62, 0X61636B00,
0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000105C, 0X00000013, 0X4576656E,
0X7448616E, 0X646C6572, 0X50726F63, 0X50747200, 0X00000004, 0000000000, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X000010A4,
0X00000004, 0X000010B4, 0X00001108, 0X0000115C, 0X000011B0, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0X000010D0, 0X00000002, 0X000010D8, 0X000010F0, 0X00000004, 0000000000,
0000000000, 0000000000, 0000000000, 0X74626172, 0X00000004, 0000000000, 0000000000, 0000000000,
0000000000, 0X00000001, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X00001124,
0X00000002, 0X0000112C, 0X00001144, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000,
0X74626172, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000002, 0X00000007,
0000000000, 0000000000, 0000000000, 0000000000, 0X00001178, 0X00000002, 0X00001180, 0X00001198,
0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X74626172, 0X00000004, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000003, 0X00000007, 0000000000, 0000000000, 0000000000,
0000000000, 0X000011CC, 0X00000002, 0X000011D4, 0X000011EC, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0X74626172, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000004
	};
	Nat4 tempPersistent_Project_20_Window_20_HIToolbar_2F_HIObject_20_Class[] = {
0000000000, 0X0000056C, 0X0000010C, 0X0000003E, 0X00000014, 0X00000644, 0X00000640, 0X00000638,
0X000004D0, 0X000005F0, 0X000005EC, 0X000005E4, 0X000004CC, 0X0000059C, 0X00000598, 0X00000590,
0X000004C8, 0X00000548, 0X00000544, 0X0000053C, 0X000004C4, 0X000004F4, 0X000004F0, 0X000004E8,
0X000004C0, 0X000004B8, 0X0000024C, 0X00000248, 0X00000470, 0X00000234, 0X00000444, 0X00000230,
0X00000418, 0X00000400, 0X000003D8, 0X000003E0, 0X000003C0, 0X000003B8, 0X00000228, 0X00000390,
0X00000378, 0X00000350, 0X00000358, 0X000002D4, 0X0000032C, 0X00000314, 0X000002EC, 0X000002F4,
0X000002D0, 0X000002C8, 0X00000224, 0X00000298, 0X00000220, 0X0000021C, 0X00000268, 0X00000218,
0X000001F4, 0X000001FC, 0X0000014C, 0X000001BC, 0X00000148, 0X0000019C, 0X00000140, 0X00000164,
0X0000013C, 0X00000120, 0X00000128, 0X006A0008, 0000000000, 0000000000, 0000000000, 0000000000,
0X0000013C, 0X00000005, 0X0000012C, 0X48494F62, 0X6A656374, 0X20436C61, 0X73730000, 0X00000150,
0X00000188, 0000000000, 0X000001A8, 0X000001E0, 0X00000006, 0000000000, 0000000000, 0000000000,
0000000000, 0X0000016C, 0X0000001B, 0X636F6D2E, 0X6D616376, 0X706C2E68, 0X69746F6F, 0X6C626172,
0X2E766965, 0X77657200, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X000001A4,
0000000000, 0000000000, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X000001C4,
0X00000018, 0X50726F6A, 0X65637420, 0X57696E64, 0X6F772048, 0X49546F6F, 0X6C626172, 0000000000,
0X006B0008, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000218, 0X0000000F, 0X00000200,
0X48494F62, 0X6A656374, 0X20436C61, 0X73732043, 0X616C6C62, 0X61636B00, 0X00000254, 0X0000010C,
0X00000284, 0X000002B4, 0X000003A4, 0000000000, 0X00000430, 0X0000045C, 0000000000, 0000000000,
0000000000, 0000000000, 0X0000048C, 0X000004A4, 0000000000, 0X00000006, 0000000000, 0000000000,
0000000000, 0000000000, 0X00000270, 0X00000013, 0X6B457665, 0X6E74436C, 0X61737348, 0X494F626A,
0X65637400, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X000002A0, 0X00000012,
0X2F434520, 0X48494F62, 0X6A656374, 0X20457665, 0X6E740000, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0X000002D0, 0X00000002, 0X000002D8, 0X0000033C, 0X00150008, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000314, 0X00000001, 0X000002F8, 0X41747472, 0X69627574,
0X6520496E, 0X70757420, 0X53706563, 0X69666965, 0X72000000, 0X00000318, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000334, 0X00000005, 0X4F776E65, 0X72000000, 0X00150008,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000378, 0X00000001, 0X0000035C, 0X41747472,
0X69627574, 0X6520496E, 0X70757420, 0X53706563, 0X69666965, 0X72000000, 0X0000037C, 0X00000006,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000398, 0X00000009, 0X54686520, 0X4576656E,
0X74000000, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X000003C0, 0X00000001,
0X000003C4, 0X00160008, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000400, 0X00000001,
0X000003E4, 0X41747472, 0X69627574, 0X65204F75, 0X74707574, 0X20537065, 0X63696669, 0X65720000,
0X00000404, 0X00000006, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000420, 0X0000000F,
0X43616C6C, 0X6261636B, 0X20526573, 0X756C7400, 0X00000006, 0000000000, 0000000000, 0000000000,
0000000000, 0X0000044C, 0X0000000F, 0X2F446F20, 0X48492043, 0X616C6C62, 0X61636B00, 0X00000006,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000478, 0X00000013, 0X4576656E, 0X7448616E,
0X646C6572, 0X50726F63, 0X50747200, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000,
0000000000, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X000004C0, 0X00000005,
0X000004D4, 0X00000528, 0X0000057C, 0X000005D0, 0X00000624, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0X000004F0, 0X00000002, 0X000004F8, 0X00000510, 0X00000004, 0000000000,
0000000000, 0000000000, 0000000000, 0X68696F62, 0X00000004, 0000000000, 0000000000, 0000000000,
0000000000, 0X00000001, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000544,
0X00000002, 0X0000054C, 0X00000564, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000,
0X68696F62, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000002, 0X00000007,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000598, 0X00000002, 0X000005A0, 0X000005B8,
0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X68696F62, 0X00000004, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000003, 0X00000007, 0000000000, 0000000000, 0000000000,
0000000000, 0X000005EC, 0X00000002, 0X000005F4, 0X0000060C, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0X68696F62, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000,
0X00000004, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000640, 0X00000002,
0X00000648, 0X00000660, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X68696F62,
0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000005
	};

Nat4	loadPersistents_Project_20_Window(V_Environment environment);
Nat4	loadPersistents_Project_20_Window(V_Environment environment)
{
	V_Value tempPersistent = NULL;
	V_Dictionary dictionary = environment->persistentsTable;

	tempPersistent = create_persistentNode("Project Viewer Window/Toolbar",tempPersistent_Project_20_Viewer_20_Window_2F_Toolbar,environment);
	add_node(dictionary,tempPersistent->objectName,tempPersistent);

	tempPersistent = create_persistentNode("Project Window HIToolbar/HIObject Class",tempPersistent_Project_20_Window_20_HIToolbar_2F_HIObject_20_Class,environment);
	add_node(dictionary,tempPersistent->objectName,tempPersistent);

	return kNOERROR;

}

Nat4	load_Project_20_Window(V_Environment environment);
Nat4	load_Project_20_Window(V_Environment environment)
{

	loadClasses_Project_20_Window(environment);
	loadUniversals_Project_20_Window(environment);
	loadPersistents_Project_20_Window(environment);
	return kNOERROR;

}

