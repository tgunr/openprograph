/* A VPL Section File */
/*

MyUniversalData.inl.c
Copyright: 2004 Andescotia LLC

*/

#include "MartenInlineProject.h"




	Nat4 tempAttribute_Universal_20_Data_2F_Name[] = {
0000000000, 0X00000030, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X00000012, 0X556E7469, 0X746C6564, 0X20556E69,
0X76657273, 0X616C0000
	};
	Nat4 tempAttribute_Universal_20_Data_2F_Inarity[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Universal_20_Data_2F_Outarity[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};


Nat4 VPLC_Universal_20_Data_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Universal_20_Data_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 300 347 }{ 163 438 } */
	tempAttribute = attribute_add("Owner",tempClass,NULL,environment);
	tempAttribute = attribute_add("Name",tempClass,tempAttribute_Universal_20_Data_2F_Name,environment);
	tempAttribute = attribute_add("Text",tempClass,NULL,environment);
	tempAttribute = attribute_add("Inarity",tempClass,tempAttribute_Universal_20_Data_2F_Inarity,environment);
	tempAttribute = attribute_add("Outarity",tempClass,tempAttribute_Universal_20_Data_2F_Outarity,environment);
	tempAttribute = attribute_add("Record",tempClass,NULL,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"Helper Data");
	return kNOERROR;
}

/* Start Universals: { 149 705 }{ 552 340 } */
enum opTrigger vpx_method_Universal_20_Data_2F_C_20_Code_20_Export_20_Cases_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Universal_20_Data_2F_C_20_Code_20_Export_20_Cases_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Export_20_Text,1,1,TERMINAL(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(0),TERMINAL(4),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Universal_20_Data_2F_C_20_Code_20_Export_20_Cases_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Universal_20_Data_2F_C_20_Code_20_Export_20_Cases_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(9)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Case Data",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_constant(PARAMETERS,"\n",ROOT(5));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(4))) ){
REPEATBEGINWITHCOUNTER
LOOPTERMINALBEGIN(1)
LOOPTERMINAL(0,5,6)
result = vpx_method_Universal_20_Data_2F_C_20_Code_20_Export_20_Cases_case_1_local_6(PARAMETERS,LOOP(0),LIST(4),ROOT(6));
REPEATFINISH
} else {
ROOTNULL(6,TERMINAL(5))
}

result = vpx_constant(PARAMETERS,"\n\n",ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(6),TERMINAL(7),ROOT(8));

result = kSuccess;

OUTPUT(0,TERMINAL(8))
FOOTER(9)
}

enum opTrigger vpx_method_Universal_20_Data_2F_C_20_Code_20_Export_20_Cases_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Universal_20_Data_2F_C_20_Code_20_Export_20_Cases_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\n/* UNIVERSAL DATA NOT FOUND! */\n",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Universal_20_Data_2F_C_20_Code_20_Export_20_Cases(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Universal_20_Data_2F_C_20_Code_20_Export_20_Cases_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Universal_20_Data_2F_C_20_Code_20_Export_20_Cases_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Universal_20_Data_2F_C_20_Code_20_Footer(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\treturn kNOERROR;\n}\n\n\n",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Universal_20_Data_2F_C_20_Code_20_Header(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(18)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Full_20_Name,1,1,TERMINAL(0),ROOT(1));

result = vpx_method_Mangle_20_Name(PARAMETERS,TERMINAL(1),ROOT(2));

result = vpx_constant(PARAMETERS,"\n",ROOT(3));

result = vpx_constant(PARAMETERS,"Nat4 VPLU_",ROOT(4));

result = vpx_constant(PARAMETERS,"_universal_load(V_Method method,V_Environment environment);",ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,3,1,TERMINAL(4),TERMINAL(2),TERMINAL(5),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(6),TERMINAL(3),ROOT(7));

result = vpx_constant(PARAMETERS,"{\n\tInt4 result = 0;\n",ROOT(8));

result = vpx_constant(PARAMETERS,"\tV_Case ptrA = NULL;\n",ROOT(9));

result = vpx_constant(PARAMETERS,"\tV_Operation tempOperation = NULL;\n",ROOT(10));

result = vpx_constant(PARAMETERS,"\tV_Terminal tempTerminal = NULL;\n",ROOT(11));

result = vpx_constant(PARAMETERS,"\tV_Root tempRoot = NULL;\n\n",ROOT(12));

result = vpx_constant(PARAMETERS,"_universal_load(V_Method method,V_Environment environment)\n",ROOT(13));

result = vpx_constant(PARAMETERS,"Nat4 VPLU_",ROOT(14));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,3,1,TERMINAL(14),TERMINAL(2),TERMINAL(13),ROOT(15));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(7),TERMINAL(15),ROOT(16));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,6,1,TERMINAL(16),TERMINAL(8),TERMINAL(9),TERMINAL(10),TERMINAL(11),TERMINAL(12),ROOT(17));

result = kSuccess;

OUTPUT(0,TERMINAL(17))
FOOTERSINGLECASE(18)
}

enum opTrigger vpx_method_Universal_20_Data_2F_Create_20_Roots_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Universal_20_Data_2F_Create_20_Roots_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(2)
INPUT(0,0)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_Root,1,1,NONE,ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASEWITHNONE(2)
}

enum opTrigger vpx_method_Universal_20_Data_2F_Create_20_Roots_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Universal_20_Data_2F_Create_20_Roots_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Inarity,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_constant(PARAMETERS,"1",ROOT(3));

result = vpx_match(PARAMETERS,"0",TERMINAL(2));
NEXTCASEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_make_2D_list,3,1,TERMINAL(2),TERMINAL(3),TERMINAL(3),ROOT(4));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(4))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Universal_20_Data_2F_Create_20_Roots_case_1_local_6(PARAMETERS,LIST(4),ROOT(5));
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

enum opTrigger vpx_method_Universal_20_Data_2F_Create_20_Roots_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Universal_20_Data_2F_Create_20_Roots_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( )",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Universal_20_Data_2F_Create_20_Roots(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Universal_20_Data_2F_Create_20_Roots_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Universal_20_Data_2F_Create_20_Roots_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Universal_20_Data_2F_Create_20_Terminals_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Universal_20_Data_2F_Create_20_Terminals_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(2)
INPUT(0,0)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_Terminal,1,1,NONE,ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASEWITHNONE(2)
}

enum opTrigger vpx_method_Universal_20_Data_2F_Create_20_Terminals_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Universal_20_Data_2F_Create_20_Terminals_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Outarity,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_constant(PARAMETERS,"1",ROOT(3));

result = vpx_match(PARAMETERS,"0",TERMINAL(2));
NEXTCASEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_make_2D_list,3,1,TERMINAL(2),TERMINAL(3),TERMINAL(3),ROOT(4));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(4))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Universal_20_Data_2F_Create_20_Terminals_case_1_local_6(PARAMETERS,LIST(4),ROOT(5));
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

enum opTrigger vpx_method_Universal_20_Data_2F_Create_20_Terminals_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Universal_20_Data_2F_Create_20_Terminals_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( )",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Universal_20_Data_2F_Create_20_Terminals(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Universal_20_Data_2F_Create_20_Terminals_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Universal_20_Data_2F_Create_20_Terminals_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Universal_20_Data_2F_Export_20_Text_case_1_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Universal_20_Data_2F_Export_20_Text_case_1_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"\"",ROOT(2));

result = vpx_match(PARAMETERS,"( )",TERMINAL(0));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Universal_20_Data_2F_Export_20_Text_case_1_local_7_case_2_local_8_case_1_local_12(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Universal_20_Data_2F_Export_20_Text_case_1_local_7_case_2_local_8_case_1_local_12(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1)
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

enum opTrigger vpx_method_Universal_20_Data_2F_Export_20_Text_case_1_local_7_case_2_local_8_case_1_local_15(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Universal_20_Data_2F_Export_20_Text_case_1_local_7_case_2_local_8_case_1_local_15(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1)
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

enum opTrigger vpx_method_Universal_20_Data_2F_Export_20_Text_case_1_local_7_case_2_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Universal_20_Data_2F_Export_20_Text_case_1_local_7_case_2_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(33)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,",ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Export_20_Name,1,1,TERMINAL(0),ROOT(3));

result = vpx_constant(PARAMETERS,"\"enum opTrigger \"",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(4),TERMINAL(3),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(5),TERMINAL(2),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP_detach_2D_r,1,2,TERMINAL(1),ROOT(7),ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP_detach_2D_l,1,2,TERMINAL(7),ROOT(9),ROOT(10));

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(9),ROOT(11),ROOT(12));

result = vpx_get(PARAMETERS,kVPXValue_Outputs,TERMINAL(12),ROOT(13),ROOT(14));

result = vpx_constant(PARAMETERS,"0",ROOT(15));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(14))) ){
REPEATBEGINWITHCOUNTER
LOOPTERMINALBEGIN(2)
LOOPTERMINAL(0,6,16)
LOOPTERMINAL(1,15,17)
result = vpx_method_Universal_20_Data_2F_Export_20_Text_case_1_local_7_case_2_local_8_case_1_local_12(PARAMETERS,LOOP(0),LIST(14),LOOP(1),ROOT(16),ROOT(17));
REPEATFINISH
} else {
ROOTNULL(16,TERMINAL(6))
ROOTNULL(17,TERMINAL(15))
}

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(8),ROOT(18),ROOT(19));

result = vpx_get(PARAMETERS,kVPXValue_Inputs,TERMINAL(19),ROOT(20),ROOT(21));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(21))) ){
REPEATBEGINWITHCOUNTER
LOOPTERMINALBEGIN(2)
LOOPTERMINAL(0,16,22)
LOOPTERMINAL(1,15,23)
result = vpx_method_Universal_20_Data_2F_Export_20_Text_case_1_local_7_case_2_local_8_case_1_local_15(PARAMETERS,LOOP(0),LIST(21),LOOP(1),ROOT(22),ROOT(23));
REPEATFINISH
} else {
ROOTNULL(22,TERMINAL(16))
ROOTNULL(23,TERMINAL(15))
}

result = vpx_constant(PARAMETERS,"1",ROOT(24));

result = vpx_call_primitive(PARAMETERS,VPLP_suffix,2,2,TERMINAL(22),TERMINAL(24),ROOT(25),ROOT(26));

result = vpx_constant(PARAMETERS,")",ROOT(27));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(25),TERMINAL(27),ROOT(28));

result = vpx_method_Unix_20_Carriage_20_Return(PARAMETERS,ROOT(29));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(28),TERMINAL(29),ROOT(30));

result = vpx_constant(PARAMETERS,"{",ROOT(31));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,3,1,TERMINAL(30),TERMINAL(31),TERMINAL(29),ROOT(32));

result = kSuccess;

OUTPUT(0,TERMINAL(32))
FOOTERSINGLECASE(33)
}

enum opTrigger vpx_method_Universal_20_Data_2F_Export_20_Text_case_1_local_7_case_2_local_9_case_1_local_5_case_1_local_2_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Universal_20_Data_2F_Export_20_Text_case_1_local_7_case_2_local_9_case_1_local_5_case_1_local_2_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
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

enum opTrigger vpx_method_Universal_20_Data_2F_Export_20_Text_case_1_local_7_case_2_local_9_case_1_local_5_case_1_local_2_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Universal_20_Data_2F_Export_20_Text_case_1_local_7_case_2_local_9_case_1_local_5_case_1_local_2_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"FALSE",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Universal_20_Data_2F_Export_20_Text_case_1_local_7_case_2_local_9_case_1_local_5_case_1_local_2_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Universal_20_Data_2F_Export_20_Text_case_1_local_7_case_2_local_9_case_1_local_5_case_1_local_2_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Universal_20_Data_2F_Export_20_Text_case_1_local_7_case_2_local_9_case_1_local_5_case_1_local_2_case_1_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Universal_20_Data_2F_Export_20_Text_case_1_local_7_case_2_local_9_case_1_local_5_case_1_local_2_case_1_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Universal_20_Data_2F_Export_20_Text_case_1_local_7_case_2_local_9_case_1_local_5_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Universal_20_Data_2F_Export_20_Text_case_1_local_7_case_2_local_9_case_1_local_5_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_Inputs,TERMINAL(2),ROOT(3),ROOT(4));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(4))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Universal_20_Data_2F_Export_20_Text_case_1_local_7_case_2_local_9_case_1_local_5_case_1_local_2_case_1_local_4(PARAMETERS,LIST(4),ROOT(5));
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

enum opTrigger vpx_method_Universal_20_Data_2F_Export_20_Text_case_1_local_7_case_2_local_9_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Universal_20_Data_2F_Export_20_Text_case_1_local_7_case_2_local_9_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

if( (repeatLimit = vpx_multiplex(1,TERMINAL(0))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Universal_20_Data_2F_Export_20_Text_case_1_local_7_case_2_local_9_case_1_local_5_case_1_local_2(PARAMETERS,LIST(0),ROOT(1));
REPEATFINISH
} else {
ROOTNULL(1,NULL)
}

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Universal_20_Data_2F_Export_20_Text_case_1_local_7_case_2_local_9_case_1_local_6_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Universal_20_Data_2F_Export_20_Text_case_1_local_7_case_2_local_9_case_1_local_6_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
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

enum opTrigger vpx_method_Universal_20_Data_2F_Export_20_Text_case_1_local_7_case_2_local_9_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Universal_20_Data_2F_Export_20_Text_case_1_local_7_case_2_local_9_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

if( (repeatLimit = vpx_multiplex(1,TERMINAL(0))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Universal_20_Data_2F_Export_20_Text_case_1_local_7_case_2_local_9_case_1_local_6_case_1_local_2(PARAMETERS,LIST(0),ROOT(1));
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

enum opTrigger vpx_method_Universal_20_Data_2F_Export_20_Text_case_1_local_7_case_2_local_9_case_1_local_7_case_1_local_8_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Universal_20_Data_2F_Export_20_Text_case_1_local_7_case_2_local_9_case_1_local_7_case_1_local_8_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
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

enum opTrigger vpx_method_Universal_20_Data_2F_Export_20_Text_case_1_local_7_case_2_local_9_case_1_local_7_case_1_local_8_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Universal_20_Data_2F_Export_20_Text_case_1_local_7_case_2_local_9_case_1_local_7_case_1_local_8_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"HEADER(",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Universal_20_Data_2F_Export_20_Text_case_1_local_7_case_2_local_9_case_1_local_7_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Universal_20_Data_2F_Export_20_Text_case_1_local_7_case_2_local_9_case_1_local_7_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Universal_20_Data_2F_Export_20_Text_case_1_local_7_case_2_local_9_case_1_local_7_case_1_local_8_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Universal_20_Data_2F_Export_20_Text_case_1_local_7_case_2_local_9_case_1_local_7_case_1_local_8_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Universal_20_Data_2F_Export_20_Text_case_1_local_7_case_2_local_9_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Universal_20_Data_2F_Export_20_Text_case_1_local_7_case_2_local_9_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(10)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Unix_20_Carriage_20_Return(PARAMETERS,ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP__28_length_29_,1,1,TERMINAL(0),ROOT(3));

result = vpx_constant(PARAMETERS,")",ROOT(4));

result = vpx_constant(PARAMETERS,"1",ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_max,2,1,TERMINAL(3),TERMINAL(5),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP_to_2D_string,1,1,TERMINAL(6),ROOT(7));

result = vpx_method_Universal_20_Data_2F_Export_20_Text_case_1_local_7_case_2_local_9_case_1_local_7_case_1_local_8(PARAMETERS,TERMINAL(1),ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,4,1,TERMINAL(8),TERMINAL(7),TERMINAL(4),TERMINAL(2),ROOT(9));

result = kSuccess;

OUTPUT(0,TERMINAL(9))
FOOTERSINGLECASE(10)
}

enum opTrigger vpx_method_Universal_20_Data_2F_Export_20_Text_case_1_local_7_case_2_local_9_case_1_local_10_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Universal_20_Data_2F_Export_20_Text_case_1_local_7_case_2_local_9_case_1_local_10_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1)
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

enum opTrigger vpx_method_Universal_20_Data_2F_Export_20_Text_case_1_local_7_case_2_local_9_case_1_local_10_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0);
enum opTrigger vpx_method_Universal_20_Data_2F_Export_20_Text_case_1_local_7_case_2_local_9_case_1_local_10_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0)
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
result = vpx_method_Universal_20_Data_2F_Export_20_Text_case_1_local_7_case_2_local_9_case_1_local_10_case_1_local_7(PARAMETERS,LOOP(0),LIST(10),LOOP(1),ROOT(11),ROOT(12));
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

