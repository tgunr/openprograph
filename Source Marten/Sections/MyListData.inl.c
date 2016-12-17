/* A VPL Section File */
/*

MyListData.inl.c
Copyright: 2004 Andescotia LLC

*/

#include "MartenInlineProject.h"

enum opTrigger vpx_method_Find_20_Item_20_IconRef_case_1_local_2_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Find_20_Item_20_IconRef_case_1_local_2_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_string_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP__22_length_22_,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"4",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_string_2D_to_2D_integer,1,1,TERMINAL(0),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Find_20_Item_20_IconRef_case_1_local_2_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Find_20_Item_20_IconRef_case_1_local_2_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_string_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_to_2D_external_2D_constant,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
FAILONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Find_20_Item_20_IconRef_case_1_local_2_case_1_local_4_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Find_20_Item_20_IconRef_case_1_local_2_case_1_local_4_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
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

enum opTrigger vpx_method_Find_20_Item_20_IconRef_case_1_local_2_case_1_local_4_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Find_20_Item_20_IconRef_case_1_local_2_case_1_local_4_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,kSystemIconsCreator,ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Find_20_Item_20_IconRef_case_1_local_2_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Find_20_Item_20_IconRef_case_1_local_2_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Find_20_Item_20_IconRef_case_1_local_2_case_1_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_Find_20_Item_20_IconRef_case_1_local_2_case_1_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_Find_20_Item_20_IconRef_case_1_local_2_case_1_local_4_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Find_20_Item_20_IconRef_case_1_local_2_case_1_local_4_case_4(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Find_20_Item_20_IconRef_case_1_local_2_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Find_20_Item_20_IconRef_case_1_local_2_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_string_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP__22_length_22_,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"4",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_string_2D_to_2D_integer,1,1,TERMINAL(0),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Find_20_Item_20_IconRef_case_1_local_2_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Find_20_Item_20_IconRef_case_1_local_2_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_string_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_to_2D_external_2D_constant,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
FAILONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Find_20_Item_20_IconRef_case_1_local_2_case_1_local_5_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Find_20_Item_20_IconRef_case_1_local_2_case_1_local_5_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
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

enum opTrigger vpx_method_Find_20_Item_20_IconRef_case_1_local_2_case_1_local_5_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Find_20_Item_20_IconRef_case_1_local_2_case_1_local_5_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;
FAILONSUCCESS

OUTPUT(0,NONE)
FOOTERWITHNONE(1)
}

enum opTrigger vpx_method_Find_20_Item_20_IconRef_case_1_local_2_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Find_20_Item_20_IconRef_case_1_local_2_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Find_20_Item_20_IconRef_case_1_local_2_case_1_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_Find_20_Item_20_IconRef_case_1_local_2_case_1_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_Find_20_Item_20_IconRef_case_1_local_2_case_1_local_5_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Find_20_Item_20_IconRef_case_1_local_2_case_1_local_5_case_4(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Find_20_Item_20_IconRef_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Find_20_Item_20_IconRef_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_list_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,2,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_method_Find_20_Item_20_IconRef_case_1_local_2_case_1_local_4(PARAMETERS,TERMINAL(1),ROOT(3));
FAILONFAILURE

result = vpx_method_Find_20_Item_20_IconRef_case_1_local_2_case_1_local_5(PARAMETERS,TERMINAL(2),ROOT(4));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(3))
OUTPUT(1,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Find_20_Item_20_IconRef_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Find_20_Item_20_IconRef_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADERWITHNONE(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_string_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"( ( Information WNin ) ( \"List Element\" WNit ) ( \"Stack\" WNst ) ( \"Stack Case\" WNsi ) )",ROOT(1));

result = vpx_method__28_Get_20_Setting_29_(PARAMETERS,TERMINAL(1),TERMINAL(0),ROOT(2));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,NONE)
OUTPUT(1,TERMINAL(2))
FOOTERWITHNONE(3)
}

enum opTrigger vpx_method_Find_20_Item_20_IconRef_case_1_local_2_case_3_local_8_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Find_20_Item_20_IconRef_case_1_local_2_case_3_local_8_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( ( universal OPsm ) ( primitive OPpv ) ( extprocedure OPep ) ( constant OPcn ) ( match OPmt ) ( persistent OPpr ) ( instance OPin )( get OPgt ) ( set OPst ) ( local OPlc ) ( evaluate OPev ) ( extget EXgt ) ( extset EXst ) ( extconstant EXcn ) ( extmatch EXmt ) ( input_bar OPib ) ( output_bar OPob ) )",ROOT(1));

result = vpx_method__28_Get_20_Setting_29_(PARAMETERS,TERMINAL(1),TERMINAL(0),ROOT(2));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Find_20_Item_20_IconRef_case_1_local_2_case_3_local_8_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Find_20_Item_20_IconRef_case_1_local_2_case_3_local_8_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;
FAILONSUCCESS

OUTPUT(0,NONE)
FOOTERWITHNONE(1)
}

enum opTrigger vpx_method_Find_20_Item_20_IconRef_case_1_local_2_case_3_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Find_20_Item_20_IconRef_case_1_local_2_case_3_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Find_20_Item_20_IconRef_case_1_local_2_case_3_local_8_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Find_20_Item_20_IconRef_case_1_local_2_case_3_local_8_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Find_20_Item_20_IconRef_case_1_local_2_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Find_20_Item_20_IconRef_case_1_local_2_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADERWITHNONE(8)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"Item Data",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(3),ROOT(4));

result = vpx_match(PARAMETERS,"Operation Data",TERMINAL(4));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Type,TERMINAL(3),ROOT(5),ROOT(6));

result = vpx_method_Find_20_Item_20_IconRef_case_1_local_2_case_3_local_8(PARAMETERS,TERMINAL(6),ROOT(7));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,NONE)
OUTPUT(1,TERMINAL(7))
FOOTERWITHNONE(8)
}

enum opTrigger vpx_method_Find_20_Item_20_IconRef_case_1_local_2_case_4_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1,V_Object *root2);
enum opTrigger vpx_method_Find_20_Item_20_IconRef_case_1_local_2_case_4_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1,V_Object *root2)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"List Data",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Helper_20_Name,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(0),ROOT(4),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
OUTPUT(1,TERMINAL(0))
OUTPUT(2,TERMINAL(5))
FOOTER(6)
}

enum opTrigger vpx_method_Find_20_Item_20_IconRef_case_1_local_2_case_4_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1,V_Object *root2);
enum opTrigger vpx_method_Find_20_Item_20_IconRef_case_1_local_2_case_4_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1,V_Object *root2)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"VPL Data",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Helper_20_Name,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(0),ROOT(4),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
OUTPUT(1,TERMINAL(0))
OUTPUT(2,TERMINAL(5))
FOOTER(6)
}

enum opTrigger vpx_method_Find_20_Item_20_IconRef_case_1_local_2_case_4_local_2_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1,V_Object *root2);
enum opTrigger vpx_method_Find_20_Item_20_IconRef_case_1_local_2_case_4_local_2_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1,V_Object *root2)
{
HEADER(8)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"Item Data",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Helper_20_Name,TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(3),ROOT(6),ROOT(7));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
OUTPUT(1,TERMINAL(3))
OUTPUT(2,TERMINAL(7))
FOOTER(8)
}

enum opTrigger vpx_method_Find_20_Item_20_IconRef_case_1_local_2_case_4_local_2_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1,V_Object *root2);
enum opTrigger vpx_method_Find_20_Item_20_IconRef_case_1_local_2_case_4_local_2_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1,V_Object *root2)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(0),ROOT(1));

result = vpx_constant(PARAMETERS,"NULL",ROOT(2));

result = vpx_constant(PARAMETERS,"( NULL )",ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
OUTPUT(1,TERMINAL(2))
OUTPUT(2,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_Find_20_Item_20_IconRef_case_1_local_2_case_4_local_2_case_5(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1,V_Object *root2);
enum opTrigger vpx_method_Find_20_Item_20_IconRef_case_1_local_2_case_4_local_2_case_5(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1,V_Object *root2)
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

enum opTrigger vpx_method_Find_20_Item_20_IconRef_case_1_local_2_case_4_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1,V_Object *root2);
enum opTrigger vpx_method_Find_20_Item_20_IconRef_case_1_local_2_case_4_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1,V_Object *root2)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Find_20_Item_20_IconRef_case_1_local_2_case_4_local_2_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1,root2))
if(vpx_method_Find_20_Item_20_IconRef_case_1_local_2_case_4_local_2_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1,root2))
if(vpx_method_Find_20_Item_20_IconRef_case_1_local_2_case_4_local_2_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1,root2))
if(vpx_method_Find_20_Item_20_IconRef_case_1_local_2_case_4_local_2_case_4(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1,root2))
vpx_method_Find_20_Item_20_IconRef_case_1_local_2_case_4_local_2_case_5(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1,root2);
return outcome;
}

enum opTrigger vpx_method_Find_20_Item_20_IconRef_case_1_local_2_case_4_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Find_20_Item_20_IconRef_case_1_local_2_case_4_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( ( \"Project Data\" WNjs ) ( \"Primitives Data\" WNlb ) ( \"Resource File Data\" WNrs ) ( \"Section Data\" WNsc ) ( \"Universal Data\" WNmt ) ( \"Class Data\" WNcl ) ( \"Persistent Data\" WNpr ) ( \"Attribute Data\" WNat ) ( \"Class Attribute Data\" WNca ) ( \"Case Data\" WNcs ) ( \"Operation Data\" WNcs ) ( \"Debug State\" WNsi ) ( \"Stack Data\" WNst ) )",ROOT(1));

result = vpx_method__28_Get_20_Setting_29_(PARAMETERS,TERMINAL(1),TERMINAL(0),ROOT(2));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Find_20_Item_20_IconRef_case_1_local_2_case_4_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Find_20_Item_20_IconRef_case_1_local_2_case_4_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_match(PARAMETERS,"Operations Data",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_match(PARAMETERS,"( )",TERMINAL(2));
NEXTCASEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_detach_2D_l,1,2,TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_match(PARAMETERS,"( )",TERMINAL(4));
NEXTCASEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_detach_2D_r,1,2,TERMINAL(4),ROOT(5),ROOT(6));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTER(7)
}

enum opTrigger vpx_method_Find_20_Item_20_IconRef_case_1_local_2_case_4_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Find_20_Item_20_IconRef_case_1_local_2_case_4_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
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

enum opTrigger vpx_method_Find_20_Item_20_IconRef_case_1_local_2_case_4_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Find_20_Item_20_IconRef_case_1_local_2_case_4_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Find_20_Item_20_IconRef_case_1_local_2_case_4_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
vpx_method_Find_20_Item_20_IconRef_case_1_local_2_case_4_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0);
return outcome;
}

enum opTrigger vpx_method_Find_20_Item_20_IconRef_case_1_local_2_case_4_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Find_20_Item_20_IconRef_case_1_local_2_case_4_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"1",ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_prefix,2,2,TERMINAL(0),TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_constant(PARAMETERS,"e",ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(5),TERMINAL(4),ROOT(6));

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTER(7)
}

enum opTrigger vpx_method_Find_20_Item_20_IconRef_case_1_local_2_case_4_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Find_20_Item_20_IconRef_case_1_local_2_case_4_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(2)
}

enum opTrigger vpx_method_Find_20_Item_20_IconRef_case_1_local_2_case_4_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Find_20_Item_20_IconRef_case_1_local_2_case_4_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Find_20_Item_20_IconRef_case_1_local_2_case_4_local_7_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Find_20_Item_20_IconRef_case_1_local_2_case_4_local_7_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Find_20_Item_20_IconRef_case_1_local_2_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Find_20_Item_20_IconRef_case_1_local_2_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADERWITHNONE(9)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Find_20_Item_20_IconRef_case_1_local_2_case_4_local_2(PARAMETERS,TERMINAL(0),ROOT(1),ROOT(2),ROOT(3));
FAILONFAILURE

result = vpx_method_Find_20_Item_20_IconRef_case_1_local_2_case_4_local_3(PARAMETERS,TERMINAL(1),ROOT(4));
FAILONFAILURE

result = vpx_constant(PARAMETERS,"( )",ROOT(5));

result = vpx_method_Find_20_Item_20_IconRef_case_1_local_2_case_4_local_5(PARAMETERS,TERMINAL(1),TERMINAL(2),TERMINAL(3),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP__3D_,2,1,TERMINAL(6),TERMINAL(5),ROOT(7));

result = vpx_method_Find_20_Item_20_IconRef_case_1_local_2_case_4_local_7(PARAMETERS,TERMINAL(4),TERMINAL(7),ROOT(8));

result = kSuccess;

OUTPUT(0,NONE)
OUTPUT(1,TERMINAL(8))
FOOTERWITHNONE(9)
}

enum opTrigger vpx_method_Find_20_Item_20_IconRef_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Find_20_Item_20_IconRef_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Find_20_Item_20_IconRef_case_1_local_2_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1))
if(vpx_method_Find_20_Item_20_IconRef_case_1_local_2_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1))
if(vpx_method_Find_20_Item_20_IconRef_case_1_local_2_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1))
vpx_method_Find_20_Item_20_IconRef_case_1_local_2_case_4(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1);
return outcome;
}

enum opTrigger vpx_method_Find_20_Item_20_IconRef_case_1_local_3_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Find_20_Item_20_IconRef_case_1_local_3_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_string_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP__22_length_22_,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"4",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_string_2D_to_2D_integer,1,1,TERMINAL(0),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Find_20_Item_20_IconRef_case_1_local_3_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Find_20_Item_20_IconRef_case_1_local_3_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_string_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_to_2D_external_2D_constant,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
FAILONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Find_20_Item_20_IconRef_case_1_local_3_case_1_local_5_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Find_20_Item_20_IconRef_case_1_local_3_case_1_local_5_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
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

enum opTrigger vpx_method_Find_20_Item_20_IconRef_case_1_local_3_case_1_local_5_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Find_20_Item_20_IconRef_case_1_local_3_case_1_local_5_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;
FAILONSUCCESS

OUTPUT(0,NONE)
FOOTERWITHNONE(1)
}

enum opTrigger vpx_method_Find_20_Item_20_IconRef_case_1_local_3_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Find_20_Item_20_IconRef_case_1_local_3_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Find_20_Item_20_IconRef_case_1_local_3_case_1_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_Find_20_Item_20_IconRef_case_1_local_3_case_1_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_Find_20_Item_20_IconRef_case_1_local_3_case_1_local_5_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Find_20_Item_20_IconRef_case_1_local_3_case_1_local_5_case_4(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Find_20_Item_20_IconRef_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Find_20_Item_20_IconRef_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(8)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\'mVPL\'",ROOT(2));

result = vpx_extconstant(PARAMETERS,kOnSystemDisk,ROOT(3));

result = vpx_method_Replace_20_NULL(PARAMETERS,TERMINAL(0),TERMINAL(2),ROOT(4));

result = vpx_method_Find_20_Item_20_IconRef_case_1_local_3_case_1_local_5(PARAMETERS,TERMINAL(1),ROOT(5));
FAILONFAILURE

PUTINTEGER(GetIconRef( GETINTEGER(TERMINAL(3)),GETINTEGER(TERMINAL(4)),GETINTEGER(TERMINAL(5)),GETPOINTER(0,OpaqueIconRef,**,ROOT(7),NONE)),6);
result = kSuccess;

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(6));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(7))
FOOTERSINGLECASEWITHNONE(8)
}

enum opTrigger vpx_method_Find_20_Item_20_IconRef(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Find_20_Item_20_IconRef_case_1_local_2(PARAMETERS,TERMINAL(0),ROOT(1),ROOT(2));
FAILONFAILURE

result = vpx_method_Find_20_Item_20_IconRef_case_1_local_3(PARAMETERS,TERMINAL(1),TERMINAL(2),ROOT(3));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASE(4)
}




	Nat4 tempAttribute_List_20_Data_2F_Frame[] = {
0000000000, 0X0000008C, 0X00000028, 0X00000005, 0X00000014, 0X00000050, 0X0000004C, 0X00000048,
0X00000044, 0X0000003C, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000044,
0X00000004, 0X00000054, 0X0000006C, 0X00000084, 0X0000009C, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0X0000003C, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000,
0X0000003C, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000104, 0X00000004,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000168
	};
	Nat4 tempAttribute_List_20_Data_2F_List[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Helper_20_Data_2F_Name[] = {
0000000000, 0X00000028, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X08000000, 0X556E7469, 0X746C6564, 0000000000
	};
	Nat4 tempAttribute_Item_20_Data_2F_Lists[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Data_20_Controller_2F_Views[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};


Nat4 VPLC_List_20_Data_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_List_20_Data_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 432 316 }{ 228 397 } */
	tempAttribute = attribute_add("Parent",tempClass,NULL,environment);
	tempAttribute = attribute_add("Frame",tempClass,tempAttribute_List_20_Data_2F_Frame,environment);
	tempAttribute = attribute_add("List",tempClass,tempAttribute_List_20_Data_2F_List,environment);
	tempAttribute = attribute_add("Helper Name",tempClass,NULL,environment);
	tempAttribute = attribute_add("Controller",tempClass,NULL,environment);
	tempAttribute = attribute_add("Attachments",tempClass,NULL,environment);
/* Stop Attributes */

/* NULL SUPER CLASS */
	return kNOERROR;
}

/* Start Universals: { 317 911 }{ 546 372 } */
enum opTrigger vpx_method_List_20_Data_2F_Add_20_Item_20_Data(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_attach_2D_r,2,1,TERMINAL(3),TERMINAL(1),ROOT(4));

