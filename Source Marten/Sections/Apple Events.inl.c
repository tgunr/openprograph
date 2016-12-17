/* A VPL Section File */
/*

Apple Events.inl.c
Copyright: 2004 Andescotia LLC

*/

#include "MartenInlineProject.h"

enum opTrigger vpx_method_From_20_AEDesc(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(0));
FAILONSUCCESS

result = vpx_extget(PARAMETERS,"descriptorType",1,2,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_method_AE_20_Descriptor_2F_From_20_AEDesc_20_Type(PARAMETERS,TERMINAL(0),TERMINAL(2),ROOT(3));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_AEDesc_20_Copy_20_Data(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

PUTINTEGER(AEGetDescDataSize( GETCONSTPOINTER(AEDesc,*,TERMINAL(0))),1);
result = kSuccess;

result = vpx_constant(PARAMETERS,"1",ROOT(2));

result = vpx_method_Block_20_Allocate(PARAMETERS,TERMINAL(1),TERMINAL(2),ROOT(3));
FAILONFAILURE

PUTINTEGER(AEGetDescData( GETCONSTPOINTER(AEDesc,*,TERMINAL(0)),GETPOINTER(0,void,*,ROOT(5),TERMINAL(3)),GETINTEGER(TERMINAL(1))),4);
result = kSuccess;

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(4));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_To_20_AEDesc_case_1_local_2_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_To_20_AEDesc_case_1_local_2_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(0));
TERMINATEONSUCCESS

result = vpx_match(PARAMETERS,"NONE",TERMINAL(0));
TERMINATEONSUCCESS

result = vpx_extmatch(PARAMETERS,typeWildCard,TERMINAL(0));
TERMINATEONSUCCESS

result = kSuccess;
FAILONSUCCESS

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_To_20_AEDesc_case_1_local_2_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_To_20_AEDesc_case_1_local_2_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_string_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_extconstant(PARAMETERS,typeChar,ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_To_20_AEDesc_case_1_local_2_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_To_20_AEDesc_case_1_local_2_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_integer_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_extconstant(PARAMETERS,typeEnumeration,ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_To_20_AEDesc_case_1_local_2_case_1_local_3_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_To_20_AEDesc_case_1_local_2_case_1_local_3_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_real_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_extconstant(PARAMETERS,typeFloat,ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_To_20_AEDesc_case_1_local_2_case_1_local_3_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_To_20_AEDesc_case_1_local_2_case_1_local_3_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_extconstant(PARAMETERS,typeNull,ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_To_20_AEDesc_case_1_local_2_case_1_local_3_case_5(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_To_20_AEDesc_case_1_local_2_case_1_local_3_case_5(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_list_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_extconstant(PARAMETERS,typeAEList,ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_To_20_AEDesc_case_1_local_2_case_1_local_3_case_6(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_To_20_AEDesc_case_1_local_2_case_1_local_3_case_6(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_extconstant(PARAMETERS,typeAERecord,ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_To_20_AEDesc_case_1_local_2_case_1_local_3_case_7(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_To_20_AEDesc_case_1_local_2_case_1_local_3_case_7(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;
FAILONSUCCESS

OUTPUT(0,NONE)
FOOTERWITHNONE(1)
}

enum opTrigger vpx_method_To_20_AEDesc_case_1_local_2_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_To_20_AEDesc_case_1_local_2_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_To_20_AEDesc_case_1_local_2_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_To_20_AEDesc_case_1_local_2_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_To_20_AEDesc_case_1_local_2_case_1_local_3_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_To_20_AEDesc_case_1_local_2_case_1_local_3_case_4(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_To_20_AEDesc_case_1_local_2_case_1_local_3_case_5(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_To_20_AEDesc_case_1_local_2_case_1_local_3_case_6(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_To_20_AEDesc_case_1_local_2_case_1_local_3_case_7(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_To_20_AEDesc_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_To_20_AEDesc_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_To_20_AEDesc_case_1_local_2_case_1_local_2(PARAMETERS,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_method_To_20_AEDesc_case_1_local_2_case_1_local_3(PARAMETERS,TERMINAL(0),ROOT(2));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_To_20_AEDesc_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_To_20_AEDesc_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_To_20_AEDesc_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_To_20_AEDesc_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_To_20_AEDesc_case_1_local_2_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_To_20_AEDesc_case_1_local_2_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_To_20_AEDesc_case_1_local_3_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_To_20_AEDesc_case_1_local_3_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,typeAEList,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"FALSE",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_To_20_AEDesc_case_1_local_3_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_To_20_AEDesc_case_1_local_3_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,typeAERecord,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"TRUE",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_To_20_AEDesc_case_1_local_3_case_1_local_2_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_To_20_AEDesc_case_1_local_3_case_1_local_2_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;
FAILONSUCCESS

OUTPUT(0,NONE)
FOOTERWITHNONE(1)
}

enum opTrigger vpx_method_To_20_AEDesc_case_1_local_3_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_To_20_AEDesc_case_1_local_3_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_To_20_AEDesc_case_1_local_3_case_1_local_2_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_To_20_AEDesc_case_1_local_3_case_1_local_2_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_To_20_AEDesc_case_1_local_3_case_1_local_2_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_To_20_AEDesc_case_1_local_3_case_1_local_7_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_To_20_AEDesc_case_1_local_3_case_1_local_7_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADERWITHNONE(6)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_method_To_20_AEDesc(PARAMETERS,TERMINAL(0),NONE,ROOT(3));
NEXTCASEONFAILURE

PUTINTEGER(AEPutParamDesc( GETPOINTER(8,AEDesc,*,ROOT(5),TERMINAL(1)),GETINTEGER(TERMINAL(2)),GETCONSTPOINTER(AEDesc,*,TERMINAL(3))),4);
result = kSuccess;

result = kSuccess;

FOOTERWITHNONE(6)
}

enum opTrigger vpx_method_To_20_AEDesc_case_1_local_3_case_1_local_7_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_To_20_AEDesc_case_1_local_3_case_1_local_7_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_To_20_AEDesc_case_1_local_3_case_1_local_7_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_To_20_AEDesc_case_1_local_3_case_1_local_7_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_To_20_AEDesc_case_1_local_3_case_1_local_7_case_1_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2))
vpx_method_To_20_AEDesc_case_1_local_3_case_1_local_7_case_1_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2);
return outcome;
}

enum opTrigger vpx_method_To_20_AEDesc_case_1_local_3_case_1_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_To_20_AEDesc_case_1_local_3_case_1_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_list_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_method_Make_20_Count(PARAMETERS,TERMINAL(0),ROOT(3));

if( (repeatLimit = vpx_multiplex(2,TERMINAL(0),TERMINAL(3))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_To_20_AEDesc_case_1_local_3_case_1_local_7_case_1_local_4(PARAMETERS,LIST(0),TERMINAL(1),LIST(3));
REPEATFINISH
} else {
}

result = kSuccess;

FOOTER(4)
}

enum opTrigger vpx_method_To_20_AEDesc_case_1_local_3_case_1_local_7_case_2_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_To_20_AEDesc_case_1_local_3_case_1_local_7_case_2_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_attributes,1,2,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_To_20_AEDesc_case_1_local_3_case_1_local_7_case_2_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_To_20_AEDesc_case_1_local_3_case_1_local_7_case_2_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADERWITHNONE(6)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_method_To_20_AEDesc(PARAMETERS,TERMINAL(0),NONE,ROOT(3));
NEXTCASEONFAILURE

PUTINTEGER(AEPutParamDesc( GETPOINTER(8,AEDesc,*,ROOT(5),TERMINAL(1)),GETINTEGER(TERMINAL(2)),GETCONSTPOINTER(AEDesc,*,TERMINAL(3))),4);
result = kSuccess;

result = kSuccess;

FOOTERWITHNONE(6)
}

enum opTrigger vpx_method_To_20_AEDesc_case_1_local_3_case_1_local_7_case_2_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_To_20_AEDesc_case_1_local_3_case_1_local_7_case_2_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_To_20_AEDesc_case_1_local_3_case_1_local_7_case_2_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_To_20_AEDesc_case_1_local_3_case_1_local_7_case_2_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_To_20_AEDesc_case_1_local_3_case_1_local_7_case_2_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2))
vpx_method_To_20_AEDesc_case_1_local_3_case_1_local_7_case_2_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2);
return outcome;
}

enum opTrigger vpx_method_To_20_AEDesc_case_1_local_3_case_1_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_To_20_AEDesc_case_1_local_3_case_1_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_method_To_20_AEDesc_case_1_local_3_case_1_local_7_case_2_local_3(PARAMETERS,TERMINAL(0),ROOT(3));

if( (repeatLimit = vpx_multiplex(2,TERMINAL(0),TERMINAL(3))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_To_20_AEDesc_case_1_local_3_case_1_local_7_case_2_local_4(PARAMETERS,LIST(0),TERMINAL(1),LIST(3));
REPEATFINISH
} else {
}

result = kSuccess;

FOOTER(4)
}

enum opTrigger vpx_method_To_20_AEDesc_case_1_local_3_case_1_local_7_case_3_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_To_20_AEDesc_case_1_local_3_case_1_local_7_case_3_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(1));
TERMINATEONSUCCESS

result = vpx_method_Make_20_Count(PARAMETERS,TERMINAL(0),ROOT(2));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(2))) ){
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Key,2,0,TERMINAL(0),LIST(2));
REPEATFINISH
} else {
}

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_To_20_AEDesc_case_1_local_3_case_1_local_7_case_3_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_To_20_AEDesc_case_1_local_3_case_1_local_7_case_3_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Create_20_AEDesc,1,1,TERMINAL(0),ROOT(2));

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Put_20_Parameter_20_Desc,2,1,TERMINAL(1),TERMINAL(0),ROOT(3));

result = kSuccess;

FOOTER(4)
}

enum opTrigger vpx_method_To_20_AEDesc_case_1_local_3_case_1_local_7_case_3_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_To_20_AEDesc_case_1_local_3_case_1_local_7_case_3_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_To_20_AEDesc_case_1_local_3_case_1_local_7_case_3_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_To_20_AEDesc_case_1_local_3_case_1_local_7_case_3_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_To_20_AEDesc_case_1_local_3_case_1_local_7_case_3_local_7_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_To_20_AEDesc_case_1_local_3_case_1_local_7_case_3_local_7_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_To_20_AEDesc_case_1_local_3_case_1_local_7_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_To_20_AEDesc_case_1_local_3_case_1_local_7_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADERWITHNONE(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,noErr,NONE);
FAILONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_AEDesc,2,0,TERMINAL(0),TERMINAL(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Data,1,1,TERMINAL(0),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_list_3F_,1,0,TERMINAL(3));
TERMINATEONFAILURE

result = vpx_method_To_20_AEDesc_case_1_local_3_case_1_local_7_case_3_local_6(PARAMETERS,TERMINAL(3),TERMINAL(2));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(3))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_To_20_AEDesc_case_1_local_3_case_1_local_7_case_3_local_7(PARAMETERS,LIST(3),TERMINAL(0));
REPEATFINISH
} else {
}

result = kSuccess;

FOOTERWITHNONE(4)
}

enum opTrigger vpx_method_To_20_AEDesc_case_1_local_3_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_To_20_AEDesc_case_1_local_3_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_To_20_AEDesc_case_1_local_3_case_1_local_7_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2))
if(vpx_method_To_20_AEDesc_case_1_local_3_case_1_local_7_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2))
vpx_method_To_20_AEDesc_case_1_local_3_case_1_local_7_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2);
return outcome;
}

enum opTrigger vpx_method_To_20_AEDesc_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_To_20_AEDesc_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(7)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_To_20_AEDesc_case_1_local_3_case_1_local_2(PARAMETERS,TERMINAL(1),ROOT(2));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"NULL",ROOT(3));

result = vpx_constant(PARAMETERS,"0",ROOT(4));

PUTINTEGER(AECreateList( GETCONSTPOINTER(void,*,TERMINAL(3)),GETINTEGER(TERMINAL(4)),GETINTEGER(TERMINAL(2)),GETPOINTER(8,AEDesc,*,ROOT(6),NONE)),5);
result = kSuccess;

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(5));
FAILONFAILURE

result = vpx_method_To_20_AEDesc_case_1_local_3_case_1_local_7(PARAMETERS,TERMINAL(0),TERMINAL(6),TERMINAL(2));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTERWITHNONE(7)
}

enum opTrigger vpx_method_To_20_AEDesc_case_1_local_3_case_2_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_To_20_AEDesc_case_1_local_3_case_2_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
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

enum opTrigger vpx_method_To_20_AEDesc_case_1_local_3_case_2_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_To_20_AEDesc_case_1_local_3_case_2_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_integer_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_method_New_20_UInt32(PARAMETERS,TERMINAL(0),NONE,ROOT(1));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERWITHNONE(2)
}

enum opTrigger vpx_method_To_20_AEDesc_case_1_local_3_case_2_local_2_case_3_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_To_20_AEDesc_case_1_local_3_case_2_local_2_case_3_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"void",ROOT(1));

