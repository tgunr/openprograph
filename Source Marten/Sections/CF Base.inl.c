/* A VPL Section File */
/*

CF Base.inl.c
Copyright: 2004 Andescotia LLC

*/

#include "MartenInlineProject.h"

enum opTrigger vpx_method_CFSTR(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

PUTPOINTER(__CFString,*,__CFStringMakeConstantString( GETCONSTPOINTER(char,*,TERMINAL(0))),1);
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_To_20_CFStringRef(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,kCFStringEncodingUTF8,ROOT(1));

result = vpx_method_Create_20_CFStringRef(PARAMETERS,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_From_20_CFStringRef_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_From_20_CFStringRef_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,kCFStringEncodingUTF8,ROOT(1));

result = vpx_method_From_20_CFStringRef_20_Encoding(PARAMETERS,TERMINAL(0),TERMINAL(1),ROOT(2));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_From_20_CFStringRef_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_From_20_CFStringRef_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_From_20_CFStringRef(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_From_20_CFStringRef_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_From_20_CFStringRef_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Create_20_CFStringRef(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(2));

PUTPOINTER(__CFString,*,CFStringCreateWithCString( GETCONSTPOINTER(__CFAllocator,*,TERMINAL(2)),GETCONSTPOINTER(char,*,TERMINAL(0)),GETINTEGER(TERMINAL(1))),3);
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_From_20_CFStringRef_20_Encoding_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_From_20_CFStringRef_20_Encoding_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

PUTINTEGER(CFStringGetLength( GETCONSTPOINTER(__CFString,*,TERMINAL(0))),2);
result = kSuccess;

PUTINTEGER(CFStringGetMaximumSizeForEncoding( GETINTEGER(TERMINAL(2)),GETINTEGER(TERMINAL(1))),3);
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP__2B_1,1,1,TERMINAL(3),ROOT(4));

result = vpx_constant(PARAMETERS,"char",ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_make_2D_external,2,1,TERMINAL(5),TERMINAL(4),ROOT(6));

BlockZero( GETPOINTER(0,void,*,ROOT(7),TERMINAL(6)),GETINTEGER(TERMINAL(4)));
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(6))
OUTPUT(1,TERMINAL(4))
FOOTERSINGLECASE(8)
}

enum opTrigger vpx_method_From_20_CFStringRef_20_Encoding_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_From_20_CFStringRef_20_Encoding_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_From_20_CFStringRef_20_Encoding_case_1_local_2(PARAMETERS,TERMINAL(0),TERMINAL(1),ROOT(2),ROOT(3));

PUTINTEGER(CFStringGetCString( GETCONSTPOINTER(__CFString,*,TERMINAL(0)),GETPOINTER(1,char,*,ROOT(5),TERMINAL(2)),GETINTEGER(TERMINAL(3)),GETINTEGER(TERMINAL(1))),4);
result = kSuccess;

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(4));
FAILONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_pointer_2D_to_2D_string,1,1,TERMINAL(5),ROOT(6));

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTER(7)
}

enum opTrigger vpx_method_From_20_CFStringRef_20_Encoding_case_2_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_From_20_CFStringRef_20_Encoding_case_2_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

PUTINTEGER(CFStringGetLength( GETCONSTPOINTER(__CFString,*,TERMINAL(0))),2);
result = kSuccess;

PUTINTEGER(CFStringGetMaximumSizeForEncoding( GETINTEGER(TERMINAL(2)),GETINTEGER(TERMINAL(1))),3);
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP__2B_1,1,1,TERMINAL(3),ROOT(4));

result = vpx_constant(PARAMETERS,"char",ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_make_2D_external,2,1,TERMINAL(5),TERMINAL(4),ROOT(6));

BlockZero( GETPOINTER(0,void,*,ROOT(7),TERMINAL(6)),GETINTEGER(TERMINAL(4)));
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(6))
OUTPUT(1,TERMINAL(4))
FOOTERSINGLECASE(8)
}

enum opTrigger vpx_method_From_20_CFStringRef_20_Encoding_case_2_local_6_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_From_20_CFStringRef_20_Encoding_case_2_local_6_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP__3D_,2,0,TERMINAL(1),TERMINAL(2));
TERMINATEONSUCCESS

result = vpx_constant(PARAMETERS,"1",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_integer,3,3,TERMINAL(0),TERMINAL(1),TERMINAL(3),ROOT(4),ROOT(5),ROOT(6));

result = vpx_match(PARAMETERS,"0",TERMINAL(6));
TERMINATEONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTERSINGLECASE(7)
}

enum opTrigger vpx_method_From_20_CFStringRef_20_Encoding_case_2_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_From_20_CFStringRef_20_Encoding_case_2_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"0",ROOT(2));

REPEATBEGIN
LOOPTERMINALBEGIN(1)
LOOPTERMINAL(0,2,3)
result = vpx_method_From_20_CFStringRef_20_Encoding_case_2_local_6_case_1_local_3(PARAMETERS,TERMINAL(0),LOOP(0),TERMINAL(1),ROOT(3));
REPEATFINISH

result = vpx_call_primitive(PARAMETERS,VPLP_integer_3F_,1,0,TERMINAL(3));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_From_20_CFStringRef_20_Encoding_case_2_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_From_20_CFStringRef_20_Encoding_case_2_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
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

enum opTrigger vpx_method_From_20_CFStringRef_20_Encoding_case_2_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_From_20_CFStringRef_20_Encoding_case_2_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_From_20_CFStringRef_20_Encoding_case_2_local_6_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_From_20_CFStringRef_20_Encoding_case_2_local_6_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_From_20_CFStringRef_20_Encoding_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_From_20_CFStringRef_20_Encoding_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(11)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_From_20_CFStringRef_20_Encoding_case_2_local_2(PARAMETERS,TERMINAL(0),TERMINAL(1),ROOT(2),ROOT(3));

PUTINTEGER(CFStringGetCString( GETCONSTPOINTER(__CFString,*,TERMINAL(0)),GETPOINTER(1,char,*,ROOT(5),TERMINAL(2)),GETINTEGER(TERMINAL(3)),GETINTEGER(TERMINAL(1))),4);
result = kSuccess;

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(4));
FAILONFAILURE

result = vpx_constant(PARAMETERS,"0",ROOT(6));

result = vpx_method_From_20_CFStringRef_20_Encoding_case_2_local_6(PARAMETERS,TERMINAL(5),TERMINAL(3),ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_text,3,3,TERMINAL(5),TERMINAL(6),TERMINAL(7),ROOT(8),ROOT(9),ROOT(10));

result = kSuccess;

OUTPUT(0,TERMINAL(10))
FOOTER(11)
}

enum opTrigger vpx_method_From_20_CFStringRef_20_Encoding(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_From_20_CFStringRef_20_Encoding_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_From_20_CFStringRef_20_Encoding_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_To_20_CFString_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_To_20_CFString_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_To_20_CFString_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_To_20_CFString_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"CF String",ROOT(1));

result = vpx_method_To_20_CFString_case_1_local_4(PARAMETERS,TERMINAL(0),TERMINAL(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Retain,1,0,TERMINAL(0));

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(2)
}

enum opTrigger vpx_method_To_20_CFString_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_To_20_CFString_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_method__22_Check_22_(PARAMETERS,TERMINAL(0),ROOT(1));

result = vpx_method_To_20_CFStringRef(PARAMETERS,TERMINAL(1),ROOT(2));

result = vpx_method_CF_20_String_2F_New(PARAMETERS,TERMINAL(2),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_To_20_CFString(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_To_20_CFString_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_To_20_CFString_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_New_20_CFRange(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"CFRange\"",ROOT(2));

result = vpx_constant(PARAMETERS,"8",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_make_2D_external,2,1,TERMINAL(2),TERMINAL(3),ROOT(4));

result = vpx_extset(PARAMETERS,"location",2,1,TERMINAL(4),TERMINAL(0),ROOT(5));

result = vpx_extset(PARAMETERS,"length",2,1,TERMINAL(5),TERMINAL(1),ROOT(6));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERSINGLECASE(7)
}

enum opTrigger vpx_method_From_20_CFRange(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_extget(PARAMETERS,"location",1,2,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_extget(PARAMETERS,"length",1,2,TERMINAL(0),ROOT(3),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
OUTPUT(1,TERMINAL(4))
FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Get_20_CF_20_Constant(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"com.apple.CoreFoundation",ROOT(2));

result = vpx_method_Get_20_Framework_20_Constant(PARAMETERS,TERMINAL(0),TERMINAL(2),TERMINAL(1),ROOT(3));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Get_20_Framework_20_Constant_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Get_20_Framework_20_Constant_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"com.apple.Carbon",ROOT(1));

result = vpx_method_Replace_20_NULL(PARAMETERS,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Get_20_Framework_20_Constant_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Get_20_Framework_20_Constant_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_string_3F_,1,0,TERMINAL(1));
TERMINATEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_set_2D_external_2D_type,2,0,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Get_20_Framework_20_Constant_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Get_20_Framework_20_Constant_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADERWITHNONE(6)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_method_Get_20_Framework_20_Constant_case_1_local_2(PARAMETERS,TERMINAL(1),ROOT(3));

result = vpx_instantiate(PARAMETERS,kVPXClass_CF_20_Bundle,1,1,NONE,ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Bundle_20_With_20_Identifier,2,0,TERMINAL(4),TERMINAL(3));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Data_20_Pointer_20_For_20_Name,2,1,TERMINAL(4),TERMINAL(0),ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Dispose,1,0,TERMINAL(4));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(5));
NEXTCASEONSUCCESS

result = vpx_method_Get_20_Framework_20_Constant_case_1_local_8(PARAMETERS,TERMINAL(5),TERMINAL(2));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTERWITHNONE(6)
}

enum opTrigger vpx_method_Get_20_Framework_20_Constant_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Get_20_Framework_20_Constant_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_to_2D_external_2D_constant,1,1,TERMINAL(0),ROOT(3));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
NEXTCASEONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_Get_20_Framework_20_Constant_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Get_20_Framework_20_Constant_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADERWITHNONE(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"4",ROOT(3));

result = vpx_method_Debug_20_Result(PARAMETERS,TERMINAL(0),TERMINAL(1),TERMINAL(2),TERMINAL(3));

result = kSuccess;
FAILONSUCCESS

OUTPUT(0,NONE)
FOOTERWITHNONE(4)
}

enum opTrigger vpx_method_Get_20_Framework_20_Constant(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Get_20_Framework_20_Constant_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
if(vpx_method_Get_20_Framework_20_Constant_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
vpx_method_Get_20_Framework_20_Constant_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0);
return outcome;
}

enum opTrigger vpx_method_Get_20_Framework_20_Structure_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Get_20_Framework_20_Structure_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"com.apple.Carbon",ROOT(1));

result = vpx_method_Replace_20_NULL(PARAMETERS,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Get_20_Framework_20_Structure_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Get_20_Framework_20_Structure_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_string_3F_,1,0,TERMINAL(1));
TERMINATEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_set_2D_external_2D_type,2,0,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Get_20_Framework_20_Structure_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Get_20_Framework_20_Structure_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADERWITHNONE(6)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_method_Get_20_Framework_20_Structure_case_1_local_2(PARAMETERS,TERMINAL(1),ROOT(3));

result = vpx_instantiate(PARAMETERS,kVPXClass_CF_20_Bundle,1,1,NONE,ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Bundle_20_With_20_Identifier,2,0,TERMINAL(4),TERMINAL(3));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Structure_20_Pointer_20_For_20_Name,2,1,TERMINAL(4),TERMINAL(0),ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Dispose,1,0,TERMINAL(4));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(5));
NEXTCASEONSUCCESS

result = vpx_method_Get_20_Framework_20_Structure_case_1_local_8(PARAMETERS,TERMINAL(5),TERMINAL(2));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTERWITHNONE(6)
}

enum opTrigger vpx_method_Get_20_Framework_20_Structure_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Get_20_Framework_20_Structure_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADERWITHNONE(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"4",ROOT(3));

result = vpx_method_Debug_20_Result(PARAMETERS,TERMINAL(0),TERMINAL(1),TERMINAL(2),TERMINAL(3));

result = kSuccess;
FAILONSUCCESS

OUTPUT(0,NONE)
FOOTERWITHNONE(4)
}

enum opTrigger vpx_method_Get_20_Framework_20_Structure(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Get_20_Framework_20_Structure_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
vpx_method_Get_20_Framework_20_Structure_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0);
return outcome;
}

enum opTrigger vpx_method_Copy_20_Localized_20_String_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Copy_20_Localized_20_String_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

PUTPOINTER(__CFBundle,*,CFBundleGetMainBundle(),1);
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(2));

result = vpx_method_To_20_CFStringRef(PARAMETERS,TERMINAL(0),ROOT(3));

PUTPOINTER(__CFString,*,CFBundleCopyLocalizedString( GETPOINTER(0,__CFBundle,*,ROOT(5),TERMINAL(1)),GETCONSTPOINTER(__CFString,*,TERMINAL(3)),GETCONSTPOINTER(__CFString,*,TERMINAL(3)),GETCONSTPOINTER(__CFString,*,TERMINAL(2))),4);
result = kSuccess;

CFRelease( GETCONSTPOINTER(void,*,TERMINAL(3)));
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(4));
FAILONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Copy_20_Localized_20_String(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Copy_20_Localized_20_String_case_1_local_2(PARAMETERS,TERMINAL(0),ROOT(1));
FAILONFAILURE

result = vpx_method_From_20_CFStringRef(PARAMETERS,TERMINAL(1),ROOT(2));

CFRelease( GETCONSTPOINTER(void,*,TERMINAL(1)));
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
FAILONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_CFPreferences_20_Synchronize_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CFPreferences_20_Synchronize_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"kCFPreferencesCurrentApplication",ROOT(1));

result = vpx_method_Replace_20_NULL(PARAMETERS,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_CFPreferences_20_Synchronize(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_method_CFPreferences_20_Synchronize_case_1_local_2(PARAMETERS,TERMINAL(0),ROOT(1));

result = vpx_constant(PARAMETERS,"__CFString",ROOT(2));

result = vpx_method_Get_20_CF_20_Constant(PARAMETERS,TERMINAL(1),TERMINAL(2),ROOT(3));
FAILONFAILURE

PUTINTEGER(CFPreferencesAppSynchronize( GETCONSTPOINTER(__CFString,*,TERMINAL(3))),4);
result = kSuccess;

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(4));
FAILONFAILURE

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_CFPrefs_20_Set_20_App_20_Value_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0);
enum opTrigger vpx_method_CFPrefs_20_Set_20_App_20_Value_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0)
{
HEADER(3)
result = kSuccess;

result = vpx_constant(PARAMETERS,"__CFString",ROOT(0));

result = vpx_constant(PARAMETERS,"kCFPreferencesCurrentApplication",ROOT(1));

result = vpx_method_Get_20_CF_20_Constant(PARAMETERS,TERMINAL(1),TERMINAL(0),ROOT(2));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_CFPrefs_20_Set_20_App_20_Value_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_CFPrefs_20_Set_20_App_20_Value_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_method_To_20_CFType(PARAMETERS,TERMINAL(0),ROOT(1));
FAILONFAILURE

result = vpx_constant(PARAMETERS,"TRUE",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
OUTPUT(1,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_CFPrefs_20_Set_20_App_20_Value_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_CFPrefs_20_Set_20_App_20_Value_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_boolean_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_method_To_20_CFBooleanRef(PARAMETERS,TERMINAL(0),ROOT(1));
FAILONFAILURE

result = vpx_constant(PARAMETERS,"FALSE",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
OUTPUT(1,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_CFPrefs_20_Set_20_App_20_Value_case_1_local_3_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_CFPrefs_20_Set_20_App_20_Value_case_1_local_3_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_string_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_method_To_20_CFStringRef(PARAMETERS,TERMINAL(0),ROOT(1));

result = vpx_constant(PARAMETERS,"TRUE",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
OUTPUT(1,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_CFPrefs_20_Set_20_App_20_Value_case_1_local_3_case_4_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_CFPrefs_20_Set_20_App_20_Value_case_1_local_3_case_4_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_integer_3F_,1,0,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_extconstant(PARAMETERS,kCFNumberLongType,ROOT(2));

result = vpx_constant(PARAMETERS,"0",ROOT(3));

result = vpx_constant(PARAMETERS,"4",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_put_2D_integer,4,2,TERMINAL(0),TERMINAL(3),TERMINAL(4),TERMINAL(1),ROOT(5),ROOT(6));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(7)
}

enum opTrigger vpx_method_CFPrefs_20_Set_20_App_20_Value_case_1_local_3_case_4_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_CFPrefs_20_Set_20_App_20_Value_case_1_local_3_case_4_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_real_3F_,1,0,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_extconstant(PARAMETERS,kCFNumberFloatType,ROOT(2));

result = vpx_constant(PARAMETERS,"0",ROOT(3));

result = vpx_constant(PARAMETERS,"4",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_put_2D_real,4,2,TERMINAL(0),TERMINAL(3),TERMINAL(4),TERMINAL(1),ROOT(5),ROOT(6));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(7)
}

enum opTrigger vpx_method_CFPrefs_20_Set_20_App_20_Value_case_1_local_3_case_4_local_7_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_CFPrefs_20_Set_20_App_20_Value_case_1_local_3_case_4_local_7_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
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

enum opTrigger vpx_method_CFPrefs_20_Set_20_App_20_Value_case_1_local_3_case_4_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_CFPrefs_20_Set_20_App_20_Value_case_1_local_3_case_4_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CFPrefs_20_Set_20_App_20_Value_case_1_local_3_case_4_local_7_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
if(vpx_method_CFPrefs_20_Set_20_App_20_Value_case_1_local_3_case_4_local_7_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_CFPrefs_20_Set_20_App_20_Value_case_1_local_3_case_4_local_7_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_CFPrefs_20_Set_20_App_20_Value_case_1_local_3_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_CFPrefs_20_Set_20_App_20_Value_case_1_local_3_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(8)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"TRUE",ROOT(1));

result = vpx_constant(PARAMETERS,"NULL",ROOT(2));

result = vpx_constant(PARAMETERS,"void",ROOT(3));

result = vpx_constant(PARAMETERS,"4",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_make_2D_external,2,1,TERMINAL(3),TERMINAL(4),ROOT(5));

result = vpx_method_CFPrefs_20_Set_20_App_20_Value_case_1_local_3_case_4_local_7(PARAMETERS,TERMINAL(5),TERMINAL(0),ROOT(6));
NEXTCASEONFAILURE

PUTPOINTER(__CFNumber,*,CFNumberCreate( GETCONSTPOINTER(__CFAllocator,*,TERMINAL(2)),GETINTEGER(TERMINAL(6)),GETCONSTPOINTER(void,*,TERMINAL(5))),7);
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(7))
OUTPUT(1,TERMINAL(1))
FOOTER(8)
}

enum opTrigger vpx_method_CFPrefs_20_Set_20_App_20_Value_case_1_local_3_case_5(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_CFPrefs_20_Set_20_App_20_Value_case_1_local_3_case_5(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CF_20_Reference,1,1,TERMINAL(0),ROOT(1));

result = vpx_constant(PARAMETERS,"FALSE",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
OUTPUT(1,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_CFPrefs_20_Set_20_App_20_Value_case_1_local_3_case_6_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_CFPrefs_20_Set_20_App_20_Value_case_1_local_3_case_6_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(0));
TERMINATEONSUCCESS

result = vpx_match(PARAMETERS,"NONE",TERMINAL(0));
TERMINATEONSUCCESS

result = kSuccess;
FAILONSUCCESS

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_CFPrefs_20_Set_20_App_20_Value_case_1_local_3_case_6(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_CFPrefs_20_Set_20_App_20_Value_case_1_local_3_case_6(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_method_CFPrefs_20_Set_20_App_20_Value_case_1_local_3_case_6_local_2(PARAMETERS,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = vpx_constant(PARAMETERS,"FALSE",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
OUTPUT(1,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_CFPrefs_20_Set_20_App_20_Value_case_1_local_3_case_7(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_CFPrefs_20_Set_20_App_20_Value_case_1_local_3_case_7(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
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

enum opTrigger vpx_method_CFPrefs_20_Set_20_App_20_Value_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_CFPrefs_20_Set_20_App_20_Value_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CFPrefs_20_Set_20_App_20_Value_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1))
if(vpx_method_CFPrefs_20_Set_20_App_20_Value_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1))
if(vpx_method_CFPrefs_20_Set_20_App_20_Value_case_1_local_3_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1))
if(vpx_method_CFPrefs_20_Set_20_App_20_Value_case_1_local_3_case_4(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1))
if(vpx_method_CFPrefs_20_Set_20_App_20_Value_case_1_local_3_case_5(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1))
if(vpx_method_CFPrefs_20_Set_20_App_20_Value_case_1_local_3_case_6(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1))
vpx_method_CFPrefs_20_Set_20_App_20_Value_case_1_local_3_case_7(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1);
return outcome;
}

enum opTrigger vpx_method_CFPrefs_20_Set_20_App_20_Value_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_CFPrefs_20_Set_20_App_20_Value_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(1));
TERMINATEONFAILURE

result = vpx_match(PARAMETERS,"NULL",TERMINAL(0));
TERMINATEONSUCCESS

CFRelease( GETCONSTPOINTER(void,*,TERMINAL(0)));
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_CFPrefs_20_Set_20_App_20_Value(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_CFPrefs_20_Set_20_App_20_Value_case_1_local_2(PARAMETERS,ROOT(2));
FAILONFAILURE

result = vpx_method_CFPrefs_20_Set_20_App_20_Value_case_1_local_3(PARAMETERS,TERMINAL(1),ROOT(3),ROOT(4));
FAILONFAILURE

result = vpx_method_To_20_CFStringRef(PARAMETERS,TERMINAL(0),ROOT(5));

CFPreferencesSetAppValue( GETCONSTPOINTER(__CFString,*,TERMINAL(5)),GETCONSTPOINTER(void,*,TERMINAL(3)),GETCONSTPOINTER(__CFString,*,TERMINAL(2)));
result = kSuccess;

CFRelease( GETCONSTPOINTER(void,*,TERMINAL(5)));
result = kSuccess;

result = vpx_method_CFPrefs_20_Set_20_App_20_Value_case_1_local_7(PARAMETERS,TERMINAL(3),TERMINAL(4));

result = kSuccess;

FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_CFPrefs_20_Get_20_App_20_Value_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0);
enum opTrigger vpx_method_CFPrefs_20_Get_20_App_20_Value_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0)
{
HEADER(3)
result = kSuccess;

result = vpx_constant(PARAMETERS,"__CFString",ROOT(0));

result = vpx_constant(PARAMETERS,"kCFPreferencesCurrentApplication",ROOT(1));

result = vpx_method_Get_20_CF_20_Constant(PARAMETERS,TERMINAL(1),TERMINAL(0),ROOT(2));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_CFPrefs_20_Get_20_App_20_Value_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CFPrefs_20_Get_20_App_20_Value_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(0));
FAILONSUCCESS

result = vpx_method_From_20_CFType(PARAMETERS,TERMINAL(0),ROOT(1));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_CFPrefs_20_Get_20_App_20_Value(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_method_CFPrefs_20_Get_20_App_20_Value_case_1_local_2(PARAMETERS,ROOT(1));
FAILONFAILURE

result = vpx_method_To_20_CFStringRef(PARAMETERS,TERMINAL(0),ROOT(2));

PUTPOINTER(void,*,CFPreferencesCopyAppValue( GETCONSTPOINTER(__CFString,*,TERMINAL(2)),GETCONSTPOINTER(__CFString,*,TERMINAL(1))),3);
result = kSuccess;

CFRelease( GETCONSTPOINTER(void,*,TERMINAL(2)));
result = kSuccess;

result = vpx_method_CFPrefs_20_Get_20_App_20_Value_case_1_local_6(PARAMETERS,TERMINAL(3),ROOT(4));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_To_20_MacRoman_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_To_20_MacRoman_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,kCFStringEncodingMacRoman,ROOT(1));

result = vpx_method_From_20_CFStringRef_20_Encoding(PARAMETERS,TERMINAL(0),TERMINAL(1),ROOT(2));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_To_20_MacRoman_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_To_20_MacRoman_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_To_20_MacRoman_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_To_20_MacRoman_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_To_20_MacRoman_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_To_20_MacRoman_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_To_20_MacRoman(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_method_To_20_CFStringRef(PARAMETERS,TERMINAL(0),ROOT(1));

result = vpx_method_To_20_MacRoman_case_1_local_3(PARAMETERS,TERMINAL(1),ROOT(2));

CFRelease( GETCONSTPOINTER(void,*,TERMINAL(1)));
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_From_20_MacRoman_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_From_20_MacRoman_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,kCFStringEncodingUTF8,ROOT(1));

result = vpx_method_From_20_CFStringRef_20_Encoding(PARAMETERS,TERMINAL(0),TERMINAL(1),ROOT(2));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_From_20_MacRoman_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_From_20_MacRoman_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_From_20_MacRoman_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_From_20_MacRoman_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_From_20_MacRoman_case_1_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_From_20_MacRoman_case_1_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_From_20_MacRoman_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_From_20_MacRoman_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,kCFStringEncodingMacRoman,ROOT(1));

result = vpx_method_Create_20_CFStringRef(PARAMETERS,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
NEXTCASEONSUCCESS

result = vpx_method_From_20_MacRoman_case_1_local_5(PARAMETERS,TERMINAL(2),ROOT(3));

CFRelease( GETCONSTPOINTER(void,*,TERMINAL(2)));
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_From_20_MacRoman_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_From_20_MacRoman_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_From_20_MacRoman(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_From_20_MacRoman_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_From_20_MacRoman_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_To_20_CFBooleanRef(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Coerce_20_Boolean(PARAMETERS,TERMINAL(0),ROOT(1));

result = vpx_constant(PARAMETERS,"kCFBooleanTrue",ROOT(2));

result = vpx_constant(PARAMETERS,"kCFBooleanFalse",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_choose,3,1,TERMINAL(1),TERMINAL(2),TERMINAL(3),ROOT(4));

result = vpx_constant(PARAMETERS,"__CFBoolean",ROOT(5));

result = vpx_method_Get_20_CF_20_Constant(PARAMETERS,TERMINAL(4),TERMINAL(5),ROOT(6));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTERSINGLECASE(7)
}

enum opTrigger vpx_method_From_20_CFBooleanRef_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_From_20_CFBooleanRef_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

PUTINTEGER(CFGetTypeID( GETCONSTPOINTER(void,*,TERMINAL(0))),1);
result = kSuccess;

PUTINTEGER(CFBooleanGetTypeID(),2);
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP__3D_,2,0,TERMINAL(2),TERMINAL(1));
FAILONFAILURE

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_From_20_CFBooleanRef_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_From_20_CFBooleanRef_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_external_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_method_From_20_CFBooleanRef_case_1_local_3(PARAMETERS,TERMINAL(0));
NEXTCASEONFAILURE

PUTINTEGER(CFBooleanGetValue( GETCONSTPOINTER(__CFBoolean,*,TERMINAL(0))),1);
result = kSuccess;

result = vpx_method_Integer_20_To_20_Boolean(PARAMETERS,TERMINAL(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_From_20_CFBooleanRef_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_From_20_CFBooleanRef_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Coerce_20_Boolean(PARAMETERS,TERMINAL(0),ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_From_20_CFBooleanRef(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_From_20_CFBooleanRef_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_From_20_CFBooleanRef_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_TEST_20_CFNumber(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex)
{
HEADERWITHNONE(4)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_CF_20_Number,1,1,NONE,ROOT(0));

result = vpx_extconstant(PARAMETERS,kCFNumberFloatType,ROOT(1));

result = vpx_constant(PARAMETERS,"22.0",ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Create,3,0,TERMINAL(0),TERMINAL(1),TERMINAL(2));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Value,1,1,TERMINAL(0),ROOT(3));
TERMINATEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_show,1,0,TERMINAL(3));

result = kSuccess;

FOOTERSINGLECASEWITHNONE(4)
}

enum opTrigger vpx_method_TEST_20_CFString_20_1(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex)
{
HEADERWITHNONE(3)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_CF_20_String,1,1,NONE,ROOT(0));

result = vpx_constant(PARAMETERS,"Jack",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Create_20_With_20_String,3,0,TERMINAL(0),TERMINAL(1),NONE);

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_String,1,1,TERMINAL(0),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_show,1,0,TERMINAL(2));

result = kSuccess;

FOOTERSINGLECASEWITHNONE(3)
}

enum opTrigger vpx_method_TEST_20_CFString_20_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex)
{
HEADERWITHNONE(4)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_CF_20_String,1,1,NONE,ROOT(0));

result = vpx_constant(PARAMETERS,"\"1.0\"",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Create_20_With_20_String,2,0,TERMINAL(0),TERMINAL(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Double_20_Value,1,1,TERMINAL(0),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_show,2,0,TERMINAL(3),TERMINAL(2));

result = kSuccess;

FOOTERSINGLECASEWITHNONE(4)
}

enum opTrigger vpx_method_TEST_20_CFString_20_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex)
{
HEADERWITHNONE(4)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_CF_20_String,1,1,NONE,ROOT(0));

result = vpx_constant(PARAMETERS,"\"1\"",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Create_20_With_20_String,2,0,TERMINAL(0),TERMINAL(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Integer_20_Value,1,1,TERMINAL(0),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_show,2,0,TERMINAL(3),TERMINAL(2));

result = kSuccess;

FOOTERSINGLECASEWITHNONE(4)
}

enum opTrigger vpx_method_TEST_20_CFString_20_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex)
{
HEADERWITHNONE(3)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_CF_20_String,1,1,NONE,ROOT(0));

result = vpx_constant(PARAMETERS,"Jack",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Create_20_With_20_String,2,0,TERMINAL(0),TERMINAL(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Uppercase,2,0,TERMINAL(0),NONE);

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_String,1,1,TERMINAL(0),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_show,1,0,TERMINAL(2));

result = kSuccess;

FOOTERSINGLECASEWITHNONE(3)
}

enum opTrigger vpx_method_TEST_20_CFURL_20_1_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0);
enum opTrigger vpx_method_TEST_20_CFURL_20_1_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0)
{
HEADER(3)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Go to URL:",ROOT(0));

result = vpx_constant(PARAMETERS,"http://www.andescotia.com/",ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_ask,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
FAILONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_TEST_20_CFURL_20_1(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex)
{
HEADERWITHNONE(4)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_CF_20_URL,1,1,NONE,ROOT(0));

result = vpx_constant(PARAMETERS,"http://developer.apple.com/documentation/Carbon/Reference/QuickDraw_Manager/qdref_main/function_group_16.html#//apple_ref/c/func/CloseRgn",ROOT(1));

result = vpx_method_TEST_20_CFURL_20_1_case_1_local_4(PARAMETERS,ROOT(2));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Create_20_With_20_String,3,0,TERMINAL(0),TERMINAL(2),NONE);

result = vpx_call_data_method(PARAMETERS,kVPXMethod_LS_20_Open_20_URL,1,1,TERMINAL(0),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Show,1,0,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASEWITHNONE(4)
}

enum opTrigger vpx_method_TEST_20_CFURL_20_2_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0);
enum opTrigger vpx_method_TEST_20_CFURL_20_2_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0)
{
HEADER(3)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Search Apple.com",ROOT(0));

result = vpx_constant(PARAMETERS,"HIObjectCreate",ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_ask,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
FAILONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_TEST_20_CFURL_20_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex)
{
HEADERWITHNONE(6)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_CF_20_URL,1,1,NONE,ROOT(0));

result = vpx_constant(PARAMETERS,"http://developer.apple.com/cgi-bin/search.pl?q=",ROOT(1));

result = vpx_constant(PARAMETERS,"&num=10&ie=utf8&oe=utf8&lr=lang_en&simp=1",ROOT(2));

result = vpx_method_TEST_20_CFURL_20_2_case_1_local_5(PARAMETERS,ROOT(3));
TERMINATEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,3,1,TERMINAL(1),TERMINAL(3),TERMINAL(2),ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Create_20_With_20_String,3,0,TERMINAL(0),TERMINAL(4),NONE);

result = vpx_call_data_method(PARAMETERS,kVPXMethod_LS_20_Open_20_URL,1,1,TERMINAL(0),ROOT(5));

result = kSuccess;

FOOTERSINGLECASEWITHNONE(6)
}

enum opTrigger vpx_method_TEST_20_CFData_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_TEST_20_CFData_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Jack",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Create_20_With_20_Object,2,0,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_TEST_20_CFData(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex)
{
HEADERWITHNONE(2)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_CF_20_Data,1,1,NONE,ROOT(0));

result = vpx_method_TEST_20_CFData_case_1_local_3(PARAMETERS,TERMINAL(0));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Object,1,1,TERMINAL(0),ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_show,1,0,TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASEWITHNONE(2)
}

enum opTrigger vpx_method_TEST_20_Display_20_Alert(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex)
{
HEADER(7)
result = kSuccess;

result = vpx_constant(PARAMETERS,"7",ROOT(0));

result = vpx_extconstant(PARAMETERS,kCFUserNotificationPlainAlertLevel,ROOT(1));

result = vpx_constant(PARAMETERS,"NULL",ROOT(2));

result = vpx_constant(PARAMETERS,"Hello World!\n\nThis is a test to see Just what can be entered.\n\nAnd how big the window will become.  I mean can I streatch or can I streatch.",ROOT(3));

result = vpx_method_To_20_CFStringRef(PARAMETERS,TERMINAL(3),ROOT(4));

PUTINTEGER(CFUserNotificationDisplayAlert( GETREAL(TERMINAL(0)),GETINTEGER(TERMINAL(1)),GETCONSTPOINTER(__CFURL,*,TERMINAL(2)),GETCONSTPOINTER(__CFURL,*,TERMINAL(2)),GETCONSTPOINTER(__CFURL,*,TERMINAL(2)),GETCONSTPOINTER(__CFString,*,TERMINAL(4)),GETCONSTPOINTER(__CFString,*,TERMINAL(2)),GETCONSTPOINTER(__CFString,*,TERMINAL(2)),GETCONSTPOINTER(__CFString,*,TERMINAL(2)),GETCONSTPOINTER(__CFString,*,TERMINAL(2)),GETPOINTER(4,unsigned long,*,ROOT(6),TERMINAL(2))),5);
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(7)
}

