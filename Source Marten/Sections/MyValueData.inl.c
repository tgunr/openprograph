/* A VPL Section File */
/*

MyValueData.inl.c
Copyright: 2004 Andescotia LLC

*/

#include "MartenInlineProject.h"

enum opTrigger vpx_method_Text_20_To_20_Object_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Text_20_To_20_Object_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(16)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_from_2D_string,1,1,TERMINAL(0),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(2),ROOT(3));

result = vpx_match(PARAMETERS,"string",TERMINAL(3));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"1",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_prefix,2,2,TERMINAL(2),TERMINAL(4),ROOT(5),ROOT(6));

result = vpx_match(PARAMETERS,"<",TERMINAL(5));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_suffix,2,2,TERMINAL(6),TERMINAL(4),ROOT(7),ROOT(8));

result = vpx_match(PARAMETERS,">",TERMINAL(8));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Classes,1,1,TERMINAL(1),ROOT(9));

result = vpx_constant(PARAMETERS,"Name",ROOT(10));

result = vpx_method_Find_20_Instance(PARAMETERS,TERMINAL(9),TERMINAL(10),TERMINAL(7),ROOT(11),ROOT(12));

result = vpx_match(PARAMETERS,"0",TERMINAL(11));
NEXTCASEONSUCCESS

result = vpx_get(PARAMETERS,kVPXValue_Record,TERMINAL(12),ROOT(13),ROOT(14));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_class_2D_instance,1,1,TERMINAL(14),ROOT(15));

result = kSuccess;

OUTPUT(0,TERMINAL(15))
FOOTER(16)
}

enum opTrigger vpx_method_Text_20_To_20_Object_case_2_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Text_20_To_20_Object_case_2_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(0),ROOT(2));

result = vpx_match(PARAMETERS,"string",TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_method_Text_20_To_20_Object(PARAMETERS,TERMINAL(0),TERMINAL(1),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_Text_20_To_20_Object_case_2_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Text_20_To_20_Object_case_2_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(2)
}

enum opTrigger vpx_method_Text_20_To_20_Object_case_2_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Text_20_To_20_Object_case_2_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Text_20_To_20_Object_case_2_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Text_20_To_20_Object_case_2_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Text_20_To_20_Object_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Text_20_To_20_Object_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_from_2D_string,1,1,TERMINAL(0),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_list_3F_,1,0,TERMINAL(2));
NEXTCASEONFAILURE

if( (repeatLimit = vpx_multiplex(1,TERMINAL(2))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Text_20_To_20_Object_case_2_local_4(PARAMETERS,LIST(2),TERMINAL(1),ROOT(3));
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

enum opTrigger vpx_method_Text_20_To_20_Object_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Text_20_To_20_Object_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_from_2D_string,1,1,TERMINAL(0),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Text_20_To_20_Object(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Text_20_To_20_Object_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
if(vpx_method_Text_20_To_20_Object_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Text_20_To_20_Object_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Object_20_To_20_Instance_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Object_20_To_20_Instance_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_archive_2D_to_2D_object,1,1,TERMINAL(0),ROOT(1));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Object_20_To_20_Instance_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Object_20_To_20_Instance_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Object_20_To_20_Instance_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Object_20_To_20_Instance_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Object_20_To_20_Instance_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Object_20_To_20_Instance_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Object_20_To_20_Instance_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Object_20_To_20_Instance_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_external_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_method_Object_20_To_20_Instance_case_1_local_3(PARAMETERS,TERMINAL(0),ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Object_20_To_20_Instance_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Object_20_To_20_Instance_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(8)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"Instance Value Data",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Attributes,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Class_20_Name,TERMINAL(2),ROOT(4),ROOT(5));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(3))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Object_20_To_20_Instance(PARAMETERS,LIST(3),ROOT(6));
LISTROOT(6,0)
REPEATFINISH
LISTROOTFINISH(6,0)
LISTROOTEND
} else {
ROOTEMPTY(6)
}

result = vpx_call_primitive(PARAMETERS,VPLP_list_2D_to_2D_inst,2,1,TERMINAL(5),TERMINAL(6),ROOT(7));

result = kSuccess;

OUTPUT(0,TERMINAL(7))
FOOTER(8)
}

enum opTrigger vpx_method_Object_20_To_20_Instance_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Object_20_To_20_Instance_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
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

enum opTrigger vpx_method_Object_20_To_20_Instance_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Object_20_To_20_Instance_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_list_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

