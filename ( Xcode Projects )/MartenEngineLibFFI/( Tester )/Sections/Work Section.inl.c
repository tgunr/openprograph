/* A VPL Section File */
/*

Work Section.inl.c
Copyright: 2004 Andescotia LLC

*/

#include "MartenInlineProject.h"

enum opTrigger vpx_method_Tester_20_MAIN(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(5)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Hello World",ROOT(1));

AlertSoundPlay();
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_show,1,0,TERMINAL(1));

result = vpx_constant(PARAMETERS,"2",ROOT(2));

SysBeep( GETINTEGER(TERMINAL(2)));
result = kSuccess;

result = vpx_method_To_20_PString(PARAMETERS,TERMINAL(1),ROOT(3));

PUTINTEGER(SpeakString( GETCONSTPOINTER(unsigned char,*,TERMINAL(3))),4);
result = kSuccess;

result = vpx_method_Test_20_Button(PARAMETERS);

result = vpx_method_Test_20_GetMouse(PARAMETERS);

result = vpx_method_CFDictionary_20_Apply_20_With_20_Class(PARAMETERS);

result = kSuccess;

OUTPUT(0,NONE)
FOOTERSINGLECASEWITHNONE(5)
}

enum opTrigger vpx_method_To_20_PString_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_To_20_PString_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_byte_2D_length,1,1,TERMINAL(0),ROOT(1));

result = vpx_constant(PARAMETERS,"254",ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_min,2,1,TERMINAL(1),TERMINAL(2),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_To_20_PString_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_To_20_PString_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP__2B_1,1,1,TERMINAL(0),ROOT(1));

result = vpx_constant(PARAMETERS,"unsigned char*",ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_make_2D_external,2,1,TERMINAL(2),TERMINAL(1),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_To_20_PString_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_To_20_PString_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"0",ROOT(3));

result = vpx_constant(PARAMETERS,"1",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_put_2D_integer,4,2,TERMINAL(0),TERMINAL(3),TERMINAL(4),TERMINAL(1),ROOT(5),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP_put_2D_text,4,2,TERMINAL(5),TERMINAL(6),TERMINAL(1),TERMINAL(2),ROOT(7),ROOT(8));

result = kSuccess;

FOOTERSINGLECASE(9)
}

enum opTrigger vpx_method_To_20_PString(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_method_To_20_PString_case_1_local_2(PARAMETERS,TERMINAL(0),ROOT(1));

result = vpx_method_To_20_PString_case_1_local_3(PARAMETERS,TERMINAL(1),ROOT(2));

result = vpx_method_To_20_PString_case_1_local_4(PARAMETERS,TERMINAL(2),TERMINAL(1),TERMINAL(0));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Test_20_CF_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex);
enum opTrigger vpx_method_Test_20_CF_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex)
{
HEADER(4)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(0));

result = vpx_constant(PARAMETERS,"\"Hello World!\"",ROOT(1));

result = vpx_extconstant(PARAMETERS,kCFStringEncodingUTF8,ROOT(2));

PUTPOINTER(__CFString,*,CFStringCreateWithCString( GETCONSTPOINTER(__CFAllocator,*,TERMINAL(0)),GETCONSTPOINTER(char,*,TERMINAL(1)),GETINTEGER(TERMINAL(2))),3);
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
NEXTCASEONSUCCESS

CFShow( GETCONSTPOINTER(void,*,TERMINAL(3)));
result = kSuccess;

CFRelease( GETCONSTPOINTER(void,*,TERMINAL(3)));
result = kSuccess;

result = kSuccess;

FOOTER(4)
}

enum opTrigger vpx_method_Test_20_CF_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex);
enum opTrigger vpx_method_Test_20_CF_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex)
{
HEADER(1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"CFCreate Failed!",ROOT(0));

result = vpx_call_primitive(PARAMETERS,VPLP_log_2D_error,1,0,TERMINAL(0));

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_Test_20_CF(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Test_20_CF_case_1(environment, &outcome, inputRepeat, contextIndex))
vpx_method_Test_20_CF_case_2(environment, &outcome, inputRepeat, contextIndex);
return outcome;
}

enum opTrigger vpx_method_Test_20_Button(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex)
{
HEADER(5)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Click OK then hold down mouse for 5 sec...",ROOT(0));

result = vpx_call_primitive(PARAMETERS,VPLP_show,1,0,TERMINAL(0));

result = vpx_constant(PARAMETERS,"5",ROOT(1));

PUTINTEGER(sleep( GETINTEGER(TERMINAL(1))),2);
result = kSuccess;

PUTINTEGER(Button(),3);
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"Button: \"",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_show,2,0,TERMINAL(4),TERMINAL(3));

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Test_20_GetMouse(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex)
{
HEADERWITHNONE(7)
result = kSuccess;

GetMouse( GETPOINTER(4,Point,*,ROOT(0),NONE));
result = kSuccess;

result = vpx_extget(PARAMETERS,"v",1,2,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_extget(PARAMETERS,"h",1,2,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_constant(PARAMETERS,"\"GetMouse v: \"",ROOT(5));

result = vpx_constant(PARAMETERS,"\" h: \"",ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP_show,4,0,TERMINAL(5),TERMINAL(2),TERMINAL(6),TERMINAL(4));

result = kSuccess;

FOOTERSINGLECASEWITHNONE(7)
}

enum opTrigger vpx_method_Test_20_pow_case_1_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Test_20_pow_case_1_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP__3D_,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_constant(PARAMETERS,"Yes",ROOT(3));

result = vpx_constant(PARAMETERS,"No",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_choose,3,1,TERMINAL(2),TERMINAL(3),TERMINAL(4),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Test_20_pow(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex)
{
HEADER(10)
result = kSuccess;

result = vpx_constant(PARAMETERS,"2.0",ROOT(0));

result = vpx_constant(PARAMETERS,"1.0",ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_power,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));

PUTREAL(powf( GETREAL(TERMINAL(0)),GETREAL(TERMINAL(1))),3);
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"powf: \"",ROOT(4));

result = vpx_constant(PARAMETERS,"\" correct?: \"",ROOT(5));

PUTREAL(pow( GETREAL(TERMINAL(0)),GETREAL(TERMINAL(1))),6);
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_min,2,1,TERMINAL(6),TERMINAL(3),ROOT(7));

result = vpx_method_Test_20_pow_case_1_local_10(PARAMETERS,TERMINAL(7),TERMINAL(2),ROOT(8));

result = vpx_constant(PARAMETERS,"\"pow: \"",ROOT(9));

result = vpx_call_primitive(PARAMETERS,VPLP_show,6,0,TERMINAL(9),TERMINAL(6),TERMINAL(4),TERMINAL(3),TERMINAL(5),TERMINAL(8));

result = kSuccess;

FOOTERSINGLECASE(10)
}

enum opTrigger vpx_method_Test_20_CFStringCreate(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex)
{
HEADER(4)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,kCFStringEncodingUTF8,ROOT(0));

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = vpx_constant(PARAMETERS,"\"Hello World!\"",ROOT(2));

