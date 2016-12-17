/* A VPL Section File */
/*

MyCaseData.inl.c
Copyright: 2004 Andescotia LLC

*/

#include "MartenInlineProject.h"




	Nat4 tempAttribute_Case_20_Data_2F_Name[] = {
0000000000, 0X0000002C, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X0000000D, 0X556E7469, 0X746C6564, 0X20436173,
0X65000000
	};
	Nat4 tempAttribute_Case_20_Comment_20_Data_2F_Name[] = {
0000000000, 0X00000028, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X00000008, 0X556E7469, 0X746C6564, 0000000000
	};
	Nat4 tempAttribute_Case_20_Comment_20_Data_2F_Frame[] = {
0000000000, 0X0000008C, 0X00000028, 0X00000005, 0X00000014, 0X00000050, 0X0000004C, 0X00000048,
0X00000044, 0X0000003C, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000044,
0X00000004, 0X00000054, 0X0000006C, 0X00000084, 0X0000009C, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000,
0000000000, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000014, 0X00000004,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000064
	};


Nat4 VPLC_Case_20_Data_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Case_20_Data_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 331 317 }{ 89 404 } */
	tempAttribute = attribute_add("Owner",tempClass,NULL,environment);
	tempAttribute = attribute_add("Name",tempClass,tempAttribute_Case_20_Data_2F_Name,environment);
	tempAttribute = attribute_add("Record",tempClass,NULL,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"Helper Data");
	return kNOERROR;
}

/* Start Universals: { 77 345 }{ 684 343 } */
enum opTrigger vpx_method_Case_20_Data_2F_C_20_Code_20_Export_20_Connections_case_1_local_7_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0);
enum opTrigger vpx_method_Case_20_Data_2F_C_20_Code_20_Export_20_Connections_case_1_local_7_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0)
{
HEADER(10)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Root,TERMINAL(1),ROOT(4),ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_C_20_Code_20_Export_20_Connection,5,1,TERMINAL(4),TERMINAL(5),TERMINAL(0),TERMINAL(2),TERMINAL(3),ROOT(6));

result = vpx_get(PARAMETERS,kVPXValue_Loop_20_Root,TERMINAL(4),ROOT(7),ROOT(8));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_C_20_Code_20_Export_20_Connection,5,1,TERMINAL(7),TERMINAL(8),TERMINAL(6),TERMINAL(2),TERMINAL(3),ROOT(9));

result = kSuccess;

OUTPUT(0,TERMINAL(9))
FOOTERSINGLECASE(10)
}

enum opTrigger vpx_method_Case_20_Data_2F_C_20_Code_20_Export_20_Connections_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Case_20_Data_2F_C_20_Code_20_Export_20_Connections_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(1),ROOT(3),ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_Inputs,TERMINAL(4),ROOT(5),ROOT(6));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(6))) ){
REPEATBEGINWITHCOUNTER
LOOPTERMINALBEGIN(1)
LOOPTERMINAL(0,0,7)
result = vpx_method_Case_20_Data_2F_C_20_Code_20_Export_20_Connections_case_1_local_7_case_1_local_4(PARAMETERS,LOOP(0),LIST(6),TERMINAL(6),TERMINAL(2),ROOT(7));
REPEATFINISH
} else {
ROOTNULL(7,TERMINAL(0))
}

result = kSuccess;

OUTPUT(0,TERMINAL(7))
FOOTERSINGLECASE(8)
}

enum opTrigger vpx_method_Case_20_Data_2F_C_20_Code_20_Export_20_Connections_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Case_20_Data_2F_C_20_Code_20_Export_20_Connections_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(9)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Operation Data",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"/* Begin Connect Operations */\n",ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(2),ROOT(4),ROOT(5));

result = vpx_constant(PARAMETERS,"/* End Connect Operations */\n\n",ROOT(6));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(5))) ){
REPEATBEGINWITHCOUNTER
LOOPTERMINALBEGIN(1)
LOOPTERMINAL(0,3,7)
result = vpx_method_Case_20_Data_2F_C_20_Code_20_Export_20_Connections_case_1_local_7(PARAMETERS,LOOP(0),LIST(5),TERMINAL(5),ROOT(7));
REPEATFINISH
} else {
ROOTNULL(7,TERMINAL(3))
}

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(7),TERMINAL(6),ROOT(8));

result = kSuccess;

OUTPUT(0,TERMINAL(8))
FOOTER(9)
}

enum opTrigger vpx_method_Case_20_Data_2F_C_20_Code_20_Export_20_Connections_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Case_20_Data_2F_C_20_Code_20_Export_20_Connections_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"\n/* OPERATION DATA NOT FOUND! */\n\"",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Case_20_Data_2F_C_20_Code_20_Export_20_Connections(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Case_20_Data_2F_C_20_Code_20_Export_20_Connections_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Case_20_Data_2F_C_20_Code_20_Export_20_Connections_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Case_20_Data_2F_C_20_Code_20_Export_20_Operations_case_1_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Case_20_Data_2F_C_20_Code_20_Export_20_Operations_case_1_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_constant(PARAMETERS,"NULL",ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Export_20_Text,2,1,TERMINAL(3),TERMINAL(4),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(0),TERMINAL(5),ROOT(6));

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTERSINGLECASE(7)
}

enum opTrigger vpx_method_Case_20_Data_2F_C_20_Code_20_Export_20_Operations_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Case_20_Data_2F_C_20_Code_20_Export_20_Operations_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(13)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Operation Data",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"\"/* Start Operations: \"",ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(2),ROOT(4),ROOT(5));

result = vpx_constant(PARAMETERS,"\" */\n\"",ROOT(6));

result = vpx_method_Frame_20_To_20_Text(PARAMETERS,TERMINAL(2),ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(3),TERMINAL(7),ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(8),TERMINAL(6),ROOT(9));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(5))) ){
REPEATBEGINWITHCOUNTER
LOOPTERMINALBEGIN(1)
LOOPTERMINAL(0,9,10)
result = vpx_method_Case_20_Data_2F_C_20_Code_20_Export_20_Operations_case_1_local_10(PARAMETERS,LOOP(0),LIST(5),ROOT(10));
REPEATFINISH
} else {
ROOTNULL(10,TERMINAL(9))
}

result = vpx_constant(PARAMETERS,"/* Stop Operations */\n\n",ROOT(11));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(10),TERMINAL(11),ROOT(12));

result = kSuccess;

OUTPUT(0,TERMINAL(12))
FOOTER(13)
}

enum opTrigger vpx_method_Case_20_Data_2F_C_20_Code_20_Export_20_Operations_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Case_20_Data_2F_C_20_Code_20_Export_20_Operations_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"\n/* OPERATION DATA NOT FOUND! */\n\"",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Case_20_Data_2F_C_20_Code_20_Export_20_Operations(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Case_20_Data_2F_C_20_Code_20_Export_20_Operations_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Case_20_Data_2F_C_20_Code_20_Export_20_Operations_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Case_20_Data_2F_C_20_Code_20_Export_20_Synchros_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Case_20_Data_2F_C_20_Code_20_Export_20_Synchros_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Case_20_Data_2F_C_20_Code_20_Export_20_Synchros_case_1_local_8_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0);
enum opTrigger vpx_method_Case_20_Data_2F_C_20_Code_20_Export_20_Synchros_case_1_local_8_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0)
{
HEADER(14)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_constant(PARAMETERS,"/* Synchro [",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP__28_in_29_,2,1,TERMINAL(3),TERMINAL(1),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_minus_2D_one,1,1,TERMINAL(5),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP_to_2D_string,1,1,TERMINAL(6),ROOT(7));

result = vpx_constant(PARAMETERS,"\" to \"",ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP__28_in_29_,2,1,TERMINAL(3),TERMINAL(2),ROOT(9));

result = vpx_call_primitive(PARAMETERS,VPLP_minus_2D_one,1,1,TERMINAL(9),ROOT(10));

result = vpx_call_primitive(PARAMETERS,VPLP_to_2D_string,1,1,TERMINAL(10),ROOT(11));

result = vpx_constant(PARAMETERS,"] */\n",ROOT(12));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,6,1,TERMINAL(0),TERMINAL(4),TERMINAL(7),TERMINAL(8),TERMINAL(11),TERMINAL(12),ROOT(13));

result = kSuccess;

OUTPUT(0,TERMINAL(13))
FOOTERSINGLECASE(14)
}

enum opTrigger vpx_method_Case_20_Data_2F_C_20_Code_20_Export_20_Synchros_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Case_20_Data_2F_C_20_Code_20_Export_20_Synchros_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(1),ROOT(3),ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_Synchros,TERMINAL(4),ROOT(5),ROOT(6));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(6))) ){
REPEATBEGINWITHCOUNTER
LOOPTERMINALBEGIN(1)
LOOPTERMINAL(0,0,7)
result = vpx_method_Case_20_Data_2F_C_20_Code_20_Export_20_Synchros_case_1_local_8_case_1_local_4(PARAMETERS,LOOP(0),TERMINAL(5),LIST(6),TERMINAL(2),ROOT(7));
REPEATFINISH
} else {
ROOTNULL(7,TERMINAL(0))
}

result = kSuccess;

OUTPUT(0,TERMINAL(7))
FOOTERSINGLECASE(8)
}

enum opTrigger vpx_method_Case_20_Data_2F_C_20_Code_20_Export_20_Synchros_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Case_20_Data_2F_C_20_Code_20_Export_20_Synchros_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(10)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Operation Data",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"/* Begin Connect Synchros */\n",ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(2),ROOT(4),ROOT(5));

result = vpx_constant(PARAMETERS,"/* End Connect Synchros */\n\n",ROOT(6));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(5))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Case_20_Data_2F_C_20_Code_20_Export_20_Synchros_case_1_local_7(PARAMETERS,LIST(5),ROOT(7));
LISTROOT(7,0)
REPEATFINISH
LISTROOTFINISH(7,0)
LISTROOTEND
} else {
ROOTEMPTY(7)
}

if( (repeatLimit = vpx_multiplex(1,TERMINAL(5))) ){
REPEATBEGINWITHCOUNTER
LOOPTERMINALBEGIN(1)
LOOPTERMINAL(0,3,8)
result = vpx_method_Case_20_Data_2F_C_20_Code_20_Export_20_Synchros_case_1_local_8(PARAMETERS,LOOP(0),LIST(5),TERMINAL(7),ROOT(8));
REPEATFINISH
} else {
ROOTNULL(8,TERMINAL(3))
}

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(8),TERMINAL(6),ROOT(9));

result = kSuccess;

OUTPUT(0,TERMINAL(9))
FOOTER(10)
}

enum opTrigger vpx_method_Case_20_Data_2F_C_20_Code_20_Export_20_Synchros_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Case_20_Data_2F_C_20_Code_20_Export_20_Synchros_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"\n/* OPERATION DATA NOT FOUND! */\n\"",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Case_20_Data_2F_C_20_Code_20_Export_20_Synchros(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Case_20_Data_2F_C_20_Code_20_Export_20_Synchros_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Case_20_Data_2F_C_20_Code_20_Export_20_Synchros_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Case_20_Data_2F_C_20_Code_20_Footer(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"/* End Case */\n\n",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Case_20_Data_2F_C_20_Code_20_Header_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Case_20_Data_2F_C_20_Code_20_Header_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(9)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Grandparent_20_Helper,1,1,TERMINAL(0),ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(1),ROOT(2));

result = vpx_match(PARAMETERS,"Operation Data",TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Type,TERMINAL(1),ROOT(3),ROOT(4));

result = vpx_match(PARAMETERS,"local",TERMINAL(4));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"/* Begin Case */\n",ROOT(5));

result = vpx_constant(PARAMETERS,"\tptrA = case_insert(0,(V_Method)localOperation,environment);\n",ROOT(6));

result = vpx_constant(PARAMETERS,"\tptrA = case_open(ptrA,localOperation,environment);\n\n",ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,3,1,TERMINAL(5),TERMINAL(6),TERMINAL(7),ROOT(8));

result = kSuccess;

OUTPUT(0,TERMINAL(8))
FOOTER(9)
}

enum opTrigger vpx_method_Case_20_Data_2F_C_20_Code_20_Header_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Case_20_Data_2F_C_20_Code_20_Header_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"/* Begin Case */\n",ROOT(1));

result = vpx_constant(PARAMETERS,"\tptrA = case_insert(0,method,environment);\n\n",ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(1),TERMINAL(2),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_Case_20_Data_2F_C_20_Code_20_Header(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Case_20_Data_2F_C_20_Code_20_Header_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Case_20_Data_2F_C_20_Code_20_Header_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Case_20_Data_2F_Export_20_Text_case_1_local_7_case_1_local_2_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Case_20_Data_2F_Export_20_Text_case_1_local_7_case_1_local_2_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Root,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"TRUE",ROOT(3));

result = kSuccess;
FINISHONSUCCESS

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_Case_20_Data_2F_Export_20_Text_case_1_local_7_case_1_local_2_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Case_20_Data_2F_Export_20_Text_case_1_local_7_case_1_local_2_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"FALSE",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Case_20_Data_2F_Export_20_Text_case_1_local_7_case_1_local_2_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Case_20_Data_2F_Export_20_Text_case_1_local_7_case_1_local_2_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Case_20_Data_2F_Export_20_Text_case_1_local_7_case_1_local_2_case_1_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Case_20_Data_2F_Export_20_Text_case_1_local_7_case_1_local_2_case_1_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Case_20_Data_2F_Export_20_Text_case_1_local_7_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Case_20_Data_2F_Export_20_Text_case_1_local_7_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_Inputs,TERMINAL(2),ROOT(3),ROOT(4));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(4))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Case_20_Data_2F_Export_20_Text_case_1_local_7_case_1_local_2_case_1_local_4(PARAMETERS,LIST(4),ROOT(5));
REPEATFINISH
} else {
ROOTNULL(5,NULL)
}

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(5));
FINISHONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Case_20_Data_2F_Export_20_Text_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Case_20_Data_2F_Export_20_Text_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

if( (repeatLimit = vpx_multiplex(1,TERMINAL(0))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Case_20_Data_2F_Export_20_Text_case_1_local_7_case_1_local_2(PARAMETERS,LIST(0),ROOT(1));
REPEATFINISH
} else {
ROOTNULL(1,NULL)
}

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Case_20_Data_2F_Export_20_Text_case_1_local_8_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Case_20_Data_2F_Export_20_Text_case_1_local_8_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_Outputs,TERMINAL(2),ROOT(3),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Case_20_Data_2F_Export_20_Text_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Case_20_Data_2F_Export_20_Text_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

if( (repeatLimit = vpx_multiplex(1,TERMINAL(0))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Case_20_Data_2F_Export_20_Text_case_1_local_8_case_1_local_2(PARAMETERS,LIST(0),ROOT(1));
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
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Case_20_Data_2F_Export_20_Text_case_1_local_9_case_1_local_12(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Case_20_Data_2F_Export_20_Text_case_1_local_9_case_1_local_12(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"V_Object terminal",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_to_2D_string,1,1,TERMINAL(2),ROOT(4));

result = vpx_constant(PARAMETERS,",",ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,4,1,TERMINAL(0),TERMINAL(3),TERMINAL(4),TERMINAL(5),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP__2B_1,1,1,TERMINAL(2),ROOT(7));

result = kSuccess;

OUTPUT(0,TERMINAL(6))
OUTPUT(1,TERMINAL(7))
FOOTERSINGLECASE(8)
}

enum opTrigger vpx_method_Case_20_Data_2F_Export_20_Text_case_1_local_9_case_1_local_15(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Case_20_Data_2F_Export_20_Text_case_1_local_9_case_1_local_15(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"V_Object *root",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_to_2D_string,1,1,TERMINAL(2),ROOT(4));

result = vpx_constant(PARAMETERS,",",ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,4,1,TERMINAL(0),TERMINAL(3),TERMINAL(4),TERMINAL(5),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP__2B_1,1,1,TERMINAL(2),ROOT(7));

result = kSuccess;

OUTPUT(0,TERMINAL(6))
OUTPUT(1,TERMINAL(7))
FOOTERSINGLECASE(8)
}

enum opTrigger vpx_method_Case_20_Data_2F_Export_20_Text_case_1_local_9_case_1_local_32_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Case_20_Data_2F_Export_20_Text_case_1_local_9_case_1_local_32_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"HEADERWITHNONE(",ROOT(1));

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(0));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Case_20_Data_2F_Export_20_Text_case_1_local_9_case_1_local_32_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Case_20_Data_2F_Export_20_Text_case_1_local_9_case_1_local_32_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"HEADER(",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Case_20_Data_2F_Export_20_Text_case_1_local_9_case_1_local_32(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Case_20_Data_2F_Export_20_Text_case_1_local_9_case_1_local_32(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Case_20_Data_2F_Export_20_Text_case_1_local_9_case_1_local_32_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Case_20_Data_2F_Export_20_Text_case_1_local_9_case_1_local_32_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Case_20_Data_2F_Export_20_Text_case_1_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0);
enum opTrigger vpx_method_Case_20_Data_2F_Export_20_Text_case_1_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0)
{
HEADER(45)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_constant(PARAMETERS,"(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,",ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Export_20_Name,1,1,TERMINAL(0),ROOT(5));

result = vpx_constant(PARAMETERS,"\"enum opTrigger \"",ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(6),TERMINAL(5),ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(7),TERMINAL(4),ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP_detach_2D_r,1,2,TERMINAL(1),ROOT(9),ROOT(10));

result = vpx_call_primitive(PARAMETERS,VPLP_detach_2D_l,1,2,TERMINAL(9),ROOT(11),ROOT(12));

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(11),ROOT(13),ROOT(14));

result = vpx_get(PARAMETERS,kVPXValue_Outputs,TERMINAL(14),ROOT(15),ROOT(16));

result = vpx_constant(PARAMETERS,"0",ROOT(17));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(16))) ){
REPEATBEGINWITHCOUNTER
LOOPTERMINALBEGIN(2)
LOOPTERMINAL(0,8,18)
LOOPTERMINAL(1,17,19)
result = vpx_method_Case_20_Data_2F_Export_20_Text_case_1_local_9_case_1_local_12(PARAMETERS,LOOP(0),LIST(16),LOOP(1),ROOT(18),ROOT(19));
REPEATFINISH
} else {
ROOTNULL(18,TERMINAL(8))
ROOTNULL(19,TERMINAL(17))
}

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(10),ROOT(20),ROOT(21));

result = vpx_get(PARAMETERS,kVPXValue_Inputs,TERMINAL(21),ROOT(22),ROOT(23));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(23))) ){
REPEATBEGINWITHCOUNTER
LOOPTERMINALBEGIN(2)
LOOPTERMINAL(0,18,24)
LOOPTERMINAL(1,17,25)
result = vpx_method_Case_20_Data_2F_Export_20_Text_case_1_local_9_case_1_local_15(PARAMETERS,LOOP(0),LIST(23),LOOP(1),ROOT(24),ROOT(25));
REPEATFINISH
} else {
ROOTNULL(24,TERMINAL(18))
ROOTNULL(25,TERMINAL(17))
}

result = vpx_constant(PARAMETERS,"1",ROOT(26));

result = vpx_call_primitive(PARAMETERS,VPLP_suffix,2,2,TERMINAL(24),TERMINAL(26),ROOT(27),ROOT(28));

result = vpx_constant(PARAMETERS,")",ROOT(29));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(27),TERMINAL(29),ROOT(30));

result = vpx_call_primitive(PARAMETERS,VPLP_copy,1,1,TERMINAL(30),ROOT(31));

result = vpx_constant(PARAMETERS,";",ROOT(32));

result = vpx_method_Unix_20_Carriage_20_Return(PARAMETERS,ROOT(33));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,3,1,TERMINAL(30),TERMINAL(32),TERMINAL(33),ROOT(34));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,3,1,TERMINAL(34),TERMINAL(31),TERMINAL(33),ROOT(35));

result = vpx_constant(PARAMETERS,"{",ROOT(36));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,3,1,TERMINAL(35),TERMINAL(36),TERMINAL(33),ROOT(37));

result = vpx_call_primitive(PARAMETERS,VPLP__28_length_29_,1,1,TERMINAL(2),ROOT(38));

result = vpx_constant(PARAMETERS,")",ROOT(39));

result = vpx_constant(PARAMETERS,"1",ROOT(40));

result = vpx_call_primitive(PARAMETERS,VPLP_max,2,1,TERMINAL(38),TERMINAL(40),ROOT(41));

result = vpx_call_primitive(PARAMETERS,VPLP_to_2D_string,1,1,TERMINAL(41),ROOT(42));

result = vpx_method_Case_20_Data_2F_Export_20_Text_case_1_local_9_case_1_local_32(PARAMETERS,TERMINAL(3),ROOT(43));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,5,1,TERMINAL(37),TERMINAL(43),TERMINAL(42),TERMINAL(39),TERMINAL(33),ROOT(44));

result = kSuccess;

OUTPUT(0,TERMINAL(44))
FOOTERSINGLECASE(45)
}

enum opTrigger vpx_method_Case_20_Data_2F_Export_20_Text_case_1_local_12_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Case_20_Data_2F_Export_20_Text_case_1_local_12_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1)
{
HEADER(13)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"INPUT(",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP__2D_1,1,1,TERMINAL(1),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_to_2D_string,1,1,TERMINAL(4),ROOT(5));