result = vpx_constant(PARAMETERS,"4",ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_make_2D_external,2,1,TERMINAL(1),TERMINAL(2),ROOT(3));

result = vpx_constant(PARAMETERS,"0",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_put_2D_real,4,2,TERMINAL(3),TERMINAL(4),TERMINAL(2),TERMINAL(0),ROOT(5),ROOT(6));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASE(7)
}

enum opTrigger vpx_method_To_20_AEDesc_case_1_local_3_case_2_local_2_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_To_20_AEDesc_case_1_local_3_case_2_local_2_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_real_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_method_To_20_AEDesc_case_1_local_3_case_2_local_2_case_3_local_3(PARAMETERS,TERMINAL(0),ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_To_20_AEDesc_case_1_local_3_case_2_local_2_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_To_20_AEDesc_case_1_local_3_case_2_local_2_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
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

enum opTrigger vpx_method_To_20_AEDesc_case_1_local_3_case_2_local_2_case_5(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_To_20_AEDesc_case_1_local_3_case_2_local_2_case_5(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_To_20_AEDesc_case_1_local_3_case_2_local_2_case_6(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_To_20_AEDesc_case_1_local_3_case_2_local_2_case_6(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;
FAILONSUCCESS

OUTPUT(0,NONE)
FOOTERWITHNONE(1)
}

enum opTrigger vpx_method_To_20_AEDesc_case_1_local_3_case_2_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_To_20_AEDesc_case_1_local_3_case_2_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_To_20_AEDesc_case_1_local_3_case_2_local_2_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_To_20_AEDesc_case_1_local_3_case_2_local_2_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_To_20_AEDesc_case_1_local_3_case_2_local_2_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_To_20_AEDesc_case_1_local_3_case_2_local_2_case_4(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_To_20_AEDesc_case_1_local_3_case_2_local_2_case_5(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_To_20_AEDesc_case_1_local_3_case_2_local_2_case_6(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_To_20_AEDesc_case_1_local_3_case_2_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_To_20_AEDesc_case_1_local_3_case_2_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_string_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_byte_2D_length,1,1,TERMINAL(0),ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_To_20_AEDesc_case_1_local_3_case_2_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_To_20_AEDesc_case_1_local_3_case_2_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_number_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"4",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_To_20_AEDesc_case_1_local_3_case_2_local_3_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_To_20_AEDesc_case_1_local_3_case_2_local_3_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_external_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_method_Block_20_Size(PARAMETERS,TERMINAL(0),ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_To_20_AEDesc_case_1_local_3_case_2_local_3_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_To_20_AEDesc_case_1_local_3_case_2_local_3_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"0",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_To_20_AEDesc_case_1_local_3_case_2_local_3_case_5(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_To_20_AEDesc_case_1_local_3_case_2_local_3_case_5(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;
FAILONSUCCESS

OUTPUT(0,NONE)
FOOTERWITHNONE(1)
}

enum opTrigger vpx_method_To_20_AEDesc_case_1_local_3_case_2_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_To_20_AEDesc_case_1_local_3_case_2_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_To_20_AEDesc_case_1_local_3_case_2_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_To_20_AEDesc_case_1_local_3_case_2_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_To_20_AEDesc_case_1_local_3_case_2_local_3_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_To_20_AEDesc_case_1_local_3_case_2_local_3_case_4(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_To_20_AEDesc_case_1_local_3_case_2_local_3_case_5(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_To_20_AEDesc_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_To_20_AEDesc_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_To_20_AEDesc_case_1_local_3_case_2_local_2(PARAMETERS,TERMINAL(0),ROOT(2));
FAILONFAILURE

result = vpx_method_To_20_AEDesc_case_1_local_3_case_2_local_3(PARAMETERS,TERMINAL(0),ROOT(3));
FAILONFAILURE

PUTINTEGER(AECreateDesc( GETINTEGER(TERMINAL(1)),GETCONSTPOINTER(void,*,TERMINAL(2)),GETINTEGER(TERMINAL(3)),GETPOINTER(8,AEDesc,*,ROOT(5),NONE)),4);
result = kSuccess;

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(4));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTERWITHNONE(6)
}

enum opTrigger vpx_method_To_20_AEDesc_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_To_20_AEDesc_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_To_20_AEDesc_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_To_20_AEDesc_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_To_20_AEDesc_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_To_20_AEDesc_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_To_20_AEDesc_case_1_local_2(PARAMETERS,TERMINAL(0),TERMINAL(1),ROOT(2));
FAILONFAILURE

result = vpx_method_To_20_AEDesc_case_1_local_3(PARAMETERS,TERMINAL(0),TERMINAL(2),ROOT(3));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_To_20_AEDesc_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_To_20_AEDesc_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
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

enum opTrigger vpx_method_To_20_AEDesc(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_To_20_AEDesc_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_To_20_AEDesc_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}




	Nat4 tempAttribute_Apple_20_Event_2F_Error[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Apple_20_Event_20_Callback_2F_Name[] = {
0000000000, 0X0000003C, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X0000001D, 0X556E7469, 0X746C6564, 0X20417070,
0X6C652045, 0X76656E74, 0X2043616C, 0X6C626163, 0X6B000000
	};
	Nat4 tempAttribute_Apple_20_Event_20_Callback_2F_Method_20_Name[] = {
0000000000, 0X00000020, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Apple_20_Event_20_Callback_2F_Input_20_Specifiers[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Apple_20_Event_20_Callback_2F_Output_20_Specifiers[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Apple_20_Event_20_Callback_2F_Attachments[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Apple_20_Event_20_Callback_2F_Callback_20_Method_20_Name[] = {
0000000000, 0X0000002C, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X0000000F, 0X2F446F20, 0X41452043, 0X616C6C62,
0X61636B00
	};
	Nat4 tempAttribute_Apple_20_Event_20_Callback_2F_ProcPtr_20_Name[] = {
0000000000, 0X00000034, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X00000015, 0X41454576, 0X656E7448, 0X616E646C,
0X65725072, 0X6F635074, 0X72000000
	};
	Nat4 tempAttribute_Apple_20_Event_20_Callback_2F_UPP_20_Allocate[] = {
0000000000, 0X00000034, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X00000014, 0X4E657741, 0X45457665, 0X6E744861,
0X6E646C65, 0X72555050, 0000000000
	};
	Nat4 tempAttribute_Apple_20_Event_20_Callback_2F_UPP_20_Dispose[] = {
0000000000, 0X00000038, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X00000018, 0X44697370, 0X6F736541, 0X45457665,
0X6E744861, 0X6E646C65, 0X72555050, 0000000000
	};
	Nat4 tempAttribute_Apple_20_Event_20_Callback_2F_Callback_20_Result[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_AE_20_Send_2F_Error[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_AE_20_Send_2F_Event_20_Parameters[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};


Nat4 VPLC_Apple_20_Event_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Apple_20_Event_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 200 300 } */
	tempAttribute = attribute_add("EventRef",tempClass,NULL,environment);
	tempAttribute = attribute_add("ReplyRef",tempClass,NULL,environment);
	tempAttribute = attribute_add("Error",tempClass,tempAttribute_Apple_20_Event_2F_Error,environment);
/* Stop Attributes */

/* NULL SUPER CLASS */
	return kNOERROR;
}

/* Start Universals: { 87 619 }{ 354 315 } */
enum opTrigger vpx_method_Apple_20_Event_2F_New(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_Apple_20_Event,1,1,NONE,ROOT(2));

result = vpx_set(PARAMETERS,kVPXValue_EventRef,TERMINAL(2),TERMINAL(0),ROOT(3));

result = vpx_set(PARAMETERS,kVPXValue_ReplyRef,TERMINAL(2),TERMINAL(1),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASEWITHNONE(5)
}

enum opTrigger vpx_method_Apple_20_Event_2F_Dispose_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Apple_20_Event_2F_Dispose_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(7)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_EventRef,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
TERMINATEONSUCCESS

PUTINTEGER(AEDisposeDesc( GETPOINTER(8,AEDesc,*,ROOT(4),TERMINAL(2))),3);
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(5));

result = vpx_set(PARAMETERS,kVPXValue_EventRef,TERMINAL(1),TERMINAL(5),ROOT(6));

result = kSuccess;

FOOTER(7)
}

enum opTrigger vpx_method_Apple_20_Event_2F_Dispose_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Apple_20_Event_2F_Dispose_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = vpx_set(PARAMETERS,kVPXValue_EventRef,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_Apple_20_Event_2F_Dispose_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Apple_20_Event_2F_Dispose_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Apple_20_Event_2F_Dispose_case_1_local_2_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Apple_20_Event_2F_Dispose_case_1_local_2_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Apple_20_Event_2F_Dispose_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Apple_20_Event_2F_Dispose_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(7)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_ReplyRef,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
TERMINATEONSUCCESS

PUTINTEGER(AEDisposeDesc( GETPOINTER(8,AEDesc,*,ROOT(4),TERMINAL(2))),3);
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(5));

result = vpx_set(PARAMETERS,kVPXValue_ReplyRef,TERMINAL(0),TERMINAL(5),ROOT(6));

result = kSuccess;

FOOTER(7)
}

enum opTrigger vpx_method_Apple_20_Event_2F_Dispose_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Apple_20_Event_2F_Dispose_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = vpx_set(PARAMETERS,kVPXValue_ReplyRef,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_Apple_20_Event_2F_Dispose_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Apple_20_Event_2F_Dispose_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Apple_20_Event_2F_Dispose_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Apple_20_Event_2F_Dispose_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Apple_20_Event_2F_Dispose(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Apple_20_Event_2F_Dispose_case_1_local_2(PARAMETERS,TERMINAL(0));

result = vpx_method_Apple_20_Event_2F_Dispose_case_1_local_3(PARAMETERS,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Apple_20_Event_2F_Get_20_Attribute_20_AEDesc(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1)
{
HEADERWITHNONE(9)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_EventRef,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_extconstant(PARAMETERS,typeWildCard,ROOT(5));

result = vpx_method_Replace_20_NULL(PARAMETERS,TERMINAL(2),TERMINAL(5),ROOT(6));

PUTINTEGER(AEGetAttributeDesc( GETCONSTPOINTER(AEDesc,*,TERMINAL(4)),GETINTEGER(TERMINAL(1)),GETINTEGER(TERMINAL(6)),GETPOINTER(8,AEDesc,*,ROOT(8),NONE)),7);
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(7))
OUTPUT(1,TERMINAL(8))
FOOTERSINGLECASEWITHNONE(9)
}

enum opTrigger vpx_method_Apple_20_Event_2F_Get_20_Attribute(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Attribute_20_AEDesc,3,2,TERMINAL(0),TERMINAL(1),TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(3));
FAILONFAILURE

result = vpx_method_From_20_AEDesc(PARAMETERS,TERMINAL(4),ROOT(5));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Apple_20_Event_2F_Get_20_Parameter_20_AEDesc(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1)
{
HEADERWITHNONE(9)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_EventRef,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_extconstant(PARAMETERS,typeWildCard,ROOT(5));

result = vpx_method_Replace_20_NULL(PARAMETERS,TERMINAL(2),TERMINAL(5),ROOT(6));

PUTINTEGER(AEGetParamDesc( GETCONSTPOINTER(AEDesc,*,TERMINAL(4)),GETINTEGER(TERMINAL(1)),GETINTEGER(TERMINAL(6)),GETPOINTER(8,AEDesc,*,ROOT(8),NONE)),7);
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(7))
OUTPUT(1,TERMINAL(8))
FOOTERSINGLECASEWITHNONE(9)
}

enum opTrigger vpx_method_Apple_20_Event_2F_Get_20_Parameter(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Parameter_20_AEDesc,3,2,TERMINAL(0),TERMINAL(1),TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(3));
FAILONFAILURE

result = vpx_method_From_20_AEDesc(PARAMETERS,TERMINAL(4),ROOT(5));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Apple_20_Event_2F_Get_20_Reply_20_Parameter_20_AEDesc(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1)
{
HEADERWITHNONE(9)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_ReplyRef,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_extconstant(PARAMETERS,typeWildCard,ROOT(5));

result = vpx_method_Replace_20_NULL(PARAMETERS,TERMINAL(2),TERMINAL(5),ROOT(6));

PUTINTEGER(AEGetParamDesc( GETCONSTPOINTER(AEDesc,*,TERMINAL(4)),GETINTEGER(TERMINAL(1)),GETINTEGER(TERMINAL(6)),GETPOINTER(8,AEDesc,*,ROOT(8),NONE)),7);
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(7))
OUTPUT(1,TERMINAL(8))
FOOTERSINGLECASEWITHNONE(9)
}

enum opTrigger vpx_method_Apple_20_Event_2F_Get_20_Reply_20_Parameter(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Reply_20_Parameter_20_AEDesc,3,2,TERMINAL(0),TERMINAL(1),TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(3));
FAILONFAILURE

result = vpx_method_From_20_AEDesc(PARAMETERS,TERMINAL(4),ROOT(5));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Apple_20_Event_2F_Get_20_Error(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Error,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Apple_20_Event_2F_Set_20_Error(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Error,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Apple_20_Event_2F_Get_20_Direct_20_Object(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(3)
INPUT(0,0)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,keyDirectObject,ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Parameter,3,1,TERMINAL(0),TERMINAL(1),NONE,ROOT(2));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASEWITHNONE(3)
}

enum opTrigger vpx_method_Apple_20_Event_2F_Set_20_Reply_20_Parameter_20_AEDesc(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_ReplyRef,TERMINAL(0),ROOT(3),ROOT(4));

PUTINTEGER(AEPutParamDesc( GETPOINTER(8,AEDesc,*,ROOT(6),TERMINAL(4)),GETINTEGER(TERMINAL(1)),GETCONSTPOINTER(AEDesc,*,TERMINAL(2))),5);
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTERSINGLECASE(7)
}

enum opTrigger vpx_method_Apple_20_Event_2F_Set_20_Reply_20_Parameter(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADERWITHNONE(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_method_To_20_AEDesc(PARAMETERS,TERMINAL(2),NONE,ROOT(3));
FAILONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Reply_20_Parameter_20_AEDesc,3,1,TERMINAL(0),TERMINAL(1),TERMINAL(3),ROOT(4));

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(4));
FAILONFAILURE

result = kSuccess;

FOOTERSINGLECASEWITHNONE(5)
}

enum opTrigger vpx_method_Apple_20_Event_2F_Set_20_Parameter_20_AEDesc_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Apple_20_Event_2F_Set_20_Parameter_20_AEDesc_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_AEDesc,1,1,TERMINAL(0),ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Apple_20_Event_2F_Set_20_Parameter_20_AEDesc_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Apple_20_Event_2F_Set_20_Parameter_20_AEDesc_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(1)
}

enum opTrigger vpx_method_Apple_20_Event_2F_Set_20_Parameter_20_AEDesc_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Apple_20_Event_2F_Set_20_Parameter_20_AEDesc_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Apple_20_Event_2F_Set_20_Parameter_20_AEDesc_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Apple_20_Event_2F_Set_20_Parameter_20_AEDesc_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Apple_20_Event_2F_Set_20_Parameter_20_AEDesc_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Apple_20_Event_2F_Set_20_Parameter_20_AEDesc_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,keyDirectObject,ROOT(1));

result = vpx_method_Replace_20_NULL(PARAMETERS,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Apple_20_Event_2F_Set_20_Parameter_20_AEDesc(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_EventRef,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_method_Apple_20_Event_2F_Set_20_Parameter_20_AEDesc_case_1_local_3(PARAMETERS,TERMINAL(2),ROOT(5));

result = vpx_method_Apple_20_Event_2F_Set_20_Parameter_20_AEDesc_case_1_local_4(PARAMETERS,TERMINAL(1),ROOT(6));

PUTINTEGER(AEPutParamDesc( GETPOINTER(8,AEDesc,*,ROOT(8),TERMINAL(4)),GETINTEGER(TERMINAL(6)),GETCONSTPOINTER(AEDesc,*,TERMINAL(5))),7);
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(7))
FOOTERSINGLECASE(9)
}

enum opTrigger vpx_method_Apple_20_Event_2F_Set_20_Parameter(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADERWITHNONE(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_method_To_20_AEDesc(PARAMETERS,TERMINAL(2),NONE,ROOT(3));
FAILONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Parameter_20_AEDesc,3,1,TERMINAL(0),TERMINAL(1),TERMINAL(3),ROOT(4));

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(4));
FAILONFAILURE

result = kSuccess;

FOOTERSINGLECASEWITHNONE(5)
}

/* Stop Universals */



Nat4 VPLC_AE_20_Descriptor_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_AE_20_Descriptor_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 200 300 } */
	tempAttribute = attribute_add("AEDesc",tempClass,NULL,environment);
	tempAttribute = attribute_add("Type",tempClass,NULL,environment);
	tempAttribute = attribute_add("Data",tempClass,NULL,environment);
	tempAttribute = attribute_add("Key",tempClass,NULL,environment);
/* Stop Attributes */

/* NULL SUPER CLASS */
	return kNOERROR;
}

/* Start Universals: { 343 269 }{ 327 300 } */
enum opTrigger vpx_method_AE_20_Descriptor_2F_From_20_AEDesc_20_Type_case_1_local_7_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_AE_20_Descriptor_2F_From_20_AEDesc_20_Type_case_1_local_7_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(7)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,typeWildCard,ROOT(2));

PUTINTEGER(AEGetNthDesc( GETCONSTPOINTER(AEDesc,*,TERMINAL(0)),GETINTEGER(TERMINAL(1)),GETINTEGER(TERMINAL(2)),GETPOINTER(4,unsigned int,*,ROOT(4),NONE),GETPOINTER(8,AEDesc,*,ROOT(5),NONE)),3);
result = kSuccess;

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(3));
NEXTCASEONFAILURE

result = vpx_method_From_20_AEDesc(PARAMETERS,TERMINAL(5),ROOT(6));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTERWITHNONE(7)
}

enum opTrigger vpx_method_AE_20_Descriptor_2F_From_20_AEDesc_20_Type_case_1_local_7_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_AE_20_Descriptor_2F_From_20_AEDesc_20_Type_case_1_local_7_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
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

enum opTrigger vpx_method_AE_20_Descriptor_2F_From_20_AEDesc_20_Type_case_1_local_7_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_AE_20_Descriptor_2F_From_20_AEDesc_20_Type_case_1_local_7_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_AE_20_Descriptor_2F_From_20_AEDesc_20_Type_case_1_local_7_case_1_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_AE_20_Descriptor_2F_From_20_AEDesc_20_Type_case_1_local_7_case_1_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_AE_20_Descriptor_2F_From_20_AEDesc_20_Type_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_AE_20_Descriptor_2F_From_20_AEDesc_20_Type_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_match(PARAMETERS,"0",TERMINAL(2));
TERMINATEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP__3E3D_,2,0,TERMINAL(1),TERMINAL(2));
FINISHONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP__2B_1,1,1,TERMINAL(1),ROOT(3));