PUTPOINTER(__CFString,*,CFStringCreateWithCString( GETCONSTPOINTER(__CFAllocator,*,TERMINAL(1)),GETCONSTPOINTER(char,*,TERMINAL(2)),GETINTEGER(TERMINAL(0))),3);
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
TERMINATEONSUCCESS

CFShow( GETCONSTPOINTER(void,*,TERMINAL(3)));
result = kSuccess;

CFRelease( GETCONSTPOINTER(void,*,TERMINAL(3)));
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Test_20_CFStringFind_case_1_local_8_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Test_20_CFStringFind_case_1_local_8_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(0));
NEXTCASEONSUCCESS

result = vpx_extget(PARAMETERS,"location",1,2,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_extget(PARAMETERS,"length",1,2,TERMINAL(0),ROOT(3),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
OUTPUT(1,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Test_20_CFStringFind_case_1_local_8_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Test_20_CFStringFind_case_1_local_8_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"0",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
OUTPUT(1,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Test_20_CFStringFind_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Test_20_CFStringFind_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Test_20_CFStringFind_case_1_local_8_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1))
vpx_method_Test_20_CFStringFind_case_1_local_8_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1);
return outcome;
}

enum opTrigger vpx_method_Test_20_CFStringFind(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex)
{
HEADER(14)
result = kSuccess;

result = vpx_constant(PARAMETERS,"ABCDEF",ROOT(0));

result = vpx_method_CFSTR(PARAMETERS,TERMINAL(0),ROOT(1));

result = vpx_constant(PARAMETERS,"E",ROOT(2));

result = vpx_method_CFSTR(PARAMETERS,TERMINAL(2),ROOT(3));

result = vpx_constant(PARAMETERS,"0",ROOT(4));

PUTSTRUCTURE(8,CFRange,CFStringFind( GETCONSTPOINTER(__CFString,*,TERMINAL(1)),GETCONSTPOINTER(__CFString,*,TERMINAL(3)),GETINTEGER(TERMINAL(4))),5);
result = kSuccess;

result = vpx_method_Test_20_CFStringFind_case_1_local_8(PARAMETERS,TERMINAL(5),ROOT(6),ROOT(7));

result = vpx_constant(PARAMETERS,"4",ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP__3D_,2,1,TERMINAL(6),TERMINAL(8),ROOT(9));

result = vpx_constant(PARAMETERS,"J",ROOT(10));

result = vpx_method_CFSTR(PARAMETERS,TERMINAL(10),ROOT(11));

result = vpx_call_primitive(PARAMETERS,VPLP_external_2D_level,1,1,TERMINAL(5),ROOT(12));

result = vpx_constant(PARAMETERS,"\" was found: \"",ROOT(13));

result = vpx_call_primitive(PARAMETERS,VPLP_show,3,0,TERMINAL(2),TERMINAL(13),TERMINAL(9));

result = kSuccess;

FOOTERSINGLECASE(14)
}

enum opTrigger vpx_method_Test_20_CGRectGetMax(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex)
{
HEADER(8)
result = kSuccess;

result = vpx_constant(PARAMETERS,"5",ROOT(0));

result = vpx_constant(PARAMETERS,"10",ROOT(1));

result = vpx_method_CGRect_20_Make(PARAMETERS,TERMINAL(0),TERMINAL(0),TERMINAL(1),TERMINAL(1),ROOT(2));

PUTREAL(CGRectGetMaxY( GETSTRUCTURE(16,CGRect,TERMINAL(2))),3);
result = kSuccess;

result = vpx_constant(PARAMETERS,"10",ROOT(4));

result = vpx_constant(PARAMETERS,"0",ROOT(5));

result = vpx_method_CGRect_20_Make(PARAMETERS,TERMINAL(5),TERMINAL(5),TERMINAL(4),TERMINAL(4),ROOT(6));

PUTREAL(CGRectGetMaxX( GETSTRUCTURE(16,CGRect,TERMINAL(6))),7);
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(8)
}

enum opTrigger vpx_method_Test_20_CGRectContainsCGPoint(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex)
{
HEADER(9)
result = kSuccess;

result = vpx_constant(PARAMETERS,"10",ROOT(0));

result = vpx_constant(PARAMETERS,"0",ROOT(1));

result = vpx_method_CGRect_20_Make(PARAMETERS,TERMINAL(1),TERMINAL(1),TERMINAL(0),TERMINAL(0),ROOT(2));

result = vpx_constant(PARAMETERS,"5",ROOT(3));

result = vpx_method_CGPoint_20_Make(PARAMETERS,TERMINAL(3),TERMINAL(3),ROOT(4));

PUTINTEGER(CGRectContainsPoint( GETSTRUCTURE(16,CGRect,TERMINAL(2)),GETSTRUCTURE(8,CGPoint,TERMINAL(4))),5);
result = kSuccess;

result = vpx_constant(PARAMETERS,"15",ROOT(6));

result = vpx_method_CGPoint_20_Make(PARAMETERS,TERMINAL(6),TERMINAL(6),ROOT(7));

PUTINTEGER(CGRectContainsPoint( GETSTRUCTURE(16,CGRect,TERMINAL(2)),GETSTRUCTURE(8,CGPoint,TERMINAL(7))),8);
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(9)
}

enum opTrigger vpx_method_Test_20_CGPointApplyTransform_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0);
enum opTrigger vpx_method_Test_20_CGPointApplyTransform_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0)
{
HEADER(2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"1.0",ROOT(0));

PUTSTRUCTURE(24,CGAffineTransform,CGAffineTransformMake( GETREAL(TERMINAL(0)),GETREAL(TERMINAL(0)),GETREAL(TERMINAL(0)),GETREAL(TERMINAL(0)),GETREAL(TERMINAL(0)),GETREAL(TERMINAL(0))),1);
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Test_20_CGPointApplyTransform_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0);
enum opTrigger vpx_method_Test_20_CGPointApplyTransform_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0)
{
HEADER(2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"CGAffineTransform",ROOT(0));

result = vpx_call_primitive(PARAMETERS,VPLP_make_2D_external,1,1,TERMINAL(0),ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Test_20_CGPointApplyTransform_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0);
enum opTrigger vpx_method_Test_20_CGPointApplyTransform_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Test_20_CGPointApplyTransform_case_1_local_2_case_1(environment, &outcome, inputRepeat, contextIndex,root0))
vpx_method_Test_20_CGPointApplyTransform_case_1_local_2_case_2(environment, &outcome, inputRepeat, contextIndex,root0);
return outcome;
}