result = vpx_constant(PARAMETERS,",",ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP_to_2D_string,1,1,TERMINAL(2),ROOT(7));

result = vpx_constant(PARAMETERS,")",ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,6,1,TERMINAL(0),TERMINAL(3),TERMINAL(5),TERMINAL(6),TERMINAL(7),TERMINAL(8),ROOT(9));

result = vpx_method_Unix_20_Carriage_20_Return(PARAMETERS,ROOT(10));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(9),TERMINAL(10),ROOT(11));

result = vpx_call_primitive(PARAMETERS,VPLP__2B_1,1,1,TERMINAL(2),ROOT(12));

result = kSuccess;

OUTPUT(0,TERMINAL(11))
OUTPUT(1,TERMINAL(12))
FOOTERSINGLECASE(13)
}

enum opTrigger vpx_method_Case_20_Data_2F_Export_20_Text_case_1_local_12_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0);
enum opTrigger vpx_method_Case_20_Data_2F_Export_20_Text_case_1_local_12_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0)
{
HEADER(14)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(1),ROOT(4),ROOT(5));

result = vpx_constant(PARAMETERS,"0",ROOT(6));

result = vpx_constant(PARAMETERS,"\"\"",ROOT(7));

result = vpx_get(PARAMETERS,kVPXValue_Outputs,TERMINAL(5),ROOT(8),ROOT(9));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(9))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_call_primitive(PARAMETERS,VPLP__28_in_29_,2,1,TERMINAL(3),LIST(9),ROOT(10));
LISTROOT(10,0)
REPEATFINISH
LISTROOTFINISH(10,0)
LISTROOTEND
} else {
ROOTEMPTY(10)
}

if( (repeatLimit = vpx_multiplex(1,TERMINAL(10))) ){
REPEATBEGINWITHCOUNTER
LOOPTERMINALBEGIN(2)
LOOPTERMINAL(0,7,11)
LOOPTERMINAL(1,6,12)
result = vpx_method_Case_20_Data_2F_Export_20_Text_case_1_local_12_case_1_local_7(PARAMETERS,LOOP(0),LIST(10),LOOP(1),ROOT(11),ROOT(12));
REPEATFINISH
} else {
ROOTNULL(11,TERMINAL(7))
ROOTNULL(12,TERMINAL(6))
}

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(0),TERMINAL(11),ROOT(13));

result = kSuccess;

OUTPUT(0,TERMINAL(13))
FOOTER(14)
}

enum opTrigger vpx_method_Case_20_Data_2F_Export_20_Text_case_1_local_12_case_2_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Case_20_Data_2F_Export_20_Text_case_1_local_12_case_2_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1)
{
HEADER(13)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"INPUT(",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP__2D_1,1,1,TERMINAL(1),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_to_2D_string,1,1,TERMINAL(4),ROOT(5));

result = vpx_constant(PARAMETERS,",",ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP_to_2D_string,1,1,TERMINAL(2),ROOT(7));

result = vpx_constant(PARAMETERS,")",ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,6,1,TERMINAL(0),TERMINAL(3),TERMINAL(5),TERMINAL(6),TERMINAL(7),TERMINAL(8),ROOT(9));

result = vpx_method_Unix_20_Carriage_20_Return(PARAMETERS,ROOT(10));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(9),TERMINAL(10),ROOT(11));

result = vpx_call_primitive(PARAMETERS,VPLP__2B_1,1,1,TERMINAL(2),ROOT(12));

result = kSuccess;

OUTPUT(0,TERMINAL(11))
OUTPUT(1,TERMINAL(12))
FOOTERSINGLECASE(13)
}

enum opTrigger vpx_method_Case_20_Data_2F_Export_20_Text_case_1_local_12_case_2_local_13(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Case_20_Data_2F_Export_20_Text_case_1_local_12_case_2_local_13(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1)
{
HEADER(10)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"RESET(",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_to_2D_string,1,1,TERMINAL(2),ROOT(4));

result = vpx_constant(PARAMETERS,")",ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,4,1,TERMINAL(0),TERMINAL(3),TERMINAL(4),TERMINAL(5),ROOT(6));

result = vpx_method_Unix_20_Carriage_20_Return(PARAMETERS,ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(6),TERMINAL(7),ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP__2B_1,1,1,TERMINAL(2),ROOT(9));

result = kSuccess;

OUTPUT(0,TERMINAL(8))
OUTPUT(1,TERMINAL(9))
FOOTERSINGLECASE(10)
}

enum opTrigger vpx_method_Case_20_Data_2F_Export_20_Text_case_1_local_12_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0);
enum opTrigger vpx_method_Case_20_Data_2F_Export_20_Text_case_1_local_12_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0)
{
HEADER(23)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(1),ROOT(4),ROOT(5));

result = vpx_constant(PARAMETERS,"0",ROOT(6));

result = vpx_constant(PARAMETERS,"\"\"",ROOT(7));

result = vpx_get(PARAMETERS,kVPXValue_Outputs,TERMINAL(5),ROOT(8),ROOT(9));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(9))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_call_primitive(PARAMETERS,VPLP__28_in_29_,2,1,TERMINAL(3),LIST(9),ROOT(10));
LISTROOT(10,0)
REPEATFINISH
LISTROOTFINISH(10,0)
LISTROOTEND
} else {
ROOTEMPTY(10)
}

if( (repeatLimit = vpx_multiplex(1,TERMINAL(10))) ){
REPEATBEGINWITHCOUNTER
LOOPTERMINALBEGIN(2)
LOOPTERMINAL(0,7,11)
LOOPTERMINAL(1,6,12)
result = vpx_method_Case_20_Data_2F_Export_20_Text_case_1_local_12_case_2_local_7(PARAMETERS,LOOP(0),LIST(10),LOOP(1),ROOT(11),ROOT(12));
REPEATFINISH
} else {
ROOTNULL(11,TERMINAL(7))
ROOTNULL(12,TERMINAL(6))
}

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(0),TERMINAL(11),ROOT(13));

result = vpx_constant(PARAMETERS,"0",ROOT(14));

result = vpx_constant(PARAMETERS,"\"\"",ROOT(15));

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(2),ROOT(16),ROOT(17));

result = vpx_get(PARAMETERS,kVPXValue_Inputs,TERMINAL(17),ROOT(18),ROOT(19));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(19))) ){
REPEATBEGINWITHCOUNTER
LOOPTERMINALBEGIN(2)
LOOPTERMINAL(0,15,20)
LOOPTERMINAL(1,14,21)
result = vpx_method_Case_20_Data_2F_Export_20_Text_case_1_local_12_case_2_local_13(PARAMETERS,LOOP(0),LIST(19),LOOP(1),ROOT(20),ROOT(21));
REPEATFINISH
} else {
ROOTNULL(20,TERMINAL(15))
ROOTNULL(21,TERMINAL(14))
}

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(13),TERMINAL(20),ROOT(22));

result = kSuccess;

OUTPUT(0,TERMINAL(22))
FOOTER(23)
}

enum opTrigger vpx_method_Case_20_Data_2F_Export_20_Text_case_1_local_12(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0);
enum opTrigger vpx_method_Case_20_Data_2F_Export_20_Text_case_1_local_12(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Case_20_Data_2F_Export_20_Text_case_1_local_12_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0))
vpx_method_Case_20_Data_2F_Export_20_Text_case_1_local_12_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0);
return outcome;
}

enum opTrigger vpx_method_Case_20_Data_2F_Export_20_Text_case_1_local_13(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Case_20_Data_2F_Export_20_Text_case_1_local_13(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(1),ROOT(3),ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Export_20_Text,2,1,TERMINAL(4),TERMINAL(2),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(0),TERMINAL(5),ROOT(6));

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTERSINGLECASE(7)
}

enum opTrigger vpx_method_Case_20_Data_2F_Export_20_Text_case_1_local_14_case_1_local_8_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Case_20_Data_2F_Export_20_Text_case_1_local_14_case_1_local_8_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"FOOTERWITHNONE(",ROOT(1));

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(0));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Case_20_Data_2F_Export_20_Text_case_1_local_14_case_1_local_8_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Case_20_Data_2F_Export_20_Text_case_1_local_14_case_1_local_8_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"FOOTER(",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Case_20_Data_2F_Export_20_Text_case_1_local_14_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Case_20_Data_2F_Export_20_Text_case_1_local_14_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Case_20_Data_2F_Export_20_Text_case_1_local_14_case_1_local_8_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Case_20_Data_2F_Export_20_Text_case_1_local_14_case_1_local_8_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Case_20_Data_2F_Export_20_Text_case_1_local_14(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0);
enum opTrigger vpx_method_Case_20_Data_2F_Export_20_Text_case_1_local_14(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0)
{
HEADER(14)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP__28_length_29_,1,1,TERMINAL(2),ROOT(4));

result = vpx_constant(PARAMETERS,")",ROOT(5));

result = vpx_method_Unix_20_Carriage_20_Return(PARAMETERS,ROOT(6));

result = vpx_constant(PARAMETERS,"1",ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP_max,2,1,TERMINAL(4),TERMINAL(7),ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP_to_2D_string,1,1,TERMINAL(8),ROOT(9));

result = vpx_method_Case_20_Data_2F_Export_20_Text_case_1_local_14_case_1_local_8(PARAMETERS,TERMINAL(3),ROOT(10));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,4,1,TERMINAL(10),TERMINAL(9),TERMINAL(5),TERMINAL(6),ROOT(11));

result = vpx_constant(PARAMETERS,"}",ROOT(12));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,4,1,TERMINAL(11),TERMINAL(12),TERMINAL(6),TERMINAL(6),ROOT(13));

result = kSuccess;

OUTPUT(0,TERMINAL(13))
FOOTERSINGLECASE(14)
}

enum opTrigger vpx_method_Case_20_Data_2F_Export_20_Text_case_1_local_15_case_1_local_4_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Case_20_Data_2F_Export_20_Text_case_1_local_15_case_1_local_4_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"0",TERMINAL(0));
NEXTCASEONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(1)
}

enum opTrigger vpx_method_Case_20_Data_2F_Export_20_Text_case_1_local_15_case_1_local_4_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Case_20_Data_2F_Export_20_Text_case_1_local_15_case_1_local_4_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Case_20_Data_2F_Export_20_Text_case_1_local_15_case_1_local_4_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Case_20_Data_2F_Export_20_Text_case_1_local_15_case_1_local_4_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Case_20_Data_2F_Export_20_Text_case_1_local_15_case_1_local_4_case_1_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Case_20_Data_2F_Export_20_Text_case_1_local_15_case_1_local_4_case_1_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Case_20_Data_2F_Export_20_Text_case_1_local_15_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Case_20_Data_2F_Export_20_Text_case_1_local_15_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Root,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP__28_in_29_,2,1,TERMINAL(1),TERMINAL(3),ROOT(4));

result = vpx_method_Case_20_Data_2F_Export_20_Text_case_1_local_15_case_1_local_4_case_1_local_4(PARAMETERS,TERMINAL(4),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Case_20_Data_2F_Export_20_Text_case_1_local_15_case_1_local_7_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Case_20_Data_2F_Export_20_Text_case_1_local_15_case_1_local_7_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"\"NONE\"",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Case_20_Data_2F_Export_20_Text_case_1_local_15_case_1_local_7_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Case_20_Data_2F_Export_20_Text_case_1_local_15_case_1_local_7_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP__2D_1,1,1,TERMINAL(0),ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_to_2D_string,1,1,TERMINAL(1),ROOT(2));

result = vpx_constant(PARAMETERS,"\"TERMINAL(\"",ROOT(3));

result = vpx_constant(PARAMETERS,"\")\"",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,3,1,TERMINAL(3),TERMINAL(2),TERMINAL(4),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTER(6)
}

enum opTrigger vpx_method_Case_20_Data_2F_Export_20_Text_case_1_local_15_case_1_local_7_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Case_20_Data_2F_Export_20_Text_case_1_local_15_case_1_local_7_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Case_20_Data_2F_Export_20_Text_case_1_local_15_case_1_local_7_case_1_local_6_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Case_20_Data_2F_Export_20_Text_case_1_local_15_case_1_local_7_case_1_local_6_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Case_20_Data_2F_Export_20_Text_case_1_local_15_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Case_20_Data_2F_Export_20_Text_case_1_local_15_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1)
{
HEADER(12)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"OUTPUT(",ROOT(3));

result = vpx_constant(PARAMETERS,",",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_to_2D_string,1,1,TERMINAL(2),ROOT(5));

result = vpx_constant(PARAMETERS,")",ROOT(6));

result = vpx_method_Case_20_Data_2F_Export_20_Text_case_1_local_15_case_1_local_7_case_1_local_6(PARAMETERS,TERMINAL(1),ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,6,1,TERMINAL(0),TERMINAL(3),TERMINAL(5),TERMINAL(4),TERMINAL(7),TERMINAL(6),ROOT(8));

result = vpx_method_Unix_20_Carriage_20_Return(PARAMETERS,ROOT(9));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(8),TERMINAL(9),ROOT(10));

result = vpx_call_primitive(PARAMETERS,VPLP__2B_1,1,1,TERMINAL(2),ROOT(11));

result = kSuccess;

OUTPUT(0,TERMINAL(10))
OUTPUT(1,TERMINAL(11))
FOOTERSINGLECASE(12)
}

enum opTrigger vpx_method_Case_20_Data_2F_Export_20_Text_case_1_local_15(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Case_20_Data_2F_Export_20_Text_case_1_local_15(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(13)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(1),ROOT(3),ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_Inputs,TERMINAL(4),ROOT(5),ROOT(6));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(6))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Case_20_Data_2F_Export_20_Text_case_1_local_15_case_1_local_4(PARAMETERS,LIST(6),TERMINAL(2),ROOT(7));
LISTROOT(7,0)
REPEATFINISH
LISTROOTFINISH(7,0)
LISTROOTEND
} else {
ROOTEMPTY(7)
}

result = vpx_constant(PARAMETERS,"0",ROOT(8));

result = vpx_constant(PARAMETERS,"\"\"",ROOT(9));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(7))) ){
REPEATBEGINWITHCOUNTER
LOOPTERMINALBEGIN(2)
LOOPTERMINAL(0,9,10)
LOOPTERMINAL(1,8,11)
result = vpx_method_Case_20_Data_2F_Export_20_Text_case_1_local_15_case_1_local_7(PARAMETERS,LOOP(0),LIST(7),LOOP(1),ROOT(10),ROOT(11));
REPEATFINISH
} else {
ROOTNULL(10,TERMINAL(9))
ROOTNULL(11,TERMINAL(8))
}

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(0),TERMINAL(10),ROOT(12));

result = kSuccess;

OUTPUT(0,TERMINAL(12))
FOOTERSINGLECASE(13)
}

enum opTrigger vpx_method_Case_20_Data_2F_Export_20_Text_case_1_local_18_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Case_20_Data_2F_Export_20_Text_case_1_local_18_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Type,TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_match(PARAMETERS,"local",TERMINAL(5));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Export_20_Local_20_Text,1,1,TERMINAL(4),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(0),TERMINAL(6),ROOT(7));

result = kSuccess;

OUTPUT(0,TERMINAL(7))
FOOTER(8)
}

enum opTrigger vpx_method_Case_20_Data_2F_Export_20_Text_case_1_local_18_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Case_20_Data_2F_Export_20_Text_case_1_local_18_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(2)
}

enum opTrigger vpx_method_Case_20_Data_2F_Export_20_Text_case_1_local_18(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Case_20_Data_2F_Export_20_Text_case_1_local_18(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Case_20_Data_2F_Export_20_Text_case_1_local_18_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Case_20_Data_2F_Export_20_Text_case_1_local_18_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Case_20_Data_2F_Export_20_Text_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Case_20_Data_2F_Export_20_Text_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(21)
INPUT(0,0)
result = kSuccess;

result = vpx_persistent(PARAMETERS,kVPXValue_Export_20_Mode,0,1,ROOT(1));

result = vpx_match(PARAMETERS,"Experimental",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"Operation Data",ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(0),TERMINAL(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_method_Case_20_Data_2F_Export_20_Text_case_1_local_7(PARAMETERS,TERMINAL(5),ROOT(6));

result = vpx_method_Case_20_Data_2F_Export_20_Text_case_1_local_8(PARAMETERS,TERMINAL(5),ROOT(7));

result = vpx_method_Case_20_Data_2F_Export_20_Text_case_1_local_9(PARAMETERS,TERMINAL(0),TERMINAL(5),TERMINAL(7),TERMINAL(6),ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP_detach_2D_r,1,2,TERMINAL(5),ROOT(9),ROOT(10));

result = vpx_call_primitive(PARAMETERS,VPLP_detach_2D_l,1,2,TERMINAL(9),ROOT(11),ROOT(12));

result = vpx_method_Case_20_Data_2F_Export_20_Text_case_1_local_12(PARAMETERS,TERMINAL(8),TERMINAL(11),TERMINAL(10),TERMINAL(7),ROOT(13));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(5))) ){
REPEATBEGINWITHCOUNTER
LOOPTERMINALBEGIN(1)
LOOPTERMINAL(0,13,14)
result = vpx_method_Case_20_Data_2F_Export_20_Text_case_1_local_13(PARAMETERS,LOOP(0),LIST(5),TERMINAL(7),ROOT(14));
REPEATFINISH
} else {
ROOTNULL(14,TERMINAL(13))
}

result = vpx_method_Case_20_Data_2F_Export_20_Text_case_1_local_14(PARAMETERS,TERMINAL(0),TERMINAL(5),TERMINAL(7),TERMINAL(6),ROOT(15));

result = vpx_method_Case_20_Data_2F_Export_20_Text_case_1_local_15(PARAMETERS,TERMINAL(14),TERMINAL(10),TERMINAL(7),ROOT(16));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(16),TERMINAL(15),ROOT(17));

result = vpx_constant(PARAMETERS,"\"\"",ROOT(18));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(5))) ){
REPEATBEGINWITHCOUNTER
LOOPTERMINALBEGIN(1)
LOOPTERMINAL(0,18,19)
result = vpx_method_Case_20_Data_2F_Export_20_Text_case_1_local_18(PARAMETERS,LOOP(0),LIST(5),ROOT(19));
REPEATFINISH
} else {
ROOTNULL(19,TERMINAL(18))
}

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(19),TERMINAL(17),ROOT(20));

result = kSuccess;

OUTPUT(0,TERMINAL(20))
FOOTER(21)
}

enum opTrigger vpx_method_Case_20_Data_2F_Export_20_Text_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Case_20_Data_2F_Export_20_Text_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(10)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_C_20_Code_20_Header,1,1,TERMINAL(0),ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_C_20_Code_20_Footer,1,1,TERMINAL(0),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_C_20_Code_20_Export_20_Operations,1,1,TERMINAL(0),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(1),TERMINAL(3),ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_C_20_Code_20_Export_20_Connections,1,1,TERMINAL(0),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(4),TERMINAL(5),ROOT(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_C_20_Code_20_Export_20_Synchros,1,1,TERMINAL(0),ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(6),TERMINAL(7),ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(8),TERMINAL(2),ROOT(9));

result = kSuccess;

OUTPUT(0,TERMINAL(9))
FOOTER(10)
}

enum opTrigger vpx_method_Case_20_Data_2F_Export_20_Text(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Case_20_Data_2F_Export_20_Text_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Case_20_Data_2F_Export_20_Text_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Case_20_Data_2F_Get_20_Project_20_Data_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Case_20_Data_2F_Get_20_Project_20_Data_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
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

enum opTrigger vpx_method_Case_20_Data_2F_Get_20_Project_20_Data_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Case_20_Data_2F_Get_20_Project_20_Data_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Case_20_Data_2F_Get_20_Project_20_Data(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Case_20_Data_2F_Get_20_Project_20_Data_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Case_20_Data_2F_Get_20_Project_20_Data_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Case_20_Data_2F_Initialize_20_Item_20_Data_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Case_20_Data_2F_Initialize_20_Item_20_Data_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Grandparent_20_Helper,1,1,TERMINAL(0),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Create_20_Default_20_Case,3,0,TERMINAL(0),TERMINAL(1),TERMINAL(2));

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_Case_20_Data_2F_Initialize_20_Item_20_Data_case_2_local_11(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Case_20_Data_2F_Initialize_20_Item_20_Data_case_2_local_11(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(13)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_Item_20_Data,1,1,NONE,ROOT(2));

result = vpx_constant(PARAMETERS,"( 22 22 30 214 )",ROOT(3));

result = vpx_constant(PARAMETERS,"( 36 36 44 228 )",ROOT(4));

result = vpx_set(PARAMETERS,kVPXValue_Frame,TERMINAL(2),TERMINAL(4),ROOT(5));

result = vpx_constant(PARAMETERS,"input_bar",ROOT(6));

result = vpx_instantiate(PARAMETERS,kVPXClass_Operation_20_Data,1,1,NONE,ROOT(7));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Create_20_Roots,1,1,TERMINAL(0),ROOT(8));

result = vpx_set(PARAMETERS,kVPXValue_Outputs,TERMINAL(7),TERMINAL(8),ROOT(9));

result = vpx_set(PARAMETERS,kVPXValue_Type,TERMINAL(9),TERMINAL(6),ROOT(10));

result = vpx_set(PARAMETERS,kVPXValue_Frame,TERMINAL(10),TERMINAL(4),ROOT(11));

result = vpx_set(PARAMETERS,kVPXValue_Owner,TERMINAL(11),TERMINAL(5),ROOT(12));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Install_20_Helper,2,0,TERMINAL(5),TERMINAL(12));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Position_20_Root,2,0,TERMINAL(7),TERMINAL(8));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTERSINGLECASEWITHNONE(13)
}