result = vpx_set(PARAMETERS,kVPXValue_List,TERMINAL(2),TERMINAL(4),ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open,2,0,TERMINAL(1),TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_List_20_Data_2F_Clone(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(10)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_shallow_2D_copy,1,1,TERMINAL(0),ROOT(1));

result = vpx_constant(PARAMETERS,"NULL",ROOT(2));

result = vpx_set(PARAMETERS,kVPXValue_Parent,TERMINAL(1),TERMINAL(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(3),ROOT(4),ROOT(5));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(5))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Clone,1,1,LIST(5),ROOT(6));
LISTROOT(6,0)
REPEATFINISH
LISTROOTFINISH(6,0)
LISTROOTEND
} else {
ROOTEMPTY(6)
}

result = vpx_set(PARAMETERS,kVPXValue_List,TERMINAL(4),TERMINAL(6),ROOT(7));

result = vpx_constant(PARAMETERS,"NULL",ROOT(8));

result = vpx_set(PARAMETERS,kVPXValue_Controller,TERMINAL(7),TERMINAL(8),ROOT(9));

result = kSuccess;

OUTPUT(0,TERMINAL(7))
FOOTERSINGLECASE(10)
}

enum opTrigger vpx_method_List_20_Data_2F_Close(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Close_20_Editor,1,0,TERMINAL(0));

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(0),ROOT(1),ROOT(2));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(2))) ){
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Close,1,0,LIST(2));
REPEATFINISH
} else {
}

result = vpx_constant(PARAMETERS,"NULL",ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Close_20_Controller,1,0,TERMINAL(1));

result = vpx_set(PARAMETERS,kVPXValue_Parent,TERMINAL(1),TERMINAL(3),ROOT(4));

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_List_20_Data_2F_Close_20_Editor_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_List_20_Data_2F_Close_20_Editor_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Editor,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
NEXTCASEONSUCCESS

result = vpx_method_Get_20_Desktop(PARAMETERS,ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Remove_20_Window,2,0,TERMINAL(2),TERMINAL(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Close,1,0,TERMINAL(1));

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_List_20_Data_2F_Close_20_Editor_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_List_20_Data_2F_Close_20_Editor_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_List_20_Data_2F_Close_20_Editor(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_List_20_Data_2F_Close_20_Editor_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_List_20_Data_2F_Close_20_Editor_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_List_20_Data_2F_Construct_20_Editor_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_List_20_Data_2F_Construct_20_Editor_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(1));
NEXTCASEONSUCCESS

result = vpx_get(PARAMETERS,kVPXValue_Helper_20_Name,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_match(PARAMETERS,"Operation Data",TERMINAL(3));
NEXTCASEONSUCCESS

result = vpx_persistent(PARAMETERS,kVPXValue_Reuse_20_List_20_Window_3F_,0,1,ROOT(4));

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(4));
NEXTCASEONFAILURE

result = vpx_method_Get_20_Front_20_Window(PARAMETERS,ROOT(5));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(5),ROOT(6));

result = vpx_match(PARAMETERS,"List Window",TERMINAL(6));
NEXTCASEONFAILURE

result = vpx_extconstant(PARAMETERS,optionKey,ROOT(7));

result = vpx_method_Modifier_20_Key_20_Pressed_3F_(PARAMETERS,TERMINAL(7));
NEXTCASEONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTER(8)
}

enum opTrigger vpx_method_List_20_Data_2F_Construct_20_Editor_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_List_20_Data_2F_Construct_20_Editor_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
NEXTCASEONSUCCESS

result = vpx_get(PARAMETERS,kVPXValue_Helper_20_Name,TERMINAL(2),ROOT(4),ROOT(5));

result = vpx_constant(PARAMETERS,"/Construct Editor",ROOT(6));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(5));
NEXTCASEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(5),TERMINAL(6),ROOT(7));

result = vpx_call_inject_method(PARAMETERS,INJECT(7),2,1,TERMINAL(5),TERMINAL(3),ROOT(8));

result = kSuccess;

OUTPUT(0,TERMINAL(8))
FOOTER(9)
}

enum opTrigger vpx_method_List_20_Data_2F_Construct_20_Editor_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_List_20_Data_2F_Construct_20_Editor_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
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

enum opTrigger vpx_method_List_20_Data_2F_Construct_20_Editor(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_List_20_Data_2F_Construct_20_Editor_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
if(vpx_method_List_20_Data_2F_Construct_20_Editor_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_List_20_Data_2F_Construct_20_Editor_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_List_20_Data_2F_Get_20_Application_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_List_20_Data_2F_Get_20_Application_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
NEXTCASEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Application,1,1,TERMINAL(2),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_List_20_Data_2F_Get_20_Application_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_List_20_Data_2F_Get_20_Application_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_persistent(PARAMETERS,kVPXValue_The_20_Application,0,1,ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_List_20_Data_2F_Get_20_Application(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_List_20_Data_2F_Get_20_Application_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_List_20_Data_2F_Get_20_Application_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_List_20_Data_2F_Open(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Parent,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open_20_Controller,1,0,TERMINAL(2));

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(2),ROOT(3),ROOT(4));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(4))) ){
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open,2,0,LIST(4),TERMINAL(3));
REPEATFINISH
} else {
}

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_List_20_Data_2F_Get_20_Project_20_Data_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_List_20_Data_2F_Get_20_Project_20_Data_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
NEXTCASEONSUCCESS

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(4));
NEXTCASEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Project_20_Data,1,1,TERMINAL(4),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTER(6)
}

enum opTrigger vpx_method_List_20_Data_2F_Get_20_Project_20_Data_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_List_20_Data_2F_Get_20_Project_20_Data_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_List_20_Data_2F_Get_20_Project_20_Data(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_List_20_Data_2F_Get_20_Project_20_Data_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_List_20_Data_2F_Get_20_Project_20_Data_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_List_20_Data_2F_Construct_20_Title_case_1_local_8_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_List_20_Data_2F_Construct_20_Title_case_1_local_8_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(13)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\" of \"",ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(4),ROOT(5),ROOT(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Method_20_Data,1,1,TERMINAL(6),ROOT(7));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(7));
NEXTCASEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Grandparent_20_Helper,1,1,TERMINAL(6),ROOT(8));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Grandparent_20_Helper,1,1,TERMINAL(8),ROOT(9));

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(9),ROOT(10));

result = vpx_match(PARAMETERS,"Section Data",TERMINAL(10));
NEXTCASEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Name,1,1,TERMINAL(9),ROOT(11));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,3,1,TERMINAL(1),TERMINAL(2),TERMINAL(11),ROOT(12));

result = kSuccess;

OUTPUT(0,TERMINAL(12))
FOOTER(13)
}

enum opTrigger vpx_method_List_20_Data_2F_Construct_20_Title_case_1_local_8_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_List_20_Data_2F_Construct_20_Title_case_1_local_8_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_List_20_Data_2F_Construct_20_Title_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_List_20_Data_2F_Construct_20_Title_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_List_20_Data_2F_Construct_20_Title_case_1_local_8_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_List_20_Data_2F_Construct_20_Title_case_1_local_8_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_List_20_Data_2F_Construct_20_Title_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_List_20_Data_2F_Construct_20_Title_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Name,1,1,TERMINAL(0),ROOT(1));

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
NEXTCASEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Name,1,1,TERMINAL(3),ROOT(4));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(4));
NEXTCASEONSUCCESS

result = vpx_match(PARAMETERS,"Operations",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_method_List_20_Data_2F_Construct_20_Title_case_1_local_8(PARAMETERS,TERMINAL(0),TERMINAL(4),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTER(6)
}

enum opTrigger vpx_method_List_20_Data_2F_Construct_20_Title_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_List_20_Data_2F_Construct_20_Title_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Name,1,1,TERMINAL(0),ROOT(1));

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
NEXTCASEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Name,1,1,TERMINAL(3),ROOT(4));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(4));
NEXTCASEONSUCCESS

result = vpx_constant(PARAMETERS,"\" of \"",ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,3,1,TERMINAL(1),TERMINAL(5),TERMINAL(4),ROOT(6));

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTER(7)
}

enum opTrigger vpx_method_List_20_Data_2F_Construct_20_Title_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_List_20_Data_2F_Construct_20_Title_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Untitled",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_List_20_Data_2F_Construct_20_Title_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_List_20_Data_2F_Construct_20_Title_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(8)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
NEXTCASEONSUCCESS

result = vpx_get(PARAMETERS,kVPXValue_Helper_20_Name,TERMINAL(1),ROOT(3),ROOT(4));

result = vpx_constant(PARAMETERS,"/Construct Title",ROOT(5));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(4));
NEXTCASEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(4),TERMINAL(5),ROOT(6));

result = vpx_call_inject_method(PARAMETERS,INJECT(6),2,1,TERMINAL(4),TERMINAL(2),ROOT(7));

result = kSuccess;

OUTPUT(0,TERMINAL(7))
FOOTER(8)
}

enum opTrigger vpx_method_List_20_Data_2F_Construct_20_Title(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_List_20_Data_2F_Construct_20_Title_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_List_20_Data_2F_Construct_20_Title_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_List_20_Data_2F_Construct_20_Title_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_List_20_Data_2F_Construct_20_Title_case_4(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_List_20_Data_2F_Get_20_Editor_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_List_20_Data_2F_Get_20_Editor_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Data,TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_equals,2,0,TERMINAL(0),TERMINAL(3));
NEXTCASEONFAILURE

result = kSuccess;
FINISHONSUCCESS

OUTPUT(0,TERMINAL(2))
FOOTER(4)
}

enum opTrigger vpx_method_List_20_Data_2F_Get_20_Editor_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_List_20_Data_2F_Get_20_Editor_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
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

enum opTrigger vpx_method_List_20_Data_2F_Get_20_Editor_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_List_20_Data_2F_Get_20_Editor_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_List_20_Data_2F_Get_20_Editor_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_List_20_Data_2F_Get_20_Editor_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_List_20_Data_2F_Get_20_Editor_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_List_20_Data_2F_Get_20_Editor_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Get_20_Viewer_20_Windows(PARAMETERS,ROOT(1));
NEXTCASEONFAILURE

if( (repeatLimit = vpx_multiplex(1,TERMINAL(1))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_List_20_Data_2F_Get_20_Editor_case_1_local_3(PARAMETERS,TERMINAL(0),LIST(1),ROOT(2));
REPEATFINISH
} else {
ROOTNULL(2,NULL)
}

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_List_20_Data_2F_Get_20_Editor_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_List_20_Data_2F_Get_20_Editor_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_List_20_Data_2F_Get_20_Editor(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_List_20_Data_2F_Get_20_Editor_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_List_20_Data_2F_Get_20_Editor_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_List_20_Data_2F_Open_20_Editor_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_List_20_Data_2F_Open_20_Editor_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Editors,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"(  )",TERMINAL(1));
NEXTCASEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_detach_2D_r,1,2,TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Select,1,0,TERMINAL(3));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(1))) ){
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Reinstall_20_Data,1,0,LIST(1));
REPEATFINISH
} else {
}

result = kSuccess;

FOOTER(4)
}

enum opTrigger vpx_method_List_20_Data_2F_Open_20_Editor_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_List_20_Data_2F_Open_20_Editor_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Editor,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
NEXTCASEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Select,1,0,TERMINAL(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Reinstall_20_Data,1,0,TERMINAL(1));

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_List_20_Data_2F_Open_20_Editor_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_List_20_Data_2F_Open_20_Editor_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADERWITHNONE(1)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Create_20_Editor,2,0,TERMINAL(0),NONE);

result = kSuccess;

FOOTERWITHNONE(1)
}

enum opTrigger vpx_method_List_20_Data_2F_Open_20_Editor(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_List_20_Data_2F_Open_20_Editor_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
if(vpx_method_List_20_Data_2F_Open_20_Editor_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_List_20_Data_2F_Open_20_Editor_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_List_20_Data_2F_Get_20_Name(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Name_20_Plural,1,1,TERMINAL(0),ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_List_20_Data_2F_Install_20_Element(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(7)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Helper_20_Name,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_call_inject_instance(PARAMETERS,INJECT(3),1,1,NONE,ROOT(4));

result = vpx_set(PARAMETERS,kVPXValue_Parent,TERMINAL(1),TERMINAL(2),ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Install_20_Helper,2,0,TERMINAL(5),TERMINAL(4));

result = vpx_set(PARAMETERS,kVPXValue_Owner,TERMINAL(4),TERMINAL(5),ROOT(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Initialize_20_Item_20_Data,2,0,TERMINAL(6),TERMINAL(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Add_20_To_20_List_20_Data,2,0,TERMINAL(6),TERMINAL(2));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTERSINGLECASEWITHNONE(7)
}

enum opTrigger vpx_method_List_20_Data_2F_New_20_Element(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(3)
INPUT(0,0)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_Item_20_Data,1,1,NONE,ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Install_20_Element,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASEWITHNONE(3)
}

enum opTrigger vpx_method_List_20_Data_2F_Get_20_Editors_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_List_20_Data_2F_Get_20_Editors_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Data,TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_equals,2,0,TERMINAL(0),TERMINAL(3));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(4)
}

enum opTrigger vpx_method_List_20_Data_2F_Get_20_Editors_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_List_20_Data_2F_Get_20_Editors_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

OUTPUT(0,NONE)
FOOTERWITHNONE(2)
}

enum opTrigger vpx_method_List_20_Data_2F_Get_20_Editors_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_List_20_Data_2F_Get_20_Editors_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_List_20_Data_2F_Get_20_Editors_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_List_20_Data_2F_Get_20_Editors_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_List_20_Data_2F_Get_20_Editors_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_List_20_Data_2F_Get_20_Editors_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Get_20_Viewer_20_Windows(PARAMETERS,ROOT(1));
NEXTCASEONFAILURE

if( (repeatLimit = vpx_multiplex(1,TERMINAL(1))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_List_20_Data_2F_Get_20_Editors_case_1_local_3(PARAMETERS,TERMINAL(0),LIST(1),ROOT(2));
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

enum opTrigger vpx_method_List_20_Data_2F_Get_20_Editors_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_List_20_Data_2F_Get_20_Editors_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"(  )",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_List_20_Data_2F_Get_20_Editors(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_List_20_Data_2F_Get_20_Editors_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_List_20_Data_2F_Get_20_Editors_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_List_20_Data_2F_Create_20_Editor_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_List_20_Data_2F_Create_20_Editor_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
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

enum opTrigger vpx_method_List_20_Data_2F_Create_20_Editor_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_List_20_Data_2F_Create_20_Editor_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
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

enum opTrigger vpx_method_List_20_Data_2F_Create_20_Editor_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_List_20_Data_2F_Create_20_Editor_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_List_20_Data_2F_Create_20_Editor_case_1_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_List_20_Data_2F_Create_20_Editor_case_1_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_List_20_Data_2F_Create_20_Editor_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_List_20_Data_2F_Create_20_Editor_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
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

enum opTrigger vpx_method_List_20_Data_2F_Create_20_Editor_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_List_20_Data_2F_Create_20_Editor_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Helper_20_Name,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_match(PARAMETERS,"Case Data",TERMINAL(3));
NEXTCASEONFAILURE

result = vpx_method_List_20_Data_2F_Create_20_Editor_case_1_local_4(PARAMETERS,TERMINAL(0),ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(0),ROOT(5),ROOT(6));

result = vpx_method_List_20_Data_2F_Create_20_Editor_case_1_local_6(PARAMETERS,TERMINAL(6),TERMINAL(0));

result = vpx_constant(PARAMETERS,"Operation Data",ROOT(7));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(4),TERMINAL(7),ROOT(8));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open_20_Editor,1,0,TERMINAL(8));

result = kSuccess;

FOOTER(9)
}

enum opTrigger vpx_method_List_20_Data_2F_Create_20_Editor_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_List_20_Data_2F_Create_20_Editor_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADERWITHNONE(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"/Create Editor Event",ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(0),TERMINAL(1),ROOT(3));

result = vpx_method_New_20_Callback(PARAMETERS,TERMINAL(2),TERMINAL(3),NONE,ROOT(4));

result = vpx_constant(PARAMETERS,"0.2",ROOT(5));

result = vpx_method_Execute_20_Callback_20_Deferred(PARAMETERS,TERMINAL(4),NONE,TERMINAL(5),NONE,NONE);

result = kSuccess;

FOOTERWITHNONE(6)
}

enum opTrigger vpx_method_List_20_Data_2F_Create_20_Editor_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_List_20_Data_2F_Create_20_Editor_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Construct_20_Editor,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open_20_With_20_Data,2,0,TERMINAL(2),TERMINAL(0));

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_List_20_Data_2F_Create_20_Editor(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_List_20_Data_2F_Create_20_Editor_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
if(vpx_method_List_20_Data_2F_Create_20_Editor_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_List_20_Data_2F_Create_20_Editor_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_List_20_Data_2F_Create_20_Editor_20_Event(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Construct_20_Editor,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open_20_With_20_Data,2,0,TERMINAL(2),TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_List_20_Data_2F_Get_20_Name_20_Singular_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_List_20_Data_2F_Get_20_Name_20_Singular_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(9)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Helper_20_Name,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_match(PARAMETERS,"Universal Data",TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(1),ROOT(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(4));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(4),ROOT(5),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(6));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(6),ROOT(7));

result = vpx_match(PARAMETERS,"Class Data",TERMINAL(7));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"Method",ROOT(8));

result = kSuccess;

OUTPUT(0,TERMINAL(8))
FOOTER(9)
}

enum opTrigger vpx_method_List_20_Data_2F_Get_20_Name_20_Singular_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_List_20_Data_2F_Get_20_Name_20_Singular_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Helper_20_Name,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_match(PARAMETERS,"Primitives Data",TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"Library",ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_List_20_Data_2F_Get_20_Name_20_Singular_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_List_20_Data_2F_Get_20_Name_20_Singular_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\" Data\"",ROOT(1));

result = vpx_get(PARAMETERS,kVPXValue_Helper_20_Name,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_method__22_Split_20_At_22_(PARAMETERS,TERMINAL(3),TERMINAL(1),ROOT(4),ROOT(5),ROOT(6));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(7)
}

