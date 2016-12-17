/* A VPL Section File */
/*

Common Universals.inl.c
Copyright: 2004 Andescotia LLC

*/

#include "MartenInlineProject.h"

enum opTrigger vpx_method_Make_20_Clone_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Make_20_Clone_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_methods,1,1,TERMINAL(0),ROOT(1));

result = vpx_constant(PARAMETERS,"Clone",ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP__28_in_29_,2,1,TERMINAL(1),TERMINAL(2),ROOT(3));

result = vpx_match(PARAMETERS,"0",TERMINAL(3));
FAILONSUCCESS

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Make_20_Clone_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Make_20_Clone_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_method_Make_20_Clone_case_1_local_3(PARAMETERS,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Clone,1,1,TERMINAL(0),ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Make_20_Clone_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Make_20_Clone_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_list_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

if( (repeatLimit = vpx_multiplex(1,TERMINAL(0))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Make_20_Clone(PARAMETERS,LIST(0),ROOT(1));
LISTROOT(1,0)
REPEATFINISH
LISTROOTFINISH(1,0)
LISTROOTEND
} else {
ROOTEMPTY(1)
}

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Make_20_Clone_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Make_20_Clone_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_copy,1,1,TERMINAL(0),ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Make_20_Clone(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Make_20_Clone_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_Make_20_Clone_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Make_20_Clone_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Make_20_Class_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Make_20_Class_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"string",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_has_2D_class_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_call_inject_instance(PARAMETERS,INJECT(0),1,1,NONE,ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERWITHNONE(3)
}

enum opTrigger vpx_method_Make_20_Class_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Make_20_Class_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(1)
}

enum opTrigger vpx_method_Make_20_Class(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Make_20_Class_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Make_20_Class_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Make_20_Count_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Make_20_Count_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_list_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP__28_length_29_,1,1,TERMINAL(0),ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Make_20_Count_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Make_20_Count_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
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

enum opTrigger vpx_method_Make_20_Count_case_1_local_2_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Make_20_Count_case_1_local_2_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"0",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Make_20_Count_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Make_20_Count_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Make_20_Count_case_1_local_2_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_Make_20_Count_case_1_local_2_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Make_20_Count_case_1_local_2_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Make_20_Count(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Make_20_Count_case_1_local_2(PARAMETERS,TERMINAL(0),ROOT(1));

result = vpx_constant(PARAMETERS,"1",ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_make_2D_list,3,1,TERMINAL(1),TERMINAL(2),TERMINAL(2),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_To_20_CString_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_To_20_CString_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(12)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_byte_2D_length,1,1,TERMINAL(0),ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP__2B_1,1,1,TERMINAL(1),ROOT(2));

result = vpx_constant(PARAMETERS,"0",ROOT(3));

result = vpx_constant(PARAMETERS,"char",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_make_2D_external,2,1,TERMINAL(4),TERMINAL(2),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_put_2D_text,4,2,TERMINAL(5),TERMINAL(3),TERMINAL(1),TERMINAL(0),ROOT(6),ROOT(7));

result = vpx_constant(PARAMETERS,"1",ROOT(8));

result = vpx_constant(PARAMETERS,"0",ROOT(9));

result = vpx_call_primitive(PARAMETERS,VPLP_put_2D_integer,4,2,TERMINAL(5),TERMINAL(7),TERMINAL(8),TERMINAL(9),ROOT(10),ROOT(11));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTER(12)
}

enum opTrigger vpx_method_To_20_CString_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_To_20_CString_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(8)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_byte_2D_length,1,1,TERMINAL(0),ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP__2B_1,1,1,TERMINAL(1),ROOT(2));

PUTPOINTER(char,*,NewPtrClear( GETINTEGER(TERMINAL(2))),3);
result = kSuccess;

result = vpx_constant(PARAMETERS,"0",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_put_2D_text,4,2,TERMINAL(3),TERMINAL(4),TERMINAL(1),TERMINAL(0),ROOT(5),ROOT(6));

result = vpx_constant(PARAMETERS,"char",ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP_set_2D_external_2D_type,2,0,TERMINAL(3),TERMINAL(7));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(8)
}

enum opTrigger vpx_method_To_20_CString(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_To_20_CString_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_To_20_CString_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_To_20_PString(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(13)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_byte_2D_length,1,1,TERMINAL(0),ROOT(1));

result = vpx_constant(PARAMETERS,"255",ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_min,2,1,TERMINAL(1),TERMINAL(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP__2B_1,1,1,TERMINAL(3),ROOT(4));

result = vpx_constant(PARAMETERS,"unsigned char",ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_make_2D_external,2,1,TERMINAL(5),TERMINAL(4),ROOT(6));

result = vpx_constant(PARAMETERS,"0",ROOT(7));

result = vpx_constant(PARAMETERS,"1",ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP_put_2D_integer,4,2,TERMINAL(6),TERMINAL(7),TERMINAL(8),TERMINAL(3),ROOT(9),ROOT(10));

result = vpx_call_primitive(PARAMETERS,VPLP_put_2D_text,4,2,TERMINAL(6),TERMINAL(10),TERMINAL(3),TERMINAL(0),ROOT(11),ROOT(12));

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTERSINGLECASE(13)
}

enum opTrigger vpx_method_Create_20_Nib_20_Window_case_1_local_5_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Create_20_Nib_20_Window_case_1_local_5_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"CreateWindowFromNib",ROOT(1));

result = vpx_method_Debug_20_OSError(PARAMETERS,TERMINAL(1),TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Create_20_Nib_20_Window_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Create_20_Nib_20_Window_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1)
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

result = vpx_method_Create_20_Nib_20_Window_case_1_local_5_case_1_local_5(PARAMETERS,TERMINAL(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
OUTPUT(1,TERMINAL(5))
FOOTERWITHNONE(7)
}

enum opTrigger vpx_method_Create_20_Nib_20_Window_case_1_local_5_case_2_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Create_20_Nib_20_Window_case_1_local_5_case_2_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"CreateNibReference",ROOT(1));

result = vpx_method_Debug_20_OSError(PARAMETERS,TERMINAL(1),TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Create_20_Nib_20_Window_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Create_20_Nib_20_Window_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(3));

result = vpx_method_Create_20_Nib_20_Window_case_1_local_5_case_2_local_3(PARAMETERS,TERMINAL(0));

result = kSuccess;

OUTPUT(0,TERMINAL(0))
OUTPUT(1,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_Create_20_Nib_20_Window_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Create_20_Nib_20_Window_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Create_20_Nib_20_Window_case_1_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0,root1))
vpx_method_Create_20_Nib_20_Window_case_1_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0,root1);
return outcome;
}

enum opTrigger vpx_method_Create_20_Nib_20_Window(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADERWITHNONE(8)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_To_20_CFStringRef(PARAMETERS,TERMINAL(0),ROOT(2));

result = vpx_method_To_20_CFStringRef(PARAMETERS,TERMINAL(1),ROOT(3));

PUTINTEGER(CreateNibReference( GETCONSTPOINTER(__CFString,*,TERMINAL(2)),GETPOINTER(0,OpaqueIBNibRef,**,ROOT(5),NONE)),4);
result = kSuccess;

result = vpx_method_Create_20_Nib_20_Window_case_1_local_5(PARAMETERS,TERMINAL(4),TERMINAL(5),TERMINAL(3),ROOT(6),ROOT(7));

result = kSuccess;

OUTPUT(0,TERMINAL(6))
OUTPUT(1,TERMINAL(7))
FOOTERSINGLECASEWITHNONE(8)
}

enum opTrigger vpx_method_Open_20_Nib_20_Window_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Open_20_Nib_20_Window_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(0));
TERMINATEONFAILURE

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
TERMINATEONSUCCESS

ShowWindow( GETPOINTER(0,OpaqueWindowPtr,*,ROOT(2),TERMINAL(1)));
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Open_20_Nib_20_Window(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Create_20_Nib_20_Window(PARAMETERS,TERMINAL(0),TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_method_Open_20_Nib_20_Window_case_1_local_3(PARAMETERS,TERMINAL(2),TERMINAL(3));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
OUTPUT(1,TERMINAL(3))
FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Rect_20_Size(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(10)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_Rect_2D_to_2D_list,1,1,TERMINAL(0),ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,4,TERMINAL(1),ROOT(2),ROOT(3),ROOT(4),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP__2D2D_,2,1,TERMINAL(4),TERMINAL(2),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP__2D2D_,2,1,TERMINAL(5),TERMINAL(3),ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(6),TERMINAL(7),ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP_list_2D_to_2D_Point,1,1,TERMINAL(8),ROOT(9));

result = kSuccess;

OUTPUT(0,TERMINAL(9))
FOOTERSINGLECASE(10)
}

enum opTrigger vpx_method_Boolean_20_To_20_Integer_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Boolean_20_To_20_Integer_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_boolean_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"1",ROOT(1));