enum opTrigger vpx_method_Universal_20_Data_2F_Export_20_Text_case_1_local_7_case_2_local_9_case_1_local_10_case_2_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Universal_20_Data_2F_Export_20_Text_case_1_local_7_case_2_local_9_case_1_local_10_case_2_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1)
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

enum opTrigger vpx_method_Universal_20_Data_2F_Export_20_Text_case_1_local_7_case_2_local_9_case_1_local_10_case_2_local_13(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Universal_20_Data_2F_Export_20_Text_case_1_local_7_case_2_local_9_case_1_local_10_case_2_local_13(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1)
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

enum opTrigger vpx_method_Universal_20_Data_2F_Export_20_Text_case_1_local_7_case_2_local_9_case_1_local_10_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0);
enum opTrigger vpx_method_Universal_20_Data_2F_Export_20_Text_case_1_local_7_case_2_local_9_case_1_local_10_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0)
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
result = vpx_method_Universal_20_Data_2F_Export_20_Text_case_1_local_7_case_2_local_9_case_1_local_10_case_2_local_7(PARAMETERS,LOOP(0),LIST(10),LOOP(1),ROOT(11),ROOT(12));
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
result = vpx_method_Universal_20_Data_2F_Export_20_Text_case_1_local_7_case_2_local_9_case_1_local_10_case_2_local_13(PARAMETERS,LOOP(0),LIST(19),LOOP(1),ROOT(20),ROOT(21));
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

enum opTrigger vpx_method_Universal_20_Data_2F_Export_20_Text_case_1_local_7_case_2_local_9_case_1_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0);
enum opTrigger vpx_method_Universal_20_Data_2F_Export_20_Text_case_1_local_7_case_2_local_9_case_1_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Universal_20_Data_2F_Export_20_Text_case_1_local_7_case_2_local_9_case_1_local_10_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0))
vpx_method_Universal_20_Data_2F_Export_20_Text_case_1_local_7_case_2_local_9_case_1_local_10_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0);
return outcome;
}

enum opTrigger vpx_method_Universal_20_Data_2F_Export_20_Text_case_1_local_7_case_2_local_9_case_1_local_11(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Universal_20_Data_2F_Export_20_Text_case_1_local_7_case_2_local_9_case_1_local_11(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
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

enum opTrigger vpx_method_Universal_20_Data_2F_Export_20_Text_case_1_local_7_case_2_local_9_case_1_local_12_case_1_local_8_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Universal_20_Data_2F_Export_20_Text_case_1_local_7_case_2_local_9_case_1_local_12_case_1_local_8_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"FOOTERSINGLECASEWITHNONE(",ROOT(1));

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(0));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Universal_20_Data_2F_Export_20_Text_case_1_local_7_case_2_local_9_case_1_local_12_case_1_local_8_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Universal_20_Data_2F_Export_20_Text_case_1_local_7_case_2_local_9_case_1_local_12_case_1_local_8_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"FOOTERSINGLECASE(",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Universal_20_Data_2F_Export_20_Text_case_1_local_7_case_2_local_9_case_1_local_12_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Universal_20_Data_2F_Export_20_Text_case_1_local_7_case_2_local_9_case_1_local_12_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Universal_20_Data_2F_Export_20_Text_case_1_local_7_case_2_local_9_case_1_local_12_case_1_local_8_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Universal_20_Data_2F_Export_20_Text_case_1_local_7_case_2_local_9_case_1_local_12_case_1_local_8_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Universal_20_Data_2F_Export_20_Text_case_1_local_7_case_2_local_9_case_1_local_12(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Universal_20_Data_2F_Export_20_Text_case_1_local_7_case_2_local_9_case_1_local_12(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(12)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP__28_length_29_,1,1,TERMINAL(0),ROOT(2));

result = vpx_constant(PARAMETERS,")",ROOT(3));

result = vpx_method_Unix_20_Carriage_20_Return(PARAMETERS,ROOT(4));

result = vpx_constant(PARAMETERS,"1",ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_max,2,1,TERMINAL(2),TERMINAL(5),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP_to_2D_string,1,1,TERMINAL(6),ROOT(7));

result = vpx_method_Universal_20_Data_2F_Export_20_Text_case_1_local_7_case_2_local_9_case_1_local_12_case_1_local_8(PARAMETERS,TERMINAL(1),ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,4,1,TERMINAL(8),TERMINAL(7),TERMINAL(3),TERMINAL(4),ROOT(9));

result = vpx_constant(PARAMETERS,"}",ROOT(10));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,4,1,TERMINAL(9),TERMINAL(10),TERMINAL(4),TERMINAL(4),ROOT(11));

result = kSuccess;

OUTPUT(0,TERMINAL(11))
FOOTERSINGLECASE(12)
}

enum opTrigger vpx_method_Universal_20_Data_2F_Export_20_Text_case_1_local_7_case_2_local_9_case_1_local_13_case_1_local_4_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Universal_20_Data_2F_Export_20_Text_case_1_local_7_case_2_local_9_case_1_local_13_case_1_local_4_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
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

enum opTrigger vpx_method_Universal_20_Data_2F_Export_20_Text_case_1_local_7_case_2_local_9_case_1_local_13_case_1_local_4_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Universal_20_Data_2F_Export_20_Text_case_1_local_7_case_2_local_9_case_1_local_13_case_1_local_4_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Universal_20_Data_2F_Export_20_Text_case_1_local_7_case_2_local_9_case_1_local_13_case_1_local_4_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Universal_20_Data_2F_Export_20_Text_case_1_local_7_case_2_local_9_case_1_local_13_case_1_local_4_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Universal_20_Data_2F_Export_20_Text_case_1_local_7_case_2_local_9_case_1_local_13_case_1_local_4_case_1_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Universal_20_Data_2F_Export_20_Text_case_1_local_7_case_2_local_9_case_1_local_13_case_1_local_4_case_1_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Universal_20_Data_2F_Export_20_Text_case_1_local_7_case_2_local_9_case_1_local_13_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Universal_20_Data_2F_Export_20_Text_case_1_local_7_case_2_local_9_case_1_local_13_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Root,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP__28_in_29_,2,1,TERMINAL(1),TERMINAL(3),ROOT(4));

result = vpx_method_Universal_20_Data_2F_Export_20_Text_case_1_local_7_case_2_local_9_case_1_local_13_case_1_local_4_case_1_local_4(PARAMETERS,TERMINAL(4),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Universal_20_Data_2F_Export_20_Text_case_1_local_7_case_2_local_9_case_1_local_13_case_1_local_7_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Universal_20_Data_2F_Export_20_Text_case_1_local_7_case_2_local_9_case_1_local_13_case_1_local_7_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
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

enum opTrigger vpx_method_Universal_20_Data_2F_Export_20_Text_case_1_local_7_case_2_local_9_case_1_local_13_case_1_local_7_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Universal_20_Data_2F_Export_20_Text_case_1_local_7_case_2_local_9_case_1_local_13_case_1_local_7_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
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

enum opTrigger vpx_method_Universal_20_Data_2F_Export_20_Text_case_1_local_7_case_2_local_9_case_1_local_13_case_1_local_7_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Universal_20_Data_2F_Export_20_Text_case_1_local_7_case_2_local_9_case_1_local_13_case_1_local_7_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Universal_20_Data_2F_Export_20_Text_case_1_local_7_case_2_local_9_case_1_local_13_case_1_local_7_case_1_local_6_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Universal_20_Data_2F_Export_20_Text_case_1_local_7_case_2_local_9_case_1_local_13_case_1_local_7_case_1_local_6_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Universal_20_Data_2F_Export_20_Text_case_1_local_7_case_2_local_9_case_1_local_13_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Universal_20_Data_2F_Export_20_Text_case_1_local_7_case_2_local_9_case_1_local_13_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1)
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

result = vpx_method_Universal_20_Data_2F_Export_20_Text_case_1_local_7_case_2_local_9_case_1_local_13_case_1_local_7_case_1_local_6(PARAMETERS,TERMINAL(1),ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,6,1,TERMINAL(0),TERMINAL(3),TERMINAL(5),TERMINAL(4),TERMINAL(7),TERMINAL(6),ROOT(8));

result = vpx_method_Unix_20_Carriage_20_Return(PARAMETERS,ROOT(9));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(8),TERMINAL(9),ROOT(10));

result = vpx_call_primitive(PARAMETERS,VPLP__2B_1,1,1,TERMINAL(2),ROOT(11));

result = kSuccess;

OUTPUT(0,TERMINAL(10))
OUTPUT(1,TERMINAL(11))
FOOTERSINGLECASE(12)
}

enum opTrigger vpx_method_Universal_20_Data_2F_Export_20_Text_case_1_local_7_case_2_local_9_case_1_local_13(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Universal_20_Data_2F_Export_20_Text_case_1_local_7_case_2_local_9_case_1_local_13(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
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
result = vpx_method_Universal_20_Data_2F_Export_20_Text_case_1_local_7_case_2_local_9_case_1_local_13_case_1_local_4(PARAMETERS,LIST(6),TERMINAL(2),ROOT(7));
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
result = vpx_method_Universal_20_Data_2F_Export_20_Text_case_1_local_7_case_2_local_9_case_1_local_13_case_1_local_7(PARAMETERS,LOOP(0),LIST(7),LOOP(1),ROOT(10),ROOT(11));
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

enum opTrigger vpx_method_Universal_20_Data_2F_Export_20_Text_case_1_local_7_case_2_local_9_case_1_local_16_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Universal_20_Data_2F_Export_20_Text_case_1_local_7_case_2_local_9_case_1_local_16_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
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

enum opTrigger vpx_method_Universal_20_Data_2F_Export_20_Text_case_1_local_7_case_2_local_9_case_1_local_16_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Universal_20_Data_2F_Export_20_Text_case_1_local_7_case_2_local_9_case_1_local_16_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(2)
}

enum opTrigger vpx_method_Universal_20_Data_2F_Export_20_Text_case_1_local_7_case_2_local_9_case_1_local_16(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Universal_20_Data_2F_Export_20_Text_case_1_local_7_case_2_local_9_case_1_local_16(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Universal_20_Data_2F_Export_20_Text_case_1_local_7_case_2_local_9_case_1_local_16_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Universal_20_Data_2F_Export_20_Text_case_1_local_7_case_2_local_9_case_1_local_16_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Universal_20_Data_2F_Export_20_Text_case_1_local_7_case_2_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Universal_20_Data_2F_Export_20_Text_case_1_local_7_case_2_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(21)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Operation Data",ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(1),TERMINAL(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_method_Universal_20_Data_2F_Export_20_Text_case_1_local_7_case_2_local_9_case_1_local_5(PARAMETERS,TERMINAL(5),ROOT(6));

result = vpx_method_Universal_20_Data_2F_Export_20_Text_case_1_local_7_case_2_local_9_case_1_local_6(PARAMETERS,TERMINAL(5),ROOT(7));

result = vpx_method_Universal_20_Data_2F_Export_20_Text_case_1_local_7_case_2_local_9_case_1_local_7(PARAMETERS,TERMINAL(7),TERMINAL(6),ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP_detach_2D_r,1,2,TERMINAL(5),ROOT(9),ROOT(10));

result = vpx_call_primitive(PARAMETERS,VPLP_detach_2D_l,1,2,TERMINAL(9),ROOT(11),ROOT(12));

result = vpx_method_Universal_20_Data_2F_Export_20_Text_case_1_local_7_case_2_local_9_case_1_local_10(PARAMETERS,TERMINAL(8),TERMINAL(11),TERMINAL(10),TERMINAL(7),ROOT(13));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(5))) ){
REPEATBEGINWITHCOUNTER
LOOPTERMINALBEGIN(1)
LOOPTERMINAL(0,13,14)
result = vpx_method_Universal_20_Data_2F_Export_20_Text_case_1_local_7_case_2_local_9_case_1_local_11(PARAMETERS,LOOP(0),LIST(5),TERMINAL(7),ROOT(14));
REPEATFINISH
} else {
ROOTNULL(14,TERMINAL(13))
}

result = vpx_method_Universal_20_Data_2F_Export_20_Text_case_1_local_7_case_2_local_9_case_1_local_12(PARAMETERS,TERMINAL(7),TERMINAL(6),ROOT(15));

result = vpx_method_Universal_20_Data_2F_Export_20_Text_case_1_local_7_case_2_local_9_case_1_local_13(PARAMETERS,TERMINAL(14),TERMINAL(10),TERMINAL(7),ROOT(16));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(16),TERMINAL(15),ROOT(17));

result = vpx_constant(PARAMETERS,"\"\"",ROOT(18));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(5))) ){
REPEATBEGINWITHCOUNTER
LOOPTERMINALBEGIN(1)
LOOPTERMINAL(0,18,19)
result = vpx_method_Universal_20_Data_2F_Export_20_Text_case_1_local_7_case_2_local_9_case_1_local_16(PARAMETERS,LOOP(0),LIST(5),ROOT(19));
REPEATFINISH
} else {
ROOTNULL(19,TERMINAL(18))
}

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,3,1,TERMINAL(19),TERMINAL(0),TERMINAL(17),ROOT(20));

result = kSuccess;

OUTPUT(0,TERMINAL(20))
FOOTERSINGLECASE(21)
}

enum opTrigger vpx_method_Universal_20_Data_2F_Export_20_Text_case_1_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Universal_20_Data_2F_Export_20_Text_case_1_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(10)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Operation Data",ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP__28_length_29_,1,1,TERMINAL(0),ROOT(3));

result = vpx_match(PARAMETERS,"1",TERMINAL(3));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,1,TERMINAL(0),ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(4),TERMINAL(2),ROOT(5));

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(5),ROOT(6),ROOT(7));

result = vpx_method_Universal_20_Data_2F_Export_20_Text_case_1_local_7_case_2_local_8(PARAMETERS,TERMINAL(1),TERMINAL(7),ROOT(8));

result = vpx_method_Universal_20_Data_2F_Export_20_Text_case_1_local_7_case_2_local_9(PARAMETERS,TERMINAL(8),TERMINAL(4),ROOT(9));

result = kSuccess;

OUTPUT(0,TERMINAL(9))
FOOTER(10)
}