if( (repeatLimit = vpx_multiplex(1,TERMINAL(0))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Object_20_To_20_Instance(PARAMETERS,LIST(0),ROOT(1));
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

enum opTrigger vpx_method_Object_20_To_20_Instance_case_5(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Object_20_To_20_Instance_case_5(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(1)
}

enum opTrigger vpx_method_Object_20_To_20_Instance(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Object_20_To_20_Instance_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_Object_20_To_20_Instance_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_Object_20_To_20_Instance_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_Object_20_To_20_Instance_case_4(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Object_20_To_20_Instance_case_5(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Get_20_Instances_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Get_20_Instances_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"Instance Value Data",TERMINAL(1));
FAILONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Attributes,TERMINAL(0),ROOT(2),ROOT(3));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(3))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Get_20_Instances(PARAMETERS,LIST(3),ROOT(4));
FAILONFAILURE
LISTROOT(4,0)
REPEATFINISH
LISTROOTFINISH(4,0)
LISTROOTEND
} else {
ROOTEMPTY(4)
}

result = vpx_method_Lists_20_To_20_List(PARAMETERS,TERMINAL(4),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_attach_2D_l,2,1,TERMINAL(2),TERMINAL(5),ROOT(6));

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTER(7)
}

enum opTrigger vpx_method_Get_20_Instances_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Get_20_Instances_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_list_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

if( (repeatLimit = vpx_multiplex(1,TERMINAL(0))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Get_20_Instances(PARAMETERS,LIST(0),ROOT(1));
LISTROOT(1,0)
REPEATFINISH
LISTROOTFINISH(1,0)
LISTROOTEND
} else {
ROOTEMPTY(1)
}

result = vpx_method_Lists_20_To_20_List(PARAMETERS,TERMINAL(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Get_20_Instances_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Get_20_Instances_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( )",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Get_20_Instances(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Get_20_Instances_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_Get_20_Instances_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Get_20_Instances_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Instance_20_To_20_Object_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Instance_20_To_20_Object_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(9)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_inst_2D_to_2D_list,1,2,TERMINAL(0),ROOT(2),ROOT(3));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(3))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Instance_20_To_20_Object(PARAMETERS,LIST(3),TERMINAL(1),ROOT(4));
FAILONFAILURE
LISTROOT(4,0)
REPEATFINISH
LISTROOTFINISH(4,0)
LISTROOTEND
} else {
ROOTEMPTY(4)
}

result = vpx_instantiate(PARAMETERS,kVPXClass_Instance_20_Value_20_Data,1,1,NONE,ROOT(5));

result = vpx_set(PARAMETERS,kVPXValue_Class_20_Name,TERMINAL(5),TERMINAL(2),ROOT(6));

result = vpx_set(PARAMETERS,kVPXValue_Attributes,TERMINAL(6),TERMINAL(4),ROOT(7));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Classes,1,1,TERMINAL(1),ROOT(8));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Register_20_With_20_Class,2,0,TERMINAL(7),TERMINAL(8));

result = kSuccess;

OUTPUT(0,TERMINAL(7))
FOOTERWITHNONE(9)
}

enum opTrigger vpx_method_Instance_20_To_20_Object_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Instance_20_To_20_Object_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_list_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

if( (repeatLimit = vpx_multiplex(1,TERMINAL(0))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Instance_20_To_20_Object(PARAMETERS,LIST(0),TERMINAL(1),ROOT(2));
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

enum opTrigger vpx_method_Instance_20_To_20_Object_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Instance_20_To_20_Object_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(2)
}

enum opTrigger vpx_method_Instance_20_To_20_Object(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Instance_20_To_20_Object_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
if(vpx_method_Instance_20_To_20_Object_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Instance_20_To_20_Object_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Object_20_To_20_Text_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Object_20_To_20_Text_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_string_3F_,1,0,TERMINAL(0));
NEXTCASEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_to_2D_string,1,1,TERMINAL(0),ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Object_20_To_20_Text_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Object_20_To_20_Text_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(1)
}

enum opTrigger vpx_method_Object_20_To_20_Text(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Object_20_To_20_Text_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Object_20_To_20_Text_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}




	Nat4 tempAttribute_Instance_20_Value_20_Data_2F_Class_20_Name[] = {
0000000000, 0X00000024, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X04000000, 0X6E756C6C, 0000000000
	};
	Nat4 tempAttribute_Instance_20_Value_20_Data_2F_Attributes[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Attribute_20_Value_20_Data_2F_Name[] = {
0000000000, 0X00000028, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X08000000, 0X556E7469, 0X746C6564, 0000000000
	};
	Nat4 tempAttribute_List_20_Value_20_Data_2F_Name[] = {
0000000000, 0X00000028, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X08000000, 0X556E7469, 0X746C6564, 0000000000
	};


Nat4 VPLC_Instance_20_Value_20_Data_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Instance_20_Value_20_Data_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 363 367 }{ 200 300 } */
	tempAttribute = attribute_add("Class Name",tempClass,tempAttribute_Instance_20_Value_20_Data_2F_Class_20_Name,environment);
	tempAttribute = attribute_add("Attributes",tempClass,tempAttribute_Instance_20_Value_20_Data_2F_Attributes,environment);
	tempAttribute = attribute_add("Owner",tempClass,NULL,environment);
/* Stop Attributes */

/* NULL SUPER CLASS */
	return kNOERROR;
}