enum opTrigger vpx_method_Test_20_CGPointApplyTransform(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex)
{
HEADER(8)
result = kSuccess;

result = vpx_method_Test_20_CGPointApplyTransform_case_1_local_2(PARAMETERS,ROOT(0));

result = vpx_constant(PARAMETERS,"1",ROOT(1));

result = vpx_method_CGPoint_20_Make(PARAMETERS,TERMINAL(1),TERMINAL(1),ROOT(2));

PUTSTRUCTURE(8,CGPoint,CGPointApplyAffineTransform( GETSTRUCTURE(8,CGPoint,TERMINAL(2)),GETSTRUCTURE(24,CGAffineTransform,TERMINAL(0))),3);
result = kSuccess;

result = vpx_extget(PARAMETERS,"y",1,2,TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_extget(PARAMETERS,"x",1,2,TERMINAL(3),ROOT(6),ROOT(7));

result = kSuccess;

FOOTERSINGLECASE(8)
}

enum opTrigger vpx_method_Test_20_CGRectOffset(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex)
{
HEADER(9)
result = kSuccess;

result = vpx_constant(PARAMETERS,"10",ROOT(0));

result = vpx_constant(PARAMETERS,"0",ROOT(1));

result = vpx_method_CGRect_20_Make(PARAMETERS,TERMINAL(1),TERMINAL(1),TERMINAL(0),TERMINAL(0),ROOT(2));

result = vpx_constant(PARAMETERS,"1",ROOT(3));

PUTSTRUCTURE(16,CGRect,CGRectOffset( GETSTRUCTURE(16,CGRect,TERMINAL(2)),GETREAL(TERMINAL(3)),GETREAL(TERMINAL(3))),4);
result = kSuccess;

result = vpx_method_CGRect_20_From(PARAMETERS,TERMINAL(4),ROOT(5),ROOT(6),ROOT(7),ROOT(8));

result = kSuccess;

FOOTERSINGLECASE(9)
}

enum opTrigger vpx_method_Test_20_FindWindow(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex)
{
HEADERWITHNONE(4)
result = kSuccess;

result = vpx_constant(PARAMETERS,"0",ROOT(0));

result = vpx_method_Point_20_Make(PARAMETERS,TERMINAL(0),TERMINAL(0),ROOT(1));

PUTINTEGER(FindWindow( GETSTRUCTURE(4,Point,TERMINAL(1)),GETPOINTER(0,OpaqueWindowPtr,**,ROOT(3),NONE)),2);
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASEWITHNONE(4)
}

enum opTrigger vpx_method_Test_20_CGRectUnion(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex)
{
HEADER(16)
result = kSuccess;

result = vpx_constant(PARAMETERS,"10",ROOT(0));

result = vpx_constant(PARAMETERS,"0",ROOT(1));

result = vpx_method_CGRect_20_Make(PARAMETERS,TERMINAL(1),TERMINAL(1),TERMINAL(0),TERMINAL(0),ROOT(2));

result = vpx_constant(PARAMETERS,"5",ROOT(3));

result = vpx_constant(PARAMETERS,"10",ROOT(4));

result = vpx_method_CGRect_20_Make(PARAMETERS,TERMINAL(3),TERMINAL(3),TERMINAL(4),TERMINAL(4),ROOT(5));

PUTSTRUCTURE(16,CGRect,CGRectIntersection( GETSTRUCTURE(16,CGRect,TERMINAL(2)),GETSTRUCTURE(16,CGRect,TERMINAL(5))),6);
result = kSuccess;

PUTSTRUCTURE(16,CGRect,CGRectUnion( GETSTRUCTURE(16,CGRect,TERMINAL(2)),GETSTRUCTURE(16,CGRect,TERMINAL(5))),7);
result = kSuccess;

result = vpx_method_CGRect_20_From(PARAMETERS,TERMINAL(7),ROOT(8),ROOT(9),ROOT(10),ROOT(11));

result = vpx_method_CGRect_20_From(PARAMETERS,TERMINAL(6),ROOT(12),ROOT(13),ROOT(14),ROOT(15));

result = kSuccess;

FOOTERSINGLECASE(16)
}

enum opTrigger vpx_method_Test_20_CFGregTime_case_1_local_7_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Test_20_CFGregTime_case_1_local_7_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(9)
INPUT(0,0)
result = kSuccess;

result = vpx_extget(PARAMETERS,"year",1,2,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_extget(PARAMETERS,"month",1,2,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_extget(PARAMETERS,"day",1,2,TERMINAL(0),ROOT(5),ROOT(6));

result = vpx_constant(PARAMETERS,"\"/\"",ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,5,1,TERMINAL(4),TERMINAL(7),TERMINAL(6),TERMINAL(7),TERMINAL(2),ROOT(8));

result = kSuccess;

OUTPUT(0,TERMINAL(8))
FOOTERSINGLECASE(9)
}

enum opTrigger vpx_method_Test_20_CFGregTime_case_1_local_7_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Test_20_CFGregTime_case_1_local_7_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(9)
INPUT(0,0)
result = kSuccess;

result = vpx_extget(PARAMETERS,"hour",1,2,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_extget(PARAMETERS,"second",1,2,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_extget(PARAMETERS,"minute",1,2,TERMINAL(0),ROOT(5),ROOT(6));

result = vpx_constant(PARAMETERS,"\":\"",ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,5,1,TERMINAL(2),TERMINAL(7),TERMINAL(6),TERMINAL(7),TERMINAL(4),ROOT(8));

result = kSuccess;

OUTPUT(0,TERMINAL(8))
FOOTERSINGLECASE(9)
}

enum opTrigger vpx_method_Test_20_CFGregTime_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Test_20_CFGregTime_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\" at \"",ROOT(1));

result = vpx_method_Test_20_CFGregTime_case_1_local_7_case_1_local_3(PARAMETERS,TERMINAL(0),ROOT(2));

result = vpx_method_Test_20_CFGregTime_case_1_local_7_case_1_local_4(PARAMETERS,TERMINAL(0),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_show,3,0,TERMINAL(2),TERMINAL(1),TERMINAL(3));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Test_20_CFGregTime(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex)
{
HEADER(3)
result = kSuccess;

PUTREAL(CFAbsoluteTimeGetCurrent(),0);
result = kSuccess;

PUTPOINTER(__CFTimeZone,*,CFTimeZoneCopyDefault(),1);
result = kSuccess;

CFShow( GETCONSTPOINTER(void,*,TERMINAL(1)));
result = kSuccess;

PUTSTRUCTURE(16,CFGregorianDate,CFAbsoluteTimeGetGregorianDate( GETREAL(TERMINAL(0)),GETCONSTPOINTER(__CFTimeZone,*,TERMINAL(1))),2);
result = kSuccess;

CFRelease( GETCONSTPOINTER(void,*,TERMINAL(1)));
result = kSuccess;

result = vpx_method_Test_20_CFGregTime_case_1_local_7(PARAMETERS,TERMINAL(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_CGPoint_20_Make(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"CGPoint",ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_make_2D_external,1,1,TERMINAL(2),ROOT(3));

result = vpx_extset(PARAMETERS,"x",2,1,TERMINAL(3),TERMINAL(0),ROOT(4));

result = vpx_extset(PARAMETERS,"y",2,1,TERMINAL(3),TERMINAL(1),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_CGRect_20_Make_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_CGRect_20_Make_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_extget(PARAMETERS,"origin",1,2,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_extset(PARAMETERS,"x",2,1,TERMINAL(4),TERMINAL(1),ROOT(5));

result = vpx_extset(PARAMETERS,"y",2,1,TERMINAL(5),TERMINAL(2),ROOT(6));

result = vpx_extset(PARAMETERS,"origin",2,1,TERMINAL(3),TERMINAL(6),ROOT(7));

result = kSuccess;

FOOTERSINGLECASE(8)
}

enum opTrigger vpx_method_CGRect_20_Make_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_CGRect_20_Make_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_extget(PARAMETERS,"size",1,2,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_extset(PARAMETERS,"width",2,1,TERMINAL(4),TERMINAL(1),ROOT(5));

result = vpx_extset(PARAMETERS,"height",2,1,TERMINAL(5),TERMINAL(2),ROOT(6));

result = vpx_extset(PARAMETERS,"size",2,1,TERMINAL(3),TERMINAL(6),ROOT(7));

result = kSuccess;

FOOTERSINGLECASE(8)
}

enum opTrigger vpx_method_CGRect_20_Make(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_constant(PARAMETERS,"CGRect",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_make_2D_external,1,1,TERMINAL(4),ROOT(5));

result = vpx_method_CGRect_20_Make_case_1_local_4(PARAMETERS,TERMINAL(5),TERMINAL(0),TERMINAL(1));

result = vpx_method_CGRect_20_Make_case_1_local_5(PARAMETERS,TERMINAL(5),TERMINAL(2),TERMINAL(3));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_CGRect_20_From(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3)
{
HEADER(13)
INPUT(0,0)
result = kSuccess;

result = vpx_extget(PARAMETERS,"origin",1,2,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_extget(PARAMETERS,"x",1,2,TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_extget(PARAMETERS,"y",1,2,TERMINAL(2),ROOT(5),ROOT(6));

result = vpx_extget(PARAMETERS,"size",1,2,TERMINAL(0),ROOT(7),ROOT(8));

result = vpx_extget(PARAMETERS,"width",1,2,TERMINAL(8),ROOT(9),ROOT(10));

result = vpx_extget(PARAMETERS,"height",1,2,TERMINAL(8),ROOT(11),ROOT(12));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
OUTPUT(1,TERMINAL(6))
OUTPUT(2,TERMINAL(10))
OUTPUT(3,TERMINAL(12))
FOOTERSINGLECASE(13)
}

enum opTrigger vpx_method_Point_20_Make(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Point",ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_make_2D_external,1,1,TERMINAL(2),ROOT(3));

result = vpx_extset(PARAMETERS,"v",2,1,TERMINAL(3),TERMINAL(0),ROOT(4));

result = vpx_extset(PARAMETERS,"h",2,1,TERMINAL(3),TERMINAL(1),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Test_20_Equality(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex)
{
HEADER(14)
result = kSuccess;

result = vpx_constant(PARAMETERS,"0",ROOT(0));

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP__3D_,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_constant(PARAMETERS,"1",ROOT(3));

result = vpx_constant(PARAMETERS,"1.0",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP__3D_,2,1,TERMINAL(3),TERMINAL(4),ROOT(5));

result = vpx_constant(PARAMETERS,"1",ROOT(6));

result = vpx_constant(PARAMETERS,"TRUE",ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP__3D_,2,1,TERMINAL(6),TERMINAL(7),ROOT(8));

result = vpx_constant(PARAMETERS,"0",ROOT(9));

result = vpx_constant(PARAMETERS,"FALSE",ROOT(10));

result = vpx_call_primitive(PARAMETERS,VPLP__3D_,2,1,TERMINAL(9),TERMINAL(10),ROOT(11));

result = vpx_constant(PARAMETERS,"\" \"",ROOT(12));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,7,1,TERMINAL(5),TERMINAL(12),TERMINAL(8),TERMINAL(12),TERMINAL(2),TERMINAL(12),TERMINAL(11),ROOT(13));

result = kSuccess;

FOOTERSINGLECASE(14)
}

enum opTrigger vpx_method_CFArray_20_Apply_case_1_local_3_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_CFArray_20_Apply_case_1_local_3_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(12)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,kCFStringEncodingUTF8,ROOT(2));

result = vpx_constant(PARAMETERS,"NULL",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_to_2D_string,1,1,TERMINAL(0),ROOT(4));

PUTPOINTER(__CFString,*,CFStringCreateWithCString( GETCONSTPOINTER(__CFAllocator,*,TERMINAL(3)),GETCONSTPOINTER(char,*,TERMINAL(4)),GETINTEGER(TERMINAL(2))),5);
result = kSuccess;

CFShow( GETCONSTPOINTER(void,*,TERMINAL(5)));
result = kSuccess;

result = vpx_call_evaluate(PARAMETERS,"(a-1)*4",1,1,TERMINAL(0),ROOT(6));

result = vpx_constant(PARAMETERS,"4",ROOT(7));

result = vpx_constant(PARAMETERS,"1",ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP_from_2D_pointer,2,1,TERMINAL(5),TERMINAL(8),ROOT(9));

result = vpx_call_primitive(PARAMETERS,VPLP_put_2D_integer,4,2,TERMINAL(1),TERMINAL(6),TERMINAL(7),TERMINAL(0),ROOT(10),ROOT(11));

result = kSuccess;

OUTPUT(0,TERMINAL(10))
FOOTERSINGLECASE(12)
}

enum opTrigger vpx_method_CFArray_20_Apply_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CFArray_20_Apply_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"void",ROOT(1));

result = vpx_call_evaluate(PARAMETERS,"a*4",1,1,TERMINAL(0),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_make_2D_external,2,1,TERMINAL(1),TERMINAL(2),ROOT(3));

result = vpx_constant(PARAMETERS,"1",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_make_2D_list,3,1,TERMINAL(0),TERMINAL(4),TERMINAL(4),ROOT(5));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(5))) ){
REPEATBEGINWITHCOUNTER
LOOPTERMINALBEGIN(1)
LOOPTERMINAL(0,3,6)
result = vpx_method_CFArray_20_Apply_case_1_local_3_case_1_local_7(PARAMETERS,LIST(5),LOOP(0),ROOT(6));
REPEATFINISH
} else {
ROOTNULL(6,TERMINAL(3))
}

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTERSINGLECASE(7)
}

enum opTrigger vpx_method_CFArray_20_Apply_case_1_local_8_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_CFArray_20_Apply_case_1_local_8_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"CFRange",ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_make_2D_external,1,1,TERMINAL(2),ROOT(3));

result = vpx_extset(PARAMETERS,"location",2,1,TERMINAL(3),TERMINAL(0),ROOT(4));

result = vpx_extset(PARAMETERS,"length",2,1,TERMINAL(3),TERMINAL(1),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_CFArray_20_Apply_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_CFArray_20_Apply_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(10)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"0",ROOT(2));

result = vpx_method_CFArray_20_Apply_case_1_local_8_case_1_local_3(PARAMETERS,TERMINAL(2),TERMINAL(0),ROOT(3));

result = vpx_constant(PARAMETERS,"CFArrayApplierFunction",ROOT(4));

result = vpx_constant(PARAMETERS,"CFArray Apply Test",ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_callback,2,1,TERMINAL(5),TERMINAL(4),ROOT(6));

result = vpx_constant(PARAMETERS,"NULL",ROOT(7));

CFArrayApplyFunction( GETCONSTPOINTER(__CFArray,*,TERMINAL(1)),GETSTRUCTURE(8,CFRange,TERMINAL(3)),GETPOINTER(0,void,*,ROOT(8),TERMINAL(6)),GETPOINTER(0,void,*,ROOT(9),TERMINAL(7)));
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTERSINGLECASE(10)
}

enum opTrigger vpx_method_CFArray_20_Apply_case_1_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex);
enum opTrigger vpx_method_CFArray_20_Apply_case_1_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex)
{
HEADER(2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"1",ROOT(0));

PUTINTEGER(sleep( GETINTEGER(TERMINAL(0))),1);
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_CFArray_20_Apply(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex)
{
HEADER(7)
result = kSuccess;

result = vpx_constant(PARAMETERS,"5",ROOT(0));

result = vpx_method_CFArray_20_Apply_case_1_local_3(PARAMETERS,TERMINAL(0),ROOT(1));

result = vpx_constant(PARAMETERS,"NULL",ROOT(2));

result = vpx_constant(PARAMETERS,"NULL",ROOT(3));

PUTPOINTER(__CFArray,*,CFArrayCreate( GETCONSTPOINTER(__CFAllocator,*,TERMINAL(3)),GETPOINTER(0,void,**,ROOT(5),TERMINAL(1)),GETINTEGER(TERMINAL(0)),GETCONSTPOINTER(CFArrayCallBacks,*,TERMINAL(2))),4);
result = kSuccess;

CFShow( GETCONSTPOINTER(void,*,TERMINAL(4)));
result = kSuccess;

result = vpx_method_CFArray_20_Apply_case_1_local_8(PARAMETERS,TERMINAL(0),TERMINAL(4),ROOT(6));

result = vpx_method_CFArray_20_Apply_case_1_local_9(PARAMETERS);

result = kSuccess;

FOOTERSINGLECASE(7)
}

enum opTrigger vpx_method_CFArray_20_Apply_20_Test(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"Applier Value: \"",ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_from_2D_pointer,1,1,TERMINAL(0),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_log_2D_error,2,0,TERMINAL(2),TERMINAL(3));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_CFDictionary_20_Apply_20_Test(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\" Applier Value: \"",ROOT(4));

result = vpx_constant(PARAMETERS,"\"Applier Key: \"",ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_from_2D_pointer,1,1,TERMINAL(1),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP_from_2D_pointer,1,1,TERMINAL(2),ROOT(7));

result = vpx_constant(PARAMETERS,"\"Applier Class: \"",ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP_log_2D_error,2,0,TERMINAL(8),TERMINAL(0));

result = vpx_call_primitive(PARAMETERS,VPLP_log_2D_error,4,0,TERMINAL(5),TERMINAL(6),TERMINAL(4),TERMINAL(7));

result = kSuccess;

FOOTERSINGLECASE(9)
}