enum opTrigger vpx_method_TEST_20_Display_20_Notice(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex)
{
HEADER(6)
result = kSuccess;

result = vpx_constant(PARAMETERS,"40.0",ROOT(0));

result = vpx_extconstant(PARAMETERS,kCFUserNotificationNoteAlertLevel,ROOT(1));

result = vpx_constant(PARAMETERS,"NULL",ROOT(2));

result = vpx_constant(PARAMETERS,"Hello World!",ROOT(3));

result = vpx_method_To_20_CFStringRef(PARAMETERS,TERMINAL(3),ROOT(4));

PUTINTEGER(CFUserNotificationDisplayNotice( GETREAL(TERMINAL(0)),GETINTEGER(TERMINAL(1)),GETCONSTPOINTER(__CFURL,*,TERMINAL(2)),GETCONSTPOINTER(__CFURL,*,TERMINAL(2)),GETCONSTPOINTER(__CFURL,*,TERMINAL(2)),GETCONSTPOINTER(__CFString,*,TERMINAL(4)),GETCONSTPOINTER(__CFString,*,TERMINAL(2)),GETCONSTPOINTER(__CFString,*,TERMINAL(2))),5);
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_TEST_20_CFConstant_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_TEST_20_CFConstant_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"kCFPreferencesCurrentApplication",ROOT(1));

result = vpx_method_Replace_20_NULL(PARAMETERS,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_TEST_20_CFConstant_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex);
enum opTrigger vpx_method_TEST_20_CFConstant_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex)
{
HEADERWITHNONE(3)
result = kSuccess;

result = vpx_constant(PARAMETERS,"kCFNull",ROOT(0));

result = vpx_method_TEST_20_CFConstant_case_1_local_3(PARAMETERS,TERMINAL(0),ROOT(1));

result = vpx_method_Get_20_CF_20_Constant(PARAMETERS,TERMINAL(1),NONE,ROOT(2));
TERMINATEONFAILURE

CFShow( GETCONSTPOINTER(void,*,TERMINAL(2)));
result = kSuccess;

result = kSuccess;

FOOTERWITHNONE(3)
}

enum opTrigger vpx_method_TEST_20_CFConstant_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex);
enum opTrigger vpx_method_TEST_20_CFConstant_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex)
{
HEADERWITHNONE(1)
result = kSuccess;

result = vpx_method_To_20_CFBooleanRef(PARAMETERS,NONE,ROOT(0));

CFShow( GETCONSTPOINTER(void,*,TERMINAL(0)));
result = kSuccess;

result = kSuccess;

FOOTERWITHNONE(1)
}

enum opTrigger vpx_method_TEST_20_CFConstant(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_TEST_20_CFConstant_case_1(environment, &outcome, inputRepeat, contextIndex))
vpx_method_TEST_20_CFConstant_case_2(environment, &outcome, inputRepeat, contextIndex);
return outcome;
}

enum opTrigger vpx_method_TEST_20_CFPref_20_Write_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex);
enum opTrigger vpx_method_TEST_20_CFPref_20_Write_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex)
{
HEADER(2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Test Key",ROOT(0));

result = vpx_constant(PARAMETERS,"TRUE",ROOT(1));

result = vpx_method_CFPrefs_20_Set_20_App_20_Value(PARAMETERS,TERMINAL(0),TERMINAL(1));
NEXTCASEONFAILURE

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_TEST_20_CFPref_20_Write_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex);
enum opTrigger vpx_method_TEST_20_CFPref_20_Write_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex)
{
HEADER(1)
result = kSuccess;

result = vpx_method_Beep(PARAMETERS);

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_TEST_20_CFPref_20_Write(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_TEST_20_CFPref_20_Write_case_1(environment, &outcome, inputRepeat, contextIndex))
vpx_method_TEST_20_CFPref_20_Write_case_2(environment, &outcome, inputRepeat, contextIndex);
return outcome;
}

enum opTrigger vpx_method_TEST_20_CFPref_20_Read_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex);
enum opTrigger vpx_method_TEST_20_CFPref_20_Read_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex)
{
HEADER(3)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Test Key",ROOT(0));

result = vpx_method_CFPrefs_20_Get_20_App_20_Value(PARAMETERS,TERMINAL(0),ROOT(1));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,":",ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_show,3,0,TERMINAL(0),TERMINAL(2),TERMINAL(1));

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_TEST_20_CFPref_20_Read_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex);
enum opTrigger vpx_method_TEST_20_CFPref_20_Read_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex)
{
HEADER(1)
result = kSuccess;

result = vpx_method_Beep(PARAMETERS);

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_TEST_20_CFPref_20_Read(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_TEST_20_CFPref_20_Read_case_1(environment, &outcome, inputRepeat, contextIndex))
vpx_method_TEST_20_CFPref_20_Read_case_2(environment, &outcome, inputRepeat, contextIndex);
return outcome;
}

enum opTrigger vpx_method_TEST_20_CFPref_20_Sync_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex);
enum opTrigger vpx_method_TEST_20_CFPref_20_Sync_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex)
{
HEADERWITHNONE(1)
result = kSuccess;

result = vpx_method_CFPreferences_20_Synchronize(PARAMETERS,NONE);
NEXTCASEONFAILURE

result = kSuccess;

FOOTERWITHNONE(1)
}

enum opTrigger vpx_method_TEST_20_CFPref_20_Sync_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex);
enum opTrigger vpx_method_TEST_20_CFPref_20_Sync_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex)
{
HEADER(1)
result = kSuccess;

result = vpx_method_Beep(PARAMETERS);

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_TEST_20_CFPref_20_Sync(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_TEST_20_CFPref_20_Sync_case_1(environment, &outcome, inputRepeat, contextIndex))
vpx_method_TEST_20_CFPref_20_Sync_case_2(environment, &outcome, inputRepeat, contextIndex);
return outcome;
}

enum opTrigger vpx_method_To_20_CFType_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0);
enum opTrigger vpx_method_To_20_CFType_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0)
{
HEADER(4)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"CFArrayCallBacks\"",ROOT(0));

result = vpx_constant(PARAMETERS,"com.apple.CoreFoundation",ROOT(1));

result = vpx_constant(PARAMETERS,"kCFTypeArrayCallBacks",ROOT(2));

result = vpx_method_Get_20_Framework_20_Structure(PARAMETERS,TERMINAL(2),TERMINAL(1),TERMINAL(0),ROOT(3));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_To_20_CFType_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_To_20_CFType_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

CFArrayAppendValue( GETPOINTER(0,__CFArray,*,ROOT(2),TERMINAL(0)),GETCONSTPOINTER(void,*,TERMINAL(1)));
result = kSuccess;

CFRelease( GETCONSTPOINTER(void,*,TERMINAL(1)));
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_To_20_CFType_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_To_20_CFType_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_list_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

if( (repeatLimit = vpx_multiplex(1,TERMINAL(0))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_To_20_CFType(PARAMETERS,LIST(0),ROOT(1));
FAILONFAILURE
LISTROOT(1,0)
REPEATFINISH
LISTROOTFINISH(1,0)
LISTROOTEND
} else {
ROOTEMPTY(1)
}

result = vpx_constant(PARAMETERS,"NULL",ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP__28_length_29_,1,1,TERMINAL(1),ROOT(3));

result = vpx_method_To_20_CFType_case_1_local_6(PARAMETERS,ROOT(4));
FAILONFAILURE

PUTPOINTER(__CFArray,*,CFArrayCreateMutable( GETCONSTPOINTER(__CFAllocator,*,TERMINAL(2)),GETINTEGER(TERMINAL(3)),GETCONSTPOINTER(CFArrayCallBacks,*,TERMINAL(4))),5);
result = kSuccess;

if( (repeatLimit = vpx_multiplex(1,TERMINAL(1))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_To_20_CFType_case_1_local_8(PARAMETERS,TERMINAL(5),LIST(1));
REPEATFINISH
} else {
}

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTER(6)
}

enum opTrigger vpx_method_To_20_CFType_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_To_20_CFType_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_external_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

PUTPOINTER(void,*,CFRetain( GETCONSTPOINTER(void,*,TERMINAL(0))),1);
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(2)
}

enum opTrigger vpx_method_To_20_CFType_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_To_20_CFType_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_number_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_method_To_20_CFNumberRef(PARAMETERS,TERMINAL(0),ROOT(1));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_To_20_CFType_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_To_20_CFType_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_method_Get_20_CFNullRef(PARAMETERS,ROOT(1));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_To_20_CFType_case_5(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_To_20_CFType_case_5(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_boolean_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_method_To_20_CFBooleanRef(PARAMETERS,TERMINAL(0),ROOT(1));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_To_20_CFType_case_6(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_To_20_CFType_case_6(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CF_20_Reference,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
FAILONSUCCESS

PUTPOINTER(void,*,CFRetain( GETCONSTPOINTER(void,*,TERMINAL(1))),2);
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_To_20_CFType_case_7(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_To_20_CFType_case_7(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_method__22_Check_22_(PARAMETERS,TERMINAL(0),ROOT(1));

result = vpx_method_To_20_CFStringRef(PARAMETERS,TERMINAL(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_To_20_CFType(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_To_20_CFType_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_To_20_CFType_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_To_20_CFType_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_To_20_CFType_case_4(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_To_20_CFType_case_5(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_To_20_CFType_case_6(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_To_20_CFType_case_7(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_From_20_CFType_case_1_local_4_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_From_20_CFType_case_1_local_4_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"__CFString",ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_set_2D_external_2D_type,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_From_20_CFType_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_From_20_CFType_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

PUTINTEGER(CFStringGetTypeID(),2);
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP__3D_,2,0,TERMINAL(2),TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_method_From_20_CFType_case_1_local_4_case_1_local_4(PARAMETERS,TERMINAL(0));

result = vpx_method_From_20_CFStringRef(PARAMETERS,TERMINAL(0),ROOT(3));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
FAILONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_From_20_CFType_case_1_local_4_case_2_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_From_20_CFType_case_1_local_4_case_2_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"__CFNumber",ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_set_2D_external_2D_type,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_From_20_CFType_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_From_20_CFType_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

PUTINTEGER(CFNumberGetTypeID(),2);
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP__3D_,2,0,TERMINAL(2),TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_method_From_20_CFType_case_1_local_4_case_2_local_4(PARAMETERS,TERMINAL(0));

result = vpx_method_From_20_CFNumberRef(PARAMETERS,TERMINAL(0),ROOT(3));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
FAILONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_From_20_CFType_case_1_local_4_case_3_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_From_20_CFType_case_1_local_4_case_3_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"__CFBoolean",ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_set_2D_external_2D_type,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_From_20_CFType_case_1_local_4_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_From_20_CFType_case_1_local_4_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

PUTINTEGER(CFBooleanGetTypeID(),2);
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP__3D_,2,0,TERMINAL(2),TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_method_From_20_CFType_case_1_local_4_case_3_local_4(PARAMETERS,TERMINAL(0));

result = vpx_method_From_20_CFBooleanRef(PARAMETERS,TERMINAL(0),ROOT(3));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
FAILONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_From_20_CFType_case_1_local_4_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_From_20_CFType_case_1_local_4_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

PUTINTEGER(CFNullGetTypeID(),2);
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP__3D_,2,0,TERMINAL(2),TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"NULL",ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_From_20_CFType_case_1_local_4_case_5_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_From_20_CFType_case_1_local_4_case_5_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"__CFArray",ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_set_2D_external_2D_type,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_From_20_CFType_case_1_local_4_case_5_local_5_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_From_20_CFType_case_1_local_4_case_5_local_5_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

PUTINTEGER(CFArrayGetCount( GETCONSTPOINTER(__CFArray,*,TERMINAL(0))),1);
result = kSuccess;

result = vpx_constant(PARAMETERS,"0",ROOT(2));

result = vpx_constant(PARAMETERS,"1",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_make_2D_list,3,1,TERMINAL(1),TERMINAL(2),TERMINAL(3),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_From_20_CFType_case_1_local_4_case_5_local_5_case_1_local_3_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_From_20_CFType_case_1_local_4_case_5_local_5_case_1_local_3_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_method_From_20_CFType(PARAMETERS,TERMINAL(0),ROOT(1));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_From_20_CFType_case_1_local_4_case_5_local_5_case_1_local_3_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_From_20_CFType_case_1_local_4_case_5_local_5_case_1_local_3_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(1)
}

enum opTrigger vpx_method_From_20_CFType_case_1_local_4_case_5_local_5_case_1_local_3_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_From_20_CFType_case_1_local_4_case_5_local_5_case_1_local_3_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_From_20_CFType_case_1_local_4_case_5_local_5_case_1_local_3_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_From_20_CFType_case_1_local_4_case_5_local_5_case_1_local_3_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_From_20_CFType_case_1_local_4_case_5_local_5_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_From_20_CFType_case_1_local_4_case_5_local_5_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

PUTPOINTER(void,*,CFArrayGetValueAtIndex( GETCONSTPOINTER(__CFArray,*,TERMINAL(0)),GETINTEGER(TERMINAL(1))),2);
result = kSuccess;

result = vpx_method_From_20_CFType_case_1_local_4_case_5_local_5_case_1_local_3_case_1_local_3(PARAMETERS,TERMINAL(2),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_From_20_CFType_case_1_local_4_case_5_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_From_20_CFType_case_1_local_4_case_5_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_method_From_20_CFType_case_1_local_4_case_5_local_5_case_1_local_2(PARAMETERS,TERMINAL(0),ROOT(1));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(1))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_From_20_CFType_case_1_local_4_case_5_local_5_case_1_local_3(PARAMETERS,TERMINAL(0),LIST(1),ROOT(2));
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

enum opTrigger vpx_method_From_20_CFType_case_1_local_4_case_5(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_From_20_CFType_case_1_local_4_case_5(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

PUTINTEGER(CFArrayGetTypeID(),2);
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP__3D_,2,0,TERMINAL(2),TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_method_From_20_CFType_case_1_local_4_case_5_local_4(PARAMETERS,TERMINAL(0));

result = vpx_method_From_20_CFType_case_1_local_4_case_5_local_5(PARAMETERS,TERMINAL(0),ROOT(3));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
FAILONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_From_20_CFType_case_1_local_4_case_6(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_From_20_CFType_case_1_local_4_case_6(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

PUTINTEGER(CFDictionaryGetTypeID(),2);
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP__3D_,2,0,TERMINAL(2),TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_method_CF_20_Dictionary_2F_New(PARAMETERS,TERMINAL(0),ROOT(3));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
FAILONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_From_20_CFType_case_1_local_4_case_7(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_From_20_CFType_case_1_local_4_case_7(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
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

enum opTrigger vpx_method_From_20_CFType_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_From_20_CFType_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_From_20_CFType_case_1_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
if(vpx_method_From_20_CFType_case_1_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
if(vpx_method_From_20_CFType_case_1_local_4_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
if(vpx_method_From_20_CFType_case_1_local_4_case_4(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
if(vpx_method_From_20_CFType_case_1_local_4_case_5(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
if(vpx_method_From_20_CFType_case_1_local_4_case_6(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_From_20_CFType_case_1_local_4_case_7(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_From_20_CFType(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_external_3F_,1,0,TERMINAL(0));
FAILONFAILURE

PUTINTEGER(CFGetTypeID( GETCONSTPOINTER(void,*,TERMINAL(0))),1);
result = kSuccess;

result = vpx_method_From_20_CFType_case_1_local_4(PARAMETERS,TERMINAL(0),TERMINAL(1),ROOT(2));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Get_20_CFNullRef(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0)
{
HEADERWITHNONE(2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"kCFNull",ROOT(0));

result = vpx_method_Get_20_CF_20_Constant(PARAMETERS,TERMINAL(0),NONE,ROOT(1));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASEWITHNONE(2)
}

enum opTrigger vpx_method_To_20_CFNumberRef_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_To_20_CFNumberRef_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_integer_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_extconstant(PARAMETERS,kCFNumberLongType,ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_To_20_CFNumberRef_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_To_20_CFNumberRef_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_real_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_extconstant(PARAMETERS,kCFNumberFloatType,ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_To_20_CFNumberRef_case_1_local_2_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_To_20_CFNumberRef_case_1_local_2_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;
FAILONSUCCESS

OUTPUT(0,NONE)
FOOTERWITHNONE(1)
}

enum opTrigger vpx_method_To_20_CFNumberRef_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_To_20_CFNumberRef_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_To_20_CFNumberRef_case_1_local_2_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_To_20_CFNumberRef_case_1_local_2_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_To_20_CFNumberRef_case_1_local_2_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_To_20_CFNumberRef_case_1_local_3_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_To_20_CFNumberRef_case_1_local_3_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_integer_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"0",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_put_2D_integer,4,2,TERMINAL(1),TERMINAL(3),TERMINAL(2),TERMINAL(0),ROOT(4),ROOT(5));

result = kSuccess;

FOOTER(6)
}

enum opTrigger vpx_method_To_20_CFNumberRef_case_1_local_3_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_To_20_CFNumberRef_case_1_local_3_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"0",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_real_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_put_2D_real,4,2,TERMINAL(1),TERMINAL(3),TERMINAL(2),TERMINAL(0),ROOT(4),ROOT(5));

result = kSuccess;

FOOTER(6)
}

enum opTrigger vpx_method_To_20_CFNumberRef_case_1_local_3_case_1_local_5_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_To_20_CFNumberRef_case_1_local_3_case_1_local_5_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
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

enum opTrigger vpx_method_To_20_CFNumberRef_case_1_local_3_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_To_20_CFNumberRef_case_1_local_3_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_To_20_CFNumberRef_case_1_local_3_case_1_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2))
if(vpx_method_To_20_CFNumberRef_case_1_local_3_case_1_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2))
vpx_method_To_20_CFNumberRef_case_1_local_3_case_1_local_5_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2);
return outcome;
}

enum opTrigger vpx_method_To_20_CFNumberRef_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_To_20_CFNumberRef_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"void",ROOT(1));

result = vpx_constant(PARAMETERS,"4",ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_make_2D_external,2,1,TERMINAL(1),TERMINAL(2),ROOT(3));

result = vpx_method_To_20_CFNumberRef_case_1_local_3_case_1_local_5(PARAMETERS,TERMINAL(0),TERMINAL(3),TERMINAL(2));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_To_20_CFNumberRef(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_method_To_20_CFNumberRef_case_1_local_2(PARAMETERS,TERMINAL(0),ROOT(1));
FAILONFAILURE

result = vpx_method_To_20_CFNumberRef_case_1_local_3(PARAMETERS,TERMINAL(0),ROOT(2));
FAILONFAILURE

result = vpx_constant(PARAMETERS,"NULL",ROOT(3));

PUTPOINTER(__CFNumber,*,CFNumberCreate( GETCONSTPOINTER(__CFAllocator,*,TERMINAL(3)),GETINTEGER(TERMINAL(1)),GETCONSTPOINTER(void,*,TERMINAL(2))),4);
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_From_20_CFNumberRef_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_From_20_CFNumberRef_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

PUTINTEGER(CFGetTypeID( GETCONSTPOINTER(void,*,TERMINAL(0))),1);
result = kSuccess;

PUTINTEGER(CFNumberGetTypeID(),2);
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP__3D_,2,0,TERMINAL(2),TERMINAL(1));
FAILONFAILURE

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_From_20_CFNumberRef_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_From_20_CFNumberRef_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_external_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_method_From_20_CFNumberRef_case_1_local_3(PARAMETERS,TERMINAL(0));
NEXTCASEONFAILURE

PUTPOINTER(void,*,CFRetain( GETCONSTPOINTER(void,*,TERMINAL(0))),1);
result = kSuccess;

result = vpx_method_CF_20_Number_2F_New(PARAMETERS,TERMINAL(0),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Value,1,1,TERMINAL(2),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Release,1,0,TERMINAL(2));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_From_20_CFNumberRef_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_From_20_CFNumberRef_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_From_20_CFNumberRef(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_From_20_CFNumberRef_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_From_20_CFNumberRef_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_CF_20_Release(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_external_3F_,1,0,TERMINAL(0));
TERMINATEONFAILURE

CFRelease( GETCONSTPOINTER(void,*,TERMINAL(0)));
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(1)
}




	Nat4 tempAttribute_CF_20_Base_2F_Release_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0X00010000
	};
	Nat4 tempAttribute_CF_20_Array_2F_Release_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0X00010000
	};
	Nat4 tempAttribute_CF_20_Bag_2F_Release_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0X00010000
	};
	Nat4 tempAttribute_CF_20_Boolean_2F_Release_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0X00010000
	};
	Nat4 tempAttribute_CF_20_Bundle_2F_Release_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0X00010000
	};
	Nat4 tempAttribute_CF_20_Data_2F_Release_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0X00010000
	};
	Nat4 tempAttribute_CF_20_Date_2F_Release_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0X00010000
	};
	Nat4 tempAttribute_CF_20_Dictionary_2F_Release_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0X00010000
	};
	Nat4 tempAttribute_CF_20_Number_2F_Release_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0X00010000
	};
	Nat4 tempAttribute_CF_20_PlugIn_2F_Release_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0X00010000
	};
	Nat4 tempAttribute_CF_20_Set_2F_Release_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0X00010000
	};
	Nat4 tempAttribute_CF_20_String_2F_Release_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0X00010000
	};
	Nat4 tempAttribute_CF_20_TimeZone_2F_Release_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0X00010000
	};
	Nat4 tempAttribute_CF_20_Tree_2F_Release_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0X00010000
	};
	Nat4 tempAttribute_CF_20_URL_2F_Release_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0X00010000
	};
	Nat4 tempAttribute_CF_20_UUID_2F_Release_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0X00010000
	};
	Nat4 tempAttribute_CF_20_XMLNode_2F_Release_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0X00010000
	};
	Nat4 tempAttribute_CF_20_XMLParser_2F_Release_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0X00010000
	};
	Nat4 tempAttribute_CF_20_Absolute_20_Time_2F_Value[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};


Nat4 VPLC_CF_20_Base_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_CF_20_Base_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 200 300 } */
	tempAttribute = attribute_add("Allocator",tempClass,NULL,environment);
	tempAttribute = attribute_add("CF Reference",tempClass,NULL,environment);
	tempAttribute = attribute_add("Release?",tempClass,tempAttribute_CF_20_Base_2F_Release_3F_,environment);
/* Stop Attributes */

/* NULL SUPER CLASS */
	return kNOERROR;
}