enum opTrigger vpx_method_Case_20_Data_2F_Initialize_20_Item_20_Data_case_2_local_12(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Case_20_Data_2F_Initialize_20_Item_20_Data_case_2_local_12(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(13)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_Item_20_Data,1,1,NONE,ROOT(2));

result = vpx_constant(PARAMETERS,"( 64 22 72 214 )",ROOT(3));

result = vpx_constant(PARAMETERS,"( 162 36 170 228 )",ROOT(4));

result = vpx_set(PARAMETERS,kVPXValue_Frame,TERMINAL(2),TERMINAL(4),ROOT(5));

result = vpx_constant(PARAMETERS,"output_bar",ROOT(6));

result = vpx_instantiate(PARAMETERS,kVPXClass_Operation_20_Data,1,1,NONE,ROOT(7));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Create_20_Terminals,1,1,TERMINAL(0),ROOT(8));

result = vpx_set(PARAMETERS,kVPXValue_Inputs,TERMINAL(7),TERMINAL(8),ROOT(9));

result = vpx_set(PARAMETERS,kVPXValue_Type,TERMINAL(9),TERMINAL(6),ROOT(10));

result = vpx_set(PARAMETERS,kVPXValue_Frame,TERMINAL(10),TERMINAL(4),ROOT(11));

result = vpx_set(PARAMETERS,kVPXValue_Owner,TERMINAL(11),TERMINAL(5),ROOT(12));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Install_20_Helper,2,0,TERMINAL(5),TERMINAL(12));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Position_20_Terminal,2,0,TERMINAL(7),TERMINAL(8));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTERSINGLECASEWITHNONE(13)
}

enum opTrigger vpx_method_Case_20_Data_2F_Initialize_20_Item_20_Data_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Case_20_Data_2F_Initialize_20_Item_20_Data_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADERWITHNONE(17)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_List_20_Data,1,1,NONE,ROOT(2));

result = vpx_constant(PARAMETERS,"Operation Data",ROOT(3));

result = vpx_set(PARAMETERS,kVPXValue_Helper_20_Name,TERMINAL(2),TERMINAL(3),ROOT(4));

result = vpx_constant(PARAMETERS,"Case Comment Data",ROOT(5));

result = vpx_instantiate(PARAMETERS,kVPXClass_List_20_Data,1,1,NONE,ROOT(6));

result = vpx_set(PARAMETERS,kVPXValue_Helper_20_Name,TERMINAL(6),TERMINAL(5),ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(4),TERMINAL(7),ROOT(8));

result = vpx_set(PARAMETERS,kVPXValue_Lists,TERMINAL(1),TERMINAL(8),ROOT(9));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Grandparent_20_Helper,1,1,TERMINAL(0),ROOT(10));

result = vpx_method_Case_20_Data_2F_Initialize_20_Item_20_Data_case_2_local_11(PARAMETERS,TERMINAL(10),TERMINAL(1),ROOT(11));

result = vpx_method_Case_20_Data_2F_Initialize_20_Item_20_Data_case_2_local_12(PARAMETERS,TERMINAL(10),TERMINAL(1),ROOT(12));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(11),TERMINAL(12),ROOT(13));

result = vpx_set(PARAMETERS,kVPXValue_List,TERMINAL(4),TERMINAL(13),ROOT(14));

result = vpx_constant(PARAMETERS,"( 0 0 210 268 )",ROOT(15));

result = vpx_set(PARAMETERS,kVPXValue_Frame,TERMINAL(2),TERMINAL(15),ROOT(16));

result = kSuccess;

FOOTERWITHNONE(17)
}

enum opTrigger vpx_method_Case_20_Data_2F_Initialize_20_Item_20_Data(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Case_20_Data_2F_Initialize_20_Item_20_Data_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Case_20_Data_2F_Initialize_20_Item_20_Data_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Case_20_Data_2F_Open_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Case_20_Data_2F_Open_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(10)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Project_20_Data,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
TERMINATEONSUCCESS

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
TERMINATEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Grandparent_20_Helper,1,1,TERMINAL(0),ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_Record,TERMINAL(4),ROOT(5),ROOT(6));

result = vpx_constant(PARAMETERS,"0",ROOT(7));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Create_20_Case,4,1,TERMINAL(3),TERMINAL(6),TERMINAL(7),TERMINAL(0),ROOT(8));

result = vpx_set(PARAMETERS,kVPXValue_Record,TERMINAL(0),TERMINAL(8),ROOT(9));

result = kSuccess;

FOOTERSINGLECASE(10)
}

enum opTrigger vpx_method_Case_20_Data_2F_Open(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_context_super_method(PARAMETERS,kVPXMethod_Open,2,0,TERMINAL(0),TERMINAL(1));

result = vpx_method_Case_20_Data_2F_Open_case_1_local_3(PARAMETERS,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Case_20_Data_2F_Push_20_Lists_20_Data_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Case_20_Data_2F_Push_20_Lists_20_Data_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(9)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_Outputs,TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_Inputs,TERMINAL(3),ROOT(5),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP__28_join_29_,2,1,TERMINAL(6),TERMINAL(4),ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP_attach_2D_l,2,1,TERMINAL(2),TERMINAL(7),ROOT(8));

result = kSuccess;

OUTPUT(0,TERMINAL(8))
FOOTERSINGLECASE(9)
}

enum opTrigger vpx_method_Case_20_Data_2F_Push_20_Lists_20_Data_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Case_20_Data_2F_Push_20_Lists_20_Data_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_to_2D_string,1,1,TERMINAL(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(0),TERMINAL(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_plus_2D_one,1,1,TERMINAL(2),ROOT(5));

result = vpx_set(PARAMETERS,kVPXValue_Name,TERMINAL(1),TERMINAL(4),ROOT(6));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTERSINGLECASE(7)
}

enum opTrigger vpx_method_Case_20_Data_2F_Push_20_Lists_20_Data_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Case_20_Data_2F_Push_20_Lists_20_Data_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_Name,TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_set(PARAMETERS,kVPXValue_Name,TERMINAL(1),TERMINAL(4),ROOT(5));

result = kSuccess;

FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Case_20_Data_2F_Push_20_Lists_20_Data(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(1),ROOT(2),ROOT(3));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(3))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Case_20_Data_2F_Push_20_Lists_20_Data_case_1_local_3(PARAMETERS,LIST(3),ROOT(4));
LISTROOT(4,0)
REPEATFINISH
LISTROOTFINISH(4,0)
LISTROOTEND
} else {
ROOTEMPTY(4)
}

result = vpx_method_Lists_20_To_20_List(PARAMETERS,TERMINAL(4),ROOT(5));

result = vpx_constant(PARAMETERS,"1",ROOT(6));

result = vpx_constant(PARAMETERS,"\"Operation#\"",ROOT(7));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(5))) ){
REPEATBEGINWITHCOUNTER
LOOPTERMINALBEGIN(1)
LOOPTERMINAL(0,6,8)
result = vpx_method_Case_20_Data_2F_Push_20_Lists_20_Data_case_1_local_7(PARAMETERS,TERMINAL(7),LIST(5),LOOP(0),ROOT(8));
REPEATFINISH
} else {
ROOTNULL(8,TERMINAL(6))
}

if( (repeatLimit = vpx_multiplex(1,TERMINAL(3))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Case_20_Data_2F_Push_20_Lists_20_Data_case_1_local_8(PARAMETERS,LIST(3));
REPEATFINISH
} else {
}

result = kSuccess;

FOOTERSINGLECASE(9)
}

enum opTrigger vpx_method_Case_20_Data_2F_Remove_20_Self_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Case_20_Data_2F_Remove_20_Self_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(13)
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

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(9),ROOT(11),ROOT(12));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Dispose_20_Record,1,0,TERMINAL(12));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Close,1,0,TERMINAL(11));

result = vpx_method_Case_20_Data_2F_Order_20_Records(PARAMETERS,TERMINAL(10),TERMINAL(8));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Update_20_List_20_Data,2,0,TERMINAL(0),TERMINAL(10));

result = kSuccess;

FOOTER(13)
}

enum opTrigger vpx_method_Case_20_Data_2F_Remove_20_Self_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Case_20_Data_2F_Remove_20_Self_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_Case_20_Data_2F_Remove_20_Self_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Case_20_Data_2F_Remove_20_Self_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Case_20_Data_2F_Remove_20_Self_case_1_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Case_20_Data_2F_Remove_20_Self_case_1_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Case_20_Data_2F_Remove_20_Self(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Grandparent_20_Helper,1,1,TERMINAL(0),ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Container,1,1,TERMINAL(0),ROOT(2));

result = vpx_method_Case_20_Data_2F_Remove_20_Self_case_1_local_4(PARAMETERS,TERMINAL(0));

result = vpx_method_Case_20_Data_2F_Update_20_Names(PARAMETERS,TERMINAL(1),TERMINAL(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Case_20_Data_2F_Do_20_Sort_20_Operations_case_1_local_2_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Case_20_Data_2F_Do_20_Sort_20_Operations_case_1_local_2_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Case_20_Data_2F_Do_20_Sort_20_Operations_case_1_local_2_case_1_local_6_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2);
enum opTrigger vpx_method_Case_20_Data_2F_Do_20_Sort_20_Operations_case_1_local_2_case_1_local_6_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_match(PARAMETERS,"0",TERMINAL(2));
NEXTCASEONFAILURE

result = kSuccess;
FINISHONSUCCESS

OUTPUT(0,TERMINAL(0))
OUTPUT(1,TERMINAL(1))
OUTPUT(2,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_Case_20_Data_2F_Do_20_Sort_20_Operations_case_1_local_2_case_1_local_6_case_1_local_5_case_2_local_4_case_1_local_3_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Case_20_Data_2F_Do_20_Sort_20_Operations_case_1_local_2_case_1_local_6_case_1_local_5_case_2_local_4_case_1_local_3_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Root,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
NEXTCASEONSUCCESS

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(2),ROOT(3),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Case_20_Data_2F_Do_20_Sort_20_Operations_case_1_local_2_case_1_local_6_case_1_local_5_case_2_local_4_case_1_local_3_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Case_20_Data_2F_Do_20_Sort_20_Operations_case_1_local_2_case_1_local_6_case_1_local_5_case_2_local_4_case_1_local_3_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

OUTPUT(0,NONE)
FOOTERWITHNONE(1)
}

enum opTrigger vpx_method_Case_20_Data_2F_Do_20_Sort_20_Operations_case_1_local_2_case_1_local_6_case_1_local_5_case_2_local_4_case_1_local_3_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Case_20_Data_2F_Do_20_Sort_20_Operations_case_1_local_2_case_1_local_6_case_1_local_5_case_2_local_4_case_1_local_3_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Case_20_Data_2F_Do_20_Sort_20_Operations_case_1_local_2_case_1_local_6_case_1_local_5_case_2_local_4_case_1_local_3_case_1_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Case_20_Data_2F_Do_20_Sort_20_Operations_case_1_local_2_case_1_local_6_case_1_local_5_case_2_local_4_case_1_local_3_case_1_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Case_20_Data_2F_Do_20_Sort_20_Operations_case_1_local_2_case_1_local_6_case_1_local_5_case_2_local_4_case_1_local_3_case_1_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Case_20_Data_2F_Do_20_Sort_20_Operations_case_1_local_2_case_1_local_6_case_1_local_5_case_2_local_4_case_1_local_3_case_1_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP__28_in_29_,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_match(PARAMETERS,"0",TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_attach_2D_r,2,1,TERMINAL(0),TERMINAL(1),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_Case_20_Data_2F_Do_20_Sort_20_Operations_case_1_local_2_case_1_local_6_case_1_local_5_case_2_local_4_case_1_local_3_case_1_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Case_20_Data_2F_Do_20_Sort_20_Operations_case_1_local_2_case_1_local_6_case_1_local_5_case_2_local_4_case_1_local_3_case_1_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(2)
}

enum opTrigger vpx_method_Case_20_Data_2F_Do_20_Sort_20_Operations_case_1_local_2_case_1_local_6_case_1_local_5_case_2_local_4_case_1_local_3_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Case_20_Data_2F_Do_20_Sort_20_Operations_case_1_local_2_case_1_local_6_case_1_local_5_case_2_local_4_case_1_local_3_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Case_20_Data_2F_Do_20_Sort_20_Operations_case_1_local_2_case_1_local_6_case_1_local_5_case_2_local_4_case_1_local_3_case_1_local_7_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Case_20_Data_2F_Do_20_Sort_20_Operations_case_1_local_2_case_1_local_6_case_1_local_5_case_2_local_4_case_1_local_3_case_1_local_7_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Case_20_Data_2F_Do_20_Sort_20_Operations_case_1_local_2_case_1_local_6_case_1_local_5_case_2_local_4_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Case_20_Data_2F_Do_20_Sort_20_Operations_case_1_local_2_case_1_local_6_case_1_local_5_case_2_local_4_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(9)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Synchros,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_Inputs,TERMINAL(1),ROOT(3),ROOT(4));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(4))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Case_20_Data_2F_Do_20_Sort_20_Operations_case_1_local_2_case_1_local_6_case_1_local_5_case_2_local_4_case_1_local_3_case_1_local_4(PARAMETERS,LIST(4),ROOT(5));
LISTROOT(5,0)
REPEATFINISH
LISTROOTFINISH(5,0)
LISTROOTEND
} else {
ROOTEMPTY(5)
}

result = vpx_call_primitive(PARAMETERS,VPLP__28_join_29_,2,1,TERMINAL(5),TERMINAL(2),ROOT(6));

result = vpx_constant(PARAMETERS,"( )",ROOT(7));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(6))) ){
REPEATBEGINWITHCOUNTER
LOOPTERMINALBEGIN(1)
LOOPTERMINAL(0,7,8)
result = vpx_method_Case_20_Data_2F_Do_20_Sort_20_Operations_case_1_local_2_case_1_local_6_case_1_local_5_case_2_local_4_case_1_local_3_case_1_local_7(PARAMETERS,LOOP(0),LIST(6),ROOT(8));
REPEATFINISH
} else {
ROOTNULL(8,TERMINAL(7))
}

result = kSuccess;

OUTPUT(0,TERMINAL(8))
FOOTERSINGLECASE(9)
}

enum opTrigger vpx_method_Case_20_Data_2F_Do_20_Sort_20_Operations_case_1_local_2_case_1_local_6_case_1_local_5_case_2_local_4_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Case_20_Data_2F_Do_20_Sort_20_Operations_case_1_local_2_case_1_local_6_case_1_local_5_case_2_local_4_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP__28_in_29_,2,1,TERMINAL(1),TERMINAL(0),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_max,2,1,TERMINAL(3),TERMINAL(2),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Case_20_Data_2F_Do_20_Sort_20_Operations_case_1_local_2_case_1_local_6_case_1_local_5_case_2_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Case_20_Data_2F_Do_20_Sort_20_Operations_case_1_local_2_case_1_local_6_case_1_local_5_case_2_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_nth,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_method_Case_20_Data_2F_Do_20_Sort_20_Operations_case_1_local_2_case_1_local_6_case_1_local_5_case_2_local_4_case_1_local_3(PARAMETERS,TERMINAL(2),ROOT(3));

result = vpx_constant(PARAMETERS,"0",ROOT(4));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(3))) ){
REPEATBEGINWITHCOUNTER
LOOPTERMINALBEGIN(1)
LOOPTERMINAL(0,4,5)
result = vpx_method_Case_20_Data_2F_Do_20_Sort_20_Operations_case_1_local_2_case_1_local_6_case_1_local_5_case_2_local_4_case_1_local_5(PARAMETERS,LIST(3),TERMINAL(0),LOOP(0),ROOT(5));
REPEATFINISH
} else {
ROOTNULL(5,TERMINAL(4))
}

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Case_20_Data_2F_Do_20_Sort_20_Operations_case_1_local_2_case_1_local_6_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2);
enum opTrigger vpx_method_Case_20_Data_2F_Do_20_Sort_20_Operations_case_1_local_2_case_1_local_6_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_plus_2D_one,1,1,TERMINAL(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP__3E3D_,2,0,TERMINAL(2),TERMINAL(4));
FAILONFAILURE

result = vpx_method_Case_20_Data_2F_Do_20_Sort_20_Operations_case_1_local_2_case_1_local_6_case_1_local_5_case_2_local_4(PARAMETERS,TERMINAL(0),TERMINAL(1),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP__3E_,2,0,TERMINAL(5),TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_detach_2D_nth,2,2,TERMINAL(0),TERMINAL(5),ROOT(6),ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP_insert_2D_nth,3,1,TERMINAL(6),TERMINAL(7),TERMINAL(1),ROOT(8));

result = kSuccess;

OUTPUT(0,TERMINAL(8))
OUTPUT(1,TERMINAL(1))
OUTPUT(2,TERMINAL(4))
FOOTER(9)
}

enum opTrigger vpx_method_Case_20_Data_2F_Do_20_Sort_20_Operations_case_1_local_2_case_1_local_6_case_1_local_5_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2);
enum opTrigger vpx_method_Case_20_Data_2F_Do_20_Sort_20_Operations_case_1_local_2_case_1_local_6_case_1_local_5_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP__3D_,2,0,TERMINAL(1),TERMINAL(2));
FINISHONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP__2B_1,1,1,TERMINAL(1),ROOT(4));

result = vpx_constant(PARAMETERS,"0",ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(0))
OUTPUT(1,TERMINAL(4))
OUTPUT(2,TERMINAL(5))
FOOTER(6)
}

enum opTrigger vpx_method_Case_20_Data_2F_Do_20_Sort_20_Operations_case_1_local_2_case_1_local_6_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2);
enum opTrigger vpx_method_Case_20_Data_2F_Do_20_Sort_20_Operations_case_1_local_2_case_1_local_6_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Case_20_Data_2F_Do_20_Sort_20_Operations_case_1_local_2_case_1_local_6_case_1_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0,root1,root2))
if(vpx_method_Case_20_Data_2F_Do_20_Sort_20_Operations_case_1_local_2_case_1_local_6_case_1_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0,root1,root2))
vpx_method_Case_20_Data_2F_Do_20_Sort_20_Operations_case_1_local_2_case_1_local_6_case_1_local_5_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0,root1,root2);
return outcome;
}

enum opTrigger vpx_method_Case_20_Data_2F_Do_20_Sort_20_Operations_case_1_local_2_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Case_20_Data_2F_Do_20_Sort_20_Operations_case_1_local_2_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"1",ROOT(1));

result = vpx_constant(PARAMETERS,"0",ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP__28_length_29_,1,1,TERMINAL(0),ROOT(3));

REPEATBEGIN
LOOPTERMINALBEGIN(3)
LOOPTERMINAL(0,0,4)
LOOPTERMINAL(1,1,5)
LOOPTERMINAL(2,2,6)
result = vpx_method_Case_20_Data_2F_Do_20_Sort_20_Operations_case_1_local_2_case_1_local_6_case_1_local_5(PARAMETERS,LOOP(0),LOOP(1),TERMINAL(3),LOOP(2),ROOT(4),ROOT(5),ROOT(6));
FAILONFAILURE
REPEATFINISH

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERSINGLECASE(7)
}

enum opTrigger vpx_method_Case_20_Data_2F_Do_20_Sort_20_Operations_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Case_20_Data_2F_Do_20_Sort_20_Operations_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(11)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(0),ROOT(1),ROOT(2));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(2))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Case_20_Data_2F_Do_20_Sort_20_Operations_case_1_local_2_case_1_local_3(PARAMETERS,LIST(2),ROOT(3));
LISTROOT(3,0)
REPEATFINISH
LISTROOTFINISH(3,0)
LISTROOTEND
} else {
ROOTEMPTY(3)
}

result = vpx_call_primitive(PARAMETERS,VPLP_detach_2D_r,1,2,TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_detach_2D_l,1,2,TERMINAL(4),ROOT(6),ROOT(7));

result = vpx_method_Case_20_Data_2F_Do_20_Sort_20_Operations_case_1_local_2_case_1_local_6(PARAMETERS,TERMINAL(7),ROOT(8));
FAILONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_attach_2D_l,2,1,TERMINAL(6),TERMINAL(8),ROOT(9));

result = vpx_call_primitive(PARAMETERS,VPLP_attach_2D_r,2,1,TERMINAL(9),TERMINAL(5),ROOT(10));

result = kSuccess;

OUTPUT(0,TERMINAL(10))
FOOTERSINGLECASE(11)
}