/* Start Universals: { 329 333 }{ 158 369 } */
enum opTrigger vpx_method_Instance_20_Value_20_Data_2F_Class_20_To_20_Instance_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Instance_20_Value_20_Data_2F_Class_20_To_20_Instance_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_Value,TERMINAL(2),ROOT(3),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Instance_20_Value_20_Data_2F_Class_20_To_20_Instance_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Instance_20_Value_20_Data_2F_Class_20_To_20_Instance_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(12)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Attribute Data",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Name,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(2),ROOT(5),ROOT(6));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(6))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Instance_20_Value_20_Data_2F_Class_20_To_20_Instance_case_1_local_6(PARAMETERS,LIST(6),ROOT(7));
LISTROOT(7,0)
REPEATFINISH
LISTROOTFINISH(7,0)
LISTROOTEND
} else {
ROOTEMPTY(7)
}

result = vpx_instantiate(PARAMETERS,kVPXClass_Instance_20_Value_20_Data,1,1,NONE,ROOT(8));

result = vpx_set(PARAMETERS,kVPXValue_Class_20_Name,TERMINAL(8),TERMINAL(4),ROOT(9));

result = vpx_set(PARAMETERS,kVPXValue_Attributes,TERMINAL(9),TERMINAL(7),ROOT(10));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,1,1,TERMINAL(3),ROOT(11));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Register_20_With_20_Class,2,0,TERMINAL(10),TERMINAL(11));

result = kSuccess;

OUTPUT(0,TERMINAL(10))
FOOTERWITHNONE(12)
}

enum opTrigger vpx_method_Instance_20_Value_20_Data_2F_Class_20_To_20_Instance_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Instance_20_Value_20_Data_2F_Class_20_To_20_Instance_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Instance_20_Value_20_Data_2F_Class_20_To_20_Instance(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Instance_20_Value_20_Data_2F_Class_20_To_20_Instance_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Instance_20_Value_20_Data_2F_Class_20_To_20_Instance_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Instance_20_Value_20_Data_2F_Register_20_With_20_Class_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Instance_20_Value_20_Data_2F_Register_20_With_20_Class_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(11)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Name",ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_Class_20_Name,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_method_Find_20_Instance(PARAMETERS,TERMINAL(1),TERMINAL(2),TERMINAL(4),ROOT(5),ROOT(6));

result = vpx_match(PARAMETERS,"0",TERMINAL(5));
NEXTCASEONSUCCESS

result = vpx_get(PARAMETERS,kVPXValue_Instances,TERMINAL(6),ROOT(7),ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP_attach_2D_l,2,1,TERMINAL(3),TERMINAL(8),ROOT(9));

result = vpx_set(PARAMETERS,kVPXValue_Instances,TERMINAL(7),TERMINAL(9),ROOT(10));

result = kSuccess;

FOOTER(11)
}

enum opTrigger vpx_method_Instance_20_Value_20_Data_2F_Register_20_With_20_Class_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Instance_20_Value_20_Data_2F_Register_20_With_20_Class_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Instance of unknown class: ",ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_Class_20_Name,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(2),TERMINAL(4),ROOT(5));

result = vpx_method_Debug(PARAMETERS,TERMINAL(5));

result = kSuccess;

FOOTER(6)
}

enum opTrigger vpx_method_Instance_20_Value_20_Data_2F_Register_20_With_20_Class(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Instance_20_Value_20_Data_2F_Register_20_With_20_Class_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Instance_20_Value_20_Data_2F_Register_20_With_20_Class_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Instance_20_Value_20_Data_2F_Unregister_20_With_20_Class_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Instance_20_Value_20_Data_2F_Unregister_20_With_20_Class_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(13)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Name",ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_Class_20_Name,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_method_Find_20_Instance(PARAMETERS,TERMINAL(1),TERMINAL(2),TERMINAL(4),ROOT(5),ROOT(6));

result = vpx_match(PARAMETERS,"0",TERMINAL(5));
NEXTCASEONSUCCESS

result = vpx_get(PARAMETERS,kVPXValue_Instances,TERMINAL(6),ROOT(7),ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP__28_in_29_,2,1,TERMINAL(8),TERMINAL(3),ROOT(9));

result = vpx_match(PARAMETERS,"0",TERMINAL(9));
NEXTCASEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_detach_2D_nth,2,2,TERMINAL(8),TERMINAL(9),ROOT(10),ROOT(11));