result = vpx_method_AE_20_Descriptor_2F_From_20_AEDesc_20_Type_case_1_local_7_case_1_local_5(PARAMETERS,TERMINAL(0),TERMINAL(1),ROOT(4));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(3))
OUTPUT(1,TERMINAL(4))
FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_AE_20_Descriptor_2F_From_20_AEDesc_20_Type_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_AE_20_Descriptor_2F_From_20_AEDesc_20_Type_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(9)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,typeAEList,TERMINAL(1));
NEXTCASEONFAILURE

PUTINTEGER(AECountItems( GETCONSTPOINTER(AEDesc,*,TERMINAL(0)),GETPOINTER(4,long int,*,ROOT(3),NONE)),2);
result = kSuccess;

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(2));
FAILONFAILURE

result = vpx_method_Get_20_UInt32(PARAMETERS,TERMINAL(3),NONE,ROOT(4),ROOT(5));

result = vpx_constant(PARAMETERS,"1",ROOT(6));

LISTROOTBEGIN(1)
REPEATBEGIN
LOOPTERMINALBEGIN(1)
LOOPTERMINAL(0,6,7)
result = vpx_method_AE_20_Descriptor_2F_From_20_AEDesc_20_Type_case_1_local_7(PARAMETERS,TERMINAL(0),LOOP(0),TERMINAL(5),ROOT(7),ROOT(8));
FAILONFAILURE
LISTROOT(8,0)
REPEATFINISH
LISTROOTFINISH(8,0)
LISTROOTEND

result = kSuccess;

OUTPUT(0,TERMINAL(8))
FOOTERWITHNONE(9)
}

enum opTrigger vpx_method_AE_20_Descriptor_2F_From_20_AEDesc_20_Type_case_2_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_AE_20_Descriptor_2F_From_20_AEDesc_20_Type_case_2_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(3)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"0",ROOT(1));

result = vpx_method_Block_20_Copy(PARAMETERS,TERMINAL(0),NONE,TERMINAL(1),ROOT(2));
NEXTCASEONFAILURE

result = vpx_method_Block_20_Free(PARAMETERS,TERMINAL(0));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASEWITHNONE(3)
}

enum opTrigger vpx_method_AE_20_Descriptor_2F_From_20_AEDesc_20_Type_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_AE_20_Descriptor_2F_From_20_AEDesc_20_Type_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,typeFSRef,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_method_AEDesc_20_Copy_20_Data(PARAMETERS,TERMINAL(0),ROOT(2));
FAILONFAILURE

result = vpx_method_AE_20_Descriptor_2F_From_20_AEDesc_20_Type_case_2_local_4(PARAMETERS,TERMINAL(2),ROOT(3));

result = vpx_method_New_20_FSRef(PARAMETERS,TERMINAL(3),ROOT(4));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_AE_20_Descriptor_2F_From_20_AEDesc_20_Type_case_3_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_AE_20_Descriptor_2F_From_20_AEDesc_20_Type_case_3_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(3)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"2",ROOT(1));

result = vpx_method_Block_20_Copy(PARAMETERS,TERMINAL(0),NONE,TERMINAL(1),ROOT(2));
NEXTCASEONFAILURE

result = vpx_method_Block_20_Free(PARAMETERS,TERMINAL(0));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASEWITHNONE(3)
}

enum opTrigger vpx_method_AE_20_Descriptor_2F_From_20_AEDesc_20_Type_case_3_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_AE_20_Descriptor_2F_From_20_AEDesc_20_Type_case_3_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"AliasRecord",ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_set_2D_external_2D_type,2,0,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_AE_20_Descriptor_2F_From_20_AEDesc_20_Type_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_AE_20_Descriptor_2F_From_20_AEDesc_20_Type_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,typeAlias,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_method_AEDesc_20_Copy_20_Data(PARAMETERS,TERMINAL(0),ROOT(2));
FAILONFAILURE

result = vpx_method_AE_20_Descriptor_2F_From_20_AEDesc_20_Type_case_3_local_4(PARAMETERS,TERMINAL(2),ROOT(3));

result = vpx_method_AE_20_Descriptor_2F_From_20_AEDesc_20_Type_case_3_local_5(PARAMETERS,TERMINAL(3));

result = vpx_method_New_20_FSRef_20_From_20_Alias(PARAMETERS,TERMINAL(3),ROOT(4));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_AE_20_Descriptor_2F_From_20_AEDesc_20_Type_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_AE_20_Descriptor_2F_From_20_AEDesc_20_Type_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,typeFSS,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_method_AEDesc_20_Copy_20_Data(PARAMETERS,TERMINAL(0),ROOT(2));
FAILONFAILURE

result = vpx_method_New_20_FSSpec(PARAMETERS,TERMINAL(2),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_AE_20_Descriptor_2F_From_20_AEDesc_20_Type_case_5_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_AE_20_Descriptor_2F_From_20_AEDesc_20_Type_case_5_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"0",TERMINAL(0));
NEXTCASEONSUCCESS

result = vpx_constant(PARAMETERS,"0",ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_integer,3,3,TERMINAL(1),TERMINAL(2),TERMINAL(0),ROOT(3),ROOT(4),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTER(6)
}

enum opTrigger vpx_method_AE_20_Descriptor_2F_From_20_AEDesc_20_Type_case_5_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_AE_20_Descriptor_2F_From_20_AEDesc_20_Type_case_5_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
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