enum opTrigger vpx_method_Case_20_Data_2F_Do_20_Sort_20_Operations_case_1_local_3_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Case_20_Data_2F_Do_20_Sort_20_Operations_case_1_local_3_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Owner,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Case_20_Data_2F_Do_20_Sort_20_Operations_case_1_local_3_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Case_20_Data_2F_Do_20_Sort_20_Operations_case_1_local_3_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Record,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Case_20_Data_2F_Do_20_Sort_20_Operations_case_1_local_3_case_1_local_12(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Case_20_Data_2F_Do_20_Sort_20_Operations_case_1_local_3_case_1_local_12(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Outputs,TERMINAL(0),ROOT(1),ROOT(2));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(2))) ){
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Update_20_Record,1,0,LIST(2));
REPEATFINISH
} else {
}

result = vpx_get(PARAMETERS,kVPXValue_Inputs,TERMINAL(1),ROOT(3),ROOT(4));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(4))) ){
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Update_20_Record,1,0,LIST(4));
REPEATFINISH
} else {
}

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Case_20_Data_2F_Do_20_Sort_20_Operations_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Case_20_Data_2F_Do_20_Sort_20_Operations_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(15)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

if( (repeatLimit = vpx_multiplex(1,TERMINAL(1))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Case_20_Data_2F_Do_20_Sort_20_Operations_case_1_local_3_case_1_local_2(PARAMETERS,LIST(1),ROOT(2));
LISTROOT(2,0)
REPEATFINISH
LISTROOTFINISH(2,0)
LISTROOTEND
} else {
ROOTEMPTY(2)
}

result = vpx_set(PARAMETERS,kVPXValue_List,TERMINAL(0),TERMINAL(2),ROOT(3));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(1))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Case_20_Data_2F_Do_20_Sort_20_Operations_case_1_local_3_case_1_local_4(PARAMETERS,LIST(1),ROOT(4));
LISTROOT(4,0)
REPEATFINISH
LISTROOTFINISH(4,0)
LISTROOTEND
} else {
ROOTEMPTY(4)
}

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(3),ROOT(5),ROOT(6));

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(6),ROOT(7),ROOT(8));

result = vpx_get(PARAMETERS,kVPXValue_Record,TERMINAL(8),ROOT(9),ROOT(10));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Project_20_Data,1,1,TERMINAL(9),ROOT(11));

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(11),ROOT(12),ROOT(13));

result = vpx_constant(PARAMETERS,"operation",ROOT(14));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Order_20_Elements,4,0,TERMINAL(13),TERMINAL(10),TERMINAL(4),TERMINAL(14));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(1))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Case_20_Data_2F_Do_20_Sort_20_Operations_case_1_local_3_case_1_local_12(PARAMETERS,LIST(1));
REPEATFINISH
} else {
}

result = kSuccess;

FOOTERSINGLECASE(15)
}

enum opTrigger vpx_method_Case_20_Data_2F_Do_20_Sort_20_Operations(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Case_20_Data_2F_Do_20_Sort_20_Operations_case_1_local_2(PARAMETERS,TERMINAL(0),ROOT(1));
FAILONFAILURE

result = vpx_method_Case_20_Data_2F_Do_20_Sort_20_Operations_case_1_local_3(PARAMETERS,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Case_20_Data_2F_Update_20_List_20_Data_case_1_local_4_case_1_local_12_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Case_20_Data_2F_Update_20_List_20_Data_case_1_local_4_case_1_local_12_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Inputs,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP__28_length_29_,1,1,TERMINAL(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_equals,2,0,TERMINAL(4),TERMINAL(1));
NEXTCASEONFAILURE

result = kSuccess;

FOOTER(5)
}

enum opTrigger vpx_method_Case_20_Data_2F_Update_20_List_20_Data_case_1_local_4_case_1_local_12_case_2_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Case_20_Data_2F_Update_20_List_20_Data_case_1_local_4_case_1_local_12_case_2_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(2)
INPUT(0,0)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_Terminal,1,1,NONE,ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASEWITHNONE(2)
}

enum opTrigger vpx_method_Case_20_Data_2F_Update_20_List_20_Data_case_1_local_4_case_1_local_12_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Case_20_Data_2F_Update_20_List_20_Data_case_1_local_4_case_1_local_12_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(11)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Inputs,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP__28_length_29_,1,1,TERMINAL(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_lt,2,0,TERMINAL(4),TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_iminus,2,1,TERMINAL(1),TERMINAL(4),ROOT(5));

result = vpx_constant(PARAMETERS,"1",ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP_make_2D_list,3,1,TERMINAL(5),TERMINAL(6),TERMINAL(6),ROOT(7));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(7))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Case_20_Data_2F_Update_20_List_20_Data_case_1_local_4_case_1_local_12_case_2_local_8(PARAMETERS,LIST(7),ROOT(8));
LISTROOT(8,0)
REPEATFINISH
LISTROOTFINISH(8,0)
LISTROOTEND
} else {
ROOTEMPTY(8)
}

result = vpx_call_primitive(PARAMETERS,VPLP__28_join_29_,2,1,TERMINAL(3),TERMINAL(8),ROOT(9));

result = vpx_set(PARAMETERS,kVPXValue_Inputs,TERMINAL(2),TERMINAL(9),ROOT(10));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(8))) ){
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open,2,0,LIST(8),TERMINAL(10));
REPEATFINISH
} else {
}

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Position_20_Terminal,2,0,TERMINAL(10),TERMINAL(9));

result = kSuccess;

FOOTER(11)
}

enum opTrigger vpx_method_Case_20_Data_2F_Update_20_List_20_Data_case_1_local_4_case_1_local_12_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Case_20_Data_2F_Update_20_List_20_Data_case_1_local_4_case_1_local_12_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Inputs,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_split_2D_nth,2,2,TERMINAL(3),TERMINAL(1),ROOT(4),ROOT(5));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(5))) ){
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Remove_20_Just_20_Self,1,0,LIST(5));
REPEATFINISH
} else {
}

result = vpx_set(PARAMETERS,kVPXValue_Inputs,TERMINAL(2),TERMINAL(4),ROOT(6));

result = kSuccess;

FOOTER(7)
}

enum opTrigger vpx_method_Case_20_Data_2F_Update_20_List_20_Data_case_1_local_4_case_1_local_12(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Case_20_Data_2F_Update_20_List_20_Data_case_1_local_4_case_1_local_12(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Case_20_Data_2F_Update_20_List_20_Data_case_1_local_4_case_1_local_12_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
if(vpx_method_Case_20_Data_2F_Update_20_List_20_Data_case_1_local_4_case_1_local_12_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Case_20_Data_2F_Update_20_List_20_Data_case_1_local_4_case_1_local_12_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Case_20_Data_2F_Update_20_List_20_Data_case_1_local_4_case_1_local_15_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Case_20_Data_2F_Update_20_List_20_Data_case_1_local_4_case_1_local_15_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Outputs,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP__28_length_29_,1,1,TERMINAL(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_equals,2,0,TERMINAL(4),TERMINAL(1));
NEXTCASEONFAILURE

result = kSuccess;

FOOTER(5)
}

enum opTrigger vpx_method_Case_20_Data_2F_Update_20_List_20_Data_case_1_local_4_case_1_local_15_case_2_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Case_20_Data_2F_Update_20_List_20_Data_case_1_local_4_case_1_local_15_case_2_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(2)
INPUT(0,0)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_Root,1,1,NONE,ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASEWITHNONE(2)
}

enum opTrigger vpx_method_Case_20_Data_2F_Update_20_List_20_Data_case_1_local_4_case_1_local_15_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Case_20_Data_2F_Update_20_List_20_Data_case_1_local_4_case_1_local_15_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(11)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Outputs,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP__28_length_29_,1,1,TERMINAL(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_lt,2,0,TERMINAL(4),TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_iminus,2,1,TERMINAL(1),TERMINAL(4),ROOT(5));

result = vpx_constant(PARAMETERS,"1",ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP_make_2D_list,3,1,TERMINAL(5),TERMINAL(6),TERMINAL(6),ROOT(7));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(7))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Case_20_Data_2F_Update_20_List_20_Data_case_1_local_4_case_1_local_15_case_2_local_8(PARAMETERS,LIST(7),ROOT(8));
LISTROOT(8,0)
REPEATFINISH
LISTROOTFINISH(8,0)
LISTROOTEND
} else {
ROOTEMPTY(8)
}

result = vpx_call_primitive(PARAMETERS,VPLP__28_join_29_,2,1,TERMINAL(3),TERMINAL(8),ROOT(9));

result = vpx_set(PARAMETERS,kVPXValue_Outputs,TERMINAL(2),TERMINAL(9),ROOT(10));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(8))) ){
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open,2,0,LIST(8),TERMINAL(10));
REPEATFINISH
} else {
}

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Position_20_Root,2,0,TERMINAL(10),TERMINAL(9));

result = kSuccess;

FOOTER(11)
}

enum opTrigger vpx_method_Case_20_Data_2F_Update_20_List_20_Data_case_1_local_4_case_1_local_15_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Case_20_Data_2F_Update_20_List_20_Data_case_1_local_4_case_1_local_15_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Outputs,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_split_2D_nth,2,2,TERMINAL(3),TERMINAL(1),ROOT(4),ROOT(5));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(5))) ){
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Remove_20_Just_20_Self,1,0,LIST(5));
REPEATFINISH
} else {
}

result = vpx_set(PARAMETERS,kVPXValue_Outputs,TERMINAL(2),TERMINAL(4),ROOT(6));

result = kSuccess;

FOOTER(7)
}

enum opTrigger vpx_method_Case_20_Data_2F_Update_20_List_20_Data_case_1_local_4_case_1_local_15(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Case_20_Data_2F_Update_20_List_20_Data_case_1_local_4_case_1_local_15(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Case_20_Data_2F_Update_20_List_20_Data_case_1_local_4_case_1_local_15_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
if(vpx_method_Case_20_Data_2F_Update_20_List_20_Data_case_1_local_4_case_1_local_15_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Case_20_Data_2F_Update_20_List_20_Data_case_1_local_4_case_1_local_15_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Case_20_Data_2F_Update_20_List_20_Data_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Case_20_Data_2F_Update_20_List_20_Data_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(16)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
TERMINATEONSUCCESS

result = vpx_constant(PARAMETERS,"Operation Data",ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(0),TERMINAL(3),ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(4),ROOT(5),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP__28_length_29_,1,1,TERMINAL(6),ROOT(7));

result = vpx_match(PARAMETERS,"0",TERMINAL(7));
TERMINATEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_nth,2,1,TERMINAL(6),TERMINAL(7),ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,1,TERMINAL(6),ROOT(9));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Outarity,1,1,TERMINAL(1),ROOT(10));

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(8),ROOT(11),ROOT(12));

result = vpx_method_Case_20_Data_2F_Update_20_List_20_Data_case_1_local_4_case_1_local_12(PARAMETERS,TERMINAL(12),TERMINAL(10));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Inarity,1,1,TERMINAL(1),ROOT(13));

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(9),ROOT(14),ROOT(15));

result = vpx_method_Case_20_Data_2F_Update_20_List_20_Data_case_1_local_4_case_1_local_15(PARAMETERS,TERMINAL(15),TERMINAL(13));

result = kSuccess;

FOOTERSINGLECASE(16)
}

enum opTrigger vpx_method_Case_20_Data_2F_Update_20_List_20_Data(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Grandparent_20_Helper,1,1,TERMINAL(0),ROOT(2));

result = vpx_call_context_method(PARAMETERS,kVPXMethod_Update_20_Names,2,0,TERMINAL(2),TERMINAL(1));

result = vpx_method_Case_20_Data_2F_Update_20_List_20_Data_case_1_local_4(PARAMETERS,TERMINAL(0),TERMINAL(2),TERMINAL(1));

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(1),ROOT(3),ROOT(4));

result = vpx_method_Case_20_Data_2F_Order_20_Records(PARAMETERS,TERMINAL(3),TERMINAL(4));

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Case_20_Data_2F_Update_20_Names_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3);
enum opTrigger vpx_method_Case_20_Data_2F_Update_20_Names_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3)
{
HEADER(13)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(1),ROOT(4),ROOT(5));

result = vpx_constant(PARAMETERS,"\":\"",ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP_to_2D_string,1,1,TERMINAL(2),ROOT(7));

result = vpx_constant(PARAMETERS,"\" \"",ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(0),TERMINAL(8),ROOT(9));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,3,1,TERMINAL(9),TERMINAL(7),TERMINAL(6),ROOT(10));

result = vpx_call_primitive(PARAMETERS,VPLP_to_2D_string,1,1,TERMINAL(3),ROOT(11));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(10),TERMINAL(11),ROOT(12));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Name,2,0,TERMINAL(5),TERMINAL(12));

result = kSuccess;

FOOTERSINGLECASE(13)
}

enum opTrigger vpx_method_Case_20_Data_2F_Update_20_Names(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(0));
TERMINATEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP__28_length_29_,1,1,TERMINAL(3),ROOT(4));

result = vpx_constant(PARAMETERS,"1",ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_make_2D_list,3,1,TERMINAL(4),TERMINAL(5),TERMINAL(5),ROOT(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Path_20_Name,1,1,TERMINAL(0),ROOT(7));

if( (repeatLimit = vpx_multiplex(2,TERMINAL(3),TERMINAL(6))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Case_20_Data_2F_Update_20_Names_case_1_local_8(PARAMETERS,TERMINAL(7),LIST(3),LIST(6),TERMINAL(4));
REPEATFINISH
} else {
}

result = kSuccess;

FOOTERSINGLECASE(8)
}

enum opTrigger vpx_method_Case_20_Data_2F_Dispose_20_Record_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Case_20_Data_2F_Dispose_20_Record_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
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

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Destroy_20_Case,2,0,TERMINAL(3),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Case_20_Data_2F_Dispose_20_Record(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Record,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Project_20_Data,1,1,TERMINAL(0),ROOT(3));

result = vpx_constant(PARAMETERS,"NULL",ROOT(4));

result = vpx_method_Case_20_Data_2F_Dispose_20_Record_case_1_local_5(PARAMETERS,TERMINAL(3),TERMINAL(2));

result = vpx_set(PARAMETERS,kVPXValue_Record,TERMINAL(1),TERMINAL(4),ROOT(5));

result = kSuccess;

FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Case_20_Data_2F_Order_20_Records_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Case_20_Data_2F_Order_20_Records_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_Record,TERMINAL(2),ROOT(3),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Case_20_Data_2F_Order_20_Records(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(13)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_get(PARAMETERS,kVPXValue_Record,TERMINAL(5),ROOT(6),ROOT(7));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(1))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Case_20_Data_2F_Order_20_Records_case_1_local_5(PARAMETERS,LIST(1),ROOT(8));
LISTROOT(8,0)
REPEATFINISH
LISTROOTFINISH(8,0)
LISTROOTEND
} else {
ROOTEMPTY(8)
}

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Project_20_Data,1,1,TERMINAL(6),ROOT(9));

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(9),ROOT(10),ROOT(11));

result = vpx_constant(PARAMETERS,"case",ROOT(12));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Order_20_Elements,4,0,TERMINAL(11),TERMINAL(7),TERMINAL(8),TERMINAL(12));

result = kSuccess;

FOOTERSINGLECASE(13)
}

enum opTrigger vpx_method_Case_20_Data_2F_Post_20_Open_case_1_local_6_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Case_20_Data_2F_Post_20_Open_case_1_local_6_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP__28_in_29_,2,1,TERMINAL(1),TERMINAL(0),ROOT(2));

result = vpx_match(PARAMETERS,"0",TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Close,1,0,TERMINAL(0));

result = kSuccess;

OUTPUT(0,NONE)
FOOTERWITHNONE(3)
}

enum opTrigger vpx_method_Case_20_Data_2F_Post_20_Open_case_1_local_6_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Case_20_Data_2F_Post_20_Open_case_1_local_6_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(2)
}

enum opTrigger vpx_method_Case_20_Data_2F_Post_20_Open_case_1_local_6_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Case_20_Data_2F_Post_20_Open_case_1_local_6_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Case_20_Data_2F_Post_20_Open_case_1_local_6_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Case_20_Data_2F_Post_20_Open_case_1_local_6_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Case_20_Data_2F_Post_20_Open_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Case_20_Data_2F_Post_20_Open_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Synchros,TERMINAL(0),ROOT(2),ROOT(3));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(3))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Case_20_Data_2F_Post_20_Open_case_1_local_6_case_1_local_3(PARAMETERS,LIST(3),TERMINAL(1),ROOT(4));
LISTROOT(4,0)
REPEATFINISH
LISTROOTFINISH(4,0)
LISTROOTEND
} else {
ROOTEMPTY(4)
}

result = vpx_set(PARAMETERS,kVPXValue_Synchros,TERMINAL(2),TERMINAL(4),ROOT(5));

result = kSuccess;

FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Case_20_Data_2F_Post_20_Open(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Operation Data",ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(0),TERMINAL(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(3),ROOT(4),ROOT(5));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(5))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_get(PARAMETERS,kVPXValue_Helper,LIST(5),ROOT(6),ROOT(7));
LISTROOT(7,0)
REPEATFINISH
LISTROOTFINISH(7,0)
LISTROOTEND
} else {
ROOTNULL(6,NULL)
ROOTEMPTY(7)
}

if( (repeatLimit = vpx_multiplex(1,TERMINAL(7))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Case_20_Data_2F_Post_20_Open_case_1_local_6(PARAMETERS,LIST(7),TERMINAL(7));
REPEATFINISH
} else {
}

result = kSuccess;

FOOTERSINGLECASE(8)
}

enum opTrigger vpx_method_Case_20_Data_2F_Parse_20_CPX_20_Buffer_case_1_local_14_case_1_local_5_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Case_20_Data_2F_Parse_20_CPX_20_Buffer_case_1_local_14_case_1_local_5_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADERWITHNONE(7)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_List_20_Data,1,1,NONE,ROOT(2));

result = vpx_constant(PARAMETERS,"Case Data",ROOT(3));

result = vpx_set(PARAMETERS,kVPXValue_Helper_20_Name,TERMINAL(2),TERMINAL(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,1,1,TERMINAL(4),ROOT(5));

result = vpx_set(PARAMETERS,kVPXValue_Lists,TERMINAL(1),TERMINAL(5),ROOT(6));

result = kSuccess;

FOOTERSINGLECASEWITHNONE(7)
}

enum opTrigger vpx_method_Case_20_Data_2F_Parse_20_CPX_20_Buffer_case_1_local_14_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Case_20_Data_2F_Parse_20_CPX_20_Buffer_case_1_local_14_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_match(PARAMETERS,"local",TERMINAL(0));
TERMINATEONFAILURE

result = vpx_method_Case_20_Data_2F_Parse_20_CPX_20_Buffer_case_1_local_14_case_1_local_5_case_1_local_3(PARAMETERS,TERMINAL(1),TERMINAL(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Case_20_Data_2F_Parse_20_CPX_20_Buffer_case_1_local_14(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Case_20_Data_2F_Parse_20_CPX_20_Buffer_case_1_local_14(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Frame,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_set(PARAMETERS,kVPXValue_Frame,TERMINAL(1),TERMINAL(3),ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_Type,TERMINAL(2),ROOT(5),ROOT(6));

result = vpx_method_Case_20_Data_2F_Parse_20_CPX_20_Buffer_case_1_local_14_case_1_local_5(PARAMETERS,TERMINAL(6),TERMINAL(5),TERMINAL(4));

result = kSuccess;

FOOTERSINGLECASE(7)
}

enum opTrigger vpx_method_Case_20_Data_2F_Parse_20_CPX_20_Buffer_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2);
enum opTrigger vpx_method_Case_20_Data_2F_Parse_20_CPX_20_Buffer_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2)
{
HEADERWITHNONE(15)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_constant(PARAMETERS,"4",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_text,3,3,TERMINAL(3),TERMINAL(2),TERMINAL(4),ROOT(5),ROOT(6),ROOT(7));

result = vpx_match(PARAMETERS,"oper",TERMINAL(7));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_attach_2D_l,2,1,TERMINAL(0),TERMINAL(1),ROOT(8));

result = vpx_instantiate(PARAMETERS,kVPXClass_Operation_20_Data,1,1,NONE,ROOT(9));

result = vpx_instantiate(PARAMETERS,kVPXClass_Item_20_Data,1,1,NONE,ROOT(10));

result = vpx_constant(PARAMETERS,"Operation Data",ROOT(11));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(0),TERMINAL(11),ROOT(12));

result = vpx_set(PARAMETERS,kVPXValue_Parent,TERMINAL(10),TERMINAL(12),ROOT(13));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Install_20_Helper,2,0,TERMINAL(13),TERMINAL(9));

result = vpx_set(PARAMETERS,kVPXValue_Owner,TERMINAL(9),TERMINAL(13),ROOT(14));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Buffer_20_Initialization,3,0,TERMINAL(14),TERMINAL(6),TERMINAL(3));

result = vpx_method_Case_20_Data_2F_Parse_20_CPX_20_Buffer_case_1_local_14(PARAMETERS,TERMINAL(14),TERMINAL(13));

result = vpx_method_Helper_20_Data_2F_Add_20_To_20_List_20_Data(PARAMETERS,TERMINAL(14),TERMINAL(12));