enum opTrigger vpx_method_CFDictionary_20_Apply_case_1_local_3_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_CFDictionary_20_Apply_case_1_local_3_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(12)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,kCFStringEncodingUTF8,ROOT(2));

result = vpx_constant(PARAMETERS,"NULL",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_to_2D_string,1,1,TERMINAL(0),ROOT(4));

PUTPOINTER(__CFString,*,CFStringCreateWithCString( GETCONSTPOINTER(__CFAllocator,*,TERMINAL(3)),GETCONSTPOINTER(char,*,TERMINAL(4)),GETINTEGER(TERMINAL(2))),5);
result = kSuccess;

CFShow( GETCONSTPOINTER(void,*,TERMINAL(5)));
result = kSuccess;

result = vpx_call_evaluate(PARAMETERS,"(a-1)*4",1,1,TERMINAL(0),ROOT(6));

result = vpx_constant(PARAMETERS,"4",ROOT(7));

result = vpx_constant(PARAMETERS,"1",ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP_from_2D_pointer,2,1,TERMINAL(5),TERMINAL(8),ROOT(9));

result = vpx_call_primitive(PARAMETERS,VPLP_put_2D_integer,4,2,TERMINAL(1),TERMINAL(6),TERMINAL(7),TERMINAL(0),ROOT(10),ROOT(11));