enum opTrigger vpx_method_Universal_20_Data_2F_Export_20_Text_case_1_local_7_case_3_local_6_case_1_local_12(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Universal_20_Data_2F_Export_20_Text_case_1_local_7_case_3_local_6_case_1_local_12(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1)
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

enum opTrigger vpx_method_Universal_20_Data_2F_Export_20_Text_case_1_local_7_case_3_local_6_case_1_local_15(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Universal_20_Data_2F_Export_20_Text_case_1_local_7_case_3_local_6_case_1_local_15(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1)
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

enum opTrigger vpx_method_Universal_20_Data_2F_Export_20_Text_case_1_local_7_case_3_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Universal_20_Data_2F_Export_20_Text_case_1_local_7_case_3_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(35)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,",ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Export_20_Name,1,1,TERMINAL(0),ROOT(3));

result = vpx_constant(PARAMETERS,"\"enum opTrigger \"",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(4),TERMINAL(3),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(5),TERMINAL(2),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP_detach_2D_r,1,2,TERMINAL(1),ROOT(7),ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP_detach_2D_l,1,2,TERMINAL(7),ROOT(9),ROOT(10));

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(9),ROOT(11),ROOT(12));

result = vpx_get(PARAMETERS,kVPXValue_Outputs,TERMINAL(12),ROOT(13),ROOT(14));

result = vpx_constant(PARAMETERS,"0",ROOT(15));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(14))) ){
REPEATBEGINWITHCOUNTER
LOOPTERMINALBEGIN(2)
LOOPTERMINAL(0,6,16)
LOOPTERMINAL(1,15,17)
result = vpx_method_Universal_20_Data_2F_Export_20_Text_case_1_local_7_case_3_local_6_case_1_local_12(PARAMETERS,LOOP(0),LIST(14),LOOP(1),ROOT(16),ROOT(17));
REPEATFINISH
} else {
ROOTNULL(16,TERMINAL(6))
ROOTNULL(17,TERMINAL(15))
}

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(8),ROOT(18),ROOT(19));

result = vpx_get(PARAMETERS,kVPXValue_Inputs,TERMINAL(19),ROOT(20),ROOT(21));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(21))) ){
REPEATBEGINWITHCOUNTER
LOOPTERMINALBEGIN(2)
LOOPTERMINAL(0,16,22)
LOOPTERMINAL(1,15,23)
result = vpx_method_Universal_20_Data_2F_Export_20_Text_case_1_local_7_case_3_local_6_case_1_local_15(PARAMETERS,LOOP(0),LIST(21),LOOP(1),ROOT(22),ROOT(23));
REPEATFINISH
} else {
ROOTNULL(22,TERMINAL(16))
ROOTNULL(23,TERMINAL(15))
}

result = vpx_constant(PARAMETERS,"1",ROOT(24));

result = vpx_call_primitive(PARAMETERS,VPLP_suffix,2,2,TERMINAL(22),TERMINAL(24),ROOT(25),ROOT(26));

result = vpx_constant(PARAMETERS,")",ROOT(27));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(25),TERMINAL(27),ROOT(28));

result = vpx_method_Unix_20_Carriage_20_Return(PARAMETERS,ROOT(29));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(28),TERMINAL(29),ROOT(30));

result = vpx_constant(PARAMETERS,"{",ROOT(31));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,3,1,TERMINAL(30),TERMINAL(31),TERMINAL(29),ROOT(32));

result = vpx_constant(PARAMETERS,"enum opTrigger outcome = kSuccess;",ROOT(33));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,3,1,TERMINAL(32),TERMINAL(33),TERMINAL(29),ROOT(34));

result = kSuccess;

OUTPUT(0,TERMINAL(34))
FOOTERSINGLECASE(35)
}

enum opTrigger vpx_method_Universal_20_Data_2F_Export_20_Text_case_1_local_7_case_3_local_8_case_1_local_12(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Universal_20_Data_2F_Export_20_Text_case_1_local_7_case_3_local_8_case_1_local_12(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"terminal",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_to_2D_string,1,1,TERMINAL(2),ROOT(4));

result = vpx_constant(PARAMETERS,",",ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,4,1,TERMINAL(0),TERMINAL(3),TERMINAL(4),TERMINAL(5),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP__2B_1,1,1,TERMINAL(2),ROOT(7));

result = kSuccess;

OUTPUT(0,TERMINAL(6))
OUTPUT(1,TERMINAL(7))
FOOTERSINGLECASE(8)
}

enum opTrigger vpx_method_Universal_20_Data_2F_Export_20_Text_case_1_local_7_case_3_local_8_case_1_local_15(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Universal_20_Data_2F_Export_20_Text_case_1_local_7_case_3_local_8_case_1_local_15(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"root",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_to_2D_string,1,1,TERMINAL(2),ROOT(4));

result = vpx_constant(PARAMETERS,",",ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,4,1,TERMINAL(0),TERMINAL(3),TERMINAL(4),TERMINAL(5),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP__2B_1,1,1,TERMINAL(2),ROOT(7));

result = kSuccess;

OUTPUT(0,TERMINAL(6))
OUTPUT(1,TERMINAL(7))
FOOTERSINGLECASE(8)
}

enum opTrigger vpx_method_Universal_20_Data_2F_Export_20_Text_case_1_local_7_case_3_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Universal_20_Data_2F_Export_20_Text_case_1_local_7_case_3_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(35)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"(environment, &outcome, inputRepeat, contextIndex,",ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(1),ROOT(4),ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Export_20_Name,1,1,TERMINAL(5),ROOT(6));

result = vpx_constant(PARAMETERS,"if(",ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,3,1,TERMINAL(7),TERMINAL(6),TERMINAL(3),ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP_detach_2D_r,1,2,TERMINAL(2),ROOT(9),ROOT(10));

result = vpx_call_primitive(PARAMETERS,VPLP_detach_2D_l,1,2,TERMINAL(9),ROOT(11),ROOT(12));

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(11),ROOT(13),ROOT(14));

result = vpx_get(PARAMETERS,kVPXValue_Outputs,TERMINAL(14),ROOT(15),ROOT(16));

result = vpx_constant(PARAMETERS,"0",ROOT(17));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(16))) ){
REPEATBEGINWITHCOUNTER
LOOPTERMINALBEGIN(2)
LOOPTERMINAL(0,8,18)
LOOPTERMINAL(1,17,19)
result = vpx_method_Universal_20_Data_2F_Export_20_Text_case_1_local_7_case_3_local_8_case_1_local_12(PARAMETERS,LOOP(0),LIST(16),LOOP(1),ROOT(18),ROOT(19));
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
result = vpx_method_Universal_20_Data_2F_Export_20_Text_case_1_local_7_case_3_local_8_case_1_local_15(PARAMETERS,LOOP(0),LIST(23),LOOP(1),ROOT(24),ROOT(25));
REPEATFINISH
} else {
ROOTNULL(24,TERMINAL(18))
ROOTNULL(25,TERMINAL(17))
}

result = vpx_constant(PARAMETERS,"1",ROOT(26));

result = vpx_call_primitive(PARAMETERS,VPLP_suffix,2,2,TERMINAL(24),TERMINAL(26),ROOT(27),ROOT(28));

result = vpx_constant(PARAMETERS,")",ROOT(29));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(27),TERMINAL(29),ROOT(30));

result = vpx_constant(PARAMETERS,")",ROOT(31));

result = vpx_method_Unix_20_Carriage_20_Return(PARAMETERS,ROOT(32));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,3,1,TERMINAL(30),TERMINAL(31),TERMINAL(32),ROOT(33));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(0),TERMINAL(33),ROOT(34));

result = kSuccess;

OUTPUT(0,TERMINAL(34))
FOOTERSINGLECASE(35)
}

enum opTrigger vpx_method_Universal_20_Data_2F_Export_20_Text_case_1_local_7_case_3_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Universal_20_Data_2F_Export_20_Text_case_1_local_7_case_3_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Unix_20_Carriage_20_Return(PARAMETERS,ROOT(1));

result = vpx_constant(PARAMETERS,"}",ROOT(2));

result = vpx_constant(PARAMETERS,"return outcome;",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(3),TERMINAL(1),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,4,1,TERMINAL(4),TERMINAL(2),TERMINAL(1),TERMINAL(1),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Universal_20_Data_2F_Export_20_Text_case_1_local_7_case_3_local_10_case_1_local_11(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Universal_20_Data_2F_Export_20_Text_case_1_local_7_case_3_local_10_case_1_local_11(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"terminal",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_to_2D_string,1,1,TERMINAL(2),ROOT(4));

result = vpx_constant(PARAMETERS,",",ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,4,1,TERMINAL(0),TERMINAL(3),TERMINAL(4),TERMINAL(5),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP__2B_1,1,1,TERMINAL(2),ROOT(7));

result = kSuccess;

OUTPUT(0,TERMINAL(6))
OUTPUT(1,TERMINAL(7))
FOOTERSINGLECASE(8)
}

enum opTrigger vpx_method_Universal_20_Data_2F_Export_20_Text_case_1_local_7_case_3_local_10_case_1_local_14(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Universal_20_Data_2F_Export_20_Text_case_1_local_7_case_3_local_10_case_1_local_14(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"root",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_to_2D_string,1,1,TERMINAL(2),ROOT(4));

result = vpx_constant(PARAMETERS,",",ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,4,1,TERMINAL(0),TERMINAL(3),TERMINAL(4),TERMINAL(5),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP__2B_1,1,1,TERMINAL(2),ROOT(7));

result = kSuccess;

OUTPUT(0,TERMINAL(6))
OUTPUT(1,TERMINAL(7))
FOOTERSINGLECASE(8)
}

enum opTrigger vpx_method_Universal_20_Data_2F_Export_20_Text_case_1_local_7_case_3_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Universal_20_Data_2F_Export_20_Text_case_1_local_7_case_3_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(34)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"(environment, &outcome, inputRepeat, contextIndex,",ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(1),ROOT(4),ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Export_20_Name,1,1,TERMINAL(5),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(6),TERMINAL(3),ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP_detach_2D_r,1,2,TERMINAL(2),ROOT(8),ROOT(9));

result = vpx_call_primitive(PARAMETERS,VPLP_detach_2D_l,1,2,TERMINAL(8),ROOT(10),ROOT(11));

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(10),ROOT(12),ROOT(13));

result = vpx_get(PARAMETERS,kVPXValue_Outputs,TERMINAL(13),ROOT(14),ROOT(15));

result = vpx_constant(PARAMETERS,"0",ROOT(16));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(15))) ){
REPEATBEGINWITHCOUNTER
LOOPTERMINALBEGIN(2)
LOOPTERMINAL(0,7,17)
LOOPTERMINAL(1,16,18)
result = vpx_method_Universal_20_Data_2F_Export_20_Text_case_1_local_7_case_3_local_10_case_1_local_11(PARAMETERS,LOOP(0),LIST(15),LOOP(1),ROOT(17),ROOT(18));
REPEATFINISH
} else {
ROOTNULL(17,TERMINAL(7))
ROOTNULL(18,TERMINAL(16))
}

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(9),ROOT(19),ROOT(20));

result = vpx_get(PARAMETERS,kVPXValue_Inputs,TERMINAL(20),ROOT(21),ROOT(22));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(22))) ){
REPEATBEGINWITHCOUNTER
LOOPTERMINALBEGIN(2)
LOOPTERMINAL(0,17,23)
LOOPTERMINAL(1,16,24)
result = vpx_method_Universal_20_Data_2F_Export_20_Text_case_1_local_7_case_3_local_10_case_1_local_14(PARAMETERS,LOOP(0),LIST(22),LOOP(1),ROOT(23),ROOT(24));
REPEATFINISH
} else {
ROOTNULL(23,TERMINAL(17))
ROOTNULL(24,TERMINAL(16))
}

result = vpx_constant(PARAMETERS,"1",ROOT(25));

result = vpx_call_primitive(PARAMETERS,VPLP_suffix,2,2,TERMINAL(23),TERMINAL(25),ROOT(26),ROOT(27));

result = vpx_constant(PARAMETERS,")",ROOT(28));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(26),TERMINAL(28),ROOT(29));

result = vpx_constant(PARAMETERS,";",ROOT(30));

result = vpx_method_Unix_20_Carriage_20_Return(PARAMETERS,ROOT(31));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,3,1,TERMINAL(29),TERMINAL(30),TERMINAL(31),ROOT(32));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(0),TERMINAL(32),ROOT(33));

result = kSuccess;

OUTPUT(0,TERMINAL(33))
FOOTERSINGLECASE(34)
}

enum opTrigger vpx_method_Universal_20_Data_2F_Export_20_Text_case_1_local_7_case_3_local_13(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Universal_20_Data_2F_Export_20_Text_case_1_local_7_case_3_local_13(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Export_20_Text,1,1,TERMINAL(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(0),TERMINAL(4),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Universal_20_Data_2F_Export_20_Text_case_1_local_7_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Universal_20_Data_2F_Export_20_Text_case_1_local_7_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(17)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Operation Data",ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,1,TERMINAL(0),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(3),TERMINAL(2),ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(4),ROOT(5),ROOT(6));

result = vpx_method_Universal_20_Data_2F_Export_20_Text_case_1_local_7_case_3_local_6(PARAMETERS,TERMINAL(1),TERMINAL(6),ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP_detach_2D_r,1,2,TERMINAL(0),ROOT(8),ROOT(9));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(8))) ){
REPEATBEGINWITHCOUNTER
LOOPTERMINALBEGIN(1)
LOOPTERMINAL(0,7,10)
result = vpx_method_Universal_20_Data_2F_Export_20_Text_case_1_local_7_case_3_local_8(PARAMETERS,LOOP(0),LIST(8),TERMINAL(6),ROOT(10));
REPEATFINISH
} else {
ROOTNULL(10,TERMINAL(7))
}

result = vpx_method_Universal_20_Data_2F_Export_20_Text_case_1_local_7_case_3_local_9(PARAMETERS,TERMINAL(1),ROOT(11));

result = vpx_method_Universal_20_Data_2F_Export_20_Text_case_1_local_7_case_3_local_10(PARAMETERS,TERMINAL(10),TERMINAL(9),TERMINAL(6),ROOT(12));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(12),TERMINAL(11),ROOT(13));

result = vpx_constant(PARAMETERS,"\"\"",ROOT(14));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(0))) ){
REPEATBEGINWITHCOUNTER
LOOPTERMINALBEGIN(1)
LOOPTERMINAL(0,14,15)
result = vpx_method_Universal_20_Data_2F_Export_20_Text_case_1_local_7_case_3_local_13(PARAMETERS,LOOP(0),LIST(0),ROOT(15));
REPEATFINISH
} else {
ROOTNULL(15,TERMINAL(14))
}

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(15),TERMINAL(13),ROOT(16));

result = kSuccess;

OUTPUT(0,TERMINAL(16))
FOOTER(17)
}