result = vpx_constant(PARAMETERS,"0",ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_choose,3,1,TERMINAL(0),TERMINAL(1),TERMINAL(2),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_Boolean_20_To_20_Integer_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Boolean_20_To_20_Integer_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"0",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Boolean_20_To_20_Integer(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Boolean_20_To_20_Integer_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Boolean_20_To_20_Integer_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Integer_20_To_20_Boolean_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Integer_20_To_20_Boolean_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_number_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_match(PARAMETERS,"0",TERMINAL(0));
NEXTCASEONSUCCESS

result = vpx_constant(PARAMETERS,"TRUE",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Integer_20_To_20_Boolean_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Integer_20_To_20_Boolean_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"FALSE",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Integer_20_To_20_Boolean(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Integer_20_To_20_Boolean_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Integer_20_To_20_Boolean_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Coerce_20_Boolean_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Coerce_20_Boolean_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
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

enum opTrigger vpx_method_Coerce_20_Boolean_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Coerce_20_Boolean_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_number_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_method_Integer_20_To_20_Boolean(PARAMETERS,TERMINAL(0),ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Coerce_20_Boolean_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Coerce_20_Boolean_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Default_20_FALSE(PARAMETERS,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"FALSE",TERMINAL(1));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Coerce_20_Boolean_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Coerce_20_Boolean_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"TRUE",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Coerce_20_Boolean(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Coerce_20_Boolean_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_Coerce_20_Boolean_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_Coerce_20_Boolean_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Coerce_20_Boolean_case_4(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Coerce_20_Integer_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Coerce_20_Integer_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(0));
TERMINATEONSUCCESS

result = vpx_match(PARAMETERS,"NONE",TERMINAL(0));
TERMINATEONSUCCESS

result = vpx_match(PARAMETERS,"UNDEFINED",TERMINAL(0));
TERMINATEONSUCCESS

result = kSuccess;
FAILONSUCCESS

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Coerce_20_Integer_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Coerce_20_Integer_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Coerce_20_Integer_case_1_local_2(PARAMETERS,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"0",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Coerce_20_Integer_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Coerce_20_Integer_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_boolean_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_method_Boolean_20_To_20_Integer(PARAMETERS,TERMINAL(0),ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Coerce_20_Integer_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Coerce_20_Integer_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
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

enum opTrigger vpx_method_Coerce_20_Integer_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Coerce_20_Integer_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_real_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_method_Int(PARAMETERS,TERMINAL(0),ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Coerce_20_Integer_case_5(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Coerce_20_Integer_case_5(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_external_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_from_2D_pointer,1,1,TERMINAL(0),ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Coerce_20_Integer_case_6(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Coerce_20_Integer_case_6(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_string_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_string_2D_address,1,1,TERMINAL(0),ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_from_2D_pointer,1,1,TERMINAL(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Coerce_20_Integer_case_7(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Coerce_20_Integer_case_7(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_object_2D_to_2D_address,1,1,TERMINAL(0),ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Coerce_20_Integer(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Coerce_20_Integer_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_Coerce_20_Integer_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_Coerce_20_Integer_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_Coerce_20_Integer_case_4(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_Coerce_20_Integer_case_5(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_Coerce_20_Integer_case_6(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Coerce_20_Integer_case_7(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Coerce_20_Real_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Coerce_20_Real_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_real_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(1)
}

enum opTrigger vpx_method_Coerce_20_Real_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Coerce_20_Real_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Coerce_20_Integer(PARAMETERS,TERMINAL(0),ROOT(1));

result = vpx_constant(PARAMETERS,"1.0",ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP__2A_,2,1,TERMINAL(1),TERMINAL(2),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_Coerce_20_Real(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Coerce_20_Real_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Coerce_20_Real_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Coerce_20_Number_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Coerce_20_Number_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
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

enum opTrigger vpx_method_Coerce_20_Number_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Coerce_20_Number_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_string_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_from_2D_string,1,1,TERMINAL(0),ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_number_3F_,1,0,TERMINAL(1));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Coerce_20_Number_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Coerce_20_Number_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_boolean_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_method_Boolean_20_To_20_Integer(PARAMETERS,TERMINAL(0),ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Coerce_20_Number_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Coerce_20_Number_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Coerce_20_Integer(PARAMETERS,TERMINAL(0),ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Coerce_20_Number(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Coerce_20_Number_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_Coerce_20_Number_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_Coerce_20_Number_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Coerce_20_Number_case_4(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Replace_20_NULL_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Replace_20_NULL_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_list_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_match(PARAMETERS,"( )",TERMINAL(0));
NEXTCASEONSUCCESS

if( (repeatLimit = vpx_multiplex(1,TERMINAL(0))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Replace_20_NULL(PARAMETERS,LIST(0),TERMINAL(1),ROOT(2));
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

enum opTrigger vpx_method_Replace_20_NULL_case_2_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Replace_20_NULL_case_2_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(0));
FAILONSUCCESS

result = vpx_match(PARAMETERS,"NONE",TERMINAL(0));
FAILONSUCCESS

result = vpx_match(PARAMETERS,"0",TERMINAL(0));
FAILONSUCCESS

result = vpx_match(PARAMETERS,"UNDEFINED",TERMINAL(0));
FAILONSUCCESS

result = vpx_match(PARAMETERS,"\"\"",TERMINAL(0));
FAILONSUCCESS

result = vpx_match(PARAMETERS,"( )",TERMINAL(0));
FAILONSUCCESS

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Replace_20_NULL_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Replace_20_NULL_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Replace_20_NULL_case_2_local_2(PARAMETERS,TERMINAL(0));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(2)
}

enum opTrigger vpx_method_Replace_20_NULL_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Replace_20_NULL_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(1));
NEXTCASEONSUCCESS

result = vpx_method_Make_20_Clone(PARAMETERS,TERMINAL(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Replace_20_NULL_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Replace_20_NULL_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Make_20_Clone(PARAMETERS,TERMINAL(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Replace_20_NULL(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Replace_20_NULL_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
if(vpx_method_Replace_20_NULL_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
if(vpx_method_Replace_20_NULL_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Replace_20_NULL_case_4(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Replace_20_NULL_20_No_20_Copy_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Replace_20_NULL_20_No_20_Copy_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_list_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_match(PARAMETERS,"( )",TERMINAL(0));
NEXTCASEONSUCCESS

if( (repeatLimit = vpx_multiplex(1,TERMINAL(0))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Replace_20_NULL(PARAMETERS,LIST(0),TERMINAL(1),ROOT(2));
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

enum opTrigger vpx_method_Replace_20_NULL_20_No_20_Copy_case_2_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Replace_20_NULL_20_No_20_Copy_case_2_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(0));
FAILONSUCCESS

result = vpx_match(PARAMETERS,"NONE",TERMINAL(0));
FAILONSUCCESS

result = vpx_match(PARAMETERS,"0",TERMINAL(0));
FAILONSUCCESS

result = vpx_match(PARAMETERS,"UNDEFINED",TERMINAL(0));
FAILONSUCCESS

result = vpx_match(PARAMETERS,"\"\"",TERMINAL(0));
FAILONSUCCESS

result = vpx_match(PARAMETERS,"( )",TERMINAL(0));
FAILONSUCCESS

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Replace_20_NULL_20_No_20_Copy_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Replace_20_NULL_20_No_20_Copy_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Replace_20_NULL_20_No_20_Copy_case_2_local_2(PARAMETERS,TERMINAL(0));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(2)
}

enum opTrigger vpx_method_Replace_20_NULL_20_No_20_Copy_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Replace_20_NULL_20_No_20_Copy_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Replace_20_NULL_20_No_20_Copy(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Replace_20_NULL_20_No_20_Copy_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
if(vpx_method_Replace_20_NULL_20_No_20_Copy_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Replace_20_NULL_20_No_20_Copy_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method__22_Check_22__case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method__22_Check_22__case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
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

enum opTrigger vpx_method__22_Check_22__case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method__22_Check_22__case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(0));
NEXTCASEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_to_2D_string,1,1,TERMINAL(0),ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method__22_Check_22__case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method__22_Check_22__case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(0),ROOT(1));

result = vpx_constant(PARAMETERS,">>",ROOT(2));

result = vpx_constant(PARAMETERS,"<<",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,3,1,TERMINAL(3),TERMINAL(1),TERMINAL(2),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method__22_Check_22_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method__22_Check_22__case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method__22_Check_22__case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method__22_Check_22__case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method__22_Prefix_22_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP__22_length_22_,1,1,TERMINAL(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_prefix,2,2,TERMINAL(0),TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP__3D_,2,0,TERMINAL(3),TERMINAL(1));
FAILONFAILURE

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method__22_Split_20_At_22_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1,V_Object *root2)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP__22_in_22_,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_match(PARAMETERS,"0",TERMINAL(2));
FAILONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP__2D_1,1,1,TERMINAL(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_prefix,2,2,TERMINAL(0),TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP__22_length_22_,1,1,TERMINAL(1),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP_prefix,2,2,TERMINAL(5),TERMINAL(6),ROOT(7),ROOT(8));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
OUTPUT(1,TERMINAL(7))
OUTPUT(2,TERMINAL(8))
FOOTERSINGLECASE(9)
}

enum opTrigger vpx_method__22_Suffix_22_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP__22_length_22_,1,1,TERMINAL(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_suffix,2,2,TERMINAL(0),TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP__3D_,2,0,TERMINAL(4),TERMINAL(1));
FAILONFAILURE

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method__22_Trim_22_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_method__22_LTrim_22_(PARAMETERS,TERMINAL(0),ROOT(1));

result = vpx_method__22_RTrim_22_(PARAMETERS,TERMINAL(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method__22_LTrim_22__case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method__22_LTrim_22__case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_to_2D_ascii,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"( )",TERMINAL(1));
FAILONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,1,TERMINAL(1),ROOT(2));

result = vpx_constant(PARAMETERS,"33",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP__3E3D_,2,0,TERMINAL(2),TERMINAL(3));
FAILONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_is_2D_alnum,1,0,TERMINAL(0));
FAILONSUCCESS

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method__22_LTrim_22__case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method__22_LTrim_22__case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"1",ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_prefix,2,2,TERMINAL(0),TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_method__22_LTrim_22__case_1_local_4(PARAMETERS,TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_method__22_LTrim_22_(PARAMETERS,TERMINAL(3),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method__22_LTrim_22__case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method__22_LTrim_22__case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(1)
}

enum opTrigger vpx_method__22_LTrim_22_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method__22_LTrim_22__case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method__22_LTrim_22__case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method__22_RTrim_22__case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method__22_RTrim_22__case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_to_2D_ascii,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"( )",TERMINAL(1));
FAILONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,1,TERMINAL(1),ROOT(2));

result = vpx_constant(PARAMETERS,"33",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP__3E3D_,2,0,TERMINAL(2),TERMINAL(3));
FAILONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_is_2D_alnum,1,0,TERMINAL(0));
FAILONSUCCESS

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method__22_RTrim_22__case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method__22_RTrim_22__case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"1",ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_suffix,2,2,TERMINAL(0),TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_method__22_RTrim_22__case_1_local_4(PARAMETERS,TERMINAL(3));
NEXTCASEONFAILURE

result = vpx_method__22_RTrim_22_(PARAMETERS,TERMINAL(2),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method__22_RTrim_22__case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method__22_RTrim_22__case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(1)
}

enum opTrigger vpx_method__22_RTrim_22_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method__22_RTrim_22__case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method__22_RTrim_22__case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method__22_Parse_22__case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method__22_Parse_22__case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method__22_Split_20_At_22_(PARAMETERS,TERMINAL(0),TERMINAL(1),ROOT(2),ROOT(3),ROOT(4));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(4))
OUTPUT(1,TERMINAL(2))
FOOTER(5)
}

enum opTrigger vpx_method__22_Parse_22__case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method__22_Parse_22__case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"\"",ROOT(2));

result = kSuccess;
FINISHONSUCCESS

OUTPUT(0,TERMINAL(2))
OUTPUT(1,TERMINAL(0))
FOOTER(3)
}

enum opTrigger vpx_method__22_Parse_22__case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method__22_Parse_22__case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method__22_Parse_22__case_1_local_2_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1))
vpx_method__22_Parse_22__case_1_local_2_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1);
return outcome;
}

enum opTrigger vpx_method__22_Parse_22_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

LISTROOTBEGIN(1)
REPEATBEGIN
LOOPTERMINALBEGIN(1)
LOOPTERMINAL(0,0,2)
result = vpx_method__22_Parse_22__case_1_local_2(PARAMETERS,LOOP(0),TERMINAL(1),ROOT(2),ROOT(3));
LISTROOT(3,0)
REPEATFINISH
LISTROOTFINISH(3,0)
LISTROOTEND

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method__2822_All_20_In_2229__case_1_local_3_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method__2822_All_20_In_2229__case_1_local_3_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_match(PARAMETERS,"prefix",TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP__22_length_22_,1,1,TERMINAL(1),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_prefix,2,2,TERMINAL(0),TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP__3D_,2,1,TERMINAL(4),TERMINAL(1),ROOT(6));

result = vpx_method_Boolean_20_To_20_Integer(PARAMETERS,TERMINAL(6),ROOT(7));

result = kSuccess;

OUTPUT(0,TERMINAL(7))
FOOTER(8)
}

enum opTrigger vpx_method__2822_All_20_In_2229__case_1_local_3_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method__2822_All_20_In_2229__case_1_local_3_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_match(PARAMETERS,"suffix",TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP__22_length_22_,1,1,TERMINAL(1),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_suffix,2,2,TERMINAL(0),TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP__3D_,2,1,TERMINAL(5),TERMINAL(1),ROOT(6));

result = vpx_method_Boolean_20_To_20_Integer(PARAMETERS,TERMINAL(6),ROOT(7));

result = kSuccess;

OUTPUT(0,TERMINAL(7))
FOOTER(8)
}

enum opTrigger vpx_method__2822_All_20_In_2229__case_1_local_3_case_1_local_2_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method__2822_All_20_In_2229__case_1_local_3_case_1_local_2_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP__22_in_22_,2,1,TERMINAL(0),TERMINAL(1),ROOT(3));

result = vpx_match(PARAMETERS,"0",TERMINAL(3));
FINISHONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method__2822_All_20_In_2229__case_1_local_3_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method__2822_All_20_In_2229__case_1_local_3_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method__2822_All_20_In_2229__case_1_local_3_case_1_local_2_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
if(vpx_method__2822_All_20_In_2229__case_1_local_3_case_1_local_2_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
vpx_method__2822_All_20_In_2229__case_1_local_3_case_1_local_2_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0);
return outcome;
}

enum opTrigger vpx_method__2822_All_20_In_2229__case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method__2822_All_20_In_2229__case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

if( (repeatLimit = vpx_multiplex(1,TERMINAL(1))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method__2822_All_20_In_2229__case_1_local_3_case_1_local_2(PARAMETERS,TERMINAL(0),LIST(1),TERMINAL(2),ROOT(3));
REPEATFINISH
} else {
ROOTNULL(3,NULL)
}

result = vpx_match(PARAMETERS,"0",TERMINAL(3));
NEXTCASEONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(4)
}

enum opTrigger vpx_method__2822_All_20_In_2229__case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method__2822_All_20_In_2229__case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
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

enum opTrigger vpx_method__2822_All_20_In_2229__case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method__2822_All_20_In_2229__case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method__2822_All_20_In_2229__case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
vpx_method__2822_All_20_In_2229__case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0);
return outcome;
}

enum opTrigger vpx_method__2822_All_20_In_2229_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_method__28_Check_29_(PARAMETERS,TERMINAL(1),ROOT(3));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(0))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method__2822_All_20_In_2229__case_1_local_3(PARAMETERS,LIST(0),TERMINAL(3),TERMINAL(2),ROOT(4));
LISTROOT(4,0)
REPEATFINISH
LISTROOTFINISH(4,0)
LISTROOTEND
} else {
ROOTEMPTY(4)
}

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method__2822_ALL_20_IN_2229__case_1_local_4_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method__2822_ALL_20_IN_2229__case_1_local_4_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_match(PARAMETERS,"prefix",TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP__22_length_22_,1,1,TERMINAL(1),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_prefix,2,2,TERMINAL(0),TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP__3D_,2,1,TERMINAL(4),TERMINAL(1),ROOT(6));

result = vpx_method_Boolean_20_To_20_Integer(PARAMETERS,TERMINAL(6),ROOT(7));

result = kSuccess;

OUTPUT(0,TERMINAL(7))
FOOTER(8)
}

enum opTrigger vpx_method__2822_ALL_20_IN_2229__case_1_local_4_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method__2822_ALL_20_IN_2229__case_1_local_4_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_match(PARAMETERS,"suffix",TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP__22_length_22_,1,1,TERMINAL(1),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_suffix,2,2,TERMINAL(0),TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP__3D_,2,1,TERMINAL(5),TERMINAL(1),ROOT(6));

result = vpx_method_Boolean_20_To_20_Integer(PARAMETERS,TERMINAL(6),ROOT(7));

result = kSuccess;

OUTPUT(0,TERMINAL(7))
FOOTER(8)
}

enum opTrigger vpx_method__2822_ALL_20_IN_2229__case_1_local_4_case_1_local_3_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method__2822_ALL_20_IN_2229__case_1_local_4_case_1_local_3_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP__22_in_22_,2,1,TERMINAL(0),TERMINAL(1),ROOT(3));

result = vpx_match(PARAMETERS,"0",TERMINAL(3));
FINISHONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method__2822_ALL_20_IN_2229__case_1_local_4_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method__2822_ALL_20_IN_2229__case_1_local_4_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method__2822_ALL_20_IN_2229__case_1_local_4_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
if(vpx_method__2822_ALL_20_IN_2229__case_1_local_4_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
vpx_method__2822_ALL_20_IN_2229__case_1_local_4_case_1_local_3_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0);
return outcome;
}

enum opTrigger vpx_method__2822_ALL_20_IN_2229__case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method__2822_ALL_20_IN_2229__case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_uppercase,1,1,TERMINAL(0),ROOT(3));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(1))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method__2822_ALL_20_IN_2229__case_1_local_4_case_1_local_3(PARAMETERS,TERMINAL(3),LIST(1),TERMINAL(2),ROOT(4));
REPEATFINISH
} else {
ROOTNULL(4,NULL)
}

result = vpx_match(PARAMETERS,"0",TERMINAL(4));
NEXTCASEONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(5)
}

enum opTrigger vpx_method__2822_ALL_20_IN_2229__case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method__2822_ALL_20_IN_2229__case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
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

enum opTrigger vpx_method__2822_ALL_20_IN_2229__case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method__2822_ALL_20_IN_2229__case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method__2822_ALL_20_IN_2229__case_1_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
vpx_method__2822_ALL_20_IN_2229__case_1_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0);
return outcome;
}

enum opTrigger vpx_method__2822_ALL_20_IN_2229_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_method__28_Check_29_(PARAMETERS,TERMINAL(1),ROOT(3));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(3))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_call_primitive(PARAMETERS,VPLP_uppercase,1,1,LIST(3),ROOT(4));
LISTROOT(4,0)
REPEATFINISH
LISTROOTFINISH(4,0)
LISTROOTEND
} else {
ROOTEMPTY(4)
}