result = vpx_set(PARAMETERS,kVPXValue_Instances,TERMINAL(7),TERMINAL(10),ROOT(12));

result = kSuccess;

FOOTER(13)
}

enum opTrigger vpx_method_Instance_20_Value_20_Data_2F_Unregister_20_With_20_Class_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Instance_20_Value_20_Data_2F_Unregister_20_With_20_Class_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Instance of unknown class: ",ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_Class_20_Name,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(2),TERMINAL(4),ROOT(5));

result = vpx_method_Debug(PARAMETERS,TERMINAL(5));

result = kSuccess;

FOOTER(6)
}

enum opTrigger vpx_method_Instance_20_Value_20_Data_2F_Unregister_20_With_20_Class(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Instance_20_Value_20_Data_2F_Unregister_20_With_20_Class_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Instance_20_Value_20_Data_2F_Unregister_20_With_20_Class_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Instance_20_Value_20_Data_2F_Update_20_Owner_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Instance_20_Value_20_Data_2F_Update_20_Owner_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Owner,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
NEXTCASEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Update_20_Record,1,0,TERMINAL(2));

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_Instance_20_Value_20_Data_2F_Update_20_Owner_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Instance_20_Value_20_Data_2F_Update_20_Owner_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_Instance_20_Value_20_Data_2F_Update_20_Owner(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Instance_20_Value_20_Data_2F_Update_20_Owner_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Instance_20_Value_20_Data_2F_Update_20_Owner_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Instance_20_Value_20_Data_2F_Set_20_Text(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Class_20_Name,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

/* Stop Universals */



Nat4 VPLC_Attribute_20_Value_20_Data_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Attribute_20_Value_20_Data_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 200 300 } */
	tempAttribute = attribute_add("Owner",tempClass,NULL,environment);
	tempAttribute = attribute_add("Name",tempClass,tempAttribute_Attribute_20_Value_20_Data_2F_Name,environment);
	tempAttribute = attribute_add("Value",tempClass,NULL,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"Helper Data");
	return kNOERROR;
}

/* Start Universals: { 309 333 }{ 222 300 } */
enum opTrigger vpx_method_Attribute_20_Value_20_Data_2F_Install_20_Value_case_1_local_15(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Attribute_20_Value_20_Data_2F_Install_20_Value_case_1_local_15(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADERWITHNONE(13)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_Item_20_Data,1,1,NONE,ROOT(3));

result = vpx_set(PARAMETERS,kVPXValue_Parent,TERMINAL(3),TERMINAL(0),ROOT(4));

result = vpx_instantiate(PARAMETERS,kVPXClass_Attribute_20_Value_20_Data,1,1,NONE,ROOT(5));

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(1),ROOT(6),ROOT(7));

result = vpx_get(PARAMETERS,kVPXValue_Name,TERMINAL(7),ROOT(8),ROOT(9));

result = vpx_set(PARAMETERS,kVPXValue_Name,TERMINAL(5),TERMINAL(9),ROOT(10));

result = vpx_set(PARAMETERS,kVPXValue_Value,TERMINAL(10),TERMINAL(2),ROOT(11));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Install_20_Helper,2,0,TERMINAL(4),TERMINAL(11));

result = vpx_set(PARAMETERS,kVPXValue_Owner,TERMINAL(11),TERMINAL(4),ROOT(12));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Add_20_To_20_List_20_Data,2,0,TERMINAL(12),TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASEWITHNONE(13)
}

enum opTrigger vpx_method_Attribute_20_Value_20_Data_2F_Install_20_Value(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(19)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Attributes,TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_constant(PARAMETERS,"Attribute Data",ROOT(4));

result = vpx_constant(PARAMETERS,"Name",ROOT(5));

result = vpx_get(PARAMETERS,kVPXValue_Class_20_Name,TERMINAL(2),ROOT(6),ROOT(7));

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(0),ROOT(8),ROOT(9));

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(9),ROOT(10),ROOT(11));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Project_20_Data,1,1,TERMINAL(11),ROOT(12));
FAILONFAILURE