enum opTrigger vpx_method_Universal_20_Data_2F_Export_20_Text_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Universal_20_Data_2F_Export_20_Text_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Universal_20_Data_2F_Export_20_Text_case_1_local_7_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
if(vpx_method_Universal_20_Data_2F_Export_20_Text_case_1_local_7_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Universal_20_Data_2F_Export_20_Text_case_1_local_7_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Universal_20_Data_2F_Export_20_Text_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Universal_20_Data_2F_Export_20_Text_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
result = kSuccess;

result = vpx_persistent(PARAMETERS,kVPXValue_Export_20_Mode,0,1,ROOT(1));

result = vpx_match(PARAMETERS,"Experimental",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"Case Data",ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(0),TERMINAL(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_method_Universal_20_Data_2F_Export_20_Text_case_1_local_7(PARAMETERS,TERMINAL(5),TERMINAL(0),ROOT(6));

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTER(7)
}

enum opTrigger vpx_method_Universal_20_Data_2F_Export_20_Text_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Universal_20_Data_2F_Export_20_Text_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(8)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_C_20_Code_20_Header,1,1,TERMINAL(0),ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_C_20_Code_20_Export_20_Cases,1,1,TERMINAL(0),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_C_20_Code_20_Value,1,1,TERMINAL(0),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(1),TERMINAL(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(4),TERMINAL(2),ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_C_20_Code_20_Footer,1,1,TERMINAL(0),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(5),TERMINAL(6),ROOT(7));

result = kSuccess;

OUTPUT(0,TERMINAL(7))
FOOTER(8)
}

enum opTrigger vpx_method_Universal_20_Data_2F_Export_20_Text(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Universal_20_Data_2F_Export_20_Text_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Universal_20_Data_2F_Export_20_Text_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Universal_20_Data_2F_Full_20_Name(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Grandparent_20_Helper,1,1,TERMINAL(0),ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Full_20_Universal_20_Name,2,1,TERMINAL(1),TERMINAL(0),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Universal_20_Data_2F_Get_20_Inarity(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Inarity,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Universal_20_Data_2F_Get_20_Outarity(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Outarity,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Universal_20_Data_2F_Get_20_Project_20_Data_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Universal_20_Data_2F_Get_20_Project_20_Data_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
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

enum opTrigger vpx_method_Universal_20_Data_2F_Get_20_Project_20_Data_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Universal_20_Data_2F_Get_20_Project_20_Data_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Universal_20_Data_2F_Get_20_Project_20_Data(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Universal_20_Data_2F_Get_20_Project_20_Data_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Universal_20_Data_2F_Get_20_Project_20_Data_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Universal_20_Data_2F_Initialize_20_Item_20_Data_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Universal_20_Data_2F_Initialize_20_Item_20_Data_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(4)
INPUT(0,0)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_Item_20_Data,1,1,NONE,ROOT(1));

result = vpx_instantiate(PARAMETERS,kVPXClass_Case_20_Data,1,1,NONE,ROOT(2));

result = vpx_set(PARAMETERS,kVPXValue_Owner,TERMINAL(2),TERMINAL(1),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Install_20_Helper,2,0,TERMINAL(1),TERMINAL(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Create_20_Default_20_Case,3,0,TERMINAL(2),TERMINAL(1),TERMINAL(0));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASEWITHNONE(4)
}

enum opTrigger vpx_method_Universal_20_Data_2F_Initialize_20_Item_20_Data_case_1_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Universal_20_Data_2F_Initialize_20_Item_20_Data_case_1_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Grandparent_20_Helper,1,1,TERMINAL(0),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(2),ROOT(3));

result = vpx_match(PARAMETERS,"Class Data",TERMINAL(3));
TERMINATEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Name,TERMINAL(0),ROOT(4),ROOT(5));

result = vpx_match(PARAMETERS,"\"Untitled Universal\"",TERMINAL(5));
TERMINATEONFAILURE

result = vpx_constant(PARAMETERS,"\"Untitled Method\"",ROOT(6));

result = vpx_set(PARAMETERS,kVPXValue_Name,TERMINAL(0),TERMINAL(6),ROOT(7));

result = vpx_set(PARAMETERS,kVPXValue_Name,TERMINAL(1),TERMINAL(6),ROOT(8));

result = kSuccess;

FOOTERSINGLECASE(9)
}

enum opTrigger vpx_method_Universal_20_Data_2F_Initialize_20_Item_20_Data_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Universal_20_Data_2F_Initialize_20_Item_20_Data_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADERWITHNONE(10)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Universal_20_Data_2F_Initialize_20_Item_20_Data_case_1_local_2(PARAMETERS,TERMINAL(0),ROOT(2));

result = vpx_instantiate(PARAMETERS,kVPXClass_List_20_Data,1,1,NONE,ROOT(3));

result = vpx_constant(PARAMETERS,"Case Data",ROOT(4));

result = vpx_set(PARAMETERS,kVPXValue_Helper_20_Name,TERMINAL(3),TERMINAL(4),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,1,1,TERMINAL(5),ROOT(6));

result = vpx_set(PARAMETERS,kVPXValue_Lists,TERMINAL(1),TERMINAL(6),ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,1,1,TERMINAL(2),ROOT(8));

result = vpx_set(PARAMETERS,kVPXValue_List,TERMINAL(5),TERMINAL(8),ROOT(9));

result = vpx_method_Universal_20_Data_2F_Initialize_20_Item_20_Data_case_1_local_10(PARAMETERS,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTERWITHNONE(10)
}

enum opTrigger vpx_method_Universal_20_Data_2F_Initialize_20_Item_20_Data_case_2_local_11(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0);
enum opTrigger vpx_method_Universal_20_Data_2F_Initialize_20_Item_20_Data_case_2_local_11(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0)
{
HEADERWITHNONE(3)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_Item_20_Data,1,1,NONE,ROOT(0));

result = vpx_instantiate(PARAMETERS,kVPXClass_Case_20_Data,1,1,NONE,ROOT(1));

result = vpx_set(PARAMETERS,kVPXValue_Owner,TERMINAL(1),TERMINAL(0),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Install_20_Helper,2,0,TERMINAL(0),TERMINAL(2));

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTERSINGLECASEWITHNONE(3)
}

enum opTrigger vpx_method_Universal_20_Data_2F_Initialize_20_Item_20_Data_case_2_local_13(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Universal_20_Data_2F_Initialize_20_Item_20_Data_case_2_local_13(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(11)
INPUT(0,0)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_Item_20_Data,1,1,NONE,ROOT(1));

result = vpx_constant(PARAMETERS,"( 22 22 30 214 )",ROOT(2));

result = vpx_set(PARAMETERS,kVPXValue_Frame,TERMINAL(1),TERMINAL(2),ROOT(3));

result = vpx_constant(PARAMETERS,"input_bar",ROOT(4));

result = vpx_instantiate(PARAMETERS,kVPXClass_Operation_20_Data,1,1,NONE,ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Create_20_Roots,1,1,TERMINAL(0),ROOT(6));

result = vpx_set(PARAMETERS,kVPXValue_Outputs,TERMINAL(5),TERMINAL(6),ROOT(7));

result = vpx_set(PARAMETERS,kVPXValue_Type,TERMINAL(7),TERMINAL(4),ROOT(8));

result = vpx_set(PARAMETERS,kVPXValue_Frame,TERMINAL(8),TERMINAL(2),ROOT(9));

result = vpx_set(PARAMETERS,kVPXValue_Owner,TERMINAL(9),TERMINAL(3),ROOT(10));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Install_20_Helper,2,0,TERMINAL(3),TERMINAL(10));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Position_20_Root,2,0,TERMINAL(5),TERMINAL(6));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASEWITHNONE(11)
}

enum opTrigger vpx_method_Universal_20_Data_2F_Initialize_20_Item_20_Data_case_2_local_14(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Universal_20_Data_2F_Initialize_20_Item_20_Data_case_2_local_14(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(11)
INPUT(0,0)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_Item_20_Data,1,1,NONE,ROOT(1));

result = vpx_constant(PARAMETERS,"( 64 22 72 214 )",ROOT(2));

result = vpx_set(PARAMETERS,kVPXValue_Frame,TERMINAL(1),TERMINAL(2),ROOT(3));

result = vpx_constant(PARAMETERS,"output_bar",ROOT(4));

result = vpx_instantiate(PARAMETERS,kVPXClass_Operation_20_Data,1,1,NONE,ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Create_20_Terminals,1,1,TERMINAL(0),ROOT(6));

result = vpx_set(PARAMETERS,kVPXValue_Inputs,TERMINAL(5),TERMINAL(6),ROOT(7));

result = vpx_set(PARAMETERS,kVPXValue_Type,TERMINAL(7),TERMINAL(4),ROOT(8));

result = vpx_set(PARAMETERS,kVPXValue_Frame,TERMINAL(8),TERMINAL(2),ROOT(9));

result = vpx_set(PARAMETERS,kVPXValue_Owner,TERMINAL(9),TERMINAL(3),ROOT(10));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Install_20_Helper,2,0,TERMINAL(3),TERMINAL(10));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Position_20_Terminal,2,0,TERMINAL(5),TERMINAL(6));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASEWITHNONE(11)
}

enum opTrigger vpx_method_Universal_20_Data_2F_Initialize_20_Item_20_Data_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Universal_20_Data_2F_Initialize_20_Item_20_Data_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADERWITHNONE(19)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_List_20_Data,1,1,NONE,ROOT(2));

result = vpx_constant(PARAMETERS,"Case Data",ROOT(3));

result = vpx_set(PARAMETERS,kVPXValue_Helper_20_Name,TERMINAL(2),TERMINAL(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,1,1,TERMINAL(4),ROOT(5));

result = vpx_set(PARAMETERS,kVPXValue_Lists,TERMINAL(1),TERMINAL(5),ROOT(6));

result = vpx_instantiate(PARAMETERS,kVPXClass_List_20_Data,1,1,NONE,ROOT(7));

result = vpx_constant(PARAMETERS,"Operation Data",ROOT(8));

result = vpx_set(PARAMETERS,kVPXValue_Helper_20_Name,TERMINAL(7),TERMINAL(8),ROOT(9));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,1,1,TERMINAL(9),ROOT(10));

result = vpx_method_Universal_20_Data_2F_Initialize_20_Item_20_Data_case_2_local_11(PARAMETERS,ROOT(11));

result = vpx_set(PARAMETERS,kVPXValue_Lists,TERMINAL(11),TERMINAL(10),ROOT(12));

result = vpx_method_Universal_20_Data_2F_Initialize_20_Item_20_Data_case_2_local_13(PARAMETERS,TERMINAL(0),ROOT(13));

result = vpx_method_Universal_20_Data_2F_Initialize_20_Item_20_Data_case_2_local_14(PARAMETERS,TERMINAL(0),ROOT(14));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(13),TERMINAL(14),ROOT(15));

result = vpx_set(PARAMETERS,kVPXValue_List,TERMINAL(9),TERMINAL(15),ROOT(16));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,1,1,TERMINAL(11),ROOT(17));

result = vpx_set(PARAMETERS,kVPXValue_List,TERMINAL(4),TERMINAL(17),ROOT(18));

result = kSuccess;

FOOTERWITHNONE(19)
}

enum opTrigger vpx_method_Universal_20_Data_2F_Initialize_20_Item_20_Data_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Universal_20_Data_2F_Initialize_20_Item_20_Data_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
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

FOOTERWITHNONE(7)
}

enum opTrigger vpx_method_Universal_20_Data_2F_Initialize_20_Item_20_Data(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Universal_20_Data_2F_Initialize_20_Item_20_Data_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
if(vpx_method_Universal_20_Data_2F_Initialize_20_Item_20_Data_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Universal_20_Data_2F_Initialize_20_Item_20_Data_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Universal_20_Data_2F_Install_20_Names_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3);
enum opTrigger vpx_method_Universal_20_Data_2F_Install_20_Names_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3)
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

enum opTrigger vpx_method_Universal_20_Data_2F_Install_20_Names(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP__28_length_29_,1,1,TERMINAL(3),ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_Name,TERMINAL(0),ROOT(5),ROOT(6));

result = vpx_constant(PARAMETERS,"1",ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP_make_2D_list,3,1,TERMINAL(4),TERMINAL(7),TERMINAL(7),ROOT(8));

if( (repeatLimit = vpx_multiplex(2,TERMINAL(3),TERMINAL(8))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Universal_20_Data_2F_Install_20_Names_case_1_local_7(PARAMETERS,TERMINAL(6),LIST(3),LIST(8),TERMINAL(4));
REPEATFINISH
} else {
}

result = kSuccess;

FOOTERSINGLECASE(9)
}

enum opTrigger vpx_method_Universal_20_Data_2F_Open_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Universal_20_Data_2F_Open_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(7)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Project_20_Data,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
FAILONSUCCESS

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
FAILONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Full_20_Name,1,1,TERMINAL(0),ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Create_20_Method,2,1,TERMINAL(3),TERMINAL(4),ROOT(5));
NEXTCASEONFAILURE

result = vpx_match(PARAMETERS,"NULL",TERMINAL(5));
FAILONSUCCESS

result = vpx_set(PARAMETERS,kVPXValue_Record,TERMINAL(0),TERMINAL(5),ROOT(6));

result = kSuccess;
FINISHONSUCCESS

FOOTER(7)
}

enum opTrigger vpx_method_Universal_20_Data_2F_Open_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Universal_20_Data_2F_Open_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(8)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Name,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_method_Unique_20_Name_20_For_20_String(PARAMETERS,TERMINAL(2),ROOT(3));

result = vpx_set(PARAMETERS,kVPXValue_Name,TERMINAL(1),TERMINAL(3),ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_Owner,TERMINAL(4),ROOT(5),ROOT(6));

result = vpx_set(PARAMETERS,kVPXValue_Name,TERMINAL(6),TERMINAL(3),ROOT(7));

result = kSuccess;

FOOTER(8)
}

enum opTrigger vpx_method_Universal_20_Data_2F_Open_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Universal_20_Data_2F_Open_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Universal_20_Data_2F_Open_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Universal_20_Data_2F_Open_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Universal_20_Data_2F_Open_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Universal_20_Data_2F_Open_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_context_super_method(PARAMETERS,kVPXMethod_Open,2,0,TERMINAL(0),TERMINAL(1));

REPEATBEGIN
result = vpx_method_Universal_20_Data_2F_Open_case_1_local_3(PARAMETERS,TERMINAL(0));
NEXTCASEONFAILURE
REPEATFINISH

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Universal_20_Data_2F_Open_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Universal_20_Data_2F_Open_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Method record create failure!",ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_show,1,0,TERMINAL(2));

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_Universal_20_Data_2F_Open(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Universal_20_Data_2F_Open_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Universal_20_Data_2F_Open_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Universal_20_Data_2F_Close_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Universal_20_Data_2F_Close_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
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

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Destroy_20_Method,2,0,TERMINAL(3),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Universal_20_Data_2F_Close(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Record,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Project_20_Data,1,1,TERMINAL(0),ROOT(3));

result = vpx_constant(PARAMETERS,"NULL",ROOT(4));

result = vpx_method_Universal_20_Data_2F_Close_case_1_local_5(PARAMETERS,TERMINAL(3),TERMINAL(2));

result = vpx_set(PARAMETERS,kVPXValue_Record,TERMINAL(1),TERMINAL(4),ROOT(5));

result = vpx_call_context_super_method(PARAMETERS,kVPXMethod_Close,1,0,TERMINAL(5));

result = kSuccess;

FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Universal_20_Data_2F_Push_20_Lists_20_Data_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3);
enum opTrigger vpx_method_Universal_20_Data_2F_Push_20_Lists_20_Data_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3)
{
HEADER(15)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_to_2D_string,1,1,TERMINAL(2),ROOT(4));

result = vpx_constant(PARAMETERS,"\" \"",ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(0),TERMINAL(5),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(6),TERMINAL(4),ROOT(7));

result = vpx_constant(PARAMETERS,"\":\"",ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(7),TERMINAL(8),ROOT(9));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(9),TERMINAL(3),ROOT(10));

result = vpx_set(PARAMETERS,kVPXValue_Name,TERMINAL(1),TERMINAL(10),ROOT(11));

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(11),ROOT(12),ROOT(13));

result = vpx_set(PARAMETERS,kVPXValue_Name,TERMINAL(13),TERMINAL(10),ROOT(14));

result = kSuccess;

FOOTERSINGLECASE(15)
}

enum opTrigger vpx_method_Universal_20_Data_2F_Push_20_Lists_20_Data(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(10)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Name,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(1),ROOT(4),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP__28_length_29_,1,1,TERMINAL(5),ROOT(6));

result = vpx_constant(PARAMETERS,"1",ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP_make_2D_list,3,1,TERMINAL(6),TERMINAL(7),TERMINAL(7),ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP_to_2D_string,1,1,TERMINAL(6),ROOT(9));