/* Start Universals: { 84 664 }{ 495 332 } */
enum opTrigger vpx_method_CF_20_Base_2F_Clone(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_shallow_2D_copy,1,1,TERMINAL(0),ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Clone_20_Reference,1,0,TERMINAL(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_CF_20_Base_2F_Clone_20_Reference_case_1_local_3_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_CF_20_Base_2F_Clone_20_Reference_case_1_local_3_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

PUTPOINTER(void,*,CFRetain( GETCONSTPOINTER(void,*,TERMINAL(1))),2);
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_CF_20_Base_2F_Clone_20_Reference_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_CF_20_Base_2F_Clone_20_Reference_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
NEXTCASEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Current_20_Allocator,1,1,TERMINAL(0),ROOT(2));

result = vpx_method_CF_20_Base_2F_Clone_20_Reference_case_1_local_3_case_1_local_4(PARAMETERS,TERMINAL(2),TERMINAL(1),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_CF_20_Base_2F_Clone_20_Reference_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_CF_20_Base_2F_Clone_20_Reference_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
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

enum opTrigger vpx_method_CF_20_Base_2F_Clone_20_Reference_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_CF_20_Base_2F_Clone_20_Reference_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_Base_2F_Clone_20_Reference_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_CF_20_Base_2F_Clone_20_Reference_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_CF_20_Base_2F_Clone_20_Reference(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CF_20_Reference,1,1,TERMINAL(0),ROOT(1));

result = vpx_method_CF_20_Base_2F_Clone_20_Reference_case_1_local_3(PARAMETERS,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_CF_20_Reference,2,0,TERMINAL(0),TERMINAL(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_CF_20_Base_2F_Default_20_Range_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_CF_20_Base_2F_Default_20_Range_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_list_3F_,1,0,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,2,TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_method_New_20_CFRange(PARAMETERS,TERMINAL(2),TERMINAL(3),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_CF_20_Base_2F_Default_20_Range_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_CF_20_Base_2F_Default_20_Range_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_CF_20_Base_2F_Default_20_Range(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_Base_2F_Default_20_Range_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_CF_20_Base_2F_Default_20_Range_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_CF_20_Base_2F_Dispose(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_CF_20_Reference,2,0,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_CF_20_Base_2F_Equal_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_CF_20_Base_2F_Equal_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CF_20_Reference,1,1,TERMINAL(0),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
NEXTCASEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CF_20_Reference,1,1,TERMINAL(1),ROOT(3));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
NEXTCASEONSUCCESS

PUTINTEGER(CFEqual( GETCONSTPOINTER(void,*,TERMINAL(2)),GETCONSTPOINTER(void,*,TERMINAL(3))),4);
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_CF_20_Base_2F_Equal_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_CF_20_Base_2F_Equal_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CF_20_Reference,1,1,TERMINAL(1),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CF_20_Reference,1,1,TERMINAL(0),ROOT(3));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"TRUE",ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_CF_20_Base_2F_Equal_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_CF_20_Base_2F_Equal_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
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

enum opTrigger vpx_method_CF_20_Base_2F_Equal(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_Base_2F_Equal_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
if(vpx_method_CF_20_Base_2F_Equal_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_CF_20_Base_2F_Equal_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_CF_20_Base_2F_Get_20_Allocator(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Allocator,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_CF_20_Base_2F_Get_20_CF_20_Reference(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_CF_20_Reference,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_CF_20_Base_2F_Get_20_Class_20_Type_20_ID(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"0",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_CF_20_Base_2F_Get_20_Current_20_Allocator_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_Base_2F_Get_20_Current_20_Allocator_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Allocator,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
NEXTCASEONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_CF_20_Base_2F_Get_20_Current_20_Allocator_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_Base_2F_Get_20_Current_20_Allocator_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

PUTPOINTER(__CFAllocator,*,CFAllocatorGetDefault(),1);
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_CF_20_Base_2F_Get_20_Current_20_Allocator(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_Base_2F_Get_20_Current_20_Allocator_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_CF_20_Base_2F_Get_20_Current_20_Allocator_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_CF_20_Base_2F_Get_20_Release_3F_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Release_3F_,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_CF_20_Base_2F_Get_20_Retain_20_Count_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_Base_2F_Get_20_Retain_20_Count_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CF_20_Reference,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
NEXTCASEONSUCCESS

PUTINTEGER(CFGetRetainCount( GETCONSTPOINTER(void,*,TERMINAL(1))),2);
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_CF_20_Base_2F_Get_20_Retain_20_Count_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_Base_2F_Get_20_Retain_20_Count_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"0",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_CF_20_Base_2F_Get_20_Retain_20_Count(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_Base_2F_Get_20_Retain_20_Count_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_CF_20_Base_2F_Get_20_Retain_20_Count_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_CF_20_Base_2F_Get_20_Type_20_ID_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_Base_2F_Get_20_Type_20_ID_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CF_20_Reference,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
NEXTCASEONSUCCESS

PUTINTEGER(CFGetTypeID( GETCONSTPOINTER(void,*,TERMINAL(1))),2);
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_CF_20_Base_2F_Get_20_Type_20_ID_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_Base_2F_Get_20_Type_20_ID_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Class_20_Type_20_ID,1,1,TERMINAL(0),ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_CF_20_Base_2F_Get_20_Type_20_ID(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_Base_2F_Get_20_Type_20_ID_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_CF_20_Base_2F_Get_20_Type_20_ID_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_CF_20_Base_2F_Hash_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_Base_2F_Hash_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CF_20_Reference,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
NEXTCASEONSUCCESS

PUTINTEGER(CFHash( GETCONSTPOINTER(void,*,TERMINAL(1))),2);
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_CF_20_Base_2F_Hash_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_Base_2F_Hash_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"0",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_CF_20_Base_2F_Hash(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_Base_2F_Hash_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_CF_20_Base_2F_Hash_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_CF_20_Base_2F_New(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(2)
INPUT(0,0)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_CF_20_Base,1,1,NONE,ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_CF_20_Reference,2,0,TERMINAL(1),TERMINAL(0));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASEWITHNONE(2)
}

enum opTrigger vpx_method_CF_20_Base_2F_Release_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_CF_20_Base_2F_Release_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Release_3F_,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(1));
FAILONFAILURE

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_CF_20_Base_2F_Release_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_CF_20_Base_2F_Release_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CF_20_Reference,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
TERMINATEONSUCCESS

CFRelease( GETCONSTPOINTER(void,*,TERMINAL(1)));
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_CF_20_Base_2F_Release_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_CF_20_Base_2F_Release_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"1",TERMINAL(1));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_CF_20_Last_20_Release,1,0,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_CF_20_Base_2F_Release_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_CF_20_Base_2F_Release_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_method_CF_20_Base_2F_Release_case_1_local_2(PARAMETERS,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Retain_20_Count,1,1,TERMINAL(0),ROOT(1));

result = vpx_method_CF_20_Base_2F_Release_case_1_local_4(PARAMETERS,TERMINAL(0));

result = vpx_method_CF_20_Base_2F_Release_case_1_local_5(PARAMETERS,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_CF_20_Base_2F_Release_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_CF_20_Base_2F_Release_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_CF_20_Base_2F_Release(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_Base_2F_Release_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_CF_20_Base_2F_Release_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_CF_20_Base_2F_Retain_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_CF_20_Base_2F_Retain_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"TRUE",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Release_3F_,2,0,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_CF_20_Base_2F_Retain_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_CF_20_Base_2F_Retain_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CF_20_Reference,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
NEXTCASEONSUCCESS

PUTPOINTER(void,*,CFRetain( GETCONSTPOINTER(void,*,TERMINAL(1))),2);
result = kSuccess;

result = vpx_method_CF_20_Base_2F_Retain_case_1_local_5(PARAMETERS,TERMINAL(0));

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_CF_20_Base_2F_Retain_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_CF_20_Base_2F_Retain_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_CF_20_Base_2F_Retain(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_Base_2F_Retain_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_CF_20_Base_2F_Retain_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_CF_20_Base_2F_Set_20_Allocator(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Allocator,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_CF_20_Base_2F_Set_20_CF_20_Reference(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_CF_20_Reference,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_CF_20_Base_2F_Set_20_Release_3F_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Release_3F_,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_CF_20_Base_2F_Show_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_CF_20_Base_2F_Show_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CF_20_Reference,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
NEXTCASEONSUCCESS

CFShow( GETCONSTPOINTER(void,*,TERMINAL(1)));
result = kSuccess;

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_CF_20_Base_2F_Show_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_CF_20_Base_2F_Show_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_CF_20_Base_2F_Show(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_Base_2F_Show_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_CF_20_Base_2F_Show_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_CF_20_Base_2F_CF_20_Last_20_Release(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Dispose,1,0,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_CF_20_Base_2F_Don_27_t_20_Release(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"FALSE",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Release_3F_,2,0,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(2)
}

/* Stop Universals */



Nat4 VPLC_CF_20_Array_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_CF_20_Array_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 200 300 } */
	tempAttribute = attribute_add("Allocator",tempClass,NULL,environment);
	tempAttribute = attribute_add("CF Reference",tempClass,NULL,environment);
	tempAttribute = attribute_add("Release?",tempClass,tempAttribute_CF_20_Array_2F_Release_3F_,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"CF Base");
	return kNOERROR;
}

/* Start Universals: { 361 260 }{ 233 299 } */
enum opTrigger vpx_method_CF_20_Array_2F_New(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(2)
INPUT(0,0)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_CF_20_Array,1,1,NONE,ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_CF_20_Reference,2,0,TERMINAL(1),TERMINAL(0));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASEWITHNONE(2)
}

enum opTrigger vpx_method_CF_20_Array_2F_Get_20_Class_20_Type_20_ID(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

PUTINTEGER(CFArrayGetTypeID(),1);
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_CF_20_Array_2F_Append_20_Value_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_CF_20_Array_2F_Append_20_Value_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CF_20_Reference,1,1,TERMINAL(0),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
NEXTCASEONSUCCESS

CFArrayAppendValue( GETPOINTER(0,__CFArray,*,ROOT(3),TERMINAL(2)),GETCONSTPOINTER(void,*,TERMINAL(1)));
result = kSuccess;

result = kSuccess;

FOOTER(4)
}

enum opTrigger vpx_method_CF_20_Array_2F_Append_20_Value_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_CF_20_Array_2F_Append_20_Value_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_CF_20_Array_2F_Append_20_Value(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_Array_2F_Append_20_Value_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_CF_20_Array_2F_Append_20_Value_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_CF_20_Array_2F_Get_20_Count_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_Array_2F_Get_20_Count_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CF_20_Reference,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
NEXTCASEONSUCCESS

PUTINTEGER(CFArrayGetCount( GETCONSTPOINTER(__CFArray,*,TERMINAL(1))),2);
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_CF_20_Array_2F_Get_20_Count_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_Array_2F_Get_20_Count_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"0",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_CF_20_Array_2F_Get_20_Count(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_Array_2F_Get_20_Count_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_CF_20_Array_2F_Get_20_Count_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_CF_20_Array_2F_Get_20_Value_20_At_20_Index_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_CF_20_Array_2F_Get_20_Value_20_At_20_Index_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CF_20_Reference,1,1,TERMINAL(0),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
NEXTCASEONSUCCESS

PUTPOINTER(void,*,CFArrayGetValueAtIndex( GETCONSTPOINTER(__CFArray,*,TERMINAL(2)),GETINTEGER(TERMINAL(1))),3);
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_CF_20_Array_2F_Get_20_Value_20_At_20_Index_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_CF_20_Array_2F_Get_20_Value_20_At_20_Index_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
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

enum opTrigger vpx_method_CF_20_Array_2F_Get_20_Value_20_At_20_Index(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_Array_2F_Get_20_Value_20_At_20_Index_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_CF_20_Array_2F_Get_20_Value_20_At_20_Index_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_CF_20_Array_2F_Get_20_Value_20_At_20_Index_20_As_20_CFStringRef(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Value_20_At_20_Index,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_external_3F_,1,0,TERMINAL(2));
FAILONFAILURE

result = vpx_constant(PARAMETERS,"__CFString",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_set_2D_external_2D_type,2,0,TERMINAL(2),TERMINAL(3));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_CF_20_Array_2F_Get_20_Value_20_At_20_Index_20_As_20_String(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Value_20_At_20_Index_20_As_20_CFStringRef,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));
FAILONFAILURE

result = vpx_method_From_20_CFStringRef(PARAMETERS,TERMINAL(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_string_3F_,1,0,TERMINAL(3));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_CF_20_Array_2F_Get_20_All_20_Values_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_Array_2F_Get_20_All_20_Values_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Count,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"0",TERMINAL(1));
NEXTCASEONSUCCESS

result = vpx_constant(PARAMETERS,"0",ROOT(2));

result = vpx_constant(PARAMETERS,"1",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_make_2D_list,3,1,TERMINAL(1),TERMINAL(2),TERMINAL(3),ROOT(4));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(4))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Value_20_At_20_Index,2,1,TERMINAL(0),LIST(4),ROOT(5));
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

enum opTrigger vpx_method_CF_20_Array_2F_Get_20_All_20_Values_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_Array_2F_Get_20_All_20_Values_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( )",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_CF_20_Array_2F_Get_20_All_20_Values(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_Array_2F_Get_20_All_20_Values_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_CF_20_Array_2F_Get_20_All_20_Values_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_CF_20_Array_2F_Get_20_All_20_Values_20_As_20_Strings_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_Array_2F_Get_20_All_20_Values_20_As_20_Strings_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Count,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"0",TERMINAL(1));
NEXTCASEONSUCCESS

result = vpx_constant(PARAMETERS,"0",ROOT(2));

result = vpx_constant(PARAMETERS,"1",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_make_2D_list,3,1,TERMINAL(1),TERMINAL(2),TERMINAL(3),ROOT(4));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(4))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Value_20_At_20_Index_20_As_20_String,2,1,TERMINAL(0),LIST(4),ROOT(5));
CONTINUEONFAILURE
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

enum opTrigger vpx_method_CF_20_Array_2F_Get_20_All_20_Values_20_As_20_Strings_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_Array_2F_Get_20_All_20_Values_20_As_20_Strings_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( )",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_CF_20_Array_2F_Get_20_All_20_Values_20_As_20_Strings(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_Array_2F_Get_20_All_20_Values_20_As_20_Strings_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_CF_20_Array_2F_Get_20_All_20_Values_20_As_20_Strings_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

/* Stop Universals */



Nat4 VPLC_CF_20_Bag_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_CF_20_Bag_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 200 300 } */
	tempAttribute = attribute_add("Allocator",tempClass,NULL,environment);
	tempAttribute = attribute_add("CF Reference",tempClass,NULL,environment);
	tempAttribute = attribute_add("Release?",tempClass,tempAttribute_CF_20_Bag_2F_Release_3F_,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"CF Base");
	return kNOERROR;
}

/* Start Universals: { 305 705 }{ 200 300 } */
enum opTrigger vpx_method_CF_20_Bag_2F_New(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(2)
INPUT(0,0)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_CF_20_Bag,1,1,NONE,ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_CF_20_Reference,2,0,TERMINAL(1),TERMINAL(0));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASEWITHNONE(2)
}

enum opTrigger vpx_method_CF_20_Bag_2F_Get_20_Class_20_Type_20_ID(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

PUTINTEGER(CFBagGetTypeID(),1);
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASE(2)
}

/* Stop Universals */



Nat4 VPLC_CF_20_Boolean_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_CF_20_Boolean_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 200 300 } */
	tempAttribute = attribute_add("Allocator",tempClass,NULL,environment);
	tempAttribute = attribute_add("CF Reference",tempClass,NULL,environment);
	tempAttribute = attribute_add("Release?",tempClass,tempAttribute_CF_20_Boolean_2F_Release_3F_,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"CF Base");
	return kNOERROR;
}

/* Start Universals: { 305 705 }{ 200 300 } */
enum opTrigger vpx_method_CF_20_Boolean_2F_New(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(2)
INPUT(0,0)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_CF_20_Boolean,1,1,NONE,ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_CF_20_Reference,2,0,TERMINAL(1),TERMINAL(0));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASEWITHNONE(2)
}

enum opTrigger vpx_method_CF_20_Boolean_2F_Get_20_Class_20_Type_20_ID(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

PUTINTEGER(CFBooleanGetTypeID(),1);
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASE(2)
}

/* Stop Universals */



Nat4 VPLC_CF_20_Bundle_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_CF_20_Bundle_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 200 300 } */
	tempAttribute = attribute_add("Allocator",tempClass,NULL,environment);
	tempAttribute = attribute_add("CF Reference",tempClass,NULL,environment);
	tempAttribute = attribute_add("Release?",tempClass,tempAttribute_CF_20_Bundle_2F_Release_3F_,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"CF Base");
	return kNOERROR;
}

/* Start Universals: { 341 840 }{ 425 323 } */
enum opTrigger vpx_method_CF_20_Bundle_2F_New(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(2)
INPUT(0,0)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_CF_20_Bundle,1,1,NONE,ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_CF_20_Reference,2,0,TERMINAL(1),TERMINAL(0));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASEWITHNONE(2)
}

enum opTrigger vpx_method_CF_20_Bundle_2F_Get_20_Class_20_Type_20_ID(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

PUTINTEGER(CFBundleGetTypeID(),1);
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_CF_20_Bundle_2F_Create_20_Bundle(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Main_20_Bundle,1,0,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_CF_20_Bundle_2F_Get_20_Bundle_20_Identifier_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_Bundle_2F_Get_20_Bundle_20_Identifier_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CF_20_Reference,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
NEXTCASEONSUCCESS

PUTPOINTER(__CFString,*,CFBundleGetIdentifier( GETPOINTER(0,__CFBundle,*,ROOT(3),TERMINAL(1))),2);
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
NEXTCASEONSUCCESS

result = vpx_method_CF_20_String_2F_New(PARAMETERS,TERMINAL(2),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_CF_20_Bundle_2F_Get_20_Bundle_20_Identifier_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_Bundle_2F_Get_20_Bundle_20_Identifier_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_CF_20_Bundle_2F_Get_20_Bundle_20_Identifier(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_Bundle_2F_Get_20_Bundle_20_Identifier_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_CF_20_Bundle_2F_Get_20_Bundle_20_Identifier_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_CF_20_Bundle_2F_Get_20_Bundle_20_With_20_Identifier(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_To_20_CFString(PARAMETERS,TERMINAL(1),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CF_20_Reference,1,1,TERMINAL(2),ROOT(3));

PUTPOINTER(__CFBundle,*,CFBundleGetBundleWithIdentifier( GETCONSTPOINTER(__CFString,*,TERMINAL(3))),4);
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Release,1,0,TERMINAL(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(4));
FAILONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_CF_20_Reference,2,0,TERMINAL(0),TERMINAL(4));

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_CF_20_Bundle_2F_Get_20_CFBundleRef_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_Bundle_2F_Get_20_CFBundleRef_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CF_20_Reference,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
NEXTCASEONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_CF_20_Bundle_2F_Get_20_CFBundleRef_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_Bundle_2F_Get_20_CFBundleRef_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Create_20_Bundle,1,0,TERMINAL(0));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CF_20_Reference,1,1,TERMINAL(0),ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_CF_20_Bundle_2F_Get_20_CFBundleRef(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_Bundle_2F_Get_20_CFBundleRef_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_CF_20_Bundle_2F_Get_20_CFBundleRef_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_CF_20_Bundle_2F_Get_20_Data_20_Pointer_20_For_20_Name_case_1_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_Bundle_2F_Get_20_Data_20_Pointer_20_For_20_Name_case_1_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"0",ROOT(1));

result = vpx_constant(PARAMETERS,"4",ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_integer,3,3,TERMINAL(0),TERMINAL(1),TERMINAL(2),ROOT(3),ROOT(4),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_to_2D_pointer,1,1,TERMINAL(5),ROOT(6));

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTERSINGLECASE(7)
}

enum opTrigger vpx_method_CF_20_Bundle_2F_Get_20_Data_20_Pointer_20_For_20_Name_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_CF_20_Bundle_2F_Get_20_Data_20_Pointer_20_For_20_Name_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CFBundleRef,1,1,TERMINAL(0),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
NEXTCASEONSUCCESS

result = vpx_method_To_20_CFString(PARAMETERS,TERMINAL(1),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CF_20_Reference,1,1,TERMINAL(3),ROOT(4));

PUTPOINTER(void,*,CFBundleGetDataPointerForName( GETPOINTER(0,__CFBundle,*,ROOT(6),TERMINAL(2)),GETCONSTPOINTER(__CFString,*,TERMINAL(4))),5);
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Release,1,0,TERMINAL(3));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(5));
NEXTCASEONSUCCESS

result = vpx_method_CF_20_Bundle_2F_Get_20_Data_20_Pointer_20_For_20_Name_case_1_local_9(PARAMETERS,TERMINAL(5),ROOT(7));

result = kSuccess;

OUTPUT(0,TERMINAL(7))
FOOTER(8)
}

enum opTrigger vpx_method_CF_20_Bundle_2F_Get_20_Data_20_Pointer_20_For_20_Name_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_CF_20_Bundle_2F_Get_20_Data_20_Pointer_20_For_20_Name_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
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

enum opTrigger vpx_method_CF_20_Bundle_2F_Get_20_Data_20_Pointer_20_For_20_Name(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_Bundle_2F_Get_20_Data_20_Pointer_20_For_20_Name_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_CF_20_Bundle_2F_Get_20_Data_20_Pointer_20_For_20_Name_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_CF_20_Bundle_2F_Get_20_Function_20_Pointer_20_For_20_Name_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_CF_20_Bundle_2F_Get_20_Function_20_Pointer_20_For_20_Name_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CFBundleRef,1,1,TERMINAL(0),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
NEXTCASEONSUCCESS

result = vpx_method_To_20_CFString(PARAMETERS,TERMINAL(1),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CF_20_Reference,1,1,TERMINAL(3),ROOT(4));

PUTPOINTER(void,*,CFBundleGetFunctionPointerForName( GETPOINTER(0,__CFBundle,*,ROOT(6),TERMINAL(2)),GETCONSTPOINTER(__CFString,*,TERMINAL(4))),5);
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Release,1,0,TERMINAL(3));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTER(7)
}

enum opTrigger vpx_method_CF_20_Bundle_2F_Get_20_Function_20_Pointer_20_For_20_Name_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_CF_20_Bundle_2F_Get_20_Function_20_Pointer_20_For_20_Name_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
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

enum opTrigger vpx_method_CF_20_Bundle_2F_Get_20_Function_20_Pointer_20_For_20_Name(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_Bundle_2F_Get_20_Function_20_Pointer_20_For_20_Name_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_CF_20_Bundle_2F_Get_20_Function_20_Pointer_20_For_20_Name_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_CF_20_Bundle_2F_Get_20_Main_20_Bundle(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

PUTPOINTER(__CFBundle,*,CFBundleGetMainBundle(),1);
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_CF_20_Reference,2,0,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_CF_20_Bundle_2F_Is_20_Executable_20_Loaded_3F__case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_Bundle_2F_Is_20_Executable_20_Loaded_3F__case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CFBundleRef,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
NEXTCASEONSUCCESS

PUTINTEGER(CFBundleIsExecutableLoaded( GETPOINTER(0,__CFBundle,*,ROOT(3),TERMINAL(1))),2);
result = kSuccess;

result = vpx_method_Integer_20_To_20_Boolean(PARAMETERS,TERMINAL(2),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_CF_20_Bundle_2F_Is_20_Executable_20_Loaded_3F__case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_Bundle_2F_Is_20_Executable_20_Loaded_3F__case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"FALSE",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_CF_20_Bundle_2F_Is_20_Executable_20_Loaded_3F_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_Bundle_2F_Is_20_Executable_20_Loaded_3F__case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_CF_20_Bundle_2F_Is_20_Executable_20_Loaded_3F__case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_CF_20_Bundle_2F_Load_20_Executable_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_Bundle_2F_Load_20_Executable_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CFBundleRef,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
NEXTCASEONSUCCESS

PUTINTEGER(CFBundleLoadExecutable( GETPOINTER(0,__CFBundle,*,ROOT(3),TERMINAL(1))),2);
result = kSuccess;

result = vpx_method_Integer_20_To_20_Boolean(PARAMETERS,TERMINAL(2),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_CF_20_Bundle_2F_Load_20_Executable_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_Bundle_2F_Load_20_Executable_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"FALSE",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_CF_20_Bundle_2F_Load_20_Executable(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_Bundle_2F_Load_20_Executable_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_CF_20_Bundle_2F_Load_20_Executable_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_CF_20_Bundle_2F_Unload_20_Executable_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_CF_20_Bundle_2F_Unload_20_Executable_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CFBundleRef,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
NEXTCASEONSUCCESS

CFBundleUnloadExecutable( GETPOINTER(0,__CFBundle,*,ROOT(2),TERMINAL(1)));
result = kSuccess;

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_CF_20_Bundle_2F_Unload_20_Executable_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_CF_20_Bundle_2F_Unload_20_Executable_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_CF_20_Bundle_2F_Unload_20_Executable(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_Bundle_2F_Unload_20_Executable_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_CF_20_Bundle_2F_Unload_20_Executable_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_CF_20_Bundle_2F_Create_20_From_20_CFURL(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CF_20_Reference,1,1,TERMINAL(1),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
TERMINATEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Current_20_Allocator,1,1,TERMINAL(0),ROOT(3));

PUTPOINTER(__CFBundle,*,CFBundleCreate( GETCONSTPOINTER(__CFAllocator,*,TERMINAL(3)),GETCONSTPOINTER(__CFURL,*,TERMINAL(2))),4);
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_CF_20_Reference,2,0,TERMINAL(0),TERMINAL(4));

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_CF_20_Bundle_2F_Create_20_From_20_FSRef(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Full_20_Path_20_CFURL,1,1,TERMINAL(1),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Create_20_From_20_CFURL,2,0,TERMINAL(0),TERMINAL(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Release,1,0,TERMINAL(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_CF_20_Bundle_2F_Get_20_Package_20_Info(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADERWITHNONE(9)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CF_20_Reference,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
FAILONSUCCESS

CFBundleGetPackageInfo( GETPOINTER(0,__CFBundle,*,ROOT(2),TERMINAL(1)),GETPOINTER(4,unsigned int,*,ROOT(3),NONE),GETPOINTER(4,unsigned int,*,ROOT(4),NONE));
result = kSuccess;

result = vpx_method_Get_20_UInt32(PARAMETERS,TERMINAL(3),NONE,ROOT(5),ROOT(6));

result = vpx_method_Get_20_UInt32(PARAMETERS,TERMINAL(4),NONE,ROOT(7),ROOT(8));

result = kSuccess;

OUTPUT(0,TERMINAL(6))
OUTPUT(1,TERMINAL(8))
FOOTERSINGLECASEWITHNONE(9)
}

enum opTrigger vpx_method_CF_20_Bundle_2F_Get_20_Value_20_For_20_Info_20_Dictionary_20_Key_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_Bundle_2F_Get_20_Value_20_For_20_Info_20_Dictionary_20_Key_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CF_20_Reference,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
FAILONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_CF_20_Bundle_2F_Get_20_Value_20_For_20_Info_20_Dictionary_20_Key_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_Bundle_2F_Get_20_Value_20_For_20_Info_20_Dictionary_20_Key_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

PUTPOINTER(__CFBundle,*,CFBundleGetMainBundle(),1);
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_CF_20_Bundle_2F_Get_20_Value_20_For_20_Info_20_Dictionary_20_Key_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_Bundle_2F_Get_20_Value_20_For_20_Info_20_Dictionary_20_Key_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_Bundle_2F_Get_20_Value_20_For_20_Info_20_Dictionary_20_Key_case_1_local_2_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_CF_20_Bundle_2F_Get_20_Value_20_For_20_Info_20_Dictionary_20_Key_case_1_local_2_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_CF_20_Bundle_2F_Get_20_Value_20_For_20_Info_20_Dictionary_20_Key_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_CF_20_Bundle_2F_Get_20_Value_20_For_20_Info_20_Dictionary_20_Key_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_CF_20_Bundle_2F_Get_20_Value_20_For_20_Info_20_Dictionary_20_Key_case_1_local_2(PARAMETERS,TERMINAL(0),ROOT(2));
NEXTCASEONFAILURE

result = vpx_method_CFSTR(PARAMETERS,TERMINAL(1),ROOT(3));

PUTPOINTER(void,*,CFBundleGetValueForInfoDictionaryKey( GETPOINTER(0,__CFBundle,*,ROOT(5),TERMINAL(2)),GETCONSTPOINTER(__CFString,*,TERMINAL(3))),4);
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(6)
}

enum opTrigger vpx_method_CF_20_Bundle_2F_Get_20_Value_20_For_20_Info_20_Dictionary_20_Key_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_CF_20_Bundle_2F_Get_20_Value_20_For_20_Info_20_Dictionary_20_Key_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
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

enum opTrigger vpx_method_CF_20_Bundle_2F_Get_20_Value_20_For_20_Info_20_Dictionary_20_Key(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_Bundle_2F_Get_20_Value_20_For_20_Info_20_Dictionary_20_Key_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_CF_20_Bundle_2F_Get_20_Value_20_For_20_Info_20_Dictionary_20_Key_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_CF_20_Bundle_2F_Get_20_Structure_20_Pointer_20_For_20_Name_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_CF_20_Bundle_2F_Get_20_Structure_20_Pointer_20_For_20_Name_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CFBundleRef,1,1,TERMINAL(0),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
NEXTCASEONSUCCESS

result = vpx_method_To_20_CFString(PARAMETERS,TERMINAL(1),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CF_20_Reference,1,1,TERMINAL(3),ROOT(4));

PUTPOINTER(void,*,CFBundleGetDataPointerForName( GETPOINTER(0,__CFBundle,*,ROOT(6),TERMINAL(2)),GETCONSTPOINTER(__CFString,*,TERMINAL(4))),5);
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Release,1,0,TERMINAL(3));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(5));
NEXTCASEONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTER(7)
}

enum opTrigger vpx_method_CF_20_Bundle_2F_Get_20_Structure_20_Pointer_20_For_20_Name_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_CF_20_Bundle_2F_Get_20_Structure_20_Pointer_20_For_20_Name_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
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

enum opTrigger vpx_method_CF_20_Bundle_2F_Get_20_Structure_20_Pointer_20_For_20_Name(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_Bundle_2F_Get_20_Structure_20_Pointer_20_For_20_Name_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_CF_20_Bundle_2F_Get_20_Structure_20_Pointer_20_For_20_Name_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_CF_20_Bundle_2F_Copy_20_Resource_20_URL_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_CF_20_Bundle_2F_Copy_20_Resource_20_URL_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_string_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_method_To_20_CFStringRef(PARAMETERS,TERMINAL(0),ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
OUTPUT(1,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_CF_20_Bundle_2F_Copy_20_Resource_20_URL_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_CF_20_Bundle_2F_Copy_20_Resource_20_URL_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(0))
OUTPUT(1,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_CF_20_Bundle_2F_Copy_20_Resource_20_URL_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_CF_20_Bundle_2F_Copy_20_Resource_20_URL_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_Bundle_2F_Copy_20_Resource_20_URL_case_1_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1))
vpx_method_CF_20_Bundle_2F_Copy_20_Resource_20_URL_case_1_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1);
return outcome;
}

enum opTrigger vpx_method_CF_20_Bundle_2F_Copy_20_Resource_20_URL_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_CF_20_Bundle_2F_Copy_20_Resource_20_URL_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_string_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_method_To_20_CFStringRef(PARAMETERS,TERMINAL(0),ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
OUTPUT(1,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_CF_20_Bundle_2F_Copy_20_Resource_20_URL_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_CF_20_Bundle_2F_Copy_20_Resource_20_URL_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(0))
OUTPUT(1,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_CF_20_Bundle_2F_Copy_20_Resource_20_URL_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_CF_20_Bundle_2F_Copy_20_Resource_20_URL_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_Bundle_2F_Copy_20_Resource_20_URL_case_1_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1))
vpx_method_CF_20_Bundle_2F_Copy_20_Resource_20_URL_case_1_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1);
return outcome;
}

enum opTrigger vpx_method_CF_20_Bundle_2F_Copy_20_Resource_20_URL_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_CF_20_Bundle_2F_Copy_20_Resource_20_URL_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_string_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_method_To_20_CFStringRef(PARAMETERS,TERMINAL(0),ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
OUTPUT(1,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_CF_20_Bundle_2F_Copy_20_Resource_20_URL_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_CF_20_Bundle_2F_Copy_20_Resource_20_URL_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(0))
OUTPUT(1,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_CF_20_Bundle_2F_Copy_20_Resource_20_URL_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_CF_20_Bundle_2F_Copy_20_Resource_20_URL_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_Bundle_2F_Copy_20_Resource_20_URL_case_1_local_6_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1))
vpx_method_CF_20_Bundle_2F_Copy_20_Resource_20_URL_case_1_local_6_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1);
return outcome;
}

enum opTrigger vpx_method_CF_20_Bundle_2F_Copy_20_Resource_20_URL_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_CF_20_Bundle_2F_Copy_20_Resource_20_URL_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_method_CF_20_Release(PARAMETERS,TERMINAL(0));

result = vpx_method_CF_20_Release(PARAMETERS,TERMINAL(1));

result = vpx_method_CF_20_Release(PARAMETERS,TERMINAL(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_CF_20_Bundle_2F_Copy_20_Resource_20_URL(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0)
{
HEADER(14)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CFBundleRef,1,1,TERMINAL(0),ROOT(4));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(4));
FAILONSUCCESS

result = vpx_method_CF_20_Bundle_2F_Copy_20_Resource_20_URL_case_1_local_4(PARAMETERS,TERMINAL(3),ROOT(5),ROOT(6));

result = vpx_method_CF_20_Bundle_2F_Copy_20_Resource_20_URL_case_1_local_5(PARAMETERS,TERMINAL(2),ROOT(7),ROOT(8));

result = vpx_method_CF_20_Bundle_2F_Copy_20_Resource_20_URL_case_1_local_6(PARAMETERS,TERMINAL(1),ROOT(9),ROOT(10));

PUTPOINTER(__CFURL,*,CFBundleCopyResourceURL( GETPOINTER(0,__CFBundle,*,ROOT(12),TERMINAL(4)),GETCONSTPOINTER(__CFString,*,TERMINAL(9)),GETCONSTPOINTER(__CFString,*,TERMINAL(7)),GETCONSTPOINTER(__CFString,*,TERMINAL(5))),11);
result = kSuccess;

result = vpx_method_CF_20_Bundle_2F_Copy_20_Resource_20_URL_case_1_local_8(PARAMETERS,TERMINAL(10),TERMINAL(8),TERMINAL(6));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(11));
FAILONSUCCESS

result = vpx_method_CF_20_URL_2F_New(PARAMETERS,TERMINAL(11),ROOT(13));

result = kSuccess;

OUTPUT(0,TERMINAL(13))
FOOTERSINGLECASE(14)
}

enum opTrigger vpx_method_CF_20_Bundle_2F_Copy_20_Bundle_20_URL(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CF_20_Reference,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
FAILONSUCCESS

PUTPOINTER(__CFURL,*,CFBundleCopyBundleURL( GETPOINTER(0,__CFBundle,*,ROOT(3),TERMINAL(1))),2);
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
FAILONSUCCESS

result = vpx_method_CF_20_URL_2F_New(PARAMETERS,TERMINAL(2),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERSINGLECASE(5)
}

/* Stop Universals */



Nat4 VPLC_CF_20_Data_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_CF_20_Data_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 200 300 } */
	tempAttribute = attribute_add("Allocator",tempClass,NULL,environment);
	tempAttribute = attribute_add("CF Reference",tempClass,NULL,environment);
	tempAttribute = attribute_add("Release?",tempClass,tempAttribute_CF_20_Data_2F_Release_3F_,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"CF Base");
	return kNOERROR;
}

/* Start Universals: { 307 367 }{ 444 332 } */
enum opTrigger vpx_method_CF_20_Data_2F_New(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(2)
INPUT(0,0)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_CF_20_Data,1,1,NONE,ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_CF_20_Reference,2,0,TERMINAL(1),TERMINAL(0));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASEWITHNONE(2)
}

enum opTrigger vpx_method_CF_20_Data_2F_Get_20_Class_20_Type_20_ID(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

PUTINTEGER(CFDataGetTypeID(),1);
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_CF_20_Data_2F_Append_20_Bytes_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_CF_20_Data_2F_Append_20_Bytes_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Default_20_Bytes_20_Length,3,1,TERMINAL(0),TERMINAL(1),TERMINAL(2),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CF_20_Reference,1,1,TERMINAL(0),ROOT(4));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(4));
NEXTCASEONSUCCESS

CFDataAppendBytes( GETPOINTER(0,__CFData,*,ROOT(5),TERMINAL(4)),GETCONSTPOINTER(unsigned char,*,TERMINAL(1)),GETINTEGER(TERMINAL(3)));
result = kSuccess;

result = kSuccess;

FOOTER(6)
}

enum opTrigger vpx_method_CF_20_Data_2F_Append_20_Bytes_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_CF_20_Data_2F_Append_20_Bytes_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_CF_20_Data_2F_Append_20_Bytes(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_Data_2F_Append_20_Bytes_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2))
vpx_method_CF_20_Data_2F_Append_20_Bytes_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2);
return outcome;
}

enum opTrigger vpx_method_CF_20_Data_2F_Create(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Default_20_Bytes_20_Length,3,1,TERMINAL(0),TERMINAL(1),TERMINAL(2),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Current_20_Allocator,1,1,TERMINAL(0),ROOT(4));

PUTPOINTER(__CFData,*,CFDataCreate( GETCONSTPOINTER(__CFAllocator,*,TERMINAL(4)),GETCONSTPOINTER(unsigned char,*,TERMINAL(1)),GETINTEGER(TERMINAL(3))),5);
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_CF_20_Reference,2,0,TERMINAL(0),TERMINAL(5));

result = kSuccess;

FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_CF_20_Data_2F_Create_20_Mutable(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Current_20_Allocator,1,1,TERMINAL(0),ROOT(2));

result = vpx_method_Default_20_Zero(PARAMETERS,TERMINAL(1),ROOT(3));

PUTPOINTER(__CFData,*,CFDataCreateMutable( GETCONSTPOINTER(__CFAllocator,*,TERMINAL(2)),GETINTEGER(TERMINAL(3))),4);
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_CF_20_Reference,2,0,TERMINAL(0),TERMINAL(4));

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_CF_20_Data_2F_Create_20_Mutable_20_Copy_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_CF_20_Data_2F_Create_20_Mutable_20_Copy_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Current_20_Allocator,1,1,TERMINAL(0),ROOT(3));

result = vpx_method_Default_20_Zero(PARAMETERS,TERMINAL(1),ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CF_20_Reference,1,1,TERMINAL(2),ROOT(5));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(5));
NEXTCASEONSUCCESS

PUTPOINTER(__CFData,*,CFDataCreateMutableCopy( GETCONSTPOINTER(__CFAllocator,*,TERMINAL(3)),GETINTEGER(TERMINAL(4)),GETCONSTPOINTER(__CFData,*,TERMINAL(5))),6);
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_CF_20_Reference,2,0,TERMINAL(0),TERMINAL(6));

result = kSuccess;

FOOTER(7)
}

enum opTrigger vpx_method_CF_20_Data_2F_Create_20_Mutable_20_Copy_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_CF_20_Data_2F_Create_20_Mutable_20_Copy_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_CF_20_Data_2F_Create_20_Mutable_20_Copy(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_Data_2F_Create_20_Mutable_20_Copy_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2))
vpx_method_CF_20_Data_2F_Create_20_Mutable_20_Copy_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2);
return outcome;
}

enum opTrigger vpx_method_CF_20_Data_2F_Default_20_Bytes_20_Length_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_CF_20_Data_2F_Default_20_Bytes_20_Length_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_integer_3F_,1,0,TERMINAL(2));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_CF_20_Data_2F_Default_20_Bytes_20_Length_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_CF_20_Data_2F_Default_20_Bytes_20_Length_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_external_2D_size,1,1,TERMINAL(1),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_CF_20_Data_2F_Default_20_Bytes_20_Length(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_Data_2F_Default_20_Bytes_20_Length_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
vpx_method_CF_20_Data_2F_Default_20_Bytes_20_Length_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0);
return outcome;
}

enum opTrigger vpx_method_CF_20_Data_2F_Delete_20_Bytes_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_CF_20_Data_2F_Delete_20_Bytes_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Default_20_Range,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CF_20_Reference,1,1,TERMINAL(0),ROOT(3));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
NEXTCASEONSUCCESS

CFDataDeleteBytes( GETPOINTER(0,__CFData,*,ROOT(4),TERMINAL(3)),GETSTRUCTURE(8,CFRange,TERMINAL(2)));
result = kSuccess;

result = kSuccess;

FOOTER(5)
}

enum opTrigger vpx_method_CF_20_Data_2F_Delete_20_Bytes_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_CF_20_Data_2F_Delete_20_Bytes_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_CF_20_Data_2F_Delete_20_Bytes(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_Data_2F_Delete_20_Bytes_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_CF_20_Data_2F_Delete_20_Bytes_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_CF_20_Data_2F_Get_20_Byte_20_Pointer_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_Data_2F_Get_20_Byte_20_Pointer_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CF_20_Reference,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
NEXTCASEONSUCCESS

PUTPOINTER(unsigned char,*,CFDataGetBytePtr( GETCONSTPOINTER(__CFData,*,TERMINAL(1))),2);
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_CF_20_Data_2F_Get_20_Byte_20_Pointer_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_Data_2F_Get_20_Byte_20_Pointer_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_CF_20_Data_2F_Get_20_Byte_20_Pointer(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_Data_2F_Get_20_Byte_20_Pointer_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_CF_20_Data_2F_Get_20_Byte_20_Pointer_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_CF_20_Data_2F_Get_20_Length_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_Data_2F_Get_20_Length_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CF_20_Reference,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
NEXTCASEONSUCCESS

PUTINTEGER(CFDataGetLength( GETCONSTPOINTER(__CFData,*,TERMINAL(1))),2);
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_CF_20_Data_2F_Get_20_Length_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_Data_2F_Get_20_Length_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"0",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_CF_20_Data_2F_Get_20_Length(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_Data_2F_Get_20_Length_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_CF_20_Data_2F_Get_20_Length_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_CF_20_Data_2F_Get_20_Mutable_20_Byte_20_Pointer_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_Data_2F_Get_20_Mutable_20_Byte_20_Pointer_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CF_20_Reference,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
NEXTCASEONSUCCESS

PUTPOINTER(unsigned char,*,CFDataGetMutableBytePtr( GETPOINTER(0,__CFData,*,ROOT(3),TERMINAL(1))),2);
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(4)
}

enum opTrigger vpx_method_CF_20_Data_2F_Get_20_Mutable_20_Byte_20_Pointer_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_Data_2F_Get_20_Mutable_20_Byte_20_Pointer_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_CF_20_Data_2F_Get_20_Mutable_20_Byte_20_Pointer(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_Data_2F_Get_20_Mutable_20_Byte_20_Pointer_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_CF_20_Data_2F_Get_20_Mutable_20_Byte_20_Pointer_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_CF_20_Data_2F_Increase_20_Length_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_CF_20_Data_2F_Increase_20_Length_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CF_20_Reference,1,1,TERMINAL(0),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
NEXTCASEONSUCCESS

CFDataIncreaseLength( GETPOINTER(0,__CFData,*,ROOT(3),TERMINAL(2)),GETINTEGER(TERMINAL(1)));
result = kSuccess;

result = kSuccess;

FOOTER(4)
}

enum opTrigger vpx_method_CF_20_Data_2F_Increase_20_Length_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_CF_20_Data_2F_Increase_20_Length_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_CF_20_Data_2F_Increase_20_Length(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_Data_2F_Increase_20_Length_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_CF_20_Data_2F_Increase_20_Length_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_CF_20_Data_2F_Set_20_Length_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_CF_20_Data_2F_Set_20_Length_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CF_20_Reference,1,1,TERMINAL(0),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
NEXTCASEONSUCCESS

CFDataSetLength( GETPOINTER(0,__CFData,*,ROOT(3),TERMINAL(2)),GETINTEGER(TERMINAL(1)));
result = kSuccess;

result = kSuccess;

FOOTER(4)
}

enum opTrigger vpx_method_CF_20_Data_2F_Set_20_Length_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_CF_20_Data_2F_Set_20_Length_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_CF_20_Data_2F_Set_20_Length(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_Data_2F_Set_20_Length_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_CF_20_Data_2F_Set_20_Length_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_CF_20_Data_2F_Replace_20_Bytes_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3);
enum opTrigger vpx_method_CF_20_Data_2F_Replace_20_Bytes_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Default_20_Range,2,1,TERMINAL(0),TERMINAL(1),ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CF_20_Reference,1,1,TERMINAL(0),ROOT(5));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(5));
NEXTCASEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Default_20_Bytes_20_Length,3,1,TERMINAL(0),TERMINAL(2),TERMINAL(3),ROOT(6));

CFDataReplaceBytes( GETPOINTER(0,__CFData,*,ROOT(7),TERMINAL(5)),GETSTRUCTURE(8,CFRange,TERMINAL(4)),GETCONSTPOINTER(unsigned char,*,TERMINAL(2)),GETINTEGER(TERMINAL(6)));
result = kSuccess;