enum opTrigger vpx_method_List_20_Data_2F_Get_20_Name_20_Singular_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_List_20_Data_2F_Get_20_Name_20_Singular_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Helper_20_Name,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_List_20_Data_2F_Get_20_Name_20_Singular(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_List_20_Data_2F_Get_20_Name_20_Singular_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_List_20_Data_2F_Get_20_Name_20_Singular_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_List_20_Data_2F_Get_20_Name_20_Singular_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_List_20_Data_2F_Get_20_Name_20_Singular_case_4(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_List_20_Data_2F_Get_20_Name_20_Plural_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_List_20_Data_2F_Get_20_Name_20_Plural_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"es",ROOT(1));

result = vpx_method__22_Suffix_22_(PARAMETERS,TERMINAL(0),TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"\"\"",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(0))
OUTPUT(1,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_List_20_Data_2F_Get_20_Name_20_Plural_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_List_20_Data_2F_Get_20_Name_20_Plural_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"es",ROOT(1));

result = vpx_constant(PARAMETERS,"s",ROOT(2));

result = vpx_method__22_Suffix_22_(PARAMETERS,TERMINAL(0),TERMINAL(2));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(0))
OUTPUT(1,TERMINAL(1))
FOOTER(3)
}

enum opTrigger vpx_method_List_20_Data_2F_Get_20_Name_20_Plural_case_1_local_4_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_List_20_Data_2F_Get_20_Name_20_Plural_case_1_local_4_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"Library",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"Libraries",ROOT(1));

result = vpx_constant(PARAMETERS,"\"\"",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
OUTPUT(1,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_List_20_Data_2F_Get_20_Name_20_Plural_case_1_local_4_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_List_20_Data_2F_Get_20_Name_20_Plural_case_1_local_4_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"s",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(0))
OUTPUT(1,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_List_20_Data_2F_Get_20_Name_20_Plural_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_List_20_Data_2F_Get_20_Name_20_Plural_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_List_20_Data_2F_Get_20_Name_20_Plural_case_1_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1))
if(vpx_method_List_20_Data_2F_Get_20_Name_20_Plural_case_1_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1))
if(vpx_method_List_20_Data_2F_Get_20_Name_20_Plural_case_1_local_4_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1))
vpx_method_List_20_Data_2F_Get_20_Name_20_Plural_case_1_local_4_case_4(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1);
return outcome;
}

enum opTrigger vpx_method_List_20_Data_2F_Get_20_Name_20_Plural_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_List_20_Data_2F_Get_20_Name_20_Plural_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Name_20_Singular,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"\"\"",TERMINAL(1));
NEXTCASEONSUCCESS

result = vpx_method_List_20_Data_2F_Get_20_Name_20_Plural_case_1_local_4(PARAMETERS,TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(2),TERMINAL(3),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_List_20_Data_2F_Get_20_Name_20_Plural_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_List_20_Data_2F_Get_20_Name_20_Plural_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"\"",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_List_20_Data_2F_Get_20_Name_20_Plural(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_List_20_Data_2F_Get_20_Name_20_Plural_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_List_20_Data_2F_Get_20_Name_20_Plural_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_List_20_Data_2F_Refresh_20_Editors_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_List_20_Data_2F_Refresh_20_Editors_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Controller,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Views,TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_match(PARAMETERS,"( )",TERMINAL(4));
NEXTCASEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Send_20_Reinstall,1,0,TERMINAL(2));

result = kSuccess;

FOOTER(5)
}

enum opTrigger vpx_method_List_20_Data_2F_Refresh_20_Editors_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_List_20_Data_2F_Refresh_20_Editors_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Editors,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"(  )",TERMINAL(1));
NEXTCASEONSUCCESS

if( (repeatLimit = vpx_multiplex(1,TERMINAL(1))) ){
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Reinstall_20_Data,1,0,LIST(1));
REPEATFINISH
} else {
}

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_List_20_Data_2F_Refresh_20_Editors_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_List_20_Data_2F_Refresh_20_Editors_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_List_20_Data_2F_Refresh_20_Editors(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_List_20_Data_2F_Refresh_20_Editors_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
if(vpx_method_List_20_Data_2F_Refresh_20_Editors_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_List_20_Data_2F_Refresh_20_Editors_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_List_20_Data_2F_Stack_20_Open(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Parent,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_constant(PARAMETERS,"Item Open",ROOT(5));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(4))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_call_primitive(PARAMETERS,VPLP_pack,3,1,TERMINAL(5),LIST(4),TERMINAL(3),ROOT(6));
LISTROOT(6,0)
REPEATFINISH
LISTROOTFINISH(6,0)
LISTROOTEND
} else {
ROOTEMPTY(6)
}

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open_20_Controller,1,0,TERMINAL(2));

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTERSINGLECASE(7)
}

enum opTrigger vpx_method_List_20_Data_2F_Get_20_URL(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Name,1,1,TERMINAL(0),ROOT(1));

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_URL,1,1,TERMINAL(3),ROOT(4));

result = vpx_constant(PARAMETERS,"\"/\"",ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,4,1,TERMINAL(4),TERMINAL(5),TERMINAL(1),TERMINAL(5),ROOT(6));

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTERSINGLECASE(7)
}

enum opTrigger vpx_method_List_20_Data_2F_Isolate(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(10)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Controller,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(0),ROOT(3),ROOT(4));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(4))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Isolate,1,2,LIST(4),ROOT(5),ROOT(6));
LISTROOT(6,0)
REPEATFINISH
LISTROOTFINISH(6,0)
LISTROOTEND
} else {
ROOTNULL(5,NULL)
ROOTEMPTY(6)
}

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(2),TERMINAL(6),ROOT(7));

result = vpx_constant(PARAMETERS,"NULL",ROOT(8));

result = vpx_set(PARAMETERS,kVPXValue_Controller,TERMINAL(1),TERMINAL(8),ROOT(9));

result = kSuccess;

OUTPUT(0,TERMINAL(9))
OUTPUT(1,TERMINAL(7))
FOOTERSINGLECASE(10)
}

enum opTrigger vpx_method_List_20_Data_2F_Integrate(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_detach_2D_l,1,3,TERMINAL(1),ROOT(2),ROOT(3),ROOT(4));

result = vpx_set(PARAMETERS,kVPXValue_Controller,TERMINAL(0),TERMINAL(2),ROOT(5));

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(5),ROOT(6),ROOT(7));

if( (repeatLimit = vpx_multiplex(2,TERMINAL(7),TERMINAL(3))) ){
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Integrate,2,0,LIST(7),LIST(3));
REPEATFINISH
} else {
}

result = kSuccess;

FOOTERSINGLECASE(8)
}

enum opTrigger vpx_method_List_20_Data_2F_Add_20_View_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_List_20_Data_2F_Add_20_View_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Controller,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(3));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Add_20_View,2,0,TERMINAL(3),TERMINAL(1));

result = kSuccess;

FOOTER(4)
}

enum opTrigger vpx_method_List_20_Data_2F_Add_20_View_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_List_20_Data_2F_Add_20_View_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_List_20_Data_2F_Add_20_View(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_List_20_Data_2F_Add_20_View_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_List_20_Data_2F_Add_20_View_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_List_20_Data_2F_Remove_20_View_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_List_20_Data_2F_Remove_20_View_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Controller,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(3));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Remove_20_View,2,0,TERMINAL(3),TERMINAL(1));

result = kSuccess;

FOOTER(4)
}

enum opTrigger vpx_method_List_20_Data_2F_Remove_20_View_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_List_20_Data_2F_Remove_20_View_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_List_20_Data_2F_Remove_20_View(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_List_20_Data_2F_Remove_20_View_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_List_20_Data_2F_Remove_20_View_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_List_20_Data_2F_Refresh_20_Data_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_List_20_Data_2F_Refresh_20_Data_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Controller,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Send_20_Refresh,1,0,TERMINAL(2));

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_List_20_Data_2F_Refresh_20_Data_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_List_20_Data_2F_Refresh_20_Data_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_List_20_Data_2F_Refresh_20_Data(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_List_20_Data_2F_Refresh_20_Data_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_List_20_Data_2F_Refresh_20_Data_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_List_20_Data_2F_Send_20_Refresh_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_List_20_Data_2F_Send_20_Refresh_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Controller,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Send_20_Refresh,1,0,TERMINAL(2));

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_List_20_Data_2F_Send_20_Refresh_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_List_20_Data_2F_Send_20_Refresh_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_List_20_Data_2F_Send_20_Refresh(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_List_20_Data_2F_Send_20_Refresh_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_List_20_Data_2F_Send_20_Refresh_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_List_20_Data_2F_Open_20_Controller_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_List_20_Data_2F_Open_20_Controller_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADERWITHNONE(5)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Controller,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
TERMINATEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Construct_20_Title,1,1,TERMINAL(0),ROOT(3));

result = vpx_constant(PARAMETERS,"Controller exists",ROOT(4));

result = vpx_method_Debug_20_Result(PARAMETERS,TERMINAL(3),NONE,TERMINAL(4),NONE);

result = kSuccess;

FOOTERSINGLECASEWITHNONE(5)
}

enum opTrigger vpx_method_List_20_Data_2F_Open_20_Controller(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADERWITHNONE(3)
INPUT(0,0)
result = kSuccess;

result = vpx_method_List_20_Data_2F_Open_20_Controller_case_1_local_2(PARAMETERS,TERMINAL(0));

result = vpx_instantiate(PARAMETERS,kVPXClass_Data_20_Controller,1,1,NONE,ROOT(1));

result = vpx_set(PARAMETERS,kVPXValue_Controller,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open,2,0,TERMINAL(1),TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASEWITHNONE(3)
}

enum opTrigger vpx_method_List_20_Data_2F_Close_20_Controller(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Controller,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(2));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Close,1,0,TERMINAL(2));

result = vpx_constant(PARAMETERS,"NULL",ROOT(3));

result = vpx_set(PARAMETERS,kVPXValue_Controller,TERMINAL(1),TERMINAL(3),ROOT(4));

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_List_20_Data_2F_Find_20_Item_20_Name_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_List_20_Data_2F_Find_20_Item_20_Name_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Name,1,1,TERMINAL(0),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP__3D_,2,0,TERMINAL(2),TERMINAL(1));
NEXTCASEONFAILURE

result = kSuccess;
FINISHONSUCCESS

OUTPUT(0,TERMINAL(0))
FOOTER(3)
}

enum opTrigger vpx_method_List_20_Data_2F_Find_20_Item_20_Name_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_List_20_Data_2F_Find_20_Item_20_Name_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
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

enum opTrigger vpx_method_List_20_Data_2F_Find_20_Item_20_Name_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_List_20_Data_2F_Find_20_Item_20_Name_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_List_20_Data_2F_Find_20_Item_20_Name_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_List_20_Data_2F_Find_20_Item_20_Name_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_List_20_Data_2F_Find_20_Item_20_Name(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(0),ROOT(2),ROOT(3));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(3))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_List_20_Data_2F_Find_20_Item_20_Name_case_1_local_3(PARAMETERS,LIST(3),TERMINAL(1),ROOT(4));
REPEATFINISH
} else {
ROOTNULL(4,NULL)
}

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_List_20_Data_2F_Open_20_Editor_20_With_20_Selection_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_List_20_Data_2F_Open_20_Editor_20_With_20_Selection_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Editor,1,1,TERMINAL(0),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
NEXTCASEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Select_20_Item,2,0,TERMINAL(2),TERMINAL(1));

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_List_20_Data_2F_Open_20_Editor_20_With_20_Selection_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_List_20_Data_2F_Open_20_Editor_20_With_20_Selection_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_persistent(PARAMETERS,kVPXValue_Displaying_20_Results_20_Windows_3F_,0,1,ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Construct_20_Editor,2,1,TERMINAL(0),TERMINAL(2),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open_20_With_20_Data,2,0,TERMINAL(3),TERMINAL(0));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Select_20_Item,2,0,TERMINAL(3),TERMINAL(1));

result = kSuccess;

FOOTER(4)
}

enum opTrigger vpx_method_List_20_Data_2F_Open_20_Editor_20_With_20_Selection(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_List_20_Data_2F_Open_20_Editor_20_With_20_Selection_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_List_20_Data_2F_Open_20_Editor_20_With_20_Selection_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_List_20_Data_2F_Send_20_Exclusive_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_List_20_Data_2F_Send_20_Exclusive_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADERWITHNONE(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Controller,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(4));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Send_20_Exclusive,4,0,TERMINAL(4),NONE,TERMINAL(1),TERMINAL(2));

result = kSuccess;

FOOTERWITHNONE(5)
}

enum opTrigger vpx_method_List_20_Data_2F_Send_20_Exclusive_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_List_20_Data_2F_Send_20_Exclusive_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_List_20_Data_2F_Send_20_Exclusive(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_List_20_Data_2F_Send_20_Exclusive_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2))
vpx_method_List_20_Data_2F_Send_20_Exclusive_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2);
return outcome;
}

enum opTrigger vpx_method_List_20_Data_2F_Isolate_20_First(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Isolate,1,2,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
OUTPUT(1,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_List_20_Data_2F_Integrate_20_First(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Integrate,2,0,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(2)
}

/* Stop Universals */



Nat4 VPLC_Helper_20_Data_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Helper_20_Data_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 425 341 }{ 200 300 } */
	tempAttribute = attribute_add("Owner",tempClass,NULL,environment);
	tempAttribute = attribute_add("Name",tempClass,tempAttribute_Helper_20_Data_2F_Name,environment);
/* Stop Attributes */

/* NULL SUPER CLASS */
	return kNOERROR;
}

/* Start Universals: { 44 826 }{ 852 333 } */
enum opTrigger vpx_method_Helper_20_Data_2F_Add_20_To_20_List_20_Data(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Owner,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(1),ROOT(4),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_attach_2D_r,2,1,TERMINAL(5),TERMINAL(3),ROOT(6));

result = vpx_set(PARAMETERS,kVPXValue_List,TERMINAL(4),TERMINAL(6),ROOT(7));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open,2,0,TERMINAL(3),TERMINAL(7));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Update_20_List_20_Data,2,0,TERMINAL(2),TERMINAL(7));

result = kSuccess;

FOOTERSINGLECASE(8)
}