result = kSuccess;

OUTPUT(0,TERMINAL(10))
FOOTERSINGLECASE(12)
}

enum opTrigger vpx_method_CFDictionary_20_Apply_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CFDictionary_20_Apply_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"void",ROOT(1));

result = vpx_call_evaluate(PARAMETERS,"a*4",1,1,TERMINAL(0),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_make_2D_external,2,1,TERMINAL(1),TERMINAL(2),ROOT(3));

result = vpx_constant(PARAMETERS,"1",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_make_2D_list,3,1,TERMINAL(0),TERMINAL(4),TERMINAL(4),ROOT(5));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(5))) ){
REPEATBEGINWITHCOUNTER
LOOPTERMINALBEGIN(1)
LOOPTERMINAL(0,3,6)
result = vpx_method_CFDictionary_20_Apply_case_1_local_3_case_1_local_7(PARAMETERS,LIST(5),LOOP(0),ROOT(6));
REPEATFINISH
} else {
ROOTNULL(6,TERMINAL(3))
}

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTERSINGLECASE(7)
}

enum opTrigger vpx_method_CFDictionary_20_Apply_case_1_local_6_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_CFDictionary_20_Apply_case_1_local_6_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(12)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,kCFStringEncodingUTF8,ROOT(2));

result = vpx_constant(PARAMETERS,"NULL",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_to_2D_string,1,1,TERMINAL(0),ROOT(4));

PUTPOINTER(__CFString,*,CFStringCreateWithCString( GETCONSTPOINTER(__CFAllocator,*,TERMINAL(3)),GETCONSTPOINTER(char,*,TERMINAL(4)),GETINTEGER(TERMINAL(2))),5);
result = kSuccess;

CFShow( GETCONSTPOINTER(void,*,TERMINAL(5)));
result = kSuccess;

result = vpx_call_evaluate(PARAMETERS,"(a-1)*4",1,1,TERMINAL(0),ROOT(6));

result = vpx_constant(PARAMETERS,"4",ROOT(7));

result = vpx_constant(PARAMETERS,"1",ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP_from_2D_pointer,2,1,TERMINAL(5),TERMINAL(8),ROOT(9));

result = vpx_call_primitive(PARAMETERS,VPLP_put_2D_integer,4,2,TERMINAL(1),TERMINAL(6),TERMINAL(7),TERMINAL(0),ROOT(10),ROOT(11));

result = kSuccess;

OUTPUT(0,TERMINAL(10))
FOOTERSINGLECASE(12)
}

enum opTrigger vpx_method_CFDictionary_20_Apply_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CFDictionary_20_Apply_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"void",ROOT(1));