result = kSuccess;

OUTPUT(0,TERMINAL(14))
OUTPUT(1,TERMINAL(8))
OUTPUT(2,TERMINAL(6))
FOOTERWITHNONE(15)
}

enum opTrigger vpx_method_Case_20_Data_2F_Parse_20_CPX_20_Buffer_case_2_local_12_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4);
enum opTrigger vpx_method_Case_20_Data_2F_Parse_20_CPX_20_Buffer_case_2_local_12_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4)
{
HEADER(19)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
INPUT(4,4)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(0),ROOT(5),ROOT(6));

result = vpx_method__28_Safe_20_Get_29_(PARAMETERS,TERMINAL(6),TERMINAL(1),ROOT(7));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(7),ROOT(8),ROOT(9));

result = vpx_get(PARAMETERS,kVPXValue_Inputs,TERMINAL(9),ROOT(10),ROOT(11));

result = vpx_method__28_Safe_20_Get_29_(PARAMETERS,TERMINAL(6),TERMINAL(3),ROOT(12));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(12),ROOT(13),ROOT(14));

result = vpx_get(PARAMETERS,kVPXValue_Outputs,TERMINAL(14),ROOT(15),ROOT(16));

result = vpx_method__28_Safe_20_Get_29_(PARAMETERS,TERMINAL(11),TERMINAL(2),ROOT(17));
NEXTCASEONFAILURE

result = vpx_method__28_Safe_20_Get_29_(PARAMETERS,TERMINAL(16),TERMINAL(4),ROOT(18));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Create_20_Connection,2,0,TERMINAL(17),TERMINAL(18));

result = kSuccess;

FOOTER(19)
}

enum opTrigger vpx_method_Case_20_Data_2F_Parse_20_CPX_20_Buffer_case_2_local_12_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4);
enum opTrigger vpx_method_Case_20_Data_2F_Parse_20_CPX_20_Buffer_case_2_local_12_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
INPUT(4,4)
result = kSuccess;

result = kSuccess;

FOOTER(5)
}

enum opTrigger vpx_method_Case_20_Data_2F_Parse_20_CPX_20_Buffer_case_2_local_12_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4);
enum opTrigger vpx_method_Case_20_Data_2F_Parse_20_CPX_20_Buffer_case_2_local_12_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4)
{
HEADER(10)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
INPUT(4,4)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(1),TERMINAL(2),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(3),TERMINAL(4),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(5),TERMINAL(6),ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP_to_2D_string,1,1,TERMINAL(7),ROOT(8));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Construct_20_Title,1,1,TERMINAL(0),ROOT(9));

result = vpx_method_Debug_20_OSError(PARAMETERS,TERMINAL(9),TERMINAL(8));

result = kSuccess;

FOOTER(10)
}

enum opTrigger vpx_method_Case_20_Data_2F_Parse_20_CPX_20_Buffer_case_2_local_12(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4);
enum opTrigger vpx_method_Case_20_Data_2F_Parse_20_CPX_20_Buffer_case_2_local_12(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Case_20_Data_2F_Parse_20_CPX_20_Buffer_case_2_local_12_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,terminal4))
if(vpx_method_Case_20_Data_2F_Parse_20_CPX_20_Buffer_case_2_local_12_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,terminal4))
vpx_method_Case_20_Data_2F_Parse_20_CPX_20_Buffer_case_2_local_12_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,terminal4);
return outcome;
}

enum opTrigger vpx_method_Case_20_Data_2F_Parse_20_CPX_20_Buffer_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2);
enum opTrigger vpx_method_Case_20_Data_2F_Parse_20_CPX_20_Buffer_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2)
{
HEADER(23)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_constant(PARAMETERS,"4",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_text,3,3,TERMINAL(3),TERMINAL(2),TERMINAL(4),ROOT(5),ROOT(6),ROOT(7));

result = vpx_match(PARAMETERS,"segm",TERMINAL(7));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"2",ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_integer,3,3,TERMINAL(5),TERMINAL(6),TERMINAL(8),ROOT(9),ROOT(10),ROOT(11));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_integer,3,3,TERMINAL(9),TERMINAL(10),TERMINAL(8),ROOT(12),ROOT(13),ROOT(14));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_integer,3,3,TERMINAL(12),TERMINAL(13),TERMINAL(8),ROOT(15),ROOT(16),ROOT(17));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_integer,3,3,TERMINAL(15),TERMINAL(16),TERMINAL(8),ROOT(18),ROOT(19),ROOT(20));

result = vpx_constant(PARAMETERS,"Operation Data",ROOT(21));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(0),TERMINAL(21),ROOT(22));

result = vpx_method_Case_20_Data_2F_Parse_20_CPX_20_Buffer_case_2_local_12(PARAMETERS,TERMINAL(22),TERMINAL(17),TERMINAL(20),TERMINAL(11),TERMINAL(14));

result = kSuccess;

OUTPUT(0,TERMINAL(0))
OUTPUT(1,TERMINAL(1))
OUTPUT(2,TERMINAL(19))
FOOTER(23)
}

enum opTrigger vpx_method_Case_20_Data_2F_Parse_20_CPX_20_Buffer_case_3_local_11(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Case_20_Data_2F_Parse_20_CPX_20_Buffer_case_3_local_11(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(10)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP__28_length_29_,1,1,TERMINAL(0),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP__3C_,2,0,TERMINAL(3),TERMINAL(2));
TERMINATEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_nth,2,1,TERMINAL(0),TERMINAL(2),ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(4),ROOT(5),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP__3C_,2,0,TERMINAL(3),TERMINAL(1));
TERMINATEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_nth,2,1,TERMINAL(0),TERMINAL(1),ROOT(7));

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(7),ROOT(8),ROOT(9));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Create_20_Synchro,2,0,TERMINAL(9),TERMINAL(6));

result = kSuccess;

FOOTERSINGLECASE(10)
}

enum opTrigger vpx_method_Case_20_Data_2F_Parse_20_CPX_20_Buffer_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2);
enum opTrigger vpx_method_Case_20_Data_2F_Parse_20_CPX_20_Buffer_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2)
{
HEADER(19)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_constant(PARAMETERS,"4",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_text,3,3,TERMINAL(3),TERMINAL(2),TERMINAL(4),ROOT(5),ROOT(6),ROOT(7));

result = vpx_match(PARAMETERS,"sync",TERMINAL(7));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"2",ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_integer,3,3,TERMINAL(5),TERMINAL(6),TERMINAL(8),ROOT(9),ROOT(10),ROOT(11));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_integer,3,3,TERMINAL(9),TERMINAL(10),TERMINAL(8),ROOT(12),ROOT(13),ROOT(14));

result = vpx_constant(PARAMETERS,"Operation Data",ROOT(15));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(0),TERMINAL(15),ROOT(16));

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(16),ROOT(17),ROOT(18));

result = vpx_method_Case_20_Data_2F_Parse_20_CPX_20_Buffer_case_3_local_11(PARAMETERS,TERMINAL(18),TERMINAL(11),TERMINAL(14));

result = kSuccess;

OUTPUT(0,TERMINAL(0))
OUTPUT(1,TERMINAL(1))
OUTPUT(2,TERMINAL(13))
FOOTER(19)
}

enum opTrigger vpx_method_Case_20_Data_2F_Parse_20_CPX_20_Buffer_case_4_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Case_20_Data_2F_Parse_20_CPX_20_Buffer_case_4_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(11)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"4",ROOT(2));

result = vpx_constant(PARAMETERS,"4",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_integer,3,3,TERMINAL(0),TERMINAL(1),TERMINAL(3),ROOT(4),ROOT(5),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_text,3,3,TERMINAL(4),TERMINAL(5),TERMINAL(2),ROOT(7),ROOT(8),ROOT(9));

result = vpx_match(PARAMETERS,"link",TERMINAL(9));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP__2B2B_,2,1,TERMINAL(5),TERMINAL(6),ROOT(10));

result = kSuccess;

OUTPUT(0,TERMINAL(10))
FOOTER(11)
}

enum opTrigger vpx_method_Case_20_Data_2F_Parse_20_CPX_20_Buffer_case_4_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Case_20_Data_2F_Parse_20_CPX_20_Buffer_case_4_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Case_20_Data_2F_Parse_20_CPX_20_Buffer_case_4_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Case_20_Data_2F_Parse_20_CPX_20_Buffer_case_4_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Case_20_Data_2F_Parse_20_CPX_20_Buffer_case_4_local_6_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Case_20_Data_2F_Parse_20_CPX_20_Buffer_case_4_local_6_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Case_20_Data_2F_Parse_20_CPX_20_Buffer_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2);
enum opTrigger vpx_method_Case_20_Data_2F_Parse_20_CPX_20_Buffer_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2)
{
HEADER(11)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_constant(PARAMETERS,"8",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_text,3,3,TERMINAL(3),TERMINAL(2),TERMINAL(4),ROOT(5),ROOT(6),ROOT(7));

result = vpx_match(PARAMETERS,"end case",TERMINAL(7));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_detach_2D_l,1,2,TERMINAL(1),ROOT(8),ROOT(9));

result = vpx_method_Case_20_Data_2F_Parse_20_CPX_20_Buffer_case_4_local_6(PARAMETERS,TERMINAL(3),TERMINAL(6),ROOT(10));

result = kSuccess;

OUTPUT(0,TERMINAL(8))
OUTPUT(1,TERMINAL(9))
OUTPUT(2,TERMINAL(10))
FOOTER(11)
}

enum opTrigger vpx_method_Case_20_Data_2F_Parse_20_CPX_20_Buffer_case_5_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Case_20_Data_2F_Parse_20_CPX_20_Buffer_case_5_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
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

enum opTrigger vpx_method_Case_20_Data_2F_Parse_20_CPX_20_Buffer_case_5(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2);
enum opTrigger vpx_method_Case_20_Data_2F_Parse_20_CPX_20_Buffer_case_5(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2)
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
result = vpx_method_Case_20_Data_2F_Parse_20_CPX_20_Buffer_case_5_local_8(PARAMETERS,TERMINAL(5),LOOP(0),TERMINAL(8),ROOT(11));
REPEATFINISH

result = kSuccess;

OUTPUT(0,TERMINAL(0))
OUTPUT(1,TERMINAL(1))
OUTPUT(2,TERMINAL(11))
FOOTER(12)
}

enum opTrigger vpx_method_Case_20_Data_2F_Parse_20_CPX_20_Buffer_case_6(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2);
enum opTrigger vpx_method_Case_20_Data_2F_Parse_20_CPX_20_Buffer_case_6(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2)
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

enum opTrigger vpx_method_Case_20_Data_2F_Parse_20_CPX_20_Buffer(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Case_20_Data_2F_Parse_20_CPX_20_Buffer_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0,root1,root2))
if(vpx_method_Case_20_Data_2F_Parse_20_CPX_20_Buffer_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0,root1,root2))
if(vpx_method_Case_20_Data_2F_Parse_20_CPX_20_Buffer_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0,root1,root2))
if(vpx_method_Case_20_Data_2F_Parse_20_CPX_20_Buffer_case_4(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0,root1,root2))
if(vpx_method_Case_20_Data_2F_Parse_20_CPX_20_Buffer_case_5(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0,root1,root2))
vpx_method_Case_20_Data_2F_Parse_20_CPX_20_Buffer_case_6(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0,root1,root2);
return outcome;
}

enum opTrigger vpx_method_Case_20_Data_2F_Set_20_Name_case_1_local_4_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Case_20_Data_2F_Set_20_Name_case_1_local_4_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Send_20_Refresh,1,0,TERMINAL(0));

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_Case_20_Data_2F_Set_20_Name_case_1_local_4_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Case_20_Data_2F_Set_20_Name_case_1_local_4_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
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

enum opTrigger vpx_method_Case_20_Data_2F_Set_20_Name_case_1_local_4_case_1_local_5_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Case_20_Data_2F_Set_20_Name_case_1_local_4_case_1_local_5_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_Case_20_Data_2F_Set_20_Name_case_1_local_4_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Case_20_Data_2F_Set_20_Name_case_1_local_4_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Case_20_Data_2F_Set_20_Name_case_1_local_4_case_1_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
if(vpx_method_Case_20_Data_2F_Set_20_Name_case_1_local_4_case_1_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Case_20_Data_2F_Set_20_Name_case_1_local_4_case_1_local_5_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Case_20_Data_2F_Set_20_Name_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Case_20_Data_2F_Set_20_Name_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
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
result = vpx_method_Case_20_Data_2F_Set_20_Name_case_1_local_4_case_1_local_5(PARAMETERS,LIST(4));
REPEATFINISH
} else {
}

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Case_20_Data_2F_Set_20_Name(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Name,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_Owner,TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_method_Case_20_Data_2F_Set_20_Name_case_1_local_4(PARAMETERS,TERMINAL(4),TERMINAL(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Send_20_Refresh,1,0,TERMINAL(2));

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Case_20_Data_2F_Get_20_All_20_Breakpoints_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Case_20_Data_2F_Get_20_All_20_Breakpoints_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Breakpoint,1,1,TERMINAL(2),ROOT(3));

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(3));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(4)
}

enum opTrigger vpx_method_Case_20_Data_2F_Get_20_All_20_Breakpoints_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Case_20_Data_2F_Get_20_All_20_Breakpoints_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

OUTPUT(0,NONE)
FOOTERWITHNONE(1)
}

enum opTrigger vpx_method_Case_20_Data_2F_Get_20_All_20_Breakpoints_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Case_20_Data_2F_Get_20_All_20_Breakpoints_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Case_20_Data_2F_Get_20_All_20_Breakpoints_case_1_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Case_20_Data_2F_Get_20_All_20_Breakpoints_case_1_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Case_20_Data_2F_Get_20_All_20_Breakpoints_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Case_20_Data_2F_Get_20_All_20_Breakpoints_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Operation Data",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(2),ROOT(3),ROOT(4));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(4))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Case_20_Data_2F_Get_20_All_20_Breakpoints_case_1_local_5(PARAMETERS,LIST(4),ROOT(5));
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

enum opTrigger vpx_method_Case_20_Data_2F_Get_20_All_20_Breakpoints_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Case_20_Data_2F_Get_20_All_20_Breakpoints_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( )",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Case_20_Data_2F_Get_20_All_20_Breakpoints(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Case_20_Data_2F_Get_20_All_20_Breakpoints_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Case_20_Data_2F_Get_20_All_20_Breakpoints_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Case_20_Data_2F_Get_20_Universal(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Grandparent_20_Helper,1,1,TERMINAL(0),ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Universal,1,1,TERMINAL(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Case_20_Data_2F_Get_20_Export_20_Name(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(12)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Grandparent_20_Helper,1,1,TERMINAL(0),ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Export_20_Name,1,1,TERMINAL(1),ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_Owner,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Container,1,1,TERMINAL(3),ROOT(5));

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(5),ROOT(6),ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP__28_in_29_,2,1,TERMINAL(7),TERMINAL(4),ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP_to_2D_string,1,1,TERMINAL(8),ROOT(9));

result = vpx_constant(PARAMETERS,"_case_",ROOT(10));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,3,1,TERMINAL(2),TERMINAL(10),TERMINAL(9),ROOT(11));

result = kSuccess;

OUTPUT(0,TERMINAL(11))
FOOTERSINGLECASE(12)
}

enum opTrigger vpx_method_Case_20_Data_2F_Create_20_Default_20_Case_case_1_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Case_20_Data_2F_Create_20_Default_20_Case_case_1_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(12)
INPUT(0,0)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_Item_20_Data,1,1,NONE,ROOT(1));

result = vpx_constant(PARAMETERS,"( 22 22 30 214 )",ROOT(2));

result = vpx_constant(PARAMETERS,"( 36 36 44 228 )",ROOT(3));

result = vpx_set(PARAMETERS,kVPXValue_Frame,TERMINAL(1),TERMINAL(3),ROOT(4));

result = vpx_constant(PARAMETERS,"input_bar",ROOT(5));

result = vpx_instantiate(PARAMETERS,kVPXClass_Operation_20_Data,1,1,NONE,ROOT(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Create_20_Roots,1,1,TERMINAL(0),ROOT(7));

result = vpx_set(PARAMETERS,kVPXValue_Outputs,TERMINAL(6),TERMINAL(7),ROOT(8));

result = vpx_set(PARAMETERS,kVPXValue_Type,TERMINAL(8),TERMINAL(5),ROOT(9));

result = vpx_set(PARAMETERS,kVPXValue_Frame,TERMINAL(9),TERMINAL(3),ROOT(10));

result = vpx_set(PARAMETERS,kVPXValue_Owner,TERMINAL(10),TERMINAL(4),ROOT(11));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Install_20_Helper,2,0,TERMINAL(4),TERMINAL(11));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Position_20_Root,2,0,TERMINAL(6),TERMINAL(7));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERSINGLECASEWITHNONE(12)
}

enum opTrigger vpx_method_Case_20_Data_2F_Create_20_Default_20_Case_case_1_local_11(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Case_20_Data_2F_Create_20_Default_20_Case_case_1_local_11(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(12)
INPUT(0,0)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_Item_20_Data,1,1,NONE,ROOT(1));

result = vpx_constant(PARAMETERS,"( 64 22 72 214 )",ROOT(2));

result = vpx_constant(PARAMETERS,"( 162 36 170 228 )",ROOT(3));

result = vpx_set(PARAMETERS,kVPXValue_Frame,TERMINAL(1),TERMINAL(3),ROOT(4));

result = vpx_constant(PARAMETERS,"output_bar",ROOT(5));

result = vpx_instantiate(PARAMETERS,kVPXClass_Operation_20_Data,1,1,NONE,ROOT(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Create_20_Terminals,1,1,TERMINAL(0),ROOT(7));

result = vpx_set(PARAMETERS,kVPXValue_Inputs,TERMINAL(6),TERMINAL(7),ROOT(8));

result = vpx_set(PARAMETERS,kVPXValue_Type,TERMINAL(8),TERMINAL(5),ROOT(9));

result = vpx_set(PARAMETERS,kVPXValue_Frame,TERMINAL(9),TERMINAL(3),ROOT(10));

result = vpx_set(PARAMETERS,kVPXValue_Owner,TERMINAL(10),TERMINAL(4),ROOT(11));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Install_20_Helper,2,0,TERMINAL(4),TERMINAL(11));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Position_20_Terminal,2,0,TERMINAL(6),TERMINAL(7));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERSINGLECASEWITHNONE(12)
}

enum opTrigger vpx_method_Case_20_Data_2F_Create_20_Default_20_Case(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADERWITHNONE(17)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_List_20_Data,1,1,NONE,ROOT(3));

result = vpx_constant(PARAMETERS,"Operation Data",ROOT(4));

result = vpx_set(PARAMETERS,kVPXValue_Helper_20_Name,TERMINAL(3),TERMINAL(4),ROOT(5));

result = vpx_constant(PARAMETERS,"Case Comment Data",ROOT(6));

result = vpx_instantiate(PARAMETERS,kVPXClass_List_20_Data,1,1,NONE,ROOT(7));

result = vpx_set(PARAMETERS,kVPXValue_Helper_20_Name,TERMINAL(7),TERMINAL(6),ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(5),TERMINAL(8),ROOT(9));

result = vpx_set(PARAMETERS,kVPXValue_Lists,TERMINAL(1),TERMINAL(9),ROOT(10));

result = vpx_method_Case_20_Data_2F_Create_20_Default_20_Case_case_1_local_10(PARAMETERS,TERMINAL(2),ROOT(11));

result = vpx_method_Case_20_Data_2F_Create_20_Default_20_Case_case_1_local_11(PARAMETERS,TERMINAL(2),ROOT(12));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(11),TERMINAL(12),ROOT(13));

result = vpx_set(PARAMETERS,kVPXValue_List,TERMINAL(5),TERMINAL(13),ROOT(14));

result = vpx_constant(PARAMETERS,"( 60 60 270 328 )",ROOT(15));

result = vpx_set(PARAMETERS,kVPXValue_Frame,TERMINAL(3),TERMINAL(15),ROOT(16));

result = kSuccess;

FOOTERSINGLECASEWITHNONE(17)
}

enum opTrigger vpx_method_Case_20_Data_2F_Reveal_20_Path_20_Item(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"1",ROOT(1));

result = vpx_constant(PARAMETERS,"NULL",ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Handle_20_Item_20_Click,3,0,TERMINAL(0),TERMINAL(2),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Case_20_Data_2F_Next_20_Case_20_Check_case_1_local_5_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Case_20_Data_2F_Next_20_Case_20_Check_case_1_local_5_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(8)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Type,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_match(PARAMETERS,"local",TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"Case Data",ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(1),TERMINAL(3),ROOT(4));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(4),ROOT(5),ROOT(6));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(6))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Case_20_Data_2F_Next_20_Case_20_Check(PARAMETERS,LIST(6),ROOT(7));
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