result = vpx_match(PARAMETERS,"NULL",TERMINAL(12));
FAILONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Classes,1,1,TERMINAL(12),ROOT(13));

result = vpx_method_Find_20_Instance(PARAMETERS,TERMINAL(13),TERMINAL(5),TERMINAL(7),ROOT(14),ROOT(15));

result = vpx_match(PARAMETERS,"0",TERMINAL(14));
FAILONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(15),TERMINAL(4),ROOT(16));
FAILONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(16),ROOT(17),ROOT(18));

if( (repeatLimit = vpx_multiplex(2,TERMINAL(18),TERMINAL(3))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Attribute_20_Value_20_Data_2F_Install_20_Value_case_1_local_15(PARAMETERS,TERMINAL(0),LIST(18),LIST(3));
REPEATFINISH
} else {
}

result = kSuccess;

FOOTERSINGLECASE(19)
}

enum opTrigger vpx_method_Attribute_20_Value_20_Data_2F_Get_20_Value(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Value,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_method_Object_20_To_20_Text(PARAMETERS,TERMINAL(2),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Attribute_20_Value_20_Data_2F_Set_20_Value(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Text_20_To_20_Object(PARAMETERS,TERMINAL(1),TERMINAL(0),ROOT(2));

result = vpx_set(PARAMETERS,kVPXValue_Value,TERMINAL(0),TERMINAL(2),ROOT(3));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Attribute_20_Value_20_Data_2F_Construct_20_Editor_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Attribute_20_Value_20_Data_2F_Construct_20_Editor_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
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

result = vpx_instantiate(PARAMETERS,kVPXClass_VPLControl,1,1,NONE,ROOT(11));

result = vpx_set(PARAMETERS,kVPXValue_Frame,TERMINAL(11),TERMINAL(10),ROOT(12));

result = vpx_constant(PARAMETERS,"100",ROOT(13));

result = vpx_set(PARAMETERS,kVPXValue_Maximum,TERMINAL(12),TERMINAL(13),ROOT(14));

result = vpx_extconstant(PARAMETERS,scrollBarProc,ROOT(15));

result = vpx_set(PARAMETERS,kVPXValue_Procedure_20_ID,TERMINAL(14),TERMINAL(15),ROOT(16));

result = kSuccess;

OUTPUT(0,TERMINAL(16))
FOOTERSINGLECASEWITHNONE(17)
}

enum opTrigger vpx_method_Attribute_20_Value_20_Data_2F_Construct_20_Editor(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(9)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_List_20_Value_20_Window,1,1,NONE,ROOT(2));

result = vpx_instantiate(PARAMETERS,kVPXClass_List_20_View,1,1,NONE,ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Frame,TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_method_Attribute_20_Value_20_Data_2F_Construct_20_Editor_case_1_local_5(PARAMETERS,TERMINAL(5),ROOT(6));

result = vpx_set(PARAMETERS,kVPXValue_Vertical_20_Scroll_20_Bar,TERMINAL(4),TERMINAL(6),ROOT(7));

result = vpx_set(PARAMETERS,kVPXValue_View,TERMINAL(2),TERMINAL(7),ROOT(8));

result = kSuccess;

OUTPUT(0,TERMINAL(8))
FOOTERSINGLECASEWITHNONE(9)
}

enum opTrigger vpx_method_Attribute_20_Value_20_Data_2F_Get_20_Project_20_Data_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Attribute_20_Value_20_Data_2F_Get_20_Project_20_Data_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
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

enum opTrigger vpx_method_Attribute_20_Value_20_Data_2F_Get_20_Project_20_Data_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Attribute_20_Value_20_Data_2F_Get_20_Project_20_Data_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Attribute_20_Value_20_Data_2F_Get_20_Project_20_Data(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Attribute_20_Value_20_Data_2F_Get_20_Project_20_Data_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Attribute_20_Value_20_Data_2F_Get_20_Project_20_Data_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Attribute_20_Value_20_Data_2F_Handle_20_Item_20_Click_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Attribute_20_Value_20_Data_2F_Handle_20_Item_20_Click_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"List Value Data",ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(0),TERMINAL(3),ROOT(4));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open_20_Editor,1,0,TERMINAL(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Editor,1,1,TERMINAL(4),ROOT(5));

result = vpx_set(PARAMETERS,kVPXValue_Item,TERMINAL(5),TERMINAL(1),ROOT(6));

result = kSuccess;

FOOTER(7)
}

enum opTrigger vpx_method_Attribute_20_Value_20_Data_2F_Handle_20_Item_20_Click_case_2_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Attribute_20_Value_20_Data_2F_Handle_20_Item_20_Click_case_2_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Class_20_Name,TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_set(PARAMETERS,kVPXValue_Class_20_Name,TERMINAL(0),TERMINAL(3),ROOT(4));

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Attribute_20_Value_20_Data_2F_Handle_20_Item_20_Click_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Attribute_20_Value_20_Data_2F_Handle_20_Item_20_Click_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Attribute Value Data",ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(0),TERMINAL(3),ROOT(4));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open_20_Editor,1,0,TERMINAL(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Editor,1,1,TERMINAL(4),ROOT(5));

result = vpx_set(PARAMETERS,kVPXValue_Item,TERMINAL(5),TERMINAL(1),ROOT(6));

result = vpx_get(PARAMETERS,kVPXValue_Value,TERMINAL(0),ROOT(7),ROOT(8));

result = vpx_method_Attribute_20_Value_20_Data_2F_Handle_20_Item_20_Click_case_2_local_8(PARAMETERS,TERMINAL(6),TERMINAL(8));

result = kSuccess;

FOOTER(9)
}