enum opTrigger vpx_method_AE_20_Descriptor_2F_From_20_AEDesc_20_Type_case_5_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_AE_20_Descriptor_2F_From_20_AEDesc_20_Type_case_5_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_AE_20_Descriptor_2F_From_20_AEDesc_20_Type_case_5_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_AE_20_Descriptor_2F_From_20_AEDesc_20_Type_case_5_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_AE_20_Descriptor_2F_From_20_AEDesc_20_Type_case_5(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_AE_20_Descriptor_2F_From_20_AEDesc_20_Type_case_5(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,typeInteger,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_method_AEDesc_20_Copy_20_Data(PARAMETERS,TERMINAL(0),ROOT(2));
FAILONFAILURE

PUTINTEGER(AEGetDescDataSize( GETCONSTPOINTER(AEDesc,*,TERMINAL(0))),3);
result = kSuccess;

result = vpx_method_AE_20_Descriptor_2F_From_20_AEDesc_20_Type_case_5_local_5(PARAMETERS,TERMINAL(3),TERMINAL(2),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_AE_20_Descriptor_2F_From_20_AEDesc_20_Type_case_6_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_AE_20_Descriptor_2F_From_20_AEDesc_20_Type_case_6_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"0",TERMINAL(1));
NEXTCASEONSUCCESS

result = vpx_constant(PARAMETERS,"0",ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_text,3,3,TERMINAL(0),TERMINAL(2),TERMINAL(1),ROOT(3),ROOT(4),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTER(6)
}

enum opTrigger vpx_method_AE_20_Descriptor_2F_From_20_AEDesc_20_Type_case_6_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_AE_20_Descriptor_2F_From_20_AEDesc_20_Type_case_6_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
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

enum opTrigger vpx_method_AE_20_Descriptor_2F_From_20_AEDesc_20_Type_case_6_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_AE_20_Descriptor_2F_From_20_AEDesc_20_Type_case_6_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_AE_20_Descriptor_2F_From_20_AEDesc_20_Type_case_6_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_AE_20_Descriptor_2F_From_20_AEDesc_20_Type_case_6_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_AE_20_Descriptor_2F_From_20_AEDesc_20_Type_case_6(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_AE_20_Descriptor_2F_From_20_AEDesc_20_Type_case_6(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,typeChar,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_method_AEDesc_20_Copy_20_Data(PARAMETERS,TERMINAL(0),ROOT(2));
FAILONFAILURE

PUTINTEGER(AEGetDescDataSize( GETCONSTPOINTER(AEDesc,*,TERMINAL(0))),3);
result = kSuccess;

result = vpx_method_AE_20_Descriptor_2F_From_20_AEDesc_20_Type_case_6_local_5(PARAMETERS,TERMINAL(2),TERMINAL(3),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_AE_20_Descriptor_2F_From_20_AEDesc_20_Type_case_7(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_AE_20_Descriptor_2F_From_20_AEDesc_20_Type_case_7(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,typeNull,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"NULL",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_AE_20_Descriptor_2F_From_20_AEDesc_20_Type_case_8(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_AE_20_Descriptor_2F_From_20_AEDesc_20_Type_case_8(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
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

enum opTrigger vpx_method_AE_20_Descriptor_2F_From_20_AEDesc_20_Type(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_AE_20_Descriptor_2F_From_20_AEDesc_20_Type_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
if(vpx_method_AE_20_Descriptor_2F_From_20_AEDesc_20_Type_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
if(vpx_method_AE_20_Descriptor_2F_From_20_AEDesc_20_Type_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
if(vpx_method_AE_20_Descriptor_2F_From_20_AEDesc_20_Type_case_4(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
if(vpx_method_AE_20_Descriptor_2F_From_20_AEDesc_20_Type_case_5(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
if(vpx_method_AE_20_Descriptor_2F_From_20_AEDesc_20_Type_case_6(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
if(vpx_method_AE_20_Descriptor_2F_From_20_AEDesc_20_Type_case_7(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_AE_20_Descriptor_2F_From_20_AEDesc_20_Type_case_8(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_AE_20_Descriptor_2F_Coerce_20_AEDesc(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_AE_20_Descriptor_2F_New(PARAMETERS,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Create_20_AEDesc,1,1,TERMINAL(2),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
OUTPUT(1,TERMINAL(2))
FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_AE_20_Descriptor_2F_Create_20_AEDesc_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_AE_20_Descriptor_2F_Create_20_AEDesc_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_AEDesc,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
NEXTCASEONSUCCESS

result = vpx_extconstant(PARAMETERS,noErr,ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_AE_20_Descriptor_2F_Create_20_AEDesc_case_2_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_AE_20_Descriptor_2F_Create_20_AEDesc_case_2_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,typeAEList,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"FALSE",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_AE_20_Descriptor_2F_Create_20_AEDesc_case_2_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_AE_20_Descriptor_2F_Create_20_AEDesc_case_2_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,typeAERecord,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"TRUE",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_AE_20_Descriptor_2F_Create_20_AEDesc_case_2_local_3_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_AE_20_Descriptor_2F_Create_20_AEDesc_case_2_local_3_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;
FAILONSUCCESS

OUTPUT(0,NONE)
FOOTERWITHNONE(1)
}

enum opTrigger vpx_method_AE_20_Descriptor_2F_Create_20_AEDesc_case_2_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_AE_20_Descriptor_2F_Create_20_AEDesc_case_2_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_AE_20_Descriptor_2F_Create_20_AEDesc_case_2_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_AE_20_Descriptor_2F_Create_20_AEDesc_case_2_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_AE_20_Descriptor_2F_Create_20_AEDesc_case_2_local_3_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_AE_20_Descriptor_2F_Create_20_AEDesc_case_2_local_7_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_AE_20_Descriptor_2F_Create_20_AEDesc_case_2_local_7_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(1));
TERMINATEONSUCCESS

result = vpx_method_Make_20_Count(PARAMETERS,TERMINAL(0),ROOT(2));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(2))) ){
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Key,2,0,TERMINAL(0),LIST(2));
REPEATFINISH
} else {
}

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_AE_20_Descriptor_2F_Create_20_AEDesc_case_2_local_7_case_1_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_AE_20_Descriptor_2F_Create_20_AEDesc_case_2_local_7_case_1_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Create_20_AEDesc,1,1,TERMINAL(0),ROOT(2));

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Put_20_Parameter_20_Desc,2,1,TERMINAL(1),TERMINAL(0),ROOT(3));

result = kSuccess;

FOOTER(4)
}

enum opTrigger vpx_method_AE_20_Descriptor_2F_Create_20_AEDesc_case_2_local_7_case_1_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_AE_20_Descriptor_2F_Create_20_AEDesc_case_2_local_7_case_1_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_AE_20_Descriptor_2F_Create_20_AEDesc_case_2_local_7_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_AE_20_Descriptor_2F_Create_20_AEDesc_case_2_local_7_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_AE_20_Descriptor_2F_Create_20_AEDesc_case_2_local_7_case_1_local_7_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_AE_20_Descriptor_2F_Create_20_AEDesc_case_2_local_7_case_1_local_7_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_AE_20_Descriptor_2F_Create_20_AEDesc_case_2_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3);
enum opTrigger vpx_method_AE_20_Descriptor_2F_Create_20_AEDesc_case_2_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(0));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_AEDesc,2,0,TERMINAL(1),TERMINAL(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Data,1,1,TERMINAL(1),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_list_3F_,1,0,TERMINAL(4));
TERMINATEONFAILURE

result = vpx_method_AE_20_Descriptor_2F_Create_20_AEDesc_case_2_local_7_case_1_local_6(PARAMETERS,TERMINAL(4),TERMINAL(3));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(4))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_AE_20_Descriptor_2F_Create_20_AEDesc_case_2_local_7_case_1_local_7(PARAMETERS,LIST(4),TERMINAL(1));
REPEATFINISH
} else {
}

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_AE_20_Descriptor_2F_Create_20_AEDesc_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_AE_20_Descriptor_2F_Create_20_AEDesc_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(7)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Type,1,1,TERMINAL(0),ROOT(1));

result = vpx_method_AE_20_Descriptor_2F_Create_20_AEDesc_case_2_local_3(PARAMETERS,TERMINAL(1),ROOT(2));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"0",ROOT(3));

result = vpx_constant(PARAMETERS,"NULL",ROOT(4));

PUTINTEGER(AECreateList( GETCONSTPOINTER(void,*,TERMINAL(4)),GETINTEGER(TERMINAL(3)),GETINTEGER(TERMINAL(2)),GETPOINTER(8,AEDesc,*,ROOT(6),NONE)),5);
result = kSuccess;

result = vpx_method_AE_20_Descriptor_2F_Create_20_AEDesc_case_2_local_7(PARAMETERS,TERMINAL(5),TERMINAL(0),TERMINAL(6),TERMINAL(2));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTERWITHNONE(7)
}

enum opTrigger vpx_method_AE_20_Descriptor_2F_Create_20_AEDesc_case_3_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_AE_20_Descriptor_2F_Create_20_AEDesc_case_3_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_string_3F_,1,0,TERMINAL(1));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_AE_20_Descriptor_2F_Create_20_AEDesc_case_3_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_AE_20_Descriptor_2F_Create_20_AEDesc_case_3_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_integer_3F_,1,0,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_method_New_20_UInt32(PARAMETERS,TERMINAL(1),NONE,ROOT(2));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERWITHNONE(3)
}

enum opTrigger vpx_method_AE_20_Descriptor_2F_Create_20_AEDesc_case_3_local_3_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_AE_20_Descriptor_2F_Create_20_AEDesc_case_3_local_3_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
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

enum opTrigger vpx_method_AE_20_Descriptor_2F_Create_20_AEDesc_case_3_local_3_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_AE_20_Descriptor_2F_Create_20_AEDesc_case_3_local_3_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
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

enum opTrigger vpx_method_AE_20_Descriptor_2F_Create_20_AEDesc_case_3_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_AE_20_Descriptor_2F_Create_20_AEDesc_case_3_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_AE_20_Descriptor_2F_Create_20_AEDesc_case_3_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
if(vpx_method_AE_20_Descriptor_2F_Create_20_AEDesc_case_3_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
if(vpx_method_AE_20_Descriptor_2F_Create_20_AEDesc_case_3_local_3_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_AE_20_Descriptor_2F_Create_20_AEDesc_case_3_local_3_case_4(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_AE_20_Descriptor_2F_Create_20_AEDesc_case_3_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_AE_20_Descriptor_2F_Create_20_AEDesc_case_3_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_string_3F_,1,0,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_byte_2D_length,1,1,TERMINAL(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_AE_20_Descriptor_2F_Create_20_AEDesc_case_3_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_AE_20_Descriptor_2F_Create_20_AEDesc_case_3_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_number_3F_,1,0,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"4",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_AE_20_Descriptor_2F_Create_20_AEDesc_case_3_local_4_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_AE_20_Descriptor_2F_Create_20_AEDesc_case_3_local_4_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_external_3F_,1,0,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_method_Block_20_Size(PARAMETERS,TERMINAL(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_AE_20_Descriptor_2F_Create_20_AEDesc_case_3_local_4_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_AE_20_Descriptor_2F_Create_20_AEDesc_case_3_local_4_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
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

enum opTrigger vpx_method_AE_20_Descriptor_2F_Create_20_AEDesc_case_3_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_AE_20_Descriptor_2F_Create_20_AEDesc_case_3_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_AE_20_Descriptor_2F_Create_20_AEDesc_case_3_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
if(vpx_method_AE_20_Descriptor_2F_Create_20_AEDesc_case_3_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
if(vpx_method_AE_20_Descriptor_2F_Create_20_AEDesc_case_3_local_4_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_AE_20_Descriptor_2F_Create_20_AEDesc_case_3_local_4_case_4(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_AE_20_Descriptor_2F_Create_20_AEDesc_case_3_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_AE_20_Descriptor_2F_Create_20_AEDesc_case_3_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(0));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_AEDesc,2,0,TERMINAL(1),TERMINAL(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_AE_20_Descriptor_2F_Create_20_AEDesc_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_AE_20_Descriptor_2F_Create_20_AEDesc_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(7)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Data,1,1,TERMINAL(0),ROOT(1));

result = vpx_method_AE_20_Descriptor_2F_Create_20_AEDesc_case_3_local_3(PARAMETERS,TERMINAL(0),TERMINAL(1),ROOT(2));
NEXTCASEONFAILURE

result = vpx_method_AE_20_Descriptor_2F_Create_20_AEDesc_case_3_local_4(PARAMETERS,TERMINAL(0),TERMINAL(1),ROOT(3));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Type,1,1,TERMINAL(0),ROOT(4));

PUTINTEGER(AECreateDesc( GETINTEGER(TERMINAL(4)),GETCONSTPOINTER(void,*,TERMINAL(2)),GETINTEGER(TERMINAL(3)),GETPOINTER(8,AEDesc,*,ROOT(6),NONE)),5);
result = kSuccess;

result = vpx_method_AE_20_Descriptor_2F_Create_20_AEDesc_case_3_local_7(PARAMETERS,TERMINAL(5),TERMINAL(0),TERMINAL(6));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTERWITHNONE(7)
}

enum opTrigger vpx_method_AE_20_Descriptor_2F_Create_20_AEDesc_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_AE_20_Descriptor_2F_Create_20_AEDesc_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,paramErr,ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_AE_20_Descriptor_2F_Create_20_AEDesc(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_AE_20_Descriptor_2F_Create_20_AEDesc_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_AE_20_Descriptor_2F_Create_20_AEDesc_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_AE_20_Descriptor_2F_Create_20_AEDesc_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_AE_20_Descriptor_2F_Create_20_AEDesc_case_4(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_AE_20_Descriptor_2F_New(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_AE_20_Descriptor,1,1,NONE,ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Type,2,0,TERMINAL(2),TERMINAL(0));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Data,2,0,TERMINAL(2),TERMINAL(1));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASEWITHNONE(3)
}

enum opTrigger vpx_method_AE_20_Descriptor_2F_Put_20_Parameter_20_Desc_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_AE_20_Descriptor_2F_Put_20_Parameter_20_Desc_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_AEDesc,1,1,TERMINAL(1),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
NEXTCASEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_AEDesc,1,1,TERMINAL(0),ROOT(3));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
NEXTCASEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Key,1,1,TERMINAL(1),ROOT(4));

PUTINTEGER(AEPutParamDesc( GETPOINTER(8,AEDesc,*,ROOT(6),TERMINAL(3)),GETINTEGER(TERMINAL(4)),GETCONSTPOINTER(AEDesc,*,TERMINAL(2))),5);
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTER(7)
}

enum opTrigger vpx_method_AE_20_Descriptor_2F_Put_20_Parameter_20_Desc_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_AE_20_Descriptor_2F_Put_20_Parameter_20_Desc_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
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

enum opTrigger vpx_method_AE_20_Descriptor_2F_Put_20_Parameter_20_Desc(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_AE_20_Descriptor_2F_Put_20_Parameter_20_Desc_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_AE_20_Descriptor_2F_Put_20_Parameter_20_Desc_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_AE_20_Descriptor_2F_Get_20_AEDesc(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_AEDesc,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_AE_20_Descriptor_2F_Set_20_AEDesc(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_AEDesc,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_AE_20_Descriptor_2F_Get_20_Type(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Type,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_AE_20_Descriptor_2F_Set_20_Type(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Type,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_AE_20_Descriptor_2F_Get_20_Data(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Data,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_AE_20_Descriptor_2F_Set_20_Data(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Data,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_AE_20_Descriptor_2F_Get_20_Key(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Key,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_AE_20_Descriptor_2F_Set_20_Key(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Key,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_AE_20_Descriptor_2F_Dispose_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_AE_20_Descriptor_2F_Dispose_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_AEDesc,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
TERMINATEONSUCCESS

PUTINTEGER(AEDisposeDesc( GETPOINTER(8,AEDesc,*,ROOT(3),TERMINAL(1))),2);
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_AEDesc,2,0,TERMINAL(0),TERMINAL(4));

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_AE_20_Descriptor_2F_Dispose(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_method_AE_20_Descriptor_2F_Dispose_case_1_local_2(PARAMETERS,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(1)
}

/* Stop Universals */



Nat4 VPLC_Apple_20_Event_20_Callback_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Apple_20_Event_20_Callback_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 186 158 }{ 361 420 } */
	tempAttribute = attribute_add("Name",tempClass,tempAttribute_Apple_20_Event_20_Callback_2F_Name,environment);
	tempAttribute = attribute_add("Owner",tempClass,NULL,environment);
	tempAttribute = attribute_add("Method Name",tempClass,tempAttribute_Apple_20_Event_20_Callback_2F_Method_20_Name,environment);
	tempAttribute = attribute_add("Input Specifiers",tempClass,tempAttribute_Apple_20_Event_20_Callback_2F_Input_20_Specifiers,environment);
	tempAttribute = attribute_add("Output Specifiers",tempClass,tempAttribute_Apple_20_Event_20_Callback_2F_Output_20_Specifiers,environment);
	tempAttribute = attribute_add("Attachments",tempClass,tempAttribute_Apple_20_Event_20_Callback_2F_Attachments,environment);
	tempAttribute = attribute_add("Callback Method Name",tempClass,tempAttribute_Apple_20_Event_20_Callback_2F_Callback_20_Method_20_Name,environment);
	tempAttribute = attribute_add("ProcPtr Name",tempClass,tempAttribute_Apple_20_Event_20_Callback_2F_ProcPtr_20_Name,environment);
	tempAttribute = attribute_add("UPP Allocate",tempClass,tempAttribute_Apple_20_Event_20_Callback_2F_UPP_20_Allocate,environment);
	tempAttribute = attribute_add("UPP Dispose",tempClass,tempAttribute_Apple_20_Event_20_Callback_2F_UPP_20_Dispose,environment);
	tempAttribute = attribute_add("Callback Pointer",tempClass,NULL,environment);
	tempAttribute = attribute_add("UPP Pointer",tempClass,NULL,environment);
	tempAttribute = attribute_add("Callback Result",tempClass,tempAttribute_Apple_20_Event_20_Callback_2F_Callback_20_Result,environment);
	tempAttribute = attribute_add("Event Class",tempClass,NULL,environment);
	tempAttribute = attribute_add("Event ID",tempClass,NULL,environment);
	tempAttribute = attribute_add("Apple Event",tempClass,NULL,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"Method Callback");
	return kNOERROR;
}

/* Start Universals: { 202 168 }{ 260 317 } */
enum opTrigger vpx_method_Apple_20_Event_20_Callback_2F_Do_20_AE_20_Callback(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Use_20_Parameters,4,0,TERMINAL(0),TERMINAL(1),TERMINAL(2),TERMINAL(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Call,1,0,TERMINAL(0));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Clean_20_Up_20_Parameters,1,0,TERMINAL(0));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Callback_20_Result,1,1,TERMINAL(0),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Apple_20_Event_20_Callback_2F_Install_20_Callback(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(10)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_UPP_20_Pointer,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
TERMINATEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Event_20_Class,1,1,TERMINAL(0),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Event_20_ID,1,1,TERMINAL(0),ROOT(3));

result = vpx_constant(PARAMETERS,"0",ROOT(4));

result = vpx_constant(PARAMETERS,"FALSE",ROOT(5));

PUTINTEGER(AEInstallEventHandler( GETINTEGER(TERMINAL(2)),GETINTEGER(TERMINAL(3)),GETPOINTER(2,short,*,ROOT(7),TERMINAL(1)),GETINTEGER(TERMINAL(4)),GETINTEGER(TERMINAL(5))),6);
result = kSuccess;

result = vpx_constant(PARAMETERS,"AEInstallEventHandler",ROOT(8));

result = vpx_constant(PARAMETERS,"4",ROOT(9));

result = vpx_method_Debug_20_Result(PARAMETERS,TERMINAL(0),TERMINAL(8),TERMINAL(6),TERMINAL(9));

result = kSuccess;

FOOTERSINGLECASE(10)
}

enum opTrigger vpx_method_Apple_20_Event_20_Callback_2F_Remove_20_Callback_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Apple_20_Event_20_Callback_2F_Remove_20_Callback_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(9)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Event_20_Class,1,1,TERMINAL(0),ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Event_20_ID,1,1,TERMINAL(0),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_UPP_20_Pointer,1,1,TERMINAL(0),ROOT(3));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
TERMINATEONSUCCESS

result = vpx_constant(PARAMETERS,"FALSE",ROOT(4));

PUTINTEGER(AERemoveEventHandler( GETINTEGER(TERMINAL(1)),GETINTEGER(TERMINAL(2)),GETPOINTER(2,short,*,ROOT(6),TERMINAL(3)),GETINTEGER(TERMINAL(4))),5);
result = kSuccess;

result = vpx_constant(PARAMETERS,"AERemoveEventHandler",ROOT(7));

result = vpx_constant(PARAMETERS,"4",ROOT(8));

result = vpx_method_Debug_20_Result(PARAMETERS,TERMINAL(0),TERMINAL(7),TERMINAL(5),TERMINAL(8));

result = kSuccess;

FOOTER(9)
}

enum opTrigger vpx_method_Apple_20_Event_20_Callback_2F_Remove_20_Callback_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Apple_20_Event_20_Callback_2F_Remove_20_Callback_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_Apple_20_Event_20_Callback_2F_Remove_20_Callback(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Apple_20_Event_20_Callback_2F_Remove_20_Callback_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Apple_20_Event_20_Callback_2F_Remove_20_Callback_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Apple_20_Event_20_Callback_2F_Get_20_Event_20_Class(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Event_20_Class,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Apple_20_Event_20_Callback_2F_Get_20_Event_20_ID(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Event_20_ID,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Apple_20_Event_20_Callback_2F_Set_20_Event_20_ID(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Event_20_ID,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Apple_20_Event_20_Callback_2F_Set_20_Event_20_Class(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Event_20_Class,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Apple_20_Event_20_Callback_2F_Use_20_Parameters(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_method_Apple_20_Event_2F_New(PARAMETERS,TERMINAL(1),TERMINAL(2),ROOT(4));

result = vpx_set(PARAMETERS,kVPXValue_Apple_20_Event,TERMINAL(0),TERMINAL(4),ROOT(5));

result = kSuccess;

FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Apple_20_Event_20_Callback_2F_Clean_20_Up_20_Parameters_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Apple_20_Event_20_Callback_2F_Clean_20_Up_20_Parameters_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Apple_20_Event,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
TERMINATEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Dispose,1,0,TERMINAL(2));

result = vpx_constant(PARAMETERS,"NULL",ROOT(3));

result = vpx_set(PARAMETERS,kVPXValue_Apple_20_Event,TERMINAL(1),TERMINAL(3),ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Error,1,1,TERMINAL(2),ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Callback_20_Result,2,0,TERMINAL(4),TERMINAL(5));

result = kSuccess;

FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Apple_20_Event_20_Callback_2F_Clean_20_Up_20_Parameters(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Apple_20_Event_20_Callback_2F_Clean_20_Up_20_Parameters_case_1_local_2(PARAMETERS,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Apple_20_Event_20_Callback_2F_Get_20_Parameter_20_List_3F_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
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



Nat4 VPLC_AEParam_20_Specifier_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_AEParam_20_Specifier_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 200 300 } */
	tempAttribute = attribute_add("Value",tempClass,NULL,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"Specifier");
	return kNOERROR;
}

/* Start Universals: { 60 60 }{ 200 300 } */
enum opTrigger vpx_method_AEParam_20_Specifier_2F_Process_20_Input_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_AEParam_20_Specifier_2F_Process_20_Input_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Value,1,1,TERMINAL(0),ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_Apple_20_Event,TERMINAL(1),ROOT(3),ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Parameter,3,1,TERMINAL(4),TERMINAL(2),NONE,ROOT(5));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(4));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTERWITHNONE(6)
}

enum opTrigger vpx_method_AEParam_20_Specifier_2F_Process_20_Input_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_AEParam_20_Specifier_2F_Process_20_Input_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"UNDEFINED",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_AEParam_20_Specifier_2F_Process_20_Input(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_AEParam_20_Specifier_2F_Process_20_Input_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_AEParam_20_Specifier_2F_Process_20_Input_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_AEParam_20_Specifier_2F_Process_20_Output_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_AEParam_20_Specifier_2F_Process_20_Output_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Apple_20_Event,TERMINAL(1),ROOT(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(4));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Value,1,1,TERMINAL(0),ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Reply_20_Parameter,3,0,TERMINAL(4),TERMINAL(5),TERMINAL(2));
NEXTCASEONFAILURE

result = kSuccess;

FOOTER(6)
}

enum opTrigger vpx_method_AEParam_20_Specifier_2F_Process_20_Output_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_AEParam_20_Specifier_2F_Process_20_Output_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_AEParam_20_Specifier_2F_Process_20_Output(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_AEParam_20_Specifier_2F_Process_20_Output_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2))
vpx_method_AEParam_20_Specifier_2F_Process_20_Output_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2);
return outcome;
}

/* Stop Universals */



Nat4 VPLC_AE_20_Send_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_AE_20_Send_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 291 83 }{ 223 305 } */
	tempAttribute = attribute_add("EventRef",tempClass,NULL,environment);
	tempAttribute = attribute_add("ReplyRef",tempClass,NULL,environment);
	tempAttribute = attribute_add("Error",tempClass,tempAttribute_AE_20_Send_2F_Error,environment);
	tempAttribute = attribute_add("Class",tempClass,NULL,environment);
	tempAttribute = attribute_add("ID",tempClass,NULL,environment);
	tempAttribute = attribute_add("Target",tempClass,NULL,environment);
	tempAttribute = attribute_add("Return ID",tempClass,NULL,environment);
	tempAttribute = attribute_add("Transaction ID",tempClass,NULL,environment);
	tempAttribute = attribute_add("Event Parameters",tempClass,tempAttribute_AE_20_Send_2F_Event_20_Parameters,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"Apple Event");
	return kNOERROR;
}

/* Start Universals: { 293 415 }{ 455 324 } */
enum opTrigger vpx_method_AE_20_Send_2F_New(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_AE_20_Send,1,1,NONE,ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Class,2,0,TERMINAL(2),TERMINAL(0));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_ID,2,0,TERMINAL(2),TERMINAL(1));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASEWITHNONE(3)
}

enum opTrigger vpx_method_AE_20_Send_2F_Send_20_No_20_Reply_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_AE_20_Send_2F_Send_20_No_20_Reply_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,kAEDefaultTimeout,ROOT(1));

result = vpx_method_Replace_20_NULL(PARAMETERS,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_AE_20_Send_2F_Send_20_No_20_Reply_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_AE_20_Send_2F_Send_20_No_20_Reply_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,kAENormalPriority,ROOT(1));

result = vpx_method_Replace_20_NULL(PARAMETERS,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_AE_20_Send_2F_Send_20_No_20_Reply_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_AE_20_Send_2F_Send_20_No_20_Reply_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADERWITHNONE(13)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_EventRef,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(4));
NEXTCASEONSUCCESS

result = vpx_constant(PARAMETERS,"NULL",ROOT(5));

result = vpx_extconstant(PARAMETERS,kAENoReply,ROOT(6));

result = vpx_method_AE_20_Send_2F_Send_20_No_20_Reply_case_1_local_6(PARAMETERS,TERMINAL(2),ROOT(7));

result = vpx_method_AE_20_Send_2F_Send_20_No_20_Reply_case_1_local_7(PARAMETERS,TERMINAL(1),ROOT(8));

PUTINTEGER(AESend( GETCONSTPOINTER(AEDesc,*,TERMINAL(4)),GETPOINTER(8,AEDesc,*,ROOT(10),NONE),GETINTEGER(TERMINAL(6)),GETINTEGER(TERMINAL(8)),GETINTEGER(TERMINAL(7)),GETPOINTER(1,unsigned char,*,ROOT(11),TERMINAL(5)),GETPOINTER(1,unsigned char,*,ROOT(12),TERMINAL(5))),9);
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(9))
FOOTERWITHNONE(13)
}

enum opTrigger vpx_method_AE_20_Send_2F_Send_20_No_20_Reply_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_AE_20_Send_2F_Send_20_No_20_Reply_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,paramErr,ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_AE_20_Send_2F_Send_20_No_20_Reply(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_AE_20_Send_2F_Send_20_No_20_Reply_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
vpx_method_AE_20_Send_2F_Send_20_No_20_Reply_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0);
return outcome;
}

enum opTrigger vpx_method_AE_20_Send_2F_Send_20_Wait_20_Reply_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_AE_20_Send_2F_Send_20_Wait_20_Reply_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,kAENormalPriority,ROOT(1));

result = vpx_method_Replace_20_NULL(PARAMETERS,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_AE_20_Send_2F_Send_20_Wait_20_Reply_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_AE_20_Send_2F_Send_20_Wait_20_Reply_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,kAEDefaultTimeout,ROOT(1));

result = vpx_method_Replace_20_NULL(PARAMETERS,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_AE_20_Send_2F_Send_20_Wait_20_Reply_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_AE_20_Send_2F_Send_20_Wait_20_Reply_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"AEIdleProcPtr",ROOT(1));

result = vpx_constant(PARAMETERS,"/~AE Idle",ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_callback,3,1,TERMINAL(2),TERMINAL(1),TERMINAL(0),ROOT(3));

PUTPOINTER(unsigned char,*,NewAEIdleUPP( GETPOINTER(1,unsigned char,*,ROOT(5),TERMINAL(3))),4);
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(4))
OUTPUT(1,TERMINAL(3))
FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_AE_20_Send_2F_Send_20_Wait_20_Reply_case_1_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_AE_20_Send_2F_Send_20_Wait_20_Reply_case_1_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(1));
TERMINATEONFAILURE