enum opTrigger vpx_method_Helper_20_Data_2F_After_20_Import(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Helper_20_Data_2F_Clone(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_shallow_2D_copy,1,1,TERMINAL(0),ROOT(1));

result = vpx_constant(PARAMETERS,"NULL",ROOT(2));

result = vpx_set(PARAMETERS,kVPXValue_Owner,TERMINAL(1),TERMINAL(2),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Helper_20_Data_2F_Close(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = vpx_set(PARAMETERS,kVPXValue_Owner,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Helper_20_Data_2F_Get_20_Container_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Helper_20_Data_2F_Get_20_Container_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Owner,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
NEXTCASEONSUCCESS

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(2),ROOT(3),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Helper_20_Data_2F_Get_20_Container_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Helper_20_Data_2F_Get_20_Container_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Helper_20_Data_2F_Get_20_Container(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Helper_20_Data_2F_Get_20_Container_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Helper_20_Data_2F_Get_20_Container_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Helper_20_Data_2F_Get_20_Grandparent_20_Helper_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Helper_20_Data_2F_Get_20_Grandparent_20_Helper_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(9)
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

result = kSuccess;

OUTPUT(0,TERMINAL(8))
FOOTER(9)
}

enum opTrigger vpx_method_Helper_20_Data_2F_Get_20_Grandparent_20_Helper_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Helper_20_Data_2F_Get_20_Grandparent_20_Helper_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Helper_20_Data_2F_Get_20_Grandparent_20_Helper(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Helper_20_Data_2F_Get_20_Grandparent_20_Helper_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Helper_20_Data_2F_Get_20_Grandparent_20_Helper_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Helper_20_Data_2F_Get_20_List_20_Datum(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Owner,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
FAILONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(3),TERMINAL(1),ROOT(4));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Helper_20_Data_2F_Get_20_Value(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Helper_20_Data_2F_Initial_20_Where(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Helper_20_Data_2F_Initialize_20_Item_20_Data(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Helper_20_Data_2F_Integrate(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,1,TERMINAL(1),ROOT(2));

result = vpx_set(PARAMETERS,kVPXValue_Owner,TERMINAL(0),TERMINAL(2),ROOT(3));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Helper_20_Data_2F_Isolate(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Owner,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,1,1,TERMINAL(2),ROOT(3));

result = vpx_constant(PARAMETERS,"NULL",ROOT(4));

result = vpx_set(PARAMETERS,kVPXValue_Owner,TERMINAL(1),TERMINAL(2),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
OUTPUT(1,TERMINAL(3))
FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Helper_20_Data_2F_Open(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Owner,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Helper_20_Data_2F_Push_20_Lists_20_Data(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Helper_20_Data_2F_Remove_20_Self_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Helper_20_Data_2F_Remove_20_Self_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(11)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Owner,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
NEXTCASEONSUCCESS

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(4));
NEXTCASEONSUCCESS

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(4),ROOT(5),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP__28_in_29_,2,1,TERMINAL(6),TERMINAL(3),ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP_detach_2D_nth,2,2,TERMINAL(6),TERMINAL(7),ROOT(8),ROOT(9));

result = vpx_set(PARAMETERS,kVPXValue_List,TERMINAL(5),TERMINAL(8),ROOT(10));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Make_20_Dirty,1,0,TERMINAL(0));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Update_20_List_20_Data,2,0,TERMINAL(0),TERMINAL(10));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Close,1,0,TERMINAL(9));

result = kSuccess;

FOOTER(11)
}

enum opTrigger vpx_method_Helper_20_Data_2F_Remove_20_Self_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Helper_20_Data_2F_Remove_20_Self_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_Helper_20_Data_2F_Remove_20_Self(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Helper_20_Data_2F_Remove_20_Self_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Helper_20_Data_2F_Remove_20_Self_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Helper_20_Data_2F_Set_20_Name_case_1_local_4_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Helper_20_Data_2F_Set_20_Name_case_1_local_4_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Send_20_Refresh,1,0,TERMINAL(0));

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_Helper_20_Data_2F_Set_20_Name_case_1_local_4_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Helper_20_Data_2F_Set_20_Name_case_1_local_4_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Editor,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
NEXTCASEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Reinstall_20_Data,1,0,TERMINAL(1));

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Helper_20_Data_2F_Set_20_Name_case_1_local_4_case_1_local_5_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Helper_20_Data_2F_Set_20_Name_case_1_local_4_case_1_local_5_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_Helper_20_Data_2F_Set_20_Name_case_1_local_4_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Helper_20_Data_2F_Set_20_Name_case_1_local_4_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Helper_20_Data_2F_Set_20_Name_case_1_local_4_case_1_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
if(vpx_method_Helper_20_Data_2F_Set_20_Name_case_1_local_4_case_1_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Helper_20_Data_2F_Set_20_Name_case_1_local_4_case_1_local_5_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Helper_20_Data_2F_Set_20_Name_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Helper_20_Data_2F_Set_20_Name_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(0));
TERMINATEONSUCCESS

result = vpx_set(PARAMETERS,kVPXValue_Name,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_Lists,TERMINAL(2),ROOT(3),ROOT(4));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(4))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Helper_20_Data_2F_Set_20_Name_case_1_local_4_case_1_local_5(PARAMETERS,LIST(4));
REPEATFINISH
} else {
}

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Helper_20_Data_2F_Set_20_Name(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Name,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_Owner,TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_method_Helper_20_Data_2F_Set_20_Name_case_1_local_4(PARAMETERS,TERMINAL(4),TERMINAL(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Make_20_Dirty,1,0,TERMINAL(3));

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Helper_20_Data_2F_Set_20_Value(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Helper_20_Data_2F_Update_20_List_20_Data(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Send_20_Refresh,1,0,TERMINAL(1));

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
TERMINATEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Send_20_Refresh,1,0,TERMINAL(3));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Helper_20_Data_2F_Install_20_Names(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Helper_20_Data_2F_Substitute_20_With(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(11)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_detach_2D_nth,2,2,TERMINAL(4),TERMINAL(1),ROOT(5),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP_insert_2D_nth,3,1,TERMINAL(5),TERMINAL(6),TERMINAL(2),ROOT(7));

result = vpx_set(PARAMETERS,kVPXValue_List,TERMINAL(3),TERMINAL(7),ROOT(8));

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(6),ROOT(9),ROOT(10));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Update_20_List_20_Data,2,0,TERMINAL(10),TERMINAL(8));

result = kSuccess;

FOOTERSINGLECASE(11)
}

enum opTrigger vpx_method_Helper_20_Data_2F_Update_20_Record(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Helper_20_Data_2F_Get_20_Project_20_Data_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Helper_20_Data_2F_Get_20_Project_20_Data_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Grandparent_20_Helper,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
NEXTCASEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Project_20_Data,1,1,TERMINAL(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Helper_20_Data_2F_Get_20_Project_20_Data_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Helper_20_Data_2F_Get_20_Project_20_Data_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Helper_20_Data_2F_Get_20_Project_20_Data(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Helper_20_Data_2F_Get_20_Project_20_Data_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Helper_20_Data_2F_Get_20_Project_20_Data_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Helper_20_Data_2F_Get_20_Section_20_Data_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Helper_20_Data_2F_Get_20_Section_20_Data_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Grandparent_20_Helper,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
NEXTCASEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Section_20_Data,1,1,TERMINAL(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Helper_20_Data_2F_Get_20_Section_20_Data_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Helper_20_Data_2F_Get_20_Section_20_Data_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Helper_20_Data_2F_Get_20_Section_20_Data(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Helper_20_Data_2F_Get_20_Section_20_Data_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Helper_20_Data_2F_Get_20_Section_20_Data_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Helper_20_Data_2F_Set_20_Direct_20_Value(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Value,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Update_20_Record,1,0,TERMINAL(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Helper_20_Data_2F_Get_20_Index_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Helper_20_Data_2F_Get_20_Index_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Owner,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
NEXTCASEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Index,1,1,TERMINAL(2),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_Helper_20_Data_2F_Get_20_Index_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Helper_20_Data_2F_Get_20_Index_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Helper_20_Data_2F_Get_20_Index(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Helper_20_Data_2F_Get_20_Index_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Helper_20_Data_2F_Get_20_Index_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Helper_20_Data_2F_Post_20_Open(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Helper_20_Data_2F_Set_20_Text(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Name,2,0,TERMINAL(0),TERMINAL(1));
FAILONFAILURE

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Helper_20_Data_2F_Make_20_Dirty_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Helper_20_Data_2F_Make_20_Dirty_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Send_20_Refresh,1,0,TERMINAL(0));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Section_20_Data,1,1,TERMINAL(0),ROOT(1));

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

enum opTrigger vpx_method_Helper_20_Data_2F_Make_20_Dirty_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Helper_20_Data_2F_Make_20_Dirty_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_Helper_20_Data_2F_Make_20_Dirty(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Helper_20_Data_2F_Make_20_Dirty_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Helper_20_Data_2F_Make_20_Dirty_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Helper_20_Data_2F_Construct_20_Editor_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Helper_20_Data_2F_Construct_20_Editor_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_persistent(PARAMETERS,kVPXValue_Use_20_Prototype_20_Windows_3F_,0,1,ROOT(2));

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(2));
NEXTCASEONSUCCESS

result = vpx_instantiate(PARAMETERS,kVPXClass_Project_20_Viewer_20_Window,1,1,NONE,ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERWITHNONE(4)
}

enum opTrigger vpx_method_Helper_20_Data_2F_Construct_20_Editor_case_2_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Helper_20_Data_2F_Construct_20_Editor_case_2_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
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

enum opTrigger vpx_method_Helper_20_Data_2F_Construct_20_Editor_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Helper_20_Data_2F_Construct_20_Editor_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(10)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_List_20_Window,1,1,NONE,ROOT(2));

result = vpx_instantiate(PARAMETERS,kVPXClass_List_20_View,1,1,NONE,ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Size,1,1,TERMINAL(2),ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Size,2,0,TERMINAL(3),TERMINAL(4));

result = vpx_get(PARAMETERS,kVPXValue_Frame,TERMINAL(3),ROOT(5),ROOT(6));

result = vpx_method_Helper_20_Data_2F_Construct_20_Editor_case_2_local_7(PARAMETERS,TERMINAL(6),ROOT(7));

result = vpx_set(PARAMETERS,kVPXValue_Vertical_20_Scroll_20_Bar,TERMINAL(5),TERMINAL(7),ROOT(8));

result = vpx_set(PARAMETERS,kVPXValue_View,TERMINAL(2),TERMINAL(8),ROOT(9));

result = kSuccess;

OUTPUT(0,TERMINAL(9))
FOOTERWITHNONE(10)
}

enum opTrigger vpx_method_Helper_20_Data_2F_Construct_20_Editor(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Helper_20_Data_2F_Construct_20_Editor_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Helper_20_Data_2F_Construct_20_Editor_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Helper_20_Data_2F_Construct_20_Title_case_1_local_8_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Helper_20_Data_2F_Construct_20_Title_case_1_local_8_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"s",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"es of ",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Helper_20_Data_2F_Construct_20_Title_case_1_local_8_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Helper_20_Data_2F_Construct_20_Title_case_1_local_8_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"s of ",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Helper_20_Data_2F_Construct_20_Title_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Helper_20_Data_2F_Construct_20_Title_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Helper_20_Data_2F_Construct_20_Title_case_1_local_8_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Helper_20_Data_2F_Construct_20_Title_case_1_local_8_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Helper_20_Data_2F_Construct_20_Title_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Helper_20_Data_2F_Construct_20_Title_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(14)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Name,TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
NEXTCASEONSUCCESS

result = vpx_constant(PARAMETERS,"\" \"",ROOT(4));

result = vpx_method__22_Split_20_At_22_(PARAMETERS,TERMINAL(0),TERMINAL(4),ROOT(5),ROOT(6),ROOT(7));

result = vpx_constant(PARAMETERS,"1",ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP_suffix,2,2,TERMINAL(5),TERMINAL(8),ROOT(9),ROOT(10));

result = vpx_method_Helper_20_Data_2F_Construct_20_Title_case_1_local_8(PARAMETERS,TERMINAL(10),ROOT(11));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(5),TERMINAL(11),ROOT(12));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(12),TERMINAL(3),ROOT(13));

result = kSuccess;

OUTPUT(0,TERMINAL(13))
FOOTER(14)
}

enum opTrigger vpx_method_Helper_20_Data_2F_Construct_20_Title_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Helper_20_Data_2F_Construct_20_Title_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Untitled",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Helper_20_Data_2F_Construct_20_Title(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Helper_20_Data_2F_Construct_20_Title_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Helper_20_Data_2F_Construct_20_Title_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Helper_20_Data_2F_Get_20_Name(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Name,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Helper_20_Data_2F_Handle_20_Item_20_Click_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Helper_20_Data_2F_Handle_20_Item_20_Click_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP__28_length_29_,1,1,TERMINAL(0),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_lte,2,0,TERMINAL(1),TERMINAL(2));
FAILONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_nth,2,1,TERMINAL(0),TERMINAL(1),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Helper_20_Data_2F_Handle_20_Item_20_Click_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Helper_20_Data_2F_Handle_20_Item_20_Click_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Owner,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(4));
NEXTCASEONSUCCESS

result = vpx_get(PARAMETERS,kVPXValue_Lists,TERMINAL(4),ROOT(5),ROOT(6));

result = vpx_method_Helper_20_Data_2F_Handle_20_Item_20_Click_case_1_local_5(PARAMETERS,TERMINAL(6),TERMINAL(2),ROOT(7));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open_20_Editor,1,0,TERMINAL(7));

result = kSuccess;

FOOTER(8)
}

enum opTrigger vpx_method_Helper_20_Data_2F_Handle_20_Item_20_Click_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Helper_20_Data_2F_Handle_20_Item_20_Click_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_persistent(PARAMETERS,kVPXValue_Use_20_Prototype_20_Windows_3F_,0,1,ROOT(3));

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(3));
NEXTCASEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Toggle_20_Container,1,0,TERMINAL(1));

result = kSuccess;

FOOTER(4)
}

enum opTrigger vpx_method_Helper_20_Data_2F_Handle_20_Item_20_Click_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Helper_20_Data_2F_Handle_20_Item_20_Click_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_Helper_20_Data_2F_Handle_20_Item_20_Click(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Helper_20_Data_2F_Handle_20_Item_20_Click_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2))
if(vpx_method_Helper_20_Data_2F_Handle_20_Item_20_Click_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2))
vpx_method_Helper_20_Data_2F_Handle_20_Item_20_Click_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2);
return outcome;
}

enum opTrigger vpx_method_Helper_20_Data_2F_Get_20_File(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;
FAILONSUCCESS

OUTPUT(0,NONE)
FOOTERSINGLECASEWITHNONE(1)
}

enum opTrigger vpx_method_Helper_20_Data_2F_Set_20_File(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Helper_20_Data_2F_Update_20_Value(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Helper_20_Data_2F_Save_20_File_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Helper_20_Data_2F_Save_20_File_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Update_20_Value,1,0,TERMINAL(0));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_File,2,0,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Helper_20_Data_2F_Save_20_File_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Helper_20_Data_2F_Save_20_File_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
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

enum opTrigger vpx_method_Helper_20_Data_2F_Save_20_File_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Helper_20_Data_2F_Save_20_File_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Helper_20_Data_2F_Save_20_File_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Helper_20_Data_2F_Save_20_File_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Helper_20_Data_2F_Save_20_File_case_1_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Helper_20_Data_2F_Save_20_File_case_1_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Helper_20_Data_2F_Save_20_File_case_1_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Helper_20_Data_2F_Save_20_File_case_1_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADERWITHNONE(10)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Object_20_File_20_Type,1,1,TERMINAL(3),ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Coerce_20_FSSpec,1,1,TERMINAL(1),ROOT(5));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"\'mVPL\'",ROOT(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Finder_20_Info,4,0,TERMINAL(1),TERMINAL(4),TERMINAL(6),NONE);
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_open_2D_file,1,1,TERMINAL(5),ROOT(7));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"FALSE",ROOT(8));

result = vpx_set(PARAMETERS,kVPXValue_Dirty,TERMINAL(3),TERMINAL(8),ROOT(9));

result = vpx_call_primitive(PARAMETERS,VPLP_write_2D_object,2,0,TERMINAL(7),TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_close_2D_file,1,0,TERMINAL(7));
NEXTCASEONFAILURE

result = kSuccess;

FOOTERWITHNONE(10)
}

enum opTrigger vpx_method_Helper_20_Data_2F_Save_20_File_case_1_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Helper_20_Data_2F_Save_20_File_case_1_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"Trouble writing file: \"",ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Object_20_File_20_Name,1,1,TERMINAL(4),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(2),TERMINAL(5),ROOT(6));

result = vpx_method_Debug_20_Console(PARAMETERS,TERMINAL(6));

result = kSuccess;

FOOTER(7)
}

enum opTrigger vpx_method_Helper_20_Data_2F_Save_20_File_case_1_local_7_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Helper_20_Data_2F_Save_20_File_case_1_local_7_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(10)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Object_20_File_20_Type,1,1,TERMINAL(3),ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Coerce_20_FSSpec,1,1,TERMINAL(1),ROOT(5));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_FX_20_ScriptCode,1,1,TERMINAL(1),ROOT(6));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_create_2D_object_2D_file,3,0,TERMINAL(5),TERMINAL(6),TERMINAL(4));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_open_2D_file,1,1,TERMINAL(5),ROOT(7));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"FALSE",ROOT(8));

result = vpx_set(PARAMETERS,kVPXValue_Dirty,TERMINAL(3),TERMINAL(8),ROOT(9));

result = vpx_call_primitive(PARAMETERS,VPLP_write_2D_object,2,0,TERMINAL(7),TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_close_2D_file,1,0,TERMINAL(7));
NEXTCASEONFAILURE

result = kSuccess;

FOOTER(10)
}

enum opTrigger vpx_method_Helper_20_Data_2F_Save_20_File_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Helper_20_Data_2F_Save_20_File_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Helper_20_Data_2F_Save_20_File_case_1_local_7_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
if(vpx_method_Helper_20_Data_2F_Save_20_File_case_1_local_7_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Helper_20_Data_2F_Save_20_File_case_1_local_7_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Helper_20_Data_2F_Save_20_File_case_1_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Helper_20_Data_2F_Save_20_File_case_1_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADERWITHNONE(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_MacOS_20_File_20_Reference,1,1,NONE,ROOT(2));

result = vpx_constant(PARAMETERS,"FALSE",ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_New_20_From_20_Path_20_String,4,0,TERMINAL(2),TERMINAL(1),NONE,TERMINAL(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_File,2,0,TERMINAL(0),TERMINAL(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
TERMINATEONSUCCESS

result = kSuccess;

FOOTERSINGLECASEWITHNONE(4)
}

enum opTrigger vpx_method_Helper_20_Data_2F_Save_20_File_case_1_local_11_case_1_local_5_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Helper_20_Data_2F_Save_20_File_case_1_local_11_case_1_local_5_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
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

enum opTrigger vpx_method_Helper_20_Data_2F_Save_20_File_case_1_local_11_case_1_local_5_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Helper_20_Data_2F_Save_20_File_case_1_local_11_case_1_local_5_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
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

enum opTrigger vpx_method_Helper_20_Data_2F_Save_20_File_case_1_local_11_case_1_local_5_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Helper_20_Data_2F_Save_20_File_case_1_local_11_case_1_local_5_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Helper_20_Data_2F_Save_20_File_case_1_local_11_case_1_local_5_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Helper_20_Data_2F_Save_20_File_case_1_local_11_case_1_local_5_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Helper_20_Data_2F_Save_20_File_case_1_local_11_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Helper_20_Data_2F_Save_20_File_case_1_local_11_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_To_20_CFString(PARAMETERS,TERMINAL(1),ROOT(2));

result = vpx_method_Helper_20_Data_2F_Save_20_File_case_1_local_11_case_1_local_5_case_1_local_3(PARAMETERS,TERMINAL(2),TERMINAL(0),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Release,1,0,TERMINAL(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
TERMINATEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Delete,1,0,TERMINAL(3));
CONTINUEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Close,1,0,TERMINAL(3));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Helper_20_Data_2F_Save_20_File_case_1_local_11_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Helper_20_Data_2F_Save_20_File_case_1_local_11_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Name,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_constant(PARAMETERS,"\".o\"",ROOT(3));

result = vpx_method_Get_20_Export_20_Mode_20_Extension(PARAMETERS,ROOT(4));

result = vpx_constant(PARAMETERS,"( \"\" \".ppc\" \".x86\" )",ROOT(5));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(5))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,4,1,TERMINAL(2),TERMINAL(4),LIST(5),TERMINAL(3),ROOT(6));
LISTROOT(6,0)
REPEATFINISH
LISTROOTFINISH(6,0)
LISTROOTEND
} else {
ROOTEMPTY(6)
}

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTERSINGLECASE(7)
}

enum opTrigger vpx_method_Helper_20_Data_2F_Save_20_File_case_1_local_11_case_1_local_7_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Helper_20_Data_2F_Save_20_File_case_1_local_11_case_1_local_7_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
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

enum opTrigger vpx_method_Helper_20_Data_2F_Save_20_File_case_1_local_11_case_1_local_7_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Helper_20_Data_2F_Save_20_File_case_1_local_11_case_1_local_7_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
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