enum opTrigger vpx_method_Case_20_Data_2F_Next_20_Case_20_Check_case_1_local_5_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Case_20_Data_2F_Next_20_Case_20_Check_case_1_local_5_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( )",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Case_20_Data_2F_Next_20_Case_20_Check_case_1_local_5_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Case_20_Data_2F_Next_20_Case_20_Check_case_1_local_5_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Case_20_Data_2F_Next_20_Case_20_Check_case_1_local_5_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Case_20_Data_2F_Next_20_Case_20_Check_case_1_local_5_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Case_20_Data_2F_Next_20_Case_20_Check_case_1_local_5_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Case_20_Data_2F_Next_20_Case_20_Check_case_1_local_5_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(17)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Control_20_Action,TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_match(PARAMETERS,"Next Case",TERMINAL(3));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Owner,TERMINAL(2),ROOT(4),ROOT(5));

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(5),ROOT(6),ROOT(7));

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(7),ROOT(8),ROOT(9));

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(9),ROOT(10),ROOT(11));

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(11),ROOT(12),ROOT(13));

result = vpx_call_primitive(PARAMETERS,VPLP__28_in_29_,2,1,TERMINAL(13),TERMINAL(10),ROOT(14));

result = vpx_call_primitive(PARAMETERS,VPLP__28_length_29_,1,1,TERMINAL(13),ROOT(15));

result = vpx_call_primitive(PARAMETERS,VPLP__3C_,2,0,TERMINAL(14),TERMINAL(15));
NEXTCASEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_attach_2D_r,2,1,TERMINAL(0),TERMINAL(4),ROOT(16));

result = kSuccess;

OUTPUT(0,TERMINAL(16))
FOOTER(17)
}

enum opTrigger vpx_method_Case_20_Data_2F_Next_20_Case_20_Check_case_1_local_5_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Case_20_Data_2F_Next_20_Case_20_Check_case_1_local_5_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(2)
}

enum opTrigger vpx_method_Case_20_Data_2F_Next_20_Case_20_Check_case_1_local_5_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Case_20_Data_2F_Next_20_Case_20_Check_case_1_local_5_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Case_20_Data_2F_Next_20_Case_20_Check_case_1_local_5_case_1_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Case_20_Data_2F_Next_20_Case_20_Check_case_1_local_5_case_1_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Case_20_Data_2F_Next_20_Case_20_Check_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Case_20_Data_2F_Next_20_Case_20_Check_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_method_Case_20_Data_2F_Next_20_Case_20_Check_case_1_local_5_case_1_local_3(PARAMETERS,TERMINAL(2),ROOT(3));

result = vpx_method_Case_20_Data_2F_Next_20_Case_20_Check_case_1_local_5_case_1_local_4(PARAMETERS,TERMINAL(3),TERMINAL(2),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Case_20_Data_2F_Next_20_Case_20_Check_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Case_20_Data_2F_Next_20_Case_20_Check_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

OUTPUT(0,NONE)
FOOTERWITHNONE(1)
}

enum opTrigger vpx_method_Case_20_Data_2F_Next_20_Case_20_Check_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Case_20_Data_2F_Next_20_Case_20_Check_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Case_20_Data_2F_Next_20_Case_20_Check_case_1_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Case_20_Data_2F_Next_20_Case_20_Check_case_1_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Case_20_Data_2F_Next_20_Case_20_Check(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Operation Data",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(2),ROOT(3),ROOT(4));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(4))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Case_20_Data_2F_Next_20_Case_20_Check_case_1_local_5(PARAMETERS,LIST(4),ROOT(5));
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

enum opTrigger vpx_method_Case_20_Data_2F_Dead_20_Case_20_Check_case_1_local_5_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Case_20_Data_2F_Dead_20_Case_20_Check_case_1_local_5_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(8)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Type,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_match(PARAMETERS,"local",TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"Case Data",ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(1),TERMINAL(3),ROOT(4));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(4),ROOT(5),ROOT(6));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(6))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Case_20_Data_2F_Dead_20_Case_20_Check(PARAMETERS,LIST(6),ROOT(7));
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

enum opTrigger vpx_method_Case_20_Data_2F_Dead_20_Case_20_Check_case_1_local_5_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Case_20_Data_2F_Dead_20_Case_20_Check_case_1_local_5_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( )",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Case_20_Data_2F_Dead_20_Case_20_Check_case_1_local_5_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Case_20_Data_2F_Dead_20_Case_20_Check_case_1_local_5_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Case_20_Data_2F_Dead_20_Case_20_Check_case_1_local_5_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Case_20_Data_2F_Dead_20_Case_20_Check_case_1_local_5_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Case_20_Data_2F_Dead_20_Case_20_Check_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Case_20_Data_2F_Dead_20_Case_20_Check_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_method_Case_20_Data_2F_Dead_20_Case_20_Check_case_1_local_5_case_1_local_3(PARAMETERS,TERMINAL(2),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_Case_20_Data_2F_Dead_20_Case_20_Check_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Case_20_Data_2F_Dead_20_Case_20_Check_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

OUTPUT(0,NONE)
FOOTERWITHNONE(1)
}

enum opTrigger vpx_method_Case_20_Data_2F_Dead_20_Case_20_Check_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Case_20_Data_2F_Dead_20_Case_20_Check_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Case_20_Data_2F_Dead_20_Case_20_Check_case_1_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Case_20_Data_2F_Dead_20_Case_20_Check_case_1_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Case_20_Data_2F_Dead_20_Case_20_Check_case_1_local_6_case_1_local_11_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Case_20_Data_2F_Dead_20_Case_20_Check_case_1_local_6_case_1_local_11_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_Control_20_Action,TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_match(PARAMETERS,"Next Case",TERMINAL(4));
FAILONSUCCESS

result = kSuccess;

FOOTER(5)
}

enum opTrigger vpx_method_Case_20_Data_2F_Dead_20_Case_20_Check_case_1_local_6_case_1_local_11_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Case_20_Data_2F_Dead_20_Case_20_Check_case_1_local_6_case_1_local_11_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_Case_20_Data_2F_Dead_20_Case_20_Check_case_1_local_6_case_1_local_11(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Case_20_Data_2F_Dead_20_Case_20_Check_case_1_local_6_case_1_local_11(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Case_20_Data_2F_Dead_20_Case_20_Check_case_1_local_6_case_1_local_11_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Case_20_Data_2F_Dead_20_Case_20_Check_case_1_local_6_case_1_local_11_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Case_20_Data_2F_Dead_20_Case_20_Check_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Case_20_Data_2F_Dead_20_Case_20_Check_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(16)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP__28_in_29_,2,1,TERMINAL(5),TERMINAL(2),ROOT(6));

result = vpx_match(PARAMETERS,"1",TERMINAL(6));
NEXTCASEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP__2D_1,1,1,TERMINAL(6),ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_nth,2,1,TERMINAL(5),TERMINAL(7),ROOT(8));

result = vpx_constant(PARAMETERS,"Operation Data",ROOT(9));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(8),TERMINAL(9),ROOT(10));

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(10),ROOT(11),ROOT(12));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(12))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Case_20_Data_2F_Dead_20_Case_20_Check_case_1_local_6_case_1_local_11(PARAMETERS,LIST(12));
NEXTCASEONFAILURE
REPEATFINISH
} else {
}

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(2),ROOT(13),ROOT(14));

result = vpx_call_primitive(PARAMETERS,VPLP_attach_2D_r,2,1,TERMINAL(0),TERMINAL(14),ROOT(15));

result = kSuccess;

OUTPUT(0,TERMINAL(15))
FOOTER(16)
}

enum opTrigger vpx_method_Case_20_Data_2F_Dead_20_Case_20_Check_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Case_20_Data_2F_Dead_20_Case_20_Check_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(2)
}

enum opTrigger vpx_method_Case_20_Data_2F_Dead_20_Case_20_Check_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Case_20_Data_2F_Dead_20_Case_20_Check_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Case_20_Data_2F_Dead_20_Case_20_Check_case_1_local_6_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Case_20_Data_2F_Dead_20_Case_20_Check_case_1_local_6_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Case_20_Data_2F_Dead_20_Case_20_Check(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Operation Data",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(2),ROOT(3),ROOT(4));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(4))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Case_20_Data_2F_Dead_20_Case_20_Check_case_1_local_5(PARAMETERS,LIST(4),ROOT(5));
LISTROOT(5,0)
REPEATFINISH
LISTROOTFINISH(5,0)
LISTROOTEND
} else {
ROOTEMPTY(5)
}

result = vpx_method_Case_20_Data_2F_Dead_20_Case_20_Check_case_1_local_6(PARAMETERS,TERMINAL(5),TERMINAL(0),ROOT(6));

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTERSINGLECASE(7)
}

enum opTrigger vpx_method_Case_20_Data_2F_Can_20_Fail_3F__case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Case_20_Data_2F_Can_20_Fail_3F__case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_Control_20_Action,TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_match(PARAMETERS,"Fail",TERMINAL(4));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"TRUE",ROOT(5));

result = kSuccess;
FINISHONSUCCESS

OUTPUT(0,TERMINAL(5))
FOOTER(6)
}

enum opTrigger vpx_method_Case_20_Data_2F_Can_20_Fail_3F__case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Case_20_Data_2F_Can_20_Fail_3F__case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"FALSE",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Case_20_Data_2F_Can_20_Fail_3F__case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Case_20_Data_2F_Can_20_Fail_3F__case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Case_20_Data_2F_Can_20_Fail_3F__case_1_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Case_20_Data_2F_Can_20_Fail_3F__case_1_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Case_20_Data_2F_Can_20_Fail_3F__case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Case_20_Data_2F_Can_20_Fail_3F__case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Operation Data",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(2),ROOT(3),ROOT(4));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(4))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Case_20_Data_2F_Can_20_Fail_3F__case_1_local_5(PARAMETERS,LIST(4),ROOT(5));
REPEATFINISH
} else {
ROOTNULL(5,NULL)
}

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTER(6)
}

enum opTrigger vpx_method_Case_20_Data_2F_Can_20_Fail_3F__case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Case_20_Data_2F_Can_20_Fail_3F__case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"FALSE",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Case_20_Data_2F_Can_20_Fail_3F_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Case_20_Data_2F_Can_20_Fail_3F__case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Case_20_Data_2F_Can_20_Fail_3F__case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Case_20_Data_2F_Tidy_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Case_20_Data_2F_Tidy_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Operation Data",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(2),ROOT(3),ROOT(4));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(4))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_get(PARAMETERS,kVPXValue_Helper,LIST(4),ROOT(5),ROOT(6));
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

enum opTrigger vpx_method_Case_20_Data_2F_Tidy_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Case_20_Data_2F_Tidy_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Case Comment Data",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(2),ROOT(3),ROOT(4));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(4))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_get(PARAMETERS,kVPXValue_Helper,LIST(4),ROOT(5),ROOT(6));
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
FOOTER(7)
}

enum opTrigger vpx_method_Case_20_Data_2F_Tidy_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Case_20_Data_2F_Tidy_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( )",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Case_20_Data_2F_Tidy_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Case_20_Data_2F_Tidy_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Case_20_Data_2F_Tidy_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Case_20_Data_2F_Tidy_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Case_20_Data_2F_Tidy_case_1_local_4_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Case_20_Data_2F_Tidy_case_1_local_4_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(11)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Top,1,1,TERMINAL(0),ROOT(1));

result = vpx_persistent(PARAMETERS,kVPXValue_Tidy_20_Grid_20_V,0,1,ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_idiv,2,2,TERMINAL(1),TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_instantiate(PARAMETERS,kVPXClass_Tidy_20_Band,1,1,NONE,ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP__2A2A_,2,1,TERMINAL(3),TERMINAL(2),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP__2B2B_,2,1,TERMINAL(6),TERMINAL(2),ROOT(7));

result = vpx_set(PARAMETERS,kVPXValue_Top,TERMINAL(5),TERMINAL(6),ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,1,1,TERMINAL(0),ROOT(9));

REPEATBEGIN
LOOPTERMINALBEGIN(1)
LOOPTERMINAL(0,9,10)
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Populate_20_Items,3,1,TERMINAL(8),LOOP(0),TERMINAL(7),ROOT(10));
REPEATFINISH

result = kSuccess;

OUTPUT(0,TERMINAL(8))
FOOTERSINGLECASEWITHNONE(11)
}

enum opTrigger vpx_method_Case_20_Data_2F_Tidy_case_1_local_4_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Case_20_Data_2F_Tidy_case_1_local_4_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(11)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Top,1,1,TERMINAL(0),ROOT(1));

result = vpx_persistent(PARAMETERS,kVPXValue_Tidy_20_Grid_20_V,0,1,ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_idiv,2,2,TERMINAL(1),TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_instantiate(PARAMETERS,kVPXClass_Tidy_20_Band,1,1,NONE,ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP__2A2A_,2,1,TERMINAL(3),TERMINAL(2),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP__2B2B_,2,1,TERMINAL(6),TERMINAL(2),ROOT(7));

result = vpx_set(PARAMETERS,kVPXValue_Top,TERMINAL(5),TERMINAL(6),ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,1,1,TERMINAL(0),ROOT(9));

REPEATBEGIN
LOOPTERMINALBEGIN(1)
LOOPTERMINAL(0,9,10)
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Populate_20_Items,3,1,TERMINAL(8),LOOP(0),TERMINAL(7),ROOT(10));
REPEATFINISH

result = kSuccess;

OUTPUT(0,TERMINAL(8))
FOOTERSINGLECASEWITHNONE(11)
}

enum opTrigger vpx_method_Case_20_Data_2F_Tidy_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1,V_Object *root2);
enum opTrigger vpx_method_Case_20_Data_2F_Tidy_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1,V_Object *root2)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_detach_2D_l,1,2,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_detach_2D_r,1,2,TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_method_Case_20_Data_2F_Tidy_case_1_local_4_case_1_local_4(PARAMETERS,TERMINAL(2),ROOT(6));

result = vpx_method_Case_20_Data_2F_Tidy_case_1_local_4_case_1_local_5(PARAMETERS,TERMINAL(5),ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP__28_join_29_,2,1,TERMINAL(4),TERMINAL(1),ROOT(8));

result = kSuccess;

OUTPUT(0,TERMINAL(6))
OUTPUT(1,TERMINAL(8))
OUTPUT(2,TERMINAL(7))
FOOTERSINGLECASE(9)
}

enum opTrigger vpx_method_Case_20_Data_2F_Tidy_case_1_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Case_20_Data_2F_Tidy_case_1_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP__28_length_29_,1,1,TERMINAL(0),ROOT(1));

result = vpx_persistent(PARAMETERS,kVPXValue_Tidy_20_Offset_20_V,0,1,ROOT(2));

result = vpx_persistent(PARAMETERS,kVPXValue_Tidy_20_Grid_20_V,0,1,ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_make_2D_list,3,1,TERMINAL(1),TERMINAL(2),TERMINAL(3),ROOT(4));

if( (repeatLimit = vpx_multiplex(2,TERMINAL(0),TERMINAL(4))) ){
REPEATBEGINWITHCOUNTER
result = vpx_set(PARAMETERS,kVPXValue_Top,LIST(0),LIST(4),ROOT(5));
REPEATFINISH
} else {
ROOTNULL(5,NULL)
}

result = kSuccess;

FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Case_20_Data_2F_Tidy(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(11)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Case_20_Data_2F_Tidy_case_1_local_2(PARAMETERS,TERMINAL(0),ROOT(1));

result = vpx_method_Case_20_Data_2F_Tidy_case_1_local_3(PARAMETERS,TERMINAL(0),ROOT(2));

result = vpx_method_Case_20_Data_2F_Tidy_case_1_local_4(PARAMETERS,TERMINAL(1),TERMINAL(2),ROOT(3),ROOT(4),ROOT(5));

result = vpx_method_Sort_20_Vertically(PARAMETERS,TERMINAL(4),ROOT(6));

LISTROOTBEGIN(1)
REPEATBEGIN
LOOPTERMINALBEGIN(1)
LOOPTERMINAL(0,6,8)
result = vpx_method_Create_20_Tidy_20_Band(PARAMETERS,LOOP(0),ROOT(7),ROOT(8));
LISTROOT(7,0)
REPEATFINISH
LISTROOTFINISH(7,0)
LISTROOTEND

result = vpx_call_primitive(PARAMETERS,VPLP_attach_2D_l,2,1,TERMINAL(3),TERMINAL(7),ROOT(9));

result = vpx_call_primitive(PARAMETERS,VPLP_attach_2D_r,2,1,TERMINAL(9),TERMINAL(5),ROOT(10));

result = vpx_method_Case_20_Data_2F_Tidy_case_1_local_9(PARAMETERS,TERMINAL(10));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(10))) ){
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Move_20_Items,1,0,LIST(10));
REPEATFINISH
} else {
}

result = kSuccess;

FOOTERSINGLECASE(11)
}

enum opTrigger vpx_method_Case_20_Data_2F_Sort_20_Control_case_1_local_2_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Case_20_Data_2F_Sort_20_Control_case_1_local_2_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Case_20_Data_2F_Sort_20_Control_case_1_local_2_case_1_local_6_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Case_20_Data_2F_Sort_20_Control_case_1_local_2_case_1_local_6_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Control_20_Action,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_match(PARAMETERS,"Continue",TERMINAL(2));
TERMINATEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Control,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(4));
TERMINATEONFAILURE

result = kSuccess;
FAILONSUCCESS

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Case_20_Data_2F_Sort_20_Control_case_1_local_2_case_1_local_6_case_1_local_7_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Case_20_Data_2F_Sort_20_Control_case_1_local_2_case_1_local_6_case_1_local_7_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(5)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Control_20_Action,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_match(PARAMETERS,"Continue",TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Control,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(4));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,NONE)
FOOTERWITHNONE(5)
}

enum opTrigger vpx_method_Case_20_Data_2F_Sort_20_Control_case_1_local_2_case_1_local_6_case_1_local_7_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Case_20_Data_2F_Sort_20_Control_case_1_local_2_case_1_local_6_case_1_local_7_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(1)
}

enum opTrigger vpx_method_Case_20_Data_2F_Sort_20_Control_case_1_local_2_case_1_local_6_case_1_local_7_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Case_20_Data_2F_Sort_20_Control_case_1_local_2_case_1_local_6_case_1_local_7_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Case_20_Data_2F_Sort_20_Control_case_1_local_2_case_1_local_6_case_1_local_7_case_1_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Case_20_Data_2F_Sort_20_Control_case_1_local_2_case_1_local_6_case_1_local_7_case_1_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Case_20_Data_2F_Sort_20_Control_case_1_local_2_case_1_local_6_case_1_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Case_20_Data_2F_Sort_20_Control_case_1_local_2_case_1_local_6_case_1_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"( )",TERMINAL(0));
NEXTCASEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_detach_2D_r,1,2,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_method_Case_20_Data_2F_Sort_20_Control_case_1_local_2_case_1_local_6_case_1_local_7_case_1_local_4(PARAMETERS,TERMINAL(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(3));
FINISHONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(1))
OUTPUT(1,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_Case_20_Data_2F_Sort_20_Control_case_1_local_2_case_1_local_6_case_1_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Case_20_Data_2F_Sort_20_Control_case_1_local_2_case_1_local_6_case_1_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADERWITHNONE(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;
FINISHONSUCCESS

OUTPUT(0,TERMINAL(0))
OUTPUT(1,NONE)
FOOTERWITHNONE(1)
}

enum opTrigger vpx_method_Case_20_Data_2F_Sort_20_Control_case_1_local_2_case_1_local_6_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Case_20_Data_2F_Sort_20_Control_case_1_local_2_case_1_local_6_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Case_20_Data_2F_Sort_20_Control_case_1_local_2_case_1_local_6_case_1_local_7_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1))
vpx_method_Case_20_Data_2F_Sort_20_Control_case_1_local_2_case_1_local_6_case_1_local_7_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1);
return outcome;
}

enum opTrigger vpx_method_Case_20_Data_2F_Sort_20_Control_case_1_local_2_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Case_20_Data_2F_Sort_20_Control_case_1_local_2_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(13)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Case_20_Data_2F_Sort_20_Control_case_1_local_2_case_1_local_6_case_1_local_2(PARAMETERS,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP__28_in_29_,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_match(PARAMETERS,"0",TERMINAL(2));
NEXTCASEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP__2D_1,1,1,TERMINAL(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_split_2D_nth,2,2,TERMINAL(0),TERMINAL(3),ROOT(4),ROOT(5));

REPEATBEGIN
LOOPTERMINALBEGIN(1)
LOOPTERMINAL(0,4,6)
result = vpx_method_Case_20_Data_2F_Sort_20_Control_case_1_local_2_case_1_local_6_case_1_local_7(PARAMETERS,LOOP(0),ROOT(6),ROOT(7));
REPEATFINISH

result = vpx_call_primitive(PARAMETERS,VPLP__28_in_29_,2,1,TERMINAL(0),TERMINAL(7),ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP_detach_2D_nth,2,2,TERMINAL(0),TERMINAL(2),ROOT(9),ROOT(10));

result = vpx_call_primitive(PARAMETERS,VPLP__2B_1,1,1,TERMINAL(8),ROOT(11));

result = vpx_call_primitive(PARAMETERS,VPLP_insert_2D_nth,3,1,TERMINAL(9),TERMINAL(10),TERMINAL(11),ROOT(12));

result = kSuccess;

OUTPUT(0,TERMINAL(12))
FOOTER(13)
}