result = vpx_set(PARAMETERS,kVPXValue_ReplyRef,TERMINAL(0),TERMINAL(2),ROOT(3));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_AE_20_Send_2F_Send_20_Wait_20_Reply_case_1_local_11(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_AE_20_Send_2F_Send_20_Wait_20_Reply_case_1_local_11(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

DisposeAEIdleUPP( GETPOINTER(1,unsigned char,*,ROOT(2),TERMINAL(0)));
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_dispose_2D_callback,1,1,TERMINAL(1),ROOT(3));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_AE_20_Send_2F_Send_20_Wait_20_Reply_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_AE_20_Send_2F_Send_20_Wait_20_Reply_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADERWITHNONE(15)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_EventRef,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(4));
NEXTCASEONSUCCESS

result = vpx_method_AE_20_Send_2F_Send_20_Wait_20_Reply_case_1_local_4(PARAMETERS,TERMINAL(1),ROOT(5));

result = vpx_method_AE_20_Send_2F_Send_20_Wait_20_Reply_case_1_local_5(PARAMETERS,TERMINAL(2),ROOT(6));

result = vpx_extconstant(PARAMETERS,kAEWaitReply,ROOT(7));

result = vpx_constant(PARAMETERS,"NULL",ROOT(8));

result = vpx_method_AE_20_Send_2F_Send_20_Wait_20_Reply_case_1_local_8(PARAMETERS,TERMINAL(0),ROOT(9),ROOT(10));