enum opTrigger vpx_method_Helper_20_Data_2F_Save_20_File_case_1_local_11_case_1_local_7_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Helper_20_Data_2F_Save_20_File_case_1_local_11_case_1_local_7_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Helper_20_Data_2F_Save_20_File_case_1_local_11_case_1_local_7_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Helper_20_Data_2F_Save_20_File_case_1_local_11_case_1_local_7_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Helper_20_Data_2F_Save_20_File_case_1_local_11_case_1_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Helper_20_Data_2F_Save_20_File_case_1_local_11_case_1_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_To_20_CFString(PARAMETERS,TERMINAL(1),ROOT(2));

result = vpx_method_Helper_20_Data_2F_Save_20_File_case_1_local_11_case_1_local_7_case_1_local_3(PARAMETERS,TERMINAL(2),TERMINAL(0),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Release,1,0,TERMINAL(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
NEXTCASEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Delete,1,0,TERMINAL(3));
CONTINUEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Close,1,0,TERMINAL(3));

result = kSuccess;

FOOTER(4)
}

enum opTrigger vpx_method_Helper_20_Data_2F_Save_20_File_case_1_local_11_case_1_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Helper_20_Data_2F_Save_20_File_case_1_local_11_case_1_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Helper_20_Data_2F_Save_20_File_case_1_local_11_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Helper_20_Data_2F_Save_20_File_case_1_local_11_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Helper_20_Data_2F_Save_20_File_case_1_local_11_case_1_local_7_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Helper_20_Data_2F_Save_20_File_case_1_local_11_case_1_local_7_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Helper_20_Data_2F_Save_20_File_case_1_local_11(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Helper_20_Data_2F_Save_20_File_case_1_local_11(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Parent,1,1,TERMINAL(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(2));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_C_20_File_20_Name,1,1,TERMINAL(0),ROOT(3));

result = vpx_method_Helper_20_Data_2F_Save_20_File_case_1_local_11_case_1_local_5(PARAMETERS,TERMINAL(2),TERMINAL(3));

result = vpx_method_Helper_20_Data_2F_Save_20_File_case_1_local_11_case_1_local_6(PARAMETERS,TERMINAL(0),ROOT(4));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(4))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Helper_20_Data_2F_Save_20_File_case_1_local_11_case_1_local_7(PARAMETERS,TERMINAL(2),LIST(4));
REPEATFINISH
} else {
}

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Helper_20_Data_2F_Save_20_File_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Helper_20_Data_2F_Save_20_File_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_method_Helper_20_Data_2F_Save_20_File_case_1_local_3(PARAMETERS,TERMINAL(0));

result = vpx_get(PARAMETERS,kVPXValue_Owner,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_method_Helper_20_Data_2F_Save_20_File_case_1_local_5(PARAMETERS,TERMINAL(1),ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Isolate_20_First,1,2,TERMINAL(3),ROOT(5),ROOT(6));

result = vpx_method_Helper_20_Data_2F_Save_20_File_case_1_local_7(PARAMETERS,TERMINAL(5),TERMINAL(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Integrate_20_First,2,0,TERMINAL(5),TERMINAL(6));

result = vpx_method_Helper_20_Data_2F_Save_20_File_case_1_local_9(PARAMETERS,TERMINAL(0),TERMINAL(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Refresh_20_Data,1,0,TERMINAL(3));

result = vpx_method_Helper_20_Data_2F_Save_20_File_case_1_local_11(PARAMETERS,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTER(7)
}

enum opTrigger vpx_method_Helper_20_Data_2F_Save_20_File_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Helper_20_Data_2F_Save_20_File_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_File,1,1,TERMINAL(0),ROOT(2));
TERMINATEONFAILURE

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
NEXTCASEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Save_20_File,2,0,TERMINAL(0),TERMINAL(2));

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_Helper_20_Data_2F_Save_20_File_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Helper_20_Data_2F_Save_20_File_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADERWITHNONE(8)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,kWindowModalityAppModal,ROOT(2));

result = vpx_constant(PARAMETERS,"NULL",ROOT(3));

result = vpx_constant(PARAMETERS,"/Save File Callback",ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Object_20_File_20_Name,1,1,TERMINAL(0),ROOT(5));

result = vpx_method_New_20_Callback(PARAMETERS,TERMINAL(4),TERMINAL(0),NONE,ROOT(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Object_20_File_20_Type,1,1,TERMINAL(0),ROOT(7));

result = vpx_method_Nav_20_Put_20_File(PARAMETERS,TERMINAL(5),TERMINAL(7),TERMINAL(3),TERMINAL(2),TERMINAL(3),TERMINAL(6));
TERMINATEONFAILURE

result = kSuccess;

FOOTERWITHNONE(8)
}

enum opTrigger vpx_method_Helper_20_Data_2F_Save_20_File(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Helper_20_Data_2F_Save_20_File_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
if(vpx_method_Helper_20_Data_2F_Save_20_File_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Helper_20_Data_2F_Save_20_File_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Helper_20_Data_2F_Save_20_File_20_Callback_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Helper_20_Data_2F_Save_20_File_20_Callback_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Canceled_3F_,1,1,TERMINAL(1),ROOT(2));

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(2));
NEXTCASEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_File_20_Name,1,1,TERMINAL(1),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Reply_20_Selection,1,1,TERMINAL(1),ROOT(4));
NEXTCASEONFAILURE

result = vpx_match(PARAMETERS,"(  )",TERMINAL(4));
NEXTCASEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,1,TERMINAL(4),ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Create_20_File,2,2,TERMINAL(5),TERMINAL(3),ROOT(6),ROOT(7));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(7));
NEXTCASEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Save_20_File,2,0,TERMINAL(0),TERMINAL(7));

result = kSuccess;

FOOTER(8)
}

enum opTrigger vpx_method_Helper_20_Data_2F_Save_20_File_20_Callback_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Helper_20_Data_2F_Save_20_File_20_Callback_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Helper_20_Data_2F_Save_20_File_20_Callback(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Helper_20_Data_2F_Save_20_File_20_Callback_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Helper_20_Data_2F_Save_20_File_20_Callback_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Helper_20_Data_2F_Get_20_Method_20_Data_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Helper_20_Data_2F_Get_20_Method_20_Data_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Grandparent_20_Helper,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
NEXTCASEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Method_20_Data,1,1,TERMINAL(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Helper_20_Data_2F_Get_20_Method_20_Data_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Helper_20_Data_2F_Get_20_Method_20_Data_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Helper_20_Data_2F_Get_20_Method_20_Data(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Helper_20_Data_2F_Get_20_Method_20_Data_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Helper_20_Data_2F_Get_20_Method_20_Data_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Helper_20_Data_2F_Get_20_All_20_Breakpoints(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( )",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Helper_20_Data_2F_Send_20_Refresh_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Helper_20_Data_2F_Send_20_Refresh_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Owner,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Send_20_Refresh,1,0,TERMINAL(2));

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_Helper_20_Data_2F_Send_20_Refresh_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Helper_20_Data_2F_Send_20_Refresh_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_Helper_20_Data_2F_Send_20_Refresh(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Helper_20_Data_2F_Send_20_Refresh_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Helper_20_Data_2F_Send_20_Refresh_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Helper_20_Data_2F_Full_20_Name(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Name,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Helper_20_Data_2F_Select_20_Name(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Full_20_Name,1,1,TERMINAL(0),ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Helper_20_Data_2F_Handle_20_Selection_20_Click_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Helper_20_Data_2F_Handle_20_Selection_20_Click_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"Class Data",TERMINAL(0));
TERMINATEONSUCCESS

result = vpx_match(PARAMETERS,"Persistent Data",TERMINAL(0));
TERMINATEONSUCCESS

result = vpx_match(PARAMETERS,"Section Data",TERMINAL(0));
TERMINATEONSUCCESS

result = vpx_match(PARAMETERS,"Universal Data",TERMINAL(0));
TERMINATEONSUCCESS

result = vpx_match(PARAMETERS,"Primitives Data",TERMINAL(0));
TERMINATEONSUCCESS

result = vpx_match(PARAMETERS,"Case Data",TERMINAL(0));
TERMINATEONSUCCESS

result = kSuccess;
FAILONSUCCESS

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Helper_20_Data_2F_Handle_20_Selection_20_Click_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Helper_20_Data_2F_Handle_20_Selection_20_Click_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(0),ROOT(3));

result = vpx_method_Helper_20_Data_2F_Handle_20_Selection_20_Click_case_1_local_3(PARAMETERS,TERMINAL(3));
NEXTCASEONFAILURE

result = vpx_match(PARAMETERS,"0",TERMINAL(2));
NEXTCASEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Handle_20_Item_20_Click,3,0,TERMINAL(0),TERMINAL(1),TERMINAL(2));

result = kSuccess;

FOOTER(4)
}

enum opTrigger vpx_method_Helper_20_Data_2F_Handle_20_Selection_20_Click_case_2_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Helper_20_Data_2F_Handle_20_Selection_20_Click_case_2_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Editor,1,1,TERMINAL(0),ROOT(3));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
NEXTCASEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Window,1,1,TERMINAL(3),ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Window,1,1,TERMINAL(2),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP__3D_,2,0,TERMINAL(4),TERMINAL(5));
NEXTCASEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Select_20_Item,2,0,TERMINAL(3),TERMINAL(1));

result = kSuccess;

FOOTER(6)
}

enum opTrigger vpx_method_Helper_20_Data_2F_Handle_20_Selection_20_Click_case_2_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Helper_20_Data_2F_Handle_20_Selection_20_Click_case_2_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADERWITHNONE(6)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Helper_20_Name,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Construct_20_Editor,2,1,TERMINAL(3),NONE,ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open_20_With_20_Data,2,0,TERMINAL(5),TERMINAL(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Select_20_Item,2,0,TERMINAL(5),TERMINAL(1));

result = kSuccess;

FOOTERWITHNONE(6)
}

enum opTrigger vpx_method_Helper_20_Data_2F_Handle_20_Selection_20_Click_case_2_local_4_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Helper_20_Data_2F_Handle_20_Selection_20_Click_case_2_local_4_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Window,1,1,TERMINAL(2),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Install_20_Data,2,0,TERMINAL(3),TERMINAL(0));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Select_20_Item,2,0,TERMINAL(3),TERMINAL(1));

result = kSuccess;

FOOTER(4)
}

enum opTrigger vpx_method_Helper_20_Data_2F_Handle_20_Selection_20_Click_case_2_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Helper_20_Data_2F_Handle_20_Selection_20_Click_case_2_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Helper_20_Data_2F_Handle_20_Selection_20_Click_case_2_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2))
if(vpx_method_Helper_20_Data_2F_Handle_20_Selection_20_Click_case_2_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2))
vpx_method_Helper_20_Data_2F_Handle_20_Selection_20_Click_case_2_local_4_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2);
return outcome;
}

enum opTrigger vpx_method_Helper_20_Data_2F_Handle_20_Selection_20_Click_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Helper_20_Data_2F_Handle_20_Selection_20_Click_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Container,1,1,TERMINAL(0),ROOT(3));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
NEXTCASEONSUCCESS

result = vpx_method_Helper_20_Data_2F_Handle_20_Selection_20_Click_case_2_local_4(PARAMETERS,TERMINAL(3),TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTER(4)
}

enum opTrigger vpx_method_Helper_20_Data_2F_Handle_20_Selection_20_Click_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Helper_20_Data_2F_Handle_20_Selection_20_Click_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_Helper_20_Data_2F_Handle_20_Selection_20_Click(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Helper_20_Data_2F_Handle_20_Selection_20_Click_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2))
if(vpx_method_Helper_20_Data_2F_Handle_20_Selection_20_Click_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2))
vpx_method_Helper_20_Data_2F_Handle_20_Selection_20_Click_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2);
return outcome;
}

enum opTrigger vpx_method_Helper_20_Data_2F_Have_20_Row_20_Values_3F_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"TRUE",ROOT(1));

result = vpx_constant(PARAMETERS,"TRUE",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
OUTPUT(1,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Helper_20_Data_2F_Have_20_Icon_20_Values_3F__case_1_local_9_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Helper_20_Data_2F_Have_20_Icon_20_Values_3F__case_1_local_9_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_match(PARAMETERS,"( )",TERMINAL(2));
NEXTCASEONSUCCESS

result = vpx_constant(PARAMETERS,"TRUE",ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Helper_20_Name,TERMINAL(1),ROOT(4),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
OUTPUT(1,TERMINAL(3))
FOOTER(6)
}

enum opTrigger vpx_method_Helper_20_Data_2F_Have_20_Icon_20_Values_3F__case_1_local_9_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Helper_20_Data_2F_Have_20_Icon_20_Values_3F__case_1_local_9_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"FALSE",ROOT(1));

result = vpx_get(PARAMETERS,kVPXValue_Helper_20_Name,TERMINAL(0),ROOT(2),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
OUTPUT(1,TERMINAL(1))
FOOTER(4)
}

enum opTrigger vpx_method_Helper_20_Data_2F_Have_20_Icon_20_Values_3F__case_1_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Helper_20_Data_2F_Have_20_Icon_20_Values_3F__case_1_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Helper_20_Data_2F_Have_20_Icon_20_Values_3F__case_1_local_9_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1))
vpx_method_Helper_20_Data_2F_Have_20_Icon_20_Values_3F__case_1_local_9_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1);
return outcome;
}

enum opTrigger vpx_method_Helper_20_Data_2F_Have_20_Icon_20_Values_3F__case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Helper_20_Data_2F_Have_20_Icon_20_Values_3F__case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(8)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"Universal Data",TERMINAL(1));
NEXTCASEONSUCCESS

result = vpx_match(PARAMETERS,"Case Data",TERMINAL(1));
NEXTCASEONSUCCESS

result = vpx_get(PARAMETERS,kVPXValue_Owner,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
NEXTCASEONSUCCESS

result = vpx_get(PARAMETERS,kVPXValue_Lists,TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_match(PARAMETERS,"( )",TERMINAL(5));
NEXTCASEONSUCCESS

if( (repeatLimit = vpx_multiplex(1,TERMINAL(5))) ){
LISTROOTBEGIN(2)
REPEATBEGINWITHCOUNTER
result = vpx_method_Helper_20_Data_2F_Have_20_Icon_20_Values_3F__case_1_local_9(PARAMETERS,LIST(5),ROOT(6),ROOT(7));
LISTROOT(6,0)
LISTROOT(7,1)
REPEATFINISH
LISTROOTFINISH(6,0)
LISTROOTFINISH(7,1)
LISTROOTEND
} else {
ROOTEMPTY(6)
ROOTEMPTY(7)
}

result = kSuccess;

OUTPUT(0,TERMINAL(6))
OUTPUT(1,TERMINAL(7))
FOOTER(8)
}

enum opTrigger vpx_method_Helper_20_Data_2F_Have_20_Icon_20_Values_3F__case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Helper_20_Data_2F_Have_20_Icon_20_Values_3F__case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( TRUE )",ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(0),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,1,1,TERMINAL(2),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
OUTPUT(1,TERMINAL(1))
FOOTER(4)
}

enum opTrigger vpx_method_Helper_20_Data_2F_Have_20_Icon_20_Values_3F_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Helper_20_Data_2F_Have_20_Icon_20_Values_3F__case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1))
vpx_method_Helper_20_Data_2F_Have_20_Icon_20_Values_3F__case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1);
return outcome;
}

enum opTrigger vpx_method_Helper_20_Data_2F_Install_20_Proxy_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Helper_20_Data_2F_Install_20_Proxy_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_method_Find_20_Item_20_IconRef(PARAMETERS,TERMINAL(1),ROOT(3));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_from_2D_pointer,1,1,TERMINAL(3),ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod__7E_Set_20_Proxy_20_IconRef,2,0,TERMINAL(2),TERMINAL(4));
NEXTCASEONFAILURE

result = kSuccess;

FOOTER(5)
}

enum opTrigger vpx_method_Helper_20_Data_2F_Install_20_Proxy_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Helper_20_Data_2F_Install_20_Proxy_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_Helper_20_Data_2F_Install_20_Proxy(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Helper_20_Data_2F_Install_20_Proxy_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2))
vpx_method_Helper_20_Data_2F_Install_20_Proxy_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2);
return outcome;
}