enum opTrigger vpx_method_Case_20_Data_2F_Sort_20_Control_case_1_local_2_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Case_20_Data_2F_Sort_20_Control_case_1_local_2_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(2)
}

enum opTrigger vpx_method_Case_20_Data_2F_Sort_20_Control_case_1_local_2_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Case_20_Data_2F_Sort_20_Control_case_1_local_2_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Case_20_Data_2F_Sort_20_Control_case_1_local_2_case_1_local_6_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Case_20_Data_2F_Sort_20_Control_case_1_local_2_case_1_local_6_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Case_20_Data_2F_Sort_20_Control_case_1_local_2_case_1_local_7_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2);
enum opTrigger vpx_method_Case_20_Data_2F_Sort_20_Control_case_1_local_2_case_1_local_7_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_match(PARAMETERS,"0",TERMINAL(2));
NEXTCASEONFAILURE

result = kSuccess;
FINISHONSUCCESS

OUTPUT(0,TERMINAL(0))
OUTPUT(1,TERMINAL(1))
OUTPUT(2,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_Case_20_Data_2F_Sort_20_Control_case_1_local_2_case_1_local_7_case_1_local_5_case_2_local_4_case_1_local_3_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Case_20_Data_2F_Sort_20_Control_case_1_local_2_case_1_local_7_case_1_local_5_case_2_local_4_case_1_local_3_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Root,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
NEXTCASEONSUCCESS

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(2),ROOT(3),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Case_20_Data_2F_Sort_20_Control_case_1_local_2_case_1_local_7_case_1_local_5_case_2_local_4_case_1_local_3_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Case_20_Data_2F_Sort_20_Control_case_1_local_2_case_1_local_7_case_1_local_5_case_2_local_4_case_1_local_3_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

OUTPUT(0,NONE)
FOOTERWITHNONE(1)
}

enum opTrigger vpx_method_Case_20_Data_2F_Sort_20_Control_case_1_local_2_case_1_local_7_case_1_local_5_case_2_local_4_case_1_local_3_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Case_20_Data_2F_Sort_20_Control_case_1_local_2_case_1_local_7_case_1_local_5_case_2_local_4_case_1_local_3_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Case_20_Data_2F_Sort_20_Control_case_1_local_2_case_1_local_7_case_1_local_5_case_2_local_4_case_1_local_3_case_1_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Case_20_Data_2F_Sort_20_Control_case_1_local_2_case_1_local_7_case_1_local_5_case_2_local_4_case_1_local_3_case_1_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Case_20_Data_2F_Sort_20_Control_case_1_local_2_case_1_local_7_case_1_local_5_case_2_local_4_case_1_local_3_case_1_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Case_20_Data_2F_Sort_20_Control_case_1_local_2_case_1_local_7_case_1_local_5_case_2_local_4_case_1_local_3_case_1_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP__28_in_29_,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_match(PARAMETERS,"0",TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_attach_2D_r,2,1,TERMINAL(0),TERMINAL(1),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_Case_20_Data_2F_Sort_20_Control_case_1_local_2_case_1_local_7_case_1_local_5_case_2_local_4_case_1_local_3_case_1_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Case_20_Data_2F_Sort_20_Control_case_1_local_2_case_1_local_7_case_1_local_5_case_2_local_4_case_1_local_3_case_1_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(2)
}

enum opTrigger vpx_method_Case_20_Data_2F_Sort_20_Control_case_1_local_2_case_1_local_7_case_1_local_5_case_2_local_4_case_1_local_3_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Case_20_Data_2F_Sort_20_Control_case_1_local_2_case_1_local_7_case_1_local_5_case_2_local_4_case_1_local_3_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Case_20_Data_2F_Sort_20_Control_case_1_local_2_case_1_local_7_case_1_local_5_case_2_local_4_case_1_local_3_case_1_local_7_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Case_20_Data_2F_Sort_20_Control_case_1_local_2_case_1_local_7_case_1_local_5_case_2_local_4_case_1_local_3_case_1_local_7_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Case_20_Data_2F_Sort_20_Control_case_1_local_2_case_1_local_7_case_1_local_5_case_2_local_4_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Case_20_Data_2F_Sort_20_Control_case_1_local_2_case_1_local_7_case_1_local_5_case_2_local_4_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(9)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Synchros,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_Inputs,TERMINAL(1),ROOT(3),ROOT(4));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(4))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Case_20_Data_2F_Sort_20_Control_case_1_local_2_case_1_local_7_case_1_local_5_case_2_local_4_case_1_local_3_case_1_local_4(PARAMETERS,LIST(4),ROOT(5));
LISTROOT(5,0)
REPEATFINISH
LISTROOTFINISH(5,0)
LISTROOTEND
} else {
ROOTEMPTY(5)
}

result = vpx_call_primitive(PARAMETERS,VPLP__28_join_29_,2,1,TERMINAL(5),TERMINAL(2),ROOT(6));

result = vpx_constant(PARAMETERS,"( )",ROOT(7));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(6))) ){
REPEATBEGINWITHCOUNTER
LOOPTERMINALBEGIN(1)
LOOPTERMINAL(0,7,8)
result = vpx_method_Case_20_Data_2F_Sort_20_Control_case_1_local_2_case_1_local_7_case_1_local_5_case_2_local_4_case_1_local_3_case_1_local_7(PARAMETERS,LOOP(0),LIST(6),ROOT(8));
REPEATFINISH
} else {
ROOTNULL(8,TERMINAL(7))
}

result = kSuccess;

OUTPUT(0,TERMINAL(8))
FOOTERSINGLECASE(9)
}

enum opTrigger vpx_method_Case_20_Data_2F_Sort_20_Control_case_1_local_2_case_1_local_7_case_1_local_5_case_2_local_4_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Case_20_Data_2F_Sort_20_Control_case_1_local_2_case_1_local_7_case_1_local_5_case_2_local_4_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP__28_in_29_,2,1,TERMINAL(1),TERMINAL(0),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_max,2,1,TERMINAL(3),TERMINAL(2),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Case_20_Data_2F_Sort_20_Control_case_1_local_2_case_1_local_7_case_1_local_5_case_2_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Case_20_Data_2F_Sort_20_Control_case_1_local_2_case_1_local_7_case_1_local_5_case_2_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_nth,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_method_Case_20_Data_2F_Sort_20_Control_case_1_local_2_case_1_local_7_case_1_local_5_case_2_local_4_case_1_local_3(PARAMETERS,TERMINAL(2),ROOT(3));

result = vpx_constant(PARAMETERS,"0",ROOT(4));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(3))) ){
REPEATBEGINWITHCOUNTER
LOOPTERMINALBEGIN(1)
LOOPTERMINAL(0,4,5)
result = vpx_method_Case_20_Data_2F_Sort_20_Control_case_1_local_2_case_1_local_7_case_1_local_5_case_2_local_4_case_1_local_5(PARAMETERS,LIST(3),TERMINAL(0),LOOP(0),ROOT(5));
REPEATFINISH
} else {
ROOTNULL(5,TERMINAL(4))
}

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Case_20_Data_2F_Sort_20_Control_case_1_local_2_case_1_local_7_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2);
enum opTrigger vpx_method_Case_20_Data_2F_Sort_20_Control_case_1_local_2_case_1_local_7_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_plus_2D_one,1,1,TERMINAL(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP__3E3D_,2,0,TERMINAL(2),TERMINAL(4));
FAILONFAILURE

result = vpx_method_Case_20_Data_2F_Sort_20_Control_case_1_local_2_case_1_local_7_case_1_local_5_case_2_local_4(PARAMETERS,TERMINAL(0),TERMINAL(1),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP__3E_,2,0,TERMINAL(5),TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_detach_2D_nth,2,2,TERMINAL(0),TERMINAL(5),ROOT(6),ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP_insert_2D_nth,3,1,TERMINAL(6),TERMINAL(7),TERMINAL(1),ROOT(8));

result = kSuccess;

OUTPUT(0,TERMINAL(8))
OUTPUT(1,TERMINAL(1))
OUTPUT(2,TERMINAL(4))
FOOTER(9)
}

enum opTrigger vpx_method_Case_20_Data_2F_Sort_20_Control_case_1_local_2_case_1_local_7_case_1_local_5_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2);
enum opTrigger vpx_method_Case_20_Data_2F_Sort_20_Control_case_1_local_2_case_1_local_7_case_1_local_5_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP__3D_,2,0,TERMINAL(1),TERMINAL(2));
FINISHONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP__2B_1,1,1,TERMINAL(1),ROOT(4));

result = vpx_constant(PARAMETERS,"0",ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(0))
OUTPUT(1,TERMINAL(4))
OUTPUT(2,TERMINAL(5))
FOOTER(6)
}

enum opTrigger vpx_method_Case_20_Data_2F_Sort_20_Control_case_1_local_2_case_1_local_7_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2);
enum opTrigger vpx_method_Case_20_Data_2F_Sort_20_Control_case_1_local_2_case_1_local_7_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Case_20_Data_2F_Sort_20_Control_case_1_local_2_case_1_local_7_case_1_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0,root1,root2))
if(vpx_method_Case_20_Data_2F_Sort_20_Control_case_1_local_2_case_1_local_7_case_1_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0,root1,root2))
vpx_method_Case_20_Data_2F_Sort_20_Control_case_1_local_2_case_1_local_7_case_1_local_5_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0,root1,root2);
return outcome;
}

enum opTrigger vpx_method_Case_20_Data_2F_Sort_20_Control_case_1_local_2_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Case_20_Data_2F_Sort_20_Control_case_1_local_2_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"1",ROOT(1));

result = vpx_constant(PARAMETERS,"0",ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP__28_length_29_,1,1,TERMINAL(0),ROOT(3));

REPEATBEGIN
LOOPTERMINALBEGIN(3)
LOOPTERMINAL(0,0,4)
LOOPTERMINAL(1,1,5)
LOOPTERMINAL(2,2,6)
result = vpx_method_Case_20_Data_2F_Sort_20_Control_case_1_local_2_case_1_local_7_case_1_local_5(PARAMETERS,LOOP(0),LOOP(1),TERMINAL(3),LOOP(2),ROOT(4),ROOT(5),ROOT(6));
FAILONFAILURE
REPEATFINISH

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERSINGLECASE(7)
}

enum opTrigger vpx_method_Case_20_Data_2F_Sort_20_Control_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Case_20_Data_2F_Sort_20_Control_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(13)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(0),ROOT(2),ROOT(3));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(3))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Case_20_Data_2F_Sort_20_Control_case_1_local_2_case_1_local_3(PARAMETERS,LIST(3),ROOT(4));
LISTROOT(4,0)
REPEATFINISH
LISTROOTFINISH(4,0)
LISTROOTEND
} else {
ROOTEMPTY(4)
}

result = vpx_call_primitive(PARAMETERS,VPLP_detach_2D_r,1,2,TERMINAL(4),ROOT(5),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP_detach_2D_l,1,2,TERMINAL(5),ROOT(7),ROOT(8));

result = vpx_method_Case_20_Data_2F_Sort_20_Control_case_1_local_2_case_1_local_6(PARAMETERS,TERMINAL(8),TERMINAL(1),ROOT(9));

result = vpx_method_Case_20_Data_2F_Sort_20_Control_case_1_local_2_case_1_local_7(PARAMETERS,TERMINAL(9),ROOT(10));
FAILONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_attach_2D_l,2,1,TERMINAL(7),TERMINAL(10),ROOT(11));

result = vpx_call_primitive(PARAMETERS,VPLP_attach_2D_r,2,1,TERMINAL(11),TERMINAL(6),ROOT(12));

result = kSuccess;

OUTPUT(0,TERMINAL(12))
FOOTERSINGLECASE(13)
}

enum opTrigger vpx_method_Case_20_Data_2F_Sort_20_Control_case_1_local_3_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Case_20_Data_2F_Sort_20_Control_case_1_local_3_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Owner,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Case_20_Data_2F_Sort_20_Control_case_1_local_3_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Case_20_Data_2F_Sort_20_Control_case_1_local_3_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Record,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Case_20_Data_2F_Sort_20_Control_case_1_local_3_case_1_local_12(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Case_20_Data_2F_Sort_20_Control_case_1_local_3_case_1_local_12(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Outputs,TERMINAL(0),ROOT(1),ROOT(2));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(2))) ){
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Update_20_Record,1,0,LIST(2));
REPEATFINISH
} else {
}

result = vpx_get(PARAMETERS,kVPXValue_Inputs,TERMINAL(1),ROOT(3),ROOT(4));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(4))) ){
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Update_20_Record,1,0,LIST(4));
REPEATFINISH
} else {
}

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Case_20_Data_2F_Sort_20_Control_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Case_20_Data_2F_Sort_20_Control_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(15)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

if( (repeatLimit = vpx_multiplex(1,TERMINAL(1))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Case_20_Data_2F_Sort_20_Control_case_1_local_3_case_1_local_2(PARAMETERS,LIST(1),ROOT(2));
LISTROOT(2,0)
REPEATFINISH
LISTROOTFINISH(2,0)
LISTROOTEND
} else {
ROOTEMPTY(2)
}

result = vpx_set(PARAMETERS,kVPXValue_List,TERMINAL(0),TERMINAL(2),ROOT(3));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(1))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Case_20_Data_2F_Sort_20_Control_case_1_local_3_case_1_local_4(PARAMETERS,LIST(1),ROOT(4));
LISTROOT(4,0)
REPEATFINISH
LISTROOTFINISH(4,0)
LISTROOTEND
} else {
ROOTEMPTY(4)
}

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(3),ROOT(5),ROOT(6));

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(6),ROOT(7),ROOT(8));

result = vpx_get(PARAMETERS,kVPXValue_Record,TERMINAL(8),ROOT(9),ROOT(10));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Project_20_Data,1,1,TERMINAL(9),ROOT(11));

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(11),ROOT(12),ROOT(13));

result = vpx_constant(PARAMETERS,"operation",ROOT(14));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Order_20_Elements,4,0,TERMINAL(13),TERMINAL(10),TERMINAL(4),TERMINAL(14));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(1))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Case_20_Data_2F_Sort_20_Control_case_1_local_3_case_1_local_12(PARAMETERS,LIST(1));
REPEATFINISH
} else {
}

result = kSuccess;

FOOTERSINGLECASE(15)
}

enum opTrigger vpx_method_Case_20_Data_2F_Sort_20_Control_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Case_20_Data_2F_Sort_20_Control_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Case_20_Data_2F_Sort_20_Control_case_1_local_2(PARAMETERS,TERMINAL(0),TERMINAL(1),ROOT(2));
NEXTCASEONFAILURE

result = vpx_method_Case_20_Data_2F_Sort_20_Control_case_1_local_3(PARAMETERS,TERMINAL(0),TERMINAL(2));

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_Case_20_Data_2F_Sort_20_Control_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Case_20_Data_2F_Sort_20_Control_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"Circular dataflow cycle created!\"",ROOT(2));

result = vpx_method_Debug(PARAMETERS,TERMINAL(2));

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_Case_20_Data_2F_Sort_20_Control(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Case_20_Data_2F_Sort_20_Control_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Case_20_Data_2F_Sort_20_Control_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Case_20_Data_2F_Handle_20_Item_20_Click_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Case_20_Data_2F_Handle_20_Item_20_Click_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
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

enum opTrigger vpx_method_Case_20_Data_2F_Handle_20_Item_20_Click(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Owner,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(4));
TERMINATEONSUCCESS

result = vpx_constant(PARAMETERS,"1",ROOT(5));

result = vpx_get(PARAMETERS,kVPXValue_Lists,TERMINAL(4),ROOT(6),ROOT(7));

result = vpx_method_Case_20_Data_2F_Handle_20_Item_20_Click_case_1_local_6(PARAMETERS,TERMINAL(7),TERMINAL(5),ROOT(8));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open_20_Editor,1,0,TERMINAL(8));

result = kSuccess;

FOOTERSINGLECASE(9)
}

enum opTrigger vpx_method_Case_20_Data_2F_Get_20_Ideal_20_Size_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0);
enum opTrigger vpx_method_Case_20_Data_2F_Get_20_Ideal_20_Size_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0)
{
HEADER(3)
result = kSuccess;

result = vpx_persistent(PARAMETERS,kVPXValue_Tidy_20_Offset_20_V,0,1,ROOT(0));

result = vpx_persistent(PARAMETERS,kVPXValue_Tidy_20_Offset_20_H,0,1,ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(1),TERMINAL(0),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Case_20_Data_2F_Get_20_Ideal_20_Size_case_1_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Case_20_Data_2F_Get_20_Ideal_20_Size_case_1_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1)
{
HEADER(11)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Frame,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,4,TERMINAL(4),ROOT(5),ROOT(6),ROOT(7),ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP_max,2,1,TERMINAL(7),TERMINAL(1),ROOT(9));

result = vpx_call_primitive(PARAMETERS,VPLP_max,2,1,TERMINAL(8),TERMINAL(2),ROOT(10));

result = kSuccess;

OUTPUT(0,TERMINAL(9))
OUTPUT(1,TERMINAL(10))
FOOTER(11)
}

enum opTrigger vpx_method_Case_20_Data_2F_Get_20_Ideal_20_Size_case_1_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Case_20_Data_2F_Get_20_Ideal_20_Size_case_1_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1)
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

enum opTrigger vpx_method_Case_20_Data_2F_Get_20_Ideal_20_Size_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Case_20_Data_2F_Get_20_Ideal_20_Size_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Case_20_Data_2F_Get_20_Ideal_20_Size_case_1_local_7_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0,root1))
vpx_method_Case_20_Data_2F_Get_20_Ideal_20_Size_case_1_local_7_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0,root1);
return outcome;
}

enum opTrigger vpx_method_Case_20_Data_2F_Get_20_Ideal_20_Size(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(11)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Operation Data",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));
FAILONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_method_Case_20_Data_2F_Get_20_Ideal_20_Size_case_1_local_5(PARAMETERS,ROOT(5));

result = vpx_constant(PARAMETERS,"0",ROOT(6));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(4))) ){
REPEATBEGINWITHCOUNTER
LOOPTERMINALBEGIN(2)
LOOPTERMINAL(0,6,7)
LOOPTERMINAL(1,6,8)
result = vpx_method_Case_20_Data_2F_Get_20_Ideal_20_Size_case_1_local_7(PARAMETERS,LIST(4),LOOP(0),LOOP(1),ROOT(7),ROOT(8));
REPEATFINISH
} else {
ROOTNULL(7,TERMINAL(6))
ROOTNULL(8,TERMINAL(6))
}

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(7),TERMINAL(8),ROOT(9));

result = vpx_method_Add_20_Point(PARAMETERS,TERMINAL(9),TERMINAL(5),ROOT(10));

result = kSuccess;

OUTPUT(0,TERMINAL(10))
FOOTERSINGLECASE(11)
}

enum opTrigger vpx_method_Case_20_Data_2F_Sort_20_Operations_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Case_20_Data_2F_Sort_20_Operations_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Case_20_Data_2F_Do_20_Sort_20_Operations(PARAMETERS,TERMINAL(0));
NEXTCASEONFAILURE

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_Case_20_Data_2F_Sort_20_Operations_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Case_20_Data_2F_Sort_20_Operations_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADERWITHNONE(3)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Circular Dataflow",ROOT(1));

result = vpx_constant(PARAMETERS,"A circular dataflow operation cycle was created.",ROOT(2));

result = vpx_method_Do_20_User_20_Notice(PARAMETERS,TERMINAL(1),TERMINAL(2),NONE,NONE);

result = kSuccess;

FOOTERWITHNONE(3)
}

enum opTrigger vpx_method_Case_20_Data_2F_Sort_20_Operations_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Case_20_Data_2F_Sort_20_Operations_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"Circular dataflow cycle created!\"",ROOT(1));

result = vpx_method_Debug(PARAMETERS,TERMINAL(1));

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Case_20_Data_2F_Sort_20_Operations(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Case_20_Data_2F_Sort_20_Operations_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
if(vpx_method_Case_20_Data_2F_Sort_20_Operations_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Case_20_Data_2F_Sort_20_Operations_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

/* Stop Universals */



Nat4 VPLC_Case_20_Comment_20_Data_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Case_20_Comment_20_Data_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 200 300 } */
	tempAttribute = attribute_add("Owner",tempClass,NULL,environment);
	tempAttribute = attribute_add("Name",tempClass,tempAttribute_Case_20_Comment_20_Data_2F_Name,environment);
	tempAttribute = attribute_add("Text",tempClass,NULL,environment);
	tempAttribute = attribute_add("Frame",tempClass,tempAttribute_Case_20_Comment_20_Data_2F_Frame,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"Helper Data");
	return kNOERROR;
}