PUTINTEGER(AESend( GETCONSTPOINTER(AEDesc,*,TERMINAL(4)),GETPOINTER(8,AEDesc,*,ROOT(12),NONE),GETINTEGER(TERMINAL(7)),GETINTEGER(TERMINAL(5)),GETINTEGER(TERMINAL(6)),GETPOINTER(1,unsigned char,*,ROOT(13),TERMINAL(9)),GETPOINTER(1,unsigned char,*,ROOT(14),TERMINAL(8))),11);
result = kSuccess;

result = vpx_method_AE_20_Send_2F_Send_20_Wait_20_Reply_case_1_local_10(PARAMETERS,TERMINAL(0),TERMINAL(11),TERMINAL(12));

result = vpx_method_AE_20_Send_2F_Send_20_Wait_20_Reply_case_1_local_11(PARAMETERS,TERMINAL(9),TERMINAL(10));

result = kSuccess;

OUTPUT(0,TERMINAL(11))
FOOTERWITHNONE(15)
}

enum opTrigger vpx_method_AE_20_Send_2F_Send_20_Wait_20_Reply_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_AE_20_Send_2F_Send_20_Wait_20_Reply_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,paramErr,ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_AE_20_Send_2F_Send_20_Wait_20_Reply(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_AE_20_Send_2F_Send_20_Wait_20_Reply_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
vpx_method_AE_20_Send_2F_Send_20_Wait_20_Reply_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0);
return outcome;
}

enum opTrigger vpx_method_AE_20_Send_2F_Create_20_Event_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_AE_20_Send_2F_Create_20_Event_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_AEDesc,1,1,TERMINAL(1),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
FAILONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Target,2,0,TERMINAL(0),TERMINAL(1));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_AE_20_Send_2F_Create_20_Event_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_AE_20_Send_2F_Create_20_Event_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_external_3F_,1,0,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Target,2,0,TERMINAL(0),TERMINAL(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_AE_20_Send_2F_Create_20_Event_case_1_local_2_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_AE_20_Send_2F_Create_20_Event_case_1_local_2_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
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

enum opTrigger vpx_method_AE_20_Send_2F_Create_20_Event_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_AE_20_Send_2F_Create_20_Event_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_AE_20_Send_2F_Create_20_Event_case_1_local_2_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
if(vpx_method_AE_20_Send_2F_Create_20_Event_case_1_local_2_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_AE_20_Send_2F_Create_20_Event_case_1_local_2_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_AE_20_Send_2F_Create_20_Event_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_AE_20_Send_2F_Create_20_Event_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,kAutoGenerateReturnID,ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Return_20_ID,1,1,TERMINAL(0),ROOT(2));

result = vpx_method_Replace_20_NULL(PARAMETERS,TERMINAL(2),TERMINAL(1),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_AE_20_Send_2F_Create_20_Event_case_1_local_6_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_AE_20_Send_2F_Create_20_Event_case_1_local_6_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP__3D_,2,0,TERMINAL(1),TERMINAL(2));
TERMINATEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Transaction_20_ID,2,0,TERMINAL(0),TERMINAL(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_AE_20_Send_2F_Create_20_Event_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_AE_20_Send_2F_Create_20_Event_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Transaction_20_ID,1,1,TERMINAL(0),ROOT(1));

PUTINTEGER(TickCount(),2);
result = kSuccess;

result = vpx_method_Replace_20_NULL(PARAMETERS,TERMINAL(1),TERMINAL(2),ROOT(3));

result = vpx_method_AE_20_Send_2F_Create_20_Event_case_1_local_6_case_1_local_5(PARAMETERS,TERMINAL(0),TERMINAL(1),TERMINAL(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_AE_20_Send_2F_Create_20_Event_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_AE_20_Send_2F_Create_20_Event_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(0));
TERMINATEONFAILURE

result = vpx_set(PARAMETERS,kVPXValue_EventRef,TERMINAL(1),TERMINAL(2),ROOT(3));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_AE_20_Send_2F_Create_20_Event_case_1_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_AE_20_Send_2F_Create_20_Event_case_1_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
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

enum opTrigger vpx_method_AE_20_Send_2F_Create_20_Event(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADERWITHNONE(9)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_AE_20_Send_2F_Create_20_Event_case_1_local_2(PARAMETERS,TERMINAL(0),TERMINAL(1),ROOT(2));
FAILONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Class,1,1,TERMINAL(0),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_ID,1,1,TERMINAL(0),ROOT(4));

result = vpx_method_AE_20_Send_2F_Create_20_Event_case_1_local_5(PARAMETERS,TERMINAL(0),ROOT(5));

result = vpx_method_AE_20_Send_2F_Create_20_Event_case_1_local_6(PARAMETERS,TERMINAL(0),ROOT(6));

PUTINTEGER(AECreateAppleEvent( GETINTEGER(TERMINAL(3)),GETINTEGER(TERMINAL(4)),GETCONSTPOINTER(AEDesc,*,TERMINAL(2)),GETINTEGER(TERMINAL(5)),GETINTEGER(TERMINAL(6)),GETPOINTER(8,AEDesc,*,ROOT(8),NONE)),7);
result = kSuccess;

result = vpx_method_AE_20_Send_2F_Create_20_Event_case_1_local_8(PARAMETERS,TERMINAL(7),TERMINAL(0),TERMINAL(8));

result = vpx_method_AE_20_Send_2F_Create_20_Event_case_1_local_9(PARAMETERS,TERMINAL(0),TERMINAL(7));
FAILONFAILURE

result = kSuccess;

FOOTERSINGLECASEWITHNONE(9)
}

enum opTrigger vpx_method_AE_20_Send_2F_Dispose_case_1_local_2_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_AE_20_Send_2F_Dispose_case_1_local_2_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Dispose,1,0,TERMINAL(0));

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_AE_20_Send_2F_Dispose_case_1_local_2_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_AE_20_Send_2F_Dispose_case_1_local_2_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_external_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

PUTINTEGER(AEDisposeDesc( GETPOINTER(8,AEDesc,*,ROOT(2),TERMINAL(0))),1);
result = kSuccess;

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_AE_20_Send_2F_Dispose_case_1_local_2_case_1_local_3_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_AE_20_Send_2F_Dispose_case_1_local_2_case_1_local_3_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;
FAILONSUCCESS

FOOTER(1)
}

enum opTrigger vpx_method_AE_20_Send_2F_Dispose_case_1_local_2_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_AE_20_Send_2F_Dispose_case_1_local_2_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_AE_20_Send_2F_Dispose_case_1_local_2_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
if(vpx_method_AE_20_Send_2F_Dispose_case_1_local_2_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_AE_20_Send_2F_Dispose_case_1_local_2_case_1_local_3_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_AE_20_Send_2F_Dispose_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_AE_20_Send_2F_Dispose_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Target,1,1,TERMINAL(0),ROOT(1));

result = vpx_method_AE_20_Send_2F_Dispose_case_1_local_2_case_1_local_3(PARAMETERS,TERMINAL(1));
TERMINATEONFAILURE