result = vpx_call_evaluate(PARAMETERS,"a*4",1,1,TERMINAL(0),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_make_2D_external,2,1,TERMINAL(1),TERMINAL(2),ROOT(3));

result = vpx_constant(PARAMETERS,"1",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_make_2D_list,3,1,TERMINAL(0),TERMINAL(4),TERMINAL(4),ROOT(5));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(5))) ){
REPEATBEGINWITHCOUNTER
LOOPTERMINALBEGIN(1)
LOOPTERMINAL(0,3,6)
result = vpx_method_CFDictionary_20_Apply_case_1_local_6_case_1_local_7(PARAMETERS,LIST(5),LOOP(0),ROOT(6));
REPEATFINISH
} else {
ROOTNULL(6,TERMINAL(3))
}

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTERSINGLECASE(7)
}

enum opTrigger vpx_method_CFDictionary_20_Apply_case_1_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_CFDictionary_20_Apply_case_1_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"CFDictionaryApplierFunction",ROOT(2));

result = vpx_constant(PARAMETERS,"CFDictionary Apply Test",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_callback,2,1,TERMINAL(3),TERMINAL(2),ROOT(4));

result = vpx_constant(PARAMETERS,"NULL",ROOT(5));

CFDictionaryApplyFunction( GETCONSTPOINTER(__CFDictionary,*,TERMINAL(1)),GETPOINTER(0,void,*,ROOT(6),TERMINAL(4)),GETPOINTER(0,void,*,ROOT(7),TERMINAL(5)));
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERSINGLECASE(8)
}

enum opTrigger vpx_method_CFDictionary_20_Apply_case_1_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex);
enum opTrigger vpx_method_CFDictionary_20_Apply_case_1_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex)
{
HEADER(2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"1",ROOT(0));

PUTINTEGER(sleep( GETINTEGER(TERMINAL(0))),1);
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_CFDictionary_20_Apply(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex)
{
HEADER(9)
result = kSuccess;

result = vpx_constant(PARAMETERS,"5",ROOT(0));

result = vpx_method_CFDictionary_20_Apply_case_1_local_3(PARAMETERS,TERMINAL(0),ROOT(1));

result = vpx_constant(PARAMETERS,"NULL",ROOT(2));

result = vpx_constant(PARAMETERS,"NULL",ROOT(3));

result = vpx_method_CFDictionary_20_Apply_case_1_local_6(PARAMETERS,TERMINAL(0),ROOT(4));

PUTPOINTER(__CFDictionary,*,CFDictionaryCreate( GETCONSTPOINTER(__CFAllocator,*,TERMINAL(3)),GETPOINTER(0,void,**,ROOT(6),TERMINAL(4)),GETPOINTER(0,void,**,ROOT(7),TERMINAL(1)),GETINTEGER(TERMINAL(0)),GETCONSTPOINTER(CFDictionaryKeyCallBacks,*,TERMINAL(2)),GETCONSTPOINTER(CFDictionaryValueCallBacks,*,TERMINAL(2))),5);
result = kSuccess;

CFShow( GETCONSTPOINTER(void,*,TERMINAL(5)));
result = kSuccess;

result = vpx_method_CFDictionary_20_Apply_case_1_local_9(PARAMETERS,TERMINAL(0),TERMINAL(5),ROOT(8));

result = vpx_method_CFDictionary_20_Apply_case_1_local_10(PARAMETERS);

result = kSuccess;

FOOTERSINGLECASE(9)
}

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

enum opTrigger vpx_method_CFDictionary_20_Apply_20_With_20_Class_case_1_local_3_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_CFDictionary_20_Apply_20_With_20_Class_case_1_local_3_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(12)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,kCFStringEncodingUTF8,ROOT(2));

result = vpx_constant(PARAMETERS,"NULL",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_to_2D_string,1,1,TERMINAL(0),ROOT(4));

PUTPOINTER(__CFString,*,CFStringCreateWithCString( GETCONSTPOINTER(__CFAllocator,*,TERMINAL(3)),GETCONSTPOINTER(char,*,TERMINAL(4)),GETINTEGER(TERMINAL(2))),5);
result = kSuccess;

CFShow( GETCONSTPOINTER(void,*,TERMINAL(5)));
result = kSuccess;

result = vpx_call_evaluate(PARAMETERS,"(a-1)*4",1,1,TERMINAL(0),ROOT(6));

result = vpx_constant(PARAMETERS,"4",ROOT(7));

result = vpx_constant(PARAMETERS,"1",ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP_from_2D_pointer,2,1,TERMINAL(5),TERMINAL(8),ROOT(9));

result = vpx_call_primitive(PARAMETERS,VPLP_put_2D_integer,4,2,TERMINAL(1),TERMINAL(6),TERMINAL(7),TERMINAL(0),ROOT(10),ROOT(11));

result = kSuccess;

OUTPUT(0,TERMINAL(10))
FOOTERSINGLECASE(12)
}

enum opTrigger vpx_method_CFDictionary_20_Apply_20_With_20_Class_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CFDictionary_20_Apply_20_With_20_Class_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"void",ROOT(1));

result = vpx_call_evaluate(PARAMETERS,"a*4",1,1,TERMINAL(0),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_make_2D_external,2,1,TERMINAL(1),TERMINAL(2),ROOT(3));

result = vpx_constant(PARAMETERS,"1",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_make_2D_list,3,1,TERMINAL(0),TERMINAL(4),TERMINAL(4),ROOT(5));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(5))) ){
REPEATBEGINWITHCOUNTER
LOOPTERMINALBEGIN(1)
LOOPTERMINAL(0,3,6)
result = vpx_method_CFDictionary_20_Apply_20_With_20_Class_case_1_local_3_case_1_local_7(PARAMETERS,LIST(5),LOOP(0),ROOT(6));
REPEATFINISH
} else {
ROOTNULL(6,TERMINAL(3))
}

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTERSINGLECASE(7)
}

enum opTrigger vpx_method_CFDictionary_20_Apply_20_With_20_Class_case_1_local_6_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_CFDictionary_20_Apply_20_With_20_Class_case_1_local_6_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(12)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,kCFStringEncodingUTF8,ROOT(2));

result = vpx_constant(PARAMETERS,"NULL",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_to_2D_string,1,1,TERMINAL(0),ROOT(4));

PUTPOINTER(__CFString,*,CFStringCreateWithCString( GETCONSTPOINTER(__CFAllocator,*,TERMINAL(3)),GETCONSTPOINTER(char,*,TERMINAL(4)),GETINTEGER(TERMINAL(2))),5);
result = kSuccess;

CFShow( GETCONSTPOINTER(void,*,TERMINAL(5)));
result = kSuccess;

result = vpx_call_evaluate(PARAMETERS,"(a-1)*4",1,1,TERMINAL(0),ROOT(6));

result = vpx_constant(PARAMETERS,"4",ROOT(7));

result = vpx_constant(PARAMETERS,"1",ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP_from_2D_pointer,2,1,TERMINAL(5),TERMINAL(8),ROOT(9));