if( (repeatLimit = vpx_multiplex(2,TERMINAL(5),TERMINAL(8))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Universal_20_Data_2F_Push_20_Lists_20_Data_case_1_local_8(PARAMETERS,TERMINAL(3),LIST(5),LIST(8),TERMINAL(9));
REPEATFINISH
} else {
}

result = kSuccess;

FOOTERSINGLECASE(10)
}

enum opTrigger vpx_method_Universal_20_Data_2F_Set_20_Name_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Universal_20_Data_2F_Set_20_Name_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Formalize_20_Data_20_Name(PARAMETERS,TERMINAL(0),TERMINAL(1),ROOT(2),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
OUTPUT(1,TERMINAL(3))
FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Universal_20_Data_2F_Set_20_Name_case_1_local_3_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Universal_20_Data_2F_Set_20_Name_case_1_local_3_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"/",ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP__22_in_22_,2,1,TERMINAL(0),TERMINAL(2),ROOT(3));

result = vpx_match(PARAMETERS,"0",TERMINAL(3));
NEXTCASEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_prefix,2,2,TERMINAL(0),TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(4),TERMINAL(1),ROOT(6));

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTER(7)
}

enum opTrigger vpx_method_Universal_20_Data_2F_Set_20_Name_case_1_local_3_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Universal_20_Data_2F_Set_20_Name_case_1_local_3_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Universal_20_Data_2F_Set_20_Name_case_1_local_3_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Universal_20_Data_2F_Set_20_Name_case_1_local_3_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Universal_20_Data_2F_Set_20_Name_case_1_local_3_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Universal_20_Data_2F_Set_20_Name_case_1_local_3_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Universal_20_Data_2F_Set_20_Name_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Universal_20_Data_2F_Set_20_Name_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Full_20_Name,1,1,TERMINAL(0),ROOT(2));

result = vpx_method_Universal_20_Data_2F_Set_20_Name_case_1_local_3_case_1_local_3(PARAMETERS,TERMINAL(2),TERMINAL(1),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP__3D_,2,0,TERMINAL(2),TERMINAL(3));
NEXTCASEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Project_20_Data,1,1,TERMINAL(0),ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(4),ROOT(5),ROOT(6));

result = vpx_constant(PARAMETERS,"method",ROOT(7));

result = vpx_constant(PARAMETERS,"NULL",ROOT(8));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Rename_20_Element,5,0,TERMINAL(6),TERMINAL(8),TERMINAL(2),TERMINAL(3),TERMINAL(7));
FAILONFAILURE

result = kSuccess;

FOOTER(9)
}

enum opTrigger vpx_method_Universal_20_Data_2F_Set_20_Name_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Universal_20_Data_2F_Set_20_Name_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Update_20_Record,1,0,TERMINAL(0));

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Universal_20_Data_2F_Set_20_Name_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Universal_20_Data_2F_Set_20_Name_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Universal_20_Data_2F_Set_20_Name_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Universal_20_Data_2F_Set_20_Name_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Universal_20_Data_2F_Set_20_Name_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Universal_20_Data_2F_Set_20_Name_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(0));
TERMINATEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Update_20_Data,1,0,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Universal_20_Data_2F_Set_20_Name_case_1_local_10_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Universal_20_Data_2F_Set_20_Name_case_1_local_10_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Inarity,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_match(PARAMETERS,"0",TERMINAL(2));
FAILONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Outarity,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_match(PARAMETERS,"0",TERMINAL(4));
FAILONFAILURE

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Universal_20_Data_2F_Set_20_Name_case_1_local_10_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Universal_20_Data_2F_Set_20_Name_case_1_local_10_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Grandparent_20_Helper,1,1,TERMINAL(0),ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(1));
FAILONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Section_20_Data,1,1,TERMINAL(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP__3D_,2,0,TERMINAL(1),TERMINAL(2));
FAILONSUCCESS

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Universal_20_Data_2F_Set_20_Name_case_1_local_10_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Universal_20_Data_2F_Set_20_Name_case_1_local_10_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Universal_20_Data_2F_Set_20_Name_case_1_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Universal_20_Data_2F_Set_20_Name_case_1_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(1));
TERMINATEONFAILURE

result = vpx_method_Universal_20_Data_2F_Set_20_Name_case_1_local_10_case_1_local_3(PARAMETERS,TERMINAL(0));
TERMINATEONFAILURE

result = vpx_method_Universal_20_Data_2F_Set_20_Name_case_1_local_10_case_1_local_4(PARAMETERS,TERMINAL(0));
TERMINATEONFAILURE

result = vpx_constant(PARAMETERS,"1",ROOT(2));

result = vpx_constant(PARAMETERS,"0",ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Arity,3,0,TERMINAL(0),TERMINAL(2),TERMINAL(3));

result = vpx_method_Universal_20_Data_2F_Set_20_Name_case_1_local_10_case_1_local_8(PARAMETERS,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Universal_20_Data_2F_Set_20_Name_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Universal_20_Data_2F_Set_20_Name_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Universal_20_Data_2F_Set_20_Name_case_1_local_2(PARAMETERS,TERMINAL(0),TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_method_Universal_20_Data_2F_Set_20_Name_case_1_local_3(PARAMETERS,TERMINAL(0),TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_set(PARAMETERS,kVPXValue_Name,TERMINAL(0),TERMINAL(2),ROOT(4));

result = vpx_constant(PARAMETERS,"Case Data",ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(0),TERMINAL(5),ROOT(6));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Editor,1,1,TERMINAL(6),ROOT(7));

result = vpx_method_Universal_20_Data_2F_Set_20_Name_case_1_local_8(PARAMETERS,TERMINAL(7));

result = vpx_method_Case_20_Data_2F_Update_20_Names(PARAMETERS,TERMINAL(4),TERMINAL(6));

result = vpx_method_Universal_20_Data_2F_Set_20_Name_case_1_local_10(PARAMETERS,TERMINAL(0),TERMINAL(3));

result = vpx_call_context_super_method(PARAMETERS,kVPXMethod_Set_20_Name,2,0,TERMINAL(0),TERMINAL(2));

result = kSuccess;

FOOTER(8)
}

enum opTrigger vpx_method_Universal_20_Data_2F_Set_20_Name_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Universal_20_Data_2F_Set_20_Name_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Duplicate_20_Data_20_Name_20_Error(PARAMETERS,TERMINAL(0),TERMINAL(1));

result = kSuccess;
FAILONSUCCESS

FOOTER(2)
}

enum opTrigger vpx_method_Universal_20_Data_2F_Set_20_Name_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Universal_20_Data_2F_Set_20_Name_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Duplicate method name!",ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_show,1,0,TERMINAL(2));
FAILONSUCCESS

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_Universal_20_Data_2F_Set_20_Name(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Universal_20_Data_2F_Set_20_Name_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
if(vpx_method_Universal_20_Data_2F_Set_20_Name_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Universal_20_Data_2F_Set_20_Name_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Universal_20_Data_2F_Execute_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Universal_20_Data_2F_Execute_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(1));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Project_20_Data,1,1,TERMINAL(0),ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Step_20_Into,1,0,TERMINAL(4));

result = kSuccess;

FOOTER(5)
}

enum opTrigger vpx_method_Universal_20_Data_2F_Execute_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Universal_20_Data_2F_Execute_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(15)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(1));
TERMINATEONFAILURE

result = vpx_constant(PARAMETERS,"Case Data",ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(0),TERMINAL(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_constant(PARAMETERS,"Operation Data",ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,1,TERMINAL(5),ROOT(7));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(7),TERMINAL(6),ROOT(8));

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(8),ROOT(9),ROOT(10));

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,1,TERMINAL(10),ROOT(11));

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(11),ROOT(12),ROOT(13));

result = vpx_constant(PARAMETERS,"TRUE",ROOT(14));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Breakpoint,2,0,TERMINAL(13),TERMINAL(14));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Update_20_Record,1,0,TERMINAL(13));

result = kSuccess;

FOOTER(15)
}

enum opTrigger vpx_method_Universal_20_Data_2F_Execute_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Universal_20_Data_2F_Execute_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Universal_20_Data_2F_Execute_case_1_local_2_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Universal_20_Data_2F_Execute_case_1_local_2_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Universal_20_Data_2F_Execute_case_1_local_13(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Universal_20_Data_2F_Execute_case_1_local_13(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(20)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"/Stack Execution",ROOT(1));

result = vpx_constant(PARAMETERS,"ThreadEntryProcPtr",ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_callback,3,1,TERMINAL(1),TERMINAL(2),TERMINAL(0),ROOT(3));

PUTPOINTER(void,**,NewThreadEntryUPP( GETPOINTER(0,void,**,ROOT(5),TERMINAL(3))),4);
result = kSuccess;

result = vpx_extconstant(PARAMETERS,kCooperativeThread,ROOT(6));

result = vpx_constant(PARAMETERS,"NULL",ROOT(7));

result = vpx_constant(PARAMETERS,"0",ROOT(8));

result = vpx_extconstant(PARAMETERS,kCreateIfNeeded,ROOT(9));

PUTINTEGER(NewThread( GETINTEGER(TERMINAL(6)),GETPOINTER(0,void,**,ROOT(11),TERMINAL(4)),GETPOINTER(0,void,*,ROOT(12),TERMINAL(7)),GETINTEGER(TERMINAL(8)),GETINTEGER(TERMINAL(9)),GETPOINTER(0,void,**,ROOT(13),TERMINAL(7)),GETPOINTER(4,unsigned long,*,ROOT(14),NONE)),10);
result = kSuccess;

result = vpx_constant(PARAMETERS,"4",ROOT(15));

result = vpx_constant(PARAMETERS,"0",ROOT(16));

result = vpx_match(PARAMETERS,"0",TERMINAL(10));
FAILONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_pointer_2D_to_2D_integer,3,3,TERMINAL(14),TERMINAL(16),TERMINAL(15),ROOT(17),ROOT(18),ROOT(19));

result = kSuccess;

OUTPUT(0,TERMINAL(19))
FOOTERSINGLECASEWITHNONE(20)
}

enum opTrigger vpx_method_Universal_20_Data_2F_Execute_case_1_local_15(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Universal_20_Data_2F_Execute_case_1_local_15(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(11)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"/Stack Termination",ROOT(2));

result = vpx_constant(PARAMETERS,"ThreadTerminationProcPtr",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_callback,3,1,TERMINAL(2),TERMINAL(3),TERMINAL(1),ROOT(4));

PUTPOINTER(void,*,NewThreadTerminationUPP( GETPOINTER(0,void,*,ROOT(6),TERMINAL(4))),5);
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(7));

PUTINTEGER(SetThreadTerminator( GETINTEGER(TERMINAL(0)),GETPOINTER(0,void,*,ROOT(9),TERMINAL(5)),GETPOINTER(0,void,*,ROOT(10),TERMINAL(7))),8);
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(11)
}

enum opTrigger vpx_method_Universal_20_Data_2F_Execute(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4)
{
HEADERWITHNONE(17)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
INPUT(4,4)
result = kSuccess;

result = vpx_method_Universal_20_Data_2F_Execute_case_1_local_2(PARAMETERS,TERMINAL(0),TERMINAL(4));

result = vpx_instantiate(PARAMETERS,kVPXClass_Execution_20_Thread,1,1,NONE,ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Project_20_Data,1,1,TERMINAL(0),ROOT(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Full_20_Name,1,1,TERMINAL(0),ROOT(7));

result = vpx_set(PARAMETERS,kVPXValue_Method,TERMINAL(5),TERMINAL(7),ROOT(8));

result = vpx_set(PARAMETERS,kVPXValue_Input_20_List,TERMINAL(8),TERMINAL(1),ROOT(9));

result = vpx_set(PARAMETERS,kVPXValue_Outarity,TERMINAL(9),TERMINAL(2),ROOT(10));

result = vpx_set(PARAMETERS,kVPXValue_Final_20_Task,TERMINAL(10),TERMINAL(3),ROOT(11));

result = vpx_set(PARAMETERS,kVPXValue_Project,TERMINAL(11),TERMINAL(6),ROOT(12));

result = vpx_method_Get_20_Current_20_Thread_20_ID(PARAMETERS,ROOT(13));

result = vpx_set(PARAMETERS,kVPXValue_Main_20_Thread,TERMINAL(12),TERMINAL(13),ROOT(14));

result = vpx_method_Universal_20_Data_2F_Execute_case_1_local_13(PARAMETERS,TERMINAL(5),ROOT(15));
FAILONFAILURE

result = vpx_set(PARAMETERS,kVPXValue_Thread,TERMINAL(14),TERMINAL(15),ROOT(16));

result = vpx_method_Universal_20_Data_2F_Execute_case_1_local_15(PARAMETERS,TERMINAL(15),TERMINAL(16));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Install_20_Thread,1,0,TERMINAL(16));

result = kSuccess;

FOOTERSINGLECASEWITHNONE(17)
}

enum opTrigger vpx_method_Universal_20_Data_2F_Buffer_20_Initialization(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(14)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"1",ROOT(3));

result = vpx_constant(PARAMETERS,"6",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP__2B2B_,2,1,TERMINAL(1),TERMINAL(4),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_integer,3,3,TERMINAL(2),TERMINAL(5),TERMINAL(3),ROOT(6),ROOT(7),ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_integer,3,3,TERMINAL(6),TERMINAL(7),TERMINAL(3),ROOT(9),ROOT(10),ROOT(11));

result = vpx_set(PARAMETERS,kVPXValue_Inarity,TERMINAL(0),TERMINAL(8),ROOT(12));

result = vpx_set(PARAMETERS,kVPXValue_Outarity,TERMINAL(12),TERMINAL(11),ROOT(13));

result = kSuccess;

FOOTERSINGLECASE(14)
}

enum opTrigger vpx_method_Universal_20_Data_2F_Get_20_Value(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Text,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Universal_20_Data_2F_C_20_Code_20_Value_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Universal_20_Data_2F_C_20_Code_20_Value_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(0));
NEXTCASEONSUCCESS

result = vpx_constant(PARAMETERS,"\"\tmethod_type_to(method,environment,\"\"\"",ROOT(1));

result = vpx_constant(PARAMETERS,"\"\"\");\n\"",ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,3,1,TERMINAL(1),TERMINAL(0),TERMINAL(2),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_Universal_20_Data_2F_C_20_Code_20_Value_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Universal_20_Data_2F_C_20_Code_20_Value_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"/* NULL TEXT VALUE */\n\"",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Universal_20_Data_2F_C_20_Code_20_Value_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Universal_20_Data_2F_C_20_Code_20_Value_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Universal_20_Data_2F_C_20_Code_20_Value_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Universal_20_Data_2F_C_20_Code_20_Value_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Universal_20_Data_2F_C_20_Code_20_Value(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Text,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_method_Universal_20_Data_2F_C_20_Code_20_Value_case_1_local_3(PARAMETERS,TERMINAL(2),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Universal_20_Data_2F_Update_20_Record(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(8)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Text,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_Record,TERMINAL(1),ROOT(3),ROOT(4));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(4));
TERMINATEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Project_20_Data,1,1,TERMINAL(3),ROOT(5));

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(5),ROOT(6),ROOT(7));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Method,3,0,TERMINAL(7),TERMINAL(4),TERMINAL(2));

result = kSuccess;

FOOTERSINGLECASE(8)
}

enum opTrigger vpx_method_Universal_20_Data_2F_Post_20_Open_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Universal_20_Data_2F_Post_20_Open_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Project_20_Data,1,1,TERMINAL(0),ROOT(1));

result = vpx_constant(PARAMETERS,"Tools",ROOT(2));

result = vpx_method_Find_20_Project_20_Info_20_List(PARAMETERS,TERMINAL(1),TERMINAL(2),ROOT(3));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Install_20_Tools,2,0,TERMINAL(3),TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Universal_20_Data_2F_Post_20_Open(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Update_20_Record,1,0,TERMINAL(0));