result = vpx_constant(PARAMETERS,"NULL",ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Target,2,0,TERMINAL(0),TERMINAL(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_AE_20_Send_2F_Dispose(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_method_AE_20_Send_2F_Dispose_case_1_local_2(PARAMETERS,TERMINAL(0));

result = vpx_call_context_super_method(PARAMETERS,kVPXMethod_Dispose,1,0,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_AE_20_Send_2F_Get_20_Class(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Class,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_AE_20_Send_2F_Set_20_Class(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Class,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_AE_20_Send_2F_Get_20_ID(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_ID,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_AE_20_Send_2F_Set_20_ID(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_ID,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_AE_20_Send_2F_Get_20_Target(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Target,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_AE_20_Send_2F_Set_20_Target(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Target,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_AE_20_Send_2F_Get_20_Return_20_ID(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Return_20_ID,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_AE_20_Send_2F_Set_20_Return_20_ID(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Return_20_ID,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_AE_20_Send_2F_Get_20_Transaction_20_ID(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Transaction_20_ID,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_AE_20_Send_2F_Set_20_Transaction_20_ID(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Transaction_20_ID,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_AE_20_Send_2F_Get_20_Event_20_Parameters(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Event_20_Parameters,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_AE_20_Send_2F_Set_20_Event_20_Parameters(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Event_20_Parameters,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_AE_20_Send_2F_Test_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_AE_20_Send_2F_Test_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,typeApplSignature,ROOT(1));

result = vpx_method_AE_20_Descriptor_2F_Coerce_20_AEDesc(PARAMETERS,TERMINAL(1),TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(2));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_AE_20_Send_2F_Test_case_1_local_9_case_1_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_AE_20_Send_2F_Test_case_1_local_9_case_1_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADERWITHNONE(10)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,2,TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_extconstant(PARAMETERS,typeChar,ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_byte_2D_length,1,1,TERMINAL(3),ROOT(5));

PUTINTEGER(AECreateDesc( GETINTEGER(TERMINAL(4)),GETCONSTPOINTER(void,*,TERMINAL(3)),GETINTEGER(TERMINAL(5)),GETPOINTER(8,AEDesc,*,ROOT(7),NONE)),6);
result = kSuccess;

PUTINTEGER(AEPutParamDesc( GETPOINTER(8,AEDesc,*,ROOT(9),TERMINAL(0)),GETINTEGER(TERMINAL(2)),GETCONSTPOINTER(AEDesc,*,TERMINAL(7))),8);
result = kSuccess;

result = kSuccess;

FOOTERWITHNONE(10)
}

enum opTrigger vpx_method_AE_20_Send_2F_Test_case_1_local_9_case_1_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_AE_20_Send_2F_Test_case_1_local_9_case_1_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,2,TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_extconstant(PARAMETERS,typeChar,ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_byte_2D_length,1,1,TERMINAL(3),ROOT(5));

PUTINTEGER(AEPutParamPtr( GETPOINTER(8,AEDesc,*,ROOT(7),TERMINAL(0)),GETINTEGER(TERMINAL(2)),GETINTEGER(TERMINAL(4)),GETCONSTPOINTER(void,*,TERMINAL(3)),GETINTEGER(TERMINAL(5))),6);
result = kSuccess;

result = kSuccess;

FOOTER(8)
}

enum opTrigger vpx_method_AE_20_Send_2F_Test_case_1_local_9_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_AE_20_Send_2F_Test_case_1_local_9_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_AE_20_Send_2F_Test_case_1_local_9_case_1_local_7_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_AE_20_Send_2F_Test_case_1_local_9_case_1_local_7_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_AE_20_Send_2F_Test_case_1_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_AE_20_Send_2F_Test_case_1_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(6)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"TRUE",ROOT(1));

result = vpx_constant(PARAMETERS,"0",ROOT(2));

result = vpx_constant(PARAMETERS,"NULL",ROOT(3));

PUTINTEGER(AECreateList( GETCONSTPOINTER(void,*,TERMINAL(3)),GETINTEGER(TERMINAL(2)),GETINTEGER(TERMINAL(1)),GETPOINTER(8,AEDesc,*,ROOT(5),NONE)),4);
result = kSuccess;

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(4));
FAILONFAILURE

if( (repeatLimit = vpx_multiplex(1,TERMINAL(0))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_AE_20_Send_2F_Test_case_1_local_9_case_1_local_7(PARAMETERS,TERMINAL(5),LIST(0));
REPEATFINISH
} else {
}

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTERSINGLECASEWITHNONE(6)
}

enum opTrigger vpx_method_AE_20_Send_2F_Test_case_1_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_AE_20_Send_2F_Test_case_1_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADERWITHNONE(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Parameter_20_AEDesc,3,1,TERMINAL(0),NONE,TERMINAL(1),ROOT(2));

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(2));
FAILONFAILURE

result = kSuccess;

FOOTERSINGLECASEWITHNONE(3)
}

enum opTrigger vpx_method_AE_20_Send_2F_Test(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex)
{
HEADERWITHNONE(8)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\'HAPP\'",ROOT(0));

result = vpx_method_AE_20_Send_2F_Test_case_1_local_3(PARAMETERS,TERMINAL(0),ROOT(1));
TERMINATEONFAILURE

result = vpx_constant(PARAMETERS,"\'oitm\'",ROOT(2));

result = vpx_constant(PARAMETERS,"\'EBlg\'",ROOT(3));

result = vpx_method_AE_20_Send_2F_New(PARAMETERS,TERMINAL(3),TERMINAL(2),ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Create_20_Event,2,0,TERMINAL(4),TERMINAL(1));
TERMINATEONFAILURE

result = vpx_constant(PARAMETERS,"( ( \'titl\' \"New Jack Test\" ) ( \'summ\' \"A test link from Marten.\" ) ( \'link\' \"http://www.jaxs.com/\" ) )",ROOT(5));

result = vpx_method_AE_20_Send_2F_Test_case_1_local_9(PARAMETERS,TERMINAL(5),ROOT(6));
TERMINATEONFAILURE

result = vpx_method_AE_20_Send_2F_Test_case_1_local_10(PARAMETERS,TERMINAL(4),TERMINAL(6));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Send_20_No_20_Reply,3,1,TERMINAL(4),NONE,NONE,ROOT(7));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Dispose,1,0,TERMINAL(4));

result = kSuccess;

FOOTERSINGLECASEWITHNONE(8)
}

enum opTrigger vpx_method_AE_20_Send_2F_TEST_20_Raw_20_Quit_case_1_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_AE_20_Send_2F_TEST_20_Raw_20_Quit_case_1_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_string_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_extconstant(PARAMETERS,typeApplicationBundleID,ROOT(1));

result = vpx_method_AE_20_Descriptor_2F_Coerce_20_AEDesc(PARAMETERS,TERMINAL(1),TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(2));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_AE_20_Send_2F_TEST_20_Raw_20_Quit_case_1_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_AE_20_Send_2F_TEST_20_Raw_20_Quit_case_1_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_integer_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_extconstant(PARAMETERS,typeApplSignature,ROOT(1));

result = vpx_method_AE_20_Descriptor_2F_Coerce_20_AEDesc(PARAMETERS,TERMINAL(1),TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(2));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_AE_20_Send_2F_TEST_20_Raw_20_Quit_case_1_local_7_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_AE_20_Send_2F_TEST_20_Raw_20_Quit_case_1_local_7_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;
FAILONSUCCESS

OUTPUT(0,NONE)
FOOTERWITHNONE(1)
}

enum opTrigger vpx_method_AE_20_Send_2F_TEST_20_Raw_20_Quit_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_AE_20_Send_2F_TEST_20_Raw_20_Quit_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_AE_20_Send_2F_TEST_20_Raw_20_Quit_case_1_local_7_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_AE_20_Send_2F_TEST_20_Raw_20_Quit_case_1_local_7_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_AE_20_Send_2F_TEST_20_Raw_20_Quit_case_1_local_7_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_AE_20_Send_2F_TEST_20_Raw_20_Quit(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex)
{
HEADERWITHNONE(7)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,kAEQuitApplication,ROOT(0));

result = vpx_extconstant(PARAMETERS,kCoreEventClass,ROOT(1));

result = vpx_method_AE_20_Send_2F_New(PARAMETERS,TERMINAL(1),TERMINAL(0),ROOT(2));

result = vpx_constant(PARAMETERS,"\'ttxt\'",ROOT(3));

result = vpx_constant(PARAMETERS,"com.apple.TextEdit",ROOT(4));

result = vpx_method_AE_20_Send_2F_TEST_20_Raw_20_Quit_case_1_local_7(PARAMETERS,TERMINAL(4),ROOT(5));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Create_20_Event,2,0,TERMINAL(2),TERMINAL(5));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Send_20_Wait_20_Reply,3,1,TERMINAL(2),NONE,NONE,ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP_show,1,0,TERMINAL(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Dispose,1,0,TERMINAL(2));

result = kSuccess;

FOOTERSINGLECASEWITHNONE(7)
}

enum opTrigger vpx_method_AE_20_Send_2F7E_AE_20_Idle(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_constant(PARAMETERS,"FALSE",ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERSINGLECASE(5)
}

/* Stop Universals */



Nat4 VPLC_AE_20_Target_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_AE_20_Target_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 200 300 } */
	tempAttribute = attribute_add("Target AEDesc",tempClass,NULL,environment);
/* Stop Attributes */

/* NULL SUPER CLASS */
	return kNOERROR;
}

/* Start Universals: { 379 980 }{ 294 305 } */
enum opTrigger vpx_method_AE_20_Target_2F_New_20_From_20_Identifier_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_AE_20_Target_2F_New_20_From_20_Identifier_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,typeApplicationBundleID,ROOT(1));

result = vpx_method_AE_20_Descriptor_2F_Coerce_20_AEDesc(PARAMETERS,TERMINAL(1),TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(2));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_AE_20_Target_2F_New_20_From_20_Identifier(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_method_AE_20_Target_2F_New_20_From_20_Identifier_case_1_local_2(PARAMETERS,TERMINAL(0),ROOT(1));
FAILONFAILURE

result = vpx_method_AE_20_Target_2F_New_20_From_20_AEDesc(PARAMETERS,TERMINAL(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_AE_20_Target_2F_New_20_From_20_Signature_case_1_local_2_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_AE_20_Target_2F_New_20_From_20_Signature_case_1_local_2_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_string_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_string_2D_to_2D_integer,1,1,TERMINAL(0),ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_AE_20_Target_2F_New_20_From_20_Signature_case_1_local_2_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_AE_20_Target_2F_New_20_From_20_Signature_case_1_local_2_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_integer_3F_,1,0,TERMINAL(0));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(1)
}

enum opTrigger vpx_method_AE_20_Target_2F_New_20_From_20_Signature_case_1_local_2_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_AE_20_Target_2F_New_20_From_20_Signature_case_1_local_2_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_AE_20_Target_2F_New_20_From_20_Signature_case_1_local_2_case_1_local_2_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_AE_20_Target_2F_New_20_From_20_Signature_case_1_local_2_case_1_local_2_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_AE_20_Target_2F_New_20_From_20_Signature_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_AE_20_Target_2F_New_20_From_20_Signature_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_method_AE_20_Target_2F_New_20_From_20_Signature_case_1_local_2_case_1_local_2(PARAMETERS,TERMINAL(0),ROOT(1));
FAILONFAILURE

result = vpx_extconstant(PARAMETERS,typeApplSignature,ROOT(2));

result = vpx_method_AE_20_Descriptor_2F_Coerce_20_AEDesc(PARAMETERS,TERMINAL(2),TERMINAL(1),ROOT(3),ROOT(4));

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(3));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_AE_20_Target_2F_New_20_From_20_Signature(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_method_AE_20_Target_2F_New_20_From_20_Signature_case_1_local_2(PARAMETERS,TERMINAL(0),ROOT(1));
FAILONFAILURE

result = vpx_method_AE_20_Target_2F_New_20_From_20_AEDesc(PARAMETERS,TERMINAL(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_AE_20_Target_2F_New_20_From_20_PSN_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_AE_20_Target_2F_New_20_From_20_PSN_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,typeProcessSerialNumber,ROOT(1));

result = vpx_method_AE_20_Descriptor_2F_Coerce_20_AEDesc(PARAMETERS,TERMINAL(1),TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(2));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_AE_20_Target_2F_New_20_From_20_PSN(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_method_AE_20_Target_2F_New_20_From_20_PSN_case_1_local_2(PARAMETERS,TERMINAL(0),ROOT(1));
FAILONFAILURE

result = vpx_method_AE_20_Target_2F_New_20_From_20_AEDesc(PARAMETERS,TERMINAL(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_AE_20_Target_2F_New_20_From_20_AEDesc(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(2)
INPUT(0,0)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_AE_20_Target,1,1,NONE,ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Target_20_AEDesc,2,0,TERMINAL(1),TERMINAL(0));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASEWITHNONE(2)
}

enum opTrigger vpx_method_AE_20_Target_2F_Create_20_Send_20_Event(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Target_20_AEDesc,1,1,TERMINAL(0),ROOT(3));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
FAILONSUCCESS

result = vpx_method_AE_20_Send_2F_New(PARAMETERS,TERMINAL(1),TERMINAL(2),ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Create_20_Event,2,0,TERMINAL(4),TERMINAL(3));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_AE_20_Target_2F_Dispose_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_AE_20_Target_2F_Dispose_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Target_20_AEDesc,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
TERMINATEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Dispose,1,0,TERMINAL(1));

result = vpx_constant(PARAMETERS,"NULL",ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Target_20_AEDesc,2,0,TERMINAL(0),TERMINAL(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_AE_20_Target_2F_Dispose(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_method_AE_20_Target_2F_Dispose_case_1_local_2(PARAMETERS,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_AE_20_Target_2F_Get_20_Target_20_AEDesc(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Target_20_AEDesc,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_AE_20_Target_2F_Set_20_Target_20_AEDesc(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Target_20_AEDesc,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_AE_20_Target_2F_AE_20_Quit_20_Application_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_AE_20_Target_2F_AE_20_Quit_20_Application_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"FALSE",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Send_20_No_20_Reply,3,1,TERMINAL(0),NONE,NONE,ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERWITHNONE(3)
}

enum opTrigger vpx_method_AE_20_Target_2F_AE_20_Quit_20_Application_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_AE_20_Target_2F_AE_20_Quit_20_Application_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Send_20_Wait_20_Reply,3,1,TERMINAL(0),NONE,NONE,ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERWITHNONE(3)
}

enum opTrigger vpx_method_AE_20_Target_2F_AE_20_Quit_20_Application_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_AE_20_Target_2F_AE_20_Quit_20_Application_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_AE_20_Target_2F_AE_20_Quit_20_Application_case_1_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_AE_20_Target_2F_AE_20_Quit_20_Application_case_1_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_AE_20_Target_2F_AE_20_Quit_20_Application_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_AE_20_Target_2F_AE_20_Quit_20_Application_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,kCoreEventClass,ROOT(2));

result = vpx_extconstant(PARAMETERS,kAEQuitApplication,ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Create_20_Send_20_Event,3,1,TERMINAL(0),TERMINAL(2),TERMINAL(3),ROOT(4));
NEXTCASEONFAILURE

result = vpx_method_AE_20_Target_2F_AE_20_Quit_20_Application_case_1_local_5(PARAMETERS,TERMINAL(4),TERMINAL(1),ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Dispose,1,0,TERMINAL(4));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTER(6)
}

enum opTrigger vpx_method_AE_20_Target_2F_AE_20_Quit_20_Application_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_AE_20_Target_2F_AE_20_Quit_20_Application_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
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

enum opTrigger vpx_method_AE_20_Target_2F_AE_20_Quit_20_Application(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_AE_20_Target_2F_AE_20_Quit_20_Application_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_AE_20_Target_2F_AE_20_Quit_20_Application_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_AE_20_Target_2F_TEST_20_AE_20_Quit_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex);
enum opTrigger vpx_method_AE_20_Target_2F_TEST_20_AE_20_Quit_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex)
{
HEADERWITHNONE(3)
result = kSuccess;

result = vpx_constant(PARAMETERS,"com.apple.TextEdit",ROOT(0));

result = vpx_method_AE_20_Target_2F_New_20_From_20_Identifier(PARAMETERS,TERMINAL(0),ROOT(1));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_AE_20_Quit_20_Application,2,1,TERMINAL(1),NONE,ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Dispose,1,0,TERMINAL(1));

result = vpx_call_primitive(PARAMETERS,VPLP_show,1,0,TERMINAL(2));

result = kSuccess;

FOOTERWITHNONE(3)
}

enum opTrigger vpx_method_AE_20_Target_2F_TEST_20_AE_20_Quit_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex);
enum opTrigger vpx_method_AE_20_Target_2F_TEST_20_AE_20_Quit_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex)
{
HEADER(2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"ttxt",ROOT(0));

result = vpx_method_AE_20_Target_2F_New_20_From_20_Signature(PARAMETERS,TERMINAL(0),ROOT(1));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_AE_20_Quit_20_Application,1,0,TERMINAL(1));
CONTINUEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Dispose,1,0,TERMINAL(1));

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_AE_20_Target_2F_TEST_20_AE_20_Quit(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_AE_20_Target_2F_TEST_20_AE_20_Quit_case_1(environment, &outcome, inputRepeat, contextIndex))
vpx_method_AE_20_Target_2F_TEST_20_AE_20_Quit_case_2(environment, &outcome, inputRepeat, contextIndex);
return outcome;
}

/* Stop Universals */






Nat4	loadClasses_Apple_20_Events(V_Environment environment);
Nat4	loadClasses_Apple_20_Events(V_Environment environment)
{
	V_Class result = NULL;

	result = class_new("Apple Event",environment);
	if(result == NULL) return kERROR;
	VPLC_Apple_20_Event_class_load(result,environment);
	result = class_new("AE Descriptor",environment);
	if(result == NULL) return kERROR;
	VPLC_AE_20_Descriptor_class_load(result,environment);
	result = class_new("Apple Event Callback",environment);
	if(result == NULL) return kERROR;
	VPLC_Apple_20_Event_20_Callback_class_load(result,environment);
	result = class_new("AEParam Specifier",environment);
	if(result == NULL) return kERROR;
	VPLC_AEParam_20_Specifier_class_load(result,environment);
	result = class_new("AE Send",environment);
	if(result == NULL) return kERROR;
	VPLC_AE_20_Send_class_load(result,environment);
	result = class_new("AE Target",environment);
	if(result == NULL) return kERROR;
	VPLC_AE_20_Target_class_load(result,environment);
	return kNOERROR;

}

Nat4	loadUniversals_Apple_20_Events(V_Environment environment);
Nat4	loadUniversals_Apple_20_Events(V_Environment environment)
{
	V_Method result = NULL;

	result = method_new("From AEDesc",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_From_20_AEDesc,NULL);

	result = method_new("AEDesc Copy Data",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_AEDesc_20_Copy_20_Data,NULL);

	result = method_new("To AEDesc",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_To_20_AEDesc,NULL);

	result = method_new("Apple Event/New",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Apple_20_Event_2F_New,NULL);

	result = method_new("Apple Event/Dispose",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Apple_20_Event_2F_Dispose,NULL);

	result = method_new("Apple Event/Get Attribute AEDesc",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Apple_20_Event_2F_Get_20_Attribute_20_AEDesc,NULL);

	result = method_new("Apple Event/Get Attribute",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Apple_20_Event_2F_Get_20_Attribute,NULL);

	result = method_new("Apple Event/Get Parameter AEDesc",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Apple_20_Event_2F_Get_20_Parameter_20_AEDesc,NULL);

	result = method_new("Apple Event/Get Parameter",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Apple_20_Event_2F_Get_20_Parameter,NULL);

	result = method_new("Apple Event/Get Reply Parameter AEDesc",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Apple_20_Event_2F_Get_20_Reply_20_Parameter_20_AEDesc,NULL);

	result = method_new("Apple Event/Get Reply Parameter",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Apple_20_Event_2F_Get_20_Reply_20_Parameter,NULL);

	result = method_new("Apple Event/Get Error",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Apple_20_Event_2F_Get_20_Error,NULL);

	result = method_new("Apple Event/Set Error",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Apple_20_Event_2F_Set_20_Error,NULL);

	result = method_new("Apple Event/Get Direct Object",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Apple_20_Event_2F_Get_20_Direct_20_Object,NULL);

	result = method_new("Apple Event/Set Reply Parameter AEDesc",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Apple_20_Event_2F_Set_20_Reply_20_Parameter_20_AEDesc,NULL);

	result = method_new("Apple Event/Set Reply Parameter",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Apple_20_Event_2F_Set_20_Reply_20_Parameter,NULL);

	result = method_new("Apple Event/Set Parameter AEDesc",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Apple_20_Event_2F_Set_20_Parameter_20_AEDesc,NULL);

	result = method_new("Apple Event/Set Parameter",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Apple_20_Event_2F_Set_20_Parameter,NULL);

	result = method_new("AE Descriptor/From AEDesc Type",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_AE_20_Descriptor_2F_From_20_AEDesc_20_Type,NULL);

	result = method_new("AE Descriptor/Coerce AEDesc",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_AE_20_Descriptor_2F_Coerce_20_AEDesc,NULL);

	result = method_new("AE Descriptor/Create AEDesc",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_AE_20_Descriptor_2F_Create_20_AEDesc,NULL);

	result = method_new("AE Descriptor/New",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_AE_20_Descriptor_2F_New,NULL);

	result = method_new("AE Descriptor/Put Parameter Desc",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_AE_20_Descriptor_2F_Put_20_Parameter_20_Desc,NULL);

	result = method_new("AE Descriptor/Get AEDesc",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_AE_20_Descriptor_2F_Get_20_AEDesc,NULL);

	result = method_new("AE Descriptor/Set AEDesc",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_AE_20_Descriptor_2F_Set_20_AEDesc,NULL);

	result = method_new("AE Descriptor/Get Type",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_AE_20_Descriptor_2F_Get_20_Type,NULL);

	result = method_new("AE Descriptor/Set Type",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_AE_20_Descriptor_2F_Set_20_Type,NULL);

	result = method_new("AE Descriptor/Get Data",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_AE_20_Descriptor_2F_Get_20_Data,NULL);

	result = method_new("AE Descriptor/Set Data",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_AE_20_Descriptor_2F_Set_20_Data,NULL);

	result = method_new("AE Descriptor/Get Key",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_AE_20_Descriptor_2F_Get_20_Key,NULL);

	result = method_new("AE Descriptor/Set Key",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_AE_20_Descriptor_2F_Set_20_Key,NULL);

	result = method_new("AE Descriptor/Dispose",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_AE_20_Descriptor_2F_Dispose,NULL);

	result = method_new("Apple Event Callback/Do AE Callback",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Apple_20_Event_20_Callback_2F_Do_20_AE_20_Callback,NULL);

	result = method_new("Apple Event Callback/Install Callback",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Apple_20_Event_20_Callback_2F_Install_20_Callback,NULL);

	result = method_new("Apple Event Callback/Remove Callback",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Apple_20_Event_20_Callback_2F_Remove_20_Callback,NULL);

	result = method_new("Apple Event Callback/Get Event Class",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Apple_20_Event_20_Callback_2F_Get_20_Event_20_Class,NULL);

	result = method_new("Apple Event Callback/Get Event ID",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Apple_20_Event_20_Callback_2F_Get_20_Event_20_ID,NULL);

	result = method_new("Apple Event Callback/Set Event ID",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Apple_20_Event_20_Callback_2F_Set_20_Event_20_ID,NULL);

	result = method_new("Apple Event Callback/Set Event Class",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Apple_20_Event_20_Callback_2F_Set_20_Event_20_Class,NULL);

	result = method_new("Apple Event Callback/Use Parameters",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Apple_20_Event_20_Callback_2F_Use_20_Parameters,NULL);

	result = method_new("Apple Event Callback/Clean Up Parameters",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Apple_20_Event_20_Callback_2F_Clean_20_Up_20_Parameters,NULL);

	result = method_new("Apple Event Callback/Get Parameter List?",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Apple_20_Event_20_Callback_2F_Get_20_Parameter_20_List_3F_,NULL);

	result = method_new("AEParam Specifier/Process Input",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_AEParam_20_Specifier_2F_Process_20_Input,NULL);

	result = method_new("AEParam Specifier/Process Output",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_AEParam_20_Specifier_2F_Process_20_Output,NULL);

	result = method_new("AE Send/New",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_AE_20_Send_2F_New,NULL);

	result = method_new("AE Send/Send No Reply",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_AE_20_Send_2F_Send_20_No_20_Reply,NULL);

	result = method_new("AE Send/Send Wait Reply",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_AE_20_Send_2F_Send_20_Wait_20_Reply,NULL);

	result = method_new("AE Send/Create Event",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_AE_20_Send_2F_Create_20_Event,NULL);

	result = method_new("AE Send/Dispose",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_AE_20_Send_2F_Dispose,NULL);

	result = method_new("AE Send/Get Class",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_AE_20_Send_2F_Get_20_Class,NULL);

	result = method_new("AE Send/Set Class",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_AE_20_Send_2F_Set_20_Class,NULL);

	result = method_new("AE Send/Get ID",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_AE_20_Send_2F_Get_20_ID,NULL);

	result = method_new("AE Send/Set ID",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_AE_20_Send_2F_Set_20_ID,NULL);

	result = method_new("AE Send/Get Target",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_AE_20_Send_2F_Get_20_Target,NULL);

	result = method_new("AE Send/Set Target",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_AE_20_Send_2F_Set_20_Target,NULL);

	result = method_new("AE Send/Get Return ID",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_AE_20_Send_2F_Get_20_Return_20_ID,NULL);

	result = method_new("AE Send/Set Return ID",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_AE_20_Send_2F_Set_20_Return_20_ID,NULL);

	result = method_new("AE Send/Get Transaction ID",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_AE_20_Send_2F_Get_20_Transaction_20_ID,NULL);

	result = method_new("AE Send/Set Transaction ID",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_AE_20_Send_2F_Set_20_Transaction_20_ID,NULL);

	result = method_new("AE Send/Get Event Parameters",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_AE_20_Send_2F_Get_20_Event_20_Parameters,NULL);

	result = method_new("AE Send/Set Event Parameters",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_AE_20_Send_2F_Set_20_Event_20_Parameters,NULL);

	result = method_new("AE Send/Test",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_AE_20_Send_2F_Test,NULL);

	result = method_new("AE Send/TEST Raw Quit",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_AE_20_Send_2F_TEST_20_Raw_20_Quit,NULL);

	result = method_new("AE Send/~AE Idle",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_AE_20_Send_2F7E_AE_20_Idle,NULL);

	result = method_new("AE Target/New From Identifier",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_AE_20_Target_2F_New_20_From_20_Identifier,NULL);

	result = method_new("AE Target/New From Signature",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_AE_20_Target_2F_New_20_From_20_Signature,NULL);

	result = method_new("AE Target/New From PSN",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_AE_20_Target_2F_New_20_From_20_PSN,NULL);

	result = method_new("AE Target/New From AEDesc",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_AE_20_Target_2F_New_20_From_20_AEDesc,NULL);

	result = method_new("AE Target/Create Send Event",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_AE_20_Target_2F_Create_20_Send_20_Event,NULL);

	result = method_new("AE Target/Dispose",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_AE_20_Target_2F_Dispose,NULL);

	result = method_new("AE Target/Get Target AEDesc",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_AE_20_Target_2F_Get_20_Target_20_AEDesc,NULL);

	result = method_new("AE Target/Set Target AEDesc",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_AE_20_Target_2F_Set_20_Target_20_AEDesc,NULL);

	result = method_new("AE Target/AE Quit Application",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_AE_20_Target_2F_AE_20_Quit_20_Application,NULL);

	result = method_new("AE Target/TEST AE Quit",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_AE_20_Target_2F_TEST_20_AE_20_Quit,NULL);

	return kNOERROR;

}



Nat4	loadPersistents_Apple_20_Events(V_Environment environment);
Nat4	loadPersistents_Apple_20_Events(V_Environment environment)
{
	V_Value tempPersistent = NULL;
	V_Dictionary dictionary = environment->persistentsTable;

	return kNOERROR;

}

Nat4	load_Apple_20_Events(V_Environment environment);
Nat4	load_Apple_20_Events(V_Environment environment)
{

	loadClasses_Apple_20_Events(environment);
	loadUniversals_Apple_20_Events(environment);
	loadPersistents_Apple_20_Events(environment);
	return kNOERROR;

}