result = vpx_call_primitive(PARAMETERS,VPLP_put_2D_integer,4,2,TERMINAL(1),TERMINAL(6),TERMINAL(7),TERMINAL(0),ROOT(10),ROOT(11));

result = kSuccess;

OUTPUT(0,TERMINAL(10))
FOOTERSINGLECASE(12)
}

enum opTrigger vpx_method_CFDictionary_20_Apply_20_With_20_Class_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_CFDictionary_20_Apply_20_With_20_Class_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"void",ROOT(1));

result = vpx_call_evaluate(PARAMETERS,"a*4",1,1,TERMINAL(0),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_make_2D_external,2,1,TERMINAL(1),TERMINAL(2),ROOT(3));

result = vpx_constant(PARAMETERS,"1",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_make_2D_list,3,1,TERMINAL(0),TERMINAL(4),TERMINAL(4),ROOT(5));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(5))) ){
REPEATBEGINWITHCOUNTER
LOOPTERMINALBEGIN(1)
LOOPTERMINAL(0,3,6)
result = vpx_method_CFDictionary_20_Apply_20_With_20_Class_case_1_local_6_case_1_local_7(PARAMETERS,LIST(5),LOOP(0),ROOT(6));
REPEATFINISH
} else {
ROOTNULL(6,TERMINAL(3))
}

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTERSINGLECASE(7)
}

enum opTrigger vpx_method_CFDictionary_20_Apply_20_With_20_Class_case_1_local_10_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_CFDictionary_20_Apply_20_With_20_Class_case_1_local_10_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"CFDictionaryApplierFunction",ROOT(2));

result = vpx_constant(PARAMETERS,"CFDictionary Apply Test",ROOT(3));

result = vpx_constant(PARAMETERS,"FALSE",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_callback,4,1,TERMINAL(3),TERMINAL(2),TERMINAL(0),TERMINAL(4),ROOT(5));

result = vpx_constant(PARAMETERS,"NULL",ROOT(6));

CFDictionaryApplyFunction( GETCONSTPOINTER(__CFDictionary,*,TERMINAL(1)),GETPOINTER(0,void,*,ROOT(7),TERMINAL(5)),GETPOINTER(0,void,*,ROOT(8),TERMINAL(6)));
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(0))
OUTPUT(1,TERMINAL(5))
FOOTER(9)
}

enum opTrigger vpx_method_CFDictionary_20_Apply_20_With_20_Class_case_1_local_10_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_CFDictionary_20_Apply_20_With_20_Class_case_1_local_10_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"CFDictionaryApplierFunction",ROOT(2));

result = vpx_constant(PARAMETERS,"CFDictionary Apply Test List",ROOT(3));

result = vpx_constant(PARAMETERS,"TRUE",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_callback,4,1,TERMINAL(3),TERMINAL(2),TERMINAL(0),TERMINAL(4),ROOT(5));

result = vpx_constant(PARAMETERS,"NULL",ROOT(6));

CFDictionaryApplyFunction( GETCONSTPOINTER(__CFDictionary,*,TERMINAL(1)),GETPOINTER(0,void,*,ROOT(7),TERMINAL(5)),GETPOINTER(0,void,*,ROOT(8),TERMINAL(6)));
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(0))
OUTPUT(1,TERMINAL(5))
FOOTER(9)
}

enum opTrigger vpx_method_CFDictionary_20_Apply_20_With_20_Class_case_1_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_CFDictionary_20_Apply_20_With_20_Class_case_1_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CFDictionary_20_Apply_20_With_20_Class_case_1_local_10_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1))
vpx_method_CFDictionary_20_Apply_20_With_20_Class_case_1_local_10_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1);
return outcome;
}

enum opTrigger vpx_method_CFDictionary_20_Apply_20_With_20_Class_case_1_local_11(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex);
enum opTrigger vpx_method_CFDictionary_20_Apply_20_With_20_Class_case_1_local_11(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex)
{
HEADER(2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"1",ROOT(0));

PUTINTEGER(sleep( GETINTEGER(TERMINAL(0))),1);
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_CFDictionary_20_Apply_20_With_20_Class(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex)
{
HEADERWITHNONE(11)
result = kSuccess;

result = vpx_constant(PARAMETERS,"5",ROOT(0));

result = vpx_method_CFDictionary_20_Apply_20_With_20_Class_case_1_local_3(PARAMETERS,TERMINAL(0),ROOT(1));

result = vpx_constant(PARAMETERS,"NULL",ROOT(2));

result = vpx_constant(PARAMETERS,"NULL",ROOT(3));

result = vpx_method_CFDictionary_20_Apply_20_With_20_Class_case_1_local_6(PARAMETERS,TERMINAL(0),ROOT(4));

PUTPOINTER(__CFDictionary,*,CFDictionaryCreate( GETCONSTPOINTER(__CFAllocator,*,TERMINAL(3)),GETPOINTER(0,void,**,ROOT(6),TERMINAL(4)),GETPOINTER(0,void,**,ROOT(7),TERMINAL(1)),GETINTEGER(TERMINAL(0)),GETCONSTPOINTER(CFDictionaryKeyCallBacks,*,TERMINAL(2)),GETCONSTPOINTER(CFDictionaryValueCallBacks,*,TERMINAL(2))),5);
result = kSuccess;

CFShow( GETCONSTPOINTER(void,*,TERMINAL(5)));
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_Test_20_Class,1,1,NONE,ROOT(8));

result = vpx_method_CFDictionary_20_Apply_20_With_20_Class_case_1_local_10(PARAMETERS,TERMINAL(8),TERMINAL(5),ROOT(9),ROOT(10));

result = vpx_method_CFDictionary_20_Apply_20_With_20_Class_case_1_local_11(PARAMETERS);

result = kSuccess;

FOOTERSINGLECASEWITHNONE(11)
}

enum opTrigger vpx_method_CFDictionary_20_Apply_20_Test_20_List_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_CFDictionary_20_Apply_20_Test_20_List_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"Applier Data: \"",ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_log_2D_error,3,0,TERMINAL(2),TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_CFDictionary_20_Apply_20_Test_20_List_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_CFDictionary_20_Apply_20_Test_20_List_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADERWITHNONE(7)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\" Applier Value: \"",ROOT(2));

result = vpx_constant(PARAMETERS,"\"Applier Key: \"",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_from_2D_pointer,1,1,NONE,ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_from_2D_pointer,1,1,NONE,ROOT(5));

result = vpx_constant(PARAMETERS,"\"Applier Class: \"",ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP_log_2D_error,2,0,TERMINAL(6),TERMINAL(1));

result = vpx_call_primitive(PARAMETERS,VPLP_log_2D_error,4,0,TERMINAL(3),TERMINAL(4),TERMINAL(2),TERMINAL(5));

result = kSuccess;

FOOTERWITHNONE(7)
}