result = vpx_method_Universal_20_Data_2F_Post_20_Open_case_1_local_3(PARAMETERS,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Universal_20_Data_2F_Get_20_Method_20_Data(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Universal_20_Data_2F_Get_20_All_20_Breakpoints_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Universal_20_Data_2F_Get_20_All_20_Breakpoints_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Method_20_Data,1,1,TERMINAL(0),ROOT(2));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP__3D_,2,0,TERMINAL(2),TERMINAL(1));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(3)
}

enum opTrigger vpx_method_Universal_20_Data_2F_Get_20_All_20_Breakpoints_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Universal_20_Data_2F_Get_20_All_20_Breakpoints_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

OUTPUT(0,NONE)
FOOTERWITHNONE(2)
}

enum opTrigger vpx_method_Universal_20_Data_2F_Get_20_All_20_Breakpoints_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Universal_20_Data_2F_Get_20_All_20_Breakpoints_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Universal_20_Data_2F_Get_20_All_20_Breakpoints_case_1_local_6_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Universal_20_Data_2F_Get_20_All_20_Breakpoints_case_1_local_6_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Universal_20_Data_2F_Get_20_All_20_Breakpoints_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Universal_20_Data_2F_Get_20_All_20_Breakpoints_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Project_20_Data,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
NEXTCASEONSUCCESS

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Breakpoints,TERMINAL(3),ROOT(4),ROOT(5));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(5))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Universal_20_Data_2F_Get_20_All_20_Breakpoints_case_1_local_6(PARAMETERS,LIST(5),TERMINAL(0),ROOT(6));
LISTROOT(6,0)
REPEATFINISH
LISTROOTFINISH(6,0)
LISTROOTEND
} else {
ROOTEMPTY(6)
}

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTER(7)
}

enum opTrigger vpx_method_Universal_20_Data_2F_Get_20_All_20_Breakpoints_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Universal_20_Data_2F_Get_20_All_20_Breakpoints_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( )",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Universal_20_Data_2F_Get_20_All_20_Breakpoints(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Universal_20_Data_2F_Get_20_All_20_Breakpoints_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Universal_20_Data_2F_Get_20_All_20_Breakpoints_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Universal_20_Data_2F_Have_20_Row_20_Values_3F_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"TRUE",ROOT(1));

result = vpx_constant(PARAMETERS,"FALSE",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
OUTPUT(1,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Universal_20_Data_2F_Get_20_Export_20_Name(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Full_20_Name,1,1,TERMINAL(0),ROOT(1));

result = vpx_method_Mangle_20_Name(PARAMETERS,TERMINAL(1),ROOT(2));

result = vpx_constant(PARAMETERS,"vpx_method_",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(3),TERMINAL(2),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Universal_20_Data_2F_Get_20_Universal(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Universal_20_Data_2F_Set_20_Value_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Universal_20_Data_2F_Set_20_Value_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"Constructor",TERMINAL(1));
NEXTCASEONSUCCESS

result = vpx_match(PARAMETERS,"Destructor",TERMINAL(1));
NEXTCASEONSUCCESS

result = vpx_match(PARAMETERS,"Editor",TERMINAL(1));
NEXTCASEONSUCCESS

result = vpx_match(PARAMETERS,"Tool",TERMINAL(1));
NEXTCASEONSUCCESS

result = vpx_match(PARAMETERS,"MAIN",TERMINAL(1));
NEXTCASEONSUCCESS

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
NEXTCASEONSUCCESS

result = vpx_match(PARAMETERS,"\"NULL\"",TERMINAL(1));
NEXTCASEONSUCCESS

result = vpx_match(PARAMETERS,"\"\"",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_match(PARAMETERS,"INIT",TERMINAL(1));
NEXTCASEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Container,1,1,TERMINAL(0),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Send_20_Refresh,1,0,TERMINAL(2));

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_Universal_20_Data_2F_Set_20_Value_case_2_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Universal_20_Data_2F_Set_20_Value_case_2_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"\"NULL\"",TERMINAL(0));
NEXTCASEONSUCCESS

result = vpx_match(PARAMETERS,"\"\"",TERMINAL(0));
NEXTCASEONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(1)
}

enum opTrigger vpx_method_Universal_20_Data_2F_Set_20_Value_case_2_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Universal_20_Data_2F_Set_20_Value_case_2_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Universal_20_Data_2F_Set_20_Value_case_2_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Universal_20_Data_2F_Set_20_Value_case_2_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Universal_20_Data_2F_Set_20_Value_case_2_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Universal_20_Data_2F_Set_20_Value_case_2_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Universal_20_Data_2F_Set_20_Value_case_2_local_5_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Universal_20_Data_2F_Set_20_Value_case_2_local_5_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
NEXTCASEONFAILURE

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Universal_20_Data_2F_Set_20_Value_case_2_local_5_case_1_local_2_case_2_local_8_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Universal_20_Data_2F_Set_20_Value_case_2_local_5_case_1_local_2_case_2_local_8_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_Text,TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_match(PARAMETERS,"Constructor",TERMINAL(4));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"NULL",ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Value,2,0,TERMINAL(3),TERMINAL(5));

result = kSuccess;
FINISHONSUCCESS

FOOTER(6)
}

enum opTrigger vpx_method_Universal_20_Data_2F_Set_20_Value_case_2_local_5_case_1_local_2_case_2_local_8_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Universal_20_Data_2F_Set_20_Value_case_2_local_5_case_1_local_2_case_2_local_8_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_Universal_20_Data_2F_Set_20_Value_case_2_local_5_case_1_local_2_case_2_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Universal_20_Data_2F_Set_20_Value_case_2_local_5_case_1_local_2_case_2_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Universal_20_Data_2F_Set_20_Value_case_2_local_5_case_1_local_2_case_2_local_8_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Universal_20_Data_2F_Set_20_Value_case_2_local_5_case_1_local_2_case_2_local_8_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Universal_20_Data_2F_Set_20_Value_case_2_local_5_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Universal_20_Data_2F_Set_20_Value_case_2_local_5_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"Constructor",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Grandparent_20_Helper,1,1,TERMINAL(0),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(2),ROOT(3));

result = vpx_match(PARAMETERS,"Class Data",TERMINAL(3));
FAILONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Container,1,1,TERMINAL(0),ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(4),ROOT(5),ROOT(6));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(6))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Universal_20_Data_2F_Set_20_Value_case_2_local_5_case_1_local_2_case_2_local_8(PARAMETERS,LIST(6));
REPEATFINISH
} else {
}

result = vpx_constant(PARAMETERS,"1",ROOT(7));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Arity,3,0,TERMINAL(0),TERMINAL(7),TERMINAL(7));

result = kSuccess;

FOOTER(8)
}

enum opTrigger vpx_method_Universal_20_Data_2F_Set_20_Value_case_2_local_5_case_1_local_2_case_3_local_8_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Universal_20_Data_2F_Set_20_Value_case_2_local_5_case_1_local_2_case_3_local_8_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_Text,TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_match(PARAMETERS,"Destructor",TERMINAL(4));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"NULL",ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Value,2,0,TERMINAL(3),TERMINAL(5));

result = kSuccess;
FINISHONSUCCESS

FOOTER(6)
}

enum opTrigger vpx_method_Universal_20_Data_2F_Set_20_Value_case_2_local_5_case_1_local_2_case_3_local_8_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Universal_20_Data_2F_Set_20_Value_case_2_local_5_case_1_local_2_case_3_local_8_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_Universal_20_Data_2F_Set_20_Value_case_2_local_5_case_1_local_2_case_3_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Universal_20_Data_2F_Set_20_Value_case_2_local_5_case_1_local_2_case_3_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Universal_20_Data_2F_Set_20_Value_case_2_local_5_case_1_local_2_case_3_local_8_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Universal_20_Data_2F_Set_20_Value_case_2_local_5_case_1_local_2_case_3_local_8_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Universal_20_Data_2F_Set_20_Value_case_2_local_5_case_1_local_2_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Universal_20_Data_2F_Set_20_Value_case_2_local_5_case_1_local_2_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"Destructor",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Grandparent_20_Helper,1,1,TERMINAL(0),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(2),ROOT(3));

result = vpx_match(PARAMETERS,"Class Data",TERMINAL(3));
FAILONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Container,1,1,TERMINAL(0),ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(4),ROOT(5),ROOT(6));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(6))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Universal_20_Data_2F_Set_20_Value_case_2_local_5_case_1_local_2_case_3_local_8(PARAMETERS,LIST(6));
REPEATFINISH
} else {
}

result = vpx_constant(PARAMETERS,"1",ROOT(7));

result = vpx_constant(PARAMETERS,"0",ROOT(8));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Arity,3,0,TERMINAL(0),TERMINAL(7),TERMINAL(8));

result = kSuccess;

FOOTER(9)
}

enum opTrigger vpx_method_Universal_20_Data_2F_Set_20_Value_case_2_local_5_case_1_local_2_case_4_local_8_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Universal_20_Data_2F_Set_20_Value_case_2_local_5_case_1_local_2_case_4_local_8_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;
FINISHONSUCCESS

FOOTER(1)
}

enum opTrigger vpx_method_Universal_20_Data_2F_Set_20_Value_case_2_local_5_case_1_local_2_case_4_local_8_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Universal_20_Data_2F_Set_20_Value_case_2_local_5_case_1_local_2_case_4_local_8_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_Text,TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_match(PARAMETERS,"Editor",TERMINAL(4));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"NULL",ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Value,2,0,TERMINAL(3),TERMINAL(5));

result = kSuccess;
FINISHONSUCCESS

FOOTER(6)
}

enum opTrigger vpx_method_Universal_20_Data_2F_Set_20_Value_case_2_local_5_case_1_local_2_case_4_local_8_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Universal_20_Data_2F_Set_20_Value_case_2_local_5_case_1_local_2_case_4_local_8_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_Universal_20_Data_2F_Set_20_Value_case_2_local_5_case_1_local_2_case_4_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Universal_20_Data_2F_Set_20_Value_case_2_local_5_case_1_local_2_case_4_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Universal_20_Data_2F_Set_20_Value_case_2_local_5_case_1_local_2_case_4_local_8_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
if(vpx_method_Universal_20_Data_2F_Set_20_Value_case_2_local_5_case_1_local_2_case_4_local_8_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Universal_20_Data_2F_Set_20_Value_case_2_local_5_case_1_local_2_case_4_local_8_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Universal_20_Data_2F_Set_20_Value_case_2_local_5_case_1_local_2_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Universal_20_Data_2F_Set_20_Value_case_2_local_5_case_1_local_2_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"Editor",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Grandparent_20_Helper,1,1,TERMINAL(0),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(2),ROOT(3));

result = vpx_match(PARAMETERS,"Class Data",TERMINAL(3));
FAILONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Container,1,1,TERMINAL(0),ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(4),ROOT(5),ROOT(6));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(6))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Universal_20_Data_2F_Set_20_Value_case_2_local_5_case_1_local_2_case_4_local_8(PARAMETERS,LIST(6));
REPEATFINISH
} else {
}

result = vpx_constant(PARAMETERS,"2",ROOT(7));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Arity,3,0,TERMINAL(0),TERMINAL(7),TERMINAL(7));

result = kSuccess;

FOOTER(8)
}

enum opTrigger vpx_method_Universal_20_Data_2F_Set_20_Value_case_2_local_5_case_1_local_2_case_5_local_8_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Universal_20_Data_2F_Set_20_Value_case_2_local_5_case_1_local_2_case_5_local_8_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Text,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_match(PARAMETERS,"MAIN",TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"NULL",ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Value,2,0,TERMINAL(1),TERMINAL(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Container,1,1,TERMINAL(1),ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Send_20_Refresh,1,0,TERMINAL(4));

result = kSuccess;
FINISHONSUCCESS

FOOTER(5)
}

enum opTrigger vpx_method_Universal_20_Data_2F_Set_20_Value_case_2_local_5_case_1_local_2_case_5_local_8_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Universal_20_Data_2F_Set_20_Value_case_2_local_5_case_1_local_2_case_5_local_8_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_Universal_20_Data_2F_Set_20_Value_case_2_local_5_case_1_local_2_case_5_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Universal_20_Data_2F_Set_20_Value_case_2_local_5_case_1_local_2_case_5_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Universal_20_Data_2F_Set_20_Value_case_2_local_5_case_1_local_2_case_5_local_8_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Universal_20_Data_2F_Set_20_Value_case_2_local_5_case_1_local_2_case_5_local_8_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Universal_20_Data_2F_Set_20_Value_case_2_local_5_case_1_local_2_case_5(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Universal_20_Data_2F_Set_20_Value_case_2_local_5_case_1_local_2_case_5(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"MAIN",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Grandparent_20_Helper,1,1,TERMINAL(0),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(2),ROOT(3));

result = vpx_match(PARAMETERS,"Section Data",TERMINAL(3));
FAILONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Project_20_Data,1,1,TERMINAL(0),ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_All_20_Universals,1,1,TERMINAL(4),ROOT(5));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(5))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Universal_20_Data_2F_Set_20_Value_case_2_local_5_case_1_local_2_case_5_local_8(PARAMETERS,LIST(5));
REPEATFINISH
} else {
}

result = vpx_constant(PARAMETERS,"1",ROOT(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Arity,3,0,TERMINAL(0),TERMINAL(6),TERMINAL(6));

result = kSuccess;

FOOTER(7)
}

enum opTrigger vpx_method_Universal_20_Data_2F_Set_20_Value_case_2_local_5_case_1_local_2_case_6_local_8_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Universal_20_Data_2F_Set_20_Value_case_2_local_5_case_1_local_2_case_6_local_8_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Text,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_match(PARAMETERS,"INIT",TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"NULL",ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Value,2,0,TERMINAL(1),TERMINAL(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Container,1,1,TERMINAL(1),ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Send_20_Refresh,1,0,TERMINAL(4));

result = kSuccess;
FINISHONSUCCESS

FOOTER(5)
}

enum opTrigger vpx_method_Universal_20_Data_2F_Set_20_Value_case_2_local_5_case_1_local_2_case_6_local_8_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Universal_20_Data_2F_Set_20_Value_case_2_local_5_case_1_local_2_case_6_local_8_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_Universal_20_Data_2F_Set_20_Value_case_2_local_5_case_1_local_2_case_6_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Universal_20_Data_2F_Set_20_Value_case_2_local_5_case_1_local_2_case_6_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Universal_20_Data_2F_Set_20_Value_case_2_local_5_case_1_local_2_case_6_local_8_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Universal_20_Data_2F_Set_20_Value_case_2_local_5_case_1_local_2_case_6_local_8_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Universal_20_Data_2F_Set_20_Value_case_2_local_5_case_1_local_2_case_6(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Universal_20_Data_2F_Set_20_Value_case_2_local_5_case_1_local_2_case_6(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"INIT",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Grandparent_20_Helper,1,1,TERMINAL(0),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(2),ROOT(3));

result = vpx_match(PARAMETERS,"Section Data",TERMINAL(3));
FAILONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Project_20_Data,1,1,TERMINAL(0),ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_All_20_Universals,1,1,TERMINAL(4),ROOT(5));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(5))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Universal_20_Data_2F_Set_20_Value_case_2_local_5_case_1_local_2_case_6_local_8(PARAMETERS,LIST(5));
REPEATFINISH
} else {
}

result = vpx_constant(PARAMETERS,"0",ROOT(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Arity,3,0,TERMINAL(0),TERMINAL(6),TERMINAL(6));

result = kSuccess;

FOOTER(7)
}