if( (repeatLimit = vpx_multiplex(1,TERMINAL(0))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method__2822_ALL_20_IN_2229__case_1_local_4(PARAMETERS,LIST(0),TERMINAL(4),TERMINAL(2),ROOT(5));
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

enum opTrigger vpx_method__28_Average_29__case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method__28_Average_29__case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Default_20_List(PARAMETERS,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"(  )",TERMINAL(1));
NEXTCASEONSUCCESS

result = vpx_method__28_Sum_29_(PARAMETERS,TERMINAL(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP__28_length_29_,1,1,TERMINAL(1),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_div,2,1,TERMINAL(2),TERMINAL(3),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method__28_Average_29__case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method__28_Average_29__case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"0",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method__28_Average_29_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method__28_Average_29__case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method__28_Average_29__case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method__28_Check_29__case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method__28_Check_29__case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_list_3F_,1,0,TERMINAL(0));
NEXTCASEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_pack,1,1,TERMINAL(0),ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method__28_Check_29__case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method__28_Check_29__case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(1)
}

enum opTrigger vpx_method__28_Check_29_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method__28_Check_29__case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method__28_Check_29__case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method__28_Check_20_Bounds_29_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_list_3F_,1,0,TERMINAL(0));
FAILONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP__28_length_29_,1,1,TERMINAL(0),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP__3E3D_,2,0,TERMINAL(2),TERMINAL(1));
FAILONFAILURE

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method__28_Ends_29_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"(  )",TERMINAL(0));
FAILONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_detach_2D_l,1,2,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_detach_2D_r,1,2,TERMINAL(0),ROOT(3),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
OUTPUT(1,TERMINAL(4))
FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method__28_Flatten_29__case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method__28_Flatten_29__case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_list_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_method__28_Flatten_29_(PARAMETERS,TERMINAL(0),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP__28_join_29_,2,1,TERMINAL(1),TERMINAL(2),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method__28_Flatten_29__case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method__28_Flatten_29__case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_attach_2D_r,2,1,TERMINAL(1),TERMINAL(0),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method__28_Flatten_29__case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method__28_Flatten_29__case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method__28_Flatten_29__case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method__28_Flatten_29__case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method__28_Flatten_29_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"(  )",ROOT(1));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(0))) ){
REPEATBEGINWITHCOUNTER
LOOPTERMINALBEGIN(1)
LOOPTERMINAL(0,1,2)
result = vpx_method__28_Flatten_29__case_1_local_3(PARAMETERS,LIST(0),LOOP(0),ROOT(2));
REPEATFINISH
} else {
ROOTNULL(2,TERMINAL(1))
}

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method__28_From_20_String_29__case_1_local_3_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method__28_From_20_String_29__case_1_local_3_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_match(PARAMETERS,"0",TERMINAL(1));
NEXTCASEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP__2D2D_,2,1,TERMINAL(1),TERMINAL(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_middle,3,1,TERMINAL(0),TERMINAL(3),TERMINAL(2),ROOT(4));

result = vpx_constant(PARAMETERS,"FALSE",ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
OUTPUT(1,TERMINAL(5))
FOOTER(6)
}

enum opTrigger vpx_method__28_From_20_String_29__case_1_local_3_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method__28_From_20_String_29__case_1_local_3_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP__2D_1,1,1,TERMINAL(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_prefix,2,2,TERMINAL(0),TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_constant(PARAMETERS,"TRUE",ROOT(6));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
OUTPUT(1,TERMINAL(6))
FOOTER(7)
}

enum opTrigger vpx_method__28_From_20_String_29__case_1_local_3_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method__28_From_20_String_29__case_1_local_3_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method__28_From_20_String_29__case_1_local_3_case_1_local_6_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0,root1))
vpx_method__28_From_20_String_29__case_1_local_3_case_1_local_6_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0,root1);
return outcome;
}

enum opTrigger vpx_method__28_From_20_String_29__case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method__28_From_20_String_29__case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP__22_length_22_,1,1,TERMINAL(0),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP__3E_,2,0,TERMINAL(3),TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP__22_in_2D_relative_22_,3,1,TERMINAL(0),TERMINAL(2),TERMINAL(1),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP__2B_1,1,1,TERMINAL(4),ROOT(5));

result = vpx_method__28_From_20_String_29__case_1_local_3_case_1_local_6(PARAMETERS,TERMINAL(0),TERMINAL(4),TERMINAL(1),ROOT(6),ROOT(7));

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(7));
FINISHONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(6))
OUTPUT(1,TERMINAL(5))
FOOTER(8)
}

enum opTrigger vpx_method__28_From_20_String_29__case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method__28_From_20_String_29__case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1)
{
HEADERWITHNONE(6)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP__2D_1,1,1,TERMINAL(1),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_prefix,2,2,TERMINAL(0),TERMINAL(3),ROOT(4),ROOT(5));

result = kSuccess;
FINISHONSUCCESS

OUTPUT(0,TERMINAL(5))
OUTPUT(1,NONE)
FOOTERWITHNONE(6)
}

enum opTrigger vpx_method__28_From_20_String_29__case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method__28_From_20_String_29__case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method__28_From_20_String_29__case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0,root1))
vpx_method__28_From_20_String_29__case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0,root1);
return outcome;
}

enum opTrigger vpx_method__28_From_20_String_29_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"1",ROOT(2));

LISTROOTBEGIN(1)
REPEATBEGIN
LOOPTERMINALBEGIN(1)
LOOPTERMINAL(0,2,4)
result = vpx_method__28_From_20_String_29__case_1_local_3(PARAMETERS,TERMINAL(0),LOOP(0),TERMINAL(1),ROOT(3),ROOT(4));
LISTROOT(3,0)
REPEATFINISH
LISTROOTFINISH(3,0)
LISTROOTEND

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method__28_One_29__case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method__28_One_29__case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_list_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP__28_length_29_,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"1",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,1,TERMINAL(0),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method__28_One_29__case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method__28_One_29__case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(1)
}

enum opTrigger vpx_method__28_One_29_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method__28_One_29__case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method__28_One_29__case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method__28_Safe_20_Get_29_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP__28_length_29_,1,1,TERMINAL(0),ROOT(2));

result = vpx_match(PARAMETERS,"0",TERMINAL(2));
FAILONSUCCESS

result = vpx_constant(PARAMETERS,"1",ROOT(3));

result = vpx_method_Between(PARAMETERS,TERMINAL(3),TERMINAL(1),TERMINAL(2),ROOT(4));

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(4));
FAILONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_nth,2,1,TERMINAL(0),TERMINAL(1),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method__28_Safe_20_Set_2129_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP__28_length_29_,1,1,TERMINAL(0),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP__3E3D_,2,0,TERMINAL(3),TERMINAL(1));
FAILONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_set_2D_nth_21_,3,1,TERMINAL(0),TERMINAL(2),TERMINAL(1),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method__28_Safe_20_Split_29_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP__28_length_29_,1,1,TERMINAL(0),ROOT(2));

result = vpx_match(PARAMETERS,"0",TERMINAL(2));
FAILONSUCCESS

result = vpx_constant(PARAMETERS,"1",ROOT(3));

result = vpx_method_Between(PARAMETERS,TERMINAL(3),TERMINAL(1),TERMINAL(2),ROOT(4));

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(4));
FAILONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_split_2D_nth,2,2,TERMINAL(0),TERMINAL(1),ROOT(5),ROOT(6));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
OUTPUT(1,TERMINAL(6))
FOOTERSINGLECASE(7)
}

enum opTrigger vpx_method__28_Sum_29__case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method__28_Sum_29__case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Coerce_20_Number(PARAMETERS,TERMINAL(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP__2B_,2,1,TERMINAL(0),TERMINAL(2),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method__28_Sum_29__case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method__28_Sum_29__case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Default_20_List(PARAMETERS,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"(  )",TERMINAL(1));
NEXTCASEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_detach_2D_l,1,2,TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_method_Coerce_20_Number(PARAMETERS,TERMINAL(2),ROOT(4));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(3))) ){
REPEATBEGINWITHCOUNTER
LOOPTERMINALBEGIN(1)
LOOPTERMINAL(0,4,5)
result = vpx_method__28_Sum_29__case_1_local_6(PARAMETERS,LOOP(0),LIST(3),ROOT(5));
REPEATFINISH
} else {
ROOTNULL(5,TERMINAL(4))
}

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTER(6)
}

enum opTrigger vpx_method__28_Sum_29__case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method__28_Sum_29__case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"0",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method__28_Sum_29_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method__28_Sum_29__case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method__28_Sum_29__case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method__28_To_20_Block_29__case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method__28_To_20_Block_29__case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_method_Coerce_20_Integer(PARAMETERS,TERMINAL(2),ROOT(3));

result = vpx_constant(PARAMETERS,"4",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_put_2D_integer,4,2,TERMINAL(0),TERMINAL(1),TERMINAL(4),TERMINAL(3),ROOT(5),ROOT(6));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
OUTPUT(1,TERMINAL(6))
FOOTERSINGLECASE(7)
}

enum opTrigger vpx_method__28_To_20_Block_29_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP__28_length_29_,1,1,TERMINAL(0),ROOT(2));

result = vpx_method_Block_20_Allocate(PARAMETERS,TERMINAL(2),TERMINAL(1),ROOT(3));
FAILONFAILURE

result = vpx_constant(PARAMETERS,"0",ROOT(4));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(0))) ){
REPEATBEGINWITHCOUNTER
LOOPTERMINALBEGIN(2)
LOOPTERMINAL(0,3,5)
LOOPTERMINAL(1,4,6)
result = vpx_method__28_To_20_Block_29__case_1_local_5(PARAMETERS,LOOP(0),LOOP(1),LIST(0),ROOT(5),ROOT(6));
REPEATFINISH
} else {
ROOTNULL(5,TERMINAL(3))
ROOTNULL(6,TERMINAL(4))
}

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTERSINGLECASE(7)
}

enum opTrigger vpx_method__28_To_20_String_29__case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method__28_To_20_String_29__case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_method__22_Check_22_(PARAMETERS,TERMINAL(1),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,3,1,TERMINAL(0),TERMINAL(3),TERMINAL(2),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method__28_To_20_String_29_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"\"",ROOT(2));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(0))) ){
REPEATBEGINWITHCOUNTER
LOOPTERMINALBEGIN(1)
LOOPTERMINAL(0,2,3)
result = vpx_method__28_To_20_String_29__case_1_local_3(PARAMETERS,LOOP(0),LIST(0),TERMINAL(1),ROOT(3));
REPEATFINISH
} else {
ROOTNULL(3,TERMINAL(2))
}