result = kSuccess;

FOOTER(8)
}

enum opTrigger vpx_method_CF_20_Data_2F_Replace_20_Bytes_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3);
enum opTrigger vpx_method_CF_20_Data_2F_Replace_20_Bytes_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = kSuccess;

FOOTER(4)
}

enum opTrigger vpx_method_CF_20_Data_2F_Replace_20_Bytes(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_Data_2F_Replace_20_Bytes_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3))
vpx_method_CF_20_Data_2F_Replace_20_Bytes_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3);
return outcome;
}

enum opTrigger vpx_method_CF_20_Data_2F_Get_20_Bytes_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_CF_20_Data_2F_Get_20_Bytes_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Default_20_Range,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CF_20_Reference,1,1,TERMINAL(0),ROOT(3));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
NEXTCASEONSUCCESS

result = vpx_extget(PARAMETERS,"length",1,2,TERMINAL(2),ROOT(4),ROOT(5));

result = vpx_constant(PARAMETERS,"unsigned char",ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP_make_2D_external,2,1,TERMINAL(6),TERMINAL(5),ROOT(7));

CFDataGetBytes( GETCONSTPOINTER(__CFData,*,TERMINAL(3)),GETSTRUCTURE(8,CFRange,TERMINAL(2)),GETPOINTER(1,unsigned char,*,ROOT(8),TERMINAL(7)));
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(8))
FOOTER(9)
}

enum opTrigger vpx_method_CF_20_Data_2F_Get_20_Bytes_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_CF_20_Data_2F_Get_20_Bytes_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
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

enum opTrigger vpx_method_CF_20_Data_2F_Get_20_Bytes(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_Data_2F_Get_20_Bytes_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_CF_20_Data_2F_Get_20_Bytes_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_CF_20_Data_2F_Create_20_With_20_Object(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_object_2D_to_2D_archive,1,2,TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_constant(PARAMETERS,"unsigned char",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_set_2D_external_2D_type,2,0,TERMINAL(2),TERMINAL(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Create,3,0,TERMINAL(0),TERMINAL(2),TERMINAL(3));

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_CF_20_Data_2F_Get_20_Object_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_Data_2F_Get_20_Object_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(8)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Byte_20_Pointer,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
NEXTCASEONSUCCESS

result = vpx_constant(PARAMETERS,"0",ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Length,1,1,TERMINAL(0),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_block,3,3,TERMINAL(1),TERMINAL(2),TERMINAL(3),ROOT(4),ROOT(5),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP_archive_2D_to_2D_object,1,1,TERMINAL(6),ROOT(7));

result = kSuccess;

OUTPUT(0,TERMINAL(7))
FOOTER(8)
}

enum opTrigger vpx_method_CF_20_Data_2F_Get_20_Object_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_Data_2F_Get_20_Object_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_CF_20_Data_2F_Get_20_Object(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_Data_2F_Get_20_Object_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_CF_20_Data_2F_Get_20_Object_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_CF_20_Data_2F_Get_20_Text_case_1_local_6_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_CF_20_Data_2F_Get_20_Text_case_1_local_6_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_CF_20_String,1,1,NONE,ROOT(2));

result = vpx_constant(PARAMETERS,"unsigned short",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_set_2D_external_2D_type,2,0,TERMINAL(0),TERMINAL(3));

result = vpx_method_Half(PARAMETERS,TERMINAL(1),ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Create_20_With_20_UniChar,3,0,TERMINAL(2),TERMINAL(0),TERMINAL(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_String,1,1,TERMINAL(2),ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Release,1,0,TERMINAL(2));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTERSINGLECASEWITHNONE(6)
}

enum opTrigger vpx_method_CF_20_Data_2F_Get_20_Text_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_CF_20_Data_2F_Get_20_Text_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,kCFStringEncodingUnicode,TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_method_CF_20_Data_2F_Get_20_Text_case_1_local_6_case_1_local_3(PARAMETERS,TERMINAL(0),TERMINAL(1),ROOT(3));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
FAILONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_CF_20_Data_2F_Get_20_Text_case_1_local_6_case_2_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_Data_2F_Get_20_Text_case_1_local_6_case_2_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,kCFStringEncodingUTF8,ROOT(1));

result = vpx_method_Replace_20_NULL(PARAMETERS,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_CF_20_Data_2F_Get_20_Text_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_CF_20_Data_2F_Get_20_Text_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"0",ROOT(3));

result = vpx_method_CF_20_Data_2F_Get_20_Text_case_1_local_6_case_2_local_3(PARAMETERS,TERMINAL(2),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_text,4,3,TERMINAL(0),TERMINAL(3),TERMINAL(1),TERMINAL(4),ROOT(5),ROOT(6),ROOT(7));

result = kSuccess;

OUTPUT(0,TERMINAL(7))
FOOTER(8)
}

enum opTrigger vpx_method_CF_20_Data_2F_Get_20_Text_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_CF_20_Data_2F_Get_20_Text_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_Data_2F_Get_20_Text_case_1_local_6_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
vpx_method_CF_20_Data_2F_Get_20_Text_case_1_local_6_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0);
return outcome;
}

enum opTrigger vpx_method_CF_20_Data_2F_Get_20_Text_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_CF_20_Data_2F_Get_20_Text_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Byte_20_Pointer,1,1,TERMINAL(0),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
NEXTCASEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Length,1,1,TERMINAL(0),ROOT(3));

result = vpx_match(PARAMETERS,"0",TERMINAL(3));
NEXTCASEONSUCCESS

result = vpx_method_CF_20_Data_2F_Get_20_Text_case_1_local_6(PARAMETERS,TERMINAL(2),TERMINAL(3),TERMINAL(1),ROOT(4));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_CF_20_Data_2F_Get_20_Text_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_CF_20_Data_2F_Get_20_Text_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
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

enum opTrigger vpx_method_CF_20_Data_2F_Get_20_Text(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_Data_2F_Get_20_Text_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_CF_20_Data_2F_Get_20_Text_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_CF_20_Data_2F_Create_20_With_20_String_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_CF_20_Data_2F_Create_20_With_20_String_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADERWITHNONE(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_CF_20_String,1,1,NONE,ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Create_20_With_20_String,3,0,TERMINAL(2),TERMINAL(0),NONE);

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CString,2,2,TERMINAL(2),TERMINAL(1),ROOT(3),ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Release,1,0,TERMINAL(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
FAILONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(3))
OUTPUT(1,TERMINAL(4))
FOOTERSINGLECASEWITHNONE(5)
}

enum opTrigger vpx_method_CF_20_Data_2F_Create_20_With_20_String(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_method_CF_20_Data_2F_Create_20_With_20_String_case_1_local_2(PARAMETERS,TERMINAL(1),TERMINAL(2),ROOT(3),ROOT(4));
FAILONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP__2D_1,1,1,TERMINAL(4),ROOT(5));

result = vpx_constant(PARAMETERS,"unsigned char",ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP_set_2D_external_2D_type,2,0,TERMINAL(3),TERMINAL(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Create,3,0,TERMINAL(0),TERMINAL(3),TERMINAL(5));

result = kSuccess;

FOOTERSINGLECASE(7)
}

enum opTrigger vpx_method_CF_20_Data_2F_Get_20_Integer(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Byte_20_Pointer,1,1,TERMINAL(0),ROOT(3));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
FAILONSUCCESS

result = vpx_method_Default_20_Zero(PARAMETERS,TERMINAL(1),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_integer,3,3,TERMINAL(3),TERMINAL(4),TERMINAL(2),ROOT(5),ROOT(6),ROOT(7));

result = kSuccess;

OUTPUT(0,TERMINAL(6))
OUTPUT(1,TERMINAL(7))
FOOTERSINGLECASE(8)
}

/* Stop Universals */



Nat4 VPLC_CF_20_Date_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_CF_20_Date_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 200 300 } */
	tempAttribute = attribute_add("Allocator",tempClass,NULL,environment);
	tempAttribute = attribute_add("CF Reference",tempClass,NULL,environment);
	tempAttribute = attribute_add("Release?",tempClass,tempAttribute_CF_20_Date_2F_Release_3F_,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"CF Base");
	return kNOERROR;
}

/* Start Universals: { 305 705 }{ 200 300 } */
enum opTrigger vpx_method_CF_20_Date_2F_New(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(2)
INPUT(0,0)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_CF_20_Date,1,1,NONE,ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_CF_20_Reference,2,0,TERMINAL(1),TERMINAL(0));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASEWITHNONE(2)
}

enum opTrigger vpx_method_CF_20_Date_2F_Get_20_Class_20_Type_20_ID(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

PUTINTEGER(CFDateGetTypeID(),1);
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_CF_20_Date_2F_Get_20_Absolute_20_Time_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_Date_2F_Get_20_Absolute_20_Time_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CF_20_Reference,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
NEXTCASEONSUCCESS

PUTREAL(CFDateGetAbsoluteTime( GETCONSTPOINTER(__CFDate,*,TERMINAL(1))),2);
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
NEXTCASEONSUCCESS

result = vpx_method_CF_20_Absolute_20_Time_2F_New(PARAMETERS,TERMINAL(2),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_CF_20_Date_2F_Get_20_Absolute_20_Time_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_Date_2F_Get_20_Absolute_20_Time_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_CF_20_Date_2F_Get_20_Absolute_20_Time(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_Date_2F_Get_20_Absolute_20_Time_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_CF_20_Date_2F_Get_20_Absolute_20_Time_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_CF_20_Date_2F_Get_20_Seconds_20_Since_20_Date_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_CF_20_Date_2F_Get_20_Seconds_20_Since_20_Date_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CF_20_Reference,1,1,TERMINAL(0),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
NEXTCASEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CF_20_Reference,1,1,TERMINAL(1),ROOT(3));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
NEXTCASEONSUCCESS

PUTREAL(CFDateGetTimeIntervalSinceDate( GETCONSTPOINTER(__CFDate,*,TERMINAL(2)),GETCONSTPOINTER(__CFDate,*,TERMINAL(3))),4);
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_CF_20_Date_2F_Get_20_Seconds_20_Since_20_Date_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_CF_20_Date_2F_Get_20_Seconds_20_Since_20_Date_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
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

enum opTrigger vpx_method_CF_20_Date_2F_Get_20_Seconds_20_Since_20_Date(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_Date_2F_Get_20_Seconds_20_Since_20_Date_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_CF_20_Date_2F_Get_20_Seconds_20_Since_20_Date_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_CF_20_Date_2F_Compare_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_CF_20_Date_2F_Compare_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CF_20_Reference,1,1,TERMINAL(0),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
NEXTCASEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CF_20_Reference,1,1,TERMINAL(1),ROOT(3));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
NEXTCASEONSUCCESS

result = vpx_constant(PARAMETERS,"NULL",ROOT(4));

PUTINTEGER(CFDateCompare( GETCONSTPOINTER(__CFDate,*,TERMINAL(2)),GETCONSTPOINTER(__CFDate,*,TERMINAL(3)),GETPOINTER(0,void,*,ROOT(6),TERMINAL(4))),5);
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTER(7)
}

enum opTrigger vpx_method_CF_20_Date_2F_Compare_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_CF_20_Date_2F_Compare_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
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

enum opTrigger vpx_method_CF_20_Date_2F_Compare(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_Date_2F_Compare_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_CF_20_Date_2F_Compare_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

/* Stop Universals */



Nat4 VPLC_CF_20_Dictionary_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_CF_20_Dictionary_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 200 300 } */
	tempAttribute = attribute_add("Allocator",tempClass,NULL,environment);
	tempAttribute = attribute_add("CF Reference",tempClass,NULL,environment);
	tempAttribute = attribute_add("Release?",tempClass,tempAttribute_CF_20_Dictionary_2F_Release_3F_,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"CF Base");
	return kNOERROR;
}

/* Start Universals: { 490 696 }{ 281 307 } */
enum opTrigger vpx_method_CF_20_Dictionary_2F_New(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(2)
INPUT(0,0)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_CF_20_Dictionary,1,1,NONE,ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_CF_20_Reference,2,0,TERMINAL(1),TERMINAL(0));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASEWITHNONE(2)
}

enum opTrigger vpx_method_CF_20_Dictionary_2F_Get_20_Class_20_Type_20_ID(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

PUTINTEGER(CFDictionaryGetTypeID(),1);
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_CF_20_Dictionary_2F_Add_20_Key_20_Value_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_Dictionary_2F_Add_20_Key_20_Value_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
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

enum opTrigger vpx_method_CF_20_Dictionary_2F_Add_20_Key_20_Value_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_Dictionary_2F_Add_20_Key_20_Value_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_method__22_Check_22_(PARAMETERS,TERMINAL(0),ROOT(1));

result = vpx_method_CFSTR(PARAMETERS,TERMINAL(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_CF_20_Dictionary_2F_Add_20_Key_20_Value_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_Dictionary_2F_Add_20_Key_20_Value_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_Dictionary_2F_Add_20_Key_20_Value_case_1_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_CF_20_Dictionary_2F_Add_20_Key_20_Value_case_1_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_CF_20_Dictionary_2F_Add_20_Key_20_Value_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_CF_20_Dictionary_2F_Add_20_Key_20_Value_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CF_20_Reference,1,1,TERMINAL(0),ROOT(3));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
TERMINATEONSUCCESS

result = vpx_method_CF_20_Dictionary_2F_Add_20_Key_20_Value_case_1_local_4(PARAMETERS,TERMINAL(1),ROOT(4));

result = vpx_method_To_20_CFType(PARAMETERS,TERMINAL(2),ROOT(5));
NEXTCASEONFAILURE

CFDictionaryAddValue( GETPOINTER(0,__CFDictionary,*,ROOT(6),TERMINAL(3)),GETCONSTPOINTER(void,*,TERMINAL(4)),GETCONSTPOINTER(void,*,TERMINAL(5)));
result = kSuccess;

result = kSuccess;

FOOTER(7)
}

enum opTrigger vpx_method_CF_20_Dictionary_2F_Add_20_Key_20_Value_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_CF_20_Dictionary_2F_Add_20_Key_20_Value_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"no CFType for: ",ROOT(3));

result = vpx_method__22_Check_22_(PARAMETERS,TERMINAL(2),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_log_2D_error,2,0,TERMINAL(3),TERMINAL(4));

result = kSuccess;

FOOTER(5)
}

enum opTrigger vpx_method_CF_20_Dictionary_2F_Add_20_Key_20_Value(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_Dictionary_2F_Add_20_Key_20_Value_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2))
vpx_method_CF_20_Dictionary_2F_Add_20_Key_20_Value_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2);
return outcome;
}

enum opTrigger vpx_method_CF_20_Dictionary_2F_Set_20_Key_20_Value_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_CF_20_Dictionary_2F_Set_20_Key_20_Value_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_method_To_20_CFType(PARAMETERS,TERMINAL(2),ROOT(3));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod__7E_Set_20_Value,3,0,TERMINAL(0),TERMINAL(1),TERMINAL(3));

CFRelease( GETCONSTPOINTER(void,*,TERMINAL(3)));
result = kSuccess;

result = kSuccess;

FOOTER(4)
}

enum opTrigger vpx_method_CF_20_Dictionary_2F_Set_20_Key_20_Value_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_CF_20_Dictionary_2F_Set_20_Key_20_Value_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"no CFType for: ",ROOT(3));

result = vpx_method__22_Check_22_(PARAMETERS,TERMINAL(2),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_log_2D_error,2,0,TERMINAL(3),TERMINAL(4));

result = kSuccess;

FOOTER(5)
}

enum opTrigger vpx_method_CF_20_Dictionary_2F_Set_20_Key_20_Value(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_Dictionary_2F_Set_20_Key_20_Value_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2))
vpx_method_CF_20_Dictionary_2F_Set_20_Key_20_Value_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2);
return outcome;
}

enum opTrigger vpx_method_CF_20_Dictionary_2F_Get_20_Key_20_Value(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod__7E_Get_20_Value,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
FAILONSUCCESS

result = vpx_method_From_20_CFType(PARAMETERS,TERMINAL(2),ROOT(3));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_CF_20_Dictionary_2F_Create_20_Mutable_20_For_20_CFTypes_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0);
enum opTrigger vpx_method_CF_20_Dictionary_2F_Create_20_Mutable_20_For_20_CFTypes_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0)
{
HEADER(4)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"CFDictionaryValueCallBacks\"",ROOT(0));

result = vpx_constant(PARAMETERS,"com.apple.CoreFoundation",ROOT(1));

result = vpx_constant(PARAMETERS,"kCFTypeDictionaryValueCallBacks",ROOT(2));

result = vpx_method_Get_20_Framework_20_Structure(PARAMETERS,TERMINAL(2),TERMINAL(1),TERMINAL(0),ROOT(3));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_CF_20_Dictionary_2F_Create_20_Mutable_20_For_20_CFTypes_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0);
enum opTrigger vpx_method_CF_20_Dictionary_2F_Create_20_Mutable_20_For_20_CFTypes_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0)
{
HEADER(4)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"CFDictionaryKeyCallBacks\"",ROOT(0));

result = vpx_constant(PARAMETERS,"com.apple.CoreFoundation",ROOT(1));

result = vpx_constant(PARAMETERS,"kCFTypeDictionaryKeyCallBacks",ROOT(2));

result = vpx_method_Get_20_Framework_20_Structure(PARAMETERS,TERMINAL(2),TERMINAL(1),TERMINAL(0),ROOT(3));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_CF_20_Dictionary_2F_Create_20_Mutable_20_For_20_CFTypes(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_CF_20_Dictionary_2F_Create_20_Mutable_20_For_20_CFTypes_case_1_local_2(PARAMETERS,ROOT(2));
FAILONFAILURE

result = vpx_method_CF_20_Dictionary_2F_Create_20_Mutable_20_For_20_CFTypes_case_1_local_3(PARAMETERS,ROOT(3));
FAILONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Current_20_Allocator,1,1,TERMINAL(0),ROOT(4));

result = vpx_method_Default_20_Zero(PARAMETERS,TERMINAL(1),ROOT(5));

PUTPOINTER(__CFDictionary,*,CFDictionaryCreateMutable( GETCONSTPOINTER(__CFAllocator,*,TERMINAL(4)),GETINTEGER(TERMINAL(5)),GETCONSTPOINTER(CFDictionaryKeyCallBacks,*,TERMINAL(3)),GETCONSTPOINTER(CFDictionaryValueCallBacks,*,TERMINAL(2))),6);
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(6));
FAILONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_CF_20_Reference,2,0,TERMINAL(0),TERMINAL(6));

result = kSuccess;

FOOTERSINGLECASE(7)
}

enum opTrigger vpx_method_CF_20_Dictionary_2F7E_Set_20_Value_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_Dictionary_2F7E_Set_20_Value_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
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

enum opTrigger vpx_method_CF_20_Dictionary_2F7E_Set_20_Value_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_Dictionary_2F7E_Set_20_Value_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
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

enum opTrigger vpx_method_CF_20_Dictionary_2F7E_Set_20_Value_case_1_local_4_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_Dictionary_2F7E_Set_20_Value_case_1_local_4_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_method__22_Check_22_(PARAMETERS,TERMINAL(0),ROOT(1));

result = vpx_method_CFSTR(PARAMETERS,TERMINAL(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_CF_20_Dictionary_2F7E_Set_20_Value_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_Dictionary_2F7E_Set_20_Value_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_Dictionary_2F7E_Set_20_Value_case_1_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_CF_20_Dictionary_2F7E_Set_20_Value_case_1_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_CF_20_Dictionary_2F7E_Set_20_Value_case_1_local_4_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_CF_20_Dictionary_2F7E_Set_20_Value_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_CF_20_Dictionary_2F7E_Set_20_Value_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"__CFDictionary",ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_set_2D_external_2D_type,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_CF_20_Dictionary_2F7E_Set_20_Value(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CF_20_Reference,1,1,TERMINAL(0),ROOT(3));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
TERMINATEONSUCCESS

result = vpx_method_CF_20_Dictionary_2F7E_Set_20_Value_case_1_local_4(PARAMETERS,TERMINAL(1),ROOT(4));

result = vpx_method_CF_20_Dictionary_2F7E_Set_20_Value_case_1_local_5(PARAMETERS,TERMINAL(3));

CFDictionarySetValue( GETPOINTER(0,__CFDictionary,*,ROOT(5),TERMINAL(3)),GETCONSTPOINTER(void,*,TERMINAL(4)),GETCONSTPOINTER(void,*,TERMINAL(2)));
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_CF_20_Dictionary_2F7E_Get_20_Value_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_CF_20_Dictionary_2F7E_Get_20_Value_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"__CFDictionary",ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_set_2D_external_2D_type,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_CF_20_Dictionary_2F7E_Get_20_Value_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_Dictionary_2F7E_Get_20_Value_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
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

enum opTrigger vpx_method_CF_20_Dictionary_2F7E_Get_20_Value_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_Dictionary_2F7E_Get_20_Value_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_method__22_Check_22_(PARAMETERS,TERMINAL(0),ROOT(1));

result = vpx_method_CFSTR(PARAMETERS,TERMINAL(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_CF_20_Dictionary_2F7E_Get_20_Value_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_Dictionary_2F7E_Get_20_Value_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_Dictionary_2F7E_Get_20_Value_case_1_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_CF_20_Dictionary_2F7E_Get_20_Value_case_1_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_CF_20_Dictionary_2F7E_Get_20_Value_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_CF_20_Dictionary_2F7E_Get_20_Value_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CF_20_Reference,1,1,TERMINAL(0),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
NEXTCASEONSUCCESS

result = vpx_method_CF_20_Dictionary_2F7E_Get_20_Value_case_1_local_4(PARAMETERS,TERMINAL(2));

result = vpx_method_CF_20_Dictionary_2F7E_Get_20_Value_case_1_local_5(PARAMETERS,TERMINAL(1),ROOT(3));

PUTPOINTER(void,*,CFDictionaryGetValue( GETCONSTPOINTER(__CFDictionary,*,TERMINAL(2)),GETCONSTPOINTER(void,*,TERMINAL(3))),4);
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_CF_20_Dictionary_2F7E_Get_20_Value_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_CF_20_Dictionary_2F7E_Get_20_Value_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
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

enum opTrigger vpx_method_CF_20_Dictionary_2F7E_Get_20_Value(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_Dictionary_2F7E_Get_20_Value_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_CF_20_Dictionary_2F7E_Get_20_Value_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

/* Stop Universals */



Nat4 VPLC_CF_20_Number_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_CF_20_Number_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 200 300 } */
	tempAttribute = attribute_add("Allocator",tempClass,NULL,environment);
	tempAttribute = attribute_add("CF Reference",tempClass,NULL,environment);
	tempAttribute = attribute_add("Release?",tempClass,tempAttribute_CF_20_Number_2F_Release_3F_,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"CF Base");
	return kNOERROR;
}

/* Start Universals: { 306 705 }{ 282 299 } */
enum opTrigger vpx_method_CF_20_Number_2F_New(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(2)
INPUT(0,0)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_CF_20_Number,1,1,NONE,ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_CF_20_Reference,2,0,TERMINAL(1),TERMINAL(0));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASEWITHNONE(2)
}

enum opTrigger vpx_method_CF_20_Number_2F_Get_20_Class_20_Type_20_ID(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

PUTINTEGER(CFNumberGetTypeID(),1);
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_CF_20_Number_2F_Create_case_1_local_3_case_1_local_2_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_CF_20_Number_2F_Create_case_1_local_3_case_1_local_2_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,kCFNumberSInt64Type,TERMINAL(0));
TERMINATEONSUCCESS

result = vpx_extmatch(PARAMETERS,kCFNumberFloat64Type,TERMINAL(0));
TERMINATEONSUCCESS

result = vpx_extmatch(PARAMETERS,kCFNumberLongLongType,TERMINAL(0));
TERMINATEONSUCCESS

result = vpx_extmatch(PARAMETERS,kCFNumberDoubleType,TERMINAL(0));
TERMINATEONSUCCESS

result = kSuccess;
FAILONSUCCESS

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_CF_20_Number_2F_Create_case_1_local_3_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_Number_2F_Create_case_1_local_3_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_method_CF_20_Number_2F_Create_case_1_local_3_case_1_local_2_case_1_local_2(PARAMETERS,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"8",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_CF_20_Number_2F_Create_case_1_local_3_case_1_local_2_case_2_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_CF_20_Number_2F_Create_case_1_local_3_case_1_local_2_case_2_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,kCFNumberSInt32Type,TERMINAL(0));
TERMINATEONSUCCESS

result = vpx_extmatch(PARAMETERS,kCFNumberFloat32Type,TERMINAL(0));
TERMINATEONSUCCESS

result = vpx_extmatch(PARAMETERS,kCFNumberLongType,TERMINAL(0));
TERMINATEONSUCCESS

result = vpx_extmatch(PARAMETERS,kCFNumberFloatType,TERMINAL(0));
TERMINATEONSUCCESS

result = vpx_extmatch(PARAMETERS,kCFNumberCFIndexType,TERMINAL(0));
TERMINATEONSUCCESS

result = kSuccess;
FAILONSUCCESS

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_CF_20_Number_2F_Create_case_1_local_3_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_Number_2F_Create_case_1_local_3_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_method_CF_20_Number_2F_Create_case_1_local_3_case_1_local_2_case_2_local_2(PARAMETERS,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"4",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_CF_20_Number_2F_Create_case_1_local_3_case_1_local_2_case_3_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_CF_20_Number_2F_Create_case_1_local_3_case_1_local_2_case_3_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,kCFNumberSInt16Type,TERMINAL(0));
TERMINATEONSUCCESS

result = vpx_extmatch(PARAMETERS,kCFNumberShortType,TERMINAL(0));
TERMINATEONSUCCESS

result = vpx_extmatch(PARAMETERS,kCFNumberIntType,TERMINAL(0));
TERMINATEONSUCCESS

result = kSuccess;
FAILONSUCCESS

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_CF_20_Number_2F_Create_case_1_local_3_case_1_local_2_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_Number_2F_Create_case_1_local_3_case_1_local_2_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_method_CF_20_Number_2F_Create_case_1_local_3_case_1_local_2_case_3_local_2(PARAMETERS,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"2",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_CF_20_Number_2F_Create_case_1_local_3_case_1_local_2_case_4_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_CF_20_Number_2F_Create_case_1_local_3_case_1_local_2_case_4_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,kCFNumberCharType,TERMINAL(0));
TERMINATEONSUCCESS

result = vpx_extmatch(PARAMETERS,kCFNumberSInt8Type,TERMINAL(0));
TERMINATEONSUCCESS

result = kSuccess;
FAILONSUCCESS

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_CF_20_Number_2F_Create_case_1_local_3_case_1_local_2_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_Number_2F_Create_case_1_local_3_case_1_local_2_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_method_CF_20_Number_2F_Create_case_1_local_3_case_1_local_2_case_4_local_2(PARAMETERS,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"1",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_CF_20_Number_2F_Create_case_1_local_3_case_1_local_2_case_5(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_Number_2F_Create_case_1_local_3_case_1_local_2_case_5(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;
FAILONSUCCESS

OUTPUT(0,NONE)
FOOTERWITHNONE(1)
}

enum opTrigger vpx_method_CF_20_Number_2F_Create_case_1_local_3_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_Number_2F_Create_case_1_local_3_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_Number_2F_Create_case_1_local_3_case_1_local_2_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_CF_20_Number_2F_Create_case_1_local_3_case_1_local_2_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_CF_20_Number_2F_Create_case_1_local_3_case_1_local_2_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_CF_20_Number_2F_Create_case_1_local_3_case_1_local_2_case_4(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_CF_20_Number_2F_Create_case_1_local_3_case_1_local_2_case_5(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_CF_20_Number_2F_Create_case_1_local_3_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_CF_20_Number_2F_Create_case_1_local_3_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_integer_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"0",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_put_2D_integer,4,2,TERMINAL(1),TERMINAL(3),TERMINAL(2),TERMINAL(0),ROOT(4),ROOT(5));

result = kSuccess;

FOOTER(6)
}

enum opTrigger vpx_method_CF_20_Number_2F_Create_case_1_local_3_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_CF_20_Number_2F_Create_case_1_local_3_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"0",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_real_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_put_2D_real,4,2,TERMINAL(1),TERMINAL(3),TERMINAL(2),TERMINAL(0),ROOT(4),ROOT(5));

result = kSuccess;

FOOTER(6)
}

enum opTrigger vpx_method_CF_20_Number_2F_Create_case_1_local_3_case_1_local_5_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_CF_20_Number_2F_Create_case_1_local_3_case_1_local_5_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
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

enum opTrigger vpx_method_CF_20_Number_2F_Create_case_1_local_3_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_CF_20_Number_2F_Create_case_1_local_3_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_Number_2F_Create_case_1_local_3_case_1_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2))
if(vpx_method_CF_20_Number_2F_Create_case_1_local_3_case_1_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2))
vpx_method_CF_20_Number_2F_Create_case_1_local_3_case_1_local_5_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2);
return outcome;
}

enum opTrigger vpx_method_CF_20_Number_2F_Create_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_CF_20_Number_2F_Create_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_CF_20_Number_2F_Create_case_1_local_3_case_1_local_2(PARAMETERS,TERMINAL(0),ROOT(2));
FAILONFAILURE

result = vpx_constant(PARAMETERS,"void",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_make_2D_external,2,1,TERMINAL(3),TERMINAL(2),ROOT(4));

result = vpx_method_CF_20_Number_2F_Create_case_1_local_3_case_1_local_5(PARAMETERS,TERMINAL(1),TERMINAL(4),TERMINAL(2));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_CF_20_Number_2F_Create_case_1_local_4_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_Number_2F_Create_case_1_local_4_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"CFNumberType",ROOT(1));

result = vpx_constant(PARAMETERS,"4",ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_make_2D_external,2,1,TERMINAL(1),TERMINAL(2),ROOT(3));

result = vpx_constant(PARAMETERS,"0",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_put_2D_integer,4,2,TERMINAL(3),TERMINAL(4),TERMINAL(2),TERMINAL(0),ROOT(5),ROOT(6));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASE(7)
}

enum opTrigger vpx_method_CF_20_Number_2F_Create_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_CF_20_Number_2F_Create_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_method_CF_20_Number_2F_Create_case_1_local_4_case_1_local_2(PARAMETERS,TERMINAL(1),ROOT(3));

PUTPOINTER(__CFNumber,*,CFNumberCreate( GETCONSTPOINTER(__CFAllocator,*,TERMINAL(0)),GETINTEGER(TERMINAL(1)),GETCONSTPOINTER(void,*,TERMINAL(2))),4);
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_CF_20_Number_2F_Create(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Current_20_Allocator,1,1,TERMINAL(0),ROOT(3));

result = vpx_method_CF_20_Number_2F_Create_case_1_local_3(PARAMETERS,TERMINAL(1),TERMINAL(2),ROOT(4));

result = vpx_method_CF_20_Number_2F_Create_case_1_local_4(PARAMETERS,TERMINAL(3),TERMINAL(1),TERMINAL(4),ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_CF_20_Reference,2,0,TERMINAL(0),TERMINAL(5));

result = kSuccess;

FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_CF_20_Number_2F_Get_20_Byte_20_Size_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_Number_2F_Get_20_Byte_20_Size_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CF_20_Reference,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
NEXTCASEONSUCCESS

PUTINTEGER(CFNumberGetByteSize( GETCONSTPOINTER(__CFNumber,*,TERMINAL(1))),2);
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_CF_20_Number_2F_Get_20_Byte_20_Size_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_Number_2F_Get_20_Byte_20_Size_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"0",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_CF_20_Number_2F_Get_20_Byte_20_Size(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_Number_2F_Get_20_Byte_20_Size_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_CF_20_Number_2F_Get_20_Byte_20_Size_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_CF_20_Number_2F_Get_20_Type_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_Number_2F_Get_20_Type_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CF_20_Reference,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
NEXTCASEONSUCCESS

PUTINTEGER(CFNumberGetType( GETCONSTPOINTER(__CFNumber,*,TERMINAL(1))),2);
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_CF_20_Number_2F_Get_20_Type_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_Number_2F_Get_20_Type_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"0",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_CF_20_Number_2F_Get_20_Type(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_Number_2F_Get_20_Type_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_CF_20_Number_2F_Get_20_Type_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_CF_20_Number_2F_Is_20_Float_20_Type_3F__case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_Number_2F_Is_20_Float_20_Type_3F__case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CF_20_Reference,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
NEXTCASEONSUCCESS

PUTINTEGER(CFNumberIsFloatType( GETCONSTPOINTER(__CFNumber,*,TERMINAL(1))),2);
result = kSuccess;

result = vpx_method_Integer_20_To_20_Boolean(PARAMETERS,TERMINAL(2),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_CF_20_Number_2F_Is_20_Float_20_Type_3F__case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_Number_2F_Is_20_Float_20_Type_3F__case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"FALSE",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_CF_20_Number_2F_Is_20_Float_20_Type_3F_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_Number_2F_Is_20_Float_20_Type_3F__case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_CF_20_Number_2F_Is_20_Float_20_Type_3F__case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_CF_20_Number_2F_Get_20_Number_20_Value_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_Number_2F_Get_20_Number_20_Value_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"CFNumberType",ROOT(1));

result = vpx_constant(PARAMETERS,"4",ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_make_2D_external,2,1,TERMINAL(1),TERMINAL(2),ROOT(3));

result = vpx_constant(PARAMETERS,"0",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_put_2D_integer,4,2,TERMINAL(3),TERMINAL(4),TERMINAL(2),TERMINAL(0),ROOT(5),ROOT(6));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASE(7)
}

enum opTrigger vpx_method_CF_20_Number_2F_Get_20_Number_20_Value_case_1_local_5_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_CF_20_Number_2F_Get_20_Number_20_Value_case_1_local_5_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,kCFNumberSInt64Type,TERMINAL(0));
TERMINATEONSUCCESS

result = vpx_extmatch(PARAMETERS,kCFNumberFloat64Type,TERMINAL(0));
TERMINATEONSUCCESS

result = vpx_extmatch(PARAMETERS,kCFNumberLongLongType,TERMINAL(0));
TERMINATEONSUCCESS