enum opTrigger vpx_method_Universal_20_Data_2F_Set_20_Value_case_2_local_5_case_1_local_2_case_7(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Universal_20_Data_2F_Set_20_Value_case_2_local_5_case_1_local_2_case_7(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"Tool",TERMINAL(1));
FAILONFAILURE

result = vpx_constant(PARAMETERS,"0",ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Arity,3,0,TERMINAL(0),TERMINAL(2),TERMINAL(2));

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_Universal_20_Data_2F_Set_20_Value_case_2_local_5_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Universal_20_Data_2F_Set_20_Value_case_2_local_5_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Universal_20_Data_2F_Set_20_Value_case_2_local_5_case_1_local_2_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
if(vpx_method_Universal_20_Data_2F_Set_20_Value_case_2_local_5_case_1_local_2_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
if(vpx_method_Universal_20_Data_2F_Set_20_Value_case_2_local_5_case_1_local_2_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
if(vpx_method_Universal_20_Data_2F_Set_20_Value_case_2_local_5_case_1_local_2_case_4(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
if(vpx_method_Universal_20_Data_2F_Set_20_Value_case_2_local_5_case_1_local_2_case_5(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
if(vpx_method_Universal_20_Data_2F_Set_20_Value_case_2_local_5_case_1_local_2_case_6(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Universal_20_Data_2F_Set_20_Value_case_2_local_5_case_1_local_2_case_7(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Universal_20_Data_2F_Set_20_Value_case_2_local_5_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Universal_20_Data_2F_Set_20_Value_case_2_local_5_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP__3D_,2,0,TERMINAL(1),TERMINAL(2));
TERMINATEONSUCCESS

result = vpx_match(PARAMETERS,"Tool",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_method_Get_20_Application(PARAMETERS,ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Install_20_Tools,2,0,TERMINAL(3),TERMINAL(0));

result = kSuccess;

FOOTER(4)
}

enum opTrigger vpx_method_Universal_20_Data_2F_Set_20_Value_case_2_local_5_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Universal_20_Data_2F_Set_20_Value_case_2_local_5_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Project_20_Data,1,1,TERMINAL(0),ROOT(3));

result = vpx_constant(PARAMETERS,"Tools",ROOT(4));

result = vpx_method_Find_20_Project_20_Info_20_List(PARAMETERS,TERMINAL(3),TERMINAL(4),ROOT(5));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Remove_20_Tools,2,0,TERMINAL(5),TERMINAL(0));

result = kSuccess;

FOOTER(6)
}

enum opTrigger vpx_method_Universal_20_Data_2F_Set_20_Value_case_2_local_5_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Universal_20_Data_2F_Set_20_Value_case_2_local_5_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Universal_20_Data_2F_Set_20_Value_case_2_local_5_case_1_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2))
vpx_method_Universal_20_Data_2F_Set_20_Value_case_2_local_5_case_1_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2);
return outcome;
}

enum opTrigger vpx_method_Universal_20_Data_2F_Set_20_Value_case_2_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Universal_20_Data_2F_Set_20_Value_case_2_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_method_Universal_20_Data_2F_Set_20_Value_case_2_local_5_case_1_local_2(PARAMETERS,TERMINAL(0),TERMINAL(1));
TERMINATEONFAILURE

result = vpx_set(PARAMETERS,kVPXValue_Text,TERMINAL(0),TERMINAL(1),ROOT(3));

result = vpx_method_Universal_20_Data_2F_Set_20_Value_case_2_local_5_case_1_local_4(PARAMETERS,TERMINAL(3),TERMINAL(1),TERMINAL(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Update_20_Record,1,0,TERMINAL(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Make_20_Dirty,1,0,TERMINAL(3));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Universal_20_Data_2F_Set_20_Value_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Universal_20_Data_2F_Set_20_Value_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Text,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_method_Universal_20_Data_2F_Set_20_Value_case_2_local_3(PARAMETERS,TERMINAL(1),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_equals,2,0,TERMINAL(3),TERMINAL(4));
NEXTCASEONSUCCESS

result = vpx_method_Universal_20_Data_2F_Set_20_Value_case_2_local_5(PARAMETERS,TERMINAL(2),TERMINAL(4),TERMINAL(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Container,1,1,TERMINAL(2),ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Send_20_Refresh,1,0,TERMINAL(5));

result = kSuccess;

FOOTER(6)
}

enum opTrigger vpx_method_Universal_20_Data_2F_Set_20_Value_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Universal_20_Data_2F_Set_20_Value_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Universal_20_Data_2F_Set_20_Value(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Universal_20_Data_2F_Set_20_Value_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
if(vpx_method_Universal_20_Data_2F_Set_20_Value_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Universal_20_Data_2F_Set_20_Value_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Universal_20_Data_2F_Set_20_Arity_case_1_local_4_case_1_local_5_case_1_local_8_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Universal_20_Data_2F_Set_20_Arity_case_1_local_4_case_1_local_5_case_1_local_8_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP__28_length_29_,1,1,TERMINAL(1),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP__3D_,2,0,TERMINAL(3),TERMINAL(2));
NEXTCASEONFAILURE

result = kSuccess;
FAILONSUCCESS

FOOTER(4)
}

enum opTrigger vpx_method_Universal_20_Data_2F_Set_20_Arity_case_1_local_4_case_1_local_5_case_1_local_8_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Universal_20_Data_2F_Set_20_Arity_case_1_local_4_case_1_local_5_case_1_local_8_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"1",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP__28_length_29_,1,1,TERMINAL(1),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP__2B_1,1,1,TERMINAL(4),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP__3C_,2,0,TERMINAL(4),TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP__2D2D_,2,1,TERMINAL(2),TERMINAL(4),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP_make_2D_list,3,1,TERMINAL(6),TERMINAL(5),TERMINAL(3),ROOT(7));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(7))) ){
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Insert_20_Root,2,0,TERMINAL(0),LIST(7));
REPEATFINISH
} else {
}

result = kSuccess;

FOOTER(8)
}

enum opTrigger vpx_method_Universal_20_Data_2F_Set_20_Arity_case_1_local_4_case_1_local_5_case_1_local_8_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Universal_20_Data_2F_Set_20_Arity_case_1_local_4_case_1_local_5_case_1_local_8_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_split_2D_nth,2,2,TERMINAL(1),TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_reverse,1,1,TERMINAL(4),ROOT(5));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(5))) ){
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Remove_20_Just_20_Self,1,0,LIST(5));
REPEATFINISH
} else {
}

result = kSuccess;

FOOTER(6)
}

enum opTrigger vpx_method_Universal_20_Data_2F_Set_20_Arity_case_1_local_4_case_1_local_5_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Universal_20_Data_2F_Set_20_Arity_case_1_local_4_case_1_local_5_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Universal_20_Data_2F_Set_20_Arity_case_1_local_4_case_1_local_5_case_1_local_8_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2))
if(vpx_method_Universal_20_Data_2F_Set_20_Arity_case_1_local_4_case_1_local_5_case_1_local_8_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2))
vpx_method_Universal_20_Data_2F_Set_20_Arity_case_1_local_4_case_1_local_5_case_1_local_8_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2);
return outcome;
}

enum opTrigger vpx_method_Universal_20_Data_2F_Set_20_Arity_case_1_local_4_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Universal_20_Data_2F_Set_20_Arity_case_1_local_4_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(12)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Operation Data",ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(0),TERMINAL(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_detach_2D_l,1,2,TERMINAL(5),ROOT(6),ROOT(7));

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(6),ROOT(8),ROOT(9));

result = vpx_get(PARAMETERS,kVPXValue_Outputs,TERMINAL(9),ROOT(10),ROOT(11));

result = vpx_method_Universal_20_Data_2F_Set_20_Arity_case_1_local_4_case_1_local_5_case_1_local_8(PARAMETERS,TERMINAL(10),TERMINAL(11),TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Use_20_Best_20_Controls,1,0,TERMINAL(9));

result = kSuccess;

FOOTER(12)
}

enum opTrigger vpx_method_Universal_20_Data_2F_Set_20_Arity_case_1_local_4_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Universal_20_Data_2F_Set_20_Arity_case_1_local_4_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Universal_20_Data_2F_Set_20_Arity_case_1_local_4_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Universal_20_Data_2F_Set_20_Arity_case_1_local_4_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Universal_20_Data_2F_Set_20_Arity_case_1_local_4_case_1_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Universal_20_Data_2F_Set_20_Arity_case_1_local_4_case_1_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Universal_20_Data_2F_Set_20_Arity_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Universal_20_Data_2F_Set_20_Arity_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Case Data",ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(0),TERMINAL(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(3),ROOT(4),ROOT(5));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(5))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Universal_20_Data_2F_Set_20_Arity_case_1_local_4_case_1_local_5(PARAMETERS,LIST(5),TERMINAL(1));
REPEATFINISH
} else {
}

result = kSuccess;

FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Universal_20_Data_2F_Set_20_Arity_case_1_local_5_case_1_local_5_case_1_local_8_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Universal_20_Data_2F_Set_20_Arity_case_1_local_5_case_1_local_5_case_1_local_8_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP__28_length_29_,1,1,TERMINAL(1),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP__3D_,2,0,TERMINAL(3),TERMINAL(2));
NEXTCASEONFAILURE

result = kSuccess;
FAILONSUCCESS

FOOTER(4)
}

enum opTrigger vpx_method_Universal_20_Data_2F_Set_20_Arity_case_1_local_5_case_1_local_5_case_1_local_8_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Universal_20_Data_2F_Set_20_Arity_case_1_local_5_case_1_local_5_case_1_local_8_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"1",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP__28_length_29_,1,1,TERMINAL(1),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP__2B_1,1,1,TERMINAL(4),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP__3C_,2,0,TERMINAL(4),TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP__2D2D_,2,1,TERMINAL(2),TERMINAL(4),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP_make_2D_list,3,1,TERMINAL(6),TERMINAL(5),TERMINAL(3),ROOT(7));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(7))) ){
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Insert_20_Terminal,2,0,TERMINAL(0),LIST(7));
REPEATFINISH
} else {
}

result = kSuccess;

FOOTER(8)
}

enum opTrigger vpx_method_Universal_20_Data_2F_Set_20_Arity_case_1_local_5_case_1_local_5_case_1_local_8_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Universal_20_Data_2F_Set_20_Arity_case_1_local_5_case_1_local_5_case_1_local_8_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_split_2D_nth,2,2,TERMINAL(1),TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_reverse,1,1,TERMINAL(4),ROOT(5));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(5))) ){
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Remove_20_Just_20_Self,1,0,LIST(5));
REPEATFINISH
} else {
}

result = kSuccess;

FOOTER(6)
}

enum opTrigger vpx_method_Universal_20_Data_2F_Set_20_Arity_case_1_local_5_case_1_local_5_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Universal_20_Data_2F_Set_20_Arity_case_1_local_5_case_1_local_5_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Universal_20_Data_2F_Set_20_Arity_case_1_local_5_case_1_local_5_case_1_local_8_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2))
if(vpx_method_Universal_20_Data_2F_Set_20_Arity_case_1_local_5_case_1_local_5_case_1_local_8_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2))
vpx_method_Universal_20_Data_2F_Set_20_Arity_case_1_local_5_case_1_local_5_case_1_local_8_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2);
return outcome;
}

enum opTrigger vpx_method_Universal_20_Data_2F_Set_20_Arity_case_1_local_5_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Universal_20_Data_2F_Set_20_Arity_case_1_local_5_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(12)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Operation Data",ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(0),TERMINAL(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_detach_2D_r,1,2,TERMINAL(5),ROOT(6),ROOT(7));

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(7),ROOT(8),ROOT(9));

result = vpx_get(PARAMETERS,kVPXValue_Inputs,TERMINAL(9),ROOT(10),ROOT(11));

result = vpx_method_Universal_20_Data_2F_Set_20_Arity_case_1_local_5_case_1_local_5_case_1_local_8(PARAMETERS,TERMINAL(10),TERMINAL(11),TERMINAL(1));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Use_20_Best_20_Controls,1,0,TERMINAL(9));

result = kSuccess;

FOOTERSINGLECASE(12)
}

enum opTrigger vpx_method_Universal_20_Data_2F_Set_20_Arity_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Universal_20_Data_2F_Set_20_Arity_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Case Data",ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(0),TERMINAL(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(3),ROOT(4),ROOT(5));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(5))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Universal_20_Data_2F_Set_20_Arity_case_1_local_5_case_1_local_5(PARAMETERS,LIST(5),TERMINAL(1));
REPEATFINISH
} else {
}

result = kSuccess;

FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Universal_20_Data_2F_Set_20_Arity(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Inarity,TERMINAL(0),TERMINAL(1),ROOT(3));

result = vpx_set(PARAMETERS,kVPXValue_Outarity,TERMINAL(3),TERMINAL(2),ROOT(4));

result = vpx_method_Universal_20_Data_2F_Set_20_Arity_case_1_local_4(PARAMETERS,TERMINAL(4),TERMINAL(1));

result = vpx_method_Universal_20_Data_2F_Set_20_Arity_case_1_local_5(PARAMETERS,TERMINAL(4),TERMINAL(2));

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Universal_20_Data_2F_Can_20_Fail_3F__case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Universal_20_Data_2F_Can_20_Fail_3F__case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Can_20_Fail_3F_,1,1,TERMINAL(2),ROOT(3));

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(3));
NEXTCASEONFAILURE

result = kSuccess;
FINISHONSUCCESS

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_Universal_20_Data_2F_Can_20_Fail_3F__case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Universal_20_Data_2F_Can_20_Fail_3F__case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"FALSE",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Universal_20_Data_2F_Can_20_Fail_3F__case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Universal_20_Data_2F_Can_20_Fail_3F__case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Universal_20_Data_2F_Can_20_Fail_3F__case_1_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Universal_20_Data_2F_Can_20_Fail_3F__case_1_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Universal_20_Data_2F_Can_20_Fail_3F__case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Universal_20_Data_2F_Can_20_Fail_3F__case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Case Data",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(2),ROOT(3),ROOT(4));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(4))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Universal_20_Data_2F_Can_20_Fail_3F__case_1_local_5(PARAMETERS,LIST(4),ROOT(5));
REPEATFINISH
} else {
ROOTNULL(5,NULL)
}

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTER(6)
}

enum opTrigger vpx_method_Universal_20_Data_2F_Can_20_Fail_3F__case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Universal_20_Data_2F_Can_20_Fail_3F__case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"FALSE",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Universal_20_Data_2F_Can_20_Fail_3F_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Universal_20_Data_2F_Can_20_Fail_3F__case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Universal_20_Data_2F_Can_20_Fail_3F__case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Universal_20_Data_2F_Set_20_CPX_20_Text_case_1_local_2_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Universal_20_Data_2F_Set_20_CPX_20_Text_case_1_local_2_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"/",ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP__22_in_22_,2,1,TERMINAL(0),TERMINAL(2),ROOT(3));

result = vpx_match(PARAMETERS,"0",TERMINAL(3));
NEXTCASEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_prefix,2,2,TERMINAL(0),TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(4),TERMINAL(1),ROOT(6));

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTER(7)
}

enum opTrigger vpx_method_Universal_20_Data_2F_Set_20_CPX_20_Text_case_1_local_2_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Universal_20_Data_2F_Set_20_CPX_20_Text_case_1_local_2_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Universal_20_Data_2F_Set_20_CPX_20_Text_case_1_local_2_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Universal_20_Data_2F_Set_20_CPX_20_Text_case_1_local_2_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Universal_20_Data_2F_Set_20_CPX_20_Text_case_1_local_2_case_1_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Universal_20_Data_2F_Set_20_CPX_20_Text_case_1_local_2_case_1_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Universal_20_Data_2F_Set_20_CPX_20_Text_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Universal_20_Data_2F_Set_20_CPX_20_Text_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Project_20_Data,1,1,TERMINAL(0),ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Full_20_Name,1,1,TERMINAL(0),ROOT(5));