result = vpx_call_primitive(PARAMETERS,VPLP__22_length_22_,1,1,TERMINAL(1),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_suffix,2,2,TERMINAL(3),TERMINAL(4),ROOT(5),ROOT(6));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTERSINGLECASE(7)
}

enum opTrigger vpx_method__28_Without_29__case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method__28_Without_29__case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADERWITHNONE(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"0",TERMINAL(1));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,NONE)
OUTPUT(1,TERMINAL(0))
FOOTERWITHNONE(2)
}

enum opTrigger vpx_method__28_Without_29__case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method__28_Without_29__case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADERWITHNONE(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(0))
OUTPUT(1,NONE)
FOOTERWITHNONE(2)
}

enum opTrigger vpx_method__28_Without_29__case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method__28_Without_29__case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method__28_Without_29__case_1_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1))
vpx_method__28_Without_29__case_1_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1);
return outcome;
}

enum opTrigger vpx_method__28_Without_29_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method__28_Check_29_(PARAMETERS,TERMINAL(1),ROOT(2));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(0))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_call_primitive(PARAMETERS,VPLP__28_in_29_,2,1,TERMINAL(2),LIST(0),ROOT(3));
LISTROOT(3,0)
REPEATFINISH
LISTROOTFINISH(3,0)
LISTROOTEND
} else {
ROOTEMPTY(3)
}

if( (repeatLimit = vpx_multiplex(2,TERMINAL(0),TERMINAL(3))) ){
LISTROOTBEGIN(2)
REPEATBEGINWITHCOUNTER
result = vpx_method__28_Without_29__case_1_local_4(PARAMETERS,LIST(0),LIST(3),ROOT(4),ROOT(5));
LISTROOT(4,0)
LISTROOT(5,1)
REPEATFINISH
LISTROOTFINISH(4,0)
LISTROOTFINISH(5,1)
LISTROOTEND
} else {
ROOTEMPTY(4)
ROOTEMPTY(5)
}

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method__28_Detach_20_Item_29_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP__28_in_29_,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_match(PARAMETERS,"0",TERMINAL(2));
FAILONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_detach_2D_nth,2,2,TERMINAL(0),TERMINAL(2),ROOT(3),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
OUTPUT(1,TERMINAL(4))
FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Default_20_Zero(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"0",ROOT(1));

result = vpx_method_Replace_20_NULL(PARAMETERS,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Default_20_TRUE(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"TRUE",ROOT(1));

result = vpx_method_Replace_20_NULL(PARAMETERS,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Default_20_FALSE(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"FALSE",ROOT(1));

result = vpx_method_Replace_20_NULL(PARAMETERS,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Default_20_NULL(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = vpx_method_Replace_20_NULL(PARAMETERS,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Default_20_List_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Default_20_List_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(0));
NEXTCASEONSUCCESS

result = vpx_match(PARAMETERS,"NONE",TERMINAL(0));
NEXTCASEONSUCCESS

result = vpx_method__28_Check_29_(PARAMETERS,TERMINAL(0),ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Default_20_List_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Default_20_List_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"(  )",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Default_20_List(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Default_20_List_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Default_20_List_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Is_20_MacOS_3F__case_1_local_2_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Is_20_MacOS_3F__case_1_local_2_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(16)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"16",ROOT(1));

result = vpx_constant(PARAMETERS,"10",ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_to_2D_string,1,1,TERMINAL(0),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_string_2D_to_2D_base,3,2,TERMINAL(3),TERMINAL(2),TERMINAL(1),ROOT(4),ROOT(5));

result = vpx_constant(PARAMETERS,"1",ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP_suffix,2,2,TERMINAL(5),TERMINAL(6),ROOT(7),ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP_from_2D_string,1,1,TERMINAL(8),ROOT(9));

result = vpx_constant(PARAMETERS,"1",ROOT(10));

result = vpx_call_primitive(PARAMETERS,VPLP_suffix,2,2,TERMINAL(7),TERMINAL(10),ROOT(11),ROOT(12));

result = vpx_call_primitive(PARAMETERS,VPLP_from_2D_string,1,1,TERMINAL(12),ROOT(13));

result = vpx_call_primitive(PARAMETERS,VPLP_from_2D_string,1,1,TERMINAL(11),ROOT(14));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,3,1,TERMINAL(14),TERMINAL(13),TERMINAL(9),ROOT(15));

result = kSuccess;

OUTPUT(0,TERMINAL(15))
FOOTERSINGLECASE(16)
}

enum opTrigger vpx_method_Is_20_MacOS_3F__case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0);
enum opTrigger vpx_method_Is_20_MacOS_3F__case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0)
{
HEADERWITHNONE(9)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,gestaltSystemVersion,ROOT(0));

PUTINTEGER(Gestalt( GETINTEGER(TERMINAL(0)),GETPOINTER(4,int,*,ROOT(2),NONE)),1);
result = kSuccess;

result = vpx_extmatch(PARAMETERS,noErr,TERMINAL(1));
FAILONFAILURE

result = vpx_constant(PARAMETERS,"4",ROOT(3));

result = vpx_constant(PARAMETERS,"0",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_integer,3,3,TERMINAL(2),TERMINAL(4),TERMINAL(3),ROOT(5),ROOT(6),ROOT(7));

result = vpx_method_Is_20_MacOS_3F__case_1_local_2_case_1_local_8(PARAMETERS,TERMINAL(7),ROOT(8));

result = kSuccess;

OUTPUT(0,TERMINAL(8))
FOOTERSINGLECASEWITHNONE(9)
}

enum opTrigger vpx_method_Is_20_MacOS_3F__case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Is_20_MacOS_3F__case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP__28_length_29_,1,1,TERMINAL(0),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_split_2D_nth,2,2,TERMINAL(1),TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP__3D_,2,0,TERMINAL(0),TERMINAL(4));
FAILONFAILURE

result = kSuccess;

FOOTER(6)
}

enum opTrigger vpx_method_Is_20_MacOS_3F__case_1_local_4_case_2_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Is_20_MacOS_3F__case_1_local_4_case_2_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP__3C_,2,0,TERMINAL(0),TERMINAL(1));
NEXTCASEONFAILURE

result = kSuccess;
FINISHONSUCCESS

FOOTER(2)
}

enum opTrigger vpx_method_Is_20_MacOS_3F__case_1_local_4_case_2_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Is_20_MacOS_3F__case_1_local_4_case_2_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP__3D_,2,0,TERMINAL(0),TERMINAL(1));
FAILONFAILURE

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Is_20_MacOS_3F__case_1_local_4_case_2_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Is_20_MacOS_3F__case_1_local_4_case_2_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Is_20_MacOS_3F__case_1_local_4_case_2_local_2_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Is_20_MacOS_3F__case_1_local_4_case_2_local_2_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Is_20_MacOS_3F__case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Is_20_MacOS_3F__case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

if( (repeatLimit = vpx_multiplex(2,TERMINAL(0),TERMINAL(1))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Is_20_MacOS_3F__case_1_local_4_case_2_local_2(PARAMETERS,LIST(0),LIST(1));
FAILONFAILURE
REPEATFINISH
} else {
}

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_Is_20_MacOS_3F__case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Is_20_MacOS_3F__case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Is_20_MacOS_3F__case_1_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2))
vpx_method_Is_20_MacOS_3F__case_1_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2);
return outcome;
}

enum opTrigger vpx_method_Is_20_MacOS_3F_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Is_20_MacOS_3F__case_1_local_2(PARAMETERS,ROOT(2));
FAILONFAILURE

result = vpx_method__28_Check_29_(PARAMETERS,TERMINAL(0),ROOT(3));

result = vpx_method_Is_20_MacOS_3F__case_1_local_4(PARAMETERS,TERMINAL(3),TERMINAL(2),TERMINAL(1));
FAILONFAILURE

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Beep_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex);
enum opTrigger vpx_method_Beep_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex)
{
HEADER(1)
result = kSuccess;

AlertSoundPlay();
result = kSuccess;

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_Beep_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex);
enum opTrigger vpx_method_Beep_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex)
{
HEADER(1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"2",ROOT(0));

SysBeep( GETINTEGER(TERMINAL(0)));
result = kSuccess;

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_Beep(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Beep_case_1(environment, &outcome, inputRepeat, contextIndex))
vpx_method_Beep_case_2(environment, &outcome, inputRepeat, contextIndex);
return outcome;
}

enum opTrigger vpx_method_Speak_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex);
enum opTrigger vpx_method_Speak_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex)
{
HEADER(1)
result = kSuccess;

PUTINTEGER(SpeechBusy(),0);
result = kSuccess;

result = vpx_match(PARAMETERS,"0",TERMINAL(0));
FINISHONSUCCESS

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Speak(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_method__22_Check_22_(PARAMETERS,TERMINAL(0),ROOT(1));

result = vpx_method_To_20_PString(PARAMETERS,TERMINAL(1),ROOT(2));

PUTINTEGER(SpeakString( GETCONSTPOINTER(unsigned char,*,TERMINAL(2))),3);
result = kSuccess;

result = vpx_match(PARAMETERS,"0",TERMINAL(3));
FAILONFAILURE

REPEATBEGIN
result = vpx_method_Speak_case_1_local_6(PARAMETERS);
REPEATFINISH

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Simple_20_Speak_case_1_local_2_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex);
enum opTrigger vpx_method_Simple_20_Speak_case_1_local_2_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex)
{
HEADER(1)
result = kSuccess;

PUTINTEGER(SpeechBusy(),0);
result = kSuccess;

result = vpx_match(PARAMETERS,"0",TERMINAL(0));
FINISHONSUCCESS

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Simple_20_Speak_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Simple_20_Speak_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(0));
TERMINATEONSUCCESS

REPEATBEGIN
result = vpx_method_Simple_20_Speak_case_1_local_2_case_1_local_3(PARAMETERS);
REPEATFINISH

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Simple_20_Speak(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Simple_20_Speak_case_1_local_2(PARAMETERS,TERMINAL(1));

result = vpx_method_Speak(PARAMETERS,TERMINAL(0));
FAILONFAILURE

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Between(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP__3C3D_,2,1,TERMINAL(0),TERMINAL(1),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP__3C3D_,2,1,TERMINAL(1),TERMINAL(2),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_and,2,1,TERMINAL(3),TERMINAL(4),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Between_20_Bounds(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_min,2,1,TERMINAL(0),TERMINAL(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_max,2,1,TERMINAL(0),TERMINAL(2),ROOT(4));

result = vpx_method_Between(PARAMETERS,TERMINAL(3),TERMINAL(1),TERMINAL(4),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Between_20_Wrap_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Between_20_Wrap_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_method_Between(PARAMETERS,TERMINAL(0),TERMINAL(1),TERMINAL(2),ROOT(3));

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(3));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(4)
}

enum opTrigger vpx_method_Between_20_Wrap_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Between_20_Wrap_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP__3E_,2,0,TERMINAL(1),TERMINAL(2));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(3)
}

enum opTrigger vpx_method_Between_20_Wrap_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Between_20_Wrap_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
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

enum opTrigger vpx_method_Between_20_Wrap(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Between_20_Wrap_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
if(vpx_method_Between_20_Wrap_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
vpx_method_Between_20_Wrap_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0);
return outcome;
}

enum opTrigger vpx_method_Random_20_Between(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_rand,0,1,ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP__2D2D_,2,1,TERMINAL(1),TERMINAL(0),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP__2A_,2,1,TERMINAL(2),TERMINAL(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_round,1,1,TERMINAL(4),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP__2B2B_,2,1,TERMINAL(0),TERMINAL(5),ROOT(6));

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTERSINGLECASE(7)
}