enum opTrigger vpx_method_Attribute_20_Value_20_Data_2F_Handle_20_Item_20_Click_case_3_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Attribute_20_Value_20_Data_2F_Handle_20_Item_20_Click_case_3_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_list_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"List Value Data",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Attribute_20_Value_20_Data_2F_Handle_20_Item_20_Click_case_3_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Attribute_20_Value_20_Data_2F_Handle_20_Item_20_Click_case_3_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(0));
FAILONFAILURE

result = vpx_constant(PARAMETERS,"Attribute Value Data",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Attribute_20_Value_20_Data_2F_Handle_20_Item_20_Click_case_3_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Attribute_20_Value_20_Data_2F_Handle_20_Item_20_Click_case_3_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Attribute_20_Value_20_Data_2F_Handle_20_Item_20_Click_case_3_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Attribute_20_Value_20_Data_2F_Handle_20_Item_20_Click_case_3_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Attribute_20_Value_20_Data_2F_Handle_20_Item_20_Click_case_3_local_16(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Attribute_20_Value_20_Data_2F_Handle_20_Item_20_Click_case_3_local_16(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_match(PARAMETERS,"Attribute Value Data",TERMINAL(2));
TERMINATEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Class_20_Name,TERMINAL(1),ROOT(3),ROOT(4));

result = vpx_set(PARAMETERS,kVPXValue_Class_20_Name,TERMINAL(0),TERMINAL(4),ROOT(5));

result = kSuccess;

FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Attribute_20_Value_20_Data_2F_Handle_20_Item_20_Click_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Attribute_20_Value_20_Data_2F_Handle_20_Item_20_Click_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADERWITHNONE(16)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_List_20_Data,1,1,NONE,ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Value,TERMINAL(0),ROOT(4),ROOT(5));

result = vpx_method_Attribute_20_Value_20_Data_2F_Handle_20_Item_20_Click_case_3_local_4(PARAMETERS,TERMINAL(5),ROOT(6));
TERMINATEONFAILURE

result = vpx_set(PARAMETERS,kVPXValue_Helper_20_Name,TERMINAL(3),TERMINAL(6),ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,1,1,TERMINAL(7),ROOT(8));

result = vpx_get(PARAMETERS,kVPXValue_Owner,TERMINAL(4),ROOT(9),ROOT(10));

result = vpx_set(PARAMETERS,kVPXValue_Lists,TERMINAL(10),TERMINAL(8),ROOT(11));

result = vpx_constant(PARAMETERS,"\"/Install Value\"",ROOT(12));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(6),TERMINAL(12),ROOT(13));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open,2,0,TERMINAL(7),TERMINAL(11));

result = vpx_call_inject_method(PARAMETERS,INJECT(13),2,0,TERMINAL(7),TERMINAL(5));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open_20_Editor,1,0,TERMINAL(7));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Editor,1,1,TERMINAL(7),ROOT(14));

result = vpx_set(PARAMETERS,kVPXValue_Item,TERMINAL(14),TERMINAL(1),ROOT(15));

result = vpx_method_Attribute_20_Value_20_Data_2F_Handle_20_Item_20_Click_case_3_local_16(PARAMETERS,TERMINAL(15),TERMINAL(5),TERMINAL(6));

result = kSuccess;

FOOTERWITHNONE(16)
}

enum opTrigger vpx_method_Attribute_20_Value_20_Data_2F_Handle_20_Item_20_Click(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Attribute_20_Value_20_Data_2F_Handle_20_Item_20_Click_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2))
if(vpx_method_Attribute_20_Value_20_Data_2F_Handle_20_Item_20_Click_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2))
vpx_method_Attribute_20_Value_20_Data_2F_Handle_20_Item_20_Click_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2);
return outcome;
}