enum opTrigger vpx_method_CFDictionary_20_Apply_20_Test_20_List(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_CFDictionary_20_Apply_20_Test_20_List_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_CFDictionary_20_Apply_20_Test_20_List_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Test_20_Callback(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex)
{
HEADER(6)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Test Callback Proc",ROOT(0));

result = vpx_constant(PARAMETERS,"TestCallbackProc",ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_callback,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_constant(PARAMETERS,"4",ROOT(3));

result = vpx_constant(PARAMETERS,"-4",ROOT(4));

PUTINTEGER(VPL_TestCallback( GETINTEGER(TERMINAL(4)),GETCONSTPOINTER(void,*,TERMINAL(2))),5);
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_show,1,0,TERMINAL(5));

result = kSuccess;

FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Test_20_Callback_20_Proc(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP__2B_1,1,1,TERMINAL(0),ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Test_20_Callback_20_Var_case_1_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Test_20_Callback_20_Var_case_1_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

OUTPUT(0,NONE)
FOOTERSINGLECASEWITHNONE(2)
}

enum opTrigger vpx_method_Test_20_Callback_20_Var(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex)
{
HEADER(8)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Test Callback Var Proc",ROOT(0));

result = vpx_constant(PARAMETERS,"TestCallbackVariableProc",ROOT(1));

result = vpx_constant(PARAMETERS,"NULL",ROOT(2));

result = vpx_constant(PARAMETERS,"TRUE",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_callback,4,1,TERMINAL(0),TERMINAL(1),TERMINAL(2),TERMINAL(3),ROOT(4));

result = vpx_constant(PARAMETERS,"4",ROOT(5));

result = vpx_constant(PARAMETERS,"-4",ROOT(6));

result = vpx_method_Test_20_Callback_20_Var_case_1_local_9(PARAMETERS,TERMINAL(6),TERMINAL(4),ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP_show,1,0,TERMINAL(7));

result = kSuccess;

FOOTERSINGLECASE(8)
}

enum opTrigger vpx_method_Test_20_Callback_20_Var_20_Proc(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"0",ROOT(1));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(0))) ){
REPEATBEGINWITHCOUNTER
LOOPTERMINALBEGIN(1)
LOOPTERMINAL(0,1,2)
result = vpx_call_primitive(PARAMETERS,VPLP__2B_,2,1,LIST(0),LOOP(0),ROOT(2));
REPEATFINISH
} else {
ROOTNULL(2,TERMINAL(1))
}

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Test_20_PrintF(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex)
{
HEADER(4)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"A test: %s\"",ROOT(0));

result = vpx_constant(PARAMETERS,"\"hi\"",ROOT(1));

result = vpx_call_inject_procedure(PARAMETERS,"printf",2,1,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_constant(PARAMETERS,"TEST",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_print_2D_line,1,0,TERMINAL(3));

result = kSuccess;

FOOTERSINGLECASE(4)
}




	Nat4 tempAttribute_Test_20_Class_2F_Name[] = {
0000000000, 0X00000028, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X08000000, 0X556E7469, 0X746C6564, 0000000000
	};


Nat4 VPLC_Test_20_Class_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Test_20_Class_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 200 300 } */
	tempAttribute = attribute_add("Name",tempClass,tempAttribute_Test_20_Class_2F_Name,environment);
/* Stop Attributes */

/* NULL SUPER CLASS */
	return kNOERROR;
}

/* Start Universals: { 60 60 }{ 200 300 } */
/* Stop Universals */






Nat4	loadClasses_Work_20_Section(V_Environment environment);
Nat4	loadClasses_Work_20_Section(V_Environment environment)
{
	V_Class result = NULL;

	result = class_new("Test Class",environment);
	if(result == NULL) return kERROR;
	VPLC_Test_20_Class_class_load(result,environment);
	return kNOERROR;

}

Nat4	loadUniversals_Work_20_Section(V_Environment environment);
Nat4	loadUniversals_Work_20_Section(V_Environment environment)
{
	V_Method result = NULL;

	result = method_new("Tester MAIN",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Tester_20_MAIN,"MAIN");

	result = method_new("To PString",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_To_20_PString,NULL);

	result = method_new("Test CF",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Test_20_CF,NULL);

	result = method_new("Test Button",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Test_20_Button,NULL);

	result = method_new("Test GetMouse",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Test_20_GetMouse,NULL);

	result = method_new("Test pow",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Test_20_pow,NULL);

	result = method_new("Test CFStringCreate",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Test_20_CFStringCreate,NULL);

	result = method_new("Test CFStringFind",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Test_20_CFStringFind,NULL);

	result = method_new("Test CGRectGetMax",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Test_20_CGRectGetMax,NULL);

	result = method_new("Test CGRectContainsCGPoint",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Test_20_CGRectContainsCGPoint,NULL);

	result = method_new("Test CGPointApplyTransform",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Test_20_CGPointApplyTransform,NULL);

	result = method_new("Test CGRectOffset",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Test_20_CGRectOffset,NULL);

	result = method_new("Test FindWindow",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Test_20_FindWindow,NULL);

	result = method_new("Test CGRectUnion",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Test_20_CGRectUnion,NULL);

	result = method_new("Test CFGregTime",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Test_20_CFGregTime,NULL);

	result = method_new("CGPoint Make",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CGPoint_20_Make,NULL);

	result = method_new("CGRect Make",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CGRect_20_Make,NULL);

	result = method_new("CGRect From",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CGRect_20_From,NULL);

	result = method_new("Point Make",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Point_20_Make,NULL);

	result = method_new("Test Equality",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Test_20_Equality,NULL);

	result = method_new("CFArray Apply",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CFArray_20_Apply,NULL);

	result = method_new("CFArray Apply Test",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CFArray_20_Apply_20_Test,NULL);

	result = method_new("CFDictionary Apply Test",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CFDictionary_20_Apply_20_Test,NULL);

	result = method_new("CFDictionary Apply",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CFDictionary_20_Apply,NULL);

	result = method_new("CFSTR",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CFSTR,NULL);

	result = method_new("CFDictionary Apply With Class",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CFDictionary_20_Apply_20_With_20_Class,NULL);

	result = method_new("CFDictionary Apply Test List",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_CFDictionary_20_Apply_20_Test_20_List,NULL);

	result = method_new("Test Callback",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Test_20_Callback,NULL);

	result = method_new("Test Callback Proc",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Test_20_Callback_20_Proc,NULL);

	result = method_new("Test Callback Var",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Test_20_Callback_20_Var,NULL);

	result = method_new("Test Callback Var Proc",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Test_20_Callback_20_Var_20_Proc,NULL);

	result = method_new("Test PrintF",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Test_20_PrintF,NULL);

	return kNOERROR;

}



Nat4	loadPersistents_Work_20_Section(V_Environment environment);
Nat4	loadPersistents_Work_20_Section(V_Environment environment)
{
	V_Value tempPersistent = NULL;
	V_Dictionary dictionary = environment->persistentsTable;

	return kNOERROR;

}

Nat4	load_Work_20_Section(V_Environment environment);
Nat4	load_Work_20_Section(V_Environment environment)
{

	loadClasses_Work_20_Section(environment);
	loadUniversals_Work_20_Section(environment);
	loadPersistents_Work_20_Section(environment);
	return kNOERROR;

}