enum opTrigger vpx_method_Flip_20_Coin(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0)
{
HEADER(4)
result = kSuccess;

result = vpx_constant(PARAMETERS,"1",ROOT(0));

result = vpx_constant(PARAMETERS,"2",ROOT(1));

result = vpx_method_Random_20_Between(PARAMETERS,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP__3D_,2,1,TERMINAL(2),TERMINAL(1),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Roll_20_Dice_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Roll_20_Dice_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"1",ROOT(1));

result = vpx_method_Replace_20_NULL(PARAMETERS,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Roll_20_Dice_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Roll_20_Dice_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"1",ROOT(1));

result = vpx_method_Replace_20_NULL(PARAMETERS,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Roll_20_Dice_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Roll_20_Dice_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"6",ROOT(1));

result = vpx_method_Replace_20_NULL(PARAMETERS,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Roll_20_Dice_case_1_local_7_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Roll_20_Dice_case_1_local_7_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"1",ROOT(2));

result = vpx_method_Random_20_Between(PARAMETERS,TERMINAL(2),TERMINAL(0),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Roll_20_Dice_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Roll_20_Dice_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

if( (repeatLimit = vpx_multiplex(1,TERMINAL(1))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Roll_20_Dice_case_1_local_7_case_1_local_2(PARAMETERS,TERMINAL(0),LIST(1),ROOT(3));
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

enum opTrigger vpx_method_Roll_20_Dice(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(10)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_method_Roll_20_Dice_case_1_local_2(PARAMETERS,TERMINAL(1),ROOT(3));

result = vpx_method_Make_20_Count(PARAMETERS,TERMINAL(3),ROOT(4));

result = vpx_method_Roll_20_Dice_case_1_local_4(PARAMETERS,TERMINAL(2),ROOT(5));

result = vpx_method_Make_20_Count(PARAMETERS,TERMINAL(5),ROOT(6));

result = vpx_method_Roll_20_Dice_case_1_local_6(PARAMETERS,TERMINAL(0),ROOT(7));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(6))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Roll_20_Dice_case_1_local_7(PARAMETERS,TERMINAL(7),TERMINAL(4),LIST(6),ROOT(8));
LISTROOT(8,0)
REPEATFINISH
LISTROOTFINISH(8,0)
LISTROOTEND
} else {
ROOTEMPTY(8)
}

result = vpx_method__28_One_29_(PARAMETERS,TERMINAL(8),ROOT(9));

result = kSuccess;

OUTPUT(0,TERMINAL(9))
FOOTERSINGLECASE(10)
}

enum opTrigger vpx_method_Rad_20_To_20_Deg(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_pi,0,1,ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_div,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_constant(PARAMETERS,"180",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP__2A_,2,1,TERMINAL(2),TERMINAL(3),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Deg_20_To_20_Rad(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"180",ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_div,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_pi,0,1,ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP__2A_,2,1,TERMINAL(2),TERMINAL(3),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_test_2D_bit_3F_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"2",ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_power,2,1,TERMINAL(2),TERMINAL(1),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_test_2D_one_3F_,2,1,TERMINAL(0),TERMINAL(3),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_bit_2D_without_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_bit_2D_without_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_test_2D_one_3F_,2,0,TERMINAL(0),TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP__2D2D_,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_constant(PARAMETERS,"TRUE",ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
OUTPUT(1,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_bit_2D_without_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_bit_2D_without_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"FALSE",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(0))
OUTPUT(1,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_bit_2D_without(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_bit_2D_without_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1))
vpx_method_bit_2D_without_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1);
return outcome;
}

enum opTrigger vpx_method_Half(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"2",ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_div,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Int(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_trunc,1,2,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Odd_3F_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"2",ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_div,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_method_Int(PARAMETERS,TERMINAL(0),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_idiv,2,2,TERMINAL(3),TERMINAL(1),ROOT(4),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP__213D_,2,1,TERMINAL(2),TERMINAL(4),ROOT(6));

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTERSINGLECASE(7)
}

enum opTrigger vpx_method_x_2A_pi(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Default_20_Zero(PARAMETERS,TERMINAL(0),ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_pi,0,1,ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP__2A_,2,1,TERMINAL(1),TERMINAL(2),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Unique_20_Name_20_From_20_List_case_1_local_2_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Unique_20_Name_20_From_20_List_case_1_local_2_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\" #\"",ROOT(1));

result = vpx_method__22_Split_20_At_22_(PARAMETERS,TERMINAL(0),TERMINAL(1),ROOT(2),ROOT(3),ROOT(4));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_from_2D_string,1,1,TERMINAL(4),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_integer_3F_,1,0,TERMINAL(5));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTER(6)
}

enum opTrigger vpx_method_Unique_20_Name_20_From_20_List_case_1_local_2_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Unique_20_Name_20_From_20_List_case_1_local_2_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"1",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Unique_20_Name_20_From_20_List_case_1_local_2_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Unique_20_Name_20_From_20_List_case_1_local_2_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Unique_20_Name_20_From_20_List_case_1_local_2_case_1_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Unique_20_Name_20_From_20_List_case_1_local_2_case_1_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Unique_20_Name_20_From_20_List_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Unique_20_Name_20_From_20_List_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP__22_in_22_,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_match(PARAMETERS,"0",TERMINAL(2));
NEXTCASEONSUCCESS

result = vpx_method_Unique_20_Name_20_From_20_List_case_1_local_2_case_1_local_4(PARAMETERS,TERMINAL(0),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_Unique_20_Name_20_From_20_List_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Unique_20_Name_20_From_20_List_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

OUTPUT(0,NONE)
FOOTERWITHNONE(2)
}

enum opTrigger vpx_method_Unique_20_Name_20_From_20_List_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Unique_20_Name_20_From_20_List_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Unique_20_Name_20_From_20_List_case_1_local_2_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Unique_20_Name_20_From_20_List_case_1_local_2_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Unique_20_Name_20_From_20_List_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Unique_20_Name_20_From_20_List_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"(  )",TERMINAL(0));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Unique_20_Name_20_From_20_List_case_1_local_3_case_2_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Unique_20_Name_20_From_20_List_case_1_local_3_case_2_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP__28_in_29_,2,1,TERMINAL(1),TERMINAL(0),ROOT(2));

result = vpx_match(PARAMETERS,"0",TERMINAL(2));
NEXTCASEONFAILURE

result = kSuccess;
FINISHONSUCCESS

OUTPUT(0,TERMINAL(0))
FOOTER(3)
}

enum opTrigger vpx_method_Unique_20_Name_20_From_20_List_case_1_local_3_case_2_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Unique_20_Name_20_From_20_List_case_1_local_3_case_2_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP__2B_1,1,1,TERMINAL(0),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Unique_20_Name_20_From_20_List_case_1_local_3_case_2_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Unique_20_Name_20_From_20_List_case_1_local_3_case_2_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Unique_20_Name_20_From_20_List_case_1_local_3_case_2_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Unique_20_Name_20_From_20_List_case_1_local_3_case_2_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Unique_20_Name_20_From_20_List_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Unique_20_Name_20_From_20_List_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"TRUE",ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_sort,2,1,TERMINAL(0),TERMINAL(2),ROOT(3));

result = vpx_constant(PARAMETERS,"1",ROOT(4));

REPEATBEGIN
LOOPTERMINALBEGIN(1)
LOOPTERMINAL(0,4,5)
result = vpx_method_Unique_20_Name_20_From_20_List_case_1_local_3_case_2_local_5(PARAMETERS,LOOP(0),TERMINAL(3),ROOT(5));
REPEATFINISH

result = vpx_constant(PARAMETERS,"\" #\"",ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP_to_2D_string,1,1,TERMINAL(5),ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,3,1,TERMINAL(1),TERMINAL(6),TERMINAL(7),ROOT(8));

result = kSuccess;

OUTPUT(0,TERMINAL(8))
FOOTER(9)
}

enum opTrigger vpx_method_Unique_20_Name_20_From_20_List_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Unique_20_Name_20_From_20_List_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Unique_20_Name_20_From_20_List_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Unique_20_Name_20_From_20_List_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Unique_20_Name_20_From_20_List(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

if( (repeatLimit = vpx_multiplex(1,TERMINAL(0))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Unique_20_Name_20_From_20_List_case_1_local_2(PARAMETERS,LIST(0),TERMINAL(1),ROOT(2));
LISTROOT(2,0)
REPEATFINISH
LISTROOTFINISH(2,0)
LISTROOTEND
} else {
ROOTEMPTY(2)
}

result = vpx_method_Unique_20_Name_20_From_20_List_case_1_local_3(PARAMETERS,TERMINAL(2),TERMINAL(1),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method__28_Get_20_Setting_29__case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method__28_Get_20_Setting_29__case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,2,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP__3D_,2,1,TERMINAL(2),TERMINAL(1),ROOT(4));

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(4));
FINISHONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(3))
OUTPUT(1,TERMINAL(4))
FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method__28_Get_20_Setting_29_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

if( (repeatLimit = vpx_multiplex(1,TERMINAL(0))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method__28_Get_20_Setting_29__case_1_local_2(PARAMETERS,LIST(0),TERMINAL(1),ROOT(2),ROOT(3));
REPEATFINISH
} else {
ROOTNULL(2,NULL)
ROOTNULL(3,NULL)
}

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(3));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method__28_Set_20_Setting_29__case_1_local_2_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method__28_Set_20_Setting_29__case_1_local_2_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,2,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP__3D_,2,0,TERMINAL(3),TERMINAL(2));
NEXTCASEONFAILURE

result = kSuccess;
FINISHONSUCCESS

OUTPUT(0,TERMINAL(1))
FOOTER(5)
}

enum opTrigger vpx_method__28_Set_20_Setting_29__case_1_local_2_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method__28_Set_20_Setting_29__case_1_local_2_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
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

enum opTrigger vpx_method__28_Set_20_Setting_29__case_1_local_2_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method__28_Set_20_Setting_29__case_1_local_2_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method__28_Set_20_Setting_29__case_1_local_2_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
vpx_method__28_Set_20_Setting_29__case_1_local_2_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0);
return outcome;
}

enum opTrigger vpx_method__28_Set_20_Setting_29__case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method__28_Set_20_Setting_29__case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Make_20_Count(PARAMETERS,TERMINAL(0),ROOT(2));

if( (repeatLimit = vpx_multiplex(2,TERMINAL(0),TERMINAL(2))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method__28_Set_20_Setting_29__case_1_local_2_case_1_local_3(PARAMETERS,LIST(0),LIST(2),TERMINAL(1),ROOT(3));
REPEATFINISH
} else {
ROOTNULL(3,NULL)
}

result = vpx_call_primitive(PARAMETERS,VPLP_integer_3F_,1,0,TERMINAL(3));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(0))
OUTPUT(1,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method__28_Set_20_Setting_29__case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method__28_Set_20_Setting_29__case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(1),TERMINAL(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_attach_2D_r,2,1,TERMINAL(0),TERMINAL(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP__28_length_29_,1,1,TERMINAL(4),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
OUTPUT(1,TERMINAL(5))
FOOTER(6)
}

enum opTrigger vpx_method__28_Set_20_Setting_29__case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method__28_Set_20_Setting_29__case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method__28_Set_20_Setting_29__case_1_local_2_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1))
vpx_method__28_Set_20_Setting_29__case_1_local_2_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1);
return outcome;
}

enum opTrigger vpx_method__28_Set_20_Setting_29__case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method__28_Set_20_Setting_29__case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_method__28_Set_20_Setting_29__case_1_local_2(PARAMETERS,TERMINAL(0),TERMINAL(1),ROOT(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(1),TERMINAL(2),ROOT(5));

result = vpx_method__28_Safe_20_Set_2129_(PARAMETERS,TERMINAL(3),TERMINAL(4),TERMINAL(5),ROOT(6));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTER(7)
}

enum opTrigger vpx_method__28_Set_20_Setting_29__case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method__28_Set_20_Setting_29__case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
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

enum opTrigger vpx_method__28_Set_20_Setting_29_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method__28_Set_20_Setting_29__case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
vpx_method__28_Set_20_Setting_29__case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0);
return outcome;
}

enum opTrigger vpx_method__28_Remove_20_Setting_29__case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method__28_Remove_20_Setting_29__case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,2,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP__3D_,2,0,TERMINAL(3),TERMINAL(2));
NEXTCASEONFAILURE

result = kSuccess;
FINISHONSUCCESS

OUTPUT(0,TERMINAL(1))
FOOTER(5)
}

enum opTrigger vpx_method__28_Remove_20_Setting_29__case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method__28_Remove_20_Setting_29__case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
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

enum opTrigger vpx_method__28_Remove_20_Setting_29__case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method__28_Remove_20_Setting_29__case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method__28_Remove_20_Setting_29__case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
vpx_method__28_Remove_20_Setting_29__case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0);
return outcome;
}

enum opTrigger vpx_method__28_Remove_20_Setting_29__case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method__28_Remove_20_Setting_29__case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Make_20_Count(PARAMETERS,TERMINAL(0),ROOT(2));

if( (repeatLimit = vpx_multiplex(2,TERMINAL(0),TERMINAL(2))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method__28_Remove_20_Setting_29__case_1_local_3(PARAMETERS,LIST(0),LIST(2),TERMINAL(1),ROOT(3));
REPEATFINISH
} else {
ROOTNULL(3,NULL)
}

result = vpx_call_primitive(PARAMETERS,VPLP_integer_3F_,1,0,TERMINAL(3));
FAILONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_detach_2D_nth,2,2,TERMINAL(0),TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,2,TERMINAL(5),ROOT(6),ROOT(7));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
OUTPUT(1,TERMINAL(7))
FOOTER(8)
}