/* Start Universals: { 342 449 }{ 309 310 } */
enum opTrigger vpx_method_Case_20_Comment_20_Data_2F_Initial_20_Where_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0);
enum opTrigger vpx_method_Case_20_Comment_20_Data_2F_Initial_20_Where_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0)
{
HEADER(1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"170",ROOT(0));

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Case_20_Comment_20_Data_2F_Initial_20_Where(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(15)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,2,TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_constant(PARAMETERS,"18",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_iplus,2,1,TERMINAL(2),TERMINAL(4),ROOT(5));

result = vpx_method_Case_20_Comment_20_Data_2F_Initial_20_Where_case_1_local_5(PARAMETERS,ROOT(6));

result = vpx_constant(PARAMETERS,"2",ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP_idiv,2,2,TERMINAL(6),TERMINAL(7),ROOT(8),ROOT(9));

result = vpx_call_primitive(PARAMETERS,VPLP_iplus,2,1,TERMINAL(3),TERMINAL(8),ROOT(10));

result = vpx_call_primitive(PARAMETERS,VPLP__2D2D_,2,1,TERMINAL(2),TERMINAL(4),ROOT(11));

result = vpx_call_primitive(PARAMETERS,VPLP__2D2D_,2,1,TERMINAL(3),TERMINAL(8),ROOT(12));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,4,1,TERMINAL(11),TERMINAL(12),TERMINAL(5),TERMINAL(10),ROOT(13));

result = vpx_set(PARAMETERS,kVPXValue_Frame,TERMINAL(0),TERMINAL(13),ROOT(14));

result = kSuccess;

FOOTERSINGLECASE(15)
}

enum opTrigger vpx_method_Case_20_Comment_20_Data_2F_Initialize_20_Item_20_Data(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
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

enum opTrigger vpx_method_Case_20_Comment_20_Data_2F_Set_20_Text(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Text,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Make_20_Dirty,1,0,TERMINAL(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Case_20_Comment_20_Data_2F_Construct_20_Editor(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_Case_20_Window,1,1,NONE,ROOT(2));

result = vpx_instantiate(PARAMETERS,kVPXClass_Case_20_View,1,1,NONE,ROOT(3));

result = vpx_set(PARAMETERS,kVPXValue_View,TERMINAL(2),TERMINAL(3),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERSINGLECASEWITHNONE(5)
}

enum opTrigger vpx_method_Case_20_Comment_20_Data_2F_Open_20_Editor(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(9)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Owner,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_constant(PARAMETERS,"Operation Data",ROOT(5));

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(4),ROOT(6),ROOT(7));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(7),TERMINAL(5),ROOT(8));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open_20_Editor_20_With_20_Selection,2,0,TERMINAL(8),TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(9)
}

enum opTrigger vpx_method_Case_20_Comment_20_Data_2F_Get_20_Find_20_Text(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Text,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Case_20_Comment_20_Data_2F_Set_20_Find_20_Text_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Case_20_Comment_20_Data_2F_Set_20_Find_20_Text_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Method_20_Data,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
TERMINATEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Send_20_Refresh,1,0,TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Case_20_Comment_20_Data_2F_Set_20_Find_20_Text(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Text,2,0,TERMINAL(0),TERMINAL(1));
FAILONFAILURE

result = vpx_method_Case_20_Comment_20_Data_2F_Set_20_Find_20_Text_case_1_local_3(PARAMETERS,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Case_20_Comment_20_Data_2F_Move_20_Data(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Frame,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_method_Offset_20_Rectangle(PARAMETERS,TERMINAL(3),TERMINAL(1),ROOT(4));

result = vpx_set(PARAMETERS,kVPXValue_Frame,TERMINAL(2),TERMINAL(4),ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Make_20_Dirty,1,0,TERMINAL(5));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Case_20_Comment_20_Data_2F_Use_20_Best_20_Frame_case_1_local_3_case_1_local_4_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Case_20_Comment_20_Data_2F_Use_20_Best_20_Frame_case_1_local_3_case_1_local_4_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"comment",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Case_20_Comment_20_Data_2F_Use_20_Best_20_Frame_case_1_local_3_case_1_local_4_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Case_20_Comment_20_Data_2F_Use_20_Best_20_Frame_case_1_local_3_case_1_local_4_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(13)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_Point_2D_to_2D_list,1,1,TERMINAL(0),ROOT(2));

result = vpx_constant(PARAMETERS,"TRUE",ROOT(3));

result = vpx_persistent(PARAMETERS,kVPXValue_Minimum_20_Size_20_Text,0,1,ROOT(4));

result = vpx_method_Measure_20_Text(PARAMETERS,TERMINAL(4),TERMINAL(1),TERMINAL(3),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_Point_2D_to_2D_list,1,1,TERMINAL(5),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,2,TERMINAL(2),ROOT(7),ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,2,TERMINAL(6),ROOT(9),ROOT(10));

result = vpx_call_primitive(PARAMETERS,VPLP_max,2,1,TERMINAL(7),TERMINAL(9),ROOT(11));

result = vpx_call_primitive(PARAMETERS,VPLP_max,2,1,TERMINAL(8),TERMINAL(10),ROOT(12));

result = kSuccess;

OUTPUT(0,TERMINAL(11))
OUTPUT(1,TERMINAL(12))
FOOTERSINGLECASE(13)
}

enum opTrigger vpx_method_Case_20_Comment_20_Data_2F_Use_20_Best_20_Frame_case_1_local_3_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Case_20_Comment_20_Data_2F_Use_20_Best_20_Frame_case_1_local_3_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1)
{
HEADER(12)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_method__22_Check_22_(PARAMETERS,TERMINAL(0),ROOT(4));

result = vpx_method_Case_20_Comment_20_Data_2F_Use_20_Best_20_Frame_case_1_local_3_case_1_local_4_case_1_local_3(PARAMETERS,TERMINAL(1),ROOT(5));

result = vpx_constant(PARAMETERS,"TRUE",ROOT(6));

result = vpx_method_Measure_20_Text(PARAMETERS,TERMINAL(4),TERMINAL(5),TERMINAL(6),ROOT(7));

result = vpx_method_Case_20_Comment_20_Data_2F_Use_20_Best_20_Frame_case_1_local_3_case_1_local_4_case_1_local_6(PARAMETERS,TERMINAL(7),TERMINAL(5),ROOT(8),ROOT(9));

result = vpx_call_primitive(PARAMETERS,VPLP_iplus,2,1,TERMINAL(9),TERMINAL(2),ROOT(10));

result = vpx_call_primitive(PARAMETERS,VPLP__2B2B_,2,1,TERMINAL(8),TERMINAL(3),ROOT(11));

result = kSuccess;

OUTPUT(0,TERMINAL(10))
OUTPUT(1,TERMINAL(11))
FOOTERSINGLECASE(12)
}

enum opTrigger vpx_method_Case_20_Comment_20_Data_2F_Use_20_Best_20_Frame_case_1_local_3_case_1_local_5_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Case_20_Comment_20_Data_2F_Use_20_Best_20_Frame_case_1_local_3_case_1_local_5_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"2",ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_idiv,2,2,TERMINAL(0),TERMINAL(1),ROOT(2),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Case_20_Comment_20_Data_2F_Use_20_Best_20_Frame_case_1_local_3_case_1_local_5_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Case_20_Comment_20_Data_2F_Use_20_Best_20_Frame_case_1_local_3_case_1_local_5_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"2",ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_idiv,2,2,TERMINAL(0),TERMINAL(1),ROOT(2),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Case_20_Comment_20_Data_2F_Use_20_Best_20_Frame_case_1_local_3_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Case_20_Comment_20_Data_2F_Use_20_Best_20_Frame_case_1_local_3_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(13)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Frame,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_method_Rectangle_20_Center(PARAMETERS,TERMINAL(4),ROOT(5));

result = vpx_method_Case_20_Comment_20_Data_2F_Use_20_Best_20_Frame_case_1_local_3_case_1_local_5_case_1_local_4(PARAMETERS,TERMINAL(2),ROOT(6));

result = vpx_method_Case_20_Comment_20_Data_2F_Use_20_Best_20_Frame_case_1_local_3_case_1_local_5_case_1_local_5(PARAMETERS,TERMINAL(1),ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(6),TERMINAL(7),ROOT(8));

result = vpx_method_Subtract_20_Point(PARAMETERS,TERMINAL(5),TERMINAL(8),ROOT(9));

result = vpx_method_Add_20_Point(PARAMETERS,TERMINAL(5),TERMINAL(8),ROOT(10));

result = vpx_call_primitive(PARAMETERS,VPLP__28_join_29_,2,1,TERMINAL(9),TERMINAL(10),ROOT(11));

result = vpx_call_primitive(PARAMETERS,VPLP__3D_,2,0,TERMINAL(11),TERMINAL(4));
FAILONSUCCESS

result = vpx_set(PARAMETERS,kVPXValue_Frame,TERMINAL(3),TERMINAL(11),ROOT(12));

result = kSuccess;

FOOTERSINGLECASE(13)
}

enum opTrigger vpx_method_Case_20_Comment_20_Data_2F_Use_20_Best_20_Frame_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Case_20_Comment_20_Data_2F_Use_20_Best_20_Frame_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"16",ROOT(2));

result = vpx_constant(PARAMETERS,"12",ROOT(3));

result = vpx_method_Case_20_Comment_20_Data_2F_Use_20_Best_20_Frame_case_1_local_3_case_1_local_4(PARAMETERS,TERMINAL(1),TERMINAL(0),TERMINAL(2),TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_method_Case_20_Comment_20_Data_2F_Use_20_Best_20_Frame_case_1_local_3_case_1_local_5(PARAMETERS,TERMINAL(0),TERMINAL(4),TERMINAL(5));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Make_20_Dirty,1,0,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Case_20_Comment_20_Data_2F_Use_20_Best_20_Frame(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Text,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_method_Case_20_Comment_20_Data_2F_Use_20_Best_20_Frame_case_1_local_3(PARAMETERS,TERMINAL(0),TERMINAL(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Case_20_Comment_20_Data_2F_Get_20_Top(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Frame,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,1,TERMINAL(2),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Case_20_Comment_20_Data_2F_Get_20_Left_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Case_20_Comment_20_Data_2F_Get_20_Left_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Frame,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,4,TERMINAL(2),ROOT(3),ROOT(4),ROOT(5),ROOT(6));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(7)
}

enum opTrigger vpx_method_Case_20_Comment_20_Data_2F_Get_20_Left_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Case_20_Comment_20_Data_2F_Get_20_Left_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(12)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Frame,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,4,TERMINAL(2),ROOT(3),ROOT(4),ROOT(5),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP__2B2B_,2,1,TERMINAL(4),TERMINAL(6),ROOT(7));

result = vpx_constant(PARAMETERS,"2",ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP_idiv,2,2,TERMINAL(7),TERMINAL(8),ROOT(9),ROOT(10));

result = vpx_call_primitive(PARAMETERS,VPLP__2B2B_,2,1,TERMINAL(9),TERMINAL(10),ROOT(11));

result = kSuccess;

OUTPUT(0,TERMINAL(9))
FOOTER(12)
}

enum opTrigger vpx_method_Case_20_Comment_20_Data_2F_Get_20_Left(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Case_20_Comment_20_Data_2F_Get_20_Left_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Case_20_Comment_20_Data_2F_Get_20_Left_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Case_20_Comment_20_Data_2F_Get_20_Bottom_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Case_20_Comment_20_Data_2F_Get_20_Bottom_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Frame,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,4,TERMINAL(2),ROOT(3),ROOT(4),ROOT(5),ROOT(6));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(7)
}

enum opTrigger vpx_method_Case_20_Comment_20_Data_2F_Get_20_Bottom_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Case_20_Comment_20_Data_2F_Get_20_Bottom_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(12)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Frame,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,4,TERMINAL(2),ROOT(3),ROOT(4),ROOT(5),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP__2B2B_,2,1,TERMINAL(4),TERMINAL(6),ROOT(7));

result = vpx_constant(PARAMETERS,"2",ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP_idiv,2,2,TERMINAL(7),TERMINAL(8),ROOT(9),ROOT(10));

result = vpx_call_primitive(PARAMETERS,VPLP__2B2B_,2,1,TERMINAL(9),TERMINAL(10),ROOT(11));

result = kSuccess;

OUTPUT(0,TERMINAL(9))
FOOTER(12)
}

enum opTrigger vpx_method_Case_20_Comment_20_Data_2F_Get_20_Bottom(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Case_20_Comment_20_Data_2F_Get_20_Bottom_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Case_20_Comment_20_Data_2F_Get_20_Bottom_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Case_20_Comment_20_Data_2F_Get_20_Right_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Case_20_Comment_20_Data_2F_Get_20_Right_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Frame,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,4,TERMINAL(2),ROOT(3),ROOT(4),ROOT(5),ROOT(6));

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTER(7)
}

enum opTrigger vpx_method_Case_20_Comment_20_Data_2F_Get_20_Right_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Case_20_Comment_20_Data_2F_Get_20_Right_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(12)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Frame,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,4,TERMINAL(2),ROOT(3),ROOT(4),ROOT(5),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP__2B2B_,2,1,TERMINAL(4),TERMINAL(6),ROOT(7));

result = vpx_constant(PARAMETERS,"2",ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP_idiv,2,2,TERMINAL(7),TERMINAL(8),ROOT(9),ROOT(10));

result = vpx_call_primitive(PARAMETERS,VPLP__2B2B_,2,1,TERMINAL(9),TERMINAL(10),ROOT(11));

result = kSuccess;

OUTPUT(0,TERMINAL(9))
FOOTER(12)
}

enum opTrigger vpx_method_Case_20_Comment_20_Data_2F_Get_20_Right(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Case_20_Comment_20_Data_2F_Get_20_Right_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Case_20_Comment_20_Data_2F_Get_20_Right_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Case_20_Comment_20_Data_2F_Get_20_Baseline(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Bottom,1,1,TERMINAL(0),ROOT(1));

result = vpx_constant(PARAMETERS,"2",ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP__2D2D_,2,1,TERMINAL(1),TERMINAL(2),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Case_20_Comment_20_Data_2F_Move_20_Item_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Case_20_Comment_20_Data_2F_Move_20_Item_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Owner,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
TERMINATEONSUCCESS

result = vpx_set(PARAMETERS,kVPXValue_Frame,TERMINAL(3),TERMINAL(1),ROOT(4));

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Case_20_Comment_20_Data_2F_Move_20_Item(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Move_20_Data,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_method_Case_20_Comment_20_Data_2F_Move_20_Item_case_1_local_3(PARAMETERS,TERMINAL(0),TERMINAL(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

/* Stop Universals */






Nat4	loadClasses_MyCaseData(V_Environment environment);
Nat4	loadClasses_MyCaseData(V_Environment environment)
{
	V_Class result = NULL;

	result = class_new("Case Data",environment);
	if(result == NULL) return kERROR;
	VPLC_Case_20_Data_class_load(result,environment);
	result = class_new("Case Comment Data",environment);
	if(result == NULL) return kERROR;
	VPLC_Case_20_Comment_20_Data_class_load(result,environment);
	return kNOERROR;

}

Nat4	loadUniversals_MyCaseData(V_Environment environment);
Nat4	loadUniversals_MyCaseData(V_Environment environment)
{
	V_Method result = NULL;

	result = method_new("Case Data/C Code Export Connections",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Case_20_Data_2F_C_20_Code_20_Export_20_Connections,NULL);

	result = method_new("Case Data/C Code Export Operations",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Case_20_Data_2F_C_20_Code_20_Export_20_Operations,NULL);

	result = method_new("Case Data/C Code Export Synchros",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Case_20_Data_2F_C_20_Code_20_Export_20_Synchros,NULL);

	result = method_new("Case Data/C Code Footer",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Case_20_Data_2F_C_20_Code_20_Footer,NULL);

	result = method_new("Case Data/C Code Header",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Case_20_Data_2F_C_20_Code_20_Header,NULL);

	result = method_new("Case Data/Export Text",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Case_20_Data_2F_Export_20_Text,NULL);

	result = method_new("Case Data/Get Project Data",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Case_20_Data_2F_Get_20_Project_20_Data,NULL);

	result = method_new("Case Data/Initialize Item Data",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Case_20_Data_2F_Initialize_20_Item_20_Data,NULL);

	result = method_new("Case Data/Open",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Case_20_Data_2F_Open,NULL);

	result = method_new("Case Data/Push Lists Data",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Case_20_Data_2F_Push_20_Lists_20_Data,NULL);

	result = method_new("Case Data/Remove Self",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Case_20_Data_2F_Remove_20_Self,NULL);

	result = method_new("Case Data/Do Sort Operations",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Case_20_Data_2F_Do_20_Sort_20_Operations,NULL);

	result = method_new("Case Data/Update List Data",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Case_20_Data_2F_Update_20_List_20_Data,NULL);

	result = method_new("Case Data/Update Names",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Case_20_Data_2F_Update_20_Names,NULL);

	result = method_new("Case Data/Dispose Record",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Case_20_Data_2F_Dispose_20_Record,NULL);

	result = method_new("Case Data/Order Records",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Case_20_Data_2F_Order_20_Records,NULL);

	result = method_new("Case Data/Post Open",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Case_20_Data_2F_Post_20_Open,NULL);

	result = method_new("Case Data/Parse CPX Buffer",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Case_20_Data_2F_Parse_20_CPX_20_Buffer,NULL);

	result = method_new("Case Data/Set Name",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Case_20_Data_2F_Set_20_Name,NULL);

	result = method_new("Case Data/Get All Breakpoints",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Case_20_Data_2F_Get_20_All_20_Breakpoints,NULL);

	result = method_new("Case Data/Get Universal",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Case_20_Data_2F_Get_20_Universal,NULL);

	result = method_new("Case Data/Get Export Name",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Case_20_Data_2F_Get_20_Export_20_Name,NULL);

	result = method_new("Case Data/Create Default Case",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Case_20_Data_2F_Create_20_Default_20_Case,NULL);

	result = method_new("Case Data/Reveal Path Item",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Case_20_Data_2F_Reveal_20_Path_20_Item,NULL);

	result = method_new("Case Data/Next Case Check",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Case_20_Data_2F_Next_20_Case_20_Check,NULL);

	result = method_new("Case Data/Dead Case Check",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Case_20_Data_2F_Dead_20_Case_20_Check,NULL);

	result = method_new("Case Data/Can Fail?",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Case_20_Data_2F_Can_20_Fail_3F_,NULL);

	result = method_new("Case Data/Tidy",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Case_20_Data_2F_Tidy,NULL);

	result = method_new("Case Data/Sort Control",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Case_20_Data_2F_Sort_20_Control,NULL);

	result = method_new("Case Data/Handle Item Click",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Case_20_Data_2F_Handle_20_Item_20_Click,NULL);

	result = method_new("Case Data/Get Ideal Size",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Case_20_Data_2F_Get_20_Ideal_20_Size,NULL);

	result = method_new("Case Data/Sort Operations",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Case_20_Data_2F_Sort_20_Operations,NULL);

	result = method_new("Case Comment Data/Initial Where",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Case_20_Comment_20_Data_2F_Initial_20_Where,NULL);

	result = method_new("Case Comment Data/Initialize Item Data",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Case_20_Comment_20_Data_2F_Initialize_20_Item_20_Data,NULL);

	result = method_new("Case Comment Data/Set Text",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Case_20_Comment_20_Data_2F_Set_20_Text,NULL);

	result = method_new("Case Comment Data/Construct Editor",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Case_20_Comment_20_Data_2F_Construct_20_Editor,NULL);

	result = method_new("Case Comment Data/Open Editor",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Case_20_Comment_20_Data_2F_Open_20_Editor,NULL);

	result = method_new("Case Comment Data/Get Find Text",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Case_20_Comment_20_Data_2F_Get_20_Find_20_Text,NULL);

	result = method_new("Case Comment Data/Set Find Text",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Case_20_Comment_20_Data_2F_Set_20_Find_20_Text,NULL);

	result = method_new("Case Comment Data/Move Data",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Case_20_Comment_20_Data_2F_Move_20_Data,NULL);

	result = method_new("Case Comment Data/Use Best Frame",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Case_20_Comment_20_Data_2F_Use_20_Best_20_Frame,NULL);

	result = method_new("Case Comment Data/Get Top",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Case_20_Comment_20_Data_2F_Get_20_Top,NULL);

	result = method_new("Case Comment Data/Get Left",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Case_20_Comment_20_Data_2F_Get_20_Left,NULL);

	result = method_new("Case Comment Data/Get Bottom",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Case_20_Comment_20_Data_2F_Get_20_Bottom,NULL);

	result = method_new("Case Comment Data/Get Right",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Case_20_Comment_20_Data_2F_Get_20_Right,NULL);

	result = method_new("Case Comment Data/Get Baseline",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Case_20_Comment_20_Data_2F_Get_20_Baseline,NULL);

	result = method_new("Case Comment Data/Move Item",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Case_20_Comment_20_Data_2F_Move_20_Item,NULL);

	return kNOERROR;

}



Nat4	loadPersistents_MyCaseData(V_Environment environment);
Nat4	loadPersistents_MyCaseData(V_Environment environment)
{
	V_Value tempPersistent = NULL;
	V_Dictionary dictionary = environment->persistentsTable;

	return kNOERROR;

}

Nat4	load_MyCaseData(V_Environment environment);
Nat4	load_MyCaseData(V_Environment environment)
{

	loadClasses_MyCaseData(environment);
	loadUniversals_MyCaseData(environment);
	loadPersistents_MyCaseData(environment);
	return kNOERROR;

}