result = vpx_extmatch(PARAMETERS,kCFNumberDoubleType,TERMINAL(0));
TERMINATEONSUCCESS

result = kSuccess;
FAILONSUCCESS

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_CF_20_Number_2F_Get_20_Number_20_Value_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_Number_2F_Get_20_Number_20_Value_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_method_CF_20_Number_2F_Get_20_Number_20_Value_case_1_local_5_case_1_local_2(PARAMETERS,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"8",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_CF_20_Number_2F_Get_20_Number_20_Value_case_1_local_5_case_2_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_CF_20_Number_2F_Get_20_Number_20_Value_case_1_local_5_case_2_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,kCFNumberSInt32Type,TERMINAL(0));
TERMINATEONSUCCESS

result = vpx_extmatch(PARAMETERS,kCFNumberFloat32Type,TERMINAL(0));
TERMINATEONSUCCESS

result = vpx_extmatch(PARAMETERS,kCFNumberLongType,TERMINAL(0));
TERMINATEONSUCCESS

result = vpx_extmatch(PARAMETERS,kCFNumberFloatType,TERMINAL(0));
TERMINATEONSUCCESS

result = vpx_extmatch(PARAMETERS,kCFNumberCFIndexType,TERMINAL(0));
TERMINATEONSUCCESS

result = kSuccess;
FAILONSUCCESS

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_CF_20_Number_2F_Get_20_Number_20_Value_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_Number_2F_Get_20_Number_20_Value_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_method_CF_20_Number_2F_Get_20_Number_20_Value_case_1_local_5_case_2_local_2(PARAMETERS,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"4",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_CF_20_Number_2F_Get_20_Number_20_Value_case_1_local_5_case_3_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_CF_20_Number_2F_Get_20_Number_20_Value_case_1_local_5_case_3_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,kCFNumberSInt16Type,TERMINAL(0));
TERMINATEONSUCCESS

result = vpx_extmatch(PARAMETERS,kCFNumberShortType,TERMINAL(0));
TERMINATEONSUCCESS

result = vpx_extmatch(PARAMETERS,kCFNumberIntType,TERMINAL(0));
TERMINATEONSUCCESS

result = kSuccess;
FAILONSUCCESS

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_CF_20_Number_2F_Get_20_Number_20_Value_case_1_local_5_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_Number_2F_Get_20_Number_20_Value_case_1_local_5_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_method_CF_20_Number_2F_Get_20_Number_20_Value_case_1_local_5_case_3_local_2(PARAMETERS,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"2",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_CF_20_Number_2F_Get_20_Number_20_Value_case_1_local_5_case_4_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_CF_20_Number_2F_Get_20_Number_20_Value_case_1_local_5_case_4_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,kCFNumberCharType,TERMINAL(0));
TERMINATEONSUCCESS

result = vpx_extmatch(PARAMETERS,kCFNumberSInt8Type,TERMINAL(0));
TERMINATEONSUCCESS

result = kSuccess;
FAILONSUCCESS

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_CF_20_Number_2F_Get_20_Number_20_Value_case_1_local_5_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_Number_2F_Get_20_Number_20_Value_case_1_local_5_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_method_CF_20_Number_2F_Get_20_Number_20_Value_case_1_local_5_case_4_local_2(PARAMETERS,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"1",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_CF_20_Number_2F_Get_20_Number_20_Value_case_1_local_5_case_5(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_Number_2F_Get_20_Number_20_Value_case_1_local_5_case_5(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;
FAILONSUCCESS

OUTPUT(0,NONE)
FOOTERWITHNONE(1)
}

enum opTrigger vpx_method_CF_20_Number_2F_Get_20_Number_20_Value_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_Number_2F_Get_20_Number_20_Value_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_Number_2F_Get_20_Number_20_Value_case_1_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_CF_20_Number_2F_Get_20_Number_20_Value_case_1_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_CF_20_Number_2F_Get_20_Number_20_Value_case_1_local_5_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_CF_20_Number_2F_Get_20_Number_20_Value_case_1_local_5_case_4(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_CF_20_Number_2F_Get_20_Number_20_Value_case_1_local_5_case_5(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_CF_20_Number_2F_Get_20_Number_20_Value_case_1_local_6_case_1_local_2_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_CF_20_Number_2F_Get_20_Number_20_Value_case_1_local_6_case_1_local_2_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,kCFNumberSInt64Type,TERMINAL(0));
TERMINATEONSUCCESS

result = vpx_extmatch(PARAMETERS,kCFNumberFloat64Type,TERMINAL(0));
TERMINATEONSUCCESS

result = vpx_extmatch(PARAMETERS,kCFNumberLongLongType,TERMINAL(0));
TERMINATEONSUCCESS

result = vpx_extmatch(PARAMETERS,kCFNumberDoubleType,TERMINAL(0));
TERMINATEONSUCCESS

result = kSuccess;
FAILONSUCCESS

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_CF_20_Number_2F_Get_20_Number_20_Value_case_1_local_6_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_Number_2F_Get_20_Number_20_Value_case_1_local_6_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_method_CF_20_Number_2F_Get_20_Number_20_Value_case_1_local_6_case_1_local_2_case_1_local_2(PARAMETERS,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"8",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_CF_20_Number_2F_Get_20_Number_20_Value_case_1_local_6_case_1_local_2_case_2_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_CF_20_Number_2F_Get_20_Number_20_Value_case_1_local_6_case_1_local_2_case_2_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,kCFNumberSInt32Type,TERMINAL(0));
TERMINATEONSUCCESS

result = vpx_extmatch(PARAMETERS,kCFNumberFloat32Type,TERMINAL(0));
TERMINATEONSUCCESS

result = vpx_extmatch(PARAMETERS,kCFNumberLongType,TERMINAL(0));
TERMINATEONSUCCESS

result = vpx_extmatch(PARAMETERS,kCFNumberFloatType,TERMINAL(0));
TERMINATEONSUCCESS

result = vpx_extmatch(PARAMETERS,kCFNumberCFIndexType,TERMINAL(0));
TERMINATEONSUCCESS

result = kSuccess;
FAILONSUCCESS

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_CF_20_Number_2F_Get_20_Number_20_Value_case_1_local_6_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_Number_2F_Get_20_Number_20_Value_case_1_local_6_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_method_CF_20_Number_2F_Get_20_Number_20_Value_case_1_local_6_case_1_local_2_case_2_local_2(PARAMETERS,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"4",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_CF_20_Number_2F_Get_20_Number_20_Value_case_1_local_6_case_1_local_2_case_3_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_CF_20_Number_2F_Get_20_Number_20_Value_case_1_local_6_case_1_local_2_case_3_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,kCFNumberSInt16Type,TERMINAL(0));
TERMINATEONSUCCESS

result = vpx_extmatch(PARAMETERS,kCFNumberShortType,TERMINAL(0));
TERMINATEONSUCCESS

result = vpx_extmatch(PARAMETERS,kCFNumberIntType,TERMINAL(0));
TERMINATEONSUCCESS

result = kSuccess;
FAILONSUCCESS

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_CF_20_Number_2F_Get_20_Number_20_Value_case_1_local_6_case_1_local_2_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_Number_2F_Get_20_Number_20_Value_case_1_local_6_case_1_local_2_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_method_CF_20_Number_2F_Get_20_Number_20_Value_case_1_local_6_case_1_local_2_case_3_local_2(PARAMETERS,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"2",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_CF_20_Number_2F_Get_20_Number_20_Value_case_1_local_6_case_1_local_2_case_4_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_CF_20_Number_2F_Get_20_Number_20_Value_case_1_local_6_case_1_local_2_case_4_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,kCFNumberCharType,TERMINAL(0));
TERMINATEONSUCCESS

result = vpx_extmatch(PARAMETERS,kCFNumberSInt8Type,TERMINAL(0));
TERMINATEONSUCCESS

result = kSuccess;
FAILONSUCCESS

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_CF_20_Number_2F_Get_20_Number_20_Value_case_1_local_6_case_1_local_2_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_Number_2F_Get_20_Number_20_Value_case_1_local_6_case_1_local_2_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_method_CF_20_Number_2F_Get_20_Number_20_Value_case_1_local_6_case_1_local_2_case_4_local_2(PARAMETERS,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"1",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_CF_20_Number_2F_Get_20_Number_20_Value_case_1_local_6_case_1_local_2_case_5(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_Number_2F_Get_20_Number_20_Value_case_1_local_6_case_1_local_2_case_5(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;
FAILONSUCCESS

OUTPUT(0,NONE)
FOOTERWITHNONE(1)
}

enum opTrigger vpx_method_CF_20_Number_2F_Get_20_Number_20_Value_case_1_local_6_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_Number_2F_Get_20_Number_20_Value_case_1_local_6_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_Number_2F_Get_20_Number_20_Value_case_1_local_6_case_1_local_2_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_CF_20_Number_2F_Get_20_Number_20_Value_case_1_local_6_case_1_local_2_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_CF_20_Number_2F_Get_20_Number_20_Value_case_1_local_6_case_1_local_2_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_CF_20_Number_2F_Get_20_Number_20_Value_case_1_local_6_case_1_local_2_case_4(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_CF_20_Number_2F_Get_20_Number_20_Value_case_1_local_6_case_1_local_2_case_5(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_CF_20_Number_2F_Get_20_Number_20_Value_case_1_local_6_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_CF_20_Number_2F_Get_20_Number_20_Value_case_1_local_6_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_integer_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"0",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_put_2D_integer,4,2,TERMINAL(1),TERMINAL(3),TERMINAL(2),TERMINAL(0),ROOT(4),ROOT(5));

result = kSuccess;

FOOTER(6)
}

enum opTrigger vpx_method_CF_20_Number_2F_Get_20_Number_20_Value_case_1_local_6_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_CF_20_Number_2F_Get_20_Number_20_Value_case_1_local_6_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"0",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_real_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_put_2D_real,4,2,TERMINAL(1),TERMINAL(3),TERMINAL(2),TERMINAL(0),ROOT(4),ROOT(5));

result = kSuccess;

FOOTER(6)
}

enum opTrigger vpx_method_CF_20_Number_2F_Get_20_Number_20_Value_case_1_local_6_case_1_local_6_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_CF_20_Number_2F_Get_20_Number_20_Value_case_1_local_6_case_1_local_6_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
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

enum opTrigger vpx_method_CF_20_Number_2F_Get_20_Number_20_Value_case_1_local_6_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_CF_20_Number_2F_Get_20_Number_20_Value_case_1_local_6_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_Number_2F_Get_20_Number_20_Value_case_1_local_6_case_1_local_6_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2))
if(vpx_method_CF_20_Number_2F_Get_20_Number_20_Value_case_1_local_6_case_1_local_6_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2))
vpx_method_CF_20_Number_2F_Get_20_Number_20_Value_case_1_local_6_case_1_local_6_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2);
return outcome;
}

enum opTrigger vpx_method_CF_20_Number_2F_Get_20_Number_20_Value_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_Number_2F_Get_20_Number_20_Value_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_method_CF_20_Number_2F_Get_20_Number_20_Value_case_1_local_6_case_1_local_2(PARAMETERS,TERMINAL(0),ROOT(1));
FAILONFAILURE

result = vpx_constant(PARAMETERS,"void",ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_make_2D_external,2,1,TERMINAL(2),TERMINAL(1),ROOT(3));

result = vpx_constant(PARAMETERS,"0",ROOT(4));

result = vpx_method_CF_20_Number_2F_Get_20_Number_20_Value_case_1_local_6_case_1_local_6(PARAMETERS,TERMINAL(4),TERMINAL(3),TERMINAL(1));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_CF_20_Number_2F_Get_20_Number_20_Value_case_1_local_9_case_1_local_3_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_CF_20_Number_2F_Get_20_Number_20_Value_case_1_local_9_case_1_local_3_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,kCFNumberLongType,TERMINAL(0));
TERMINATEONSUCCESS

result = vpx_extmatch(PARAMETERS,kCFNumberSInt32Type,TERMINAL(0));
TERMINATEONSUCCESS

result = kSuccess;
FAILONSUCCESS

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_CF_20_Number_2F_Get_20_Number_20_Value_case_1_local_9_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_Number_2F_Get_20_Number_20_Value_case_1_local_9_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_method_CF_20_Number_2F_Get_20_Number_20_Value_case_1_local_9_case_1_local_3_case_1_local_2(PARAMETERS,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"int",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_CF_20_Number_2F_Get_20_Number_20_Value_case_1_local_9_case_1_local_3_case_2_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_CF_20_Number_2F_Get_20_Number_20_Value_case_1_local_9_case_1_local_3_case_2_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,kCFNumberFloatType,TERMINAL(0));
TERMINATEONSUCCESS

result = vpx_extmatch(PARAMETERS,kCFNumberFloat32Type,TERMINAL(0));
TERMINATEONSUCCESS

result = kSuccess;
FAILONSUCCESS

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_CF_20_Number_2F_Get_20_Number_20_Value_case_1_local_9_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_Number_2F_Get_20_Number_20_Value_case_1_local_9_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_method_CF_20_Number_2F_Get_20_Number_20_Value_case_1_local_9_case_1_local_3_case_2_local_2(PARAMETERS,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"real",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_CF_20_Number_2F_Get_20_Number_20_Value_case_1_local_9_case_1_local_3_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_Number_2F_Get_20_Number_20_Value_case_1_local_9_case_1_local_3_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;
FAILONSUCCESS

OUTPUT(0,NONE)
FOOTERWITHNONE(1)
}

enum opTrigger vpx_method_CF_20_Number_2F_Get_20_Number_20_Value_case_1_local_9_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_Number_2F_Get_20_Number_20_Value_case_1_local_9_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_Number_2F_Get_20_Number_20_Value_case_1_local_9_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_CF_20_Number_2F_Get_20_Number_20_Value_case_1_local_9_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_CF_20_Number_2F_Get_20_Number_20_Value_case_1_local_9_case_1_local_3_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_CF_20_Number_2F_Get_20_Number_20_Value_case_1_local_9_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_CF_20_Number_2F_Get_20_Number_20_Value_case_1_local_9_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_match(PARAMETERS,"int",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"0",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_integer,3,3,TERMINAL(1),TERMINAL(3),TERMINAL(2),ROOT(4),ROOT(5),ROOT(6));

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTER(7)
}

enum opTrigger vpx_method_CF_20_Number_2F_Get_20_Number_20_Value_case_1_local_9_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_CF_20_Number_2F_Get_20_Number_20_Value_case_1_local_9_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_match(PARAMETERS,"real",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"0",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_real,3,3,TERMINAL(1),TERMINAL(3),TERMINAL(2),ROOT(4),ROOT(5),ROOT(6));

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTER(7)
}

enum opTrigger vpx_method_CF_20_Number_2F_Get_20_Number_20_Value_case_1_local_9_case_1_local_4_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_CF_20_Number_2F_Get_20_Number_20_Value_case_1_local_9_case_1_local_4_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADERWITHNONE(3)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = kSuccess;
FAILONSUCCESS

OUTPUT(0,NONE)
FOOTERWITHNONE(3)
}

enum opTrigger vpx_method_CF_20_Number_2F_Get_20_Number_20_Value_case_1_local_9_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_CF_20_Number_2F_Get_20_Number_20_Value_case_1_local_9_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_Number_2F_Get_20_Number_20_Value_case_1_local_9_case_1_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
if(vpx_method_CF_20_Number_2F_Get_20_Number_20_Value_case_1_local_9_case_1_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
vpx_method_CF_20_Number_2F_Get_20_Number_20_Value_case_1_local_9_case_1_local_4_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0);
return outcome;
}

enum opTrigger vpx_method_CF_20_Number_2F_Get_20_Number_20_Value_case_1_local_9_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0);
enum opTrigger vpx_method_CF_20_Number_2F_Get_20_Number_20_Value_case_1_local_9_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_method_CF_20_Number_2F_Get_20_Number_20_Value_case_1_local_9_case_1_local_3(PARAMETERS,TERMINAL(0),ROOT(4));
FAILONFAILURE

result = vpx_method_CF_20_Number_2F_Get_20_Number_20_Value_case_1_local_9_case_1_local_4(PARAMETERS,TERMINAL(4),TERMINAL(1),TERMINAL(3),ROOT(5));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTER(6)
}

enum opTrigger vpx_method_CF_20_Number_2F_Get_20_Number_20_Value_case_1_local_9_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0);
enum opTrigger vpx_method_CF_20_Number_2F_Get_20_Number_20_Value_case_1_local_9_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_CF_20_Number_2F_Get_20_Number_20_Value_case_1_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0);
enum opTrigger vpx_method_CF_20_Number_2F_Get_20_Number_20_Value_case_1_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_Number_2F_Get_20_Number_20_Value_case_1_local_9_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0))
vpx_method_CF_20_Number_2F_Get_20_Number_20_Value_case_1_local_9_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0);
return outcome;
}

enum opTrigger vpx_method_CF_20_Number_2F_Get_20_Number_20_Value(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(10)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CF_20_Reference,1,1,TERMINAL(0),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
FAILONSUCCESS

result = vpx_method_CF_20_Number_2F_Get_20_Number_20_Value_case_1_local_4(PARAMETERS,TERMINAL(1),ROOT(3));

result = vpx_method_CF_20_Number_2F_Get_20_Number_20_Value_case_1_local_5(PARAMETERS,TERMINAL(1),ROOT(4));
FAILONFAILURE

result = vpx_method_CF_20_Number_2F_Get_20_Number_20_Value_case_1_local_6(PARAMETERS,TERMINAL(4),ROOT(5));

PUTINTEGER(CFNumberGetValue( GETCONSTPOINTER(__CFNumber,*,TERMINAL(2)),GETINTEGER(TERMINAL(1)),GETPOINTER(0,void,*,ROOT(7),TERMINAL(5))),6);
result = kSuccess;

result = vpx_method_Integer_20_To_20_Boolean(PARAMETERS,TERMINAL(6),ROOT(8));

result = vpx_method_CF_20_Number_2F_Get_20_Number_20_Value_case_1_local_9(PARAMETERS,TERMINAL(1),TERMINAL(7),TERMINAL(8),TERMINAL(4),ROOT(9));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(8))
OUTPUT(1,TERMINAL(9))
FOOTERSINGLECASE(10)
}

enum opTrigger vpx_method_CF_20_Number_2F_Get_20_Value_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_Number_2F_Get_20_Value_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Type,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"0",TERMINAL(1));
NEXTCASEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Number_20_Value,2,2,TERMINAL(0),TERMINAL(1),ROOT(2),ROOT(3));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_number_3F_,1,0,TERMINAL(3));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_CF_20_Number_2F_Get_20_Value_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_Number_2F_Get_20_Value_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"0",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_CF_20_Number_2F_Get_20_Value(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_Number_2F_Get_20_Value_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_CF_20_Number_2F_Get_20_Value_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_CF_20_Number_2F_Create_20_Byte_20_Integer(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,kCFNumberCharType,ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Create,3,0,TERMINAL(0),TERMINAL(2),TERMINAL(1));
FAILONFAILURE

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_CF_20_Number_2F_Create_20_Long_20_Integer(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,kCFNumberLongType,ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Create,3,0,TERMINAL(0),TERMINAL(2),TERMINAL(1));
FAILONFAILURE

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_CF_20_Number_2F_Create_20_Short_20_Integer(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,kCFNumberShortType,ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Create,3,0,TERMINAL(0),TERMINAL(2),TERMINAL(1));
FAILONFAILURE

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_CF_20_Number_2F_Create_20_Float(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,kCFNumberFloatType,ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Create,3,0,TERMINAL(0),TERMINAL(2),TERMINAL(1));
FAILONFAILURE

result = kSuccess;

FOOTERSINGLECASE(3)
}

/* Stop Universals */



Nat4 VPLC_CF_20_PlugIn_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_CF_20_PlugIn_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 200 300 } */
	tempAttribute = attribute_add("Allocator",tempClass,NULL,environment);
	tempAttribute = attribute_add("CF Reference",tempClass,NULL,environment);
	tempAttribute = attribute_add("Release?",tempClass,tempAttribute_CF_20_PlugIn_2F_Release_3F_,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"CF Base");
	return kNOERROR;
}

/* Start Universals: { 305 705 }{ 200 300 } */
enum opTrigger vpx_method_CF_20_PlugIn_2F_New(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(2)
INPUT(0,0)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_CF_20_PlugIn,1,1,NONE,ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_CF_20_Reference,2,0,TERMINAL(1),TERMINAL(0));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASEWITHNONE(2)
}

enum opTrigger vpx_method_CF_20_PlugIn_2F_Get_20_Class_20_Type_20_ID(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

PUTINTEGER(CFPlugInGetTypeID(),1);
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASE(2)
}

/* Stop Universals */



Nat4 VPLC_CF_20_Set_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_CF_20_Set_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 200 300 } */
	tempAttribute = attribute_add("Allocator",tempClass,NULL,environment);
	tempAttribute = attribute_add("CF Reference",tempClass,NULL,environment);
	tempAttribute = attribute_add("Release?",tempClass,tempAttribute_CF_20_Set_2F_Release_3F_,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"CF Base");
	return kNOERROR;
}

/* Start Universals: { 305 705 }{ 200 300 } */
enum opTrigger vpx_method_CF_20_Set_2F_New(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(2)
INPUT(0,0)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_CF_20_Set,1,1,NONE,ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_CF_20_Reference,2,0,TERMINAL(1),TERMINAL(0));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASEWITHNONE(2)
}

enum opTrigger vpx_method_CF_20_Set_2F_Get_20_Class_20_Type_20_ID(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

PUTINTEGER(CFSetGetTypeID(),1);
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASE(2)
}

/* Stop Universals */



Nat4 VPLC_CF_20_String_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_CF_20_String_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 200 300 } */
	tempAttribute = attribute_add("Allocator",tempClass,NULL,environment);
	tempAttribute = attribute_add("CF Reference",tempClass,NULL,environment);
	tempAttribute = attribute_add("Release?",tempClass,tempAttribute_CF_20_String_2F_Release_3F_,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"CF Base");
	return kNOERROR;
}

/* Start Universals: { 185 805 }{ 723 326 } */
enum opTrigger vpx_method_CF_20_String_2F_New(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(2)
INPUT(0,0)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_CF_20_String,1,1,NONE,ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_CF_20_Reference,2,0,TERMINAL(1),TERMINAL(0));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASEWITHNONE(2)
}

enum opTrigger vpx_method_CF_20_String_2F_Get_20_Class_20_Type_20_ID(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

PUTINTEGER(CFStringGetTypeID(),1);
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_CF_20_String_2F_Append_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_CF_20_String_2F_Append_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CF_20_Reference,1,1,TERMINAL(0),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
NEXTCASEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CF_20_Reference,1,1,TERMINAL(1),ROOT(3));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
NEXTCASEONSUCCESS

CFStringAppend( GETPOINTER(0,__CFString,*,ROOT(4),TERMINAL(2)),GETCONSTPOINTER(__CFString,*,TERMINAL(3)));
result = kSuccess;

result = kSuccess;

FOOTER(5)
}

enum opTrigger vpx_method_CF_20_String_2F_Append_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_CF_20_String_2F_Append_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_CF_20_String_2F_Append(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_String_2F_Append_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_CF_20_String_2F_Append_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_CF_20_String_2F_Append_20_String_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_CF_20_String_2F_Append_20_String_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Default_20_Encoding,2,1,TERMINAL(0),TERMINAL(2),ROOT(3));

result = vpx_method_To_20_CString(PARAMETERS,TERMINAL(1),ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CF_20_Reference,1,1,TERMINAL(0),ROOT(5));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(5));
NEXTCASEONSUCCESS

CFStringAppendCString( GETPOINTER(0,__CFString,*,ROOT(6),TERMINAL(5)),GETCONSTPOINTER(char,*,TERMINAL(4)),GETINTEGER(TERMINAL(3)));
result = kSuccess;

result = kSuccess;

FOOTER(7)
}

enum opTrigger vpx_method_CF_20_String_2F_Append_20_String_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_CF_20_String_2F_Append_20_String_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_CF_20_String_2F_Append_20_String(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_String_2F_Append_20_String_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2))
vpx_method_CF_20_String_2F_Append_20_String_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2);
return outcome;
}

enum opTrigger vpx_method_CF_20_String_2F_Capitalize_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_CF_20_String_2F_Capitalize_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CF_20_Reference,1,1,TERMINAL(0),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
NEXTCASEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Default_20_Locale,2,1,TERMINAL(0),TERMINAL(1),ROOT(3));

CFStringCapitalize( GETPOINTER(0,__CFString,*,ROOT(4),TERMINAL(2)),GETCONSTPOINTER(__CFLocale,*,TERMINAL(3)));
result = kSuccess;

result = kSuccess;

FOOTER(5)
}

enum opTrigger vpx_method_CF_20_String_2F_Capitalize_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_CF_20_String_2F_Capitalize_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_CF_20_String_2F_Capitalize(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_String_2F_Capitalize_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_CF_20_String_2F_Capitalize_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_CF_20_String_2F_Clone_20_Reference_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_CF_20_String_2F_Clone_20_Reference_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
NEXTCASEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Current_20_Allocator,1,1,TERMINAL(0),ROOT(2));

PUTPOINTER(__CFString,*,CFStringCreateCopy( GETCONSTPOINTER(__CFAllocator,*,TERMINAL(2)),GETCONSTPOINTER(__CFString,*,TERMINAL(1))),3);
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_CF_20_String_2F_Clone_20_Reference_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_CF_20_String_2F_Clone_20_Reference_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
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

enum opTrigger vpx_method_CF_20_String_2F_Clone_20_Reference_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_CF_20_String_2F_Clone_20_Reference_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_String_2F_Clone_20_Reference_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_CF_20_String_2F_Clone_20_Reference_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_CF_20_String_2F_Clone_20_Reference(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CF_20_Reference,1,1,TERMINAL(0),ROOT(1));

result = vpx_method_CF_20_String_2F_Clone_20_Reference_case_1_local_3(PARAMETERS,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_CF_20_Reference,2,0,TERMINAL(0),TERMINAL(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_CF_20_String_2F_Compare_20_Range_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_String_2F_Compare_20_Range_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
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

enum opTrigger vpx_method_CF_20_String_2F_Compare_20_Range_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_String_2F_Compare_20_Range_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"0",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_CF_20_String_2F_Compare_20_Range_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_String_2F_Compare_20_Range_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_String_2F_Compare_20_Range_case_1_local_6_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_CF_20_String_2F_Compare_20_Range_case_1_local_6_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_CF_20_String_2F_Compare_20_Range(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CF_20_Reference,1,1,TERMINAL(0),ROOT(4));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(4));
FAILONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CF_20_Reference,1,1,TERMINAL(1),ROOT(5));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(5));
FAILONSUCCESS

result = vpx_method_CF_20_String_2F_Compare_20_Range_case_1_local_6(PARAMETERS,TERMINAL(3),ROOT(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Default_20_Range,2,1,TERMINAL(0),TERMINAL(2),ROOT(7));

PUTINTEGER(CFStringCompareWithOptions( GETCONSTPOINTER(__CFString,*,TERMINAL(4)),GETCONSTPOINTER(__CFString,*,TERMINAL(5)),GETSTRUCTURE(8,CFRange,TERMINAL(7)),GETINTEGER(TERMINAL(6))),8);
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(8))
FOOTERSINGLECASE(9)
}

enum opTrigger vpx_method_CF_20_String_2F_Compare_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_String_2F_Compare_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
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

enum opTrigger vpx_method_CF_20_String_2F_Compare_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_String_2F_Compare_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"0",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_CF_20_String_2F_Compare_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_String_2F_Compare_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_String_2F_Compare_case_1_local_6_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_CF_20_String_2F_Compare_case_1_local_6_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_CF_20_String_2F_Compare(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CF_20_Reference,1,1,TERMINAL(0),ROOT(3));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
FAILONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CF_20_Reference,1,1,TERMINAL(1),ROOT(4));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(4));
FAILONSUCCESS

result = vpx_method_CF_20_String_2F_Compare_case_1_local_6(PARAMETERS,TERMINAL(2),ROOT(5));

PUTINTEGER(CFStringCompare( GETCONSTPOINTER(__CFString,*,TERMINAL(3)),GETCONSTPOINTER(__CFString,*,TERMINAL(4)),GETINTEGER(TERMINAL(5))),6);
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTERSINGLECASE(7)
}

enum opTrigger vpx_method_CF_20_String_2F_Create_20_Mutable(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Default_20_Zero(PARAMETERS,TERMINAL(1),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Current_20_Allocator,1,1,TERMINAL(0),ROOT(3));

PUTPOINTER(__CFString,*,CFStringCreateMutable( GETCONSTPOINTER(__CFAllocator,*,TERMINAL(3)),GETINTEGER(TERMINAL(2))),4);
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_CF_20_Reference,2,0,TERMINAL(0),TERMINAL(4));

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_CF_20_String_2F_Create_20_Mutable_20_Copy(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_method_Default_20_Zero(PARAMETERS,TERMINAL(1),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Current_20_Allocator,1,1,TERMINAL(0),ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CF_20_Reference,1,1,TERMINAL(2),ROOT(5));

PUTPOINTER(__CFString,*,CFStringCreateMutableCopy( GETCONSTPOINTER(__CFAllocator,*,TERMINAL(4)),GETINTEGER(TERMINAL(3)),GETCONSTPOINTER(__CFString,*,TERMINAL(5))),6);
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_CF_20_Reference,2,0,TERMINAL(0),TERMINAL(6));

result = kSuccess;

FOOTERSINGLECASE(7)
}

enum opTrigger vpx_method_CF_20_String_2F_Create_20_With_20_String(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_method_To_20_CString(PARAMETERS,TERMINAL(1),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Create_20_With_20_CString,3,0,TERMINAL(0),TERMINAL(3),TERMINAL(2));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_CF_20_String_2F_Create_20_With_20_Substring(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Default_20_Range,2,1,TERMINAL(0),TERMINAL(2),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Current_20_Allocator,1,1,TERMINAL(0),ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CF_20_Reference,1,1,TERMINAL(1),ROOT(5));

PUTPOINTER(__CFString,*,CFStringCreateWithSubstring( GETCONSTPOINTER(__CFAllocator,*,TERMINAL(4)),GETCONSTPOINTER(__CFString,*,TERMINAL(5)),GETSTRUCTURE(8,CFRange,TERMINAL(3))),6);
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_CF_20_Reference,2,0,TERMINAL(0),TERMINAL(6));

result = kSuccess;

FOOTERSINGLECASE(7)
}

enum opTrigger vpx_method_CF_20_String_2F_Create_20_With_20_CString(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Default_20_Encoding,2,1,TERMINAL(0),TERMINAL(2),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Current_20_Allocator,1,1,TERMINAL(0),ROOT(4));

PUTPOINTER(__CFString,*,CFStringCreateWithCString( GETCONSTPOINTER(__CFAllocator,*,TERMINAL(4)),GETCONSTPOINTER(char,*,TERMINAL(1)),GETINTEGER(TERMINAL(3))),5);
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_CF_20_Reference,2,0,TERMINAL(0),TERMINAL(5));

result = kSuccess;

FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_CF_20_String_2F_Create_20_With_20_UniChar(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Current_20_Allocator,1,1,TERMINAL(0),ROOT(3));

PUTPOINTER(__CFString,*,CFStringCreateWithCharacters( GETCONSTPOINTER(__CFAllocator,*,TERMINAL(3)),GETCONSTPOINTER(unsigned short,*,TERMINAL(1)),GETINTEGER(TERMINAL(2))),4);
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_CF_20_Reference,2,0,TERMINAL(0),TERMINAL(4));

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_CF_20_String_2F_Default_20_Range_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_String_2F_Default_20_Range_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_list_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,2,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_method_New_20_CFRange(PARAMETERS,TERMINAL(1),TERMINAL(2),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_CF_20_String_2F_Default_20_Range_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_String_2F_Default_20_Range_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(1)
}