enum opTrigger vpx_method__28_Remove_20_Setting_29__case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method__28_Remove_20_Setting_29__case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADERWITHNONE(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(0))
OUTPUT(1,NONE)
FOOTERWITHNONE(2)
}

enum opTrigger vpx_method__28_Remove_20_Setting_29_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method__28_Remove_20_Setting_29__case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1))
vpx_method__28_Remove_20_Setting_29__case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1);
return outcome;
}

enum opTrigger vpx_method_New_20_Callback(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_method_Default_20_List(PARAMETERS,TERMINAL(1),ROOT(3));

result = vpx_method_Default_20_Zero(PARAMETERS,TERMINAL(2),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,3,1,TERMINAL(0),TERMINAL(3),TERMINAL(4),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Add_20_Attachment_20_To_20_Callback_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Add_20_Attachment_20_To_20_Callback_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"(  )",TERMINAL(0));
NEXTCASEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_detach_2D_l,1,2,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
OUTPUT(1,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Add_20_Attachment_20_To_20_Callback_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Add_20_Attachment_20_To_20_Callback_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"(  )",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
OUTPUT(1,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Add_20_Attachment_20_To_20_Callback_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Add_20_Attachment_20_To_20_Callback_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Add_20_Attachment_20_To_20_Callback_case_1_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1))
vpx_method_Add_20_Attachment_20_To_20_Callback_case_1_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1);
return outcome;
}

enum opTrigger vpx_method_Add_20_Attachment_20_To_20_Callback_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Add_20_Attachment_20_To_20_Callback_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_list_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_match(PARAMETERS,"(  )",TERMINAL(0));
NEXTCASEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_detach_2D_l,1,2,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_method_Add_20_Attachment_20_To_20_Callback_case_1_local_5(PARAMETERS,TERMINAL(4),ROOT(5),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP_attach_2D_r,2,1,TERMINAL(5),TERMINAL(2),ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP_attach_2D_l,3,1,TERMINAL(3),TERMINAL(7),TERMINAL(6),ROOT(8));

result = kSuccess;

OUTPUT(0,TERMINAL(8))
FOOTER(9)
}

enum opTrigger vpx_method_Add_20_Attachment_20_To_20_Callback_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Add_20_Attachment_20_To_20_Callback_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Attachment_20_Value,3,0,TERMINAL(0),TERMINAL(1),TERMINAL(2));

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(3)
}

enum opTrigger vpx_method_Add_20_Attachment_20_To_20_Callback_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Add_20_Attachment_20_To_20_Callback_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_string_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_pack,1,1,TERMINAL(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(0),TERMINAL(3),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Add_20_Attachment_20_To_20_Callback_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Add_20_Attachment_20_To_20_Callback_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
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

enum opTrigger vpx_method_Add_20_Attachment_20_To_20_Callback(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Add_20_Attachment_20_To_20_Callback_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
if(vpx_method_Add_20_Attachment_20_To_20_Callback_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
if(vpx_method_Add_20_Attachment_20_To_20_Callback_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
vpx_method_Add_20_Attachment_20_To_20_Callback_case_4(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0);
return outcome;
}

enum opTrigger vpx_method_Execute_20_Callback_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1,V_Object *root2);
enum opTrigger vpx_method_Execute_20_Callback_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1,V_Object *root2)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP__28_length_29_,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"1",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,1,TERMINAL(0),ROOT(2));

result = vpx_constant(PARAMETERS,"(  )",ROOT(3));

result = vpx_constant(PARAMETERS,"0",ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
OUTPUT(1,TERMINAL(3))
OUTPUT(2,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Execute_20_Callback_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1,V_Object *root2);
enum opTrigger vpx_method_Execute_20_Callback_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1,V_Object *root2)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP__28_length_29_,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"2",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,2,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_constant(PARAMETERS,"0",ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
OUTPUT(1,TERMINAL(3))
OUTPUT(2,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Execute_20_Callback_case_1_local_3_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1,V_Object *root2);
enum opTrigger vpx_method_Execute_20_Callback_case_1_local_3_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1,V_Object *root2)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP__28_length_29_,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"3",TERMINAL(1));
FAILONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,3,TERMINAL(0),ROOT(2),ROOT(3),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
OUTPUT(1,TERMINAL(3))
OUTPUT(2,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Execute_20_Callback_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1,V_Object *root2);
enum opTrigger vpx_method_Execute_20_Callback_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1,V_Object *root2)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Execute_20_Callback_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1,root2))
if(vpx_method_Execute_20_Callback_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1,root2))
vpx_method_Execute_20_Callback_case_1_local_3_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1,root2);
return outcome;
}

enum opTrigger vpx_method_Execute_20_Callback_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Execute_20_Callback_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_list_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_method_Execute_20_Callback_case_1_local_3(PARAMETERS,TERMINAL(0),ROOT(1),ROOT(2),ROOT(3));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_call,3,1,TERMINAL(1),TERMINAL(2),TERMINAL(3),ROOT(4));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Execute_20_Callback_case_2_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Execute_20_Callback_case_2_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Execute_20_Callback_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Execute_20_Callback_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_method_Execute_20_Callback_case_2_local_3(PARAMETERS,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Call,1,0,TERMINAL(0));

result = vpx_constant(PARAMETERS,"(  )",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Execute_20_Callback_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Execute_20_Callback_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_string_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_call_inject_method(PARAMETERS,INJECT(0),0,0);
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"(  )",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Execute_20_Callback_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Execute_20_Callback_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"(  )",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Execute_20_Callback(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Execute_20_Callback_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_Execute_20_Callback_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_Execute_20_Callback_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Execute_20_Callback_case_4(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Execute_20_Callback_20_With_20_Attachments_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Execute_20_Callback_20_With_20_Attachments_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
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

enum opTrigger vpx_method_Execute_20_Callback_20_With_20_Attachments(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

if( (repeatLimit = vpx_multiplex(1,TERMINAL(1))) ){
REPEATBEGINWITHCOUNTER
LOOPTERMINALBEGIN(1)
LOOPTERMINAL(0,0,2)
result = vpx_method_Execute_20_Callback_20_With_20_Attachments_case_1_local_2(PARAMETERS,LOOP(0),LIST(1),ROOT(2));
REPEATFINISH
} else {
ROOTNULL(2,TERMINAL(0))
}

result = vpx_method_Execute_20_Callback(PARAMETERS,TERMINAL(2),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method__28_Unique_29__case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method__28_Unique_29__case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP__28_in_29_,2,1,TERMINAL(1),TERMINAL(0),ROOT(2));

result = vpx_match(PARAMETERS,"0",TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_attach_2D_r,2,1,TERMINAL(1),TERMINAL(0),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method__28_Unique_29__case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method__28_Unique_29__case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method__28_Unique_29__case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method__28_Unique_29__case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method__28_Unique_29__case_1_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method__28_Unique_29__case_1_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method__28_Unique_29_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( )",ROOT(1));

result = vpx_method__28_Check_29_(PARAMETERS,TERMINAL(0),ROOT(2));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(2))) ){
REPEATBEGINWITHCOUNTER
LOOPTERMINALBEGIN(1)
LOOPTERMINAL(0,1,3)
result = vpx_method__28_Unique_29__case_1_local_4(PARAMETERS,LIST(2),LOOP(0),ROOT(3));
REPEATFINISH
} else {
ROOTNULL(3,TERMINAL(1))
}

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Is_20_Or_20_Is_20_Descendant_3F__case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Is_20_Or_20_Is_20_Descendant_3F__case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(0),ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Is_20_Or_20_Is_20_Descendant_3F__case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Is_20_Or_20_Is_20_Descendant_3F__case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(1)
}

enum opTrigger vpx_method_Is_20_Or_20_Is_20_Descendant_3F__case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Is_20_Or_20_Is_20_Descendant_3F__case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Is_20_Or_20_Is_20_Descendant_3F__case_1_local_2_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Is_20_Or_20_Is_20_Descendant_3F__case_1_local_2_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Is_20_Or_20_Is_20_Descendant_3F__case_1_local_4_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Is_20_Or_20_Is_20_Descendant_3F__case_1_local_4_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(0),ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Is_20_Or_20_Is_20_Descendant_3F__case_1_local_4_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Is_20_Or_20_Is_20_Descendant_3F__case_1_local_4_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(1)
}

enum opTrigger vpx_method_Is_20_Or_20_Is_20_Descendant_3F__case_1_local_4_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Is_20_Or_20_Is_20_Descendant_3F__case_1_local_4_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Is_20_Or_20_Is_20_Descendant_3F__case_1_local_4_case_1_local_2_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Is_20_Or_20_Is_20_Descendant_3F__case_1_local_4_case_1_local_2_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Is_20_Or_20_Is_20_Descendant_3F__case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Is_20_Or_20_Is_20_Descendant_3F__case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Is_20_Or_20_Is_20_Descendant_3F__case_1_local_4_case_1_local_2(PARAMETERS,TERMINAL(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP__3D_,2,0,TERMINAL(0),TERMINAL(2));
NEXTCASEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_descendants,1,1,TERMINAL(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_attach_2D_l,2,1,TERMINAL(2),TERMINAL(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP__28_in_29_,2,1,TERMINAL(4),TERMINAL(0),ROOT(5));

result = vpx_match(PARAMETERS,"0",TERMINAL(5));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"FALSE",ROOT(6));

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTER(7)
}

enum opTrigger vpx_method_Is_20_Or_20_Is_20_Descendant_3F__case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Is_20_Or_20_Is_20_Descendant_3F__case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"TRUE",ROOT(2));

result = kSuccess;
FINISHONSUCCESS

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Is_20_Or_20_Is_20_Descendant_3F__case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Is_20_Or_20_Is_20_Descendant_3F__case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Is_20_Or_20_Is_20_Descendant_3F__case_1_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Is_20_Or_20_Is_20_Descendant_3F__case_1_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Is_20_Or_20_Is_20_Descendant_3F_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Is_20_Or_20_Is_20_Descendant_3F__case_1_local_2(PARAMETERS,TERMINAL(0),ROOT(2));

result = vpx_method__28_Check_29_(PARAMETERS,TERMINAL(1),ROOT(3));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(3))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Is_20_Or_20_Is_20_Descendant_3F__case_1_local_4(PARAMETERS,TERMINAL(2),LIST(3),ROOT(4));
REPEATFINISH
} else {
ROOTNULL(4,NULL)
}

result = vpx_match(PARAMETERS,"FALSE",TERMINAL(4));
FAILONSUCCESS

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method__22_Replace_22__case_1_local_2_case_1_local_2_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method__22_Replace_22__case_1_local_2_case_1_local_2_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

if( (repeatLimit = vpx_multiplex(1,TERMINAL(1))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method__22_Check_22_(PARAMETERS,LIST(1),ROOT(2));
LISTROOT(2,0)
REPEATFINISH
LISTROOTFINISH(2,0)
LISTROOTEND
} else {
ROOTEMPTY(2)
}

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,2,TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_method__22_Split_20_At_22_(PARAMETERS,TERMINAL(0),TERMINAL(3),ROOT(5),ROOT(6),ROOT(7));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,3,1,TERMINAL(5),TERMINAL(4),TERMINAL(7),ROOT(8));

result = kSuccess;

OUTPUT(0,TERMINAL(8))
FOOTER(9)
}

enum opTrigger vpx_method__22_Replace_22__case_1_local_2_case_1_local_2_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method__22_Replace_22__case_1_local_2_case_1_local_2_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;
FINISHONSUCCESS

OUTPUT(0,TERMINAL(0))
FOOTER(2)
}

enum opTrigger vpx_method__22_Replace_22__case_1_local_2_case_1_local_2_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method__22_Replace_22__case_1_local_2_case_1_local_2_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method__22_Replace_22__case_1_local_2_case_1_local_2_case_1_local_2_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method__22_Replace_22__case_1_local_2_case_1_local_2_case_1_local_2_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method__22_Replace_22__case_1_local_2_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method__22_Replace_22__case_1_local_2_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

REPEATBEGIN
LOOPTERMINALBEGIN(1)
LOOPTERMINAL(0,0,2)
result = vpx_method__22_Replace_22__case_1_local_2_case_1_local_2_case_1_local_2(PARAMETERS,LOOP(0),TERMINAL(1),ROOT(2));
REPEATFINISH

result = vpx_call_primitive(PARAMETERS,VPLP__3D_,2,0,TERMINAL(0),TERMINAL(2));
FINISHONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method__22_Replace_22__case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method__22_Replace_22__case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

REPEATBEGIN
LOOPTERMINALBEGIN(1)
LOOPTERMINAL(0,0,2)
result = vpx_method__22_Replace_22__case_1_local_2_case_1_local_2(PARAMETERS,LOOP(0),TERMINAL(1),ROOT(2));
REPEATFINISH

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method__22_Replace_22__case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method__22_Replace_22__case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