enum opTrigger vpx_method_Helper_20_Data_2F_Get_20_Path_20_Name(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Name,1,1,TERMINAL(0),ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Helper_20_Data_2F_Reveal_20_Path_20_Item(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Owner,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open_20_Editor,1,0,TERMINAL(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Helper_20_Data_2F_Open_20_Editor(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Owner,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open_20_Editor,1,0,TERMINAL(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Helper_20_Data_2F_Get_20_Find_20_Text(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Name,1,1,TERMINAL(0),ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Helper_20_Data_2F_Set_20_Find_20_Text(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Text,2,0,TERMINAL(0),TERMINAL(1));
FAILONFAILURE

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Helper_20_Data_2F_Use_20_Best_20_Frame(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Helper_20_Data_2F_Can_20_Create_3F_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Helper_20_Data_2F_Can_20_Delete_3F_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Helper_20_Data_2F_Isolate_20_First(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Isolate,1,2,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
OUTPUT(1,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Helper_20_Data_2F_Integrate_20_First(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Integrate,2,0,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(2)
}

/* Stop Universals */



Nat4 VPLC_Item_20_Data_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Item_20_Data_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 379 331 }{ 200 300 } */
	tempAttribute = attribute_add("Parent",tempClass,NULL,environment);
	tempAttribute = attribute_add("Helper",tempClass,NULL,environment);
	tempAttribute = attribute_add("Lists",tempClass,tempAttribute_Item_20_Data_2F_Lists,environment);
	tempAttribute = attribute_add("Name",tempClass,NULL,environment);
	tempAttribute = attribute_add("Frame",tempClass,NULL,environment);
	tempAttribute = attribute_add("Controller",tempClass,NULL,environment);
	tempAttribute = attribute_add("Attachments",tempClass,NULL,environment);
/* Stop Attributes */

/* NULL SUPER CLASS */
	return kNOERROR;
}

/* Start Universals: { 294 1004 }{ 547 420 } */
enum opTrigger vpx_method_Item_20_Data_2F_Clone_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Item_20_Data_2F_Clone_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
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

enum opTrigger vpx_method_Item_20_Data_2F_Clone_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Item_20_Data_2F_Clone_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Clone,1,1,TERMINAL(0),ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Item_20_Data_2F_Clone_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Item_20_Data_2F_Clone_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Item_20_Data_2F_Clone_case_1_local_6_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Item_20_Data_2F_Clone_case_1_local_6_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Item_20_Data_2F_Clone(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(14)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_shallow_2D_copy,1,1,TERMINAL(0),ROOT(1));

result = vpx_constant(PARAMETERS,"NULL",ROOT(2));

result = vpx_set(PARAMETERS,kVPXValue_Parent,TERMINAL(1),TERMINAL(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_method_Item_20_Data_2F_Clone_case_1_local_6(PARAMETERS,TERMINAL(5),ROOT(6));

result = vpx_set(PARAMETERS,kVPXValue_Helper,TERMINAL(4),TERMINAL(6),ROOT(7));

result = vpx_get(PARAMETERS,kVPXValue_Lists,TERMINAL(7),ROOT(8),ROOT(9));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(9))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Clone,1,1,LIST(9),ROOT(10));
LISTROOT(10,0)
REPEATFINISH
LISTROOTFINISH(10,0)
LISTROOTEND
} else {
ROOTEMPTY(10)
}

result = vpx_set(PARAMETERS,kVPXValue_Lists,TERMINAL(8),TERMINAL(10),ROOT(11));

result = vpx_constant(PARAMETERS,"NULL",ROOT(12));

result = vpx_set(PARAMETERS,kVPXValue_Controller,TERMINAL(11),TERMINAL(12),ROOT(13));

result = kSuccess;

OUTPUT(0,TERMINAL(11))
FOOTERSINGLECASE(14)
}

enum opTrigger vpx_method_Item_20_Data_2F_Close_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Item_20_Data_2F_Close_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(0));
TERMINATEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Close,1,0,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Item_20_Data_2F_Close(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Close_20_Lists,1,0,TERMINAL(0));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Close_20_Controller,1,0,TERMINAL(0));

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_method_Item_20_Data_2F_Close_case_1_local_5(PARAMETERS,TERMINAL(2));

result = vpx_constant(PARAMETERS,"NULL",ROOT(3));

result = vpx_set(PARAMETERS,kVPXValue_Parent,TERMINAL(1),TERMINAL(3),ROOT(4));

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Item_20_Data_2F_Copy_case_1_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Item_20_Data_2F_Copy_case_1_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Name,1,1,TERMINAL(0),ROOT(1));

result = vpx_constant(PARAMETERS,"Item Data/Copy",ROOT(2));

result = vpx_method_Debug_20_OSError(PARAMETERS,TERMINAL(2),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Item_20_Data_2F_Copy(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(11)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Controller,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_constant(PARAMETERS,"NULL",ROOT(3));

result = vpx_set(PARAMETERS,kVPXValue_Controller,TERMINAL(1),TERMINAL(3),ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(0),ROOT(5),ROOT(6));

result = vpx_set(PARAMETERS,kVPXValue_Parent,TERMINAL(5),TERMINAL(3),ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP_copy,1,1,TERMINAL(7),ROOT(8));

result = vpx_set(PARAMETERS,kVPXValue_Parent,TERMINAL(7),TERMINAL(6),ROOT(9));

result = vpx_set(PARAMETERS,kVPXValue_Controller,TERMINAL(9),TERMINAL(2),ROOT(10));

result = vpx_method_Item_20_Data_2F_Copy_case_1_local_10(PARAMETERS,TERMINAL(10));

result = kSuccess;

OUTPUT(0,TERMINAL(8))
FOOTERSINGLECASE(11)
}

enum opTrigger vpx_method_Item_20_Data_2F_Delete_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Item_20_Data_2F_Delete_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Make_20_Dirty,1,0,TERMINAL(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Send_20_Remove_20_Self,1,0,TERMINAL(0));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Remove_20_Self,1,0,TERMINAL(2));

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_Item_20_Data_2F_Delete_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Item_20_Data_2F_Delete_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Delete,1,0,TERMINAL(2));

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_Item_20_Data_2F_Delete(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Item_20_Data_2F_Delete_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Item_20_Data_2F_Delete_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Item_20_Data_2F_Get_20_Application_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Item_20_Data_2F_Get_20_Application_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
NEXTCASEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Application,1,1,TERMINAL(2),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_Item_20_Data_2F_Get_20_Application_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Item_20_Data_2F_Get_20_Application_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_persistent(PARAMETERS,kVPXValue_The_20_Application,0,1,ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Item_20_Data_2F_Get_20_Application(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Item_20_Data_2F_Get_20_Application_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Item_20_Data_2F_Get_20_Application_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Item_20_Data_2F_Get_20_Grandparent_20_Helper(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(4),ROOT(5),ROOT(6));

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTERSINGLECASE(7)
}

enum opTrigger vpx_method_Item_20_Data_2F_Get_20_List_20_Datum(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Lists,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_constant(PARAMETERS,"Helper Name",ROOT(4));

result = vpx_method_Find_20_Instance(PARAMETERS,TERMINAL(3),TERMINAL(4),TERMINAL(1),ROOT(5),ROOT(6));

result = vpx_match(PARAMETERS,"0",TERMINAL(5));
FAILONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTERSINGLECASE(7)
}

enum opTrigger vpx_method_Item_20_Data_2F_Install_20_Helper(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Helper,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_Name,TERMINAL(1),ROOT(3),ROOT(4));

result = vpx_set(PARAMETERS,kVPXValue_Name,TERMINAL(2),TERMINAL(4),ROOT(5));

result = kSuccess;

FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Item_20_Data_2F_Integrate_case_1_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Item_20_Data_2F_Integrate_case_1_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
TERMINATEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Integrate,2,0,TERMINAL(3),TERMINAL(1));

result = kSuccess;

FOOTER(4)
}

enum opTrigger vpx_method_Item_20_Data_2F_Integrate_case_1_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Item_20_Data_2F_Integrate_case_1_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Item_20_Data_2F_Integrate_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Item_20_Data_2F_Integrate_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Item_20_Data_2F_Integrate_case_1_local_7_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Item_20_Data_2F_Integrate_case_1_local_7_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Item_20_Data_2F_Integrate(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(10)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_detach_2D_l,1,4,TERMINAL(1),ROOT(2),ROOT(3),ROOT(4),ROOT(5));

result = vpx_set(PARAMETERS,kVPXValue_Parent,TERMINAL(0),TERMINAL(2),ROOT(6));

result = vpx_set(PARAMETERS,kVPXValue_Controller,TERMINAL(6),TERMINAL(3),ROOT(7));

result = vpx_get(PARAMETERS,kVPXValue_Lists,TERMINAL(7),ROOT(8),ROOT(9));

if( (repeatLimit = vpx_multiplex(2,TERMINAL(9),TERMINAL(4))) ){
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Integrate,2,0,LIST(9),LIST(4));
REPEATFINISH
} else {
}

result = vpx_method_Item_20_Data_2F_Integrate_case_1_local_7(PARAMETERS,TERMINAL(8),TERMINAL(5));

result = kSuccess;

FOOTERSINGLECASE(10)
}

enum opTrigger vpx_method_Item_20_Data_2F_Isolate_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Item_20_Data_2F_Isolate_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
NEXTCASEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Isolate,1,2,TERMINAL(2),ROOT(3),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Item_20_Data_2F_Isolate_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Item_20_Data_2F_Isolate_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( )",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Item_20_Data_2F_Isolate_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Item_20_Data_2F_Isolate_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Item_20_Data_2F_Isolate_case_1_local_6_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Item_20_Data_2F_Isolate_case_1_local_6_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Item_20_Data_2F_Isolate(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(15)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Lists,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_Controller,TERMINAL(1),ROOT(3),ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(0),ROOT(5),ROOT(6));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(2))) ){
LISTROOTBEGIN(2)
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Isolate,1,2,LIST(2),ROOT(7),ROOT(8));
LISTROOT(7,0)
LISTROOT(8,1)
REPEATFINISH
LISTROOTFINISH(7,0)
LISTROOTFINISH(8,1)
LISTROOTEND
} else {
ROOTEMPTY(7)
ROOTEMPTY(8)
}

result = vpx_method_Item_20_Data_2F_Isolate_case_1_local_6(PARAMETERS,TERMINAL(0),ROOT(9));

result = vpx_call_primitive(PARAMETERS,VPLP_attach_2D_l,4,1,TERMINAL(6),TERMINAL(4),TERMINAL(8),TERMINAL(9),ROOT(10));

result = vpx_constant(PARAMETERS,"NULL",ROOT(11));

result = vpx_constant(PARAMETERS,"NULL",ROOT(12));

result = vpx_set(PARAMETERS,kVPXValue_Controller,TERMINAL(5),TERMINAL(12),ROOT(13));

result = vpx_set(PARAMETERS,kVPXValue_Parent,TERMINAL(13),TERMINAL(6),ROOT(14));

result = kSuccess;

OUTPUT(0,TERMINAL(14))
OUTPUT(1,TERMINAL(10))
FOOTERSINGLECASE(15)
}

enum opTrigger vpx_method_Item_20_Data_2F_Open_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Item_20_Data_2F_Open_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
TERMINATEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open,2,0,TERMINAL(1),TERMINAL(0));
FAILONFAILURE

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Item_20_Data_2F_Open_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Item_20_Data_2F_Open_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
TERMINATEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Post_20_Open,2,0,TERMINAL(1),TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Item_20_Data_2F_Open(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Parent,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_method_Item_20_Data_2F_Open_case_1_local_4(PARAMETERS,TERMINAL(3),TERMINAL(4));
FAILONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open_20_Controller,1,0,TERMINAL(3));

result = vpx_get(PARAMETERS,kVPXValue_Lists,TERMINAL(3),ROOT(5),ROOT(6));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(6))) ){
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open,2,0,LIST(6),TERMINAL(5));
REPEATFINISH
} else {
}

result = vpx_method_Item_20_Data_2F_Open_case_1_local_8(PARAMETERS,TERMINAL(5),TERMINAL(4));

result = kSuccess;

FOOTERSINGLECASE(7)
}

enum opTrigger vpx_method_Item_20_Data_2F_Close_20_Lists(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Lists,TERMINAL(0),ROOT(1),ROOT(2));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(2))) ){
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Close,1,0,LIST(2));
REPEATFINISH
} else {
}

result = vpx_constant(PARAMETERS,"( )",ROOT(3));

result = vpx_set(PARAMETERS,kVPXValue_Lists,TERMINAL(1),TERMINAL(3),ROOT(4));

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Item_20_Data_2F_Get_20_Index_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Item_20_Data_2F_Get_20_Index_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
NEXTCASEONSUCCESS

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP__28_in_29_,2,1,TERMINAL(4),TERMINAL(1),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTER(6)
}

enum opTrigger vpx_method_Item_20_Data_2F_Get_20_Index_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Item_20_Data_2F_Get_20_Index_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Item_20_Data_2F_Get_20_Index(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Item_20_Data_2F_Get_20_Index_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Item_20_Data_2F_Get_20_Index_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Item_20_Data_2F_Get_20_Name(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Name,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Item_20_Data_2F_Create_20_Item_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Item_20_Data_2F_Create_20_Item_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADERWITHNONE(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_match(PARAMETERS,"List View",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_instantiate(PARAMETERS,kVPXClass_List_20_Item,1,1,NONE,ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Initialize,2,0,TERMINAL(3),TERMINAL(0));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERWITHNONE(4)
}

enum opTrigger vpx_method_Item_20_Data_2F_Create_20_Item_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Item_20_Data_2F_Create_20_Item_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADERWITHNONE(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_persistent(PARAMETERS,kVPXValue_Use_20_Prototype_20_Windows_3F_,0,1,ROOT(3));

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(3));
NEXTCASEONFAILURE

result = vpx_instantiate(PARAMETERS,kVPXClass_List_20_Item,1,1,NONE,ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Initialize,2,0,TERMINAL(4),TERMINAL(0));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERWITHNONE(5)
}

enum opTrigger vpx_method_Item_20_Data_2F_Create_20_Item_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Item_20_Data_2F_Create_20_Item_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADERWITHNONE(7)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(4),ROOT(5));

result = vpx_match(PARAMETERS,"Universal Data",TERMINAL(5));
NEXTCASEONFAILURE

result = vpx_instantiate(PARAMETERS,kVPXClass_Project_20_DB_20_Method_20_Data,1,1,NONE,ROOT(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Initialize_20_Value,2,0,TERMINAL(6),TERMINAL(0));

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTERWITHNONE(7)
}

enum opTrigger vpx_method_Item_20_Data_2F_Create_20_Item_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Item_20_Data_2F_Create_20_Item_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADERWITHNONE(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_Project_20_DB_20_Item_20_Data,1,1,NONE,ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Initialize_20_Value,2,0,TERMINAL(3),TERMINAL(0));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERWITHNONE(4)
}

enum opTrigger vpx_method_Item_20_Data_2F_Create_20_Item(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Item_20_Data_2F_Create_20_Item_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
if(vpx_method_Item_20_Data_2F_Create_20_Item_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
if(vpx_method_Item_20_Data_2F_Create_20_Item_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
vpx_method_Item_20_Data_2F_Create_20_Item_case_4(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0);
return outcome;
}

enum opTrigger vpx_method_Item_20_Data_2F_Stack_20_Open_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Item_20_Data_2F_Stack_20_Open_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
TERMINATEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open,2,0,TERMINAL(1),TERMINAL(0));
FAILONFAILURE

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Item_20_Data_2F_Stack_20_Open_case_1_local_6_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Item_20_Data_2F_Stack_20_Open_case_1_local_6_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(0),ROOT(1));

result = vpx_constant(PARAMETERS,"( \"Case Data\" \"Persistent Data\" \"Attribute Data\" \"Class Attribute Data\" \"Primitives Data\" )",ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP__28_in_29_,2,1,TERMINAL(2),TERMINAL(1),ROOT(3));

result = vpx_match(PARAMETERS,"0",TERMINAL(3));
FAILONSUCCESS

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Item_20_Data_2F_Stack_20_Open_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Item_20_Data_2F_Stack_20_Open_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Item_20_Data_2F_Stack_20_Open_case_1_local_6_case_1_local_2(PARAMETERS,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Lists,TERMINAL(0),ROOT(2),ROOT(3));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(3))) ){
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open,2,0,LIST(3),TERMINAL(0));
REPEATFINISH
} else {
}

result = vpx_constant(PARAMETERS,"(  )",ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Item_20_Data_2F_Stack_20_Open_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Item_20_Data_2F_Stack_20_Open_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Lists,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_constant(PARAMETERS,"List Open",ROOT(4));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(3))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_call_primitive(PARAMETERS,VPLP_pack,3,1,TERMINAL(4),LIST(3),TERMINAL(2),ROOT(5));
LISTROOT(5,0)
REPEATFINISH
LISTROOTFINISH(5,0)
LISTROOTEND
} else {
ROOTEMPTY(5)
}

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTER(6)
}

enum opTrigger vpx_method_Item_20_Data_2F_Stack_20_Open_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Item_20_Data_2F_Stack_20_Open_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Item_20_Data_2F_Stack_20_Open_case_1_local_6_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Item_20_Data_2F_Stack_20_Open_case_1_local_6_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Item_20_Data_2F_Stack_20_Open_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Item_20_Data_2F_Stack_20_Open_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Parent,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_method_Item_20_Data_2F_Stack_20_Open_case_1_local_4(PARAMETERS,TERMINAL(3),TERMINAL(4));
FAILONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open_20_Controller,1,0,TERMINAL(3));

result = vpx_method_Item_20_Data_2F_Stack_20_Open_case_1_local_6(PARAMETERS,TERMINAL(3),TERMINAL(4),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTER(6)
}

enum opTrigger vpx_method_Item_20_Data_2F_Stack_20_Open_case_2_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Item_20_Data_2F_Stack_20_Open_case_2_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
TERMINATEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open,2,0,TERMINAL(1),TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Item_20_Data_2F_Stack_20_Open_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Item_20_Data_2F_Stack_20_Open_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Parent,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_method_Item_20_Data_2F_Stack_20_Open_case_2_local_4(PARAMETERS,TERMINAL(3),TERMINAL(4));

result = vpx_get(PARAMETERS,kVPXValue_Lists,TERMINAL(3),ROOT(5),ROOT(6));

result = vpx_constant(PARAMETERS,"List Open",ROOT(7));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(6))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_call_primitive(PARAMETERS,VPLP_pack,3,1,TERMINAL(7),LIST(6),TERMINAL(5),ROOT(8));
LISTROOT(8,0)
REPEATFINISH
LISTROOTFINISH(8,0)
LISTROOTEND
} else {
ROOTEMPTY(8)
}

result = kSuccess;

OUTPUT(0,TERMINAL(8))
FOOTER(9)
}