enum opTrigger vpx_method_CF_20_String_2F_Default_20_Range_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_String_2F_Default_20_Range_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_String_2F_Default_20_Range_case_1_local_2_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_CF_20_String_2F_Default_20_Range_case_1_local_2_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_CF_20_String_2F_Default_20_Range(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_CF_20_String_2F_Default_20_Range_case_1_local_2(PARAMETERS,TERMINAL(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_CF_20_String_2F_Default_20_Encoding_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_CF_20_String_2F_Default_20_Encoding_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_integer_3F_,1,0,TERMINAL(1));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_CF_20_String_2F_Default_20_Encoding_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_CF_20_String_2F_Default_20_Encoding_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"system",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Encoding_20_System,1,1,TERMINAL(0),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_CF_20_String_2F_Default_20_Encoding_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_CF_20_String_2F_Default_20_Encoding_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"smallest",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Encoding_20_Smallest,1,1,TERMINAL(0),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_CF_20_String_2F_Default_20_Encoding_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_CF_20_String_2F_Default_20_Encoding_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"fastest",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Encoding_20_Fastest,1,1,TERMINAL(0),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_CF_20_String_2F_Default_20_Encoding_case_5(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_CF_20_String_2F_Default_20_Encoding_case_5(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Encoding_20_Default,1,1,TERMINAL(0),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_CF_20_String_2F_Default_20_Encoding(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_String_2F_Default_20_Encoding_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
if(vpx_method_CF_20_String_2F_Default_20_Encoding_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
if(vpx_method_CF_20_String_2F_Default_20_Encoding_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
if(vpx_method_CF_20_String_2F_Default_20_Encoding_case_4(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_CF_20_String_2F_Default_20_Encoding_case_5(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_CF_20_String_2F_Default_20_Locale_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_CF_20_String_2F_Default_20_Locale_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
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

enum opTrigger vpx_method_CF_20_String_2F_Default_20_Locale_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_CF_20_String_2F_Default_20_Locale_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
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

enum opTrigger vpx_method_CF_20_String_2F_Default_20_Locale(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_String_2F_Default_20_Locale_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_CF_20_String_2F_Default_20_Locale_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_CF_20_String_2F_Find_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_String_2F_Find_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
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

enum opTrigger vpx_method_CF_20_String_2F_Find_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_String_2F_Find_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"0",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_CF_20_String_2F_Find_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_String_2F_Find_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_String_2F_Find_case_1_local_6_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_CF_20_String_2F_Find_case_1_local_6_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_CF_20_String_2F_Find_case_1_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_CF_20_String_2F_Find_case_1_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(0));
FAILONSUCCESS

result = vpx_extget(PARAMETERS,"location",1,2,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_extget(PARAMETERS,"length",1,2,TERMINAL(0),ROOT(3),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
OUTPUT(1,TERMINAL(4))
FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_CF_20_String_2F_Find_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1,V_Object *root2);
enum opTrigger vpx_method_CF_20_String_2F_Find_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1,V_Object *root2)
{
HEADER(10)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CF_20_Reference,1,1,TERMINAL(0),ROOT(3));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
NEXTCASEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CF_20_Reference,1,1,TERMINAL(1),ROOT(4));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(4));
NEXTCASEONSUCCESS

result = vpx_method_CF_20_String_2F_Find_case_1_local_6(PARAMETERS,TERMINAL(2),ROOT(5));

PUTSTRUCTURE(8,CFRange,CFStringFind( GETCONSTPOINTER(__CFString,*,TERMINAL(3)),GETCONSTPOINTER(__CFString,*,TERMINAL(4)),GETINTEGER(TERMINAL(5))),6);
result = kSuccess;

result = vpx_constant(PARAMETERS,"TRUE",ROOT(7));

result = vpx_method_CF_20_String_2F_Find_case_1_local_9(PARAMETERS,TERMINAL(6),ROOT(8),ROOT(9));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(7))
OUTPUT(1,TERMINAL(8))
OUTPUT(2,TERMINAL(9))
FOOTER(10)
}

enum opTrigger vpx_method_CF_20_String_2F_Find_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1,V_Object *root2);
enum opTrigger vpx_method_CF_20_String_2F_Find_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1,V_Object *root2)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"FALSE",ROOT(3));

result = vpx_constant(PARAMETERS,"0",ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
OUTPUT(1,TERMINAL(4))
OUTPUT(2,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_CF_20_String_2F_Find(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1,V_Object *root2)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_String_2F_Find_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0,root1,root2))
vpx_method_CF_20_String_2F_Find_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0,root1,root2);
return outcome;
}

enum opTrigger vpx_method_CF_20_String_2F_Find_20_Range_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_String_2F_Find_20_Range_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
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

enum opTrigger vpx_method_CF_20_String_2F_Find_20_Range_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_String_2F_Find_20_Range_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"0",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_CF_20_String_2F_Find_20_Range_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_String_2F_Find_20_Range_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_String_2F_Find_20_Range_case_1_local_6_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_CF_20_String_2F_Find_20_Range_case_1_local_6_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_CF_20_String_2F_Find_20_Range_case_1_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_CF_20_String_2F_Find_20_Range_case_1_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(0));
FAILONFAILURE

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
FAILONSUCCESS

result = vpx_extget(PARAMETERS,"location",1,2,TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_extget(PARAMETERS,"length",1,2,TERMINAL(1),ROOT(4),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
OUTPUT(1,TERMINAL(5))
FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_CF_20_String_2F_Find_20_Range_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2);
enum opTrigger vpx_method_CF_20_String_2F_Find_20_Range_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2)
{
HEADERWITHNONE(13)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CF_20_Reference,1,1,TERMINAL(0),ROOT(4));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(4));
NEXTCASEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CF_20_Reference,1,1,TERMINAL(1),ROOT(5));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(5));
NEXTCASEONSUCCESS

result = vpx_method_CF_20_String_2F_Find_20_Range_case_1_local_6(PARAMETERS,TERMINAL(3),ROOT(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Default_20_Range,2,1,TERMINAL(0),TERMINAL(2),ROOT(7));

PUTINTEGER(CFStringFindWithOptions( GETCONSTPOINTER(__CFString,*,TERMINAL(4)),GETCONSTPOINTER(__CFString,*,TERMINAL(5)),GETSTRUCTURE(8,CFRange,TERMINAL(7)),GETINTEGER(TERMINAL(6)),GETPOINTER(8,CFRange,*,ROOT(9),NONE)),8);
result = kSuccess;

result = vpx_method_Integer_20_To_20_Boolean(PARAMETERS,TERMINAL(8),ROOT(10));

result = vpx_method_CF_20_String_2F_Find_20_Range_case_1_local_10(PARAMETERS,TERMINAL(10),TERMINAL(9),ROOT(11),ROOT(12));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(10))
OUTPUT(1,TERMINAL(11))
OUTPUT(2,TERMINAL(12))
FOOTERWITHNONE(13)
}

enum opTrigger vpx_method_CF_20_String_2F_Find_20_Range_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2);
enum opTrigger vpx_method_CF_20_String_2F_Find_20_Range_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_constant(PARAMETERS,"FALSE",ROOT(4));

result = vpx_constant(PARAMETERS,"0",ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
OUTPUT(1,TERMINAL(5))
OUTPUT(2,TERMINAL(5))
FOOTER(6)
}

enum opTrigger vpx_method_CF_20_String_2F_Find_20_Range(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_String_2F_Find_20_Range_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0,root1,root2))
vpx_method_CF_20_String_2F_Find_20_Range_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0,root1,root2);
return outcome;
}

enum opTrigger vpx_method_CF_20_String_2F_Get_20_CString_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_CF_20_String_2F_Get_20_CString_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Maximum_20_Size_20_For_20_Encoding,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_match(PARAMETERS,"0",TERMINAL(2));
FAILONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP__2B_1,1,1,TERMINAL(2),ROOT(3));

result = vpx_constant(PARAMETERS,"char",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_make_2D_external,2,1,TERMINAL(4),TERMINAL(3),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
OUTPUT(1,TERMINAL(3))
FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_CF_20_String_2F_Get_20_CString_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_CF_20_String_2F_Get_20_CString_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CF_20_Reference,1,1,TERMINAL(0),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
NEXTCASEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Default_20_Encoding,2,1,TERMINAL(0),TERMINAL(1),ROOT(3));

result = vpx_method_CF_20_String_2F_Get_20_CString_case_1_local_5(PARAMETERS,TERMINAL(0),TERMINAL(3),ROOT(4),ROOT(5));
NEXTCASEONFAILURE

PUTINTEGER(CFStringGetCString( GETCONSTPOINTER(__CFString,*,TERMINAL(2)),GETPOINTER(1,char,*,ROOT(7),TERMINAL(4)),GETINTEGER(TERMINAL(5)),GETINTEGER(TERMINAL(3))),6);
result = kSuccess;

result = vpx_match(PARAMETERS,"0",TERMINAL(6));
NEXTCASEONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(7))
OUTPUT(1,TERMINAL(5))
FOOTER(8)
}

enum opTrigger vpx_method_CF_20_String_2F_Get_20_CString_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_CF_20_String_2F_Get_20_CString_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(2));

result = vpx_constant(PARAMETERS,"0",ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
OUTPUT(1,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_CF_20_String_2F_Get_20_CString(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_String_2F_Get_20_CString_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1))
vpx_method_CF_20_String_2F_Get_20_CString_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1);
return outcome;
}

enum opTrigger vpx_method_CF_20_String_2F_Get_20_Character_20_At_20_Index_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_CF_20_String_2F_Get_20_Character_20_At_20_Index_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CF_20_Reference,1,1,TERMINAL(0),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
NEXTCASEONSUCCESS

PUTINTEGER(CFStringGetCharacterAtIndex( GETCONSTPOINTER(__CFString,*,TERMINAL(2)),GETINTEGER(TERMINAL(1))),3);
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_CF_20_String_2F_Get_20_Character_20_At_20_Index_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_CF_20_String_2F_Get_20_Character_20_At_20_Index_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
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

enum opTrigger vpx_method_CF_20_String_2F_Get_20_Character_20_At_20_Index(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_String_2F_Get_20_Character_20_At_20_Index_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_CF_20_String_2F_Get_20_Character_20_At_20_Index_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_CF_20_String_2F_Get_20_Characters_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_CF_20_String_2F_Get_20_Characters_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1)
{
HEADER(13)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CF_20_Reference,1,1,TERMINAL(0),ROOT(3));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
NEXTCASEONSUCCESS

result = vpx_method_New_20_CFRange(PARAMETERS,TERMINAL(1),TERMINAL(2),ROOT(4));

result = vpx_extconstant(PARAMETERS,kCFStringEncodingUnicode,ROOT(5));

PUTINTEGER(CFStringGetMaximumSizeForEncoding( GETINTEGER(TERMINAL(2)),GETINTEGER(TERMINAL(5))),6);
result = kSuccess;

result = vpx_constant(PARAMETERS,"unsigned short",ROOT(7));

result = vpx_constant(PARAMETERS,"1",ROOT(8));

result = vpx_method_Create_20_Block_20_Type(PARAMETERS,TERMINAL(7),TERMINAL(6),TERMINAL(8),ROOT(9));

CFStringGetCharacters( GETCONSTPOINTER(__CFString,*,TERMINAL(3)),GETSTRUCTURE(8,CFRange,TERMINAL(4)),GETPOINTER(2,unsigned short,*,ROOT(10),TERMINAL(9)));
result = kSuccess;

result = vpx_constant(PARAMETERS,"0",ROOT(11));

result = vpx_method_Block_20_Copy(PARAMETERS,TERMINAL(9),TERMINAL(6),TERMINAL(11),ROOT(12));

result = vpx_method_Block_20_Free(PARAMETERS,TERMINAL(9));

result = kSuccess;

OUTPUT(0,TERMINAL(12))
OUTPUT(1,TERMINAL(6))
FOOTER(13)
}

enum opTrigger vpx_method_CF_20_String_2F_Get_20_Characters_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_CF_20_String_2F_Get_20_Characters_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(3));

result = vpx_constant(PARAMETERS,"0",ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
OUTPUT(1,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_CF_20_String_2F_Get_20_Characters(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_String_2F_Get_20_Characters_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0,root1))
vpx_method_CF_20_String_2F_Get_20_Characters_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0,root1);
return outcome;
}

enum opTrigger vpx_method_CF_20_String_2F_Get_20_Double_20_Value_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_String_2F_Get_20_Double_20_Value_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CF_20_Reference,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
NEXTCASEONSUCCESS

PUTREAL(CFStringGetDoubleValue( GETCONSTPOINTER(__CFString,*,TERMINAL(1))),2);
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_CF_20_String_2F_Get_20_Double_20_Value_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_String_2F_Get_20_Double_20_Value_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"0.0",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_CF_20_String_2F_Get_20_Double_20_Value(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_String_2F_Get_20_Double_20_Value_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_CF_20_String_2F_Get_20_Double_20_Value_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_CF_20_String_2F_Get_20_Encoding_20_Default(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,kCFStringEncodingUTF8,ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_CF_20_String_2F_Get_20_Encoding_20_Fastest_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_String_2F_Get_20_Encoding_20_Fastest_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CF_20_Reference,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
NEXTCASEONSUCCESS

PUTINTEGER(CFStringGetFastestEncoding( GETCONSTPOINTER(__CFString,*,TERMINAL(1))),2);
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_CF_20_String_2F_Get_20_Encoding_20_Fastest_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_String_2F_Get_20_Encoding_20_Fastest_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Encoding_20_Default,1,1,TERMINAL(0),ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_CF_20_String_2F_Get_20_Encoding_20_Fastest(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_String_2F_Get_20_Encoding_20_Fastest_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_CF_20_String_2F_Get_20_Encoding_20_Fastest_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_CF_20_String_2F_Get_20_Encoding_20_Smallest_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_String_2F_Get_20_Encoding_20_Smallest_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CF_20_Reference,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
NEXTCASEONSUCCESS

PUTINTEGER(CFStringGetSmallestEncoding( GETCONSTPOINTER(__CFString,*,TERMINAL(1))),2);
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_CF_20_String_2F_Get_20_Encoding_20_Smallest_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_String_2F_Get_20_Encoding_20_Smallest_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Encoding_20_Default,1,1,TERMINAL(0),ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_CF_20_String_2F_Get_20_Encoding_20_Smallest(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_String_2F_Get_20_Encoding_20_Smallest_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_CF_20_String_2F_Get_20_Encoding_20_Smallest_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_CF_20_String_2F_Get_20_Encoding_20_System(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

PUTINTEGER(CFStringGetSystemEncoding(),1);
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_CF_20_String_2F_Get_20_Integer_20_Value_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_String_2F_Get_20_Integer_20_Value_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CF_20_Reference,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
NEXTCASEONSUCCESS

PUTINTEGER(CFStringGetIntValue( GETCONSTPOINTER(__CFString,*,TERMINAL(1))),2);
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_CF_20_String_2F_Get_20_Integer_20_Value_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_String_2F_Get_20_Integer_20_Value_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"0",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_CF_20_String_2F_Get_20_Integer_20_Value(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_String_2F_Get_20_Integer_20_Value_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_CF_20_String_2F_Get_20_Integer_20_Value_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_CF_20_String_2F_Get_20_Length_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_String_2F_Get_20_Length_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CF_20_Reference,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
NEXTCASEONSUCCESS

PUTINTEGER(CFStringGetLength( GETCONSTPOINTER(__CFString,*,TERMINAL(1))),2);
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_CF_20_String_2F_Get_20_Length_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_String_2F_Get_20_Length_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"0",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_CF_20_String_2F_Get_20_Length(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_String_2F_Get_20_Length_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_CF_20_String_2F_Get_20_Length_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_CF_20_String_2F_Get_20_Maximum_20_Size_20_For_20_Encoding(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Length,1,1,TERMINAL(0),ROOT(2));

PUTINTEGER(CFStringGetMaximumSizeForEncoding( GETINTEGER(TERMINAL(2)),GETINTEGER(TERMINAL(1))),3);
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_CF_20_String_2F_Get_20_String_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_String_2F_Get_20_String_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(8)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CString,2,2,TERMINAL(0),NONE,ROOT(1),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
NEXTCASEONSUCCESS

result = vpx_constant(PARAMETERS,"0",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP__2D_1,1,1,TERMINAL(2),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_text,3,3,TERMINAL(1),TERMINAL(3),TERMINAL(4),ROOT(5),ROOT(6),ROOT(7));

result = kSuccess;

OUTPUT(0,TERMINAL(7))
FOOTERWITHNONE(8)
}

enum opTrigger vpx_method_CF_20_String_2F_Get_20_String_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_String_2F_Get_20_String_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"\"",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_CF_20_String_2F_Get_20_String(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_String_2F_Get_20_String_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_CF_20_String_2F_Get_20_String_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_CF_20_String_2F_Get_20_UniChar_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_CF_20_String_2F_Get_20_UniChar_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Length,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"0",TERMINAL(1));
NEXTCASEONSUCCESS

result = vpx_constant(PARAMETERS,"0",ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Characters,3,2,TERMINAL(0),TERMINAL(2),TERMINAL(1),ROOT(3),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
OUTPUT(1,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_CF_20_String_2F_Get_20_UniChar_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_CF_20_String_2F_Get_20_UniChar_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = vpx_constant(PARAMETERS,"0",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
OUTPUT(1,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_CF_20_String_2F_Get_20_UniChar(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_String_2F_Get_20_UniChar_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1))
vpx_method_CF_20_String_2F_Get_20_UniChar_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1);
return outcome;
}

enum opTrigger vpx_method_CF_20_String_2F_Has_20_Prefix_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_CF_20_String_2F_Has_20_Prefix_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CF_20_Reference,1,1,TERMINAL(0),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
NEXTCASEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CF_20_Reference,1,1,TERMINAL(1),ROOT(3));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
NEXTCASEONSUCCESS

PUTINTEGER(CFStringHasPrefix( GETCONSTPOINTER(__CFString,*,TERMINAL(2)),GETCONSTPOINTER(__CFString,*,TERMINAL(3))),4);
result = kSuccess;

result = vpx_method_Integer_20_To_20_Boolean(PARAMETERS,TERMINAL(4),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTER(6)
}

enum opTrigger vpx_method_CF_20_String_2F_Has_20_Prefix_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_CF_20_String_2F_Has_20_Prefix_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
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

enum opTrigger vpx_method_CF_20_String_2F_Has_20_Prefix(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_String_2F_Has_20_Prefix_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_CF_20_String_2F_Has_20_Prefix_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_CF_20_String_2F_Has_20_Suffix_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_CF_20_String_2F_Has_20_Suffix_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CF_20_Reference,1,1,TERMINAL(0),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
NEXTCASEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CF_20_Reference,1,1,TERMINAL(1),ROOT(3));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
NEXTCASEONSUCCESS

PUTINTEGER(CFStringHasSuffix( GETCONSTPOINTER(__CFString,*,TERMINAL(2)),GETCONSTPOINTER(__CFString,*,TERMINAL(3))),4);
result = kSuccess;

result = vpx_method_Integer_20_To_20_Boolean(PARAMETERS,TERMINAL(4),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTER(6)
}

enum opTrigger vpx_method_CF_20_String_2F_Has_20_Suffix_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_CF_20_String_2F_Has_20_Suffix_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
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

enum opTrigger vpx_method_CF_20_String_2F_Has_20_Suffix(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_String_2F_Has_20_Suffix_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_CF_20_String_2F_Has_20_Suffix_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_CF_20_String_2F_Lowercase_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_CF_20_String_2F_Lowercase_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CF_20_Reference,1,1,TERMINAL(0),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
NEXTCASEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Default_20_Locale,2,1,TERMINAL(0),TERMINAL(1),ROOT(3));

CFStringLowercase( GETPOINTER(0,__CFString,*,ROOT(4),TERMINAL(2)),GETCONSTPOINTER(__CFLocale,*,TERMINAL(3)));
result = kSuccess;

result = kSuccess;

FOOTER(5)
}

enum opTrigger vpx_method_CF_20_String_2F_Lowercase_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_CF_20_String_2F_Lowercase_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_CF_20_String_2F_Lowercase(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_String_2F_Lowercase_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_CF_20_String_2F_Lowercase_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_CF_20_String_2F_Uppercase_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_CF_20_String_2F_Uppercase_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CF_20_Reference,1,1,TERMINAL(0),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
NEXTCASEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Default_20_Locale,2,1,TERMINAL(0),TERMINAL(1),ROOT(3));

CFStringUppercase( GETPOINTER(0,__CFString,*,ROOT(4),TERMINAL(2)),GETCONSTPOINTER(__CFLocale,*,TERMINAL(3)));
result = kSuccess;

result = kSuccess;

FOOTER(5)
}

enum opTrigger vpx_method_CF_20_String_2F_Uppercase_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_CF_20_String_2F_Uppercase_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_CF_20_String_2F_Uppercase(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_String_2F_Uppercase_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_CF_20_String_2F_Uppercase_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_CF_20_String_2F_Pad_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3);
enum opTrigger vpx_method_CF_20_String_2F_Pad_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CF_20_Reference,1,1,TERMINAL(0),ROOT(4));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(4));
NEXTCASEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CF_20_Reference,1,1,TERMINAL(1),ROOT(5));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(5));
NEXTCASEONSUCCESS

CFStringPad( GETPOINTER(0,__CFString,*,ROOT(6),TERMINAL(4)),GETCONSTPOINTER(__CFString,*,TERMINAL(5)),GETINTEGER(TERMINAL(2)),GETINTEGER(TERMINAL(3)));
result = kSuccess;

result = kSuccess;

FOOTER(7)
}

enum opTrigger vpx_method_CF_20_String_2F_Pad_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3);
enum opTrigger vpx_method_CF_20_String_2F_Pad_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = kSuccess;

FOOTER(4)
}

enum opTrigger vpx_method_CF_20_String_2F_Pad(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_String_2F_Pad_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3))
vpx_method_CF_20_String_2F_Pad_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3);
return outcome;
}

enum opTrigger vpx_method_CF_20_String_2F_Replace_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_CF_20_String_2F_Replace_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CF_20_Reference,1,1,TERMINAL(0),ROOT(3));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
NEXTCASEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CF_20_Reference,1,1,TERMINAL(2),ROOT(4));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(4));
NEXTCASEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Default_20_Range,2,1,TERMINAL(0),TERMINAL(1),ROOT(5));

CFStringReplace( GETPOINTER(0,__CFString,*,ROOT(6),TERMINAL(3)),GETSTRUCTURE(8,CFRange,TERMINAL(5)),GETCONSTPOINTER(__CFString,*,TERMINAL(4)));
result = kSuccess;

result = kSuccess;

FOOTER(7)
}

enum opTrigger vpx_method_CF_20_String_2F_Replace_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_CF_20_String_2F_Replace_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_CF_20_String_2F_Replace(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_String_2F_Replace_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2))
vpx_method_CF_20_String_2F_Replace_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2);
return outcome;
}

enum opTrigger vpx_method_CF_20_String_2F_Replace_20_All_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_CF_20_String_2F_Replace_20_All_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CF_20_Reference,1,1,TERMINAL(0),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
NEXTCASEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CF_20_Reference,1,1,TERMINAL(1),ROOT(3));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
NEXTCASEONSUCCESS

CFStringReplaceAll( GETPOINTER(0,__CFString,*,ROOT(4),TERMINAL(2)),GETCONSTPOINTER(__CFString,*,TERMINAL(3)));
result = kSuccess;

result = kSuccess;

FOOTER(5)
}

enum opTrigger vpx_method_CF_20_String_2F_Replace_20_All_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_CF_20_String_2F_Replace_20_All_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_CF_20_String_2F_Replace_20_All(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_String_2F_Replace_20_All_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_CF_20_String_2F_Replace_20_All_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_CF_20_String_2F_Show_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_CF_20_String_2F_Show_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CF_20_Reference,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
TERMINATEONSUCCESS

CFShowStr( GETCONSTPOINTER(__CFString,*,TERMINAL(1)));
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_CF_20_String_2F_Show(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_method_CF_20_String_2F_Show_case_1_local_2(PARAMETERS,TERMINAL(0));

result = vpx_call_context_super_method(PARAMETERS,kVPXMethod_Show,1,0,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_CF_20_String_2F_Trim_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_CF_20_String_2F_Trim_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CF_20_Reference,1,1,TERMINAL(0),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
NEXTCASEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CF_20_Reference,1,1,TERMINAL(1),ROOT(3));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
NEXTCASEONSUCCESS

CFStringTrim( GETPOINTER(0,__CFString,*,ROOT(4),TERMINAL(2)),GETCONSTPOINTER(__CFString,*,TERMINAL(3)));
result = kSuccess;

result = kSuccess;

FOOTER(5)
}

enum opTrigger vpx_method_CF_20_String_2F_Trim_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_CF_20_String_2F_Trim_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_CF_20_String_2F_Trim(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_String_2F_Trim_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_CF_20_String_2F_Trim_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_CF_20_String_2F_Trim_20_Whitespace_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_CF_20_String_2F_Trim_20_Whitespace_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CF_20_Reference,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
NEXTCASEONSUCCESS

CFStringTrimWhitespace( GETPOINTER(0,__CFString,*,ROOT(2),TERMINAL(1)));
result = kSuccess;

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_CF_20_String_2F_Trim_20_Whitespace_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_CF_20_String_2F_Trim_20_Whitespace_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_CF_20_String_2F_Trim_20_Whitespace(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_String_2F_Trim_20_Whitespace_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_CF_20_String_2F_Trim_20_Whitespace_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

/* Stop Universals */



Nat4 VPLC_CF_20_TimeZone_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_CF_20_TimeZone_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 200 300 } */
	tempAttribute = attribute_add("Allocator",tempClass,NULL,environment);
	tempAttribute = attribute_add("CF Reference",tempClass,NULL,environment);
	tempAttribute = attribute_add("Release?",tempClass,tempAttribute_CF_20_TimeZone_2F_Release_3F_,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"CF Base");
	return kNOERROR;
}

/* Start Universals: { 305 705 }{ 200 300 } */
enum opTrigger vpx_method_CF_20_TimeZone_2F_New(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(2)
INPUT(0,0)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_CF_20_TimeZone,1,1,NONE,ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_CF_20_Reference,2,0,TERMINAL(1),TERMINAL(0));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASEWITHNONE(2)
}

enum opTrigger vpx_method_CF_20_TimeZone_2F_Get_20_Class_20_Type_20_ID(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

PUTINTEGER(CFTimeZoneGetTypeID(),1);
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASE(2)
}

/* Stop Universals */



Nat4 VPLC_CF_20_Tree_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_CF_20_Tree_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 200 300 } */
	tempAttribute = attribute_add("Allocator",tempClass,NULL,environment);
	tempAttribute = attribute_add("CF Reference",tempClass,NULL,environment);
	tempAttribute = attribute_add("Release?",tempClass,tempAttribute_CF_20_Tree_2F_Release_3F_,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"CF Base");
	return kNOERROR;
}

/* Start Universals: { 305 705 }{ 200 300 } */
enum opTrigger vpx_method_CF_20_Tree_2F_New(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(2)
INPUT(0,0)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_CF_20_Tree,1,1,NONE,ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_CF_20_Reference,2,0,TERMINAL(1),TERMINAL(0));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASEWITHNONE(2)
}

enum opTrigger vpx_method_CF_20_Tree_2F_Get_20_Class_20_Type_20_ID(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

PUTINTEGER(CFTreeGetTypeID(),1);
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASE(2)
}

/* Stop Universals */



Nat4 VPLC_CF_20_URL_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_CF_20_URL_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 59 }{ 200 300 } */
	tempAttribute = attribute_add("Allocator",tempClass,NULL,environment);
	tempAttribute = attribute_add("CF Reference",tempClass,NULL,environment);
	tempAttribute = attribute_add("Release?",tempClass,tempAttribute_CF_20_URL_2F_Release_3F_,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"CF Base");
	return kNOERROR;
}

/* Start Universals: { 141 604 }{ 670 401 } */
enum opTrigger vpx_method_CF_20_URL_2F_New(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(2)
INPUT(0,0)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_CF_20_URL,1,1,NONE,ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_CF_20_Reference,2,0,TERMINAL(1),TERMINAL(0));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASEWITHNONE(2)
}

enum opTrigger vpx_method_CF_20_URL_2F_Get_20_Class_20_Type_20_ID(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

PUTINTEGER(CFURLGetTypeID(),1);
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_CF_20_URL_2F_Can_20_Be_20_Decomposed_3F__case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_URL_2F_Can_20_Be_20_Decomposed_3F__case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CF_20_Reference,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
NEXTCASEONSUCCESS

PUTINTEGER(CFURLCanBeDecomposed( GETCONSTPOINTER(__CFURL,*,TERMINAL(1))),2);
result = kSuccess;

result = vpx_method_Integer_20_To_20_Boolean(PARAMETERS,TERMINAL(2),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_CF_20_URL_2F_Can_20_Be_20_Decomposed_3F__case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_URL_2F_Can_20_Be_20_Decomposed_3F__case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"FALSE",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_CF_20_URL_2F_Can_20_Be_20_Decomposed_3F_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_URL_2F_Can_20_Be_20_Decomposed_3F__case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_CF_20_URL_2F_Can_20_Be_20_Decomposed_3F__case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_CF_20_URL_2F_Capture_20_Main_20_Bundle(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

PUTPOINTER(__CFBundle,*,CFBundleGetMainBundle(),1);
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
FAILONSUCCESS

PUTPOINTER(__CFURL,*,CFBundleCopyBundleURL( GETPOINTER(0,__CFBundle,*,ROOT(3),TERMINAL(1))),2);
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
FAILONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_CF_20_Reference,2,0,TERMINAL(0),TERMINAL(2));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_CF_20_URL_2F_Capture_20_Private_20_Frameworks_20_Name(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Capture_20_Private_20_Frameworks,1,0,TERMINAL(0));
FAILONFAILURE

result = vpx_constant(PARAMETERS,"TRUE",ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Create_20_Copy_20_Appending_20_Path_20_Component,3,1,TERMINAL(0),TERMINAL(1),TERMINAL(2),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Release,1,0,TERMINAL(0));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
FAILONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_CF_20_URL_2F_Capture_20_Private_20_Frameworks(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

PUTPOINTER(__CFBundle,*,CFBundleGetMainBundle(),1);
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
FAILONSUCCESS

PUTPOINTER(__CFURL,*,CFBundleCopyPrivateFrameworksURL( GETPOINTER(0,__CFBundle,*,ROOT(3),TERMINAL(1))),2);
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
FAILONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_CF_20_Reference,2,0,TERMINAL(0),TERMINAL(2));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_CF_20_URL_2F_Capture_20_Resources_20_Name(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Capture_20_Resources_20_Directory,1,0,TERMINAL(0));
FAILONFAILURE

result = vpx_constant(PARAMETERS,"TRUE",ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Create_20_Copy_20_Appending_20_Path_20_Component,3,1,TERMINAL(0),TERMINAL(1),TERMINAL(2),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Release,1,0,TERMINAL(0));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
FAILONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_CF_20_URL_2F_Capture_20_Resources_20_Directory(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

PUTPOINTER(__CFBundle,*,CFBundleGetMainBundle(),1);
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
FAILONSUCCESS

PUTPOINTER(__CFURL,*,CFBundleCopyResourcesDirectoryURL( GETPOINTER(0,__CFBundle,*,ROOT(3),TERMINAL(1))),2);
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
FAILONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_CF_20_Reference,2,0,TERMINAL(0),TERMINAL(2));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_CF_20_URL_2F_Copy_20_Absolute_20_URL_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_URL_2F_Copy_20_Absolute_20_URL_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CF_20_Reference,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
NEXTCASEONSUCCESS

PUTPOINTER(__CFURL,*,CFURLCopyAbsoluteURL( GETCONSTPOINTER(__CFURL,*,TERMINAL(1))),2);
result = kSuccess;

result = vpx_method_CF_20_String_2F_New(PARAMETERS,TERMINAL(2),ROOT(3));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
NEXTCASEONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_CF_20_URL_2F_Copy_20_Absolute_20_URL_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_URL_2F_Copy_20_Absolute_20_URL_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"FALSE",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_CF_20_URL_2F_Copy_20_Absolute_20_URL(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_URL_2F_Copy_20_Absolute_20_URL_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_CF_20_URL_2F_Copy_20_Absolute_20_URL_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_CF_20_URL_2F_Copy_20_File_20_System_20_Path_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_CF_20_URL_2F_Copy_20_File_20_System_20_Path_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CF_20_Reference,1,1,TERMINAL(0),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
NEXTCASEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Default_20_Path_20_Style,2,1,TERMINAL(0),TERMINAL(1),ROOT(3));

PUTPOINTER(__CFString,*,CFURLCopyFileSystemPath( GETCONSTPOINTER(__CFURL,*,TERMINAL(2)),GETINTEGER(TERMINAL(3))),4);
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(4));
NEXTCASEONSUCCESS

result = vpx_method_CF_20_String_2F_New(PARAMETERS,TERMINAL(4),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTER(6)
}

enum opTrigger vpx_method_CF_20_URL_2F_Copy_20_File_20_System_20_Path_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_CF_20_URL_2F_Copy_20_File_20_System_20_Path_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
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

enum opTrigger vpx_method_CF_20_URL_2F_Copy_20_File_20_System_20_Path(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_URL_2F_Copy_20_File_20_System_20_Path_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_CF_20_URL_2F_Copy_20_File_20_System_20_Path_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_CF_20_URL_2F_Copy_20_Host_20_Name_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_URL_2F_Copy_20_Host_20_Name_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CF_20_Reference,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
NEXTCASEONSUCCESS

PUTPOINTER(__CFString,*,CFURLCopyHostName( GETCONSTPOINTER(__CFURL,*,TERMINAL(1))),2);
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
NEXTCASEONSUCCESS

result = vpx_method_CF_20_String_2F_New(PARAMETERS,TERMINAL(2),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_CF_20_URL_2F_Copy_20_Host_20_Name_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_URL_2F_Copy_20_Host_20_Name_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_CF_20_URL_2F_Copy_20_Host_20_Name(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_URL_2F_Copy_20_Host_20_Name_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_CF_20_URL_2F_Copy_20_Host_20_Name_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_CF_20_URL_2F_Copy_20_Last_20_Path_20_Component_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_URL_2F_Copy_20_Last_20_Path_20_Component_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CF_20_Reference,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
NEXTCASEONSUCCESS

PUTPOINTER(__CFString,*,CFURLCopyLastPathComponent( GETCONSTPOINTER(__CFURL,*,TERMINAL(1))),2);
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
NEXTCASEONSUCCESS

result = vpx_method_CF_20_String_2F_New(PARAMETERS,TERMINAL(2),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_CF_20_URL_2F_Copy_20_Last_20_Path_20_Component_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_URL_2F_Copy_20_Last_20_Path_20_Component_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_CF_20_URL_2F_Copy_20_Last_20_Path_20_Component(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_URL_2F_Copy_20_Last_20_Path_20_Component_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_CF_20_URL_2F_Copy_20_Last_20_Path_20_Component_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_CF_20_URL_2F_Copy_20_Net_20_Location_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_URL_2F_Copy_20_Net_20_Location_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CF_20_Reference,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
NEXTCASEONSUCCESS

PUTPOINTER(__CFString,*,CFURLCopyNetLocation( GETCONSTPOINTER(__CFURL,*,TERMINAL(1))),2);
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
NEXTCASEONSUCCESS

result = vpx_method_CF_20_String_2F_New(PARAMETERS,TERMINAL(2),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_CF_20_URL_2F_Copy_20_Net_20_Location_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_URL_2F_Copy_20_Net_20_Location_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_CF_20_URL_2F_Copy_20_Net_20_Location(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_URL_2F_Copy_20_Net_20_Location_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_CF_20_URL_2F_Copy_20_Net_20_Location_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_CF_20_URL_2F_Copy_20_Path_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_URL_2F_Copy_20_Path_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CF_20_Reference,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
NEXTCASEONSUCCESS

PUTPOINTER(__CFString,*,CFURLCopyPath( GETCONSTPOINTER(__CFURL,*,TERMINAL(1))),2);
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
NEXTCASEONSUCCESS

result = vpx_method_CF_20_String_2F_New(PARAMETERS,TERMINAL(2),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_CF_20_URL_2F_Copy_20_Path_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_URL_2F_Copy_20_Path_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_CF_20_URL_2F_Copy_20_Path(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_URL_2F_Copy_20_Path_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_CF_20_URL_2F_Copy_20_Path_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_CF_20_URL_2F_Copy_20_Path_20_Extension_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_URL_2F_Copy_20_Path_20_Extension_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CF_20_Reference,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
NEXTCASEONSUCCESS

PUTPOINTER(__CFString,*,CFURLCopyPathExtension( GETCONSTPOINTER(__CFURL,*,TERMINAL(1))),2);
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
NEXTCASEONSUCCESS

result = vpx_method_CF_20_String_2F_New(PARAMETERS,TERMINAL(2),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_CF_20_URL_2F_Copy_20_Path_20_Extension_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_URL_2F_Copy_20_Path_20_Extension_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_CF_20_URL_2F_Copy_20_Path_20_Extension(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_URL_2F_Copy_20_Path_20_Extension_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_CF_20_URL_2F_Copy_20_Path_20_Extension_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_CF_20_URL_2F_Default_20_Path_20_Style_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_CF_20_URL_2F_Default_20_Path_20_Style_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_integer_3F_,1,0,TERMINAL(1));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_CF_20_URL_2F_Default_20_Path_20_Style_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_CF_20_URL_2F_Default_20_Path_20_Style_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,kCFURLHFSPathStyle,ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_CF_20_URL_2F_Default_20_Path_20_Style(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_URL_2F_Default_20_Path_20_Style_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_CF_20_URL_2F_Default_20_Path_20_Style_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_CF_20_URL_2F_Create_20_Copy_20_Appending_20_Path_20_Component_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_CF_20_URL_2F_Create_20_Copy_20_Appending_20_Path_20_Component_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Current_20_Allocator,1,1,TERMINAL(0),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CF_20_Reference,1,1,TERMINAL(0),ROOT(4));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(4));
TERMINATEONSUCCESS

result = vpx_method_To_20_CFString(PARAMETERS,TERMINAL(1),ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CF_20_Reference,1,1,TERMINAL(5),ROOT(6));

PUTPOINTER(__CFURL,*,CFURLCreateCopyAppendingPathComponent( GETCONSTPOINTER(__CFAllocator,*,TERMINAL(3)),GETCONSTPOINTER(__CFURL,*,TERMINAL(4)),GETCONSTPOINTER(__CFString,*,TERMINAL(6)),GETINTEGER(TERMINAL(2))),7);
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Release,1,0,TERMINAL(5));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(7));
NEXTCASEONSUCCESS

result = vpx_call_context_method(PARAMETERS,kVPXMethod_New,1,1,TERMINAL(7),ROOT(8));

result = kSuccess;

OUTPUT(0,TERMINAL(8))
FOOTER(9)
}

enum opTrigger vpx_method_CF_20_URL_2F_Create_20_Copy_20_Appending_20_Path_20_Component_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_CF_20_URL_2F_Create_20_Copy_20_Appending_20_Path_20_Component_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_CF_20_URL_2F_Create_20_Copy_20_Appending_20_Path_20_Component(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_URL_2F_Create_20_Copy_20_Appending_20_Path_20_Component_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
vpx_method_CF_20_URL_2F_Create_20_Copy_20_Appending_20_Path_20_Component_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0);
return outcome;
}

enum opTrigger vpx_method_CF_20_URL_2F_Create_20_Copy_20_Deleting_20_Last_20_Path_20_Component_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_URL_2F_Create_20_Copy_20_Deleting_20_Last_20_Path_20_Component_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Current_20_Allocator,1,1,TERMINAL(0),ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CF_20_Reference,1,1,TERMINAL(0),ROOT(2));

PUTPOINTER(__CFURL,*,CFURLCreateCopyDeletingLastPathComponent( GETCONSTPOINTER(__CFAllocator,*,TERMINAL(1)),GETCONSTPOINTER(__CFURL,*,TERMINAL(2))),3);
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
NEXTCASEONSUCCESS

result = vpx_call_context_method(PARAMETERS,kVPXMethod_New,1,1,TERMINAL(3),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_CF_20_URL_2F_Create_20_Copy_20_Deleting_20_Last_20_Path_20_Component_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_URL_2F_Create_20_Copy_20_Deleting_20_Last_20_Path_20_Component_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_CF_20_URL_2F_Create_20_Copy_20_Deleting_20_Last_20_Path_20_Component(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_URL_2F_Create_20_Copy_20_Deleting_20_Last_20_Path_20_Component_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_CF_20_URL_2F_Create_20_Copy_20_Deleting_20_Last_20_Path_20_Component_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_CF_20_URL_2F_Create_20_From_20_File_20_System_20_Path_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_URL_2F_Create_20_From_20_File_20_System_20_Path_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_boolean_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(1)
}

enum opTrigger vpx_method_CF_20_URL_2F_Create_20_From_20_File_20_System_20_Path_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_URL_2F_Create_20_From_20_File_20_System_20_Path_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"FALSE",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_CF_20_URL_2F_Create_20_From_20_File_20_System_20_Path_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_URL_2F_Create_20_From_20_File_20_System_20_Path_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_URL_2F_Create_20_From_20_File_20_System_20_Path_case_1_local_6_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_CF_20_URL_2F_Create_20_From_20_File_20_System_20_Path_case_1_local_6_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_CF_20_URL_2F_Create_20_From_20_File_20_System_20_Path_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0);
enum opTrigger vpx_method_CF_20_URL_2F_Create_20_From_20_File_20_System_20_Path_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0)
{
HEADER(11)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Current_20_Allocator,1,1,TERMINAL(0),ROOT(4));

result = vpx_method_To_20_CFString(PARAMETERS,TERMINAL(1),ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CF_20_Reference,1,1,TERMINAL(5),ROOT(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Default_20_Path_20_Style,2,1,TERMINAL(0),TERMINAL(2),ROOT(7));

result = vpx_method_CF_20_URL_2F_Create_20_From_20_File_20_System_20_Path_case_1_local_6(PARAMETERS,TERMINAL(3),ROOT(8));

PUTPOINTER(__CFURL,*,CFURLCreateWithFileSystemPath( GETCONSTPOINTER(__CFAllocator,*,TERMINAL(4)),GETCONSTPOINTER(__CFString,*,TERMINAL(6)),GETINTEGER(TERMINAL(7)),GETINTEGER(TERMINAL(8))),9);
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Release,1,0,TERMINAL(5));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(9));
NEXTCASEONSUCCESS

result = vpx_call_context_method(PARAMETERS,kVPXMethod_New,1,1,TERMINAL(9),ROOT(10));

result = kSuccess;

OUTPUT(0,TERMINAL(10))
FOOTER(11)
}

enum opTrigger vpx_method_CF_20_URL_2F_Create_20_From_20_File_20_System_20_Path_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0);
enum opTrigger vpx_method_CF_20_URL_2F_Create_20_From_20_File_20_System_20_Path_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_CF_20_URL_2F_Create_20_From_20_File_20_System_20_Path(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_URL_2F_Create_20_From_20_File_20_System_20_Path_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0))
vpx_method_CF_20_URL_2F_Create_20_From_20_File_20_System_20_Path_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0);
return outcome;
}