if( (repeatLimit = vpx_multiplex(1,TERMINAL(1))) ){
REPEATBEGINWITHCOUNTER
LOOPTERMINALBEGIN(1)
LOOPTERMINAL(0,0,2)
result = vpx_method__22_Replace_22__case_1_local_2(PARAMETERS,LOOP(0),LIST(1),ROOT(2));
REPEATFINISH
} else {
ROOTNULL(2,TERMINAL(0))
}

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method__22_Replace_22__case_2_local_2_case_1_local_2_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method__22_Replace_22__case_2_local_2_case_1_local_2_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

if( (repeatLimit = vpx_multiplex(1,TERMINAL(1))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method__22_Check_22_(PARAMETERS,LIST(1),ROOT(2));
LISTROOT(2,0)
REPEATFINISH
LISTROOTFINISH(2,0)
LISTROOTEND
} else {
ROOTEMPTY(2)
}

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,2,TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_method__22_Split_20_At_22_(PARAMETERS,TERMINAL(0),TERMINAL(3),ROOT(5),ROOT(6),ROOT(7));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,3,1,TERMINAL(5),TERMINAL(4),TERMINAL(7),ROOT(8));

result = kSuccess;

OUTPUT(0,TERMINAL(8))
FOOTER(9)
}

enum opTrigger vpx_method__22_Replace_22__case_2_local_2_case_1_local_2_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method__22_Replace_22__case_2_local_2_case_1_local_2_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;
FINISHONSUCCESS

OUTPUT(0,TERMINAL(0))
FOOTER(2)
}

enum opTrigger vpx_method__22_Replace_22__case_2_local_2_case_1_local_2_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method__22_Replace_22__case_2_local_2_case_1_local_2_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method__22_Replace_22__case_2_local_2_case_1_local_2_case_1_local_2_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method__22_Replace_22__case_2_local_2_case_1_local_2_case_1_local_2_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method__22_Replace_22__case_2_local_2_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method__22_Replace_22__case_2_local_2_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

REPEATBEGIN
LOOPTERMINALBEGIN(1)
LOOPTERMINAL(0,0,2)
result = vpx_method__22_Replace_22__case_2_local_2_case_1_local_2_case_1_local_2(PARAMETERS,LOOP(0),TERMINAL(1),ROOT(2));
REPEATFINISH

result = vpx_call_primitive(PARAMETERS,VPLP__3D_,2,0,TERMINAL(0),TERMINAL(2));
FINISHONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method__22_Replace_22__case_2_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method__22_Replace_22__case_2_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

REPEATBEGIN
LOOPTERMINALBEGIN(1)
LOOPTERMINAL(0,0,2)
result = vpx_method__22_Replace_22__case_2_local_2_case_1_local_2(PARAMETERS,LOOP(0),TERMINAL(1),ROOT(2));
REPEATFINISH

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method__22_Replace_22__case_2_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method__22_Replace_22__case_2_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP__3D_,2,0,TERMINAL(0),TERMINAL(1));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(3)
}

enum opTrigger vpx_method__22_Replace_22__case_2_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method__22_Replace_22__case_2_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_method__22_Replace_22_(PARAMETERS,TERMINAL(1),TERMINAL(2),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method__22_Replace_22__case_2_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method__22_Replace_22__case_2_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method__22_Replace_22__case_2_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
vpx_method__22_Replace_22__case_2_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0);
return outcome;
}

enum opTrigger vpx_method__22_Replace_22__case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method__22_Replace_22__case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

if( (repeatLimit = vpx_multiplex(1,TERMINAL(1))) ){
REPEATBEGINWITHCOUNTER
LOOPTERMINALBEGIN(1)
LOOPTERMINAL(0,0,2)
result = vpx_method__22_Replace_22__case_2_local_2(PARAMETERS,LOOP(0),LIST(1),ROOT(2));
REPEATFINISH
} else {
ROOTNULL(2,TERMINAL(0))
}