enum opTrigger vpx_method_Item_20_Data_2F_Stack_20_Open(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Item_20_Data_2F_Stack_20_Open_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Item_20_Data_2F_Stack_20_Open_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Item_20_Data_2F_Stack_20_Opened_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Item_20_Data_2F_Stack_20_Opened_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
TERMINATEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Post_20_Open,2,0,TERMINAL(1),TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Item_20_Data_2F_Stack_20_Opened(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_method_Item_20_Data_2F_Stack_20_Opened_case_1_local_3(PARAMETERS,TERMINAL(0),TERMINAL(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Item_20_Data_2F_Get_20_URL_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Item_20_Data_2F_Get_20_URL_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Name,1,1,TERMINAL(0),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_URL,1,1,TERMINAL(2),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(4),TERMINAL(3),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTER(6)
}

enum opTrigger vpx_method_Item_20_Data_2F_Get_20_URL_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Item_20_Data_2F_Get_20_URL_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Name,1,1,TERMINAL(0),ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Item_20_Data_2F_Get_20_URL(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Item_20_Data_2F_Get_20_URL_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Item_20_Data_2F_Get_20_URL_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Item_20_Data_2F_Add_20_View_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Item_20_Data_2F_Add_20_View_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Controller,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(3));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Add_20_View,2,0,TERMINAL(3),TERMINAL(1));

result = kSuccess;

FOOTER(4)
}

enum opTrigger vpx_method_Item_20_Data_2F_Add_20_View_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Item_20_Data_2F_Add_20_View_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Item_20_Data_2F_Add_20_View(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Item_20_Data_2F_Add_20_View_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Item_20_Data_2F_Add_20_View_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Item_20_Data_2F_Remove_20_View_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Item_20_Data_2F_Remove_20_View_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Controller,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(3));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Remove_20_View,2,0,TERMINAL(3),TERMINAL(1));

result = kSuccess;

FOOTER(4)
}

enum opTrigger vpx_method_Item_20_Data_2F_Remove_20_View_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Item_20_Data_2F_Remove_20_View_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Item_20_Data_2F_Remove_20_View(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Item_20_Data_2F_Remove_20_View_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Item_20_Data_2F_Remove_20_View_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Item_20_Data_2F_Refresh_20_Data_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Item_20_Data_2F_Refresh_20_Data_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Controller,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Send_20_Refresh,1,0,TERMINAL(2));

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_Item_20_Data_2F_Refresh_20_Data_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Item_20_Data_2F_Refresh_20_Data_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_Item_20_Data_2F_Refresh_20_Data(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Item_20_Data_2F_Refresh_20_Data_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Item_20_Data_2F_Refresh_20_Data_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Item_20_Data_2F_Send_20_Remove_20_Self_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Item_20_Data_2F_Send_20_Remove_20_Self_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Controller,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Send_20_Remove_20_Self,1,0,TERMINAL(2));

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_Item_20_Data_2F_Send_20_Remove_20_Self_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Item_20_Data_2F_Send_20_Remove_20_Self_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_Item_20_Data_2F_Send_20_Remove_20_Self(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Item_20_Data_2F_Send_20_Remove_20_Self_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Item_20_Data_2F_Send_20_Remove_20_Self_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Item_20_Data_2F_Send_20_Refresh_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Item_20_Data_2F_Send_20_Refresh_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Controller,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Send_20_Refresh,1,0,TERMINAL(2));

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_Item_20_Data_2F_Send_20_Refresh_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Item_20_Data_2F_Send_20_Refresh_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_Item_20_Data_2F_Send_20_Refresh(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Item_20_Data_2F_Send_20_Refresh_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Item_20_Data_2F_Send_20_Refresh_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Item_20_Data_2F_Open_20_Controller_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Item_20_Data_2F_Open_20_Controller_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADERWITHNONE(5)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Controller,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
TERMINATEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Name,1,1,TERMINAL(0),ROOT(3));

result = vpx_constant(PARAMETERS,"Controller exists",ROOT(4));

result = vpx_method_Debug_20_Result(PARAMETERS,TERMINAL(3),NONE,TERMINAL(4),NONE);

result = kSuccess;

FOOTERSINGLECASEWITHNONE(5)
}

enum opTrigger vpx_method_Item_20_Data_2F_Open_20_Controller(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADERWITHNONE(3)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Item_20_Data_2F_Open_20_Controller_case_1_local_2(PARAMETERS,TERMINAL(0));

result = vpx_instantiate(PARAMETERS,kVPXClass_Data_20_Controller,1,1,NONE,ROOT(1));

result = vpx_set(PARAMETERS,kVPXValue_Controller,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open,2,0,TERMINAL(1),TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASEWITHNONE(3)
}

enum opTrigger vpx_method_Item_20_Data_2F_Close_20_Controller(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Controller,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(2));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Close,1,0,TERMINAL(2));

result = vpx_constant(PARAMETERS,"NULL",ROOT(3));

result = vpx_set(PARAMETERS,kVPXValue_Controller,TERMINAL(1),TERMINAL(3),ROOT(4));

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Item_20_Data_2F_Isolate_20_First(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(18)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_Lists,TERMINAL(1),ROOT(3),ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_Controller,TERMINAL(3),ROOT(5),ROOT(6));

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(1),ROOT(7),ROOT(8));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Isolate_20_First,1,2,TERMINAL(2),ROOT(9),ROOT(10));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(4))) ){
LISTROOTBEGIN(2)
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Isolate_20_First,1,2,LIST(4),ROOT(11),ROOT(12));
LISTROOT(11,0)
LISTROOT(12,1)
REPEATFINISH
LISTROOTFINISH(11,0)
LISTROOTFINISH(12,1)
LISTROOTEND
} else {
ROOTEMPTY(11)
ROOTEMPTY(12)
}

result = vpx_call_primitive(PARAMETERS,VPLP_attach_2D_l,4,1,TERMINAL(8),TERMINAL(6),TERMINAL(12),TERMINAL(10),ROOT(13));

result = vpx_constant(PARAMETERS,"NULL",ROOT(14));

result = vpx_constant(PARAMETERS,"NULL",ROOT(15));

result = vpx_set(PARAMETERS,kVPXValue_Controller,TERMINAL(7),TERMINAL(15),ROOT(16));

result = vpx_set(PARAMETERS,kVPXValue_Parent,TERMINAL(16),TERMINAL(14),ROOT(17));

result = kSuccess;

OUTPUT(0,TERMINAL(17))
OUTPUT(1,TERMINAL(13))
FOOTERSINGLECASE(18)
}

enum opTrigger vpx_method_Item_20_Data_2F_Integrate_20_First(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(12)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_detach_2D_l,1,4,TERMINAL(1),ROOT(2),ROOT(3),ROOT(4),ROOT(5));

result = vpx_set(PARAMETERS,kVPXValue_Parent,TERMINAL(0),TERMINAL(2),ROOT(6));

result = vpx_set(PARAMETERS,kVPXValue_Controller,TERMINAL(6),TERMINAL(3),ROOT(7));

result = vpx_get(PARAMETERS,kVPXValue_Lists,TERMINAL(7),ROOT(8),ROOT(9));

if( (repeatLimit = vpx_multiplex(2,TERMINAL(9),TERMINAL(4))) ){
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Integrate_20_First,2,0,LIST(9),LIST(4));
REPEATFINISH
} else {
}

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(8),ROOT(10),ROOT(11));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Integrate_20_First,2,0,TERMINAL(11),TERMINAL(5));

result = kSuccess;

FOOTERSINGLECASE(12)
}

enum opTrigger vpx_method_Item_20_Data_2F_Find_20_Item_20_Name_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Item_20_Data_2F_Find_20_Item_20_Name_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Name,1,1,TERMINAL(0),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP__3D_,2,0,TERMINAL(2),TERMINAL(1));
NEXTCASEONFAILURE

result = kSuccess;
FINISHONSUCCESS

OUTPUT(0,TERMINAL(0))
FOOTER(3)
}

enum opTrigger vpx_method_Item_20_Data_2F_Find_20_Item_20_Name_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Item_20_Data_2F_Find_20_Item_20_Name_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
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

enum opTrigger vpx_method_Item_20_Data_2F_Find_20_Item_20_Name_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Item_20_Data_2F_Find_20_Item_20_Name_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Item_20_Data_2F_Find_20_Item_20_Name_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Item_20_Data_2F_Find_20_Item_20_Name_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Item_20_Data_2F_Find_20_Item_20_Name(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Lists,TERMINAL(0),ROOT(2),ROOT(3));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(3))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Item_20_Data_2F_Find_20_Item_20_Name_case_1_local_3(PARAMETERS,LIST(3),TERMINAL(1),ROOT(4));
REPEATFINISH
} else {
ROOTNULL(4,NULL)
}

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Item_20_Data_2F_Open_20_Editor_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Item_20_Data_2F_Open_20_Editor_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open_20_Editor_20_With_20_Selection,2,0,TERMINAL(2),TERMINAL(0));

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_Item_20_Data_2F_Open_20_Editor_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Item_20_Data_2F_Open_20_Editor_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_Item_20_Data_2F_Open_20_Editor(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Item_20_Data_2F_Open_20_Editor_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Item_20_Data_2F_Open_20_Editor_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Item_20_Data_2F_Get_20_Path_20_List_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Item_20_Data_2F_Get_20_Path_20_List_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(9)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(2),ROOT(3));

result = vpx_match(PARAMETERS,"List Data",TERMINAL(3));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(2),ROOT(4),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(5),ROOT(6));

result = vpx_match(PARAMETERS,"Item Data",TERMINAL(6));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Path_20_List,1,2,TERMINAL(5),ROOT(7),ROOT(8));

result = kSuccess;

OUTPUT(0,TERMINAL(7))
OUTPUT(1,TERMINAL(8))
FOOTER(9)
}

enum opTrigger vpx_method_Item_20_Data_2F_Get_20_Path_20_List_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Item_20_Data_2F_Get_20_Path_20_List_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
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

enum opTrigger vpx_method_Item_20_Data_2F_Get_20_Path_20_List_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Item_20_Data_2F_Get_20_Path_20_List_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Item_20_Data_2F_Get_20_Path_20_List_case_1_local_2_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1))
vpx_method_Item_20_Data_2F_Get_20_Path_20_List_case_1_local_2_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1);
return outcome;
}

enum opTrigger vpx_method_Item_20_Data_2F_Get_20_Path_20_List_case_1_local_3_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Item_20_Data_2F_Get_20_Path_20_List_case_1_local_3_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_Item_20_Data_2F_Get_20_Path_20_List_case_1_local_3_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Item_20_Data_2F_Get_20_Path_20_List_case_1_local_3_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"Case Data",TERMINAL(0));
FAILONSUCCESS

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_Item_20_Data_2F_Get_20_Path_20_List_case_1_local_3_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Item_20_Data_2F_Get_20_Path_20_List_case_1_local_3_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Item_20_Data_2F_Get_20_Path_20_List_case_1_local_3_case_1_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Item_20_Data_2F_Get_20_Path_20_List_case_1_local_3_case_1_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Item_20_Data_2F_Get_20_Path_20_List_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Item_20_Data_2F_Get_20_Path_20_List_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(4),ROOT(5));

result = vpx_method_Item_20_Data_2F_Get_20_Path_20_List_case_1_local_3_case_1_local_4(PARAMETERS,TERMINAL(5));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Path_20_Name,1,1,TERMINAL(4),ROOT(6));
FAILONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_attach_2D_l,2,1,TERMINAL(6),TERMINAL(1),ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP_attach_2D_l,2,1,TERMINAL(0),TERMINAL(2),ROOT(8));

result = kSuccess;

OUTPUT(0,TERMINAL(7))
OUTPUT(1,TERMINAL(8))
FOOTER(9)
}

enum opTrigger vpx_method_Item_20_Data_2F_Get_20_Path_20_List_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Item_20_Data_2F_Get_20_Path_20_List_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(1))
OUTPUT(1,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Item_20_Data_2F_Get_20_Path_20_List_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Item_20_Data_2F_Get_20_Path_20_List_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Item_20_Data_2F_Get_20_Path_20_List_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0,root1))
vpx_method_Item_20_Data_2F_Get_20_Path_20_List_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0,root1);
return outcome;
}

enum opTrigger vpx_method_Item_20_Data_2F_Get_20_Path_20_List(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Item_20_Data_2F_Get_20_Path_20_List_case_1_local_2(PARAMETERS,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_method_Item_20_Data_2F_Get_20_Path_20_List_case_1_local_3(PARAMETERS,TERMINAL(0),TERMINAL(1),TERMINAL(2),ROOT(3),ROOT(4));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(3))
OUTPUT(1,TERMINAL(4))
FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Item_20_Data_2F_Reveal_20_Path_20_Item(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open_20_Editor,1,0,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Item_20_Data_2F_Use_20_Best_20_Frame_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Item_20_Data_2F_Use_20_Best_20_Frame_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Frame,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_set(PARAMETERS,kVPXValue_Frame,TERMINAL(1),TERMINAL(3),ROOT(4));

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Item_20_Data_2F_Use_20_Best_20_Frame(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Use_20_Best_20_Frame,1,0,TERMINAL(2));

result = vpx_method_Item_20_Data_2F_Use_20_Best_20_Frame_case_1_local_4(PARAMETERS,TERMINAL(2),TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(3)
}

/* Stop Universals */



Nat4 VPLC_Data_20_Controller_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Data_20_Controller_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 132 433 }{ 200 300 } */
	tempAttribute = attribute_add("Data",tempClass,NULL,environment);
	tempAttribute = attribute_add("Views",tempClass,tempAttribute_Data_20_Controller_2F_Views,environment);
/* Stop Attributes */

/* NULL SUPER CLASS */
	return kNOERROR;
}

/* Start Universals: { 466 524 }{ 275 299 } */
enum opTrigger vpx_method_Data_20_Controller_2F_Open(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Data,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_method_Find_20_State_20_Element_20_Add(PARAMETERS,TERMINAL(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Data_20_Controller_2F_Close(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = vpx_set(PARAMETERS,kVPXValue_Data,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_constant(PARAMETERS,"( )",ROOT(3));

result = vpx_set(PARAMETERS,kVPXValue_Views,TERMINAL(0),TERMINAL(3),ROOT(4));

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Data_20_Controller_2F_Add_20_View_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Data_20_Controller_2F_Add_20_View_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Views,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP__28_in_29_,2,1,TERMINAL(3),TERMINAL(1),ROOT(4));

result = vpx_match(PARAMETERS,"0",TERMINAL(4));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_attach_2D_r,2,1,TERMINAL(3),TERMINAL(1),ROOT(5));

result = vpx_set(PARAMETERS,kVPXValue_Views,TERMINAL(2),TERMINAL(5),ROOT(6));

result = kSuccess;

FOOTER(7)
}

enum opTrigger vpx_method_Data_20_Controller_2F_Add_20_View_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Data_20_Controller_2F_Add_20_View_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Data_20_Controller_2F_Add_20_View(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Data_20_Controller_2F_Add_20_View_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Data_20_Controller_2F_Add_20_View_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Data_20_Controller_2F_Remove_20_View_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Data_20_Controller_2F_Remove_20_View_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Views,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP__28_in_29_,2,1,TERMINAL(3),TERMINAL(1),ROOT(4));

result = vpx_match(PARAMETERS,"0",TERMINAL(4));
NEXTCASEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_detach_2D_nth,2,2,TERMINAL(3),TERMINAL(4),ROOT(5),ROOT(6));

result = vpx_set(PARAMETERS,kVPXValue_Views,TERMINAL(2),TERMINAL(5),ROOT(7));

result = kSuccess;

FOOTER(8)
}

enum opTrigger vpx_method_Data_20_Controller_2F_Remove_20_View_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Data_20_Controller_2F_Remove_20_View_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Data_20_Controller_2F_Remove_20_View(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Data_20_Controller_2F_Remove_20_View_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Data_20_Controller_2F_Remove_20_View_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Data_20_Controller_2F_Find_20_Views_20_In_20_Group_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Data_20_Controller_2F_Find_20_Views_20_In_20_Group_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_In_20_Message_20_Group_3F_,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(2));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(3)
}

enum opTrigger vpx_method_Data_20_Controller_2F_Find_20_Views_20_In_20_Group_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Data_20_Controller_2F_Find_20_Views_20_In_20_Group_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

OUTPUT(0,NONE)
FOOTERWITHNONE(2)
}

enum opTrigger vpx_method_Data_20_Controller_2F_Find_20_Views_20_In_20_Group_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Data_20_Controller_2F_Find_20_Views_20_In_20_Group_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Data_20_Controller_2F_Find_20_Views_20_In_20_Group_case_1_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Data_20_Controller_2F_Find_20_Views_20_In_20_Group_case_1_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Data_20_Controller_2F_Find_20_Views_20_In_20_Group_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Data_20_Controller_2F_Find_20_Views_20_In_20_Group_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_list_3F_,1,0,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Views,TERMINAL(0),ROOT(2),ROOT(3));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(3))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Data_20_Controller_2F_Find_20_Views_20_In_20_Group_case_1_local_4(PARAMETERS,LIST(3),TERMINAL(1),ROOT(4));
LISTROOT(4,0)
REPEATFINISH
LISTROOTFINISH(4,0)
LISTROOTEND
} else {
ROOTEMPTY(4)
}

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Data_20_Controller_2F_Find_20_Views_20_In_20_Group_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Data_20_Controller_2F_Find_20_Views_20_In_20_Group_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Views,TERMINAL(0),ROOT(2),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_Data_20_Controller_2F_Find_20_Views_20_In_20_Group(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Data_20_Controller_2F_Find_20_Views_20_In_20_Group_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Data_20_Controller_2F_Find_20_Views_20_In_20_Group_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Data_20_Controller_2F_Send_20_Message(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Find_20_Views_20_In_20_Group,2,1,TERMINAL(0),TERMINAL(1),ROOT(3));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(3))) ){
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Data_20_Message,2,0,LIST(3),TERMINAL(2));
REPEATFINISH
} else {
}

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Send_20_States,2,0,TERMINAL(0),TERMINAL(2));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Data_20_Controller_2F_Send_20_To_20_All(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADERWITHNONE(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Send_20_Message,3,0,TERMINAL(0),NONE,TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASEWITHNONE(2)
}

enum opTrigger vpx_method_Data_20_Controller_2F_Send_20_Refresh(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Refresh",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Send_20_To_20_All,2,0,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Data_20_Controller_2F_Send_20_Reinstall(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Refresh",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Send_20_To_20_All,2,0,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Data_20_Controller_2F_Send_20_Remove_20_Self(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Remove Self",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Send_20_To_20_All,2,0,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Data_20_Controller_2F_Send_20_Exclusive(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Find_20_Views_20_In_20_Group,2,1,TERMINAL(0),TERMINAL(1),ROOT(4));

result = vpx_method__28_Without_29_(PARAMETERS,TERMINAL(4),TERMINAL(3),ROOT(5));

result = vpx_method_Get_20_Target(PARAMETERS,ROOT(6));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(5))) ){
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Data_20_Message,2,0,LIST(5),TERMINAL(2));
REPEATFINISH
} else {
}

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Send_20_States,2,0,TERMINAL(0),TERMINAL(2));