enum opTrigger vpx_method_Attribute_20_Value_20_Data_2F_Get_20_Path_20_Name(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;
FAILONSUCCESS

OUTPUT(0,NONE)
FOOTERSINGLECASEWITHNONE(1)
}

enum opTrigger vpx_method_Attribute_20_Value_20_Data_2F_Can_20_Create_3F_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;
FAILONSUCCESS

FOOTERSINGLECASE(1)
}

/* Stop Universals */



Nat4 VPLC_List_20_Value_20_Data_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_List_20_Value_20_Data_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 317 325 }{ 222 300 } */
	tempAttribute = attribute_add("Owner",tempClass,NULL,environment);
	tempAttribute = attribute_add("Name",tempClass,tempAttribute_List_20_Value_20_Data_2F_Name,environment);
	tempAttribute = attribute_add("Value",tempClass,NULL,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"Attribute Value Data");
	return kNOERROR;
}

/* Start Universals: { 310 340 }{ 222 300 } */
enum opTrigger vpx_method_List_20_Value_20_Data_2F_Update_20_List_20_Data(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Update_20_Names,2,0,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_List_20_Value_20_Data_2F_Update_20_Names_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_List_20_Value_20_Data_2F_Update_20_Names_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Grandparent_20_Helper,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
NEXTCASEONSUCCESS

result = vpx_get(PARAMETERS,kVPXValue_Name,TERMINAL(1),ROOT(2),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_List_20_Value_20_Data_2F_Update_20_Names_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_List_20_Value_20_Data_2F_Update_20_Names_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Untitled",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_List_20_Value_20_Data_2F_Update_20_Names_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_List_20_Value_20_Data_2F_Update_20_Names_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_List_20_Value_20_Data_2F_Update_20_Names_case_1_local_6_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_List_20_Value_20_Data_2F_Update_20_Names_case_1_local_6_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_List_20_Value_20_Data_2F_Update_20_Names_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3);
enum opTrigger vpx_method_List_20_Value_20_Data_2F_Update_20_Names_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3)
{
HEADER(11)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(1),ROOT(4),ROOT(5));

result = vpx_constant(PARAMETERS,"\":\"",ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP_to_2D_string,1,1,TERMINAL(2),ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP_to_2D_string,1,1,TERMINAL(3),ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(7),TERMINAL(6),ROOT(9));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(9),TERMINAL(8),ROOT(10));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Name,2,0,TERMINAL(5),TERMINAL(10));

result = kSuccess;

FOOTERSINGLECASE(11)
}

enum opTrigger vpx_method_List_20_Value_20_Data_2F_Update_20_Names(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP__28_length_29_,1,1,TERMINAL(3),ROOT(4));

result = vpx_constant(PARAMETERS,"1",ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_make_2D_list,3,1,TERMINAL(4),TERMINAL(5),TERMINAL(5),ROOT(6));

result = vpx_method_List_20_Value_20_Data_2F_Update_20_Names_case_1_local_6(PARAMETERS,TERMINAL(0),ROOT(7));

if( (repeatLimit = vpx_multiplex(2,TERMINAL(3),TERMINAL(6))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_List_20_Value_20_Data_2F_Update_20_Names_case_1_local_7(PARAMETERS,TERMINAL(7),LIST(3),LIST(6),TERMINAL(4));
REPEATFINISH
} else {
}

result = kSuccess;

FOOTERSINGLECASE(8)
}

enum opTrigger vpx_method_List_20_Value_20_Data_2F_Install_20_Value_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_List_20_Value_20_Data_2F_Install_20_Value_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADERWITHNONE(7)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_Item_20_Data,1,1,NONE,ROOT(2));

result = vpx_set(PARAMETERS,kVPXValue_Parent,TERMINAL(2),TERMINAL(0),ROOT(3));

result = vpx_instantiate(PARAMETERS,kVPXClass_List_20_Value_20_Data,1,1,NONE,ROOT(4));

result = vpx_set(PARAMETERS,kVPXValue_Value,TERMINAL(4),TERMINAL(1),ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Install_20_Helper,2,0,TERMINAL(3),TERMINAL(5));