result = vpx_method__22_Replace_22__case_2_local_3(PARAMETERS,TERMINAL(0),TERMINAL(2),TERMINAL(1),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method__22_Replace_22_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method__22_Replace_22__case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method__22_Replace_22__case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Get_20_Return_20_String_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Get_20_Return_20_String_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"CR",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"( 13 )",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Get_20_Return_20_String_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Get_20_Return_20_String_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"LF",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"( 10 )",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Get_20_Return_20_String_case_1_local_2_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Get_20_Return_20_String_case_1_local_2_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"CRLF",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"( 13 10 )",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Get_20_Return_20_String_case_1_local_2_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Get_20_Return_20_String_case_1_local_2_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"Mac",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"( 13 )",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Get_20_Return_20_String_case_1_local_2_case_5(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Get_20_Return_20_String_case_1_local_2_case_5(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"Unix",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"( 10 )",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Get_20_Return_20_String_case_1_local_2_case_6(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Get_20_Return_20_String_case_1_local_2_case_6(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"Windows",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"( 13 10 )",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Get_20_Return_20_String_case_1_local_2_case_7(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Get_20_Return_20_String_case_1_local_2_case_7(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_list_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(1)
}

enum opTrigger vpx_method_Get_20_Return_20_String_case_1_local_2_case_8(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Get_20_Return_20_String_case_1_local_2_case_8(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_string_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_to_2D_ascii,1,1,TERMINAL(0),ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Get_20_Return_20_String_case_1_local_2_case_9(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Get_20_Return_20_String_case_1_local_2_case_9(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_integer_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_pack,1,1,TERMINAL(0),ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Get_20_Return_20_String_case_1_local_2_case_10(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Get_20_Return_20_String_case_1_local_2_case_10(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( 13 )",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Get_20_Return_20_String_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Get_20_Return_20_String_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Get_20_Return_20_String_case_1_local_2_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_Get_20_Return_20_String_case_1_local_2_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_Get_20_Return_20_String_case_1_local_2_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_Get_20_Return_20_String_case_1_local_2_case_4(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_Get_20_Return_20_String_case_1_local_2_case_5(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_Get_20_Return_20_String_case_1_local_2_case_6(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_Get_20_Return_20_String_case_1_local_2_case_7(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_Get_20_Return_20_String_case_1_local_2_case_8(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_Get_20_Return_20_String_case_1_local_2_case_9(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Get_20_Return_20_String_case_1_local_2_case_10(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Get_20_Return_20_String(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Get_20_Return_20_String_case_1_local_2(PARAMETERS,TERMINAL(0),ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_from_2D_ascii,1,1,TERMINAL(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Normalize_20_Returns_20_In_20_String_case_1_local_3_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Normalize_20_Returns_20_In_20_String_case_1_local_3_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"CRLF",ROOT(1));

result = vpx_method_Get_20_Return_20_String(PARAMETERS,TERMINAL(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP__3D_,2,0,TERMINAL(0),TERMINAL(2));
NEXTCASEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(2),TERMINAL(0),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,1,1,TERMINAL(3),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Normalize_20_Returns_20_In_20_String_case_1_local_3_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Normalize_20_Returns_20_In_20_String_case_1_local_3_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( )",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Normalize_20_Returns_20_In_20_String_case_1_local_3_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Normalize_20_Returns_20_In_20_String_case_1_local_3_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Normalize_20_Returns_20_In_20_String_case_1_local_3_case_1_local_2_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Normalize_20_Returns_20_In_20_String_case_1_local_3_case_1_local_2_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Normalize_20_Returns_20_In_20_String_case_1_local_3_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Normalize_20_Returns_20_In_20_String_case_1_local_3_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"CR",ROOT(2));

result = vpx_method_Get_20_Return_20_String(PARAMETERS,TERMINAL(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP__3D_,2,0,TERMINAL(1),TERMINAL(3));
NEXTCASEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(3),TERMINAL(1),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_attach_2D_r,2,1,TERMINAL(0),TERMINAL(4),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTER(6)
}

enum opTrigger vpx_method_Normalize_20_Returns_20_In_20_String_case_1_local_3_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Normalize_20_Returns_20_In_20_String_case_1_local_3_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(2)
}

enum opTrigger vpx_method_Normalize_20_Returns_20_In_20_String_case_1_local_3_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Normalize_20_Returns_20_In_20_String_case_1_local_3_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Normalize_20_Returns_20_In_20_String_case_1_local_3_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Normalize_20_Returns_20_In_20_String_case_1_local_3_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Normalize_20_Returns_20_In_20_String_case_1_local_3_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Normalize_20_Returns_20_In_20_String_case_1_local_3_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"LF",ROOT(2));

result = vpx_method_Get_20_Return_20_String(PARAMETERS,TERMINAL(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP__3D_,2,0,TERMINAL(1),TERMINAL(3));
NEXTCASEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(3),TERMINAL(1),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_attach_2D_r,2,1,TERMINAL(0),TERMINAL(4),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTER(6)
}

enum opTrigger vpx_method_Normalize_20_Returns_20_In_20_String_case_1_local_3_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Normalize_20_Returns_20_In_20_String_case_1_local_3_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(2)
}

enum opTrigger vpx_method_Normalize_20_Returns_20_In_20_String_case_1_local_3_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Normalize_20_Returns_20_In_20_String_case_1_local_3_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Normalize_20_Returns_20_In_20_String_case_1_local_3_case_1_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Normalize_20_Returns_20_In_20_String_case_1_local_3_case_1_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Normalize_20_Returns_20_In_20_String_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Normalize_20_Returns_20_In_20_String_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Normalize_20_Returns_20_In_20_String_case_1_local_3_case_1_local_2(PARAMETERS,TERMINAL(0),ROOT(1));

result = vpx_method_Normalize_20_Returns_20_In_20_String_case_1_local_3_case_1_local_3(PARAMETERS,TERMINAL(1),TERMINAL(0),ROOT(2));

result = vpx_method_Normalize_20_Returns_20_In_20_String_case_1_local_3_case_1_local_4(PARAMETERS,TERMINAL(2),TERMINAL(0),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Normalize_20_Returns_20_In_20_String(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Get_20_Return_20_String(PARAMETERS,TERMINAL(1),ROOT(2));

result = vpx_method_Normalize_20_Returns_20_In_20_String_case_1_local_3(PARAMETERS,TERMINAL(2),ROOT(3));

result = vpx_method__22_Replace_22_(PARAMETERS,TERMINAL(0),TERMINAL(3),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Parse_20_Returns_20_Into_20_List(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(4)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Normalize_20_Returns_20_In_20_String(PARAMETERS,TERMINAL(0),NONE,ROOT(1));

result = vpx_method_Get_20_Return_20_String(PARAMETERS,NONE,ROOT(2));

result = vpx_method__22_Parse_22_(PARAMETERS,TERMINAL(1),TERMINAL(2),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASEWITHNONE(4)
}

enum opTrigger vpx_method_Get_20_External_20_Constant_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Get_20_External_20_Constant_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_list_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

if( (repeatLimit = vpx_multiplex(1,TERMINAL(0))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Get_20_External_20_Constant(PARAMETERS,LIST(0),ROOT(1));
FAILONFAILURE
LISTROOT(1,0)
REPEATFINISH
LISTROOTFINISH(1,0)
LISTROOTEND
} else {
ROOTEMPTY(1)
}

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Get_20_External_20_Constant_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Get_20_External_20_Constant_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
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

enum opTrigger vpx_method_Get_20_External_20_Constant_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Get_20_External_20_Constant_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_string_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_to_2D_external_2D_constant,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
NEXTCASEONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Get_20_External_20_Constant_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Get_20_External_20_Constant_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_string_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_byte_2D_length,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"4",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_string_2D_to_2D_integer,1,1,TERMINAL(0),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Get_20_External_20_Constant_case_5(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Get_20_External_20_Constant_case_5(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;
FAILONSUCCESS

OUTPUT(0,NONE)
FOOTERWITHNONE(1)
}

enum opTrigger vpx_method_Get_20_External_20_Constant(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Get_20_External_20_Constant_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_Get_20_External_20_Constant_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_Get_20_External_20_Constant_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_Get_20_External_20_Constant_case_4(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Get_20_External_20_Constant_case_5(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method__28_bit_2D_or_29__case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method__28_bit_2D_or_29__case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_method__28_Check_29_(PARAMETERS,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"( )",TERMINAL(1));
NEXTCASEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_detach_2D_l,1,2,TERMINAL(1),ROOT(2),ROOT(3));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(3))) ){
REPEATBEGINWITHCOUNTER
LOOPTERMINALBEGIN(1)
LOOPTERMINAL(0,2,4)
result = vpx_call_primitive(PARAMETERS,VPLP_bit_2D_or,2,1,LOOP(0),LIST(3),ROOT(4));
REPEATFINISH
} else {
ROOTNULL(4,TERMINAL(2))
}

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method__28_bit_2D_or_29__case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method__28_bit_2D_or_29__case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"0",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method__28_bit_2D_or_29_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method__28_bit_2D_or_29__case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method__28_bit_2D_or_29__case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}




	Nat4 tempAttribute_Key_20_Sort_20_Helper_2F_Key[] = {
0000000000, 0X00000020, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0000000000, 0000000000
	};


Nat4 VPLC_Key_20_Sort_20_Helper_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Key_20_Sort_20_Helper_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 200 300 } */
	tempAttribute = attribute_add("Key",tempClass,tempAttribute_Key_20_Sort_20_Helper_2F_Key,environment);
	tempAttribute = attribute_add("Value",tempClass,NULL,environment);
/* Stop Attributes */

/* NULL SUPER CLASS */
	return kNOERROR;
}

/* Start Universals: { 60 60 }{ 200 300 } */
enum opTrigger vpx_method_Key_20_Sort_20_Helper_2F_Sort_20_Key_20_Helper_20_List(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Default_20_FALSE(PARAMETERS,TERMINAL(1),ROOT(2));

result = vpx_constant(PARAMETERS,"Key",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_sort,3,1,TERMINAL(0),TERMINAL(2),TERMINAL(3),ROOT(4));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(4))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_get(PARAMETERS,kVPXValue_Value,LIST(4),ROOT(5),ROOT(6));
LISTROOT(6,0)
REPEATFINISH
LISTROOTFINISH(6,0)
LISTROOTEND
} else {
ROOTNULL(5,NULL)
ROOTEMPTY(6)
}

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTERSINGLECASE(7)
}

enum opTrigger vpx_method_Key_20_Sort_20_Helper_2F_Sort_20_Key_2D_Value_20_List_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Key_20_Sort_20_Helper_2F_Sort_20_Key_2D_Value_20_List_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(5)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,1,TERMINAL(0),ROOT(1));

result = vpx_instantiate(PARAMETERS,kVPXClass_Key_20_Sort_20_Helper,1,1,NONE,ROOT(2));

result = vpx_set(PARAMETERS,kVPXValue_Key,TERMINAL(2),TERMINAL(1),ROOT(3));

result = vpx_set(PARAMETERS,kVPXValue_Value,TERMINAL(2),TERMINAL(0),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASEWITHNONE(5)
}

enum opTrigger vpx_method_Key_20_Sort_20_Helper_2F_Sort_20_Key_2D_Value_20_List(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

if( (repeatLimit = vpx_multiplex(1,TERMINAL(0))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Key_20_Sort_20_Helper_2F_Sort_20_Key_2D_Value_20_List_case_1_local_2(PARAMETERS,LIST(0),ROOT(2));
LISTROOT(2,0)
REPEATFINISH
LISTROOTFINISH(2,0)
LISTROOTEND
} else {
ROOTEMPTY(2)
}

result = vpx_method_Key_20_Sort_20_Helper_2F_Sort_20_Key_20_Helper_20_List(PARAMETERS,TERMINAL(2),TERMINAL(1),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Key_20_Sort_20_Helper_2F_Sort_20_Instances_20_With_20_Key_20_Method_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Key_20_Sort_20_Helper_2F_Sort_20_Instances_20_With_20_Key_20_Method_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"/Get Name\"",ROOT(1));

result = vpx_method_Replace_20_NULL(PARAMETERS,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Key_20_Sort_20_Helper_2F_Sort_20_Instances_20_With_20_Key_20_Method_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Key_20_Sort_20_Helper_2F_Sort_20_Instances_20_With_20_Key_20_Method_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_inject_method(PARAMETERS,INJECT(1),1,1,TERMINAL(0),ROOT(2));

result = vpx_instantiate(PARAMETERS,kVPXClass_Key_20_Sort_20_Helper,1,1,NONE,ROOT(3));

result = vpx_set(PARAMETERS,kVPXValue_Key,TERMINAL(3),TERMINAL(2),ROOT(4));

result = vpx_set(PARAMETERS,kVPXValue_Value,TERMINAL(3),TERMINAL(0),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASEWITHNONE(6)
}

enum opTrigger vpx_method_Key_20_Sort_20_Helper_2F_Sort_20_Instances_20_With_20_Key_20_Method(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_method_Key_20_Sort_20_Helper_2F_Sort_20_Instances_20_With_20_Key_20_Method_case_1_local_2(PARAMETERS,TERMINAL(1),ROOT(3));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(0))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Key_20_Sort_20_Helper_2F_Sort_20_Instances_20_With_20_Key_20_Method_case_1_local_3(PARAMETERS,LIST(0),TERMINAL(3),ROOT(4));
LISTROOT(4,0)
REPEATFINISH
LISTROOTFINISH(4,0)
LISTROOTEND
} else {
ROOTEMPTY(4)
}

result = vpx_method_Key_20_Sort_20_Helper_2F_Sort_20_Key_20_Helper_20_List(PARAMETERS,TERMINAL(4),TERMINAL(2),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTERSINGLECASE(6)
}

/* Stop Universals */






Nat4	loadClasses_Common_20_Universals(V_Environment environment);
Nat4	loadClasses_Common_20_Universals(V_Environment environment)
{
	V_Class result = NULL;

	result = class_new("Key Sort Helper",environment);
	if(result == NULL) return kERROR;
	VPLC_Key_20_Sort_20_Helper_class_load(result,environment);
	return kNOERROR;

}

Nat4	loadUniversals_Common_20_Universals(V_Environment environment);
Nat4	loadUniversals_Common_20_Universals(V_Environment environment)
{
	V_Method result = NULL;

	result = method_new("Make Clone",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Make_20_Clone,NULL);

	result = method_new("Make Class",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Make_20_Class,NULL);

	result = method_new("Make Count",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Make_20_Count,NULL);

	result = method_new("To CString",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_To_20_CString,NULL);

	result = method_new("To PString",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_To_20_PString,NULL);

	result = method_new("Create Nib Window",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Create_20_Nib_20_Window,NULL);

	result = method_new("Open Nib Window",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Open_20_Nib_20_Window,NULL);

	result = method_new("Rect Size",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Rect_20_Size,NULL);

	result = method_new("Boolean To Integer",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Boolean_20_To_20_Integer,NULL);

	result = method_new("Integer To Boolean",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Integer_20_To_20_Boolean,NULL);

	result = method_new("Coerce Boolean",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Coerce_20_Boolean,NULL);

	result = method_new("Coerce Integer",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Coerce_20_Integer,NULL);

	result = method_new("Coerce Real",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Coerce_20_Real,NULL);

	result = method_new("Coerce Number",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Coerce_20_Number,NULL);

	result = method_new("Replace NULL",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Replace_20_NULL,NULL);

	result = method_new("Replace NULL No Copy",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Replace_20_NULL_20_No_20_Copy,NULL);

	result = method_new("\"Check\"",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method__22_Check_22_,NULL);

	result = method_new("\"Prefix\"",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method__22_Prefix_22_,NULL);

	result = method_new("\"Split At\"",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method__22_Split_20_At_22_,NULL);

	result = method_new("\"Suffix\"",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method__22_Suffix_22_,NULL);

	result = method_new("\"Trim\"",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method__22_Trim_22_,NULL);

	result = method_new("\"LTrim\"",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method__22_LTrim_22_,NULL);

	result = method_new("\"RTrim\"",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method__22_RTrim_22_,NULL);

	result = method_new("\"Parse\"",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method__22_Parse_22_,NULL);

	result = method_new("(\"All In\")",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method__2822_All_20_In_2229_,NULL);

	result = method_new("(\"ALL IN\")",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method__2822_ALL_20_IN_2229_,NULL);

	result = method_new("(Average)",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method__28_Average_29_,NULL);

	result = method_new("(Check)",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method__28_Check_29_,NULL);

	result = method_new("(Check Bounds)",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method__28_Check_20_Bounds_29_,NULL);

	result = method_new("(Ends)",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method__28_Ends_29_,NULL);

	result = method_new("(Flatten)",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method__28_Flatten_29_,NULL);

	result = method_new("(From String)",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method__28_From_20_String_29_,NULL);

	result = method_new("(One)",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method__28_One_29_,NULL);

	result = method_new("(Safe Get)",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method__28_Safe_20_Get_29_,NULL);

	result = method_new("(Safe Set!)",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method__28_Safe_20_Set_2129_,NULL);

	result = method_new("(Safe Split)",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method__28_Safe_20_Split_29_,NULL);

	result = method_new("(Sum)",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method__28_Sum_29_,NULL);

	result = method_new("(To Block)",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method__28_To_20_Block_29_,NULL);

	result = method_new("(To String)",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method__28_To_20_String_29_,NULL);

	result = method_new("(Without)",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method__28_Without_29_,NULL);

	result = method_new("(Detach Item)",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method__28_Detach_20_Item_29_,NULL);

	result = method_new("Default Zero",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Default_20_Zero,NULL);

	result = method_new("Default TRUE",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Default_20_TRUE,NULL);

	result = method_new("Default FALSE",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Default_20_FALSE,NULL);

	result = method_new("Default NULL",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Default_20_NULL,NULL);

	result = method_new("Default List",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Default_20_List,NULL);

	result = method_new("Is MacOS?",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Is_20_MacOS_3F_,NULL);

	result = method_new("Beep",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Beep,NULL);

	result = method_new("Speak",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Speak,NULL);

	result = method_new("Simple Speak",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Simple_20_Speak,NULL);

	result = method_new("Between",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Between,NULL);

	result = method_new("Between Bounds",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Between_20_Bounds,NULL);

	result = method_new("Between Wrap",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Between_20_Wrap,NULL);

	result = method_new("Random Between",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Random_20_Between,NULL);

	result = method_new("Flip Coin",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Flip_20_Coin,NULL);

	result = method_new("Roll Dice",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Roll_20_Dice,NULL);

	result = method_new("Rad To Deg",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Rad_20_To_20_Deg,NULL);

	result = method_new("Deg To Rad",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Deg_20_To_20_Rad,NULL);

	result = method_new("test-bit?",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_test_2D_bit_3F_,NULL);

	result = method_new("bit-without",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_bit_2D_without,NULL);

	result = method_new("Half",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Half,NULL);

	result = method_new("Int",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Int,NULL);

	result = method_new("Odd?",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Odd_3F_,NULL);

	result = method_new("x*pi",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_x_2A_pi,NULL);

	result = method_new("Unique Name From List",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Unique_20_Name_20_From_20_List,NULL);

	result = method_new("(Get Setting)",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method__28_Get_20_Setting_29_,NULL);

	result = method_new("(Set Setting)",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method__28_Set_20_Setting_29_,NULL);

	result = method_new("(Remove Setting)",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method__28_Remove_20_Setting_29_,NULL);

	result = method_new("New Callback",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_New_20_Callback,NULL);

	result = method_new("Add Attachment To Callback",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Add_20_Attachment_20_To_20_Callback,NULL);

	result = method_new("Execute Callback",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Execute_20_Callback,NULL);

	result = method_new("Execute Callback With Attachments",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Execute_20_Callback_20_With_20_Attachments,NULL);

	result = method_new("(Unique)",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method__28_Unique_29_,NULL);

	result = method_new("Is Or Is Descendant?",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Is_20_Or_20_Is_20_Descendant_3F_,NULL);

	result = method_new("\"Replace\"",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method__22_Replace_22_,NULL);

	result = method_new("Get Return String",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Get_20_Return_20_String,NULL);

	result = method_new("Normalize Returns In String",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Normalize_20_Returns_20_In_20_String,NULL);

	result = method_new("Parse Returns Into List",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Parse_20_Returns_20_Into_20_List,NULL);

	result = method_new("Get External Constant",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Get_20_External_20_Constant,NULL);

	result = method_new("(bit-or)",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method__28_bit_2D_or_29_,NULL);

	result = method_new("Key Sort Helper/Sort Key Helper List",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Key_20_Sort_20_Helper_2F_Sort_20_Key_20_Helper_20_List,NULL);

	result = method_new("Key Sort Helper/Sort Key-Value List",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Key_20_Sort_20_Helper_2F_Sort_20_Key_2D_Value_20_List,NULL);

	result = method_new("Key Sort Helper/Sort Instances With Key Method",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Key_20_Sort_20_Helper_2F_Sort_20_Instances_20_With_20_Key_20_Method,NULL);

	return kNOERROR;

}



Nat4	loadPersistents_Common_20_Universals(V_Environment environment);
Nat4	loadPersistents_Common_20_Universals(V_Environment environment)
{
	V_Value tempPersistent = NULL;
	V_Dictionary dictionary = environment->persistentsTable;

	return kNOERROR;

}

Nat4	load_Common_20_Universals(V_Environment environment);
Nat4	load_Common_20_Universals(V_Environment environment)
{

	loadClasses_Common_20_Universals(environment);
	loadUniversals_Common_20_Universals(environment);
	loadPersistents_Common_20_Universals(environment);
	return kNOERROR;

}