result = vpx_method_Universal_20_Data_2F_Set_20_CPX_20_Text_case_1_local_2_case_1_local_5(PARAMETERS,TERMINAL(5),TERMINAL(1),ROOT(6));

result = vpx_constant(PARAMETERS,"method",ROOT(7));

result = vpx_constant(PARAMETERS,"NULL",ROOT(8));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Rename_20_Element,5,0,TERMINAL(4),TERMINAL(8),TERMINAL(5),TERMINAL(6),TERMINAL(7));
NEXTCASEONFAILURE

result = kSuccess;
FINISHONSUCCESS

OUTPUT(0,TERMINAL(1))
FOOTER(9)
}

enum opTrigger vpx_method_Universal_20_Data_2F_Set_20_CPX_20_Text_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Universal_20_Data_2F_Set_20_CPX_20_Text_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Unique_20_Name_20_For_20_String(PARAMETERS,TERMINAL(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Universal_20_Data_2F_Set_20_CPX_20_Text_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Universal_20_Data_2F_Set_20_CPX_20_Text_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Universal_20_Data_2F_Set_20_CPX_20_Text_case_1_local_2_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Universal_20_Data_2F_Set_20_CPX_20_Text_case_1_local_2_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Universal_20_Data_2F_Set_20_CPX_20_Text_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Universal_20_Data_2F_Set_20_CPX_20_Text_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(0));
TERMINATEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Update_20_Data,1,0,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Universal_20_Data_2F_Set_20_CPX_20_Text_case_1_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Universal_20_Data_2F_Set_20_CPX_20_Text_case_1_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(0));
TERMINATEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Refresh_20_Data,1,0,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Universal_20_Data_2F_Set_20_CPX_20_Text_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Universal_20_Data_2F_Set_20_CPX_20_Text_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

REPEATBEGIN
LOOPTERMINALBEGIN(1)
LOOPTERMINAL(0,1,2)
result = vpx_method_Universal_20_Data_2F_Set_20_CPX_20_Text_case_1_local_2(PARAMETERS,TERMINAL(0),LOOP(0),ROOT(2));
REPEATFINISH

result = vpx_call_context_super_method(PARAMETERS,kVPXMethod_Set_20_Name,2,0,TERMINAL(0),TERMINAL(2));

result = vpx_constant(PARAMETERS,"Case Data",ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(0),TERMINAL(3),ROOT(4));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Editor,1,1,TERMINAL(4),ROOT(5));

result = vpx_method_Universal_20_Data_2F_Set_20_CPX_20_Text_case_1_local_7(PARAMETERS,TERMINAL(5));

result = vpx_method_Case_20_Data_2F_Update_20_Names(PARAMETERS,TERMINAL(0),TERMINAL(4));

result = vpx_method_Universal_20_Data_2F_Set_20_CPX_20_Text_case_1_local_9(PARAMETERS,TERMINAL(5));

result = kSuccess;

FOOTER(6)
}

enum opTrigger vpx_method_Universal_20_Data_2F_Set_20_CPX_20_Text_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Universal_20_Data_2F_Set_20_CPX_20_Text_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Duplicate method name!",ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_show,1,0,TERMINAL(2));
FAILONSUCCESS

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_Universal_20_Data_2F_Set_20_CPX_20_Text(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Universal_20_Data_2F_Set_20_CPX_20_Text_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Universal_20_Data_2F_Set_20_CPX_20_Text_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Universal_20_Data_2F_Parse_20_CPX_20_Buffer_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2);
enum opTrigger vpx_method_Universal_20_Data_2F_Parse_20_CPX_20_Buffer_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2)
{
HEADER(15)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_constant(PARAMETERS,"4",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_text,3,3,TERMINAL(3),TERMINAL(2),TERMINAL(4),ROOT(5),ROOT(6),ROOT(7));

result = vpx_match(PARAMETERS,"nind",TERMINAL(7));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"2",ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_integer,3,3,TERMINAL(5),TERMINAL(6),TERMINAL(8),ROOT(9),ROOT(10),ROOT(11));

result = vpx_constant(PARAMETERS,"/Set CPX Text",ROOT(12));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,3,1,TERMINAL(0),TERMINAL(11),TERMINAL(12),ROOT(13));

result = vpx_call_primitive(PARAMETERS,VPLP_attach_2D_r,2,1,TERMINAL(1),TERMINAL(13),ROOT(14));

result = kSuccess;

OUTPUT(0,TERMINAL(0))
OUTPUT(1,TERMINAL(14))
OUTPUT(2,TERMINAL(10))
FOOTER(15)
}

enum opTrigger vpx_method_Universal_20_Data_2F_Parse_20_CPX_20_Buffer_case_2_local_13(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Universal_20_Data_2F_Parse_20_CPX_20_Buffer_case_2_local_13(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADERWITHNONE(7)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_List_20_Data,1,1,NONE,ROOT(2));

result = vpx_constant(PARAMETERS,"Operation Data",ROOT(3));

result = vpx_set(PARAMETERS,kVPXValue_Helper_20_Name,TERMINAL(2),TERMINAL(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,1,1,TERMINAL(4),ROOT(5));

result = vpx_set(PARAMETERS,kVPXValue_Lists,TERMINAL(1),TERMINAL(5),ROOT(6));

result = kSuccess;

FOOTERSINGLECASEWITHNONE(7)
}

enum opTrigger vpx_method_Universal_20_Data_2F_Parse_20_CPX_20_Buffer_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2);
enum opTrigger vpx_method_Universal_20_Data_2F_Parse_20_CPX_20_Buffer_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2)
{
HEADERWITHNONE(15)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_constant(PARAMETERS,"4",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_text,3,3,TERMINAL(3),TERMINAL(2),TERMINAL(4),ROOT(5),ROOT(6),ROOT(7));

result = vpx_match(PARAMETERS,"case",TERMINAL(7));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_attach_2D_l,2,1,TERMINAL(0),TERMINAL(1),ROOT(8));

result = vpx_instantiate(PARAMETERS,kVPXClass_Case_20_Data,1,1,NONE,ROOT(9));

result = vpx_instantiate(PARAMETERS,kVPXClass_Item_20_Data,1,1,NONE,ROOT(10));

result = vpx_constant(PARAMETERS,"Case Data",ROOT(11));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(0),TERMINAL(11),ROOT(12));

result = vpx_set(PARAMETERS,kVPXValue_Parent,TERMINAL(10),TERMINAL(12),ROOT(13));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Install_20_Helper,2,0,TERMINAL(13),TERMINAL(9));

result = vpx_set(PARAMETERS,kVPXValue_Owner,TERMINAL(9),TERMINAL(13),ROOT(14));

result = vpx_method_Universal_20_Data_2F_Parse_20_CPX_20_Buffer_case_2_local_13(PARAMETERS,TERMINAL(14),TERMINAL(13));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Add_20_To_20_List_20_Data,2,0,TERMINAL(14),TERMINAL(12));

result = kSuccess;

OUTPUT(0,TERMINAL(14))
OUTPUT(1,TERMINAL(8))
OUTPUT(2,TERMINAL(6))
FOOTERWITHNONE(15)
}

enum opTrigger vpx_method_Universal_20_Data_2F_Parse_20_CPX_20_Buffer_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2);
enum opTrigger vpx_method_Universal_20_Data_2F_Parse_20_CPX_20_Buffer_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2)
{
HEADER(10)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_constant(PARAMETERS,"8",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_text,3,3,TERMINAL(3),TERMINAL(2),TERMINAL(4),ROOT(5),ROOT(6),ROOT(7));

result = vpx_match(PARAMETERS,"end meth",TERMINAL(7));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_detach_2D_l,1,2,TERMINAL(1),ROOT(8),ROOT(9));

result = kSuccess;

OUTPUT(0,TERMINAL(8))
OUTPUT(1,TERMINAL(9))
OUTPUT(2,TERMINAL(6))
FOOTER(10)
}

enum opTrigger vpx_method_Universal_20_Data_2F_Parse_20_CPX_20_Buffer_case_4_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Universal_20_Data_2F_Parse_20_CPX_20_Buffer_case_4_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
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

enum opTrigger vpx_method_Universal_20_Data_2F_Parse_20_CPX_20_Buffer_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2);
enum opTrigger vpx_method_Universal_20_Data_2F_Parse_20_CPX_20_Buffer_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2)
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
result = vpx_method_Universal_20_Data_2F_Parse_20_CPX_20_Buffer_case_4_local_8(PARAMETERS,TERMINAL(5),LOOP(0),TERMINAL(8),ROOT(11));
REPEATFINISH

result = kSuccess;

OUTPUT(0,TERMINAL(0))
OUTPUT(1,TERMINAL(1))
OUTPUT(2,TERMINAL(11))
FOOTER(12)
}

enum opTrigger vpx_method_Universal_20_Data_2F_Parse_20_CPX_20_Buffer_case_5(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2);
enum opTrigger vpx_method_Universal_20_Data_2F_Parse_20_CPX_20_Buffer_case_5(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2)
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

enum opTrigger vpx_method_Universal_20_Data_2F_Parse_20_CPX_20_Buffer(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Universal_20_Data_2F_Parse_20_CPX_20_Buffer_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0,root1,root2))
if(vpx_method_Universal_20_Data_2F_Parse_20_CPX_20_Buffer_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0,root1,root2))
if(vpx_method_Universal_20_Data_2F_Parse_20_CPX_20_Buffer_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0,root1,root2))
if(vpx_method_Universal_20_Data_2F_Parse_20_CPX_20_Buffer_case_4(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0,root1,root2))
vpx_method_Universal_20_Data_2F_Parse_20_CPX_20_Buffer_case_5(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0,root1,root2);
return outcome;
}

enum opTrigger vpx_method_Universal_20_Data_2F_Remove_20_Self_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Universal_20_Data_2F_Remove_20_Self_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Text,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_match(PARAMETERS,"Tool",TERMINAL(2));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Project_20_Data,1,1,TERMINAL(0),ROOT(3));

result = vpx_constant(PARAMETERS,"Tools",ROOT(4));

result = vpx_method_Find_20_Project_20_Info_20_List(PARAMETERS,TERMINAL(3),TERMINAL(4),ROOT(5));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Remove_20_Tools,2,0,TERMINAL(5),TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Universal_20_Data_2F_Remove_20_Self(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Universal_20_Data_2F_Remove_20_Self_case_1_local_2(PARAMETERS,TERMINAL(0));

result = vpx_call_context_super_method(PARAMETERS,kVPXMethod_Remove_20_Self,1,0,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(1)
}

/* Stop Universals */






Nat4	loadClasses_MyUniversalData(V_Environment environment);
Nat4	loadClasses_MyUniversalData(V_Environment environment)
{
	V_Class result = NULL;

	result = class_new("Universal Data",environment);
	if(result == NULL) return kERROR;
	VPLC_Universal_20_Data_class_load(result,environment);
	return kNOERROR;

}

Nat4	loadUniversals_MyUniversalData(V_Environment environment);
Nat4	loadUniversals_MyUniversalData(V_Environment environment)
{
	V_Method result = NULL;

	result = method_new("Universal Data/C Code Export Cases",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Universal_20_Data_2F_C_20_Code_20_Export_20_Cases,NULL);

	result = method_new("Universal Data/C Code Footer",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Universal_20_Data_2F_C_20_Code_20_Footer,NULL);

	result = method_new("Universal Data/C Code Header",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Universal_20_Data_2F_C_20_Code_20_Header,NULL);

	result = method_new("Universal Data/Create Roots",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Universal_20_Data_2F_Create_20_Roots,NULL);

	result = method_new("Universal Data/Create Terminals",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Universal_20_Data_2F_Create_20_Terminals,NULL);

	result = method_new("Universal Data/Export Text",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Universal_20_Data_2F_Export_20_Text,NULL);

	result = method_new("Universal Data/Full Name",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Universal_20_Data_2F_Full_20_Name,NULL);

	result = method_new("Universal Data/Get Inarity",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Universal_20_Data_2F_Get_20_Inarity,NULL);

	result = method_new("Universal Data/Get Outarity",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Universal_20_Data_2F_Get_20_Outarity,NULL);

	result = method_new("Universal Data/Get Project Data",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Universal_20_Data_2F_Get_20_Project_20_Data,NULL);

	result = method_new("Universal Data/Initialize Item Data",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Universal_20_Data_2F_Initialize_20_Item_20_Data,NULL);

	result = method_new("Universal Data/Install Names",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Universal_20_Data_2F_Install_20_Names,NULL);

	result = method_new("Universal Data/Open",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Universal_20_Data_2F_Open,NULL);

	result = method_new("Universal Data/Close",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Universal_20_Data_2F_Close,NULL);

	result = method_new("Universal Data/Push Lists Data",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Universal_20_Data_2F_Push_20_Lists_20_Data,NULL);

	result = method_new("Universal Data/Set Name",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Universal_20_Data_2F_Set_20_Name,NULL);

	result = method_new("Universal Data/Execute",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Universal_20_Data_2F_Execute,NULL);

	result = method_new("Universal Data/Buffer Initialization",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Universal_20_Data_2F_Buffer_20_Initialization,NULL);

	result = method_new("Universal Data/Get Value",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Universal_20_Data_2F_Get_20_Value,NULL);

	result = method_new("Universal Data/C Code Value",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Universal_20_Data_2F_C_20_Code_20_Value,NULL);

	result = method_new("Universal Data/Update Record",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Universal_20_Data_2F_Update_20_Record,NULL);

	result = method_new("Universal Data/Post Open",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Universal_20_Data_2F_Post_20_Open,NULL);

	result = method_new("Universal Data/Get Method Data",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Universal_20_Data_2F_Get_20_Method_20_Data,NULL);

	result = method_new("Universal Data/Get All Breakpoints",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Universal_20_Data_2F_Get_20_All_20_Breakpoints,NULL);

	result = method_new("Universal Data/Have Row Values?",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Universal_20_Data_2F_Have_20_Row_20_Values_3F_,NULL);

	result = method_new("Universal Data/Get Export Name",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Universal_20_Data_2F_Get_20_Export_20_Name,NULL);

	result = method_new("Universal Data/Get Universal",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Universal_20_Data_2F_Get_20_Universal,NULL);

	result = method_new("Universal Data/Set Value",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Universal_20_Data_2F_Set_20_Value,NULL);

	result = method_new("Universal Data/Set Arity",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Universal_20_Data_2F_Set_20_Arity,NULL);

	result = method_new("Universal Data/Can Fail?",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Universal_20_Data_2F_Can_20_Fail_3F_,NULL);

	result = method_new("Universal Data/Set CPX Text",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Universal_20_Data_2F_Set_20_CPX_20_Text,NULL);

	result = method_new("Universal Data/Parse CPX Buffer",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Universal_20_Data_2F_Parse_20_CPX_20_Buffer,NULL);

	result = method_new("Universal Data/Remove Self",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Universal_20_Data_2F_Remove_20_Self,NULL);

	return kNOERROR;

}



Nat4	loadPersistents_MyUniversalData(V_Environment environment);
Nat4	loadPersistents_MyUniversalData(V_Environment environment)
{
	V_Value tempPersistent = NULL;
	V_Dictionary dictionary = environment->persistentsTable;

	return kNOERROR;

}

Nat4	load_MyUniversalData(V_Environment environment);
Nat4	load_MyUniversalData(V_Environment environment)
{

	loadClasses_MyUniversalData(environment);
	loadUniversals_MyUniversalData(environment);
	loadPersistents_MyUniversalData(environment);
	return kNOERROR;

}