enum opTrigger vpx_method_CF_20_URL_2F_Create_20_From_20_FSRef_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_URL_2F_Create_20_From_20_FSRef_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_FSRef,1,1,TERMINAL(0),ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_CF_20_URL_2F_Create_20_From_20_FSRef_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_URL_2F_Create_20_From_20_FSRef_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(1)
}

enum opTrigger vpx_method_CF_20_URL_2F_Create_20_From_20_FSRef_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_URL_2F_Create_20_From_20_FSRef_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_URL_2F_Create_20_From_20_FSRef_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_CF_20_URL_2F_Create_20_From_20_FSRef_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_CF_20_URL_2F_Create_20_From_20_FSRef(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Current_20_Allocator,1,1,TERMINAL(0),ROOT(2));

result = vpx_method_CF_20_URL_2F_Create_20_From_20_FSRef_case_1_local_3(PARAMETERS,TERMINAL(1),ROOT(3));

PUTPOINTER(__CFURL,*,CFURLCreateFromFSRef( GETCONSTPOINTER(__CFAllocator,*,TERMINAL(2)),GETCONSTPOINTER(FSRef,*,TERMINAL(3))),4);
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_CF_20_Reference,2,0,TERMINAL(0),TERMINAL(4));

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_CF_20_URL_2F_Create_20_With_20_CFString_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_URL_2F_Create_20_With_20_CFString_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CF_20_Reference,1,1,TERMINAL(0),ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_CF_20_URL_2F_Create_20_With_20_CFString_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_URL_2F_Create_20_With_20_CFString_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_CF_20_URL_2F_Create_20_With_20_CFString_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_URL_2F_Create_20_With_20_CFString_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_URL_2F_Create_20_With_20_CFString_case_1_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_CF_20_URL_2F_Create_20_With_20_CFString_case_1_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_CF_20_URL_2F_Create_20_With_20_CFString(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Current_20_Allocator,1,1,TERMINAL(0),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CF_20_Reference,1,1,TERMINAL(1),ROOT(4));

result = vpx_method_CF_20_URL_2F_Create_20_With_20_CFString_case_1_local_4(PARAMETERS,TERMINAL(2),ROOT(5));

PUTPOINTER(__CFURL,*,CFURLCreateWithString( GETCONSTPOINTER(__CFAllocator,*,TERMINAL(3)),GETCONSTPOINTER(__CFString,*,TERMINAL(4)),GETCONSTPOINTER(__CFURL,*,TERMINAL(5))),6);
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_CF_20_Reference,2,0,TERMINAL(0),TERMINAL(6));

result = kSuccess;

FOOTERSINGLECASE(7)
}

enum opTrigger vpx_method_CF_20_URL_2F_Create_20_With_20_String_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_URL_2F_Create_20_With_20_String_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_string_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_method_To_20_CFString(PARAMETERS,TERMINAL(0),ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_CF_20_URL_2F_Create_20_With_20_String_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_URL_2F_Create_20_With_20_String_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(1)
}

enum opTrigger vpx_method_CF_20_URL_2F_Create_20_With_20_String_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_URL_2F_Create_20_With_20_String_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_URL_2F_Create_20_With_20_String_case_1_local_2_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_CF_20_URL_2F_Create_20_With_20_String_case_1_local_2_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_CF_20_URL_2F_Create_20_With_20_String(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_method_CF_20_URL_2F_Create_20_With_20_String_case_1_local_2(PARAMETERS,TERMINAL(2),ROOT(3));

result = vpx_method_To_20_CFString(PARAMETERS,TERMINAL(1),ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Create_20_With_20_CFString,3,0,TERMINAL(0),TERMINAL(4),TERMINAL(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Release,1,0,TERMINAL(4));

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_CF_20_URL_2F_Get_20_FSRef(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(5)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CF_20_Reference,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
FAILONSUCCESS

PUTINTEGER(CFURLGetFSRef( GETCONSTPOINTER(__CFURL,*,TERMINAL(1)),GETPOINTER(144,FSRef,*,ROOT(3),NONE)),2);
result = kSuccess;

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(2));
FAILONFAILURE

result = vpx_method_New_20_FSRef(PARAMETERS,TERMINAL(3),ROOT(4));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERSINGLECASEWITHNONE(5)
}

enum opTrigger vpx_method_CF_20_URL_2F_Get_20_Port_20_Number(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CF_20_Reference,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
FAILONSUCCESS

PUTINTEGER(CFURLGetPortNumber( GETCONSTPOINTER(__CFURL,*,TERMINAL(1))),2);
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_CF_20_URL_2F_Get_20_String(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CF_20_Reference,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
FAILONSUCCESS

PUTPOINTER(__CFString,*,CFURLGetString( GETCONSTPOINTER(__CFURL,*,TERMINAL(1))),2);
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
FAILONSUCCESS

result = vpx_method_CF_20_String_2F_New(PARAMETERS,TERMINAL(2),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_CF_20_URL_2F_LS_20_Open_20_URL_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_URL_2F_LS_20_Open_20_URL_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CF_20_Reference,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
NEXTCASEONSUCCESS

result = vpx_constant(PARAMETERS,"NULL",ROOT(2));

PUTINTEGER(LSOpenCFURLRef( GETCONSTPOINTER(__CFURL,*,TERMINAL(1)),GETPOINTER(0,__CFURL,**,ROOT(4),TERMINAL(2))),3);
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(5)
}

enum opTrigger vpx_method_CF_20_URL_2F_LS_20_Open_20_URL_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_URL_2F_LS_20_Open_20_URL_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,paramErr,ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_CF_20_URL_2F_LS_20_Open_20_URL(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_URL_2F_LS_20_Open_20_URL_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_CF_20_URL_2F_LS_20_Open_20_URL_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_CF_20_URL_2F_Create_20_File_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_CF_20_URL_2F_Create_20_File_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_String,1,1,TERMINAL(1),ROOT(2));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_FSRef,1,1,TERMINAL(0),ROOT(3));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Create_20_File,2,2,TERMINAL(3),TERMINAL(2),ROOT(4),ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Close,1,0,TERMINAL(3));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
OUTPUT(1,TERMINAL(5))
FOOTER(6)
}

enum opTrigger vpx_method_CF_20_URL_2F_Create_20_File_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_CF_20_URL_2F_Create_20_File_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,fnfErr,ROOT(2));

result = vpx_constant(PARAMETERS,"NULL",ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
OUTPUT(1,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_CF_20_URL_2F_Create_20_File_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_CF_20_URL_2F_Create_20_File_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_URL_2F_Create_20_File_case_1_local_6_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1))
vpx_method_CF_20_URL_2F_Create_20_File_case_1_local_6_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1);
return outcome;
}

enum opTrigger vpx_method_CF_20_URL_2F_Create_20_File_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_CF_20_URL_2F_Create_20_File_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Release,1,0,TERMINAL(0));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Release,1,0,TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_CF_20_URL_2F_Create_20_File_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_CF_20_URL_2F_Create_20_File_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Create_20_Copy_20_Deleting_20_Last_20_Path_20_Component,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
NEXTCASEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Copy_20_Last_20_Path_20_Component,1,1,TERMINAL(0),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
NEXTCASEONSUCCESS

result = vpx_method_CF_20_URL_2F_Create_20_File_case_1_local_6(PARAMETERS,TERMINAL(1),TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_method_CF_20_URL_2F_Create_20_File_case_1_local_7(PARAMETERS,TERMINAL(1),TERMINAL(2));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
OUTPUT(1,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_CF_20_URL_2F_Create_20_File_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_CF_20_URL_2F_Create_20_File_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,fnfErr,ROOT(1));

result = vpx_constant(PARAMETERS,"NULL",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
OUTPUT(1,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_CF_20_URL_2F_Create_20_File(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_URL_2F_Create_20_File_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1))
vpx_method_CF_20_URL_2F_Create_20_File_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1);
return outcome;
}

enum opTrigger vpx_method_CF_20_URL_2F_Write_20_Data_20_And_20_Properties_20_To_20_Resource(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1)
{
HEADERWITHNONE(11)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CF_20_Reference,1,1,TERMINAL(0),ROOT(3));

result = vpx_method_Default_20_NULL(PARAMETERS,TERMINAL(2),ROOT(4));

result = vpx_method_Default_20_NULL(PARAMETERS,TERMINAL(1),ROOT(5));

PUTINTEGER(CFURLWriteDataAndPropertiesToResource( GETCONSTPOINTER(__CFURL,*,TERMINAL(3)),GETCONSTPOINTER(__CFData,*,TERMINAL(5)),GETCONSTPOINTER(__CFDictionary,*,TERMINAL(4)),GETPOINTER(4,int,*,ROOT(7),NONE)),6);
result = kSuccess;

result = vpx_method_Get_20_SInt32(PARAMETERS,TERMINAL(7),NONE,ROOT(8),ROOT(9));

result = vpx_method_Integer_20_To_20_Boolean(PARAMETERS,TERMINAL(6),ROOT(10));

result = kSuccess;

OUTPUT(0,TERMINAL(10))
OUTPUT(1,TERMINAL(9))
FOOTERSINGLECASEWITHNONE(11)
}

enum opTrigger vpx_method_CF_20_URL_2F_Create_20_Data_20_And_20_Properties_20_From_20_Resource_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_URL_2F_Create_20_Data_20_And_20_Properties_20_From_20_Resource_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(1)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(0));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,NONE)
FOOTERWITHNONE(1)
}

enum opTrigger vpx_method_CF_20_URL_2F_Create_20_Data_20_And_20_Properties_20_From_20_Resource_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_URL_2F_Create_20_Data_20_And_20_Properties_20_From_20_Resource_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_CF_20_URL_2F_Create_20_Data_20_And_20_Properties_20_From_20_Resource_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_URL_2F_Create_20_Data_20_And_20_Properties_20_From_20_Resource_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_URL_2F_Create_20_Data_20_And_20_Properties_20_From_20_Resource_case_1_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_CF_20_URL_2F_Create_20_Data_20_And_20_Properties_20_From_20_Resource_case_1_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_CF_20_URL_2F_Create_20_Data_20_And_20_Properties_20_From_20_Resource_case_1_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_URL_2F_Create_20_Data_20_And_20_Properties_20_From_20_Resource_case_1_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(1)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(0));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,NONE)
FOOTERWITHNONE(1)
}

enum opTrigger vpx_method_CF_20_URL_2F_Create_20_Data_20_And_20_Properties_20_From_20_Resource_case_1_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_URL_2F_Create_20_Data_20_And_20_Properties_20_From_20_Resource_case_1_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_CF_20_URL_2F_Create_20_Data_20_And_20_Properties_20_From_20_Resource_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_URL_2F_Create_20_Data_20_And_20_Properties_20_From_20_Resource_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_URL_2F_Create_20_Data_20_And_20_Properties_20_From_20_Resource_case_1_local_7_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_CF_20_URL_2F_Create_20_Data_20_And_20_Properties_20_From_20_Resource_case_1_local_7_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_CF_20_URL_2F_Create_20_Data_20_And_20_Properties_20_From_20_Resource_case_1_local_8_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_URL_2F_Create_20_Data_20_And_20_Properties_20_From_20_Resource_case_1_local_8_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(1)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(0));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,NONE)
FOOTERWITHNONE(1)
}

enum opTrigger vpx_method_CF_20_URL_2F_Create_20_Data_20_And_20_Properties_20_From_20_Resource_case_1_local_8_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_URL_2F_Create_20_Data_20_And_20_Properties_20_From_20_Resource_case_1_local_8_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_CF_20_URL_2F_Create_20_Data_20_And_20_Properties_20_From_20_Resource_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_URL_2F_Create_20_Data_20_And_20_Properties_20_From_20_Resource_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_URL_2F_Create_20_Data_20_And_20_Properties_20_From_20_Resource_case_1_local_8_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_CF_20_URL_2F_Create_20_Data_20_And_20_Properties_20_From_20_Resource_case_1_local_8_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_CF_20_URL_2F_Create_20_Data_20_And_20_Properties_20_From_20_Resource_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3);
enum opTrigger vpx_method_CF_20_URL_2F_Create_20_Data_20_And_20_Properties_20_From_20_Resource_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3)
{
HEADER(15)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
INPUT(4,4)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CF_20_Reference,1,1,TERMINAL(0),ROOT(5));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(5));
NEXTCASEONSUCCESS

result = vpx_method_CF_20_URL_2F_Create_20_Data_20_And_20_Properties_20_From_20_Resource_case_1_local_4(PARAMETERS,TERMINAL(1),ROOT(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Current_20_Allocator,1,1,TERMINAL(0),ROOT(7));

result = vpx_method_Default_20_NULL(PARAMETERS,TERMINAL(3),ROOT(8));

result = vpx_method_CF_20_URL_2F_Create_20_Data_20_And_20_Properties_20_From_20_Resource_case_1_local_7(PARAMETERS,TERMINAL(4),ROOT(9));

result = vpx_method_CF_20_URL_2F_Create_20_Data_20_And_20_Properties_20_From_20_Resource_case_1_local_8(PARAMETERS,TERMINAL(2),ROOT(10));

PUTINTEGER(CFURLCreateDataAndPropertiesFromResource( GETCONSTPOINTER(__CFAllocator,*,TERMINAL(7)),GETCONSTPOINTER(__CFURL,*,TERMINAL(5)),GETPOINTER(0,__CFData,**,ROOT(12),TERMINAL(6)),GETPOINTER(0,__CFDictionary,**,ROOT(13),TERMINAL(10)),GETCONSTPOINTER(__CFArray,*,TERMINAL(8)),GETPOINTER(4,int,*,ROOT(14),TERMINAL(9))),11);
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(11))
OUTPUT(1,TERMINAL(12))
OUTPUT(2,TERMINAL(13))
OUTPUT(3,TERMINAL(14))
FOOTER(15)
}

enum opTrigger vpx_method_CF_20_URL_2F_Create_20_Data_20_And_20_Properties_20_From_20_Resource_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3);
enum opTrigger vpx_method_CF_20_URL_2F_Create_20_Data_20_And_20_Properties_20_From_20_Resource_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
INPUT(4,4)
result = kSuccess;

result = vpx_constant(PARAMETERS,"FALSE",ROOT(5));

result = vpx_constant(PARAMETERS,"NULL",ROOT(6));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
OUTPUT(1,TERMINAL(6))
OUTPUT(2,TERMINAL(6))
OUTPUT(3,TERMINAL(6))
FOOTER(7)
}

enum opTrigger vpx_method_CF_20_URL_2F_Create_20_Data_20_And_20_Properties_20_From_20_Resource(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_URL_2F_Create_20_Data_20_And_20_Properties_20_From_20_Resource_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,terminal4,root0,root1,root2,root3))
vpx_method_CF_20_URL_2F_Create_20_Data_20_And_20_Properties_20_From_20_Resource_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,terminal4,root0,root1,root2,root3);
return outcome;
}

enum opTrigger vpx_method_CF_20_URL_2F_Destroy_20_Resource(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADERWITHNONE(7)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CF_20_Reference,1,1,TERMINAL(0),ROOT(1));

PUTINTEGER(CFURLDestroyResource( GETCONSTPOINTER(__CFURL,*,TERMINAL(1)),GETPOINTER(4,int,*,ROOT(3),NONE)),2);
result = kSuccess;

result = vpx_method_Get_20_SInt32(PARAMETERS,TERMINAL(3),NONE,ROOT(4),ROOT(5));

result = vpx_method_Integer_20_To_20_Boolean(PARAMETERS,TERMINAL(2),ROOT(6));

result = kSuccess;

OUTPUT(0,TERMINAL(6))
OUTPUT(1,TERMINAL(5))
FOOTERSINGLECASEWITHNONE(7)
}

enum opTrigger vpx_method_CF_20_URL_2F_Create_20_Property_20_List_20_From_20_XML_20_File_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_URL_2F_Create_20_Property_20_List_20_From_20_XML_20_File_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(12)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"TRUE",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Create_20_Data_20_And_20_Properties_20_From_20_Resource,5,4,TERMINAL(0),TERMINAL(1),NONE,NONE,NONE,ROOT(2),ROOT(3),ROOT(4),ROOT(5));

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_extconstant(PARAMETERS,kCFPropertyListMutableContainersAndLeaves,ROOT(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Current_20_Allocator,1,1,TERMINAL(0),ROOT(7));

result = vpx_constant(PARAMETERS,"NULL",ROOT(8));

PUTPOINTER(void,*,CFPropertyListCreateFromXMLData( GETCONSTPOINTER(__CFAllocator,*,TERMINAL(7)),GETCONSTPOINTER(__CFData,*,TERMINAL(3)),GETINTEGER(TERMINAL(6)),GETPOINTER(0,__CFString,**,ROOT(10),TERMINAL(8))),9);
result = kSuccess;

CFRelease( GETCONSTPOINTER(void,*,TERMINAL(3)));
result = kSuccess;

result = vpx_method_From_20_CFType(PARAMETERS,TERMINAL(9),ROOT(11));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(11))
FOOTERWITHNONE(12)
}

enum opTrigger vpx_method_CF_20_URL_2F_Create_20_Property_20_List_20_From_20_XML_20_File_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_URL_2F_Create_20_Property_20_List_20_From_20_XML_20_File_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_CF_20_URL_2F_Create_20_Property_20_List_20_From_20_XML_20_File(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_URL_2F_Create_20_Property_20_List_20_From_20_XML_20_File_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_CF_20_URL_2F_Create_20_Property_20_List_20_From_20_XML_20_File_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_CF_20_URL_2F_Write_20_XML_20_File_20_From_20_Property_20_List_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_URL_2F_Write_20_XML_20_File_20_From_20_Property_20_List_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Current_20_Allocator,1,1,TERMINAL(0),ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CF_20_Reference,1,1,TERMINAL(0),ROOT(2));

PUTPOINTER(__CFData,*,CFPropertyListCreateXMLData( GETCONSTPOINTER(__CFAllocator,*,TERMINAL(1)),GETCONSTPOINTER(void,*,TERMINAL(2))),3);
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
FAILONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_CF_20_URL_2F_Write_20_XML_20_File_20_From_20_Property_20_List_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_URL_2F_Write_20_XML_20_File_20_From_20_Property_20_List_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_external_3F_,1,0,TERMINAL(0));
FAILONFAILURE

PUTPOINTER(__CFAllocator,*,CFAllocatorGetDefault(),1);
result = kSuccess;

PUTPOINTER(__CFData,*,CFPropertyListCreateXMLData( GETCONSTPOINTER(__CFAllocator,*,TERMINAL(1)),GETCONSTPOINTER(void,*,TERMINAL(0))),2);
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
FAILONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_CF_20_URL_2F_Write_20_XML_20_File_20_From_20_Property_20_List_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_URL_2F_Write_20_XML_20_File_20_From_20_Property_20_List_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_URL_2F_Write_20_XML_20_File_20_From_20_Property_20_List_case_1_local_2_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_CF_20_URL_2F_Write_20_XML_20_File_20_From_20_Property_20_List_case_1_local_2_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_CF_20_URL_2F_Write_20_XML_20_File_20_From_20_Property_20_List_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_CF_20_URL_2F_Write_20_XML_20_File_20_From_20_Property_20_List_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADERWITHNONE(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_CF_20_URL_2F_Write_20_XML_20_File_20_From_20_Property_20_List_case_1_local_2(PARAMETERS,TERMINAL(1),ROOT(2));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Write_20_Data_20_And_20_Properties_20_To_20_Resource,3,2,TERMINAL(0),TERMINAL(2),NONE,ROOT(3),ROOT(4));

CFRelease( GETCONSTPOINTER(void,*,TERMINAL(2)));
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(3))
OUTPUT(1,TERMINAL(4))
FOOTERWITHNONE(5)
}

enum opTrigger vpx_method_CF_20_URL_2F_Write_20_XML_20_File_20_From_20_Property_20_List_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_CF_20_URL_2F_Write_20_XML_20_File_20_From_20_Property_20_List_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"FALSE",ROOT(2));

result = vpx_extconstant(PARAMETERS,paramErr,ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
OUTPUT(1,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_CF_20_URL_2F_Write_20_XML_20_File_20_From_20_Property_20_List(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_URL_2F_Write_20_XML_20_File_20_From_20_Property_20_List_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1))
vpx_method_CF_20_URL_2F_Write_20_XML_20_File_20_From_20_Property_20_List_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1);
return outcome;
}

/* Stop Universals */



Nat4 VPLC_CF_20_UUID_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_CF_20_UUID_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 200 300 } */
	tempAttribute = attribute_add("Allocator",tempClass,NULL,environment);
	tempAttribute = attribute_add("CF Reference",tempClass,NULL,environment);
	tempAttribute = attribute_add("Release?",tempClass,tempAttribute_CF_20_UUID_2F_Release_3F_,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"CF Base");
	return kNOERROR;
}

/* Start Universals: { 305 705 }{ 200 300 } */
enum opTrigger vpx_method_CF_20_UUID_2F_New(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(2)
INPUT(0,0)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_CF_20_UUID,1,1,NONE,ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_CF_20_Reference,2,0,TERMINAL(1),TERMINAL(0));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASEWITHNONE(2)
}

enum opTrigger vpx_method_CF_20_UUID_2F_Get_20_Class_20_Type_20_ID(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

PUTINTEGER(CFUUIDGetTypeID(),1);
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_CF_20_UUID_2F_Create(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Current_20_Allocator,1,1,TERMINAL(0),ROOT(1));

PUTPOINTER(__CFUUID,*,CFUUIDCreate( GETCONSTPOINTER(__CFAllocator,*,TERMINAL(1))),2);
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_CF_20_Reference,2,0,TERMINAL(0),TERMINAL(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_CF_20_UUID_2F_Create_20_From_20_UUID_20_Bytes(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Current_20_Allocator,1,1,TERMINAL(0),ROOT(2));

PUTPOINTER(__CFUUID,*,CFUUIDCreateFromUUIDBytes( GETCONSTPOINTER(__CFAllocator,*,TERMINAL(2)),GETSTRUCTURE(16,CFUUIDBytes,TERMINAL(1))),3);
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_CF_20_Reference,2,0,TERMINAL(0),TERMINAL(3));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_CF_20_UUID_2F_Create_20_From_20_List(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(20)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Current_20_Allocator,1,1,TERMINAL(0),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,16,TERMINAL(1),ROOT(3),ROOT(4),ROOT(5),ROOT(6),ROOT(7),ROOT(8),ROOT(9),ROOT(10),ROOT(11),ROOT(12),ROOT(13),ROOT(14),ROOT(15),ROOT(16),ROOT(17),ROOT(18));

PUTPOINTER(__CFUUID,*,CFUUIDGetConstantUUIDWithBytes( GETCONSTPOINTER(__CFAllocator,*,TERMINAL(2)),GETINTEGER(TERMINAL(3)),GETINTEGER(TERMINAL(4)),GETINTEGER(TERMINAL(5)),GETINTEGER(TERMINAL(6)),GETINTEGER(TERMINAL(7)),GETINTEGER(TERMINAL(8)),GETINTEGER(TERMINAL(9)),GETINTEGER(TERMINAL(10)),GETINTEGER(TERMINAL(11)),GETINTEGER(TERMINAL(12)),GETINTEGER(TERMINAL(13)),GETINTEGER(TERMINAL(14)),GETINTEGER(TERMINAL(15)),GETINTEGER(TERMINAL(16)),GETINTEGER(TERMINAL(17)),GETINTEGER(TERMINAL(18))),19);
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_CF_20_Reference,2,0,TERMINAL(0),TERMINAL(19));

result = kSuccess;

FOOTERSINGLECASE(20)
}

enum opTrigger vpx_method_CF_20_UUID_2F_Create_20_From_20_String(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Current_20_Allocator,1,1,TERMINAL(0),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CF_20_Reference,1,1,TERMINAL(1),ROOT(3));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
FAILONSUCCESS

PUTPOINTER(__CFUUID,*,CFUUIDCreateFromString( GETCONSTPOINTER(__CFAllocator,*,TERMINAL(2)),GETCONSTPOINTER(__CFString,*,TERMINAL(3))),4);
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_CF_20_Reference,2,0,TERMINAL(0),TERMINAL(4));

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_CF_20_UUID_2F_Get_20_Bytes_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_UUID_2F_Get_20_Bytes_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CF_20_Reference,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
NEXTCASEONSUCCESS

PUTSTRUCTURE(16,CFUUIDBytes,CFUUIDGetUUIDBytes( GETCONSTPOINTER(__CFUUID,*,TERMINAL(1))),2);
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_CF_20_UUID_2F_Get_20_Bytes_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_UUID_2F_Get_20_Bytes_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_CF_20_UUID_2F_Get_20_Bytes(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_UUID_2F_Get_20_Bytes_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_CF_20_UUID_2F_Get_20_Bytes_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_CF_20_UUID_2F_Get_20_Bytes_20_List_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_CF_20_UUID_2F_Get_20_Bytes_20_List_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"1",ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_integer,3,3,TERMINAL(0),TERMINAL(1),TERMINAL(2),ROOT(3),ROOT(4),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_CF_20_UUID_2F_Get_20_Bytes_20_List_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_UUID_2F_Get_20_Bytes_20_List_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Bytes,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
NEXTCASEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_external_2D_size,1,1,TERMINAL(1),ROOT(2));

result = vpx_method_Make_20_Count(PARAMETERS,TERMINAL(2),ROOT(3));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(3))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_CF_20_UUID_2F_Get_20_Bytes_20_List_case_1_local_6(PARAMETERS,TERMINAL(1),LIST(3),ROOT(4));
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

enum opTrigger vpx_method_CF_20_UUID_2F_Get_20_Bytes_20_List_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_UUID_2F_Get_20_Bytes_20_List_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"(  )",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_CF_20_UUID_2F_Get_20_Bytes_20_List(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_UUID_2F_Get_20_Bytes_20_List_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_CF_20_UUID_2F_Get_20_Bytes_20_List_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_CF_20_UUID_2F_Get_20_String_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_UUID_2F_Get_20_String_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CF_20_Reference,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
NEXTCASEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Current_20_Allocator,1,1,TERMINAL(0),ROOT(2));

PUTPOINTER(__CFString,*,CFUUIDCreateString( GETCONSTPOINTER(__CFAllocator,*,TERMINAL(2)),GETCONSTPOINTER(__CFUUID,*,TERMINAL(1))),3);
result = kSuccess;

result = vpx_method_CF_20_String_2F_New(PARAMETERS,TERMINAL(3),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_CF_20_UUID_2F_Get_20_String_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_UUID_2F_Get_20_String_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_CF_20_UUID_2F_Get_20_String(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_UUID_2F_Get_20_String_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_CF_20_UUID_2F_Get_20_String_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

/* Stop Universals */



Nat4 VPLC_CF_20_XMLNode_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_CF_20_XMLNode_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 200 300 } */
	tempAttribute = attribute_add("Allocator",tempClass,NULL,environment);
	tempAttribute = attribute_add("CF Reference",tempClass,NULL,environment);
	tempAttribute = attribute_add("Release?",tempClass,tempAttribute_CF_20_XMLNode_2F_Release_3F_,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"CF Base");
	return kNOERROR;
}