result = vpx_method_Set_20_Target(PARAMETERS,TERMINAL(6));

result = kSuccess;

FOOTERSINGLECASE(7)
}

enum opTrigger vpx_method_Data_20_Controller_2F_Send_20_States_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Data_20_Controller_2F_Send_20_States_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"Refresh",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Data,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(3));
NEXTCASEONFAILURE

result = vpx_method_Find_20_State_20_Element_20_Message(PARAMETERS,TERMINAL(3),TERMINAL(1));

result = kSuccess;

FOOTER(4)
}

enum opTrigger vpx_method_Data_20_Controller_2F_Send_20_States_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Data_20_Controller_2F_Send_20_States_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Data_20_Controller_2F_Send_20_States(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Data_20_Controller_2F_Send_20_States_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Data_20_Controller_2F_Send_20_States_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

/* Stop Universals */






Nat4	loadClasses_MyListData(V_Environment environment);
Nat4	loadClasses_MyListData(V_Environment environment)
{
	V_Class result = NULL;

	result = class_new("List Data",environment);
	if(result == NULL) return kERROR;
	VPLC_List_20_Data_class_load(result,environment);
	result = class_new("Helper Data",environment);
	if(result == NULL) return kERROR;
	VPLC_Helper_20_Data_class_load(result,environment);
	result = class_new("Item Data",environment);
	if(result == NULL) return kERROR;
	VPLC_Item_20_Data_class_load(result,environment);
	result = class_new("Data Controller",environment);
	if(result == NULL) return kERROR;
	VPLC_Data_20_Controller_class_load(result,environment);
	return kNOERROR;

}

Nat4	loadUniversals_MyListData(V_Environment environment);
Nat4	loadUniversals_MyListData(V_Environment environment)
{
	V_Method result = NULL;

	result = method_new("Find Item IconRef",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Find_20_Item_20_IconRef,NULL);

	result = method_new("List Data/Add Item Data",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_List_20_Data_2F_Add_20_Item_20_Data,NULL);

	result = method_new("List Data/Clone",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_List_20_Data_2F_Clone,NULL);

	result = method_new("List Data/Close",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_List_20_Data_2F_Close,NULL);

	result = method_new("List Data/Close Editor",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_List_20_Data_2F_Close_20_Editor,NULL);

	result = method_new("List Data/Construct Editor",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_List_20_Data_2F_Construct_20_Editor,NULL);

	result = method_new("List Data/Get Application",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_List_20_Data_2F_Get_20_Application,NULL);

	result = method_new("List Data/Open",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_List_20_Data_2F_Open,NULL);

	result = method_new("List Data/Get Project Data",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_List_20_Data_2F_Get_20_Project_20_Data,NULL);

	result = method_new("List Data/Construct Title",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_List_20_Data_2F_Construct_20_Title,NULL);

	result = method_new("List Data/Get Editor",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_List_20_Data_2F_Get_20_Editor,NULL);

	result = method_new("List Data/Open Editor",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_List_20_Data_2F_Open_20_Editor,NULL);

	result = method_new("List Data/Get Name",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_List_20_Data_2F_Get_20_Name,NULL);

	result = method_new("List Data/Install Element",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_List_20_Data_2F_Install_20_Element,NULL);

	result = method_new("List Data/New Element",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_List_20_Data_2F_New_20_Element,NULL);

	result = method_new("List Data/Get Editors",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_List_20_Data_2F_Get_20_Editors,NULL);

	result = method_new("List Data/Create Editor",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_List_20_Data_2F_Create_20_Editor,NULL);

	result = method_new("List Data/Create Editor Event",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_List_20_Data_2F_Create_20_Editor_20_Event,NULL);

	result = method_new("List Data/Get Name Singular",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_List_20_Data_2F_Get_20_Name_20_Singular,NULL);

	result = method_new("List Data/Get Name Plural",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_List_20_Data_2F_Get_20_Name_20_Plural,NULL);

	result = method_new("List Data/Refresh Editors",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_List_20_Data_2F_Refresh_20_Editors,NULL);

	result = method_new("List Data/Stack Open",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_List_20_Data_2F_Stack_20_Open,NULL);

	result = method_new("List Data/Get URL",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_List_20_Data_2F_Get_20_URL,NULL);

	result = method_new("List Data/Isolate",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_List_20_Data_2F_Isolate,NULL);

	result = method_new("List Data/Integrate",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_List_20_Data_2F_Integrate,NULL);

	result = method_new("List Data/Add View",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_List_20_Data_2F_Add_20_View,NULL);

	result = method_new("List Data/Remove View",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_List_20_Data_2F_Remove_20_View,NULL);

	result = method_new("List Data/Refresh Data",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_List_20_Data_2F_Refresh_20_Data,NULL);

	result = method_new("List Data/Send Refresh",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_List_20_Data_2F_Send_20_Refresh,NULL);

	result = method_new("List Data/Open Controller",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_List_20_Data_2F_Open_20_Controller,NULL);

	result = method_new("List Data/Close Controller",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_List_20_Data_2F_Close_20_Controller,NULL);

	result = method_new("List Data/Find Item Name",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_List_20_Data_2F_Find_20_Item_20_Name,NULL);

	result = method_new("List Data/Open Editor With Selection",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_List_20_Data_2F_Open_20_Editor_20_With_20_Selection,NULL);

	result = method_new("List Data/Send Exclusive",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_List_20_Data_2F_Send_20_Exclusive,NULL);

	result = method_new("List Data/Isolate First",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_List_20_Data_2F_Isolate_20_First,NULL);

	result = method_new("List Data/Integrate First",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_List_20_Data_2F_Integrate_20_First,NULL);

	result = method_new("Helper Data/Add To List Data",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Helper_20_Data_2F_Add_20_To_20_List_20_Data,NULL);

	result = method_new("Helper Data/After Import",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Helper_20_Data_2F_After_20_Import,NULL);

	result = method_new("Helper Data/Clone",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Helper_20_Data_2F_Clone,NULL);

	result = method_new("Helper Data/Close",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Helper_20_Data_2F_Close,NULL);

	result = method_new("Helper Data/Get Container",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Helper_20_Data_2F_Get_20_Container,NULL);

	result = method_new("Helper Data/Get Grandparent Helper",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Helper_20_Data_2F_Get_20_Grandparent_20_Helper,NULL);

	result = method_new("Helper Data/Get List Datum",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Helper_20_Data_2F_Get_20_List_20_Datum,NULL);

	result = method_new("Helper Data/Get Value",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Helper_20_Data_2F_Get_20_Value,NULL);

	result = method_new("Helper Data/Initial Where",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Helper_20_Data_2F_Initial_20_Where,NULL);

	result = method_new("Helper Data/Initialize Item Data",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Helper_20_Data_2F_Initialize_20_Item_20_Data,NULL);

	result = method_new("Helper Data/Integrate",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Helper_20_Data_2F_Integrate,NULL);

	result = method_new("Helper Data/Isolate",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Helper_20_Data_2F_Isolate,NULL);

	result = method_new("Helper Data/Open",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Helper_20_Data_2F_Open,NULL);

	result = method_new("Helper Data/Push Lists Data",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Helper_20_Data_2F_Push_20_Lists_20_Data,NULL);

	result = method_new("Helper Data/Remove Self",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Helper_20_Data_2F_Remove_20_Self,NULL);

	result = method_new("Helper Data/Set Name",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Helper_20_Data_2F_Set_20_Name,NULL);

	result = method_new("Helper Data/Set Value",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Helper_20_Data_2F_Set_20_Value,NULL);

	result = method_new("Helper Data/Update List Data",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Helper_20_Data_2F_Update_20_List_20_Data,NULL);

	result = method_new("Helper Data/Install Names",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Helper_20_Data_2F_Install_20_Names,NULL);

	result = method_new("Helper Data/Substitute With",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Helper_20_Data_2F_Substitute_20_With,NULL);

	result = method_new("Helper Data/Update Record",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Helper_20_Data_2F_Update_20_Record,NULL);

	result = method_new("Helper Data/Get Project Data",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Helper_20_Data_2F_Get_20_Project_20_Data,NULL);

	result = method_new("Helper Data/Get Section Data",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Helper_20_Data_2F_Get_20_Section_20_Data,NULL);

	result = method_new("Helper Data/Set Direct Value",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Helper_20_Data_2F_Set_20_Direct_20_Value,NULL);

	result = method_new("Helper Data/Get Index",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Helper_20_Data_2F_Get_20_Index,NULL);

	result = method_new("Helper Data/Post Open",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Helper_20_Data_2F_Post_20_Open,NULL);

	result = method_new("Helper Data/Set Text",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Helper_20_Data_2F_Set_20_Text,NULL);

	result = method_new("Helper Data/Make Dirty",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Helper_20_Data_2F_Make_20_Dirty,NULL);

	result = method_new("Helper Data/Construct Editor",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Helper_20_Data_2F_Construct_20_Editor,NULL);

	result = method_new("Helper Data/Construct Title",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Helper_20_Data_2F_Construct_20_Title,NULL);

	result = method_new("Helper Data/Get Name",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Helper_20_Data_2F_Get_20_Name,NULL);

	result = method_new("Helper Data/Handle Item Click",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Helper_20_Data_2F_Handle_20_Item_20_Click,NULL);

	result = method_new("Helper Data/Get File",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Helper_20_Data_2F_Get_20_File,NULL);

	result = method_new("Helper Data/Set File",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Helper_20_Data_2F_Set_20_File,NULL);

	result = method_new("Helper Data/Update Value",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Helper_20_Data_2F_Update_20_Value,NULL);

	result = method_new("Helper Data/Save File",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Helper_20_Data_2F_Save_20_File,NULL);

	result = method_new("Helper Data/Save File Callback",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Helper_20_Data_2F_Save_20_File_20_Callback,NULL);

	result = method_new("Helper Data/Get Method Data",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Helper_20_Data_2F_Get_20_Method_20_Data,NULL);

	result = method_new("Helper Data/Get All Breakpoints",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Helper_20_Data_2F_Get_20_All_20_Breakpoints,NULL);

	result = method_new("Helper Data/Send Refresh",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Helper_20_Data_2F_Send_20_Refresh,NULL);

	result = method_new("Helper Data/Full Name",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Helper_20_Data_2F_Full_20_Name,NULL);

	result = method_new("Helper Data/Select Name",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Helper_20_Data_2F_Select_20_Name,NULL);

	result = method_new("Helper Data/Handle Selection Click",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Helper_20_Data_2F_Handle_20_Selection_20_Click,NULL);

	result = method_new("Helper Data/Have Row Values?",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Helper_20_Data_2F_Have_20_Row_20_Values_3F_,NULL);

	result = method_new("Helper Data/Have Icon Values?",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Helper_20_Data_2F_Have_20_Icon_20_Values_3F_,NULL);

	result = method_new("Helper Data/Install Proxy",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Helper_20_Data_2F_Install_20_Proxy,NULL);

	result = method_new("Helper Data/Get Path Name",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Helper_20_Data_2F_Get_20_Path_20_Name,NULL);

	result = method_new("Helper Data/Reveal Path Item",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Helper_20_Data_2F_Reveal_20_Path_20_Item,NULL);

	result = method_new("Helper Data/Open Editor",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Helper_20_Data_2F_Open_20_Editor,NULL);

	result = method_new("Helper Data/Get Find Text",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Helper_20_Data_2F_Get_20_Find_20_Text,NULL);

	result = method_new("Helper Data/Set Find Text",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Helper_20_Data_2F_Set_20_Find_20_Text,NULL);

	result = method_new("Helper Data/Use Best Frame",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Helper_20_Data_2F_Use_20_Best_20_Frame,NULL);

	result = method_new("Helper Data/Can Create?",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Helper_20_Data_2F_Can_20_Create_3F_,NULL);

	result = method_new("Helper Data/Can Delete?",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Helper_20_Data_2F_Can_20_Delete_3F_,NULL);

	result = method_new("Helper Data/Isolate First",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Helper_20_Data_2F_Isolate_20_First,NULL);

	result = method_new("Helper Data/Integrate First",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Helper_20_Data_2F_Integrate_20_First,NULL);

	result = method_new("Item Data/Clone",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Item_20_Data_2F_Clone,NULL);

	result = method_new("Item Data/Close",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Item_20_Data_2F_Close,NULL);

	result = method_new("Item Data/Copy",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Item_20_Data_2F_Copy,NULL);

	result = method_new("Item Data/Delete",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Item_20_Data_2F_Delete,NULL);

	result = method_new("Item Data/Get Application",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Item_20_Data_2F_Get_20_Application,NULL);

	result = method_new("Item Data/Get Grandparent Helper",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Item_20_Data_2F_Get_20_Grandparent_20_Helper,NULL);

	result = method_new("Item Data/Get List Datum",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Item_20_Data_2F_Get_20_List_20_Datum,NULL);

	result = method_new("Item Data/Install Helper",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Item_20_Data_2F_Install_20_Helper,NULL);

	result = method_new("Item Data/Integrate",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Item_20_Data_2F_Integrate,NULL);

	result = method_new("Item Data/Isolate",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Item_20_Data_2F_Isolate,NULL);

	result = method_new("Item Data/Open",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Item_20_Data_2F_Open,NULL);

	result = method_new("Item Data/Close Lists",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Item_20_Data_2F_Close_20_Lists,NULL);

	result = method_new("Item Data/Get Index",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Item_20_Data_2F_Get_20_Index,NULL);

	result = method_new("Item Data/Get Name",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Item_20_Data_2F_Get_20_Name,NULL);

	result = method_new("Item Data/Create Item",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Item_20_Data_2F_Create_20_Item,NULL);

	result = method_new("Item Data/Stack Open",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Item_20_Data_2F_Stack_20_Open,NULL);

	result = method_new("Item Data/Stack Opened",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Item_20_Data_2F_Stack_20_Opened,NULL);

	result = method_new("Item Data/Get URL",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Item_20_Data_2F_Get_20_URL,NULL);

	result = method_new("Item Data/Add View",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Item_20_Data_2F_Add_20_View,NULL);

	result = method_new("Item Data/Remove View",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Item_20_Data_2F_Remove_20_View,NULL);

	result = method_new("Item Data/Refresh Data",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Item_20_Data_2F_Refresh_20_Data,NULL);

	result = method_new("Item Data/Send Remove Self",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Item_20_Data_2F_Send_20_Remove_20_Self,NULL);

	result = method_new("Item Data/Send Refresh",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Item_20_Data_2F_Send_20_Refresh,NULL);

	result = method_new("Item Data/Open Controller",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Item_20_Data_2F_Open_20_Controller,NULL);

	result = method_new("Item Data/Close Controller",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Item_20_Data_2F_Close_20_Controller,NULL);

	result = method_new("Item Data/Isolate First",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Item_20_Data_2F_Isolate_20_First,NULL);

	result = method_new("Item Data/Integrate First",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Item_20_Data_2F_Integrate_20_First,NULL);

	result = method_new("Item Data/Find Item Name",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Item_20_Data_2F_Find_20_Item_20_Name,NULL);

	result = method_new("Item Data/Open Editor",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Item_20_Data_2F_Open_20_Editor,NULL);

	result = method_new("Item Data/Get Path List",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Item_20_Data_2F_Get_20_Path_20_List,NULL);

	result = method_new("Item Data/Reveal Path Item",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Item_20_Data_2F_Reveal_20_Path_20_Item,NULL);

	result = method_new("Item Data/Use Best Frame",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Item_20_Data_2F_Use_20_Best_20_Frame,NULL);

	result = method_new("Data Controller/Open",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Data_20_Controller_2F_Open,NULL);

	result = method_new("Data Controller/Close",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Data_20_Controller_2F_Close,NULL);

	result = method_new("Data Controller/Add View",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Data_20_Controller_2F_Add_20_View,NULL);

	result = method_new("Data Controller/Remove View",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Data_20_Controller_2F_Remove_20_View,NULL);

	result = method_new("Data Controller/Find Views In Group",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Data_20_Controller_2F_Find_20_Views_20_In_20_Group,NULL);

	result = method_new("Data Controller/Send Message",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Data_20_Controller_2F_Send_20_Message,NULL);

	result = method_new("Data Controller/Send To All",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Data_20_Controller_2F_Send_20_To_20_All,NULL);

	result = method_new("Data Controller/Send Refresh",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Data_20_Controller_2F_Send_20_Refresh,NULL);

	result = method_new("Data Controller/Send Reinstall",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Data_20_Controller_2F_Send_20_Reinstall,NULL);

	result = method_new("Data Controller/Send Remove Self",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Data_20_Controller_2F_Send_20_Remove_20_Self,NULL);

	result = method_new("Data Controller/Send Exclusive",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Data_20_Controller_2F_Send_20_Exclusive,NULL);

	result = method_new("Data Controller/Send States",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Data_20_Controller_2F_Send_20_States,NULL);

	return kNOERROR;

}



Nat4	loadPersistents_MyListData(V_Environment environment);
Nat4	loadPersistents_MyListData(V_Environment environment)
{
	V_Value tempPersistent = NULL;
	V_Dictionary dictionary = environment->persistentsTable;

	return kNOERROR;

}

Nat4	load_MyListData(V_Environment environment);
Nat4	load_MyListData(V_Environment environment)
{

	loadClasses_MyListData(environment);
	loadUniversals_MyListData(environment);
	loadPersistents_MyListData(environment);
	return kNOERROR;

}