result = vpx_set(PARAMETERS,kVPXValue_Owner,TERMINAL(5),TERMINAL(3),ROOT(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Initialize_20_Item_20_Data,2,0,TERMINAL(6),TERMINAL(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Add_20_To_20_List_20_Data,2,0,TERMINAL(6),TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASEWITHNONE(7)
}

enum opTrigger vpx_method_List_20_Value_20_Data_2F_Install_20_Value(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

if( (repeatLimit = vpx_multiplex(1,TERMINAL(1))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_List_20_Value_20_Data_2F_Install_20_Value_case_1_local_2(PARAMETERS,TERMINAL(0),LIST(1));
REPEATFINISH
} else {
}

result = kSuccess;

FOOTERSINGLECASE(2)
}

/* Stop Universals */






Nat4	loadClasses_MyValueData(V_Environment environment);
Nat4	loadClasses_MyValueData(V_Environment environment)
{
	V_Class result = NULL;

	result = class_new("Instance Value Data",environment);
	if(result == NULL) return kERROR;
	VPLC_Instance_20_Value_20_Data_class_load(result,environment);
	result = class_new("Attribute Value Data",environment);
	if(result == NULL) return kERROR;
	VPLC_Attribute_20_Value_20_Data_class_load(result,environment);
	result = class_new("List Value Data",environment);
	if(result == NULL) return kERROR;
	VPLC_List_20_Value_20_Data_class_load(result,environment);
	return kNOERROR;

}

Nat4	loadUniversals_MyValueData(V_Environment environment);
Nat4	loadUniversals_MyValueData(V_Environment environment)
{
	V_Method result = NULL;

	result = method_new("Text To Object",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Text_20_To_20_Object,NULL);

	result = method_new("Object To Instance",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Object_20_To_20_Instance,NULL);

	result = method_new("Get Instances",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Get_20_Instances,NULL);

	result = method_new("Instance To Object",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Instance_20_To_20_Object,NULL);

	result = method_new("Object To Text",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Object_20_To_20_Text,NULL);

	result = method_new("Instance Value Data/Class To Instance",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Instance_20_Value_20_Data_2F_Class_20_To_20_Instance,NULL);

	result = method_new("Instance Value Data/Register With Class",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Instance_20_Value_20_Data_2F_Register_20_With_20_Class,NULL);

	result = method_new("Instance Value Data/Unregister With Class",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Instance_20_Value_20_Data_2F_Unregister_20_With_20_Class,NULL);

	result = method_new("Instance Value Data/Update Owner",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Instance_20_Value_20_Data_2F_Update_20_Owner,NULL);

	result = method_new("Instance Value Data/Set Text",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Instance_20_Value_20_Data_2F_Set_20_Text,NULL);

	result = method_new("Attribute Value Data/Install Value",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Attribute_20_Value_20_Data_2F_Install_20_Value,NULL);

	result = method_new("Attribute Value Data/Get Value",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Attribute_20_Value_20_Data_2F_Get_20_Value,NULL);

	result = method_new("Attribute Value Data/Set Value",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Attribute_20_Value_20_Data_2F_Set_20_Value,NULL);

	result = method_new("Attribute Value Data/Construct Editor",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Attribute_20_Value_20_Data_2F_Construct_20_Editor,NULL);

	result = method_new("Attribute Value Data/Get Project Data",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Attribute_20_Value_20_Data_2F_Get_20_Project_20_Data,NULL);

	result = method_new("Attribute Value Data/Handle Item Click",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Attribute_20_Value_20_Data_2F_Handle_20_Item_20_Click,NULL);

	result = method_new("Attribute Value Data/Get Path Name",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Attribute_20_Value_20_Data_2F_Get_20_Path_20_Name,NULL);

	result = method_new("Attribute Value Data/Can Create?",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Attribute_20_Value_20_Data_2F_Can_20_Create_3F_,NULL);

	result = method_new("List Value Data/Update List Data",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_List_20_Value_20_Data_2F_Update_20_List_20_Data,NULL);

	result = method_new("List Value Data/Update Names",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_List_20_Value_20_Data_2F_Update_20_Names,NULL);

	result = method_new("List Value Data/Install Value",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_List_20_Value_20_Data_2F_Install_20_Value,NULL);

	return kNOERROR;

}



Nat4	loadPersistents_MyValueData(V_Environment environment);
Nat4	loadPersistents_MyValueData(V_Environment environment)
{
	V_Value tempPersistent = NULL;
	V_Dictionary dictionary = environment->persistentsTable;

	return kNOERROR;

}

Nat4	load_MyValueData(V_Environment environment);
Nat4	load_MyValueData(V_Environment environment)
{

	loadClasses_MyValueData(environment);
	loadUniversals_MyValueData(environment);
	loadPersistents_MyValueData(environment);
	return kNOERROR;

}