/* Start Universals: { 305 705 }{ 200 300 } */
enum opTrigger vpx_method_CF_20_XMLNode_2F_New(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(2)
INPUT(0,0)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_CF_20_XMLNode,1,1,NONE,ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_CF_20_Reference,2,0,TERMINAL(1),TERMINAL(0));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASEWITHNONE(2)
}

enum opTrigger vpx_method_CF_20_XMLNode_2F_Get_20_Class_20_Type_20_ID(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

PUTINTEGER(CFXMLNodeGetTypeID(),1);
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASE(2)
}

/* Stop Universals */



Nat4 VPLC_CF_20_XMLParser_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_CF_20_XMLParser_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 200 300 } */
	tempAttribute = attribute_add("Allocator",tempClass,NULL,environment);
	tempAttribute = attribute_add("CF Reference",tempClass,NULL,environment);
	tempAttribute = attribute_add("Release?",tempClass,tempAttribute_CF_20_XMLParser_2F_Release_3F_,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"CF Base");
	return kNOERROR;
}

/* Start Universals: { 305 705 }{ 200 300 } */
enum opTrigger vpx_method_CF_20_XMLParser_2F_New(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(2)
INPUT(0,0)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_CF_20_XMLParser,1,1,NONE,ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_CF_20_Reference,2,0,TERMINAL(1),TERMINAL(0));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASEWITHNONE(2)
}

enum opTrigger vpx_method_CF_20_XMLParser_2F_Get_20_Class_20_Type_20_ID(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

PUTINTEGER(CFXMLParserGetTypeID(),1);
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASE(2)
}

/* Stop Universals */



Nat4 VPLC_CF_20_Absolute_20_Time_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_CF_20_Absolute_20_Time_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 200 300 } */
	tempAttribute = attribute_add("Value",tempClass,tempAttribute_CF_20_Absolute_20_Time_2F_Value,environment);
/* Stop Attributes */

/* NULL SUPER CLASS */
	return kNOERROR;
}

/* Start Universals: { 60 60 }{ 200 300 } */
enum opTrigger vpx_method_CF_20_Absolute_20_Time_2F_Get_20_Value(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Value,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_CF_20_Absolute_20_Time_2F_Set_20_Value(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Value,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_CF_20_Absolute_20_Time_2F_New(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(2)
INPUT(0,0)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_CF_20_Absolute_20_Time,1,1,NONE,ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Value,2,0,TERMINAL(1),TERMINAL(0));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASEWITHNONE(2)
}

enum opTrigger vpx_method_CF_20_Absolute_20_Time_2F_Get_20_Gregorian_20_Date_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_Absolute_20_Time_2F_Get_20_Gregorian_20_Date_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_CF_20_Reference,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
NEXTCASEONSUCCESS

PUTPOINTER(void,*,CFRetain( GETCONSTPOINTER(void,*,TERMINAL(1))),2);
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_CF_20_Absolute_20_Time_2F_Get_20_Gregorian_20_Date_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_Absolute_20_Time_2F_Get_20_Gregorian_20_Date_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

PUTREAL(CFAbsoluteTimeGetCurrent(),1);
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_CF_20_Absolute_20_Time_2F_Get_20_Gregorian_20_Date_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CF_20_Absolute_20_Time_2F_Get_20_Gregorian_20_Date_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_Absolute_20_Time_2F_Get_20_Gregorian_20_Date_case_1_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_CF_20_Absolute_20_Time_2F_Get_20_Gregorian_20_Date_case_1_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_CF_20_Absolute_20_Time_2F_Get_20_Gregorian_20_Date_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_CF_20_Absolute_20_Time_2F_Get_20_Gregorian_20_Date_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Value,1,1,TERMINAL(0),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
NEXTCASEONSUCCESS

result = vpx_method_CF_20_Absolute_20_Time_2F_Get_20_Gregorian_20_Date_case_1_local_4(PARAMETERS,TERMINAL(1),ROOT(3));

PUTSTRUCTURE(16,CFGregorianDate,CFAbsoluteTimeGetGregorianDate( GETREAL(TERMINAL(2)),GETCONSTPOINTER(__CFTimeZone,*,TERMINAL(3))),4);
result = kSuccess;

CFRelease( GETCONSTPOINTER(void,*,TERMINAL(3)));
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_CF_20_Absolute_20_Time_2F_Get_20_Gregorian_20_Date_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_CF_20_Absolute_20_Time_2F_Get_20_Gregorian_20_Date_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
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

enum opTrigger vpx_method_CF_20_Absolute_20_Time_2F_Get_20_Gregorian_20_Date(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CF_20_Absolute_20_Time_2F_Get_20_Gregorian_20_Date_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_CF_20_Absolute_20_Time_2F_Get_20_Gregorian_20_Date_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_CF_20_Absolute_20_Time_2F_Create_20_With_20_Now(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0)
{
HEADER(2)
result = kSuccess;

PUTREAL(CFAbsoluteTimeGetCurrent(),0);
result = kSuccess;

result = vpx_call_context_method(PARAMETERS,kVPXMethod_New,1,1,TERMINAL(0),ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASE(2)
}

/* Stop Universals */






Nat4	loadClasses_CF_20_Base(V_Environment environment);
Nat4	loadClasses_CF_20_Base(V_Environment environment)
{
	V_Class result = NULL;

	result = class_new("CF Base",environment);
	if(result == NULL) return kERROR;
	VPLC_CF_20_Base_class_load(result,environment);
	result = class_new("CF Array",environment);
	if(result == NULL) return kERROR;
	VPLC_CF_20_Array_class_load(result,environment);
	result = class_new("CF Bag",environment);
	if(result == NULL) return kERROR;
	VPLC_CF_20_Bag_class_load(result,environment);
	result = class_new("CF Boolean",environment);
	if(result == NULL) return kERROR;
	VPLC_CF_20_Boolean_class_load(result,environment);
	result = class_new("CF Bundle",environment);
	if(result == NULL) return kERROR;
	VPLC_CF_20_Bundle_class_load(result,environment);
	result = class_new("CF Data",environment);
	if(result == NULL) return kERROR;
	VPLC_CF_20_Data_class_load(result,environment);
	result = class_new("CF Date",environment);
	if(result == NULL) return kERROR;
	VPLC_CF_20_Date_class_load(result,environment);
	result = class_new("CF Dictionary",environment);
	if(result == NULL) return kERROR;
	VPLC_CF_20_Dictionary_class_load(result,environment);
	result = class_new("CF Number",environment);
	if(result == NULL) return kERROR;
	VPLC_CF_20_Number_class_load(result,environment);
	result = class_new("CF PlugIn",environment);
	if(result == NULL) return kERROR;
	VPLC_CF_20_PlugIn_class_load(result,environment);
	result = class_new("CF Set",environment);
	if(result == NULL) return kERROR;
	VPLC_CF_20_Set_class_load(result,environment);
	result = class_new("CF String",environment);
	if(result == NULL) return kERROR;
	VPLC_CF_20_String_class_load(result,environment);
	result = class_new("CF TimeZone",environment);
	if(result == NULL) return kERROR;
	VPLC_CF_20_TimeZone_class_load(result,environment);
	result = class_new("CF Tree",environment);
	if(result == NULL) return kERROR;
	VPLC_CF_20_Tree_class_load(result,environment);
	result = class_new("CF URL",environment);
	if(result == NULL) return kERROR;
	VPLC_CF_20_URL_class_load(result,environment);
	result = class_new("CF UUID",environment);
	if(result == NULL) return kERROR;
	VPLC_CF_20_UUID_class_load(result,environment);
	result = class_new("CF XMLNode",environment);
	if(result == NULL) return kERROR;
	VPLC_CF_20_XMLNode_class_load(result,environment);
	result = class_new("CF XMLParser",environment);
	if(result == NULL) return kERROR;
	VPLC_CF_20_XMLParser_class_load(result,environment);
	result = class_new("CF Absolute Time",environment);
	if(result == NULL) return kERROR;
	VPLC_CF_20_Absolute_20_Time_class_load(result,environment);
	return kNOERROR;

}

Nat4	loadUniversals_CF_20_Base(V_Environment environment);
Nat4	loadUniversals_CF_20_Base(V_Environment environment)
{
	V_Method result = NULL;

	result = method_new("CFSTR",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CFSTR,NULL);

	result = method_new("To CFStringRef",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_To_20_CFStringRef,NULL);

	result = method_new("From CFStringRef",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_From_20_CFStringRef,NULL);

	result = method_new("Create CFStringRef",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Create_20_CFStringRef,NULL);

	result = method_new("From CFStringRef Encoding",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_From_20_CFStringRef_20_Encoding,NULL);

	result = method_new("To CFString",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_To_20_CFString,NULL);

	result = method_new("New CFRange",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_New_20_CFRange,NULL);

	result = method_new("From CFRange",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_From_20_CFRange,NULL);

	result = method_new("Get CF Constant",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Get_20_CF_20_Constant,NULL);

	result = method_new("Get Framework Constant",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Get_20_Framework_20_Constant,NULL);

	result = method_new("Get Framework Structure",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Get_20_Framework_20_Structure,NULL);

	result = method_new("Copy Localized String",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Copy_20_Localized_20_String,NULL);

	result = method_new("CFPreferences Synchronize",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CFPreferences_20_Synchronize,NULL);

	result = method_new("CFPrefs Set App Value",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CFPrefs_20_Set_20_App_20_Value,NULL);

	result = method_new("CFPrefs Get App Value",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CFPrefs_20_Get_20_App_20_Value,NULL);

	result = method_new("To MacRoman",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_To_20_MacRoman,NULL);

	result = method_new("From MacRoman",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_From_20_MacRoman,NULL);

	result = method_new("To CFBooleanRef",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_To_20_CFBooleanRef,NULL);

	result = method_new("From CFBooleanRef",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_From_20_CFBooleanRef,NULL);

	result = method_new("TEST CFNumber",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_TEST_20_CFNumber,NULL);

	result = method_new("TEST CFString 1",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_TEST_20_CFString_20_1,NULL);

	result = method_new("TEST CFString 2",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_TEST_20_CFString_20_2,NULL);

	result = method_new("TEST CFString 3",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_TEST_20_CFString_20_3,NULL);

	result = method_new("TEST CFString 4",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_TEST_20_CFString_20_4,NULL);

	result = method_new("TEST CFURL 1",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_TEST_20_CFURL_20_1,NULL);

	result = method_new("TEST CFURL 2",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_TEST_20_CFURL_20_2,NULL);

	result = method_new("TEST CFData",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_TEST_20_CFData,NULL);

	result = method_new("TEST Display Alert",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_TEST_20_Display_20_Alert,NULL);

	result = method_new("TEST Display Notice",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_TEST_20_Display_20_Notice,NULL);

	result = method_new("TEST CFConstant",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_TEST_20_CFConstant,NULL);

	result = method_new("TEST CFPref Write",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_TEST_20_CFPref_20_Write,NULL);

	result = method_new("TEST CFPref Read",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_TEST_20_CFPref_20_Read,NULL);

	result = method_new("TEST CFPref Sync",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_TEST_20_CFPref_20_Sync,NULL);

	result = method_new("To CFType",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_To_20_CFType,NULL);

	result = method_new("From CFType",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_From_20_CFType,NULL);

	result = method_new("Get CFNullRef",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Get_20_CFNullRef,NULL);

	result = method_new("To CFNumberRef",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_To_20_CFNumberRef,NULL);

	result = method_new("From CFNumberRef",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_From_20_CFNumberRef,NULL);

	result = method_new("CF Release",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_Release,NULL);

	result = method_new("CF Base/Clone",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_Base_2F_Clone,NULL);

	result = method_new("CF Base/Clone Reference",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_Base_2F_Clone_20_Reference,NULL);

	result = method_new("CF Base/Default Range",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_Base_2F_Default_20_Range,NULL);

	result = method_new("CF Base/Dispose",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_Base_2F_Dispose,NULL);

	result = method_new("CF Base/Equal",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_Base_2F_Equal,NULL);

	result = method_new("CF Base/Get Allocator",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_Base_2F_Get_20_Allocator,NULL);

	result = method_new("CF Base/Get CF Reference",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_Base_2F_Get_20_CF_20_Reference,NULL);

	result = method_new("CF Base/Get Class Type ID",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_Base_2F_Get_20_Class_20_Type_20_ID,NULL);

	result = method_new("CF Base/Get Current Allocator",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_Base_2F_Get_20_Current_20_Allocator,NULL);

	result = method_new("CF Base/Get Release?",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_Base_2F_Get_20_Release_3F_,NULL);

	result = method_new("CF Base/Get Retain Count",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_Base_2F_Get_20_Retain_20_Count,NULL);

	result = method_new("CF Base/Get Type ID",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_Base_2F_Get_20_Type_20_ID,NULL);

	result = method_new("CF Base/Hash",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_Base_2F_Hash,NULL);

	result = method_new("CF Base/New",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_Base_2F_New,NULL);

	result = method_new("CF Base/Release",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_Base_2F_Release,NULL);

	result = method_new("CF Base/Retain",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_Base_2F_Retain,NULL);

	result = method_new("CF Base/Set Allocator",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_Base_2F_Set_20_Allocator,NULL);

	result = method_new("CF Base/Set CF Reference",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_Base_2F_Set_20_CF_20_Reference,NULL);

	result = method_new("CF Base/Set Release?",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_Base_2F_Set_20_Release_3F_,NULL);

	result = method_new("CF Base/Show",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_Base_2F_Show,NULL);

	result = method_new("CF Base/CF Last Release",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_Base_2F_CF_20_Last_20_Release,NULL);

	result = method_new("CF Base/Don't Release",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_Base_2F_Don_27_t_20_Release,NULL);

	result = method_new("CF Array/New",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_Array_2F_New,NULL);

	result = method_new("CF Array/Get Class Type ID",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_Array_2F_Get_20_Class_20_Type_20_ID,NULL);

	result = method_new("CF Array/Append Value",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_Array_2F_Append_20_Value,NULL);

	result = method_new("CF Array/Get Count",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_Array_2F_Get_20_Count,NULL);

	result = method_new("CF Array/Get Value At Index",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_Array_2F_Get_20_Value_20_At_20_Index,NULL);

	result = method_new("CF Array/Get Value At Index As CFStringRef",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_Array_2F_Get_20_Value_20_At_20_Index_20_As_20_CFStringRef,NULL);

	result = method_new("CF Array/Get Value At Index As String",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_Array_2F_Get_20_Value_20_At_20_Index_20_As_20_String,NULL);

	result = method_new("CF Array/Get All Values",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_Array_2F_Get_20_All_20_Values,NULL);

	result = method_new("CF Array/Get All Values As Strings",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_Array_2F_Get_20_All_20_Values_20_As_20_Strings,NULL);

	result = method_new("CF Bag/New",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_Bag_2F_New,NULL);

	result = method_new("CF Bag/Get Class Type ID",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_Bag_2F_Get_20_Class_20_Type_20_ID,NULL);

	result = method_new("CF Boolean/New",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_Boolean_2F_New,NULL);

	result = method_new("CF Boolean/Get Class Type ID",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_Boolean_2F_Get_20_Class_20_Type_20_ID,NULL);

	result = method_new("CF Bundle/New",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_Bundle_2F_New,NULL);

	result = method_new("CF Bundle/Get Class Type ID",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_Bundle_2F_Get_20_Class_20_Type_20_ID,NULL);

	result = method_new("CF Bundle/Create Bundle",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_Bundle_2F_Create_20_Bundle,NULL);

	result = method_new("CF Bundle/Get Bundle Identifier",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_Bundle_2F_Get_20_Bundle_20_Identifier,NULL);

	result = method_new("CF Bundle/Get Bundle With Identifier",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_Bundle_2F_Get_20_Bundle_20_With_20_Identifier,NULL);

	result = method_new("CF Bundle/Get CFBundleRef",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_Bundle_2F_Get_20_CFBundleRef,NULL);

	result = method_new("CF Bundle/Get Data Pointer For Name",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_Bundle_2F_Get_20_Data_20_Pointer_20_For_20_Name,NULL);

	result = method_new("CF Bundle/Get Function Pointer For Name",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_Bundle_2F_Get_20_Function_20_Pointer_20_For_20_Name,NULL);

	result = method_new("CF Bundle/Get Main Bundle",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_Bundle_2F_Get_20_Main_20_Bundle,NULL);

	result = method_new("CF Bundle/Is Executable Loaded?",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_Bundle_2F_Is_20_Executable_20_Loaded_3F_,NULL);

	result = method_new("CF Bundle/Load Executable",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_Bundle_2F_Load_20_Executable,NULL);

	result = method_new("CF Bundle/Unload Executable",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_Bundle_2F_Unload_20_Executable,NULL);

	result = method_new("CF Bundle/Create From CFURL",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_Bundle_2F_Create_20_From_20_CFURL,NULL);

	result = method_new("CF Bundle/Create From FSRef",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_Bundle_2F_Create_20_From_20_FSRef,NULL);

	result = method_new("CF Bundle/Get Package Info",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_Bundle_2F_Get_20_Package_20_Info,NULL);

	result = method_new("CF Bundle/Get Value For Info Dictionary Key",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_Bundle_2F_Get_20_Value_20_For_20_Info_20_Dictionary_20_Key,NULL);

	result = method_new("CF Bundle/Get Structure Pointer For Name",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_Bundle_2F_Get_20_Structure_20_Pointer_20_For_20_Name,NULL);

	result = method_new("CF Bundle/Copy Resource URL",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_Bundle_2F_Copy_20_Resource_20_URL,NULL);

	result = method_new("CF Bundle/Copy Bundle URL",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_Bundle_2F_Copy_20_Bundle_20_URL,NULL);

	result = method_new("CF Data/New",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_Data_2F_New,NULL);

	result = method_new("CF Data/Get Class Type ID",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_Data_2F_Get_20_Class_20_Type_20_ID,NULL);

	result = method_new("CF Data/Append Bytes",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_Data_2F_Append_20_Bytes,NULL);

	result = method_new("CF Data/Create",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_Data_2F_Create,NULL);

	result = method_new("CF Data/Create Mutable",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_Data_2F_Create_20_Mutable,NULL);

	result = method_new("CF Data/Create Mutable Copy",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_Data_2F_Create_20_Mutable_20_Copy,NULL);

	result = method_new("CF Data/Default Bytes Length",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_Data_2F_Default_20_Bytes_20_Length,NULL);

	result = method_new("CF Data/Delete Bytes",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_Data_2F_Delete_20_Bytes,NULL);

	result = method_new("CF Data/Get Byte Pointer",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_Data_2F_Get_20_Byte_20_Pointer,NULL);

	result = method_new("CF Data/Get Length",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_Data_2F_Get_20_Length,NULL);

	result = method_new("CF Data/Get Mutable Byte Pointer",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_Data_2F_Get_20_Mutable_20_Byte_20_Pointer,NULL);

	result = method_new("CF Data/Increase Length",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_Data_2F_Increase_20_Length,NULL);

	result = method_new("CF Data/Set Length",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_Data_2F_Set_20_Length,NULL);

	result = method_new("CF Data/Replace Bytes",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_Data_2F_Replace_20_Bytes,NULL);

	result = method_new("CF Data/Get Bytes",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_Data_2F_Get_20_Bytes,NULL);

	result = method_new("CF Data/Create With Object",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_Data_2F_Create_20_With_20_Object,NULL);

	result = method_new("CF Data/Get Object",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_Data_2F_Get_20_Object,NULL);

	result = method_new("CF Data/Get Text",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_Data_2F_Get_20_Text,NULL);

	result = method_new("CF Data/Create With String",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_Data_2F_Create_20_With_20_String,NULL);

	result = method_new("CF Data/Get Integer",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_Data_2F_Get_20_Integer,NULL);

	result = method_new("CF Date/New",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_Date_2F_New,NULL);

	result = method_new("CF Date/Get Class Type ID",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_Date_2F_Get_20_Class_20_Type_20_ID,NULL);

	result = method_new("CF Date/Get Absolute Time",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_Date_2F_Get_20_Absolute_20_Time,NULL);

	result = method_new("CF Date/Get Seconds Since Date",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_Date_2F_Get_20_Seconds_20_Since_20_Date,NULL);

	result = method_new("CF Date/Compare",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_Date_2F_Compare,NULL);

	result = method_new("CF Dictionary/New",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_Dictionary_2F_New,NULL);

	result = method_new("CF Dictionary/Get Class Type ID",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_Dictionary_2F_Get_20_Class_20_Type_20_ID,NULL);

	result = method_new("CF Dictionary/Add Key Value",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_Dictionary_2F_Add_20_Key_20_Value,NULL);

	result = method_new("CF Dictionary/Set Key Value",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_Dictionary_2F_Set_20_Key_20_Value,NULL);

	result = method_new("CF Dictionary/Get Key Value",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_Dictionary_2F_Get_20_Key_20_Value,NULL);

	result = method_new("CF Dictionary/Create Mutable For CFTypes",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_Dictionary_2F_Create_20_Mutable_20_For_20_CFTypes,NULL);

	result = method_new("CF Dictionary/~Set Value",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_Dictionary_2F7E_Set_20_Value,NULL);

	result = method_new("CF Dictionary/~Get Value",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_Dictionary_2F7E_Get_20_Value,NULL);

	result = method_new("CF Number/New",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_Number_2F_New,NULL);

	result = method_new("CF Number/Get Class Type ID",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_Number_2F_Get_20_Class_20_Type_20_ID,NULL);

	result = method_new("CF Number/Create",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_Number_2F_Create,NULL);

	result = method_new("CF Number/Get Byte Size",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_Number_2F_Get_20_Byte_20_Size,NULL);

	result = method_new("CF Number/Get Type",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_Number_2F_Get_20_Type,NULL);

	result = method_new("CF Number/Is Float Type?",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_Number_2F_Is_20_Float_20_Type_3F_,NULL);

	result = method_new("CF Number/Get Number Value",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_Number_2F_Get_20_Number_20_Value,NULL);

	result = method_new("CF Number/Get Value",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_Number_2F_Get_20_Value,NULL);

	result = method_new("CF Number/Create Byte Integer",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_Number_2F_Create_20_Byte_20_Integer,NULL);

	result = method_new("CF Number/Create Long Integer",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_Number_2F_Create_20_Long_20_Integer,NULL);

	result = method_new("CF Number/Create Short Integer",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_Number_2F_Create_20_Short_20_Integer,NULL);

	result = method_new("CF Number/Create Float",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_Number_2F_Create_20_Float,NULL);

	result = method_new("CF PlugIn/New",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_PlugIn_2F_New,NULL);

	result = method_new("CF PlugIn/Get Class Type ID",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_PlugIn_2F_Get_20_Class_20_Type_20_ID,NULL);

	result = method_new("CF Set/New",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_Set_2F_New,NULL);

	result = method_new("CF Set/Get Class Type ID",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_Set_2F_Get_20_Class_20_Type_20_ID,NULL);

	result = method_new("CF String/New",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_String_2F_New,NULL);

	result = method_new("CF String/Get Class Type ID",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_String_2F_Get_20_Class_20_Type_20_ID,NULL);

	result = method_new("CF String/Append",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_String_2F_Append,NULL);

	result = method_new("CF String/Append String",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_String_2F_Append_20_String,NULL);

	result = method_new("CF String/Capitalize",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_String_2F_Capitalize,NULL);

	result = method_new("CF String/Clone Reference",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_String_2F_Clone_20_Reference,NULL);

	result = method_new("CF String/Compare Range",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_String_2F_Compare_20_Range,NULL);

	result = method_new("CF String/Compare",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_String_2F_Compare,NULL);

	result = method_new("CF String/Create Mutable",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_String_2F_Create_20_Mutable,NULL);

	result = method_new("CF String/Create Mutable Copy",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_String_2F_Create_20_Mutable_20_Copy,NULL);

	result = method_new("CF String/Create With String",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_String_2F_Create_20_With_20_String,NULL);

	result = method_new("CF String/Create With Substring",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_String_2F_Create_20_With_20_Substring,NULL);

	result = method_new("CF String/Create With CString",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_String_2F_Create_20_With_20_CString,NULL);

	result = method_new("CF String/Create With UniChar",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_String_2F_Create_20_With_20_UniChar,NULL);

	result = method_new("CF String/Default Range",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_String_2F_Default_20_Range,NULL);

	result = method_new("CF String/Default Encoding",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_String_2F_Default_20_Encoding,NULL);

	result = method_new("CF String/Default Locale",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_String_2F_Default_20_Locale,NULL);

	result = method_new("CF String/Find",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_String_2F_Find,NULL);

	result = method_new("CF String/Find Range",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_String_2F_Find_20_Range,NULL);

	result = method_new("CF String/Get CString",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_String_2F_Get_20_CString,NULL);

	result = method_new("CF String/Get Character At Index",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_String_2F_Get_20_Character_20_At_20_Index,NULL);

	result = method_new("CF String/Get Characters",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_String_2F_Get_20_Characters,NULL);

	result = method_new("CF String/Get Double Value",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_String_2F_Get_20_Double_20_Value,NULL);

	result = method_new("CF String/Get Encoding Default",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_String_2F_Get_20_Encoding_20_Default,NULL);

	result = method_new("CF String/Get Encoding Fastest",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_String_2F_Get_20_Encoding_20_Fastest,NULL);

	result = method_new("CF String/Get Encoding Smallest",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_String_2F_Get_20_Encoding_20_Smallest,NULL);

	result = method_new("CF String/Get Encoding System",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_String_2F_Get_20_Encoding_20_System,NULL);

	result = method_new("CF String/Get Integer Value",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_String_2F_Get_20_Integer_20_Value,NULL);

	result = method_new("CF String/Get Length",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_String_2F_Get_20_Length,NULL);

	result = method_new("CF String/Get Maximum Size For Encoding",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_String_2F_Get_20_Maximum_20_Size_20_For_20_Encoding,NULL);

	result = method_new("CF String/Get String",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_String_2F_Get_20_String,NULL);

	result = method_new("CF String/Get UniChar",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_String_2F_Get_20_UniChar,NULL);

	result = method_new("CF String/Has Prefix",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_String_2F_Has_20_Prefix,NULL);

	result = method_new("CF String/Has Suffix",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_String_2F_Has_20_Suffix,NULL);

	result = method_new("CF String/Lowercase",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_String_2F_Lowercase,NULL);

	result = method_new("CF String/Uppercase",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_String_2F_Uppercase,NULL);

	result = method_new("CF String/Pad",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_String_2F_Pad,NULL);

	result = method_new("CF String/Replace",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_String_2F_Replace,NULL);

	result = method_new("CF String/Replace All",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_String_2F_Replace_20_All,NULL);

	result = method_new("CF String/Show",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_String_2F_Show,NULL);

	result = method_new("CF String/Trim",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_String_2F_Trim,NULL);

	result = method_new("CF String/Trim Whitespace",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_String_2F_Trim_20_Whitespace,NULL);

	result = method_new("CF TimeZone/New",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_TimeZone_2F_New,NULL);

	result = method_new("CF TimeZone/Get Class Type ID",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_TimeZone_2F_Get_20_Class_20_Type_20_ID,NULL);

	result = method_new("CF Tree/New",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_Tree_2F_New,NULL);

	result = method_new("CF Tree/Get Class Type ID",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_Tree_2F_Get_20_Class_20_Type_20_ID,NULL);

	result = method_new("CF URL/New",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_URL_2F_New,NULL);

	result = method_new("CF URL/Get Class Type ID",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_URL_2F_Get_20_Class_20_Type_20_ID,NULL);

	result = method_new("CF URL/Can Be Decomposed?",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_URL_2F_Can_20_Be_20_Decomposed_3F_,NULL);

	result = method_new("CF URL/Capture Main Bundle",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_URL_2F_Capture_20_Main_20_Bundle,NULL);

	result = method_new("CF URL/Capture Private Frameworks Name",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_URL_2F_Capture_20_Private_20_Frameworks_20_Name,NULL);

	result = method_new("CF URL/Capture Private Frameworks",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_URL_2F_Capture_20_Private_20_Frameworks,NULL);

	result = method_new("CF URL/Capture Resources Name",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_URL_2F_Capture_20_Resources_20_Name,NULL);

	result = method_new("CF URL/Capture Resources Directory",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_URL_2F_Capture_20_Resources_20_Directory,NULL);

	result = method_new("CF URL/Copy Absolute URL",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_URL_2F_Copy_20_Absolute_20_URL,NULL);

	result = method_new("CF URL/Copy File System Path",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_URL_2F_Copy_20_File_20_System_20_Path,NULL);

	result = method_new("CF URL/Copy Host Name",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_URL_2F_Copy_20_Host_20_Name,NULL);

	result = method_new("CF URL/Copy Last Path Component",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_URL_2F_Copy_20_Last_20_Path_20_Component,NULL);

	result = method_new("CF URL/Copy Net Location",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_URL_2F_Copy_20_Net_20_Location,NULL);

	result = method_new("CF URL/Copy Path",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_URL_2F_Copy_20_Path,NULL);

	result = method_new("CF URL/Copy Path Extension",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_URL_2F_Copy_20_Path_20_Extension,NULL);

	result = method_new("CF URL/Default Path Style",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_URL_2F_Default_20_Path_20_Style,NULL);

	result = method_new("CF URL/Create Copy Appending Path Component",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_URL_2F_Create_20_Copy_20_Appending_20_Path_20_Component,NULL);

	result = method_new("CF URL/Create Copy Deleting Last Path Component",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_URL_2F_Create_20_Copy_20_Deleting_20_Last_20_Path_20_Component,NULL);

	result = method_new("CF URL/Create From File System Path",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_URL_2F_Create_20_From_20_File_20_System_20_Path,NULL);

	result = method_new("CF URL/Create From FSRef",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_URL_2F_Create_20_From_20_FSRef,NULL);

	result = method_new("CF URL/Create With CFString",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_URL_2F_Create_20_With_20_CFString,NULL);

	result = method_new("CF URL/Create With String",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_URL_2F_Create_20_With_20_String,NULL);

	result = method_new("CF URL/Get FSRef",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_URL_2F_Get_20_FSRef,NULL);

	result = method_new("CF URL/Get Port Number",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_URL_2F_Get_20_Port_20_Number,NULL);

	result = method_new("CF URL/Get String",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_URL_2F_Get_20_String,NULL);

	result = method_new("CF URL/LS Open URL",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_URL_2F_LS_20_Open_20_URL,NULL);

	result = method_new("CF URL/Create File",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_URL_2F_Create_20_File,NULL);

	result = method_new("CF URL/Write Data And Properties To Resource",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_URL_2F_Write_20_Data_20_And_20_Properties_20_To_20_Resource,NULL);

	result = method_new("CF URL/Create Data And Properties From Resource",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_URL_2F_Create_20_Data_20_And_20_Properties_20_From_20_Resource,NULL);

	result = method_new("CF URL/Destroy Resource",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_URL_2F_Destroy_20_Resource,NULL);

	result = method_new("CF URL/Create Property List From XML File",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_URL_2F_Create_20_Property_20_List_20_From_20_XML_20_File,NULL);

	result = method_new("CF URL/Write XML File From Property List",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_URL_2F_Write_20_XML_20_File_20_From_20_Property_20_List,NULL);

	result = method_new("CF UUID/New",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_UUID_2F_New,NULL);

	result = method_new("CF UUID/Get Class Type ID",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_UUID_2F_Get_20_Class_20_Type_20_ID,NULL);

	result = method_new("CF UUID/Create",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_UUID_2F_Create,NULL);

	result = method_new("CF UUID/Create From UUID Bytes",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_UUID_2F_Create_20_From_20_UUID_20_Bytes,NULL);

	result = method_new("CF UUID/Create From List",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_UUID_2F_Create_20_From_20_List,NULL);

	result = method_new("CF UUID/Create From String",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_UUID_2F_Create_20_From_20_String,NULL);

	result = method_new("CF UUID/Get Bytes",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_UUID_2F_Get_20_Bytes,NULL);

	result = method_new("CF UUID/Get Bytes List",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_UUID_2F_Get_20_Bytes_20_List,NULL);

	result = method_new("CF UUID/Get String",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_UUID_2F_Get_20_String,NULL);

	result = method_new("CF XMLNode/New",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_XMLNode_2F_New,NULL);

	result = method_new("CF XMLNode/Get Class Type ID",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_XMLNode_2F_Get_20_Class_20_Type_20_ID,NULL);

	result = method_new("CF XMLParser/New",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_XMLParser_2F_New,NULL);

	result = method_new("CF XMLParser/Get Class Type ID",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_XMLParser_2F_Get_20_Class_20_Type_20_ID,NULL);

	result = method_new("CF Absolute Time/Get Value",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_Absolute_20_Time_2F_Get_20_Value,NULL);

	result = method_new("CF Absolute Time/Set Value",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_Absolute_20_Time_2F_Set_20_Value,NULL);

	result = method_new("CF Absolute Time/New",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_Absolute_20_Time_2F_New,NULL);

	result = method_new("CF Absolute Time/Get Gregorian Date",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_Absolute_20_Time_2F_Get_20_Gregorian_20_Date,NULL);

	result = method_new("CF Absolute Time/Create With Now",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CF_20_Absolute_20_Time_2F_Create_20_With_20_Now,NULL);

	return kNOERROR;

}



Nat4	loadPersistents_CF_20_Base(V_Environment environment);
Nat4	loadPersistents_CF_20_Base(V_Environment environment)
{
	V_Value tempPersistent = NULL;
	V_Dictionary dictionary = environment->persistentsTable;

	return kNOERROR;

}

Nat4	load_CF_20_Base(V_Environment environment);
Nat4	load_CF_20_Base(V_Environment environment)
{

	loadClasses_CF_20_Base(environment);
	loadUniversals_CF_20_Base(environment);
	loadPersistents_CF_20_Base(environment);
	return kNOERROR;

}

