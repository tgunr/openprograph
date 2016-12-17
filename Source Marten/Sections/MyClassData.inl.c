/* A VPL Section File */
/*

MyClassData.inl.c
Copyright: 2004 Andescotia LLC

*/

#include "MartenInlineProject.h"




	Nat4 tempAttribute_Attribute_20_Data_2F_Name[] = {
0000000000, 0X00000028, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X00000008, 0X556E7469, 0X746C6564, 0000000000
	};
	Nat4 tempAttribute_Attribute_20_Data_2F_Inherited[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Class_20_Data_2F_Name[] = {
0000000000, 0X0000002C, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X0000000E, 0X556E7469, 0X746C6564, 0X20436C61,
0X73730000
	};
	Nat4 tempAttribute_Class_20_Data_2F_Sub_20_Classes[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Class_20_Data_2F_Constructor[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Class_20_Data_2F_Instances[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_Class_20_Attribute_20_Data_2F_Name[] = {
0000000000, 0X00000028, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X00000008, 0X556E7469, 0X746C6564, 0000000000
	};
	Nat4 tempAttribute_Class_20_Attribute_20_Data_2F_Inherited[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};


Nat4 VPLC_Attribute_20_Data_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Attribute_20_Data_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 213 354 }{ 200 300 } */
	tempAttribute = attribute_add("Owner",tempClass,NULL,environment);
	tempAttribute = attribute_add("Name",tempClass,tempAttribute_Attribute_20_Data_2F_Name,environment);
	tempAttribute = attribute_add("Value",tempClass,NULL,environment);
	tempAttribute = attribute_add("Inherited",tempClass,tempAttribute_Attribute_20_Data_2F_Inherited,environment);
	tempAttribute = attribute_add("Record",tempClass,NULL,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"Helper Data");
	return kNOERROR;
}

/* Start Universals: { 222 425 }{ 573 409 } */
enum opTrigger vpx_method_Attribute_20_Data_2F_Add_20_To_20_List_20_Data_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Attribute_20_Data_2F_Add_20_To_20_List_20_Data_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Name,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Test_20_Attribute_20_Name,2,0,TERMINAL(1),TERMINAL(3));
NEXTCASEONFAILURE

result = kSuccess;
FINISHONSUCCESS

FOOTER(4)
}

enum opTrigger vpx_method_Attribute_20_Data_2F_Add_20_To_20_List_20_Data_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Attribute_20_Data_2F_Add_20_To_20_List_20_Data_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Name,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_method_Unique_20_Name_20_For_20_String(PARAMETERS,TERMINAL(3),ROOT(4));

result = vpx_set(PARAMETERS,kVPXValue_Name,TERMINAL(2),TERMINAL(4),ROOT(5));

result = vpx_get(PARAMETERS,kVPXValue_Owner,TERMINAL(5),ROOT(6),ROOT(7));

result = vpx_set(PARAMETERS,kVPXValue_Name,TERMINAL(7),TERMINAL(4),ROOT(8));

result = kSuccess;

FOOTER(9)
}

enum opTrigger vpx_method_Attribute_20_Data_2F_Add_20_To_20_List_20_Data_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Attribute_20_Data_2F_Add_20_To_20_List_20_Data_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Attribute_20_Data_2F_Add_20_To_20_List_20_Data_case_1_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Attribute_20_Data_2F_Add_20_To_20_List_20_Data_case_1_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Attribute_20_Data_2F_Add_20_To_20_List_20_Data(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(12)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(3),ROOT(4),ROOT(5));

REPEATBEGIN
result = vpx_method_Attribute_20_Data_2F_Add_20_To_20_List_20_Data_case_1_local_4(PARAMETERS,TERMINAL(0),TERMINAL(5));
REPEATFINISH

result = vpx_call_context_super_method(PARAMETERS,kVPXMethod_Add_20_To_20_List_20_Data,2,0,TERMINAL(0),TERMINAL(1));

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(1),ROOT(6),ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP__28_length_29_,1,1,TERMINAL(7),ROOT(8));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Grandparent_20_Helper,1,1,TERMINAL(0),ROOT(9));

result = vpx_get(PARAMETERS,kVPXValue_Sub_20_Classes,TERMINAL(9),ROOT(10),ROOT(11));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(11))) ){
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Insert_20_Attribute,3,0,LIST(11),TERMINAL(0),TERMINAL(8));
REPEATFINISH
} else {
}

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Update_20_Editors,1,0,TERMINAL(10));

result = kSuccess;

FOOTERSINGLECASE(12)
}

enum opTrigger vpx_method_Attribute_20_Data_2F_Export_20_Text_case_1_local_8_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Attribute_20_Data_2F_Export_20_Text_case_1_local_8_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"\"NULL\"",ROOT(2));

result = vpx_constant(PARAMETERS,"\"\"\",tempClass,\"",ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
OUTPUT(1,TERMINAL(2))
FOOTER(4)
}

enum opTrigger vpx_method_Attribute_20_Data_2F_Export_20_Text_case_1_local_8_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Attribute_20_Data_2F_Export_20_Text_case_1_local_8_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Mangle_20_Name(PARAMETERS,TERMINAL(0),ROOT(2));

result = vpx_constant(PARAMETERS,"\"\"\",tempClass,tempAttribute_\"",ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
OUTPUT(1,TERMINAL(2))
FOOTER(4)
}

enum opTrigger vpx_method_Attribute_20_Data_2F_Export_20_Text_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Attribute_20_Data_2F_Export_20_Text_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Attribute_20_Data_2F_Export_20_Text_case_1_local_8_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1))
vpx_method_Attribute_20_Data_2F_Export_20_Text_case_1_local_8_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1);
return outcome;
}

enum opTrigger vpx_method_Attribute_20_Data_2F_Export_20_Text(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(11)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"\ttempAttribute = attribute_add(\"\"\"",ROOT(1));

result = vpx_get(PARAMETERS,kVPXValue_Name,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_method_Escape_20_Text(PARAMETERS,TERMINAL(3),ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Full_20_Name,1,1,TERMINAL(0),ROOT(5));

result = vpx_constant(PARAMETERS,"\",environment);\n\"",ROOT(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Direct_20_Value,1,1,TERMINAL(0),ROOT(7));

result = vpx_method_Attribute_20_Data_2F_Export_20_Text_case_1_local_8(PARAMETERS,TERMINAL(5),TERMINAL(7),ROOT(8),ROOT(9));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,5,1,TERMINAL(1),TERMINAL(4),TERMINAL(8),TERMINAL(9),TERMINAL(6),ROOT(10));

result = kSuccess;

OUTPUT(0,TERMINAL(10))
FOOTERSINGLECASE(11)
}

enum opTrigger vpx_method_Attribute_20_Data_2F_Remove_20_Self_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Attribute_20_Data_2F_Remove_20_Self_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(18)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Inherited,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_match(PARAMETERS,"FALSE",TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Owner,TERMINAL(1),ROOT(3),ROOT(4));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(4));
NEXTCASEONSUCCESS

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(4),ROOT(5),ROOT(6));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(6));
NEXTCASEONSUCCESS

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(6),ROOT(7),ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP__28_in_29_,2,1,TERMINAL(8),TERMINAL(5),ROOT(9));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Grandparent_20_Helper,1,1,TERMINAL(3),ROOT(10));

result = vpx_get(PARAMETERS,kVPXValue_Sub_20_Classes,TERMINAL(10),ROOT(11),ROOT(12));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(12))) ){
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Delete_20_Nth_20_Attribute,2,0,LIST(12),TERMINAL(9));
REPEATFINISH
} else {
}

result = vpx_call_primitive(PARAMETERS,VPLP_detach_2D_nth,2,2,TERMINAL(8),TERMINAL(9),ROOT(13),ROOT(14));

result = vpx_set(PARAMETERS,kVPXValue_List,TERMINAL(7),TERMINAL(13),ROOT(15));

result = vpx_method_Attribute_20_Data_2F_Order_20_Records(PARAMETERS,TERMINAL(15),TERMINAL(13));

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(14),ROOT(16),ROOT(17));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Dispose_20_Record,1,0,TERMINAL(17));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Close,1,0,TERMINAL(16));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Update_20_Editors,1,0,TERMINAL(11));

result = kSuccess;

FOOTER(18)
}

enum opTrigger vpx_method_Attribute_20_Data_2F_Remove_20_Self_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Attribute_20_Data_2F_Remove_20_Self_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_Attribute_20_Data_2F_Remove_20_Self(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Attribute_20_Data_2F_Remove_20_Self_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Attribute_20_Data_2F_Remove_20_Self_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Attribute_20_Data_2F_Set_20_Name_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Attribute_20_Data_2F_Set_20_Name_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Name,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_equals,2,0,TERMINAL(3),TERMINAL(1));
NEXTCASEONFAILURE

result = kSuccess;

FOOTER(4)
}

enum opTrigger vpx_method_Attribute_20_Data_2F_Set_20_Name_case_2_local_5_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Attribute_20_Data_2F_Set_20_Name_case_2_local_5_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP__3D_,2,0,TERMINAL(1),TERMINAL(2));
TERMINATEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Grandparent_20_Helper,1,1,TERMINAL(0),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Update_20_Attribute_20_Name,3,0,TERMINAL(3),TERMINAL(1),TERMINAL(2));
FAILONFAILURE

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Attribute_20_Data_2F_Set_20_Name_case_2_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Attribute_20_Data_2F_Set_20_Name_case_2_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_method_Formalize_20_Data_20_Name(PARAMETERS,TERMINAL(0),TERMINAL(1),ROOT(3),ROOT(4));

result = vpx_method_Attribute_20_Data_2F_Set_20_Name_case_2_local_5_case_1_local_3(PARAMETERS,TERMINAL(0),TERMINAL(3),TERMINAL(2));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Attribute_20_Data_2F_Set_20_Name_case_2_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Attribute_20_Data_2F_Set_20_Name_case_2_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADERWITHNONE(3)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_method_Duplicate_20_Data_20_Name_20_Error(PARAMETERS,TERMINAL(0),TERMINAL(1));

result = kSuccess;
FAILONSUCCESS

OUTPUT(0,NONE)
FOOTERWITHNONE(3)
}

enum opTrigger vpx_method_Attribute_20_Data_2F_Set_20_Name_case_2_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Attribute_20_Data_2F_Set_20_Name_case_2_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Attribute_20_Data_2F_Set_20_Name_case_2_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
vpx_method_Attribute_20_Data_2F_Set_20_Name_case_2_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0);
return outcome;
}

enum opTrigger vpx_method_Attribute_20_Data_2F_Set_20_Name_case_2_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Attribute_20_Data_2F_Set_20_Name_case_2_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(1));
TERMINATEONFAILURE

result = vpx_constant(PARAMETERS,"Get",ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Create_20_Accessor_20_Method,2,0,TERMINAL(0),TERMINAL(2));

result = vpx_constant(PARAMETERS,"Set",ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Create_20_Accessor_20_Method,2,0,TERMINAL(0),TERMINAL(3));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Attribute_20_Data_2F_Set_20_Name_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Attribute_20_Data_2F_Set_20_Name_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Inherited,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_match(PARAMETERS,"FALSE",TERMINAL(3));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Name,TERMINAL(0),ROOT(4),ROOT(5));

result = vpx_method_Attribute_20_Data_2F_Set_20_Name_case_2_local_5(PARAMETERS,TERMINAL(0),TERMINAL(1),TERMINAL(5),ROOT(6));
FAILONFAILURE

result = vpx_method_Attribute_20_Data_2F_Set_20_Name_case_2_local_6(PARAMETERS,TERMINAL(0),TERMINAL(6));

result = kSuccess;

FOOTER(7)
}

enum opTrigger vpx_method_Attribute_20_Data_2F_Set_20_Name_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Attribute_20_Data_2F_Set_20_Name_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Attribute_20_Data_2F_Set_20_Name(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Attribute_20_Data_2F_Set_20_Name_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
if(vpx_method_Attribute_20_Data_2F_Set_20_Name_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Attribute_20_Data_2F_Set_20_Name_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Attribute_20_Data_2F_Substitute_20_With_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Attribute_20_Data_2F_Substitute_20_With_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(25)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_detach_2D_nth,2,2,TERMINAL(4),TERMINAL(1),ROOT(5),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_nth,2,1,TERMINAL(4),TERMINAL(1),ROOT(7));

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(7),ROOT(8),ROOT(9));

result = vpx_get(PARAMETERS,kVPXValue_Inherited,TERMINAL(9),ROOT(10),ROOT(11));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_nth,2,1,TERMINAL(4),TERMINAL(2),ROOT(12));

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(12),ROOT(13),ROOT(14));

result = vpx_get(PARAMETERS,kVPXValue_Inherited,TERMINAL(14),ROOT(15),ROOT(16));

result = vpx_match(PARAMETERS,"FALSE",TERMINAL(16));
NEXTCASEONFAILURE

result = vpx_match(PARAMETERS,"FALSE",TERMINAL(11));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_insert_2D_nth,3,1,TERMINAL(5),TERMINAL(6),TERMINAL(2),ROOT(17));

result = vpx_set(PARAMETERS,kVPXValue_List,TERMINAL(3),TERMINAL(17),ROOT(18));

result = vpx_method_Attribute_20_Data_2F_Order_20_Records(PARAMETERS,TERMINAL(18),TERMINAL(17));

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(18),ROOT(19),ROOT(20));

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(20),ROOT(21),ROOT(22));

result = vpx_get(PARAMETERS,kVPXValue_Sub_20_Classes,TERMINAL(22),ROOT(23),ROOT(24));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(24))) ){
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Substitute_20_Attribute,3,0,LIST(24),TERMINAL(1),TERMINAL(2));
REPEATFINISH
} else {
}

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Update_20_Editors,1,0,TERMINAL(23));

result = kSuccess;

FOOTER(25)
}

enum opTrigger vpx_method_Attribute_20_Data_2F_Substitute_20_With_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Attribute_20_Data_2F_Substitute_20_With_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_Attribute_20_Data_2F_Substitute_20_With(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Attribute_20_Data_2F_Substitute_20_With_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2))
vpx_method_Attribute_20_Data_2F_Substitute_20_With_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2);
return outcome;
}

enum opTrigger vpx_method_Attribute_20_Data_2F_Open_case_1_local_3_case_1_local_11_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Attribute_20_Data_2F_Open_case_1_local_3_case_1_local_11_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
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

enum opTrigger vpx_method_Attribute_20_Data_2F_Open_case_1_local_3_case_1_local_11_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Attribute_20_Data_2F_Open_case_1_local_3_case_1_local_11_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Object_20_To_20_Instance(PARAMETERS,TERMINAL(0),ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_object_2D_to_2D_archive,1,2,TERMINAL(1),ROOT(2),ROOT(3));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(4)
}

enum opTrigger vpx_method_Attribute_20_Data_2F_Open_case_1_local_3_case_1_local_11_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Attribute_20_Data_2F_Open_case_1_local_3_case_1_local_11_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = vpx_constant(PARAMETERS,"object-to-archive FAILED",ROOT(2));

result = vpx_method_Debug_20_Console(PARAMETERS,TERMINAL(2));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(3)
}

enum opTrigger vpx_method_Attribute_20_Data_2F_Open_case_1_local_3_case_1_local_11(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Attribute_20_Data_2F_Open_case_1_local_3_case_1_local_11(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Attribute_20_Data_2F_Open_case_1_local_3_case_1_local_11_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_Attribute_20_Data_2F_Open_case_1_local_3_case_1_local_11_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Attribute_20_Data_2F_Open_case_1_local_3_case_1_local_11_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Attribute_20_Data_2F_Open_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Attribute_20_Data_2F_Open_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(15)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Project_20_Data,1,1,TERMINAL(0),ROOT(1));

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
FAILONSUCCESS

result = vpx_get(PARAMETERS,kVPXValue_Name,TERMINAL(0),ROOT(4),ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Grandparent_20_Helper,1,1,TERMINAL(0),ROOT(6));

result = vpx_get(PARAMETERS,kVPXValue_Record,TERMINAL(6),ROOT(7),ROOT(8));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(8));
FAILONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Index,1,1,TERMINAL(0),ROOT(9));

result = vpx_get(PARAMETERS,kVPXValue_Value,TERMINAL(0),ROOT(10),ROOT(11));

result = vpx_method_Attribute_20_Data_2F_Open_case_1_local_3_case_1_local_11(PARAMETERS,TERMINAL(11),ROOT(12));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Create_20_Attribute,5,1,TERMINAL(3),TERMINAL(8),TERMINAL(9),TERMINAL(5),TERMINAL(12),ROOT(13));
NEXTCASEONFAILURE

result = vpx_match(PARAMETERS,"NULL",TERMINAL(13));
FAILONSUCCESS

result = vpx_set(PARAMETERS,kVPXValue_Record,TERMINAL(4),TERMINAL(13),ROOT(14));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Mark_20_Instances,1,0,TERMINAL(2));

result = kSuccess;
FINISHONSUCCESS

FOOTER(15)
}

enum opTrigger vpx_method_Attribute_20_Data_2F_Open_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Attribute_20_Data_2F_Open_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
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

enum opTrigger vpx_method_Attribute_20_Data_2F_Open_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Attribute_20_Data_2F_Open_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Attribute_20_Data_2F_Open_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Attribute_20_Data_2F_Open_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Attribute_20_Data_2F_Open_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Attribute_20_Data_2F_Open_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_context_super_method(PARAMETERS,kVPXMethod_Open,2,0,TERMINAL(0),TERMINAL(1));

REPEATBEGIN
result = vpx_method_Attribute_20_Data_2F_Open_case_1_local_3(PARAMETERS,TERMINAL(0));
NEXTCASEONFAILURE
REPEATFINISH

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Attribute_20_Data_2F_Open_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Attribute_20_Data_2F_Open_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Attribute record create failure!",ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_show,1,0,TERMINAL(2));

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_Attribute_20_Data_2F_Open(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Attribute_20_Data_2F_Open_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Attribute_20_Data_2F_Open_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Attribute_20_Data_2F_Dispose_20_Record_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Attribute_20_Data_2F_Dispose_20_Record_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
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

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Destroy_20_Attribute,2,0,TERMINAL(3),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Attribute_20_Data_2F_Dispose_20_Record(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Record,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Project_20_Data,1,1,TERMINAL(0),ROOT(3));

result = vpx_method_Attribute_20_Data_2F_Dispose_20_Record_case_1_local_4(PARAMETERS,TERMINAL(3),TERMINAL(2));

result = vpx_constant(PARAMETERS,"NULL",ROOT(4));

result = vpx_set(PARAMETERS,kVPXValue_Record,TERMINAL(1),TERMINAL(4),ROOT(5));

result = kSuccess;

FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Attribute_20_Data_2F_Order_20_Records_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Attribute_20_Data_2F_Order_20_Records_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
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

enum opTrigger vpx_method_Attribute_20_Data_2F_Order_20_Records(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
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
result = vpx_method_Attribute_20_Data_2F_Order_20_Records_case_1_local_5(PARAMETERS,LIST(1),ROOT(8));
LISTROOT(8,0)
REPEATFINISH
LISTROOTFINISH(8,0)
LISTROOTEND
} else {
ROOTEMPTY(8)
}

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Project_20_Data,1,1,TERMINAL(6),ROOT(9));

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(9),ROOT(10),ROOT(11));

result = vpx_constant(PARAMETERS,"attribute",ROOT(12));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Order_20_Elements,4,0,TERMINAL(11),TERMINAL(7),TERMINAL(8),TERMINAL(12));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Mark_20_Instances,1,0,TERMINAL(10));

result = kSuccess;

FOOTERSINGLECASE(13)
}

enum opTrigger vpx_method_Attribute_20_Data_2F_Update_20_Record(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Grandparent_20_Helper,1,1,TERMINAL(0),ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Update_20_Record,1,0,TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Attribute_20_Data_2F_Handle_20_Item_20_Click_case_1_local_3_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Attribute_20_Data_2F_Handle_20_Item_20_Click_case_1_local_3_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(1),ROOT(2));

result = vpx_match(PARAMETERS,"List Value Window",TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Data,TERMINAL(1),ROOT(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_equals,2,0,TERMINAL(0),TERMINAL(4));
NEXTCASEONFAILURE

result = kSuccess;
FINISHONSUCCESS

OUTPUT(0,TERMINAL(3))
FOOTER(5)
}

enum opTrigger vpx_method_Attribute_20_Data_2F_Handle_20_Item_20_Click_case_1_local_3_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Attribute_20_Data_2F_Handle_20_Item_20_Click_case_1_local_3_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
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

enum opTrigger vpx_method_Attribute_20_Data_2F_Handle_20_Item_20_Click_case_1_local_3_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Attribute_20_Data_2F_Handle_20_Item_20_Click_case_1_local_3_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Attribute_20_Data_2F_Handle_20_Item_20_Click_case_1_local_3_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Attribute_20_Data_2F_Handle_20_Item_20_Click_case_1_local_3_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Attribute_20_Data_2F_Handle_20_Item_20_Click_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Attribute_20_Data_2F_Handle_20_Item_20_Click_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Get_20_Desktop_20_Windows(PARAMETERS,ROOT(2));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(2))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Attribute_20_Data_2F_Handle_20_Item_20_Click_case_1_local_3_case_1_local_3(PARAMETERS,TERMINAL(1),LIST(2),ROOT(3));
REPEATFINISH
} else {
ROOTNULL(3,NULL)
}

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Attribute_20_Data_2F_Handle_20_Item_20_Click_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Attribute_20_Data_2F_Handle_20_Item_20_Click_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Value_20_Address,1,1,TERMINAL(0),ROOT(3));

result = vpx_method_Attribute_20_Data_2F_Handle_20_Item_20_Click_case_1_local_3(PARAMETERS,TERMINAL(1),TERMINAL(3),ROOT(4));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(4));
NEXTCASEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Select_20_Window,1,0,TERMINAL(4));

result = kSuccess;

FOOTER(5)
}

enum opTrigger vpx_method_Attribute_20_Data_2F_Handle_20_Item_20_Click_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Attribute_20_Data_2F_Handle_20_Item_20_Click_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADERWITHNONE(13)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Value_20_Address,1,1,TERMINAL(0),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Project_20_Data,1,1,TERMINAL(0),ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(4),ROOT(5),ROOT(6));

result = vpx_instantiate(PARAMETERS,kVPXClass_List_20_Value_20_Window,1,1,NONE,ROOT(7));

result = vpx_set(PARAMETERS,kVPXValue_Item,TERMINAL(7),TERMINAL(1),ROOT(8));

result = vpx_set(PARAMETERS,kVPXValue_Project,TERMINAL(8),TERMINAL(5),ROOT(9));

result = vpx_constant(PARAMETERS,"value",ROOT(10));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Object_20_To_20_Value,3,1,TERMINAL(6),TERMINAL(3),TERMINAL(10),ROOT(11));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Install_20_Data,2,0,TERMINAL(9),TERMINAL(11));

result = vpx_method_Get_20_Desktop(PARAMETERS,ROOT(12));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Add_20_Window,2,0,TERMINAL(12),TERMINAL(9));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open,2,0,TERMINAL(9),TERMINAL(12));

result = kSuccess;

FOOTERWITHNONE(13)
}

enum opTrigger vpx_method_Attribute_20_Data_2F_Handle_20_Item_20_Click_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Attribute_20_Data_2F_Handle_20_Item_20_Click_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADERWITHNONE(11)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Value_20_Address,1,1,TERMINAL(0),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Project_20_Data,1,1,TERMINAL(0),ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(4),ROOT(5),ROOT(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Simple_20_Value_3F_,2,0,TERMINAL(6),TERMINAL(3));
TERMINATEONFAILURE

result = vpx_instantiate(PARAMETERS,kVPXClass_List_20_Value_20_Window,1,1,NONE,ROOT(7));

result = vpx_set(PARAMETERS,kVPXValue_Item,TERMINAL(7),TERMINAL(1),ROOT(8));

result = vpx_set(PARAMETERS,kVPXValue_Project,TERMINAL(8),TERMINAL(5),ROOT(9));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Install_20_Data,2,0,TERMINAL(9),TERMINAL(3));

result = vpx_method_Get_20_Desktop(PARAMETERS,ROOT(10));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Add_20_Window,2,0,TERMINAL(10),TERMINAL(9));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open,2,0,TERMINAL(9),TERMINAL(10));

result = kSuccess;

FOOTERWITHNONE(11)
}

enum opTrigger vpx_method_Attribute_20_Data_2F_Handle_20_Item_20_Click(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Attribute_20_Data_2F_Handle_20_Item_20_Click_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2))
if(vpx_method_Attribute_20_Data_2F_Handle_20_Item_20_Click_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2))
vpx_method_Attribute_20_Data_2F_Handle_20_Item_20_Click_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2);
return outcome;
}

enum opTrigger vpx_method_Attribute_20_Data_2F_Update_20_Value(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Direct_20_Value,1,1,TERMINAL(0),ROOT(1));

result = vpx_set(PARAMETERS,kVPXValue_Value,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Attribute_20_Data_2F_Full_20_Name(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Grandparent_20_Helper,1,1,TERMINAL(0),ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Full_20_Persistent_20_Name,2,1,TERMINAL(1),TERMINAL(0),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Attribute_20_Data_2F_Get_20_Direct_20_Value(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Record,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Project_20_Data,1,1,TERMINAL(1),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Archive,2,1,TERMINAL(5),TERMINAL(2),ROOT(6));

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTERSINGLECASE(7)
}

enum opTrigger vpx_method_Attribute_20_Data_2F_Set_20_Direct_20_Value(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Value_20_Address,2,0,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Attribute_20_Data_2F_Set_20_Value_20_Address(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Record,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Project_20_Data,1,1,TERMINAL(2),ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(4),ROOT(5),ROOT(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Value,3,0,TERMINAL(6),TERMINAL(3),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(7)
}

enum opTrigger vpx_method_Attribute_20_Data_2F_Get_20_Value_20_Address(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Record,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Project_20_Data,1,1,TERMINAL(1),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Value,2,1,TERMINAL(5),TERMINAL(2),ROOT(6));

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTERSINGLECASE(7)
}

enum opTrigger vpx_method_Attribute_20_Data_2F_Get_20_Value(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Value_20_Address,1,1,TERMINAL(0),ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Project_20_Data,1,1,TERMINAL(0),ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Object_20_To_20_Text,2,1,TERMINAL(4),TERMINAL(1),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Attribute_20_Data_2F_Set_20_Value(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Project_20_Data,1,1,TERMINAL(0),ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_constant(PARAMETERS,"string",ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Object_20_To_20_Value,3,1,TERMINAL(4),TERMINAL(1),TERMINAL(5),ROOT(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Direct_20_Value,2,0,TERMINAL(0),TERMINAL(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Make_20_Dirty,1,0,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(7)
}

enum opTrigger vpx_method_Attribute_20_Data_2F_Have_20_Row_20_Values_3F_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"TRUE",ROOT(1));

result = vpx_get(PARAMETERS,kVPXValue_Inherited,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_not,1,1,TERMINAL(3),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
OUTPUT(1,TERMINAL(1))
FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Attribute_20_Data_2F_Have_20_Icon_20_Values_3F_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(10)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( TRUE )",ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(0),ROOT(2));

result = vpx_constant(PARAMETERS,"\"\"",ROOT(3));

result = vpx_constant(PARAMETERS,"\" Inherited\"",ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_Inherited,TERMINAL(0),ROOT(5),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP_choose,3,1,TERMINAL(6),TERMINAL(4),TERMINAL(3),ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(2),TERMINAL(7),ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,1,1,TERMINAL(8),ROOT(9));

result = kSuccess;

OUTPUT(0,TERMINAL(9))
OUTPUT(1,TERMINAL(1))
FOOTERSINGLECASE(10)
}

enum opTrigger vpx_method_Attribute_20_Data_2F_Create_20_Accessor_20_Method_case_1_local_12_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Attribute_20_Data_2F_Create_20_Accessor_20_Method_case_1_local_12_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"1",ROOT(1));

result = vpx_constant(PARAMETERS,"1",ROOT(2));

result = vpx_match(PARAMETERS,"Get",TERMINAL(0));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(1))
OUTPUT(1,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Attribute_20_Data_2F_Create_20_Accessor_20_Method_case_1_local_12_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Attribute_20_Data_2F_Create_20_Accessor_20_Method_case_1_local_12_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"2",ROOT(1));

result = vpx_constant(PARAMETERS,"0",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
OUTPUT(1,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Attribute_20_Data_2F_Create_20_Accessor_20_Method_case_1_local_12(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Attribute_20_Data_2F_Create_20_Accessor_20_Method_case_1_local_12(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Attribute_20_Data_2F_Create_20_Accessor_20_Method_case_1_local_12_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1))
vpx_method_Attribute_20_Data_2F_Create_20_Accessor_20_Method_case_1_local_12_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1);
return outcome;
}

enum opTrigger vpx_method_Attribute_20_Data_2F_Create_20_Accessor_20_Method_case_1_local_17_case_1_local_12(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Attribute_20_Data_2F_Create_20_Accessor_20_Method_case_1_local_17_case_1_local_12(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0,V_Object *root1)
{
HEADERWITHNONE(3)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_Item_20_Data,1,1,NONE,ROOT(0));

result = vpx_instantiate(PARAMETERS,kVPXClass_Case_20_Data,1,1,NONE,ROOT(1));

result = vpx_set(PARAMETERS,kVPXValue_Owner,TERMINAL(1),TERMINAL(0),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Install_20_Helper,2,0,TERMINAL(0),TERMINAL(2));

result = kSuccess;

OUTPUT(0,TERMINAL(0))
OUTPUT(1,TERMINAL(1))
FOOTERSINGLECASEWITHNONE(3)
}

enum opTrigger vpx_method_Attribute_20_Data_2F_Create_20_Accessor_20_Method_case_1_local_17_case_1_local_14(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Attribute_20_Data_2F_Create_20_Accessor_20_Method_case_1_local_17_case_1_local_14(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(11)
INPUT(0,0)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_Item_20_Data,1,1,NONE,ROOT(1));

result = vpx_constant(PARAMETERS,"( 20 20 28 212 )",ROOT(2));

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

enum opTrigger vpx_method_Attribute_20_Data_2F_Create_20_Accessor_20_Method_case_1_local_17_case_1_local_15(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Attribute_20_Data_2F_Create_20_Accessor_20_Method_case_1_local_17_case_1_local_15(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(11)
INPUT(0,0)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_Item_20_Data,1,1,NONE,ROOT(1));

result = vpx_constant(PARAMETERS,"( 100 20 108 212 )",ROOT(2));

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

enum opTrigger vpx_method_Attribute_20_Data_2F_Create_20_Accessor_20_Method_case_1_local_17_case_1_local_16_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Attribute_20_Data_2F_Create_20_Accessor_20_Method_case_1_local_17_case_1_local_16_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(14)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"78",ROOT(1));

result = vpx_constant(PARAMETERS,"95",ROOT(2));

result = vpx_constant(PARAMETERS,"2",ROOT(3));

result = vpx_constant(PARAMETERS,"8",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP__2A2A_,2,1,TERMINAL(0),TERMINAL(4),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_idiv,2,2,TERMINAL(5),TERMINAL(3),ROOT(6),ROOT(7));

result = vpx_constant(PARAMETERS,"132",ROOT(8));

result = vpx_constant(PARAMETERS,"6",ROOT(9));

result = vpx_call_primitive(PARAMETERS,VPLP__2B2B_,2,1,TERMINAL(6),TERMINAL(9),ROOT(10));

result = vpx_call_primitive(PARAMETERS,VPLP__2D2D_,2,1,TERMINAL(8),TERMINAL(10),ROOT(11));

result = vpx_call_primitive(PARAMETERS,VPLP__2B2B_,2,1,TERMINAL(8),TERMINAL(10),ROOT(12));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,4,1,TERMINAL(1),TERMINAL(11),TERMINAL(2),TERMINAL(12),ROOT(13));

result = kSuccess;

OUTPUT(0,TERMINAL(13))
FOOTERSINGLECASE(14)
}

enum opTrigger vpx_method_Attribute_20_Data_2F_Create_20_Accessor_20_Method_case_1_local_17_case_1_local_16_case_1_local_9_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Attribute_20_Data_2F_Create_20_Accessor_20_Method_case_1_local_17_case_1_local_16_case_1_local_9_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(2)
INPUT(0,0)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_Terminal,1,1,NONE,ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASEWITHNONE(2)
}

enum opTrigger vpx_method_Attribute_20_Data_2F_Create_20_Accessor_20_Method_case_1_local_17_case_1_local_16_case_1_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Attribute_20_Data_2F_Create_20_Accessor_20_Method_case_1_local_17_case_1_local_16_case_1_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"1",ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_make_2D_list,3,1,TERMINAL(0),TERMINAL(1),TERMINAL(1),ROOT(2));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(2))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Attribute_20_Data_2F_Create_20_Accessor_20_Method_case_1_local_17_case_1_local_16_case_1_local_9_case_1_local_4(PARAMETERS,LIST(2),ROOT(3));
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

enum opTrigger vpx_method_Attribute_20_Data_2F_Create_20_Accessor_20_Method_case_1_local_17_case_1_local_16_case_1_local_14_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Attribute_20_Data_2F_Create_20_Accessor_20_Method_case_1_local_17_case_1_local_16_case_1_local_14_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(2)
INPUT(0,0)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_Root,1,1,NONE,ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASEWITHNONE(2)
}

enum opTrigger vpx_method_Attribute_20_Data_2F_Create_20_Accessor_20_Method_case_1_local_17_case_1_local_16_case_1_local_14_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Attribute_20_Data_2F_Create_20_Accessor_20_Method_case_1_local_17_case_1_local_16_case_1_local_14_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"1",ROOT(1));

result = vpx_match(PARAMETERS,"0",TERMINAL(0));
NEXTCASEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_make_2D_list,3,1,TERMINAL(0),TERMINAL(1),TERMINAL(1),ROOT(2));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(2))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Attribute_20_Data_2F_Create_20_Accessor_20_Method_case_1_local_17_case_1_local_16_case_1_local_14_case_1_local_5(PARAMETERS,LIST(2),ROOT(3));
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

enum opTrigger vpx_method_Attribute_20_Data_2F_Create_20_Accessor_20_Method_case_1_local_17_case_1_local_16_case_1_local_14_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Attribute_20_Data_2F_Create_20_Accessor_20_Method_case_1_local_17_case_1_local_16_case_1_local_14_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( )",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Attribute_20_Data_2F_Create_20_Accessor_20_Method_case_1_local_17_case_1_local_16_case_1_local_14(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Attribute_20_Data_2F_Create_20_Accessor_20_Method_case_1_local_17_case_1_local_16_case_1_local_14(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Attribute_20_Data_2F_Create_20_Accessor_20_Method_case_1_local_17_case_1_local_16_case_1_local_14_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Attribute_20_Data_2F_Create_20_Accessor_20_Method_case_1_local_17_case_1_local_16_case_1_local_14_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Attribute_20_Data_2F_Create_20_Accessor_20_Method_case_1_local_17_case_1_local_16(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Attribute_20_Data_2F_Create_20_Accessor_20_Method_case_1_local_17_case_1_local_16(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(17)
INPUT(0,0)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_Item_20_Data,1,1,NONE,ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP__22_length_22_,1,1,TERMINAL(0),ROOT(2));

result = vpx_method_Attribute_20_Data_2F_Create_20_Accessor_20_Method_case_1_local_17_case_1_local_16_case_1_local_4(PARAMETERS,TERMINAL(2),ROOT(3));

result = vpx_set(PARAMETERS,kVPXValue_Frame,TERMINAL(1),TERMINAL(3),ROOT(4));

result = vpx_constant(PARAMETERS,"get",ROOT(5));

result = vpx_instantiate(PARAMETERS,kVPXClass_Operation_20_Data,1,1,NONE,ROOT(6));

result = vpx_constant(PARAMETERS,"1",ROOT(7));

result = vpx_method_Attribute_20_Data_2F_Create_20_Accessor_20_Method_case_1_local_17_case_1_local_16_case_1_local_9(PARAMETERS,TERMINAL(7),ROOT(8));

result = vpx_set(PARAMETERS,kVPXValue_Text,TERMINAL(6),TERMINAL(0),ROOT(9));

result = vpx_set(PARAMETERS,kVPXValue_Frame,TERMINAL(9),TERMINAL(3),ROOT(10));

result = vpx_set(PARAMETERS,kVPXValue_Inputs,TERMINAL(10),TERMINAL(8),ROOT(11));

result = vpx_constant(PARAMETERS,"2",ROOT(12));

result = vpx_method_Attribute_20_Data_2F_Create_20_Accessor_20_Method_case_1_local_17_case_1_local_16_case_1_local_14(PARAMETERS,TERMINAL(12),ROOT(13));

result = vpx_set(PARAMETERS,kVPXValue_Outputs,TERMINAL(11),TERMINAL(13),ROOT(14));

result = vpx_set(PARAMETERS,kVPXValue_Type,TERMINAL(14),TERMINAL(5),ROOT(15));

result = vpx_set(PARAMETERS,kVPXValue_Owner,TERMINAL(15),TERMINAL(4),ROOT(16));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Install_20_Helper,2,0,TERMINAL(4),TERMINAL(16));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Position_20_Terminal,2,0,TERMINAL(6),TERMINAL(8));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Position_20_Root,2,0,TERMINAL(6),TERMINAL(13));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERSINGLECASEWITHNONE(17)
}

enum opTrigger vpx_method_Attribute_20_Data_2F_Create_20_Accessor_20_Method_case_1_local_17_case_1_local_17(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Attribute_20_Data_2F_Create_20_Accessor_20_Method_case_1_local_17_case_1_local_17(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(25)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_pack,3,1,TERMINAL(0),TERMINAL(1),TERMINAL(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(0),ROOT(4),ROOT(5));

result = vpx_get(PARAMETERS,kVPXValue_Outputs,TERMINAL(5),ROOT(6),ROOT(7));

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(1),ROOT(8),ROOT(9));

result = vpx_get(PARAMETERS,kVPXValue_Outputs,TERMINAL(9),ROOT(10),ROOT(11));

result = vpx_get(PARAMETERS,kVPXValue_Inputs,TERMINAL(10),ROOT(12),ROOT(13));

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(2),ROOT(14),ROOT(15));

result = vpx_get(PARAMETERS,kVPXValue_Inputs,TERMINAL(15),ROOT(16),ROOT(17));

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,1,TERMINAL(7),ROOT(18));

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,1,TERMINAL(13),ROOT(19));

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,1,TERMINAL(17),ROOT(20));

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,2,TERMINAL(11),ROOT(21),ROOT(22));

result = vpx_set(PARAMETERS,kVPXValue_Root,TERMINAL(19),TERMINAL(18),ROOT(23));

result = vpx_set(PARAMETERS,kVPXValue_Root,TERMINAL(20),TERMINAL(22),ROOT(24));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASE(25)
}

enum opTrigger vpx_method_Attribute_20_Data_2F_Create_20_Accessor_20_Method_case_1_local_17_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0);
enum opTrigger vpx_method_Attribute_20_Data_2F_Create_20_Accessor_20_Method_case_1_local_17_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0)
{
HEADERWITHNONE(23)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_match(PARAMETERS,"Get",TERMINAL(3));
NEXTCASEONFAILURE

result = vpx_instantiate(PARAMETERS,kVPXClass_List_20_Data,1,1,NONE,ROOT(4));

result = vpx_constant(PARAMETERS,"Case Data",ROOT(5));

result = vpx_set(PARAMETERS,kVPXValue_Helper_20_Name,TERMINAL(4),TERMINAL(5),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,1,1,TERMINAL(6),ROOT(7));

result = vpx_set(PARAMETERS,kVPXValue_Lists,TERMINAL(1),TERMINAL(7),ROOT(8));

result = vpx_instantiate(PARAMETERS,kVPXClass_List_20_Data,1,1,NONE,ROOT(9));

result = vpx_constant(PARAMETERS,"Operation Data",ROOT(10));

result = vpx_set(PARAMETERS,kVPXValue_Helper_20_Name,TERMINAL(9),TERMINAL(10),ROOT(11));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,1,1,TERMINAL(11),ROOT(12));

result = vpx_method_Attribute_20_Data_2F_Create_20_Accessor_20_Method_case_1_local_17_case_1_local_12(PARAMETERS,ROOT(13),ROOT(14));

result = vpx_set(PARAMETERS,kVPXValue_Lists,TERMINAL(13),TERMINAL(12),ROOT(15));

result = vpx_method_Attribute_20_Data_2F_Create_20_Accessor_20_Method_case_1_local_17_case_1_local_14(PARAMETERS,TERMINAL(0),ROOT(16));

result = vpx_method_Attribute_20_Data_2F_Create_20_Accessor_20_Method_case_1_local_17_case_1_local_15(PARAMETERS,TERMINAL(0),ROOT(17));

result = vpx_method_Attribute_20_Data_2F_Create_20_Accessor_20_Method_case_1_local_17_case_1_local_16(PARAMETERS,TERMINAL(2),ROOT(18));

result = vpx_method_Attribute_20_Data_2F_Create_20_Accessor_20_Method_case_1_local_17_case_1_local_17(PARAMETERS,TERMINAL(16),TERMINAL(18),TERMINAL(17),ROOT(19));

result = vpx_set(PARAMETERS,kVPXValue_List,TERMINAL(11),TERMINAL(19),ROOT(20));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,1,1,TERMINAL(13),ROOT(21));

result = vpx_set(PARAMETERS,kVPXValue_List,TERMINAL(6),TERMINAL(21),ROOT(22));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(19))) ){
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Use_20_Best_20_Frame,1,0,LIST(19));
REPEATFINISH
} else {
}

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Tidy,1,0,TERMINAL(14));

result = kSuccess;

OUTPUT(0,TERMINAL(22))
FOOTERWITHNONE(23)
}

enum opTrigger vpx_method_Attribute_20_Data_2F_Create_20_Accessor_20_Method_case_1_local_17_case_2_local_11(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Attribute_20_Data_2F_Create_20_Accessor_20_Method_case_1_local_17_case_2_local_11(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object *root0,V_Object *root1)
{
HEADERWITHNONE(3)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_Item_20_Data,1,1,NONE,ROOT(0));

result = vpx_instantiate(PARAMETERS,kVPXClass_Case_20_Data,1,1,NONE,ROOT(1));

result = vpx_set(PARAMETERS,kVPXValue_Owner,TERMINAL(1),TERMINAL(0),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Install_20_Helper,2,0,TERMINAL(0),TERMINAL(2));

result = kSuccess;

OUTPUT(0,TERMINAL(0))
OUTPUT(1,TERMINAL(1))
FOOTERSINGLECASEWITHNONE(3)
}

enum opTrigger vpx_method_Attribute_20_Data_2F_Create_20_Accessor_20_Method_case_1_local_17_case_2_local_13(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Attribute_20_Data_2F_Create_20_Accessor_20_Method_case_1_local_17_case_2_local_13(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(11)
INPUT(0,0)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_Item_20_Data,1,1,NONE,ROOT(1));

result = vpx_constant(PARAMETERS,"( 20 20 28 212 )",ROOT(2));

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

enum opTrigger vpx_method_Attribute_20_Data_2F_Create_20_Accessor_20_Method_case_1_local_17_case_2_local_14(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Attribute_20_Data_2F_Create_20_Accessor_20_Method_case_1_local_17_case_2_local_14(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(11)
INPUT(0,0)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_Item_20_Data,1,1,NONE,ROOT(1));

result = vpx_constant(PARAMETERS,"( 100 20 108 212 )",ROOT(2));

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

enum opTrigger vpx_method_Attribute_20_Data_2F_Create_20_Accessor_20_Method_case_1_local_17_case_2_local_15_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Attribute_20_Data_2F_Create_20_Accessor_20_Method_case_1_local_17_case_2_local_15_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(14)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"78",ROOT(1));

result = vpx_constant(PARAMETERS,"95",ROOT(2));

result = vpx_constant(PARAMETERS,"2",ROOT(3));

result = vpx_constant(PARAMETERS,"8",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP__2A2A_,2,1,TERMINAL(0),TERMINAL(4),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_idiv,2,2,TERMINAL(5),TERMINAL(3),ROOT(6),ROOT(7));

result = vpx_constant(PARAMETERS,"132",ROOT(8));

result = vpx_constant(PARAMETERS,"6",ROOT(9));

result = vpx_call_primitive(PARAMETERS,VPLP__2B2B_,2,1,TERMINAL(6),TERMINAL(9),ROOT(10));

result = vpx_call_primitive(PARAMETERS,VPLP__2D2D_,2,1,TERMINAL(8),TERMINAL(10),ROOT(11));

result = vpx_call_primitive(PARAMETERS,VPLP__2B2B_,2,1,TERMINAL(8),TERMINAL(10),ROOT(12));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,4,1,TERMINAL(1),TERMINAL(11),TERMINAL(2),TERMINAL(12),ROOT(13));

result = kSuccess;

OUTPUT(0,TERMINAL(13))
FOOTERSINGLECASE(14)
}

enum opTrigger vpx_method_Attribute_20_Data_2F_Create_20_Accessor_20_Method_case_1_local_17_case_2_local_15_case_1_local_9_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Attribute_20_Data_2F_Create_20_Accessor_20_Method_case_1_local_17_case_2_local_15_case_1_local_9_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(2)
INPUT(0,0)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_Terminal,1,1,NONE,ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASEWITHNONE(2)
}

enum opTrigger vpx_method_Attribute_20_Data_2F_Create_20_Accessor_20_Method_case_1_local_17_case_2_local_15_case_1_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Attribute_20_Data_2F_Create_20_Accessor_20_Method_case_1_local_17_case_2_local_15_case_1_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"1",ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_make_2D_list,3,1,TERMINAL(0),TERMINAL(1),TERMINAL(1),ROOT(2));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(2))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Attribute_20_Data_2F_Create_20_Accessor_20_Method_case_1_local_17_case_2_local_15_case_1_local_9_case_1_local_4(PARAMETERS,LIST(2),ROOT(3));
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

enum opTrigger vpx_method_Attribute_20_Data_2F_Create_20_Accessor_20_Method_case_1_local_17_case_2_local_15_case_1_local_14_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Attribute_20_Data_2F_Create_20_Accessor_20_Method_case_1_local_17_case_2_local_15_case_1_local_14_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(2)
INPUT(0,0)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_Root,1,1,NONE,ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASEWITHNONE(2)
}

enum opTrigger vpx_method_Attribute_20_Data_2F_Create_20_Accessor_20_Method_case_1_local_17_case_2_local_15_case_1_local_14_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Attribute_20_Data_2F_Create_20_Accessor_20_Method_case_1_local_17_case_2_local_15_case_1_local_14_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"1",ROOT(1));

result = vpx_match(PARAMETERS,"0",TERMINAL(0));
NEXTCASEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_make_2D_list,3,1,TERMINAL(0),TERMINAL(1),TERMINAL(1),ROOT(2));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(2))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Attribute_20_Data_2F_Create_20_Accessor_20_Method_case_1_local_17_case_2_local_15_case_1_local_14_case_1_local_5(PARAMETERS,LIST(2),ROOT(3));
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

enum opTrigger vpx_method_Attribute_20_Data_2F_Create_20_Accessor_20_Method_case_1_local_17_case_2_local_15_case_1_local_14_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Attribute_20_Data_2F_Create_20_Accessor_20_Method_case_1_local_17_case_2_local_15_case_1_local_14_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( )",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Attribute_20_Data_2F_Create_20_Accessor_20_Method_case_1_local_17_case_2_local_15_case_1_local_14(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Attribute_20_Data_2F_Create_20_Accessor_20_Method_case_1_local_17_case_2_local_15_case_1_local_14(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Attribute_20_Data_2F_Create_20_Accessor_20_Method_case_1_local_17_case_2_local_15_case_1_local_14_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Attribute_20_Data_2F_Create_20_Accessor_20_Method_case_1_local_17_case_2_local_15_case_1_local_14_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Attribute_20_Data_2F_Create_20_Accessor_20_Method_case_1_local_17_case_2_local_15(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Attribute_20_Data_2F_Create_20_Accessor_20_Method_case_1_local_17_case_2_local_15(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(17)
INPUT(0,0)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_Item_20_Data,1,1,NONE,ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP__22_length_22_,1,1,TERMINAL(0),ROOT(2));

result = vpx_method_Attribute_20_Data_2F_Create_20_Accessor_20_Method_case_1_local_17_case_2_local_15_case_1_local_4(PARAMETERS,TERMINAL(2),ROOT(3));

result = vpx_set(PARAMETERS,kVPXValue_Frame,TERMINAL(1),TERMINAL(3),ROOT(4));

result = vpx_constant(PARAMETERS,"set",ROOT(5));

result = vpx_instantiate(PARAMETERS,kVPXClass_Operation_20_Data,1,1,NONE,ROOT(6));

result = vpx_constant(PARAMETERS,"2",ROOT(7));

result = vpx_method_Attribute_20_Data_2F_Create_20_Accessor_20_Method_case_1_local_17_case_2_local_15_case_1_local_9(PARAMETERS,TERMINAL(7),ROOT(8));

result = vpx_set(PARAMETERS,kVPXValue_Text,TERMINAL(6),TERMINAL(0),ROOT(9));

result = vpx_set(PARAMETERS,kVPXValue_Frame,TERMINAL(9),TERMINAL(3),ROOT(10));

result = vpx_set(PARAMETERS,kVPXValue_Inputs,TERMINAL(10),TERMINAL(8),ROOT(11));

result = vpx_constant(PARAMETERS,"1",ROOT(12));

result = vpx_method_Attribute_20_Data_2F_Create_20_Accessor_20_Method_case_1_local_17_case_2_local_15_case_1_local_14(PARAMETERS,TERMINAL(12),ROOT(13));

result = vpx_set(PARAMETERS,kVPXValue_Outputs,TERMINAL(11),TERMINAL(13),ROOT(14));

result = vpx_set(PARAMETERS,kVPXValue_Type,TERMINAL(14),TERMINAL(5),ROOT(15));

result = vpx_set(PARAMETERS,kVPXValue_Owner,TERMINAL(15),TERMINAL(4),ROOT(16));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Install_20_Helper,2,0,TERMINAL(4),TERMINAL(16));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Position_20_Terminal,2,0,TERMINAL(6),TERMINAL(8));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Position_20_Root,2,0,TERMINAL(6),TERMINAL(13));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERSINGLECASEWITHNONE(17)
}

enum opTrigger vpx_method_Attribute_20_Data_2F_Create_20_Accessor_20_Method_case_1_local_17_case_2_local_16(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Attribute_20_Data_2F_Create_20_Accessor_20_Method_case_1_local_17_case_2_local_16(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(18)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_pack,3,1,TERMINAL(0),TERMINAL(1),TERMINAL(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(0),ROOT(4),ROOT(5));

result = vpx_get(PARAMETERS,kVPXValue_Outputs,TERMINAL(5),ROOT(6),ROOT(7));

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(1),ROOT(8),ROOT(9));

result = vpx_get(PARAMETERS,kVPXValue_Inputs,TERMINAL(9),ROOT(10),ROOT(11));

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,2,TERMINAL(7),ROOT(12),ROOT(13));

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,2,TERMINAL(11),ROOT(14),ROOT(15));

result = vpx_set(PARAMETERS,kVPXValue_Root,TERMINAL(14),TERMINAL(12),ROOT(16));

result = vpx_set(PARAMETERS,kVPXValue_Root,TERMINAL(15),TERMINAL(13),ROOT(17));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASE(18)
}

enum opTrigger vpx_method_Attribute_20_Data_2F_Create_20_Accessor_20_Method_case_1_local_17_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0);
enum opTrigger vpx_method_Attribute_20_Data_2F_Create_20_Accessor_20_Method_case_1_local_17_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0)
{
HEADERWITHNONE(23)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_List_20_Data,1,1,NONE,ROOT(4));

result = vpx_constant(PARAMETERS,"Case Data",ROOT(5));

result = vpx_set(PARAMETERS,kVPXValue_Helper_20_Name,TERMINAL(4),TERMINAL(5),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,1,1,TERMINAL(6),ROOT(7));

result = vpx_set(PARAMETERS,kVPXValue_Lists,TERMINAL(1),TERMINAL(7),ROOT(8));

result = vpx_instantiate(PARAMETERS,kVPXClass_List_20_Data,1,1,NONE,ROOT(9));

result = vpx_constant(PARAMETERS,"Operation Data",ROOT(10));

result = vpx_set(PARAMETERS,kVPXValue_Helper_20_Name,TERMINAL(9),TERMINAL(10),ROOT(11));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,1,1,TERMINAL(11),ROOT(12));

result = vpx_method_Attribute_20_Data_2F_Create_20_Accessor_20_Method_case_1_local_17_case_2_local_11(PARAMETERS,ROOT(13),ROOT(14));

result = vpx_set(PARAMETERS,kVPXValue_Lists,TERMINAL(13),TERMINAL(12),ROOT(15));

result = vpx_method_Attribute_20_Data_2F_Create_20_Accessor_20_Method_case_1_local_17_case_2_local_13(PARAMETERS,TERMINAL(0),ROOT(16));

result = vpx_method_Attribute_20_Data_2F_Create_20_Accessor_20_Method_case_1_local_17_case_2_local_14(PARAMETERS,TERMINAL(0),ROOT(17));

result = vpx_method_Attribute_20_Data_2F_Create_20_Accessor_20_Method_case_1_local_17_case_2_local_15(PARAMETERS,TERMINAL(2),ROOT(18));

result = vpx_method_Attribute_20_Data_2F_Create_20_Accessor_20_Method_case_1_local_17_case_2_local_16(PARAMETERS,TERMINAL(16),TERMINAL(18),TERMINAL(17),ROOT(19));

result = vpx_set(PARAMETERS,kVPXValue_List,TERMINAL(11),TERMINAL(19),ROOT(20));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,1,1,TERMINAL(13),ROOT(21));

result = vpx_set(PARAMETERS,kVPXValue_List,TERMINAL(6),TERMINAL(21),ROOT(22));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(19))) ){
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Use_20_Best_20_Frame,1,0,LIST(19));
REPEATFINISH
} else {
}

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Tidy,1,0,TERMINAL(14));

result = kSuccess;

OUTPUT(0,TERMINAL(22))
FOOTERWITHNONE(23)
}

enum opTrigger vpx_method_Attribute_20_Data_2F_Create_20_Accessor_20_Method_case_1_local_17(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0);
enum opTrigger vpx_method_Attribute_20_Data_2F_Create_20_Accessor_20_Method_case_1_local_17(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Attribute_20_Data_2F_Create_20_Accessor_20_Method_case_1_local_17_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0))
vpx_method_Attribute_20_Data_2F_Create_20_Accessor_20_Method_case_1_local_17_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0);
return outcome;
}

enum opTrigger vpx_method_Attribute_20_Data_2F_Create_20_Accessor_20_Method(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADERWITHNONE(19)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_Item_20_Data,1,1,NONE,ROOT(2));

result = vpx_constant(PARAMETERS,"Universal Data",ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Name,TERMINAL(0),ROOT(4),ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Grandparent_20_Helper,1,1,TERMINAL(4),ROOT(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(6),TERMINAL(3),ROOT(7));

result = vpx_set(PARAMETERS,kVPXValue_Parent,TERMINAL(2),TERMINAL(7),ROOT(8));

result = vpx_instantiate(PARAMETERS,kVPXClass_Universal_20_Data,1,1,NONE,ROOT(9));

result = vpx_constant(PARAMETERS,"\" \"",ROOT(10));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,3,1,TERMINAL(1),TERMINAL(10),TERMINAL(5),ROOT(11));

result = vpx_set(PARAMETERS,kVPXValue_Name,TERMINAL(9),TERMINAL(11),ROOT(12));

result = vpx_method_Attribute_20_Data_2F_Create_20_Accessor_20_Method_case_1_local_12(PARAMETERS,TERMINAL(1),ROOT(13),ROOT(14));

result = vpx_set(PARAMETERS,kVPXValue_Inarity,TERMINAL(12),TERMINAL(13),ROOT(15));

result = vpx_set(PARAMETERS,kVPXValue_Outarity,TERMINAL(15),TERMINAL(14),ROOT(16));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Install_20_Helper,2,0,TERMINAL(8),TERMINAL(16));

result = vpx_set(PARAMETERS,kVPXValue_Owner,TERMINAL(16),TERMINAL(8),ROOT(17));

result = vpx_method_Attribute_20_Data_2F_Create_20_Accessor_20_Method_case_1_local_17(PARAMETERS,TERMINAL(17),TERMINAL(8),TERMINAL(5),TERMINAL(1),ROOT(18));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Add_20_To_20_List_20_Data,2,0,TERMINAL(17),TERMINAL(7));

result = vpx_method_Case_20_Data_2F_Update_20_Names(PARAMETERS,TERMINAL(17),TERMINAL(18));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Make_20_Dirty,1,0,TERMINAL(17));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Send_20_Refresh,1,0,TERMINAL(7));

result = kSuccess;

FOOTERSINGLECASEWITHNONE(19)
}

enum opTrigger vpx_method_Attribute_20_Data_2F_Parse_20_CPX_20_Buffer_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2);
enum opTrigger vpx_method_Attribute_20_Data_2F_Parse_20_CPX_20_Buffer_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2)
{
HEADER(13)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_constant(PARAMETERS,"4",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_text,3,3,TERMINAL(3),TERMINAL(2),TERMINAL(4),ROOT(5),ROOT(6),ROOT(7));

result = vpx_match(PARAMETERS,"adat",TERMINAL(7));
NEXTCASEONFAILURE

result = vpx_method_Parse_20_Object(PARAMETERS,TERMINAL(1),TERMINAL(6),TERMINAL(5),ROOT(8),ROOT(9),ROOT(10),ROOT(11));

result = vpx_set(PARAMETERS,kVPXValue_Value,TERMINAL(0),TERMINAL(11),ROOT(12));

result = kSuccess;

OUTPUT(0,TERMINAL(12))
OUTPUT(1,TERMINAL(8))
OUTPUT(2,TERMINAL(9))
FOOTER(13)
}

enum opTrigger vpx_method_Attribute_20_Data_2F_Parse_20_CPX_20_Buffer_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2);
enum opTrigger vpx_method_Attribute_20_Data_2F_Parse_20_CPX_20_Buffer_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2)
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

enum opTrigger vpx_method_Attribute_20_Data_2F_Parse_20_CPX_20_Buffer_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2);
enum opTrigger vpx_method_Attribute_20_Data_2F_Parse_20_CPX_20_Buffer_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2)
{
HEADER(10)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_constant(PARAMETERS,"8",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_text,3,3,TERMINAL(3),TERMINAL(2),TERMINAL(4),ROOT(5),ROOT(6),ROOT(7));

result = vpx_match(PARAMETERS,"end iatt",TERMINAL(7));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_detach_2D_l,1,2,TERMINAL(1),ROOT(8),ROOT(9));

result = kSuccess;

OUTPUT(0,TERMINAL(8))
OUTPUT(1,TERMINAL(9))
OUTPUT(2,TERMINAL(6))
FOOTER(10)
}

enum opTrigger vpx_method_Attribute_20_Data_2F_Parse_20_CPX_20_Buffer_case_4_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Attribute_20_Data_2F_Parse_20_CPX_20_Buffer_case_4_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
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

enum opTrigger vpx_method_Attribute_20_Data_2F_Parse_20_CPX_20_Buffer_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2);
enum opTrigger vpx_method_Attribute_20_Data_2F_Parse_20_CPX_20_Buffer_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2)
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
result = vpx_method_Attribute_20_Data_2F_Parse_20_CPX_20_Buffer_case_4_local_8(PARAMETERS,TERMINAL(5),LOOP(0),TERMINAL(8),ROOT(11));
REPEATFINISH

result = kSuccess;

OUTPUT(0,TERMINAL(0))
OUTPUT(1,TERMINAL(1))
OUTPUT(2,TERMINAL(11))
FOOTER(12)
}

enum opTrigger vpx_method_Attribute_20_Data_2F_Parse_20_CPX_20_Buffer_case_5(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2);
enum opTrigger vpx_method_Attribute_20_Data_2F_Parse_20_CPX_20_Buffer_case_5(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2)
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

enum opTrigger vpx_method_Attribute_20_Data_2F_Parse_20_CPX_20_Buffer(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Attribute_20_Data_2F_Parse_20_CPX_20_Buffer_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0,root1,root2))
if(vpx_method_Attribute_20_Data_2F_Parse_20_CPX_20_Buffer_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0,root1,root2))
if(vpx_method_Attribute_20_Data_2F_Parse_20_CPX_20_Buffer_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0,root1,root2))
if(vpx_method_Attribute_20_Data_2F_Parse_20_CPX_20_Buffer_case_4(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0,root1,root2))
vpx_method_Attribute_20_Data_2F_Parse_20_CPX_20_Buffer_case_5(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0,root1,root2);
return outcome;
}

enum opTrigger vpx_method_Attribute_20_Data_2F_Set_20_CPX_20_Text_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Attribute_20_Data_2F_Set_20_CPX_20_Text_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Name,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_equals,2,0,TERMINAL(3),TERMINAL(1));
NEXTCASEONFAILURE

result = kSuccess;

FOOTER(4)
}

enum opTrigger vpx_method_Attribute_20_Data_2F_Set_20_CPX_20_Text_case_2_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Attribute_20_Data_2F_Set_20_CPX_20_Text_case_2_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"attribute",ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Record,TERMINAL(0),ROOT(4),ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Project_20_Data,1,1,TERMINAL(4),ROOT(6));

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(6),ROOT(7),ROOT(8));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Rename_20_Element,5,0,TERMINAL(8),TERMINAL(5),TERMINAL(2),TERMINAL(1),TERMINAL(3));
NEXTCASEONFAILURE

result = kSuccess;
FINISHONSUCCESS

OUTPUT(0,TERMINAL(1))
FOOTER(9)
}

enum opTrigger vpx_method_Attribute_20_Data_2F_Set_20_CPX_20_Text_case_2_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Attribute_20_Data_2F_Set_20_CPX_20_Text_case_2_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_method_Unique_20_Name_20_For_20_String(PARAMETERS,TERMINAL(1),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_Attribute_20_Data_2F_Set_20_CPX_20_Text_case_2_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Attribute_20_Data_2F_Set_20_CPX_20_Text_case_2_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Attribute_20_Data_2F_Set_20_CPX_20_Text_case_2_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
vpx_method_Attribute_20_Data_2F_Set_20_CPX_20_Text_case_2_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0);
return outcome;
}

enum opTrigger vpx_method_Attribute_20_Data_2F_Set_20_CPX_20_Text_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Attribute_20_Data_2F_Set_20_CPX_20_Text_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(10)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Name,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Grandparent_20_Helper,1,1,TERMINAL(2),ROOT(4));

REPEATBEGIN
LOOPTERMINALBEGIN(1)
LOOPTERMINAL(0,1,5)
result = vpx_method_Attribute_20_Data_2F_Set_20_CPX_20_Text_case_2_local_4(PARAMETERS,TERMINAL(4),LOOP(0),TERMINAL(3),ROOT(5));
REPEATFINISH

result = vpx_set(PARAMETERS,kVPXValue_Name,TERMINAL(0),TERMINAL(5),ROOT(6));

result = vpx_get(PARAMETERS,kVPXValue_Owner,TERMINAL(6),ROOT(7),ROOT(8));

result = vpx_set(PARAMETERS,kVPXValue_Name,TERMINAL(8),TERMINAL(5),ROOT(9));

result = kSuccess;

FOOTER(10)
}

enum opTrigger vpx_method_Attribute_20_Data_2F_Set_20_CPX_20_Text(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Attribute_20_Data_2F_Set_20_CPX_20_Text_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Attribute_20_Data_2F_Set_20_CPX_20_Text_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Attribute_20_Data_2F_Isolate_20_First(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(8)
INPUT(0,0)
result = kSuccess;

result = vpx_call_context_super_method(PARAMETERS,kVPXMethod_Isolate_20_First,1,2,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_Inherited,TERMINAL(1),ROOT(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_attach_2D_r,2,1,TERMINAL(2),TERMINAL(4),ROOT(5));

result = vpx_constant(PARAMETERS,"FALSE",ROOT(6));

result = vpx_set(PARAMETERS,kVPXValue_Inherited,TERMINAL(3),TERMINAL(6),ROOT(7));

result = kSuccess;

OUTPUT(0,TERMINAL(7))
OUTPUT(1,TERMINAL(5))
FOOTERSINGLECASE(8)
}

enum opTrigger vpx_method_Attribute_20_Data_2F_Integrate_20_First(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_detach_2D_r,1,2,TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_set(PARAMETERS,kVPXValue_Inherited,TERMINAL(0),TERMINAL(3),ROOT(4));

result = vpx_call_context_super_method(PARAMETERS,kVPXMethod_Integrate_20_First,2,0,TERMINAL(4),TERMINAL(2));

result = kSuccess;

FOOTERSINGLECASE(5)
}

/* Stop Universals */



Nat4 VPLC_Class_20_Data_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Class_20_Data_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 150 372 }{ 183 392 } */
	tempAttribute = attribute_add("Owner",tempClass,NULL,environment);
	tempAttribute = attribute_add("Name",tempClass,tempAttribute_Class_20_Data_2F_Name,environment);
	tempAttribute = attribute_add("Super Class",tempClass,NULL,environment);
	tempAttribute = attribute_add("Sub Classes",tempClass,tempAttribute_Class_20_Data_2F_Sub_20_Classes,environment);
	tempAttribute = attribute_add("Super Instance",tempClass,NULL,environment);
	tempAttribute = attribute_add("Constructor",tempClass,tempAttribute_Class_20_Data_2F_Constructor,environment);
	tempAttribute = attribute_add("Instances",tempClass,tempAttribute_Class_20_Data_2F_Instances,environment);
	tempAttribute = attribute_add("Record",tempClass,NULL,environment);
	tempAttribute = attribute_add("Value",tempClass,NULL,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"Helper Data");
	return kNOERROR;
}

/* Start Universals: { 106 1018 }{ 790 356 } */
enum opTrigger vpx_method_Class_20_Data_2F_C_20_Code_20_Export_20_Attributes_case_1_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Class_20_Data_2F_C_20_Code_20_Export_20_Attributes_case_1_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
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

enum opTrigger vpx_method_Class_20_Data_2F_C_20_Code_20_Export_20_Attributes_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Class_20_Data_2F_C_20_Code_20_Export_20_Attributes_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(13)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"Attribute Data\"",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"\"/* Start Attributes: \"",ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(2),ROOT(4),ROOT(5));

result = vpx_constant(PARAMETERS,"\" */\n\"",ROOT(6));

result = vpx_method_Frame_20_To_20_Text(PARAMETERS,TERMINAL(2),ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(3),TERMINAL(7),ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(8),TERMINAL(6),ROOT(9));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(5))) ){
REPEATBEGINWITHCOUNTER
LOOPTERMINALBEGIN(1)
LOOPTERMINAL(0,9,10)
result = vpx_method_Class_20_Data_2F_C_20_Code_20_Export_20_Attributes_case_1_local_10(PARAMETERS,LOOP(0),LIST(5),ROOT(10));
REPEATFINISH
} else {
ROOTNULL(10,TERMINAL(9))
}

result = vpx_constant(PARAMETERS,"\"/* Stop Attributes */\n\n\"",ROOT(11));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(10),TERMINAL(11),ROOT(12));

result = kSuccess;

OUTPUT(0,TERMINAL(12))
FOOTER(13)
}

enum opTrigger vpx_method_Class_20_Data_2F_C_20_Code_20_Export_20_Attributes_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Class_20_Data_2F_C_20_Code_20_Export_20_Attributes_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"\n/* ATTRIBUTE DATA NOT FOUND! */\n\"",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Class_20_Data_2F_C_20_Code_20_Export_20_Attributes(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Class_20_Data_2F_C_20_Code_20_Export_20_Attributes_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Class_20_Data_2F_C_20_Code_20_Export_20_Attributes_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Class_20_Data_2F_C_20_Code_20_Export_20_Universals_case_1_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Class_20_Data_2F_C_20_Code_20_Export_20_Universals_case_1_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
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

enum opTrigger vpx_method_Class_20_Data_2F_C_20_Code_20_Export_20_Universals_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Class_20_Data_2F_C_20_Code_20_Export_20_Universals_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(13)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"Universal Data\"",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"\"/* Start Universals: \"",ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(2),ROOT(4),ROOT(5));

result = vpx_constant(PARAMETERS,"\" */\n\"",ROOT(6));

result = vpx_method_Frame_20_To_20_Text(PARAMETERS,TERMINAL(2),ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(3),TERMINAL(7),ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(8),TERMINAL(6),ROOT(9));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(5))) ){
REPEATBEGINWITHCOUNTER
LOOPTERMINALBEGIN(1)
LOOPTERMINAL(0,9,10)
result = vpx_method_Class_20_Data_2F_C_20_Code_20_Export_20_Universals_case_1_local_10(PARAMETERS,LOOP(0),LIST(5),ROOT(10));
REPEATFINISH
} else {
ROOTNULL(10,TERMINAL(9))
}

result = vpx_constant(PARAMETERS,"\"/* Stop Universals */\n\n\"",ROOT(11));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(10),TERMINAL(11),ROOT(12));

result = kSuccess;

OUTPUT(0,TERMINAL(12))
FOOTER(13)
}

enum opTrigger vpx_method_Class_20_Data_2F_C_20_Code_20_Export_20_Universals_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Class_20_Data_2F_C_20_Code_20_Export_20_Universals_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"\n/* ATTRIBUTE DATA NOT FOUND! */\n\"",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Class_20_Data_2F_C_20_Code_20_Export_20_Universals(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Class_20_Data_2F_C_20_Code_20_Export_20_Universals_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Class_20_Data_2F_C_20_Code_20_Export_20_Universals_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Class_20_Data_2F_C_20_Code_20_Footer(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"\n\n\"",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Class_20_Data_2F_C_20_Code_20_Header(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(13)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Nat4 VPLC_",ROOT(1));

result = vpx_get(PARAMETERS,kVPXValue_Name,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_method_Mangle_20_Name(PARAMETERS,TERMINAL(3),ROOT(4));

result = vpx_constant(PARAMETERS,"\"_class_load(V_Class tempClass,V_Environment environment);\n\"",ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,3,1,TERMINAL(1),TERMINAL(4),TERMINAL(5),ROOT(6));

result = vpx_constant(PARAMETERS,"\"{\n\tV_Value\ttempAttribute = NULL;\n\n\"",ROOT(7));

result = vpx_constant(PARAMETERS,"\"_class_load(V_Class tempClass,V_Environment environment)\n\"",ROOT(8));

result = vpx_constant(PARAMETERS,"Nat4 VPLC_",ROOT(9));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,3,1,TERMINAL(9),TERMINAL(4),TERMINAL(8),ROOT(10));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(6),TERMINAL(10),ROOT(11));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(11),TERMINAL(7),ROOT(12));

result = kSuccess;

OUTPUT(0,TERMINAL(12))
FOOTERSINGLECASE(13)
}

enum opTrigger vpx_method_Class_20_Data_2F_C_20_Code_20_Super_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Class_20_Data_2F_C_20_Code_20_Super_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(0));
NEXTCASEONSUCCESS

result = vpx_constant(PARAMETERS,"\"\tclass_superClass_to(tempClass,environment,\"\"\"",ROOT(1));

result = vpx_constant(PARAMETERS,"\"\"\");\n\"",ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,3,1,TERMINAL(1),TERMINAL(0),TERMINAL(2),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_Class_20_Data_2F_C_20_Code_20_Super_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Class_20_Data_2F_C_20_Code_20_Super_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"/* NULL SUPER CLASS */\n\"",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Class_20_Data_2F_C_20_Code_20_Super_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Class_20_Data_2F_C_20_Code_20_Super_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Class_20_Data_2F_C_20_Code_20_Super_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Class_20_Data_2F_C_20_Code_20_Super_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Class_20_Data_2F_C_20_Code_20_Super(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Super_20_Class,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_method_Class_20_Data_2F_C_20_Code_20_Super_case_1_local_3(PARAMETERS,TERMINAL(2),ROOT(3));

result = vpx_constant(PARAMETERS,"\"\treturn kNOERROR;\n}\n\n\"",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(3),TERMINAL(4),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Class_20_Data_2F_Clone(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( )",ROOT(1));

result = vpx_call_context_super_method(PARAMETERS,kVPXMethod_Clone,1,1,TERMINAL(0),ROOT(2));

result = vpx_set(PARAMETERS,kVPXValue_Sub_20_Classes,TERMINAL(2),TERMINAL(1),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Class_20_Data_2F_Close_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Class_20_Data_2F_Close_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
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

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Destroy_20_Class,2,0,TERMINAL(3),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Class_20_Data_2F_Close(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(11)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = vpx_get(PARAMETERS,kVPXValue_Record,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Project_20_Data,1,1,TERMINAL(0),ROOT(4));

result = vpx_method_Class_20_Data_2F_Close_case_1_local_5(PARAMETERS,TERMINAL(4),TERMINAL(3));

result = vpx_set(PARAMETERS,kVPXValue_Record,TERMINAL(2),TERMINAL(1),ROOT(5));

result = vpx_constant(PARAMETERS,"NULL",ROOT(6));

result = vpx_constant(PARAMETERS,"( )",ROOT(7));

result = vpx_set(PARAMETERS,kVPXValue_Sub_20_Classes,TERMINAL(5),TERMINAL(7),ROOT(8));

result = vpx_set(PARAMETERS,kVPXValue_Instances,TERMINAL(8),TERMINAL(7),ROOT(9));

result = vpx_set(PARAMETERS,kVPXValue_Super_20_Instance,TERMINAL(9),TERMINAL(6),ROOT(10));

result = vpx_call_context_super_method(PARAMETERS,kVPXMethod_Close,1,0,TERMINAL(10));

result = kSuccess;

FOOTERSINGLECASE(11)
}

enum opTrigger vpx_method_Class_20_Data_2F_Delete_20_Nth_20_Attribute_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Class_20_Data_2F_Delete_20_Nth_20_Attribute_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(11)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Attribute Data",ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(0),TERMINAL(2),ROOT(3));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_nth,2,1,TERMINAL(5),TERMINAL(1),ROOT(6));

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(6),ROOT(7),ROOT(8));

result = vpx_constant(PARAMETERS,"FALSE",ROOT(9));

result = vpx_set(PARAMETERS,kVPXValue_Inherited,TERMINAL(8),TERMINAL(9),ROOT(10));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Remove_20_Self,1,0,TERMINAL(10));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Send_20_Refresh,1,0,TERMINAL(4));

result = kSuccess;

FOOTER(11)
}

enum opTrigger vpx_method_Class_20_Data_2F_Delete_20_Nth_20_Attribute_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Class_20_Data_2F_Delete_20_Nth_20_Attribute_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Class_20_Data_2F_Delete_20_Nth_20_Attribute(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Class_20_Data_2F_Delete_20_Nth_20_Attribute_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Class_20_Data_2F_Delete_20_Nth_20_Attribute_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Class_20_Data_2F_Export_20_Text(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(10)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_C_20_Code_20_Header,1,1,TERMINAL(0),ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_C_20_Code_20_Export_20_Attributes,1,1,TERMINAL(0),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(1),TERMINAL(2),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_C_20_Code_20_Super,1,1,TERMINAL(0),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(3),TERMINAL(4),ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_C_20_Code_20_Export_20_Universals,1,1,TERMINAL(0),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(5),TERMINAL(6),ROOT(7));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_C_20_Code_20_Footer,1,1,TERMINAL(0),ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(7),TERMINAL(8),ROOT(9));

result = kSuccess;

OUTPUT(0,TERMINAL(9))
FOOTERSINGLECASE(10)
}

enum opTrigger vpx_method_Class_20_Data_2F_Full_20_Persistent_20_Name(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Name,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Name,TERMINAL(1),ROOT(4),ROOT(5));

result = vpx_constant(PARAMETERS,"/",ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,3,1,TERMINAL(3),TERMINAL(6),TERMINAL(5),ROOT(7));

result = kSuccess;

OUTPUT(0,TERMINAL(7))
FOOTERSINGLECASE(8)
}

enum opTrigger vpx_method_Class_20_Data_2F_Full_20_Universal_20_Name(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Name,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Name,TERMINAL(1),ROOT(4),ROOT(5));

result = vpx_constant(PARAMETERS,"/",ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,3,1,TERMINAL(3),TERMINAL(6),TERMINAL(5),ROOT(7));

result = kSuccess;

OUTPUT(0,TERMINAL(7))
FOOTERSINGLECASE(8)
}

enum opTrigger vpx_method_Class_20_Data_2F_Get_20_Attributes_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Class_20_Data_2F_Get_20_Attributes_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Class_20_Data_2F_Get_20_Attributes(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Attribute Data",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(2),ROOT(3),ROOT(4));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(4))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Class_20_Data_2F_Get_20_Attributes_case_1_local_5(PARAMETERS,LIST(4),ROOT(5));
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

enum opTrigger vpx_method_Class_20_Data_2F_Get_20_Class_20_Attributes_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Class_20_Data_2F_Get_20_Class_20_Attributes_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Class_20_Data_2F_Get_20_Class_20_Attributes_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Class_20_Data_2F_Get_20_Class_20_Attributes_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Class Attribute Data",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));
NEXTCASEONFAILURE

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
NEXTCASEONSUCCESS

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(2),ROOT(3),ROOT(4));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(4))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Class_20_Data_2F_Get_20_Class_20_Attributes_case_1_local_6(PARAMETERS,LIST(4),ROOT(5));
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

enum opTrigger vpx_method_Class_20_Data_2F_Get_20_Class_20_Attributes_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Class_20_Data_2F_Get_20_Class_20_Attributes_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( )",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Class_20_Data_2F_Get_20_Class_20_Attributes(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Class_20_Data_2F_Get_20_Class_20_Attributes_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Class_20_Data_2F_Get_20_Class_20_Attributes_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Class_20_Data_2F_Get_20_Value(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Super_20_Class,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Class_20_Data_2F_Initialize_20_Item_20_Data(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADERWITHNONE(13)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_List_20_Data,1,1,NONE,ROOT(2));

result = vpx_constant(PARAMETERS,"\"Universal Data\"",ROOT(3));

result = vpx_set(PARAMETERS,kVPXValue_Helper_20_Name,TERMINAL(2),TERMINAL(3),ROOT(4));

result = vpx_instantiate(PARAMETERS,kVPXClass_List_20_Data,1,1,NONE,ROOT(5));

result = vpx_constant(PARAMETERS,"\"Attribute Data\"",ROOT(6));

result = vpx_set(PARAMETERS,kVPXValue_Helper_20_Name,TERMINAL(5),TERMINAL(6),ROOT(7));

result = vpx_constant(PARAMETERS,"\"Class Attribute Data\"",ROOT(8));

result = vpx_instantiate(PARAMETERS,kVPXClass_List_20_Data,1,1,NONE,ROOT(9));

result = vpx_set(PARAMETERS,kVPXValue_Helper_20_Name,TERMINAL(9),TERMINAL(8),ROOT(10));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,3,1,TERMINAL(7),TERMINAL(4),TERMINAL(10),ROOT(11));

result = vpx_set(PARAMETERS,kVPXValue_Lists,TERMINAL(1),TERMINAL(11),ROOT(12));

result = kSuccess;

FOOTERSINGLECASEWITHNONE(13)
}

enum opTrigger vpx_method_Class_20_Data_2F_Insert_20_Attribute_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Class_20_Data_2F_Insert_20_Attribute_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Name,TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_set(PARAMETERS,kVPXValue_Name,TERMINAL(0),TERMINAL(3),ROOT(4));

result = vpx_constant(PARAMETERS,"TRUE",ROOT(5));

result = vpx_set(PARAMETERS,kVPXValue_Inherited,TERMINAL(4),TERMINAL(5),ROOT(6));

result = kSuccess;

FOOTERSINGLECASE(7)
}

enum opTrigger vpx_method_Class_20_Data_2F_Insert_20_Attribute_case_1_local_10_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Class_20_Data_2F_Insert_20_Attribute_case_1_local_10_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP__28_length_29_,1,1,TERMINAL(0),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_plus_2D_one,1,1,TERMINAL(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_equals,2,0,TERMINAL(4),TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_attach_2D_r,2,1,TERMINAL(0),TERMINAL(1),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTER(6)
}

enum opTrigger vpx_method_Class_20_Data_2F_Insert_20_Attribute_case_1_local_10_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Class_20_Data_2F_Insert_20_Attribute_case_1_local_10_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP__28_length_29_,1,1,TERMINAL(0),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_gte,2,0,TERMINAL(3),TERMINAL(2));
FAILONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_insert_2D_nth,3,1,TERMINAL(0),TERMINAL(1),TERMINAL(2),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Class_20_Data_2F_Insert_20_Attribute_case_1_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Class_20_Data_2F_Insert_20_Attribute_case_1_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Class_20_Data_2F_Insert_20_Attribute_case_1_local_10_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
vpx_method_Class_20_Data_2F_Insert_20_Attribute_case_1_local_10_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0);
return outcome;
}

enum opTrigger vpx_method_Class_20_Data_2F_Insert_20_Attribute_case_1_local_13(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Class_20_Data_2F_Insert_20_Attribute_case_1_local_13(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Value_20_Address,1,1,TERMINAL(2),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Project_20_Data,1,1,TERMINAL(0),ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(4),ROOT(5),ROOT(6));

result = vpx_constant(PARAMETERS,"value",ROOT(7));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Object_20_To_20_Value,3,1,TERMINAL(6),TERMINAL(3),TERMINAL(7),ROOT(8));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Direct_20_Value,2,0,TERMINAL(1),TERMINAL(8));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Make_20_Dirty,1,0,TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(9)
}

enum opTrigger vpx_method_Class_20_Data_2F_Insert_20_Attribute_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Class_20_Data_2F_Insert_20_Attribute_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADERWITHNONE(14)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_Attribute_20_Data,1,1,NONE,ROOT(3));

result = vpx_method_Class_20_Data_2F_Insert_20_Attribute_case_1_local_3(PARAMETERS,TERMINAL(3),TERMINAL(1));

result = vpx_instantiate(PARAMETERS,kVPXClass_Item_20_Data,1,1,NONE,ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Install_20_Helper,2,0,TERMINAL(4),TERMINAL(3));

result = vpx_set(PARAMETERS,kVPXValue_Owner,TERMINAL(3),TERMINAL(4),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(5),ROOT(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(0),TERMINAL(6),ROOT(7));

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(7),ROOT(8),ROOT(9));

result = vpx_method_Class_20_Data_2F_Insert_20_Attribute_case_1_local_10(PARAMETERS,TERMINAL(9),TERMINAL(4),TERMINAL(2),ROOT(10));
NEXTCASEONFAILURE

result = vpx_set(PARAMETERS,kVPXValue_List,TERMINAL(8),TERMINAL(10),ROOT(11));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open,2,0,TERMINAL(4),TERMINAL(11));

result = vpx_method_Class_20_Data_2F_Insert_20_Attribute_case_1_local_13(PARAMETERS,TERMINAL(0),TERMINAL(3),TERMINAL(1));

result = vpx_get(PARAMETERS,kVPXValue_Sub_20_Classes,TERMINAL(0),ROOT(12),ROOT(13));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(13))) ){
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Insert_20_Attribute,3,0,LIST(13),TERMINAL(1),TERMINAL(2));
REPEATFINISH
} else {
}

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Update_20_Editors,1,0,TERMINAL(12));

result = kSuccess;

FOOTERWITHNONE(14)
}

enum opTrigger vpx_method_Class_20_Data_2F_Insert_20_Attribute_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Class_20_Data_2F_Insert_20_Attribute_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_Class_20_Data_2F_Insert_20_Attribute(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Class_20_Data_2F_Insert_20_Attribute_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2))
vpx_method_Class_20_Data_2F_Insert_20_Attribute_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2);
return outcome;
}

enum opTrigger vpx_method_Class_20_Data_2F_Integrate(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(12)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_detach_2D_l,1,2,TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_detach_2D_l,1,2,TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_set(PARAMETERS,kVPXValue_Owner,TERMINAL(0),TERMINAL(2),ROOT(6));

result = vpx_set(PARAMETERS,kVPXValue_Super_20_Instance,TERMINAL(6),TERMINAL(4),ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,2,TERMINAL(5),ROOT(8),ROOT(9));

result = vpx_set(PARAMETERS,kVPXValue_Sub_20_Classes,TERMINAL(7),TERMINAL(8),ROOT(10));

result = vpx_set(PARAMETERS,kVPXValue_Instances,TERMINAL(10),TERMINAL(9),ROOT(11));

result = kSuccess;

FOOTERSINGLECASE(12)
}

enum opTrigger vpx_method_Class_20_Data_2F_Isolate_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Class_20_Data_2F_Isolate_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"( )",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Class_20_Data_2F_Isolate_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Class_20_Data_2F_Isolate_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(1)
}

enum opTrigger vpx_method_Class_20_Data_2F_Isolate_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Class_20_Data_2F_Isolate_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Class_20_Data_2F_Isolate_case_1_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Class_20_Data_2F_Isolate_case_1_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Class_20_Data_2F_Isolate(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(21)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Instances,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_Sub_20_Classes,TERMINAL(1),ROOT(3),ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_Super_20_Instance,TERMINAL(3),ROOT(5),ROOT(6));

result = vpx_method_Class_20_Data_2F_Isolate_case_1_local_5(PARAMETERS,TERMINAL(2),ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(4),TERMINAL(7),ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP_attach_2D_l,2,1,TERMINAL(6),TERMINAL(8),ROOT(9));

result = vpx_constant(PARAMETERS,"( )",ROOT(10));

result = vpx_constant(PARAMETERS,"( )",ROOT(11));

result = vpx_get(PARAMETERS,kVPXValue_Owner,TERMINAL(5),ROOT(12),ROOT(13));

result = vpx_constant(PARAMETERS,"NULL",ROOT(14));

result = vpx_set(PARAMETERS,kVPXValue_Owner,TERMINAL(12),TERMINAL(14),ROOT(15));

result = vpx_set(PARAMETERS,kVPXValue_Instances,TERMINAL(15),TERMINAL(11),ROOT(16));

result = vpx_set(PARAMETERS,kVPXValue_Sub_20_Classes,TERMINAL(16),TERMINAL(10),ROOT(17));

result = vpx_constant(PARAMETERS,"NULL",ROOT(18));

result = vpx_set(PARAMETERS,kVPXValue_Super_20_Instance,TERMINAL(17),TERMINAL(18),ROOT(19));

result = vpx_call_primitive(PARAMETERS,VPLP_attach_2D_l,2,1,TERMINAL(13),TERMINAL(9),ROOT(20));

result = kSuccess;

OUTPUT(0,TERMINAL(19))
OUTPUT(1,TERMINAL(20))
FOOTERSINGLECASE(21)
}

enum opTrigger vpx_method_Class_20_Data_2F_Open_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Class_20_Data_2F_Open_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(13)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Project_20_Data,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
FAILONSUCCESS

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
FAILONSUCCESS

result = vpx_get(PARAMETERS,kVPXValue_Name,TERMINAL(0),ROOT(4),ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Create_20_Class,2,1,TERMINAL(3),TERMINAL(5),ROOT(6));
NEXTCASEONFAILURE

result = vpx_match(PARAMETERS,"NULL",TERMINAL(6));
FAILONSUCCESS

result = vpx_set(PARAMETERS,kVPXValue_Record,TERMINAL(4),TERMINAL(6),ROOT(7));

result = vpx_constant(PARAMETERS,"( )",ROOT(8));

result = vpx_set(PARAMETERS,kVPXValue_Instances,TERMINAL(7),TERMINAL(8),ROOT(9));

result = vpx_constant(PARAMETERS,"NULL",ROOT(10));

result = vpx_set(PARAMETERS,kVPXValue_Value,TERMINAL(9),TERMINAL(10),ROOT(11));

result = vpx_set(PARAMETERS,kVPXValue_Constructor,TERMINAL(11),TERMINAL(10),ROOT(12));

result = kSuccess;
FINISHONSUCCESS

FOOTER(13)
}

enum opTrigger vpx_method_Class_20_Data_2F_Open_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Class_20_Data_2F_Open_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
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

enum opTrigger vpx_method_Class_20_Data_2F_Open_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Class_20_Data_2F_Open_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Class_20_Data_2F_Open_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Class_20_Data_2F_Open_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Class_20_Data_2F_Open_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Class_20_Data_2F_Open_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_context_super_method(PARAMETERS,kVPXMethod_Open,2,0,TERMINAL(0),TERMINAL(1));

REPEATBEGIN
result = vpx_method_Class_20_Data_2F_Open_case_1_local_3(PARAMETERS,TERMINAL(0));
NEXTCASEONFAILURE
REPEATFINISH

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Class_20_Data_2F_Open_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Class_20_Data_2F_Open_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Class record create failure!",ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_show,1,0,TERMINAL(2));

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_Class_20_Data_2F_Open(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Class_20_Data_2F_Open_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Class_20_Data_2F_Open_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Class_20_Data_2F_Remove_20_Self_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Class_20_Data_2F_Remove_20_Self_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Methods,1,1,TERMINAL(0),ROOT(1));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(1))) ){
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Remove_20_Self,1,0,LIST(1));
REPEATFINISH
} else {
}

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Class_20_Data_2F_Remove_20_Self_case_1_local_3_case_1_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Class_20_Data_2F_Remove_20_Self_case_1_local_3_case_1_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(2));

result = vpx_set(PARAMETERS,kVPXValue_Super_20_Class,TERMINAL(0),TERMINAL(2),ROOT(3));

result = vpx_set(PARAMETERS,kVPXValue_Super_20_Instance,TERMINAL(3),TERMINAL(2),ROOT(4));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(1))) ){
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Delete_20_Nth_20_Attribute,2,0,TERMINAL(4),LIST(1));
REPEATFINISH
} else {
}

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Class_20_Data_2F_Remove_20_Self_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Class_20_Data_2F_Remove_20_Self_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(10)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Sub_20_Classes,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_constant(PARAMETERS,"Attribute Data",ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(0),TERMINAL(3),ROOT(4));
TERMINATEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(4),ROOT(5),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP__28_length_29_,1,1,TERMINAL(6),ROOT(7));

result = vpx_constant(PARAMETERS,"-1",ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP_make_2D_list,3,1,TERMINAL(7),TERMINAL(7),TERMINAL(8),ROOT(9));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(2))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Class_20_Data_2F_Remove_20_Self_case_1_local_3_case_1_local_9(PARAMETERS,LIST(2),TERMINAL(9));
REPEATFINISH
} else {
}

result = kSuccess;

FOOTERSINGLECASE(10)
}

enum opTrigger vpx_method_Class_20_Data_2F_Remove_20_Self_case_1_local_4_case_1_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Class_20_Data_2F_Remove_20_Self_case_1_local_4_case_1_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(2));

result = vpx_set(PARAMETERS,kVPXValue_Super_20_Class,TERMINAL(0),TERMINAL(2),ROOT(3));

result = vpx_set(PARAMETERS,kVPXValue_Super_20_Instance,TERMINAL(3),TERMINAL(2),ROOT(4));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(1))) ){
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Delete_20_Nth_20_Class_20_Attribute,2,0,TERMINAL(4),LIST(1));
REPEATFINISH
} else {
}

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Class_20_Data_2F_Remove_20_Self_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Class_20_Data_2F_Remove_20_Self_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(10)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Sub_20_Classes,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_constant(PARAMETERS,"Class Attribute Data",ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(0),TERMINAL(3),ROOT(4));
TERMINATEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(4),ROOT(5),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP__28_length_29_,1,1,TERMINAL(6),ROOT(7));

result = vpx_constant(PARAMETERS,"-1",ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP_make_2D_list,3,1,TERMINAL(7),TERMINAL(7),TERMINAL(8),ROOT(9));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(2))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Class_20_Data_2F_Remove_20_Self_case_1_local_4_case_1_local_9(PARAMETERS,LIST(2),TERMINAL(9));
REPEATFINISH
} else {
}

result = kSuccess;

FOOTERSINGLECASE(10)
}

enum opTrigger vpx_method_Class_20_Data_2F_Remove_20_Self_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Class_20_Data_2F_Remove_20_Self_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(7)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = vpx_set(PARAMETERS,kVPXValue_Super_20_Class,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_Super_20_Instance,TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_constant(PARAMETERS,"NULL",ROOT(5));

result = vpx_set(PARAMETERS,kVPXValue_Super_20_Instance,TERMINAL(3),TERMINAL(5),ROOT(6));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(4));
TERMINATEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Remove_20_Sub_20_Class,2,0,TERMINAL(4),TERMINAL(6));

result = kSuccess;

FOOTERSINGLECASE(7)
}

enum opTrigger vpx_method_Class_20_Data_2F_Remove_20_Self_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Class_20_Data_2F_Remove_20_Self_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Class_20_Data_2F_Remove_20_Self_case_1_local_2(PARAMETERS,TERMINAL(0));

result = vpx_method_Class_20_Data_2F_Remove_20_Self_case_1_local_3(PARAMETERS,TERMINAL(0));

result = vpx_method_Class_20_Data_2F_Remove_20_Self_case_1_local_4(PARAMETERS,TERMINAL(0));

result = vpx_get(PARAMETERS,kVPXValue_Sub_20_Classes,TERMINAL(0),ROOT(1),ROOT(2));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(2))) ){
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Remove_20_Sub_20_Class,2,0,TERMINAL(1),LIST(2));
REPEATFINISH
} else {
}

result = vpx_method_Class_20_Data_2F_Remove_20_Self_case_1_local_7(PARAMETERS,TERMINAL(1));

result = vpx_call_context_super_method(PARAMETERS,kVPXMethod_Remove_20_Self,1,0,TERMINAL(1));

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_Class_20_Data_2F_Remove_20_Self_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Class_20_Data_2F_Remove_20_Self_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Can\'t delete! Instance exists!",ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_show,1,0,TERMINAL(1));

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Class_20_Data_2F_Remove_20_Self(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Class_20_Data_2F_Remove_20_Self_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Class_20_Data_2F_Remove_20_Self_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Class_20_Data_2F_Remove_20_Sub_20_Class_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Class_20_Data_2F_Remove_20_Sub_20_Class_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(11)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Sub_20_Classes,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP__28_in_29_,2,1,TERMINAL(3),TERMINAL(1),ROOT(4));

result = vpx_match(PARAMETERS,"0",TERMINAL(4));
NEXTCASEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_detach_2D_nth,2,2,TERMINAL(3),TERMINAL(4),ROOT(5),ROOT(6));

result = vpx_set(PARAMETERS,kVPXValue_Sub_20_Classes,TERMINAL(2),TERMINAL(5),ROOT(7));

result = vpx_constant(PARAMETERS,"NULL",ROOT(8));

result = vpx_set(PARAMETERS,kVPXValue_Super_20_Instance,TERMINAL(6),TERMINAL(8),ROOT(9));

result = vpx_set(PARAMETERS,kVPXValue_Super_20_Class,TERMINAL(9),TERMINAL(8),ROOT(10));

result = kSuccess;

FOOTER(11)
}

enum opTrigger vpx_method_Class_20_Data_2F_Remove_20_Sub_20_Class_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Class_20_Data_2F_Remove_20_Sub_20_Class_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Class_20_Data_2F_Remove_20_Sub_20_Class(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Class_20_Data_2F_Remove_20_Sub_20_Class_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Class_20_Data_2F_Remove_20_Sub_20_Class_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Class_20_Data_2F_Resolve_20_Class_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Class_20_Data_2F_Resolve_20_Class_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"0",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Super_20_Class,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_constant(PARAMETERS,"Super Class not found:",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(4),TERMINAL(3),ROOT(5));

result = vpx_constant(PARAMETERS,"Warning",ROOT(6));

result = vpx_constant(PARAMETERS,"( )",ROOT(7));

result = vpx_method_Project_20_Message_2F_Create(PARAMETERS,TERMINAL(5),TERMINAL(6),TERMINAL(7),ROOT(8));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Display,1,0,TERMINAL(8));

result = kSuccess;
FAILONSUCCESS

FOOTER(9)
}

enum opTrigger vpx_method_Class_20_Data_2F_Resolve_20_Class_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Class_20_Data_2F_Resolve_20_Class_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Class_20_Data_2F_Resolve_20_Class_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Class_20_Data_2F_Resolve_20_Class_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Class_20_Data_2F_Resolve_20_Class_case_1_local_6_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Class_20_Data_2F_Resolve_20_Class_case_1_local_6_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Class_20_Data_2F_Resolve_20_Class_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Class_20_Data_2F_Resolve_20_Class_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADERWITHNONE(7)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Super_20_Class,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_constant(PARAMETERS,"Name",ROOT(4));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
NEXTCASEONSUCCESS

result = vpx_method_Find_20_Instance(PARAMETERS,TERMINAL(1),TERMINAL(4),TERMINAL(3),ROOT(5),ROOT(6));

result = vpx_method_Class_20_Data_2F_Resolve_20_Class_case_1_local_6(PARAMETERS,TERMINAL(0),TERMINAL(5));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Add_20_Sub_20_Class,2,0,TERMINAL(6),TERMINAL(2));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,NONE)
OUTPUT(1,TERMINAL(1))
FOOTERWITHNONE(7)
}

enum opTrigger vpx_method_Class_20_Data_2F_Resolve_20_Class_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Class_20_Data_2F_Resolve_20_Class_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Super_20_Class,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
NEXTCASEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Create_20_Super_20_Class,2,1,TERMINAL(2),TERMINAL(3),ROOT(4));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_attach_2D_r,2,1,TERMINAL(1),TERMINAL(4),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(0))
OUTPUT(1,TERMINAL(5))
FOOTER(6)
}

enum opTrigger vpx_method_Class_20_Data_2F_Resolve_20_Class_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Class_20_Data_2F_Resolve_20_Class_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADERWITHNONE(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

OUTPUT(0,NONE)
OUTPUT(1,TERMINAL(1))
FOOTERWITHNONE(2)
}

enum opTrigger vpx_method_Class_20_Data_2F_Resolve_20_Class(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Class_20_Data_2F_Resolve_20_Class_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1))
if(vpx_method_Class_20_Data_2F_Resolve_20_Class_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1))
vpx_method_Class_20_Data_2F_Resolve_20_Class_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1);
return outcome;
}

enum opTrigger vpx_method_Class_20_Data_2F_Set_20_Name_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Class_20_Data_2F_Set_20_Name_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Name,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Project_20_Data,1,1,TERMINAL(2),ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(4),ROOT(5),ROOT(6));

result = vpx_constant(PARAMETERS,"NULL",ROOT(7));

result = vpx_constant(PARAMETERS,"class",ROOT(8));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Rename_20_Element,5,0,TERMINAL(6),TERMINAL(7),TERMINAL(3),TERMINAL(1),TERMINAL(8));
FAILONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Mark_20_Instances,1,0,TERMINAL(5));

result = kSuccess;

FOOTERSINGLECASE(9)
}

enum opTrigger vpx_method_Class_20_Data_2F_Set_20_Name_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Class_20_Data_2F_Set_20_Name_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Super_20_Class,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Update_20_Record,1,0,TERMINAL(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Update_20_Editors,1,0,TERMINAL(2));

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_Class_20_Data_2F_Set_20_Name_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Class_20_Data_2F_Set_20_Name_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Class_20_Data_2F_Set_20_Name_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Class_20_Data_2F_Set_20_Name_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Class_20_Data_2F_Set_20_Name_case_1_local_6_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Class_20_Data_2F_Set_20_Name_case_1_local_6_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Class_20_Data_2F_Set_20_Name_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Class_20_Data_2F_Set_20_Name_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Formalize_20_Data_20_Name(PARAMETERS,TERMINAL(0),TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_method_Class_20_Data_2F_Set_20_Name_case_1_local_3(PARAMETERS,TERMINAL(0),TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_call_context_super_method(PARAMETERS,kVPXMethod_Set_20_Name,2,0,TERMINAL(0),TERMINAL(2));

result = vpx_get(PARAMETERS,kVPXValue_Sub_20_Classes,TERMINAL(0),ROOT(4),ROOT(5));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(5))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Class_20_Data_2F_Set_20_Name_case_1_local_6(PARAMETERS,LIST(5),TERMINAL(2));
REPEATFINISH
} else {
}

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Update_20_Editors,1,0,TERMINAL(4));

result = kSuccess;

FOOTER(6)
}

enum opTrigger vpx_method_Class_20_Data_2F_Set_20_Name_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Class_20_Data_2F_Set_20_Name_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Name,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_method_Formalize_20_Data_20_Name(PARAMETERS,TERMINAL(0),TERMINAL(1),ROOT(4),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP__3D_,2,0,TERMINAL(3),TERMINAL(4));
NEXTCASEONFAILURE

result = kSuccess;

FOOTER(6)
}

enum opTrigger vpx_method_Class_20_Data_2F_Set_20_Name_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Class_20_Data_2F_Set_20_Name_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
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

enum opTrigger vpx_method_Class_20_Data_2F_Set_20_Name(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Class_20_Data_2F_Set_20_Name_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
if(vpx_method_Class_20_Data_2F_Set_20_Name_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Class_20_Data_2F_Set_20_Name_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Class_20_Data_2F_Set_20_Super_20_Class(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Super_20_Class,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Class_20_Data_2F_Update_20_Attribute_20_Name_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Class_20_Data_2F_Update_20_Attribute_20_Name_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Sub_20_Classes,TERMINAL(0),ROOT(2),ROOT(3));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(3))) ){
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Test_20_Attribute_20_Name,2,0,LIST(3),TERMINAL(1));
FAILONFAILURE
REPEATFINISH
} else {
}

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Class_20_Data_2F_Update_20_Attribute_20_Name_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Class_20_Data_2F_Update_20_Attribute_20_Name_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Record,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Project_20_Data,1,1,TERMINAL(3),ROOT(5));

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(5),ROOT(6),ROOT(7));

result = vpx_constant(PARAMETERS,"attribute",ROOT(8));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Rename_20_Element,5,0,TERMINAL(7),TERMINAL(4),TERMINAL(2),TERMINAL(1),TERMINAL(8));
FAILONFAILURE

result = kSuccess;

FOOTERSINGLECASE(9)
}

enum opTrigger vpx_method_Class_20_Data_2F_Update_20_Attribute_20_Name_case_1_local_13_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Class_20_Data_2F_Update_20_Attribute_20_Name_case_1_local_13_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Send_20_Refresh,1,0,TERMINAL(0));

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_Class_20_Data_2F_Update_20_Attribute_20_Name_case_1_local_13_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Class_20_Data_2F_Update_20_Attribute_20_Name_case_1_local_13_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(0));
TERMINATEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Update_20_Data,1,0,TERMINAL(0));

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_Class_20_Data_2F_Update_20_Attribute_20_Name_case_1_local_13(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Class_20_Data_2F_Update_20_Attribute_20_Name_case_1_local_13(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Class_20_Data_2F_Update_20_Attribute_20_Name_case_1_local_13_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Class_20_Data_2F_Update_20_Attribute_20_Name_case_1_local_13_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Class_20_Data_2F_Update_20_Attribute_20_Name_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Class_20_Data_2F_Update_20_Attribute_20_Name_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(16)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_method_Class_20_Data_2F_Update_20_Attribute_20_Name_case_1_local_2(PARAMETERS,TERMINAL(0),TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_method_Class_20_Data_2F_Update_20_Attribute_20_Name_case_1_local_3(PARAMETERS,TERMINAL(0),TERMINAL(1),TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"Attribute Data",ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(0),TERMINAL(3),ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(4),ROOT(5),ROOT(6));

result = vpx_constant(PARAMETERS,"Name",ROOT(7));

result = vpx_method_Find_20_Instance(PARAMETERS,TERMINAL(6),TERMINAL(7),TERMINAL(2),ROOT(8),ROOT(9));

result = vpx_match(PARAMETERS,"0",TERMINAL(8));
NEXTCASEONSUCCESS

result = vpx_set(PARAMETERS,kVPXValue_Name,TERMINAL(9),TERMINAL(1),ROOT(10));

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(10),ROOT(11),ROOT(12));

result = vpx_set(PARAMETERS,kVPXValue_Name,TERMINAL(12),TERMINAL(1),ROOT(13));

result = vpx_method_Class_20_Data_2F_Update_20_Attribute_20_Name_case_1_local_13(PARAMETERS,TERMINAL(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Send_20_Refresh,1,0,TERMINAL(10));

result = vpx_get(PARAMETERS,kVPXValue_Sub_20_Classes,TERMINAL(0),ROOT(14),ROOT(15));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(15))) ){
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Update_20_Attribute_20_Name,3,0,LIST(15),TERMINAL(1),TERMINAL(2));
REPEATFINISH
} else {
}

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Update_20_Editors,1,0,TERMINAL(14));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Make_20_Dirty,1,0,TERMINAL(14));

result = kSuccess;

FOOTER(16)
}

enum opTrigger vpx_method_Class_20_Data_2F_Update_20_Attribute_20_Name_case_2_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Class_20_Data_2F_Update_20_Attribute_20_Name_case_2_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Class_20_Data_2F_Update_20_Attribute_20_Name_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Class_20_Data_2F_Update_20_Attribute_20_Name_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_method_Class_20_Data_2F_Update_20_Attribute_20_Name_case_2_local_2(PARAMETERS,TERMINAL(0),TERMINAL(1));

result = kSuccess;
FAILONSUCCESS

FOOTER(3)
}

enum opTrigger vpx_method_Class_20_Data_2F_Update_20_Attribute_20_Name_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Class_20_Data_2F_Update_20_Attribute_20_Name_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Duplicate attribute name!",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_show,1,0,TERMINAL(3));
FAILONSUCCESS

result = kSuccess;

FOOTER(4)
}

enum opTrigger vpx_method_Class_20_Data_2F_Update_20_Attribute_20_Name(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Class_20_Data_2F_Update_20_Attribute_20_Name_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2))
if(vpx_method_Class_20_Data_2F_Update_20_Attribute_20_Name_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2))
vpx_method_Class_20_Data_2F_Update_20_Attribute_20_Name_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2);
return outcome;
}

enum opTrigger vpx_method_Class_20_Data_2F_Substitute_20_Attribute_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Class_20_Data_2F_Substitute_20_Attribute_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(15)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_detach_2D_nth,2,2,TERMINAL(4),TERMINAL(1),ROOT(5),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP_insert_2D_nth,3,1,TERMINAL(5),TERMINAL(6),TERMINAL(2),ROOT(7));

result = vpx_set(PARAMETERS,kVPXValue_List,TERMINAL(3),TERMINAL(7),ROOT(8));

result = vpx_method_Attribute_20_Data_2F_Order_20_Records(PARAMETERS,TERMINAL(8),TERMINAL(7));

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(8),ROOT(9),ROOT(10));

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(10),ROOT(11),ROOT(12));

result = vpx_get(PARAMETERS,kVPXValue_Sub_20_Classes,TERMINAL(12),ROOT(13),ROOT(14));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(14))) ){
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Substitute_20_Attribute,3,0,LIST(14),TERMINAL(1),TERMINAL(2));
REPEATFINISH
} else {
}

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Update_20_Editors,1,0,TERMINAL(13));

result = kSuccess;

FOOTER(15)
}

enum opTrigger vpx_method_Class_20_Data_2F_Substitute_20_Attribute_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Class_20_Data_2F_Substitute_20_Attribute_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_Class_20_Data_2F_Substitute_20_Attribute_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Class_20_Data_2F_Substitute_20_Attribute_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Class_20_Data_2F_Substitute_20_Attribute_case_1_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2))
vpx_method_Class_20_Data_2F_Substitute_20_Attribute_case_1_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2);
return outcome;
}

enum opTrigger vpx_method_Class_20_Data_2F_Substitute_20_Attribute(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Attribute Data",ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(0),TERMINAL(3),ROOT(4));

result = vpx_method_Class_20_Data_2F_Substitute_20_Attribute_case_1_local_4(PARAMETERS,TERMINAL(4),TERMINAL(1),TERMINAL(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Send_20_Refresh,1,0,TERMINAL(4));

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Class_20_Data_2F_Update_20_Class_20_Attribute_20_Name_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Class_20_Data_2F_Update_20_Class_20_Attribute_20_Name_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Sub_20_Classes,TERMINAL(0),ROOT(2),ROOT(3));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(3))) ){
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Test_20_Attribute_20_Name,2,0,LIST(3),TERMINAL(1));
FAILONFAILURE
REPEATFINISH
} else {
}

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Class_20_Data_2F_Update_20_Class_20_Attribute_20_Name_case_1_local_3_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Class_20_Data_2F_Update_20_Class_20_Attribute_20_Name_case_1_local_3_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Name,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_constant(PARAMETERS,"\"/\"",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,3,1,TERMINAL(3),TERMINAL(4),TERMINAL(1),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Class_20_Data_2F_Update_20_Class_20_Attribute_20_Name_case_1_local_3_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Class_20_Data_2F_Update_20_Class_20_Attribute_20_Name_case_1_local_3_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Name,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_constant(PARAMETERS,"\"/\"",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,3,1,TERMINAL(3),TERMINAL(4),TERMINAL(1),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Class_20_Data_2F_Update_20_Class_20_Attribute_20_Name_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Class_20_Data_2F_Update_20_Class_20_Attribute_20_Name_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(10)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Project_20_Data,1,1,TERMINAL(0),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_method_Class_20_Data_2F_Update_20_Class_20_Attribute_20_Name_case_1_local_3_case_1_local_4(PARAMETERS,TERMINAL(0),TERMINAL(2),ROOT(6));

result = vpx_method_Class_20_Data_2F_Update_20_Class_20_Attribute_20_Name_case_1_local_3_case_1_local_5(PARAMETERS,TERMINAL(0),TERMINAL(1),ROOT(7));

result = vpx_constant(PARAMETERS,"NULL",ROOT(8));

result = vpx_constant(PARAMETERS,"persistent",ROOT(9));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Rename_20_Element,5,0,TERMINAL(5),TERMINAL(8),TERMINAL(6),TERMINAL(7),TERMINAL(9));
FAILONFAILURE

result = kSuccess;

FOOTERSINGLECASE(10)
}

enum opTrigger vpx_method_Class_20_Data_2F_Update_20_Class_20_Attribute_20_Name_case_1_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Class_20_Data_2F_Update_20_Class_20_Attribute_20_Name_case_1_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
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

enum opTrigger vpx_method_Class_20_Data_2F_Update_20_Class_20_Attribute_20_Name_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Class_20_Data_2F_Update_20_Class_20_Attribute_20_Name_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(17)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_method_Class_20_Data_2F_Update_20_Class_20_Attribute_20_Name_case_1_local_2(PARAMETERS,TERMINAL(0),TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_method_Class_20_Data_2F_Update_20_Class_20_Attribute_20_Name_case_1_local_3(PARAMETERS,TERMINAL(0),TERMINAL(1),TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"Class Attribute Data",ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(0),TERMINAL(3),ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(4),ROOT(5),ROOT(6));

result = vpx_constant(PARAMETERS,"Name",ROOT(7));

result = vpx_method_Find_20_Instance(PARAMETERS,TERMINAL(6),TERMINAL(7),TERMINAL(2),ROOT(8),ROOT(9));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Editor,1,1,TERMINAL(5),ROOT(10));

result = vpx_method_Class_20_Data_2F_Update_20_Class_20_Attribute_20_Name_case_1_local_10(PARAMETERS,TERMINAL(10));

result = vpx_set(PARAMETERS,kVPXValue_Name,TERMINAL(9),TERMINAL(1),ROOT(11));

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(11),ROOT(12),ROOT(13));

result = vpx_set(PARAMETERS,kVPXValue_Name,TERMINAL(13),TERMINAL(1),ROOT(14));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Send_20_Refresh,1,0,TERMINAL(5));

result = vpx_get(PARAMETERS,kVPXValue_Sub_20_Classes,TERMINAL(0),ROOT(15),ROOT(16));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(16))) ){
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Update_20_Class_20_Attribute_20_Name,3,0,LIST(16),TERMINAL(1),TERMINAL(2));
REPEATFINISH
} else {
}

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Update_20_Editors,1,0,TERMINAL(15));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Make_20_Dirty,1,0,TERMINAL(15));

result = kSuccess;

FOOTER(17)
}

enum opTrigger vpx_method_Class_20_Data_2F_Update_20_Class_20_Attribute_20_Name_case_2_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Class_20_Data_2F_Update_20_Class_20_Attribute_20_Name_case_2_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Class_20_Data_2F_Update_20_Class_20_Attribute_20_Name_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Class_20_Data_2F_Update_20_Class_20_Attribute_20_Name_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_method_Class_20_Data_2F_Update_20_Class_20_Attribute_20_Name_case_2_local_2(PARAMETERS,TERMINAL(0),TERMINAL(1));

result = kSuccess;
FAILONSUCCESS

FOOTER(3)
}

enum opTrigger vpx_method_Class_20_Data_2F_Update_20_Class_20_Attribute_20_Name_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Class_20_Data_2F_Update_20_Class_20_Attribute_20_Name_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Duplicate class attribute name!",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_show,1,0,TERMINAL(3));
FAILONSUCCESS

result = kSuccess;

FOOTER(4)
}

enum opTrigger vpx_method_Class_20_Data_2F_Update_20_Class_20_Attribute_20_Name(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Class_20_Data_2F_Update_20_Class_20_Attribute_20_Name_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2))
if(vpx_method_Class_20_Data_2F_Update_20_Class_20_Attribute_20_Name_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2))
vpx_method_Class_20_Data_2F_Update_20_Class_20_Attribute_20_Name_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2);
return outcome;
}

enum opTrigger vpx_method_Class_20_Data_2F_Substitute_20_Class_20_Attribute_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Class_20_Data_2F_Substitute_20_Class_20_Attribute_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(15)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_detach_2D_nth,2,2,TERMINAL(4),TERMINAL(1),ROOT(5),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP_insert_2D_nth,3,1,TERMINAL(5),TERMINAL(6),TERMINAL(2),ROOT(7));

result = vpx_set(PARAMETERS,kVPXValue_List,TERMINAL(3),TERMINAL(7),ROOT(8));

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(8),ROOT(9),ROOT(10));

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(10),ROOT(11),ROOT(12));

result = vpx_get(PARAMETERS,kVPXValue_Sub_20_Classes,TERMINAL(12),ROOT(13),ROOT(14));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(14))) ){
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Substitute_20_Class_20_Attribute,3,0,LIST(14),TERMINAL(1),TERMINAL(2));
REPEATFINISH
} else {
}

result = kSuccess;

FOOTER(15)
}

enum opTrigger vpx_method_Class_20_Data_2F_Substitute_20_Class_20_Attribute_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Class_20_Data_2F_Substitute_20_Class_20_Attribute_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_Class_20_Data_2F_Substitute_20_Class_20_Attribute_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Class_20_Data_2F_Substitute_20_Class_20_Attribute_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Class_20_Data_2F_Substitute_20_Class_20_Attribute_case_1_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2))
vpx_method_Class_20_Data_2F_Substitute_20_Class_20_Attribute_case_1_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2);
return outcome;
}

enum opTrigger vpx_method_Class_20_Data_2F_Substitute_20_Class_20_Attribute(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Class Attribute Data",ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(0),TERMINAL(3),ROOT(4));

result = vpx_method_Class_20_Data_2F_Substitute_20_Class_20_Attribute_case_1_local_4(PARAMETERS,TERMINAL(4),TERMINAL(1),TERMINAL(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Send_20_Refresh,1,0,TERMINAL(4));

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Class_20_Data_2F_Insert_20_Class_20_Attribute_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Class_20_Data_2F_Insert_20_Class_20_Attribute_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Name,TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_set(PARAMETERS,kVPXValue_Name,TERMINAL(0),TERMINAL(3),ROOT(4));

result = vpx_constant(PARAMETERS,"TRUE",ROOT(5));

result = vpx_set(PARAMETERS,kVPXValue_Inherited,TERMINAL(4),TERMINAL(5),ROOT(6));

result = kSuccess;

FOOTERSINGLECASE(7)
}

enum opTrigger vpx_method_Class_20_Data_2F_Insert_20_Class_20_Attribute_case_1_local_10_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Class_20_Data_2F_Insert_20_Class_20_Attribute_case_1_local_10_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP__28_length_29_,1,1,TERMINAL(0),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_plus_2D_one,1,1,TERMINAL(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_equals,2,0,TERMINAL(4),TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_attach_2D_r,2,1,TERMINAL(0),TERMINAL(1),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTER(6)
}

enum opTrigger vpx_method_Class_20_Data_2F_Insert_20_Class_20_Attribute_case_1_local_10_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Class_20_Data_2F_Insert_20_Class_20_Attribute_case_1_local_10_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP__28_length_29_,1,1,TERMINAL(0),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_gte,2,0,TERMINAL(3),TERMINAL(2));
FAILONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_insert_2D_nth,3,1,TERMINAL(0),TERMINAL(1),TERMINAL(2),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Class_20_Data_2F_Insert_20_Class_20_Attribute_case_1_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Class_20_Data_2F_Insert_20_Class_20_Attribute_case_1_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Class_20_Data_2F_Insert_20_Class_20_Attribute_case_1_local_10_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
vpx_method_Class_20_Data_2F_Insert_20_Class_20_Attribute_case_1_local_10_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0);
return outcome;
}

enum opTrigger vpx_method_Class_20_Data_2F_Insert_20_Class_20_Attribute_case_1_local_13(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Class_20_Data_2F_Insert_20_Class_20_Attribute_case_1_local_13(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Value_20_Address,1,1,TERMINAL(2),ROOT(3));

result = vpx_constant(PARAMETERS,"value",ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Project_20_Data,1,1,TERMINAL(0),ROOT(5));

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(5),ROOT(6),ROOT(7));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Object_20_To_20_Value,3,1,TERMINAL(7),TERMINAL(3),TERMINAL(4),ROOT(8));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Direct_20_Value,2,0,TERMINAL(1),TERMINAL(8));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Make_20_Dirty,1,0,TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(9)
}

enum opTrigger vpx_method_Class_20_Data_2F_Insert_20_Class_20_Attribute_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Class_20_Data_2F_Insert_20_Class_20_Attribute_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADERWITHNONE(14)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_Class_20_Attribute_20_Data,1,1,NONE,ROOT(3));

result = vpx_method_Class_20_Data_2F_Insert_20_Class_20_Attribute_case_1_local_3(PARAMETERS,TERMINAL(3),TERMINAL(1));

result = vpx_instantiate(PARAMETERS,kVPXClass_Item_20_Data,1,1,NONE,ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Install_20_Helper,2,0,TERMINAL(4),TERMINAL(3));

result = vpx_set(PARAMETERS,kVPXValue_Owner,TERMINAL(3),TERMINAL(4),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(5),ROOT(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(0),TERMINAL(6),ROOT(7));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(7),ROOT(8),ROOT(9));

result = vpx_method_Class_20_Data_2F_Insert_20_Class_20_Attribute_case_1_local_10(PARAMETERS,TERMINAL(9),TERMINAL(4),TERMINAL(2),ROOT(10));
NEXTCASEONFAILURE

result = vpx_set(PARAMETERS,kVPXValue_List,TERMINAL(8),TERMINAL(10),ROOT(11));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open,2,0,TERMINAL(4),TERMINAL(11));

result = vpx_method_Class_20_Data_2F_Insert_20_Class_20_Attribute_case_1_local_13(PARAMETERS,TERMINAL(0),TERMINAL(3),TERMINAL(1));

result = vpx_get(PARAMETERS,kVPXValue_Sub_20_Classes,TERMINAL(0),ROOT(12),ROOT(13));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(13))) ){
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Insert_20_Class_20_Attribute,3,0,LIST(13),TERMINAL(1),TERMINAL(2));
REPEATFINISH
} else {
}

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Update_20_Editors,1,0,TERMINAL(12));

result = kSuccess;

FOOTERWITHNONE(14)
}

enum opTrigger vpx_method_Class_20_Data_2F_Insert_20_Class_20_Attribute_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Class_20_Data_2F_Insert_20_Class_20_Attribute_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_Class_20_Data_2F_Insert_20_Class_20_Attribute(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Class_20_Data_2F_Insert_20_Class_20_Attribute_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2))
vpx_method_Class_20_Data_2F_Insert_20_Class_20_Attribute_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2);
return outcome;
}

enum opTrigger vpx_method_Class_20_Data_2F_Delete_20_Nth_20_Class_20_Attribute_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Class_20_Data_2F_Delete_20_Nth_20_Class_20_Attribute_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(11)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Class Attribute Data",ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(0),TERMINAL(2),ROOT(3));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_nth,2,1,TERMINAL(5),TERMINAL(1),ROOT(6));

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(6),ROOT(7),ROOT(8));

result = vpx_constant(PARAMETERS,"FALSE",ROOT(9));

result = vpx_set(PARAMETERS,kVPXValue_Inherited,TERMINAL(8),TERMINAL(9),ROOT(10));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Remove_20_Self,1,0,TERMINAL(10));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Send_20_Refresh,1,0,TERMINAL(4));

result = kSuccess;

FOOTER(11)
}

enum opTrigger vpx_method_Class_20_Data_2F_Delete_20_Nth_20_Class_20_Attribute_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Class_20_Data_2F_Delete_20_Nth_20_Class_20_Attribute_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Class_20_Data_2F_Delete_20_Nth_20_Class_20_Attribute(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Class_20_Data_2F_Delete_20_Nth_20_Class_20_Attribute_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Class_20_Data_2F_Delete_20_Nth_20_Class_20_Attribute_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Class_20_Data_2F_Update_20_Record(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(8)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Super_20_Class,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_Record,TERMINAL(1),ROOT(3),ROOT(4));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(4));
TERMINATEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Project_20_Data,1,1,TERMINAL(3),ROOT(5));

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(5),ROOT(6),ROOT(7));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Class,3,0,TERMINAL(7),TERMINAL(4),TERMINAL(2));

result = kSuccess;

FOOTERSINGLECASE(8)
}

enum opTrigger vpx_method_Class_20_Data_2F_Post_20_Open(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Update_20_Record,1,0,TERMINAL(0));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Update_20_Value,1,0,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Class_20_Data_2F_Class_20_To_20_Instance_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Class_20_Data_2F_Class_20_To_20_Instance_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_Value,TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_method_Object_20_To_20_Instance(PARAMETERS,TERMINAL(4),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Class_20_Data_2F_Class_20_To_20_Instance_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Class_20_Data_2F_Class_20_To_20_Instance_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(9)
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
result = vpx_method_Class_20_Data_2F_Class_20_To_20_Instance_case_1_local_6(PARAMETERS,LIST(6),ROOT(7));
LISTROOT(7,0)
REPEATFINISH
LISTROOTFINISH(7,0)
LISTROOTEND
} else {
ROOTEMPTY(7)
}

result = vpx_call_primitive(PARAMETERS,VPLP_list_2D_to_2D_inst,2,1,TERMINAL(4),TERMINAL(7),ROOT(8));

result = kSuccess;

OUTPUT(0,TERMINAL(8))
FOOTER(9)
}

enum opTrigger vpx_method_Class_20_Data_2F_Class_20_To_20_Instance_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Class_20_Data_2F_Class_20_To_20_Instance_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Class_20_Data_2F_Class_20_To_20_Instance(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Class_20_Data_2F_Class_20_To_20_Instance_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Class_20_Data_2F_Class_20_To_20_Instance_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Class_20_Data_2F_Update_20_Value_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Class_20_Data_2F_Update_20_Value_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Update_20_Value,1,0,TERMINAL(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Class_20_Data_2F_Update_20_Value_case_1_local_8_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Class_20_Data_2F_Update_20_Value_case_1_local_8_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Update_20_Value,1,0,TERMINAL(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Class_20_Data_2F_Update_20_Value_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Class_20_Data_2F_Update_20_Value_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(0));
TERMINATEONSUCCESS

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(0),ROOT(1),ROOT(2));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(2))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Class_20_Data_2F_Update_20_Value_case_1_local_8_case_1_local_4(PARAMETERS,LIST(2));
REPEATFINISH
} else {
}

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Class_20_Data_2F_Update_20_Value_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Class_20_Data_2F_Update_20_Value_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(7)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Class Attribute Data",ROOT(1));

result = vpx_constant(PARAMETERS,"Attribute Data",ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(0),TERMINAL(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(3),ROOT(4),ROOT(5));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(5))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Class_20_Data_2F_Update_20_Value_case_1_local_6(PARAMETERS,LIST(5));
REPEATFINISH
} else {
}

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(0),TERMINAL(1),ROOT(6));
NEXTCASEONFAILURE

result = vpx_method_Class_20_Data_2F_Update_20_Value_case_1_local_8(PARAMETERS,TERMINAL(6));

result = kSuccess;

FOOTER(7)
}

enum opTrigger vpx_method_Class_20_Data_2F_Update_20_Value_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Class_20_Data_2F_Update_20_Value_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_Class_20_Data_2F_Update_20_Value(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Class_20_Data_2F_Update_20_Value_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Class_20_Data_2F_Update_20_Value_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Class_20_Data_2F_Find_20_Editor_case_1_local_2_case_1_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Class_20_Data_2F_Find_20_Editor_case_1_local_2_case_1_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Value,1,1,TERMINAL(2),ROOT(3));

result = vpx_match(PARAMETERS,"Editor",TERMINAL(3));
NEXTCASEONFAILURE

result = kSuccess;
FINISHONSUCCESS

OUTPUT(0,TERMINAL(2))
FOOTER(4)
}

enum opTrigger vpx_method_Class_20_Data_2F_Find_20_Editor_case_1_local_2_case_1_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Class_20_Data_2F_Find_20_Editor_case_1_local_2_case_1_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

OUTPUT(0,NONE)
FOOTERWITHNONE(1)
}

enum opTrigger vpx_method_Class_20_Data_2F_Find_20_Editor_case_1_local_2_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Class_20_Data_2F_Find_20_Editor_case_1_local_2_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Class_20_Data_2F_Find_20_Editor_case_1_local_2_case_1_local_7_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Class_20_Data_2F_Find_20_Editor_case_1_local_2_case_1_local_7_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Class_20_Data_2F_Find_20_Editor_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Class_20_Data_2F_Find_20_Editor_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
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
REPEATBEGINWITHCOUNTER
result = vpx_method_Class_20_Data_2F_Find_20_Editor_case_1_local_2_case_1_local_7(PARAMETERS,LIST(6),ROOT(7));
REPEATFINISH
} else {
ROOTNULL(7,NULL)
}

result = kSuccess;

OUTPUT(0,TERMINAL(2))
OUTPUT(1,TERMINAL(7))
FOOTERSINGLECASE(8)
}

enum opTrigger vpx_method_Class_20_Data_2F_Find_20_Editor_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Class_20_Data_2F_Find_20_Editor_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"( )",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Class_20_Data_2F_Find_20_Editor_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Class_20_Data_2F_Find_20_Editor_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP__28_length_29_,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"1",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,1,TERMINAL(0),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Class_20_Data_2F_Find_20_Editor_case_1_local_3_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Class_20_Data_2F_Find_20_Editor_case_1_local_3_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Please select an editor.",ROOT(1));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(0))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_get(PARAMETERS,kVPXValue_Name,LIST(0),ROOT(2),ROOT(3));
LISTROOT(3,0)
REPEATFINISH
LISTROOTFINISH(3,0)
LISTROOTEND
} else {
ROOTNULL(2,NULL)
ROOTEMPTY(3)
}

result = vpx_call_primitive(PARAMETERS,VPLP_select,2,1,TERMINAL(3),TERMINAL(1),ROOT(4));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(4));
NEXTCASEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP__28_in_29_,2,1,TERMINAL(3),TERMINAL(4),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_nth,2,1,TERMINAL(0),TERMINAL(5),ROOT(6));

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTER(7)
}

enum opTrigger vpx_method_Class_20_Data_2F_Find_20_Editor_case_1_local_3_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Class_20_Data_2F_Find_20_Editor_case_1_local_3_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Class_20_Data_2F_Find_20_Editor_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Class_20_Data_2F_Find_20_Editor_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Class_20_Data_2F_Find_20_Editor_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_Class_20_Data_2F_Find_20_Editor_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_Class_20_Data_2F_Find_20_Editor_case_1_local_3_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Class_20_Data_2F_Find_20_Editor_case_1_local_3_case_4(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Class_20_Data_2F_Find_20_Editor(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

LISTROOTBEGIN(1)
REPEATBEGIN
LOOPTERMINALBEGIN(1)
LOOPTERMINAL(0,0,1)
result = vpx_method_Class_20_Data_2F_Find_20_Editor_case_1_local_2(PARAMETERS,LOOP(0),ROOT(1),ROOT(2));
LISTROOT(2,0)
REPEATFINISH
LISTROOTFINISH(2,0)
LISTROOTEND

result = vpx_method_Class_20_Data_2F_Find_20_Editor_case_1_local_3(PARAMETERS,TERMINAL(2),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Class_20_Data_2F_Update_20_Editors_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Class_20_Data_2F_Update_20_Editors_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Send_20_Refresh,1,0,TERMINAL(0));

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(0),ROOT(1),ROOT(2));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(2))) ){
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Send_20_Refresh,1,0,LIST(2));
REPEATFINISH
} else {
}

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Class_20_Data_2F_Update_20_Editors_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Class_20_Data_2F_Update_20_Editors_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Send_20_Refresh,1,0,TERMINAL(0));

result = vpx_get(PARAMETERS,kVPXValue_Owner,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_Lists,TERMINAL(2),ROOT(3),ROOT(4));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(4))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Class_20_Data_2F_Update_20_Editors_case_1_local_5(PARAMETERS,LIST(4));
REPEATFINISH
} else {
}

result = kSuccess;

FOOTER(5)
}

enum opTrigger vpx_method_Class_20_Data_2F_Update_20_Editors_case_2_local_3_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Class_20_Data_2F_Update_20_Editors_case_2_local_3_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Data,TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_equals,2,0,TERMINAL(0),TERMINAL(4));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Refresh_20_Data,1,0,TERMINAL(2));

result = kSuccess;

FOOTER(5)
}

enum opTrigger vpx_method_Class_20_Data_2F_Update_20_Editors_case_2_local_3_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Class_20_Data_2F_Update_20_Editors_case_2_local_3_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Class_20_Data_2F_Update_20_Editors_case_2_local_3_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Class_20_Data_2F_Update_20_Editors_case_2_local_3_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Class_20_Data_2F_Update_20_Editors_case_2_local_3_case_1_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Class_20_Data_2F_Update_20_Editors_case_2_local_3_case_1_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Class_20_Data_2F_Update_20_Editors_case_2_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Class_20_Data_2F_Update_20_Editors_case_2_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Owner,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
TERMINATEONSUCCESS

result = vpx_method_Get_20_Viewer_20_Windows(PARAMETERS,ROOT(4));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(4))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Class_20_Data_2F_Update_20_Editors_case_2_local_3_case_1_local_5(PARAMETERS,TERMINAL(1),LIST(4));
REPEATFINISH
} else {
}

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Class_20_Data_2F_Update_20_Editors_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Class_20_Data_2F_Update_20_Editors_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Name,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_method_Class_20_Data_2F_Update_20_Editors_case_2_local_3(PARAMETERS,TERMINAL(1),TERMINAL(2));

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_Class_20_Data_2F_Update_20_Editors(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Class_20_Data_2F_Update_20_Editors_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Class_20_Data_2F_Update_20_Editors_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Class_20_Data_2F_Set_20_Value_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Class_20_Data_2F_Set_20_Value_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(0));
TERMINATEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_from_2D_string,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
TERMINATEONSUCCESS

result = vpx_match(PARAMETERS,"\"\"",TERMINAL(0));
TERMINATEONSUCCESS

result = kSuccess;
FAILONSUCCESS

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Class_20_Data_2F_Set_20_Value_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Class_20_Data_2F_Set_20_Value_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(10)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Attribute Data",ROOT(1));

result = vpx_get(PARAMETERS,kVPXValue_Super_20_Instance,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
TERMINATEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(3),TERMINAL(1),ROOT(4));
TERMINATEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(4),ROOT(5),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP__28_length_29_,1,1,TERMINAL(6),ROOT(7));

result = vpx_constant(PARAMETERS,"-1",ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP_make_2D_list,3,1,TERMINAL(7),TERMINAL(7),TERMINAL(8),ROOT(9));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(9))) ){
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Delete_20_Nth_20_Attribute,2,0,TERMINAL(2),LIST(9));
REPEATFINISH
} else {
}

result = kSuccess;

FOOTERSINGLECASE(10)
}

enum opTrigger vpx_method_Class_20_Data_2F_Set_20_Value_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Class_20_Data_2F_Set_20_Value_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(10)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Class Attribute Data",ROOT(1));

result = vpx_get(PARAMETERS,kVPXValue_Super_20_Instance,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
TERMINATEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(3),TERMINAL(1),ROOT(4));
TERMINATEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(4),ROOT(5),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP__28_length_29_,1,1,TERMINAL(6),ROOT(7));

result = vpx_constant(PARAMETERS,"-1",ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP_make_2D_list,3,1,TERMINAL(7),TERMINAL(7),TERMINAL(8),ROOT(9));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(9))) ){
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Delete_20_Nth_20_Class_20_Attribute,2,0,TERMINAL(2),LIST(9));
REPEATFINISH
} else {
}

result = kSuccess;

FOOTERSINGLECASE(10)
}

enum opTrigger vpx_method_Class_20_Data_2F_Set_20_Value_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Class_20_Data_2F_Set_20_Value_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Super_20_Instance,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
TERMINATEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Remove_20_Sub_20_Class,2,0,TERMINAL(2),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Class_20_Data_2F_Set_20_Value_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Class_20_Data_2F_Set_20_Value_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Class_20_Data_2F_Set_20_Value_case_1_local_2(PARAMETERS,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Super_20_Class,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_constant(PARAMETERS,"NULL",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_equals,2,0,TERMINAL(3),TERMINAL(4));
TERMINATEONSUCCESS

result = vpx_method_Class_20_Data_2F_Set_20_Value_case_1_local_6(PARAMETERS,TERMINAL(2));

result = vpx_method_Class_20_Data_2F_Set_20_Value_case_1_local_7(PARAMETERS,TERMINAL(2));

result = vpx_method_Class_20_Data_2F_Set_20_Value_case_1_local_8(PARAMETERS,TERMINAL(2));

result = vpx_constant(PARAMETERS,"NULL",ROOT(5));

result = vpx_set(PARAMETERS,kVPXValue_Super_20_Class,TERMINAL(2),TERMINAL(5),ROOT(6));

result = vpx_set(PARAMETERS,kVPXValue_Super_20_Instance,TERMINAL(6),TERMINAL(5),ROOT(7));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Update_20_Record,1,0,TERMINAL(7));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Update_20_Editors,1,0,TERMINAL(7));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Make_20_Dirty,1,0,TERMINAL(7));

result = kSuccess;

FOOTER(8)
}

enum opTrigger vpx_method_Class_20_Data_2F_Set_20_Value_case_2_local_10_case_1_local_2_case_1_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Class_20_Data_2F_Set_20_Value_case_2_local_10_case_1_local_2_case_1_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Name,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Name,TERMINAL(1),ROOT(4),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP__3D_,2,0,TERMINAL(3),TERMINAL(5));
FAILONFAILURE

result = kSuccess;

FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Class_20_Data_2F_Set_20_Value_case_2_local_10_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Class_20_Data_2F_Set_20_Value_case_2_local_10_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(11)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Attribute Data",ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(1),TERMINAL(2),ROOT(3));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(0),TERMINAL(2),ROOT(4));
TERMINATEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(4),ROOT(5),ROOT(6));

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(3),ROOT(7),ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP__28_length_29_,1,1,TERMINAL(8),ROOT(9));

result = vpx_call_primitive(PARAMETERS,VPLP__28_length_29_,1,1,TERMINAL(6),ROOT(10));

result = vpx_call_primitive(PARAMETERS,VPLP__3E3D_,2,0,TERMINAL(10),TERMINAL(9));
FAILONFAILURE

if( (repeatLimit = vpx_multiplex(2,TERMINAL(6),TERMINAL(8))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Class_20_Data_2F_Set_20_Value_case_2_local_10_case_1_local_2_case_1_local_10(PARAMETERS,LIST(6),LIST(8));
FAILONFAILURE
REPEATFINISH
} else {
}

result = kSuccess;

FOOTERSINGLECASE(11)
}

enum opTrigger vpx_method_Class_20_Data_2F_Set_20_Value_case_2_local_10_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Class_20_Data_2F_Set_20_Value_case_2_local_10_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Class_20_Data_2F_Set_20_Value_case_2_local_10_case_1_local_2(PARAMETERS,TERMINAL(0),TERMINAL(1));
NEXTCASEONFAILURE

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Class_20_Data_2F_Set_20_Value_case_2_local_10_case_2_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Class_20_Data_2F_Set_20_Value_case_2_local_10_case_2_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(10)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Attribute Data",ROOT(1));

result = vpx_get(PARAMETERS,kVPXValue_Super_20_Instance,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
TERMINATEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(3),TERMINAL(1),ROOT(4));
TERMINATEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(4),ROOT(5),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP__28_length_29_,1,1,TERMINAL(6),ROOT(7));

result = vpx_constant(PARAMETERS,"-1",ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP_make_2D_list,3,1,TERMINAL(7),TERMINAL(7),TERMINAL(8),ROOT(9));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(9))) ){
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Delete_20_Nth_20_Attribute,2,0,TERMINAL(2),LIST(9));
REPEATFINISH
} else {
}

result = kSuccess;

FOOTERSINGLECASE(10)
}

enum opTrigger vpx_method_Class_20_Data_2F_Set_20_Value_case_2_local_10_case_2_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Class_20_Data_2F_Set_20_Value_case_2_local_10_case_2_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(1),ROOT(3),ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Insert_20_Attribute,3,0,TERMINAL(0),TERMINAL(4),TERMINAL(2));

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Class_20_Data_2F_Set_20_Value_case_2_local_10_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Class_20_Data_2F_Set_20_Value_case_2_local_10_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Attribute Data",ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(1),TERMINAL(2),ROOT(3));
TERMINATEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP__28_length_29_,1,1,TERMINAL(5),ROOT(6));

result = vpx_constant(PARAMETERS,"1",ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP_make_2D_list,3,1,TERMINAL(6),TERMINAL(7),TERMINAL(7),ROOT(8));

result = vpx_method_Class_20_Data_2F_Set_20_Value_case_2_local_10_case_2_local_8(PARAMETERS,TERMINAL(0));

if( (repeatLimit = vpx_multiplex(2,TERMINAL(5),TERMINAL(8))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Class_20_Data_2F_Set_20_Value_case_2_local_10_case_2_local_9(PARAMETERS,TERMINAL(0),LIST(5),LIST(8));
REPEATFINISH
} else {
}

result = kSuccess;

FOOTER(9)
}

enum opTrigger vpx_method_Class_20_Data_2F_Set_20_Value_case_2_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Class_20_Data_2F_Set_20_Value_case_2_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Class_20_Data_2F_Set_20_Value_case_2_local_10_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Class_20_Data_2F_Set_20_Value_case_2_local_10_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Class_20_Data_2F_Set_20_Value_case_2_local_11_case_1_local_2_case_1_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Class_20_Data_2F_Set_20_Value_case_2_local_11_case_1_local_2_case_1_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Name,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Name,TERMINAL(1),ROOT(4),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP__3D_,2,0,TERMINAL(3),TERMINAL(5));
FAILONFAILURE

result = kSuccess;

FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Class_20_Data_2F_Set_20_Value_case_2_local_11_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Class_20_Data_2F_Set_20_Value_case_2_local_11_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(11)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Class Attribute Data",ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(1),TERMINAL(2),ROOT(3));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(0),TERMINAL(2),ROOT(4));
TERMINATEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(4),ROOT(5),ROOT(6));

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(3),ROOT(7),ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP__28_length_29_,1,1,TERMINAL(8),ROOT(9));

result = vpx_call_primitive(PARAMETERS,VPLP__28_length_29_,1,1,TERMINAL(6),ROOT(10));

result = vpx_call_primitive(PARAMETERS,VPLP__3E3D_,2,0,TERMINAL(10),TERMINAL(9));
FAILONFAILURE

if( (repeatLimit = vpx_multiplex(2,TERMINAL(6),TERMINAL(8))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Class_20_Data_2F_Set_20_Value_case_2_local_11_case_1_local_2_case_1_local_10(PARAMETERS,LIST(6),LIST(8));
FAILONFAILURE
REPEATFINISH
} else {
}

result = kSuccess;

FOOTERSINGLECASE(11)
}

enum opTrigger vpx_method_Class_20_Data_2F_Set_20_Value_case_2_local_11_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Class_20_Data_2F_Set_20_Value_case_2_local_11_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Class_20_Data_2F_Set_20_Value_case_2_local_11_case_1_local_2(PARAMETERS,TERMINAL(0),TERMINAL(1));
NEXTCASEONFAILURE

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Class_20_Data_2F_Set_20_Value_case_2_local_11_case_2_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Class_20_Data_2F_Set_20_Value_case_2_local_11_case_2_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(10)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Class Attribute Data",ROOT(1));

result = vpx_get(PARAMETERS,kVPXValue_Super_20_Instance,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
TERMINATEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(3),TERMINAL(1),ROOT(4));
TERMINATEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(4),ROOT(5),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP__28_length_29_,1,1,TERMINAL(6),ROOT(7));

result = vpx_constant(PARAMETERS,"-1",ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP_make_2D_list,3,1,TERMINAL(7),TERMINAL(7),TERMINAL(8),ROOT(9));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(9))) ){
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Delete_20_Nth_20_Class_20_Attribute,2,0,TERMINAL(2),LIST(9));
REPEATFINISH
} else {
}

result = kSuccess;

FOOTERSINGLECASE(10)
}

enum opTrigger vpx_method_Class_20_Data_2F_Set_20_Value_case_2_local_11_case_2_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Class_20_Data_2F_Set_20_Value_case_2_local_11_case_2_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(1),ROOT(3),ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Insert_20_Class_20_Attribute,3,0,TERMINAL(0),TERMINAL(4),TERMINAL(2));

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Class_20_Data_2F_Set_20_Value_case_2_local_11_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Class_20_Data_2F_Set_20_Value_case_2_local_11_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Class Attribute Data",ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(1),TERMINAL(2),ROOT(3));
TERMINATEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP__28_length_29_,1,1,TERMINAL(5),ROOT(6));

result = vpx_constant(PARAMETERS,"1",ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP_make_2D_list,3,1,TERMINAL(6),TERMINAL(7),TERMINAL(7),ROOT(8));

result = vpx_method_Class_20_Data_2F_Set_20_Value_case_2_local_11_case_2_local_8(PARAMETERS,TERMINAL(0));

if( (repeatLimit = vpx_multiplex(2,TERMINAL(5),TERMINAL(8))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Class_20_Data_2F_Set_20_Value_case_2_local_11_case_2_local_9(PARAMETERS,TERMINAL(0),LIST(5),LIST(8));
REPEATFINISH
} else {
}

result = kSuccess;

FOOTER(9)
}

enum opTrigger vpx_method_Class_20_Data_2F_Set_20_Value_case_2_local_11(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Class_20_Data_2F_Set_20_Value_case_2_local_11(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Class_20_Data_2F_Set_20_Value_case_2_local_11_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Class_20_Data_2F_Set_20_Value_case_2_local_11_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Class_20_Data_2F_Set_20_Value_case_2_local_12(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Class_20_Data_2F_Set_20_Value_case_2_local_12(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Super_20_Instance,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
TERMINATEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Remove_20_Sub_20_Class,2,0,TERMINAL(2),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Class_20_Data_2F_Set_20_Value_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Class_20_Data_2F_Set_20_Value_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Super_20_Class,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_equals,2,0,TERMINAL(3),TERMINAL(1));
NEXTCASEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Project_20_Data,1,1,TERMINAL(2),ROOT(4));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(4));
NEXTCASEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Classes,1,1,TERMINAL(4),ROOT(5));

result = vpx_constant(PARAMETERS,"Name",ROOT(6));

result = vpx_method_Find_20_Instance(PARAMETERS,TERMINAL(5),TERMINAL(6),TERMINAL(1),ROOT(7),ROOT(8));

result = vpx_match(PARAMETERS,"0",TERMINAL(7));
NEXTCASEONSUCCESS

result = vpx_method_Class_20_Data_2F_Set_20_Value_case_2_local_10(PARAMETERS,TERMINAL(2),TERMINAL(8));

result = vpx_method_Class_20_Data_2F_Set_20_Value_case_2_local_11(PARAMETERS,TERMINAL(2),TERMINAL(8));

result = vpx_method_Class_20_Data_2F_Set_20_Value_case_2_local_12(PARAMETERS,TERMINAL(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Add_20_Sub_20_Class,2,0,TERMINAL(8),TERMINAL(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Update_20_Record,1,0,TERMINAL(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Make_20_Dirty,1,0,TERMINAL(2));

result = kSuccess;

FOOTER(9)
}

enum opTrigger vpx_method_Class_20_Data_2F_Set_20_Value_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Class_20_Data_2F_Set_20_Value_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Super_20_Class,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_equals,2,0,TERMINAL(3),TERMINAL(1));
NEXTCASEONSUCCESS

result = vpx_constant(PARAMETERS,"Super class <",ROOT(4));

result = vpx_constant(PARAMETERS,"> was not found.",ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_show,3,0,TERMINAL(4),TERMINAL(1),TERMINAL(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Send_20_Refresh,1,0,TERMINAL(2));

result = kSuccess;

FOOTER(6)
}

enum opTrigger vpx_method_Class_20_Data_2F_Set_20_Value_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Class_20_Data_2F_Set_20_Value_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Class_20_Data_2F_Set_20_Value(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Class_20_Data_2F_Set_20_Value_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
if(vpx_method_Class_20_Data_2F_Set_20_Value_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
if(vpx_method_Class_20_Data_2F_Set_20_Value_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Class_20_Data_2F_Set_20_Value_case_4(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Class_20_Data_2F_Get_20_Universals_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Class_20_Data_2F_Get_20_Universals_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Class_20_Data_2F_Get_20_Universals(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Universal Data",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(2),ROOT(3),ROOT(4));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(4))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Class_20_Data_2F_Get_20_Universals_case_1_local_5(PARAMETERS,LIST(4),ROOT(5));
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

enum opTrigger vpx_method_Class_20_Data_2F_Get_20_All_20_Breakpoints(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Universals,1,1,TERMINAL(0),ROOT(1));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(1))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_All_20_Breakpoints,1,1,LIST(1),ROOT(2));
LISTROOT(2,0)
REPEATFINISH
LISTROOTFINISH(2,0)
LISTROOTEND
} else {
ROOTEMPTY(2)
}

result = vpx_method__28_Flatten_29_(PARAMETERS,TERMINAL(2),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Class_20_Data_2F_Update_20_Attribute_20_Value_case_1_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Class_20_Data_2F_Update_20_Attribute_20_Value_case_1_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(11)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Value_20_Address,1,1,TERMINAL(2),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Project_20_Data,1,1,TERMINAL(0),ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(4),ROOT(5),ROOT(6));

result = vpx_constant(PARAMETERS,"value",ROOT(7));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Object_20_To_20_Value,3,1,TERMINAL(6),TERMINAL(3),TERMINAL(7),ROOT(8));

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(1),ROOT(9),ROOT(10));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Direct_20_Value,2,0,TERMINAL(10),TERMINAL(8));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Make_20_Dirty,1,0,TERMINAL(10));

result = kSuccess;

FOOTERSINGLECASE(11)
}

enum opTrigger vpx_method_Class_20_Data_2F_Update_20_Attribute_20_Value_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Class_20_Data_2F_Update_20_Attribute_20_Value_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(13)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(1),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(0),TERMINAL(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_get(PARAMETERS,kVPXValue_Name,TERMINAL(1),ROOT(6),ROOT(7));

result = vpx_constant(PARAMETERS,"Name",ROOT(8));

result = vpx_method_Find_20_Instance(PARAMETERS,TERMINAL(5),TERMINAL(8),TERMINAL(7),ROOT(9),ROOT(10));

result = vpx_match(PARAMETERS,"0",TERMINAL(9));
NEXTCASEONSUCCESS

result = vpx_method_Class_20_Data_2F_Update_20_Attribute_20_Value_case_1_local_9(PARAMETERS,TERMINAL(0),TERMINAL(10),TERMINAL(6));

result = vpx_get(PARAMETERS,kVPXValue_Sub_20_Classes,TERMINAL(0),ROOT(11),ROOT(12));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(12))) ){
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Update_20_Attribute_20_Value,2,0,LIST(12),TERMINAL(1));
REPEATFINISH
} else {
}

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Update_20_Editors,1,0,TERMINAL(11));

result = kSuccess;

FOOTER(13)
}

enum opTrigger vpx_method_Class_20_Data_2F_Update_20_Attribute_20_Value_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Class_20_Data_2F_Update_20_Attribute_20_Value_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Class_20_Data_2F_Update_20_Attribute_20_Value(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Class_20_Data_2F_Update_20_Attribute_20_Value_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Class_20_Data_2F_Update_20_Attribute_20_Value_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Class_20_Data_2F_Update_20_Class_20_Attribute_20_Value_case_1_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Class_20_Data_2F_Update_20_Class_20_Attribute_20_Value_case_1_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(11)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Value_20_Address,1,1,TERMINAL(2),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Project_20_Data,1,1,TERMINAL(0),ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(4),ROOT(5),ROOT(6));

result = vpx_constant(PARAMETERS,"value",ROOT(7));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Object_20_To_20_Value,3,1,TERMINAL(6),TERMINAL(3),TERMINAL(7),ROOT(8));

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(1),ROOT(9),ROOT(10));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Direct_20_Value,2,0,TERMINAL(10),TERMINAL(8));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Send_20_Refresh,1,0,TERMINAL(10));

result = kSuccess;

FOOTERSINGLECASE(11)
}

enum opTrigger vpx_method_Class_20_Data_2F_Update_20_Class_20_Attribute_20_Value_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Class_20_Data_2F_Update_20_Class_20_Attribute_20_Value_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(13)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(1),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(0),TERMINAL(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_get(PARAMETERS,kVPXValue_Name,TERMINAL(1),ROOT(6),ROOT(7));

result = vpx_constant(PARAMETERS,"Name",ROOT(8));

result = vpx_method_Find_20_Instance(PARAMETERS,TERMINAL(5),TERMINAL(8),TERMINAL(7),ROOT(9),ROOT(10));

result = vpx_match(PARAMETERS,"0",TERMINAL(9));
NEXTCASEONSUCCESS

result = vpx_method_Class_20_Data_2F_Update_20_Class_20_Attribute_20_Value_case_1_local_9(PARAMETERS,TERMINAL(0),TERMINAL(10),TERMINAL(6));

result = vpx_get(PARAMETERS,kVPXValue_Sub_20_Classes,TERMINAL(0),ROOT(11),ROOT(12));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(12))) ){
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Update_20_Class_20_Attribute_20_Value,2,0,LIST(12),TERMINAL(1));
REPEATFINISH
} else {
}

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Update_20_Editors,1,0,TERMINAL(11));

result = kSuccess;

FOOTER(13)
}

enum opTrigger vpx_method_Class_20_Data_2F_Update_20_Class_20_Attribute_20_Value_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Class_20_Data_2F_Update_20_Class_20_Attribute_20_Value_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Class_20_Data_2F_Update_20_Class_20_Attribute_20_Value(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Class_20_Data_2F_Update_20_Class_20_Attribute_20_Value_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Class_20_Data_2F_Update_20_Class_20_Attribute_20_Value_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Class_20_Data_2F_Test_20_Attribute_20_Name_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Class_20_Data_2F_Test_20_Attribute_20_Name_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Name,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP__3D_,2,0,TERMINAL(3),TERMINAL(1));
FAILONSUCCESS

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Class_20_Data_2F_Test_20_Attribute_20_Name(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Attributes,1,1,TERMINAL(0),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Class_20_Attributes,1,1,TERMINAL(0),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP__28_join_29_,2,1,TERMINAL(2),TERMINAL(3),ROOT(4));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(4))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Class_20_Data_2F_Test_20_Attribute_20_Name_case_1_local_5(PARAMETERS,LIST(4),TERMINAL(1));
FAILONFAILURE
REPEATFINISH
} else {
}

result = vpx_get(PARAMETERS,kVPXValue_Sub_20_Classes,TERMINAL(0),ROOT(5),ROOT(6));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(6))) ){
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Test_20_Attribute_20_Name,2,0,LIST(6),TERMINAL(1));
FAILONFAILURE
REPEATFINISH
} else {
}

result = kSuccess;

FOOTERSINGLECASE(7)
}

enum opTrigger vpx_method_Class_20_Data_2F_Create_20_Super_20_Class_case_1_local_2_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Class_20_Data_2F_Create_20_Super_20_Class_case_1_local_2_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_constant(PARAMETERS,"Name",ROOT(3));

result = vpx_constant(PARAMETERS,"Required Classes",ROOT(4));

result = vpx_method_Find_20_Instance(PARAMETERS,TERMINAL(2),TERMINAL(3),TERMINAL(4),ROOT(5),ROOT(6));

result = vpx_match(PARAMETERS,"0",TERMINAL(5));
NEXTCASEONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTER(7)
}

enum opTrigger vpx_method_Class_20_Data_2F_Create_20_Super_20_Class_case_1_local_2_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Class_20_Data_2F_Create_20_Super_20_Class_case_1_local_2_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(7)
INPUT(0,0)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_Item_20_Data,1,1,NONE,ROOT(1));

result = vpx_set(PARAMETERS,kVPXValue_Parent,TERMINAL(1),TERMINAL(0),ROOT(2));

result = vpx_instantiate(PARAMETERS,kVPXClass_Section_20_Data,1,1,NONE,ROOT(3));

result = vpx_constant(PARAMETERS,"Required Classes",ROOT(4));

result = vpx_set(PARAMETERS,kVPXValue_Name,TERMINAL(3),TERMINAL(4),ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Install_20_Helper,2,0,TERMINAL(2),TERMINAL(5));

result = vpx_set(PARAMETERS,kVPXValue_Owner,TERMINAL(5),TERMINAL(2),ROOT(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Initialize_20_Item_20_Data,2,0,TERMINAL(6),TERMINAL(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Add_20_To_20_List_20_Data,2,0,TERMINAL(6),TERMINAL(0));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Make_20_Dirty,1,0,TERMINAL(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Send_20_Refresh,1,0,TERMINAL(0));

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTERWITHNONE(7)
}

enum opTrigger vpx_method_Class_20_Data_2F_Create_20_Super_20_Class_case_1_local_2_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Class_20_Data_2F_Create_20_Super_20_Class_case_1_local_2_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Class_20_Data_2F_Create_20_Super_20_Class_case_1_local_2_case_1_local_6_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Class_20_Data_2F_Create_20_Super_20_Class_case_1_local_2_case_1_local_6_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Class_20_Data_2F_Create_20_Super_20_Class_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Class_20_Data_2F_Create_20_Super_20_Class_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Project_20_Data,1,1,TERMINAL(0),ROOT(1));

result = vpx_constant(PARAMETERS,"Section Data",ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(1),TERMINAL(2),ROOT(3));
FAILONFAILURE

result = vpx_constant(PARAMETERS,"Class Data",ROOT(4));

result = vpx_method_Class_20_Data_2F_Create_20_Super_20_Class_case_1_local_2_case_1_local_6(PARAMETERS,TERMINAL(3),ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(5),TERMINAL(4),ROOT(6));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTERSINGLECASE(7)
}

enum opTrigger vpx_method_Class_20_Data_2F_Create_20_Super_20_Class_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Class_20_Data_2F_Create_20_Super_20_Class_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(7)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_instantiate(PARAMETERS,kVPXClass_Item_20_Data,1,1,NONE,ROOT(2));

result = vpx_set(PARAMETERS,kVPXValue_Parent,TERMINAL(2),TERMINAL(0),ROOT(3));

result = vpx_instantiate(PARAMETERS,kVPXClass_Class_20_Data,1,1,NONE,ROOT(4));

result = vpx_set(PARAMETERS,kVPXValue_Name,TERMINAL(4),TERMINAL(1),ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Install_20_Helper,2,0,TERMINAL(3),TERMINAL(5));

result = vpx_set(PARAMETERS,kVPXValue_Owner,TERMINAL(5),TERMINAL(3),ROOT(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Initialize_20_Item_20_Data,2,0,TERMINAL(6),TERMINAL(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Add_20_To_20_List_20_Data,2,0,TERMINAL(6),TERMINAL(0));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Make_20_Dirty,1,0,TERMINAL(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Send_20_Refresh,1,0,TERMINAL(0));

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTERSINGLECASEWITHNONE(7)
}

enum opTrigger vpx_method_Class_20_Data_2F_Create_20_Super_20_Class_case_1_local_4_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Class_20_Data_2F_Create_20_Super_20_Class_case_1_local_4_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADERWITHNONE(13)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Inherited,TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(5));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Name,TERMINAL(4),ROOT(6),ROOT(7));

result = vpx_instantiate(PARAMETERS,kVPXClass_Item_20_Data,1,1,NONE,ROOT(8));

result = vpx_set(PARAMETERS,kVPXValue_Parent,TERMINAL(8),TERMINAL(0),ROOT(9));

result = vpx_instantiate(PARAMETERS,kVPXClass_Attribute_20_Data,1,1,NONE,ROOT(10));

result = vpx_set(PARAMETERS,kVPXValue_Name,TERMINAL(10),TERMINAL(7),ROOT(11));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Install_20_Helper,2,0,TERMINAL(9),TERMINAL(11));

result = vpx_set(PARAMETERS,kVPXValue_Owner,TERMINAL(11),TERMINAL(9),ROOT(12));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Initialize_20_Item_20_Data,2,0,TERMINAL(12),TERMINAL(9));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Add_20_To_20_List_20_Data,2,0,TERMINAL(12),TERMINAL(0));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Make_20_Dirty,1,0,TERMINAL(12));

result = kSuccess;

FOOTERWITHNONE(13)
}

enum opTrigger vpx_method_Class_20_Data_2F_Create_20_Super_20_Class_case_1_local_4_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Class_20_Data_2F_Create_20_Super_20_Class_case_1_local_4_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Class_20_Data_2F_Create_20_Super_20_Class_case_1_local_4_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Class_20_Data_2F_Create_20_Super_20_Class_case_1_local_4_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Class_20_Data_2F_Create_20_Super_20_Class_case_1_local_4_case_1_local_6_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Class_20_Data_2F_Create_20_Super_20_Class_case_1_local_4_case_1_local_6_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Class_20_Data_2F_Create_20_Super_20_Class_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Class_20_Data_2F_Create_20_Super_20_Class_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Attribute Data",ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(0),TERMINAL(2),ROOT(3));
TERMINATEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(1),TERMINAL(2),ROOT(6));
TERMINATEONFAILURE

if( (repeatLimit = vpx_multiplex(1,TERMINAL(5))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Class_20_Data_2F_Create_20_Super_20_Class_case_1_local_4_case_1_local_6(PARAMETERS,TERMINAL(6),LIST(5));
TERMINATEONFAILURE
REPEATFINISH
} else {
}

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Send_20_Refresh,1,0,TERMINAL(6));

result = kSuccess;

FOOTERSINGLECASE(7)
}

enum opTrigger vpx_method_Class_20_Data_2F_Create_20_Super_20_Class_case_1_local_5_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Class_20_Data_2F_Create_20_Super_20_Class_case_1_local_5_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADERWITHNONE(13)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Inherited,TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(5));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Name,TERMINAL(4),ROOT(6),ROOT(7));

result = vpx_instantiate(PARAMETERS,kVPXClass_Item_20_Data,1,1,NONE,ROOT(8));

result = vpx_set(PARAMETERS,kVPXValue_Parent,TERMINAL(8),TERMINAL(0),ROOT(9));

result = vpx_instantiate(PARAMETERS,kVPXClass_Class_20_Attribute_20_Data,1,1,NONE,ROOT(10));

result = vpx_set(PARAMETERS,kVPXValue_Name,TERMINAL(10),TERMINAL(7),ROOT(11));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Install_20_Helper,2,0,TERMINAL(9),TERMINAL(11));

result = vpx_set(PARAMETERS,kVPXValue_Owner,TERMINAL(11),TERMINAL(9),ROOT(12));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Initialize_20_Item_20_Data,2,0,TERMINAL(12),TERMINAL(9));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Add_20_To_20_List_20_Data,2,0,TERMINAL(12),TERMINAL(0));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Make_20_Dirty,1,0,TERMINAL(12));

result = kSuccess;

FOOTERWITHNONE(13)
}

enum opTrigger vpx_method_Class_20_Data_2F_Create_20_Super_20_Class_case_1_local_5_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Class_20_Data_2F_Create_20_Super_20_Class_case_1_local_5_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Class_20_Data_2F_Create_20_Super_20_Class_case_1_local_5_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Class_20_Data_2F_Create_20_Super_20_Class_case_1_local_5_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Class_20_Data_2F_Create_20_Super_20_Class_case_1_local_5_case_1_local_6_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Class_20_Data_2F_Create_20_Super_20_Class_case_1_local_5_case_1_local_6_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Class_20_Data_2F_Create_20_Super_20_Class_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Class_20_Data_2F_Create_20_Super_20_Class_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Class Attribute Data",ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(0),TERMINAL(2),ROOT(3));
TERMINATEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(1),TERMINAL(2),ROOT(6));
TERMINATEONFAILURE

if( (repeatLimit = vpx_multiplex(1,TERMINAL(5))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Class_20_Data_2F_Create_20_Super_20_Class_case_1_local_5_case_1_local_6(PARAMETERS,TERMINAL(6),LIST(5));
TERMINATEONFAILURE
REPEATFINISH
} else {
}

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Send_20_Refresh,1,0,TERMINAL(6));

result = kSuccess;

FOOTERSINGLECASE(7)
}

enum opTrigger vpx_method_Class_20_Data_2F_Create_20_Super_20_Class(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Class_20_Data_2F_Create_20_Super_20_Class_case_1_local_2(PARAMETERS,TERMINAL(0),ROOT(2));
FAILONFAILURE

result = vpx_method_Class_20_Data_2F_Create_20_Super_20_Class_case_1_local_3(PARAMETERS,TERMINAL(2),TERMINAL(1),ROOT(3));
FAILONFAILURE

result = vpx_method_Class_20_Data_2F_Create_20_Super_20_Class_case_1_local_4(PARAMETERS,TERMINAL(0),TERMINAL(3));

result = vpx_method_Class_20_Data_2F_Create_20_Super_20_Class_case_1_local_5(PARAMETERS,TERMINAL(0),TERMINAL(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Add_20_Sub_20_Class,2,0,TERMINAL(3),TERMINAL(0));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Class_20_Data_2F_Add_20_Sub_20_Class_case_1_local_5_case_1_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Class_20_Data_2F_Add_20_Sub_20_Class_case_1_local_5_case_1_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Name,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Name,TERMINAL(1),ROOT(4),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP__3D_,2,0,TERMINAL(3),TERMINAL(5));
FAILONFAILURE

result = kSuccess;

FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Class_20_Data_2F_Add_20_Sub_20_Class_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Class_20_Data_2F_Add_20_Sub_20_Class_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(11)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Attribute Data",ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(1),TERMINAL(2),ROOT(3));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(0),TERMINAL(2),ROOT(4));
TERMINATEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(4),ROOT(5),ROOT(6));

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(3),ROOT(7),ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP__28_length_29_,1,1,TERMINAL(8),ROOT(9));

result = vpx_call_primitive(PARAMETERS,VPLP__28_length_29_,1,1,TERMINAL(6),ROOT(10));

result = vpx_call_primitive(PARAMETERS,VPLP__3C3D_,2,0,TERMINAL(10),TERMINAL(9));
FAILONFAILURE

if( (repeatLimit = vpx_multiplex(2,TERMINAL(6),TERMINAL(8))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Class_20_Data_2F_Add_20_Sub_20_Class_case_1_local_5_case_1_local_10(PARAMETERS,LIST(6),LIST(8));
FAILONFAILURE
REPEATFINISH
} else {
}

result = kSuccess;

FOOTERSINGLECASE(11)
}

enum opTrigger vpx_method_Class_20_Data_2F_Add_20_Sub_20_Class_case_1_local_6_case_1_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Class_20_Data_2F_Add_20_Sub_20_Class_case_1_local_6_case_1_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Name,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Name,TERMINAL(1),ROOT(4),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP__3D_,2,0,TERMINAL(3),TERMINAL(5));
FAILONFAILURE

result = kSuccess;

FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Class_20_Data_2F_Add_20_Sub_20_Class_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Class_20_Data_2F_Add_20_Sub_20_Class_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(11)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Class Attribute Data",ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(1),TERMINAL(2),ROOT(3));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(0),TERMINAL(2),ROOT(4));
TERMINATEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(4),ROOT(5),ROOT(6));

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(3),ROOT(7),ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP__28_length_29_,1,1,TERMINAL(8),ROOT(9));

result = vpx_call_primitive(PARAMETERS,VPLP__28_length_29_,1,1,TERMINAL(6),ROOT(10));

result = vpx_call_primitive(PARAMETERS,VPLP__3C3D_,2,0,TERMINAL(10),TERMINAL(9));
FAILONFAILURE

if( (repeatLimit = vpx_multiplex(2,TERMINAL(6),TERMINAL(8))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Class_20_Data_2F_Add_20_Sub_20_Class_case_1_local_6_case_1_local_10(PARAMETERS,LIST(6),LIST(8));
FAILONFAILURE
REPEATFINISH
} else {
}

result = kSuccess;

FOOTERSINGLECASE(11)
}

enum opTrigger vpx_method_Class_20_Data_2F_Add_20_Sub_20_Class_case_1_local_12_case_1_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Class_20_Data_2F_Add_20_Sub_20_Class_case_1_local_12_case_1_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_constant(PARAMETERS,"TRUE",ROOT(4));

result = vpx_set(PARAMETERS,kVPXValue_Inherited,TERMINAL(3),TERMINAL(4),ROOT(5));

result = kSuccess;

FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Class_20_Data_2F_Add_20_Sub_20_Class_case_1_local_12_case_1_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Class_20_Data_2F_Add_20_Sub_20_Class_case_1_local_12_case_1_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_constant(PARAMETERS,"FALSE",ROOT(3));

result = vpx_set(PARAMETERS,kVPXValue_Inherited,TERMINAL(2),TERMINAL(3),ROOT(4));

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Class_20_Data_2F_Add_20_Sub_20_Class_case_1_local_12(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Class_20_Data_2F_Add_20_Sub_20_Class_case_1_local_12(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(12)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Attribute Data",ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(1),TERMINAL(2),ROOT(3));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(0),TERMINAL(2),ROOT(4));
TERMINATEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(4),ROOT(5),ROOT(6));

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(3),ROOT(7),ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP__28_length_29_,1,1,TERMINAL(6),ROOT(9));

result = vpx_call_primitive(PARAMETERS,VPLP_split_2D_nth,2,2,TERMINAL(8),TERMINAL(9),ROOT(10),ROOT(11));

if( (repeatLimit = vpx_multiplex(2,TERMINAL(6),TERMINAL(10))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Class_20_Data_2F_Add_20_Sub_20_Class_case_1_local_12_case_1_local_9(PARAMETERS,LIST(6),LIST(10));
REPEATFINISH
} else {
}

if( (repeatLimit = vpx_multiplex(1,TERMINAL(11))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Class_20_Data_2F_Add_20_Sub_20_Class_case_1_local_12_case_1_local_10(PARAMETERS,LIST(11));
REPEATFINISH
} else {
}

result = kSuccess;

FOOTERSINGLECASE(12)
}

enum opTrigger vpx_method_Class_20_Data_2F_Add_20_Sub_20_Class_case_1_local_13_case_1_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Class_20_Data_2F_Add_20_Sub_20_Class_case_1_local_13_case_1_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_constant(PARAMETERS,"TRUE",ROOT(4));

result = vpx_set(PARAMETERS,kVPXValue_Inherited,TERMINAL(3),TERMINAL(4),ROOT(5));

result = kSuccess;

FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Class_20_Data_2F_Add_20_Sub_20_Class_case_1_local_13_case_1_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Class_20_Data_2F_Add_20_Sub_20_Class_case_1_local_13_case_1_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_constant(PARAMETERS,"FALSE",ROOT(3));

result = vpx_set(PARAMETERS,kVPXValue_Inherited,TERMINAL(2),TERMINAL(3),ROOT(4));

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Class_20_Data_2F_Add_20_Sub_20_Class_case_1_local_13(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Class_20_Data_2F_Add_20_Sub_20_Class_case_1_local_13(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(12)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Class Attribute Data",ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(1),TERMINAL(2),ROOT(3));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(0),TERMINAL(2),ROOT(4));
TERMINATEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(4),ROOT(5),ROOT(6));

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(3),ROOT(7),ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP__28_length_29_,1,1,TERMINAL(6),ROOT(9));

result = vpx_call_primitive(PARAMETERS,VPLP_split_2D_nth,2,2,TERMINAL(8),TERMINAL(9),ROOT(10),ROOT(11));

if( (repeatLimit = vpx_multiplex(2,TERMINAL(6),TERMINAL(10))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Class_20_Data_2F_Add_20_Sub_20_Class_case_1_local_13_case_1_local_9(PARAMETERS,LIST(6),LIST(10));
REPEATFINISH
} else {
}

if( (repeatLimit = vpx_multiplex(1,TERMINAL(11))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Class_20_Data_2F_Add_20_Sub_20_Class_case_1_local_13_case_1_local_10(PARAMETERS,LIST(11));
REPEATFINISH
} else {
}

result = kSuccess;

FOOTERSINGLECASE(12)
}

enum opTrigger vpx_method_Class_20_Data_2F_Add_20_Sub_20_Class_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Class_20_Data_2F_Add_20_Sub_20_Class_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(11)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Sub_20_Classes,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP__28_in_29_,2,1,TERMINAL(3),TERMINAL(1),ROOT(4));

result = vpx_match(PARAMETERS,"0",TERMINAL(4));
NEXTCASEONFAILURE

result = vpx_method_Class_20_Data_2F_Add_20_Sub_20_Class_case_1_local_5(PARAMETERS,TERMINAL(2),TERMINAL(1));
FAILONFAILURE

result = vpx_method_Class_20_Data_2F_Add_20_Sub_20_Class_case_1_local_6(PARAMETERS,TERMINAL(2),TERMINAL(1));
FAILONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_attach_2D_r,2,1,TERMINAL(3),TERMINAL(1),ROOT(5));

result = vpx_set(PARAMETERS,kVPXValue_Sub_20_Classes,TERMINAL(2),TERMINAL(5),ROOT(6));

result = vpx_get(PARAMETERS,kVPXValue_Name,TERMINAL(6),ROOT(7),ROOT(8));

result = vpx_set(PARAMETERS,kVPXValue_Super_20_Class,TERMINAL(1),TERMINAL(8),ROOT(9));

result = vpx_set(PARAMETERS,kVPXValue_Super_20_Instance,TERMINAL(9),TERMINAL(7),ROOT(10));

result = vpx_method_Class_20_Data_2F_Add_20_Sub_20_Class_case_1_local_12(PARAMETERS,TERMINAL(7),TERMINAL(10));

result = vpx_method_Class_20_Data_2F_Add_20_Sub_20_Class_case_1_local_13(PARAMETERS,TERMINAL(7),TERMINAL(10));

result = kSuccess;

FOOTER(11)
}

enum opTrigger vpx_method_Class_20_Data_2F_Add_20_Sub_20_Class_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Class_20_Data_2F_Add_20_Sub_20_Class_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Class_20_Data_2F_Add_20_Sub_20_Class(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Class_20_Data_2F_Add_20_Sub_20_Class_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Class_20_Data_2F_Add_20_Sub_20_Class_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Class_20_Data_2F_After_20_Import_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Class_20_Data_2F_After_20_Import_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Project_20_Data,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
NEXTCASEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Classes,1,1,TERMINAL(1),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Resolve_20_Class,2,2,TERMINAL(0),TERMINAL(2),ROOT(3),ROOT(4));

result = kSuccess;

FOOTER(5)
}

enum opTrigger vpx_method_Class_20_Data_2F_After_20_Import_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Class_20_Data_2F_After_20_Import_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_Class_20_Data_2F_After_20_Import(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Class_20_Data_2F_After_20_Import_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Class_20_Data_2F_After_20_Import_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Class_20_Data_2F_Parse_20_CPX_20_Buffer_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2);
enum opTrigger vpx_method_Class_20_Data_2F_Parse_20_CPX_20_Buffer_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2)
{
HEADER(15)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_constant(PARAMETERS,"4",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_text,3,3,TERMINAL(3),TERMINAL(2),TERMINAL(4),ROOT(5),ROOT(6),ROOT(7));

result = vpx_match(PARAMETERS,"crid",TERMINAL(7));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"2",ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_integer,3,3,TERMINAL(5),TERMINAL(6),TERMINAL(8),ROOT(9),ROOT(10),ROOT(11));

result = vpx_constant(PARAMETERS,"/Set Super Class",ROOT(12));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,3,1,TERMINAL(0),TERMINAL(11),TERMINAL(12),ROOT(13));

result = vpx_call_primitive(PARAMETERS,VPLP_attach_2D_r,2,1,TERMINAL(1),TERMINAL(13),ROOT(14));

result = kSuccess;

OUTPUT(0,TERMINAL(0))
OUTPUT(1,TERMINAL(14))
OUTPUT(2,TERMINAL(10))
FOOTER(15)
}

enum opTrigger vpx_method_Class_20_Data_2F_Parse_20_CPX_20_Buffer_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2);
enum opTrigger vpx_method_Class_20_Data_2F_Parse_20_CPX_20_Buffer_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2)
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

enum opTrigger vpx_method_Class_20_Data_2F_Parse_20_CPX_20_Buffer_case_3_local_14(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Class_20_Data_2F_Parse_20_CPX_20_Buffer_case_3_local_14(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
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

enum opTrigger vpx_method_Class_20_Data_2F_Parse_20_CPX_20_Buffer_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2);
enum opTrigger vpx_method_Class_20_Data_2F_Parse_20_CPX_20_Buffer_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2)
{
HEADERWITHNONE(15)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_constant(PARAMETERS,"4",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_text,3,3,TERMINAL(3),TERMINAL(2),TERMINAL(4),ROOT(5),ROOT(6),ROOT(7));

result = vpx_match(PARAMETERS,"meth",TERMINAL(7));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_attach_2D_l,2,1,TERMINAL(0),TERMINAL(1),ROOT(8));

result = vpx_instantiate(PARAMETERS,kVPXClass_Universal_20_Data,1,1,NONE,ROOT(9));

result = vpx_instantiate(PARAMETERS,kVPXClass_Item_20_Data,1,1,NONE,ROOT(10));

result = vpx_constant(PARAMETERS,"Universal Data",ROOT(11));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(0),TERMINAL(11),ROOT(12));

result = vpx_set(PARAMETERS,kVPXValue_Parent,TERMINAL(10),TERMINAL(12),ROOT(13));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Buffer_20_Initialization,3,0,TERMINAL(9),TERMINAL(6),TERMINAL(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Install_20_Helper,2,0,TERMINAL(13),TERMINAL(9));

result = vpx_set(PARAMETERS,kVPXValue_Owner,TERMINAL(9),TERMINAL(13),ROOT(14));

result = vpx_method_Class_20_Data_2F_Parse_20_CPX_20_Buffer_case_3_local_14(PARAMETERS,TERMINAL(14),TERMINAL(13));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Add_20_To_20_List_20_Data,2,0,TERMINAL(14),TERMINAL(12));

result = kSuccess;

OUTPUT(0,TERMINAL(14))
OUTPUT(1,TERMINAL(8))
OUTPUT(2,TERMINAL(6))
FOOTERWITHNONE(15)
}

enum opTrigger vpx_method_Class_20_Data_2F_Parse_20_CPX_20_Buffer_case_4_local_25_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Class_20_Data_2F_Parse_20_CPX_20_Buffer_case_4_local_25_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"1",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"FALSE",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Class_20_Data_2F_Parse_20_CPX_20_Buffer_case_4_local_25_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Class_20_Data_2F_Parse_20_CPX_20_Buffer_case_4_local_25_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"TRUE",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Class_20_Data_2F_Parse_20_CPX_20_Buffer_case_4_local_25(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Class_20_Data_2F_Parse_20_CPX_20_Buffer_case_4_local_25(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Class_20_Data_2F_Parse_20_CPX_20_Buffer_case_4_local_25_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Class_20_Data_2F_Parse_20_CPX_20_Buffer_case_4_local_25_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Class_20_Data_2F_Parse_20_CPX_20_Buffer_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2);
enum opTrigger vpx_method_Class_20_Data_2F_Parse_20_CPX_20_Buffer_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2)
{
HEADERWITHNONE(34)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_constant(PARAMETERS,"4",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_text,3,3,TERMINAL(3),TERMINAL(2),TERMINAL(4),ROOT(5),ROOT(6),ROOT(7));

result = vpx_match(PARAMETERS,"iatt",TERMINAL(7));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_attach_2D_l,2,1,TERMINAL(0),TERMINAL(1),ROOT(8));

result = vpx_instantiate(PARAMETERS,kVPXClass_Attribute_20_Data,1,1,NONE,ROOT(9));

result = vpx_instantiate(PARAMETERS,kVPXClass_Item_20_Data,1,1,NONE,ROOT(10));

result = vpx_constant(PARAMETERS,"Attribute Data",ROOT(11));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(0),TERMINAL(11),ROOT(12));

result = vpx_set(PARAMETERS,kVPXValue_Parent,TERMINAL(10),TERMINAL(12),ROOT(13));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Install_20_Helper,2,0,TERMINAL(13),TERMINAL(9));

result = vpx_set(PARAMETERS,kVPXValue_Owner,TERMINAL(9),TERMINAL(13),ROOT(14));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Initialize_20_Item_20_Data,2,0,TERMINAL(14),TERMINAL(13));

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(12),ROOT(15),ROOT(16));

result = vpx_call_primitive(PARAMETERS,VPLP_attach_2D_r,2,1,TERMINAL(16),TERMINAL(13),ROOT(17));

result = vpx_set(PARAMETERS,kVPXValue_List,TERMINAL(15),TERMINAL(17),ROOT(18));

result = vpx_constant(PARAMETERS,"2",ROOT(19));

result = vpx_constant(PARAMETERS,"1",ROOT(20));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_integer,3,3,TERMINAL(5),TERMINAL(6),TERMINAL(20),ROOT(21),ROOT(22),ROOT(23));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_integer,3,3,TERMINAL(21),TERMINAL(22),TERMINAL(20),ROOT(24),ROOT(25),ROOT(26));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_integer,3,3,TERMINAL(24),TERMINAL(25),TERMINAL(19),ROOT(27),ROOT(28),ROOT(29));

result = vpx_persistent(PARAMETERS,kVPXValue_Attribute_20_Indices,0,1,ROOT(30));

result = vpx_call_primitive(PARAMETERS,VPLP_attach_2D_r,2,1,TERMINAL(30),TERMINAL(29),ROOT(31));

result = vpx_persistent(PARAMETERS,kVPXValue_Attribute_20_Indices,1,0,TERMINAL(31));

result = vpx_method_Class_20_Data_2F_Parse_20_CPX_20_Buffer_case_4_local_25(PARAMETERS,TERMINAL(23),ROOT(32));

result = vpx_set(PARAMETERS,kVPXValue_Inherited,TERMINAL(14),TERMINAL(32),ROOT(33));

result = kSuccess;

OUTPUT(0,TERMINAL(33))
OUTPUT(1,TERMINAL(8))
OUTPUT(2,TERMINAL(28))
FOOTERWITHNONE(34)
}

enum opTrigger vpx_method_Class_20_Data_2F_Parse_20_CPX_20_Buffer_case_5_local_25_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Class_20_Data_2F_Parse_20_CPX_20_Buffer_case_5_local_25_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"0",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"FALSE",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Class_20_Data_2F_Parse_20_CPX_20_Buffer_case_5_local_25_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Class_20_Data_2F_Parse_20_CPX_20_Buffer_case_5_local_25_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"TRUE",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Class_20_Data_2F_Parse_20_CPX_20_Buffer_case_5_local_25(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Class_20_Data_2F_Parse_20_CPX_20_Buffer_case_5_local_25(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Class_20_Data_2F_Parse_20_CPX_20_Buffer_case_5_local_25_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Class_20_Data_2F_Parse_20_CPX_20_Buffer_case_5_local_25_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Class_20_Data_2F_Parse_20_CPX_20_Buffer_case_5(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2);
enum opTrigger vpx_method_Class_20_Data_2F_Parse_20_CPX_20_Buffer_case_5(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2)
{
HEADERWITHNONE(34)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_constant(PARAMETERS,"4",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_text,3,3,TERMINAL(3),TERMINAL(2),TERMINAL(4),ROOT(5),ROOT(6),ROOT(7));

result = vpx_match(PARAMETERS,"catt",TERMINAL(7));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_attach_2D_l,2,1,TERMINAL(0),TERMINAL(1),ROOT(8));

result = vpx_instantiate(PARAMETERS,kVPXClass_Class_20_Attribute_20_Data,1,1,NONE,ROOT(9));

result = vpx_instantiate(PARAMETERS,kVPXClass_Item_20_Data,1,1,NONE,ROOT(10));

result = vpx_constant(PARAMETERS,"Class Attribute Data",ROOT(11));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(0),TERMINAL(11),ROOT(12));

result = vpx_set(PARAMETERS,kVPXValue_Parent,TERMINAL(10),TERMINAL(12),ROOT(13));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Install_20_Helper,2,0,TERMINAL(13),TERMINAL(9));

result = vpx_set(PARAMETERS,kVPXValue_Owner,TERMINAL(9),TERMINAL(13),ROOT(14));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Initialize_20_Item_20_Data,2,0,TERMINAL(14),TERMINAL(13));

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(12),ROOT(15),ROOT(16));

result = vpx_call_primitive(PARAMETERS,VPLP_attach_2D_r,2,1,TERMINAL(16),TERMINAL(13),ROOT(17));

result = vpx_set(PARAMETERS,kVPXValue_List,TERMINAL(15),TERMINAL(17),ROOT(18));

result = vpx_constant(PARAMETERS,"2",ROOT(19));

result = vpx_constant(PARAMETERS,"1",ROOT(20));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_integer,3,3,TERMINAL(5),TERMINAL(6),TERMINAL(20),ROOT(21),ROOT(22),ROOT(23));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_integer,3,3,TERMINAL(21),TERMINAL(22),TERMINAL(20),ROOT(24),ROOT(25),ROOT(26));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_integer,3,3,TERMINAL(24),TERMINAL(25),TERMINAL(19),ROOT(27),ROOT(28),ROOT(29));

result = vpx_persistent(PARAMETERS,kVPXValue_Class_20_Attribute_20_Indices,0,1,ROOT(30));

result = vpx_call_primitive(PARAMETERS,VPLP_attach_2D_r,2,1,TERMINAL(30),TERMINAL(29),ROOT(31));

result = vpx_persistent(PARAMETERS,kVPXValue_Class_20_Attribute_20_Indices,1,0,TERMINAL(31));

result = vpx_method_Class_20_Data_2F_Parse_20_CPX_20_Buffer_case_5_local_25(PARAMETERS,TERMINAL(23),ROOT(32));

result = vpx_set(PARAMETERS,kVPXValue_Inherited,TERMINAL(14),TERMINAL(32),ROOT(33));

result = kSuccess;

OUTPUT(0,TERMINAL(33))
OUTPUT(1,TERMINAL(8))
OUTPUT(2,TERMINAL(28))
FOOTERWITHNONE(34)
}

enum opTrigger vpx_method_Class_20_Data_2F_Parse_20_CPX_20_Buffer_case_6_local_9_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Class_20_Data_2F_Parse_20_CPX_20_Buffer_case_6_local_9_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_set_2D_nth_21_,3,1,TERMINAL(0),TERMINAL(1),TERMINAL(2),ROOT(3));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Class_20_Data_2F_Parse_20_CPX_20_Buffer_case_6_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Class_20_Data_2F_Parse_20_CPX_20_Buffer_case_6_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_persistent(PARAMETERS,kVPXValue_Attribute_20_Indices,0,1,ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP__28_length_29_,1,1,TERMINAL(0),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_make_2D_list,1,1,TERMINAL(2),ROOT(3));

if( (repeatLimit = vpx_multiplex(2,TERMINAL(0),TERMINAL(1))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Class_20_Data_2F_Parse_20_CPX_20_Buffer_case_6_local_9_case_1_local_5(PARAMETERS,TERMINAL(3),LIST(0),LIST(1));
REPEATFINISH
} else {
}

result = vpx_constant(PARAMETERS,"( )",ROOT(4));

result = vpx_persistent(PARAMETERS,kVPXValue_Attribute_20_Indices,1,0,TERMINAL(4));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Class_20_Data_2F_Parse_20_CPX_20_Buffer_case_6_local_15_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Class_20_Data_2F_Parse_20_CPX_20_Buffer_case_6_local_15_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_set_2D_nth_21_,3,1,TERMINAL(0),TERMINAL(1),TERMINAL(2),ROOT(3));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Class_20_Data_2F_Parse_20_CPX_20_Buffer_case_6_local_15(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Class_20_Data_2F_Parse_20_CPX_20_Buffer_case_6_local_15(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_persistent(PARAMETERS,kVPXValue_Class_20_Attribute_20_Indices,0,1,ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP__28_length_29_,1,1,TERMINAL(0),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_make_2D_list,1,1,TERMINAL(2),ROOT(3));

if( (repeatLimit = vpx_multiplex(2,TERMINAL(0),TERMINAL(1))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Class_20_Data_2F_Parse_20_CPX_20_Buffer_case_6_local_15_case_1_local_5(PARAMETERS,TERMINAL(3),LIST(0),LIST(1));
REPEATFINISH
} else {
}

result = vpx_constant(PARAMETERS,"( )",ROOT(4));

result = vpx_persistent(PARAMETERS,kVPXValue_Class_20_Attribute_20_Indices,1,0,TERMINAL(4));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Class_20_Data_2F_Parse_20_CPX_20_Buffer_case_6(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2);
enum opTrigger vpx_method_Class_20_Data_2F_Parse_20_CPX_20_Buffer_case_6(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2)
{
HEADER(22)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_constant(PARAMETERS,"8",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_text,3,3,TERMINAL(3),TERMINAL(2),TERMINAL(4),ROOT(5),ROOT(6),ROOT(7));

result = vpx_match(PARAMETERS,"end clas",TERMINAL(7));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_detach_2D_l,1,2,TERMINAL(1),ROOT(8),ROOT(9));

result = vpx_constant(PARAMETERS,"Attribute Data",ROOT(10));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(0),TERMINAL(10),ROOT(11));

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(11),ROOT(12),ROOT(13));

result = vpx_method_Class_20_Data_2F_Parse_20_CPX_20_Buffer_case_6_local_9(PARAMETERS,TERMINAL(13),ROOT(14));

result = vpx_set(PARAMETERS,kVPXValue_List,TERMINAL(12),TERMINAL(14),ROOT(15));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(14))) ){
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open,2,0,LIST(14),TERMINAL(12));
REPEATFINISH
} else {
}

result = vpx_constant(PARAMETERS,"Class Attribute Data",ROOT(16));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(0),TERMINAL(16),ROOT(17));

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(17),ROOT(18),ROOT(19));

result = vpx_method_Class_20_Data_2F_Parse_20_CPX_20_Buffer_case_6_local_15(PARAMETERS,TERMINAL(19),ROOT(20));

result = vpx_set(PARAMETERS,kVPXValue_List,TERMINAL(18),TERMINAL(20),ROOT(21));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(20))) ){
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open,2,0,LIST(20),TERMINAL(18));
REPEATFINISH
} else {
}

result = kSuccess;

OUTPUT(0,TERMINAL(8))
OUTPUT(1,TERMINAL(9))
OUTPUT(2,TERMINAL(6))
FOOTER(22)
}

enum opTrigger vpx_method_Class_20_Data_2F_Parse_20_CPX_20_Buffer_case_7_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Class_20_Data_2F_Parse_20_CPX_20_Buffer_case_7_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
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

enum opTrigger vpx_method_Class_20_Data_2F_Parse_20_CPX_20_Buffer_case_7(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2);
enum opTrigger vpx_method_Class_20_Data_2F_Parse_20_CPX_20_Buffer_case_7(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2)
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
result = vpx_method_Class_20_Data_2F_Parse_20_CPX_20_Buffer_case_7_local_8(PARAMETERS,TERMINAL(5),LOOP(0),TERMINAL(8),ROOT(11));
REPEATFINISH

result = kSuccess;

OUTPUT(0,TERMINAL(0))
OUTPUT(1,TERMINAL(1))
OUTPUT(2,TERMINAL(11))
FOOTER(12)
}

enum opTrigger vpx_method_Class_20_Data_2F_Parse_20_CPX_20_Buffer_case_8(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2);
enum opTrigger vpx_method_Class_20_Data_2F_Parse_20_CPX_20_Buffer_case_8(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2)
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

enum opTrigger vpx_method_Class_20_Data_2F_Parse_20_CPX_20_Buffer(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Class_20_Data_2F_Parse_20_CPX_20_Buffer_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0,root1,root2))
if(vpx_method_Class_20_Data_2F_Parse_20_CPX_20_Buffer_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0,root1,root2))
if(vpx_method_Class_20_Data_2F_Parse_20_CPX_20_Buffer_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0,root1,root2))
if(vpx_method_Class_20_Data_2F_Parse_20_CPX_20_Buffer_case_4(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0,root1,root2))
if(vpx_method_Class_20_Data_2F_Parse_20_CPX_20_Buffer_case_5(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0,root1,root2))
if(vpx_method_Class_20_Data_2F_Parse_20_CPX_20_Buffer_case_6(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0,root1,root2))
if(vpx_method_Class_20_Data_2F_Parse_20_CPX_20_Buffer_case_7(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0,root1,root2))
vpx_method_Class_20_Data_2F_Parse_20_CPX_20_Buffer_case_8(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0,root1,root2);
return outcome;
}

enum opTrigger vpx_method_Class_20_Data_2F_Set_20_CPX_20_Text_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Class_20_Data_2F_Set_20_CPX_20_Text_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Name,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Project_20_Data,1,1,TERMINAL(2),ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(4),ROOT(5),ROOT(6));

result = vpx_constant(PARAMETERS,"NULL",ROOT(7));

result = vpx_constant(PARAMETERS,"class",ROOT(8));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Rename_20_Element,5,0,TERMINAL(6),TERMINAL(7),TERMINAL(3),TERMINAL(1),TERMINAL(8));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Mark_20_Instances,1,0,TERMINAL(5));

result = kSuccess;
FINISHONSUCCESS

OUTPUT(0,TERMINAL(1))
FOOTER(9)
}

enum opTrigger vpx_method_Class_20_Data_2F_Set_20_CPX_20_Text_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Class_20_Data_2F_Set_20_CPX_20_Text_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
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

enum opTrigger vpx_method_Class_20_Data_2F_Set_20_CPX_20_Text_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Class_20_Data_2F_Set_20_CPX_20_Text_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Class_20_Data_2F_Set_20_CPX_20_Text_case_1_local_2_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Class_20_Data_2F_Set_20_CPX_20_Text_case_1_local_2_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Class_20_Data_2F_Set_20_CPX_20_Text_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Class_20_Data_2F_Set_20_CPX_20_Text_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Super_20_Class,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Update_20_Record,1,0,TERMINAL(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Container,1,1,TERMINAL(2),ROOT(3));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
NEXTCASEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Editor,1,1,TERMINAL(3),ROOT(4));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(4));
NEXTCASEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Refresh_20_Data,1,0,TERMINAL(4));

result = kSuccess;

FOOTER(5)
}

enum opTrigger vpx_method_Class_20_Data_2F_Set_20_CPX_20_Text_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Class_20_Data_2F_Set_20_CPX_20_Text_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Class_20_Data_2F_Set_20_CPX_20_Text_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Class_20_Data_2F_Set_20_CPX_20_Text_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Class_20_Data_2F_Set_20_CPX_20_Text_case_1_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Class_20_Data_2F_Set_20_CPX_20_Text_case_1_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Class_20_Data_2F_Set_20_CPX_20_Text_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Class_20_Data_2F_Set_20_CPX_20_Text_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

REPEATBEGIN
LOOPTERMINALBEGIN(1)
LOOPTERMINAL(0,1,2)
result = vpx_method_Class_20_Data_2F_Set_20_CPX_20_Text_case_1_local_2(PARAMETERS,TERMINAL(0),LOOP(0),ROOT(2));
REPEATFINISH

result = vpx_call_context_super_method(PARAMETERS,kVPXMethod_Set_20_Name,2,0,TERMINAL(0),TERMINAL(2));

result = vpx_get(PARAMETERS,kVPXValue_Sub_20_Classes,TERMINAL(0),ROOT(3),ROOT(4));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(4))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Class_20_Data_2F_Set_20_CPX_20_Text_case_1_local_5(PARAMETERS,LIST(4),TERMINAL(2));
REPEATFINISH
} else {
}

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Update_20_Editors,1,0,TERMINAL(3));

result = kSuccess;

FOOTER(5)
}

enum opTrigger vpx_method_Class_20_Data_2F_Set_20_CPX_20_Text_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Class_20_Data_2F_Set_20_CPX_20_Text_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Duplicate class name!",ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_show,1,0,TERMINAL(2));
FAILONSUCCESS

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_Class_20_Data_2F_Set_20_CPX_20_Text(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Class_20_Data_2F_Set_20_CPX_20_Text_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Class_20_Data_2F_Set_20_CPX_20_Text_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Class_20_Data_2F_Get_20_Methods_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Class_20_Data_2F_Get_20_Methods_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Class_20_Data_2F_Get_20_Methods(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Universal Data",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(2),ROOT(3),ROOT(4));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(4))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Class_20_Data_2F_Get_20_Methods_case_1_local_5(PARAMETERS,LIST(4),ROOT(5));
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

enum opTrigger vpx_method_Class_20_Data_2F_Can_20_Delete_3F__case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Class_20_Data_2F_Can_20_Delete_3F__case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Record,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Project_20_Data,1,1,TERMINAL(0),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Has_20_Instances_3F_,2,0,TERMINAL(5),TERMINAL(2));
NEXTCASEONFAILURE

result = kSuccess;

FOOTER(6)
}

enum opTrigger vpx_method_Class_20_Data_2F_Can_20_Delete_3F__case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Class_20_Data_2F_Can_20_Delete_3F__case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"\"There are instances of <\"",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Select_20_Name,1,1,TERMINAL(0),ROOT(2));

result = vpx_constant(PARAMETERS,"\"> in use.\rIt can not be deleted.\"",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_show,3,0,TERMINAL(1),TERMINAL(2),TERMINAL(3));

result = kSuccess;
FAILONSUCCESS

FOOTER(4)
}

enum opTrigger vpx_method_Class_20_Data_2F_Can_20_Delete_3F_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Class_20_Data_2F_Can_20_Delete_3F__case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Class_20_Data_2F_Can_20_Delete_3F__case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Class_20_Data_2F_Find_20_Descendants_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Class_20_Data_2F_Find_20_Descendants_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method__28_Detach_20_Item_29_(PARAMETERS,TERMINAL(0),TERMINAL(1),ROOT(2),ROOT(3));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(2))
OUTPUT(1,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_Class_20_Data_2F_Find_20_Descendants_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Class_20_Data_2F_Find_20_Descendants_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
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

enum opTrigger vpx_method_Class_20_Data_2F_Find_20_Descendants_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Class_20_Data_2F_Find_20_Descendants_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Class_20_Data_2F_Find_20_Descendants_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1))
vpx_method_Class_20_Data_2F_Find_20_Descendants_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1);
return outcome;
}

enum opTrigger vpx_method_Class_20_Data_2F_Find_20_Descendants_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Class_20_Data_2F_Find_20_Descendants_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"18",ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP__2B2B_,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Class_20_Data_2F_Find_20_Descendants(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1,V_Object *root2,V_Object *root3)
{
HEADERWITHNONE(15)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Sub_20_Classes,TERMINAL(0),ROOT(3),ROOT(4));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(4))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
LOOPTERMINALBEGIN(1)
LOOPTERMINAL(0,1,5)
result = vpx_method_Class_20_Data_2F_Find_20_Descendants_case_1_local_3(PARAMETERS,LOOP(0),LIST(4),ROOT(5),ROOT(6));
LISTROOT(6,0)
REPEATFINISH
LISTROOTFINISH(6,0)
LISTROOTEND
} else {
ROOTNULL(5,TERMINAL(1))
ROOTEMPTY(6)
}

result = vpx_method_Key_20_Sort_20_Helper_2F_Sort_20_Instances_20_With_20_Key_20_Method(PARAMETERS,TERMINAL(6),NONE,NONE,ROOT(7));

result = vpx_method_Class_20_Data_2F_Find_20_Descendants_case_1_local_5(PARAMETERS,TERMINAL(2),ROOT(8));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(7))) ){
LISTROOTBEGIN(2)
REPEATBEGINWITHCOUNTER
LOOPTERMINALBEGIN(1)
LOOPTERMINAL(0,5,11)
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Find_20_Descendants,3,4,LIST(7),LOOP(0),TERMINAL(8),ROOT(9),ROOT(10),ROOT(11),ROOT(12));
LISTROOT(9,0)
LISTROOT(10,1)
REPEATFINISH
LISTROOTFINISH(9,0)
LISTROOTFINISH(10,1)
LISTROOTEND
} else {
ROOTEMPTY(9)
ROOTEMPTY(10)
ROOTNULL(11,TERMINAL(5))
ROOTNULL(12,NULL)
}

result = vpx_call_primitive(PARAMETERS,VPLP_attach_2D_l,2,1,TERMINAL(0),TERMINAL(9),ROOT(13));

result = vpx_call_primitive(PARAMETERS,VPLP_attach_2D_l,2,1,TERMINAL(2),TERMINAL(10),ROOT(14));

result = kSuccess;

OUTPUT(0,TERMINAL(13))
OUTPUT(1,TERMINAL(14))
OUTPUT(2,TERMINAL(11))
OUTPUT(3,TERMINAL(12))
FOOTERSINGLECASEWITHNONE(15)
}

/* Stop Universals */



Nat4 VPLC_Class_20_Attribute_20_Data_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Class_20_Attribute_20_Data_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 254 302 }{ 200 300 } */
	tempAttribute = attribute_add("Owner",tempClass,NULL,environment);
	tempAttribute = attribute_add("Name",tempClass,tempAttribute_Class_20_Attribute_20_Data_2F_Name,environment);
	tempAttribute = attribute_add("Value",tempClass,NULL,environment);
	tempAttribute = attribute_add("Inherited",tempClass,tempAttribute_Class_20_Attribute_20_Data_2F_Inherited,environment);
	tempAttribute = attribute_add("Record",tempClass,NULL,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"Attribute Data");
	return kNOERROR;
}

/* Start Universals: { 444 398 }{ 284 343 } */
enum opTrigger vpx_method_Class_20_Attribute_20_Data_2F_Add_20_To_20_List_20_Data_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Class_20_Attribute_20_Data_2F_Add_20_To_20_List_20_Data_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Name,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Test_20_Attribute_20_Name,2,0,TERMINAL(1),TERMINAL(3));
NEXTCASEONFAILURE

result = kSuccess;
FINISHONSUCCESS

FOOTER(4)
}

enum opTrigger vpx_method_Class_20_Attribute_20_Data_2F_Add_20_To_20_List_20_Data_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Class_20_Attribute_20_Data_2F_Add_20_To_20_List_20_Data_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Name,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_method_Unique_20_Name_20_For_20_String(PARAMETERS,TERMINAL(3),ROOT(4));

result = vpx_set(PARAMETERS,kVPXValue_Name,TERMINAL(2),TERMINAL(4),ROOT(5));

result = vpx_get(PARAMETERS,kVPXValue_Owner,TERMINAL(5),ROOT(6),ROOT(7));

result = vpx_set(PARAMETERS,kVPXValue_Name,TERMINAL(7),TERMINAL(4),ROOT(8));

result = kSuccess;

FOOTER(9)
}

enum opTrigger vpx_method_Class_20_Attribute_20_Data_2F_Add_20_To_20_List_20_Data_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Class_20_Attribute_20_Data_2F_Add_20_To_20_List_20_Data_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Class_20_Attribute_20_Data_2F_Add_20_To_20_List_20_Data_case_1_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Class_20_Attribute_20_Data_2F_Add_20_To_20_List_20_Data_case_1_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Class_20_Attribute_20_Data_2F_Add_20_To_20_List_20_Data(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(12)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(3),ROOT(4),ROOT(5));

REPEATBEGIN
result = vpx_method_Class_20_Attribute_20_Data_2F_Add_20_To_20_List_20_Data_case_1_local_4(PARAMETERS,TERMINAL(0),TERMINAL(5));
REPEATFINISH

result = vpx_method_Helper_20_Data_2F_Add_20_To_20_List_20_Data(PARAMETERS,TERMINAL(0),TERMINAL(1));

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(1),ROOT(6),ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP__28_length_29_,1,1,TERMINAL(7),ROOT(8));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Grandparent_20_Helper,1,1,TERMINAL(0),ROOT(9));

result = vpx_get(PARAMETERS,kVPXValue_Sub_20_Classes,TERMINAL(9),ROOT(10),ROOT(11));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(11))) ){
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Insert_20_Class_20_Attribute,3,0,LIST(11),TERMINAL(0),TERMINAL(8));
REPEATFINISH
} else {
}

result = kSuccess;

FOOTERSINGLECASE(12)
}

enum opTrigger vpx_method_Class_20_Attribute_20_Data_2F_Remove_20_Self_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Class_20_Attribute_20_Data_2F_Remove_20_Self_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(16)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Inherited,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_match(PARAMETERS,"FALSE",TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Owner,TERMINAL(1),ROOT(3),ROOT(4));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(4));
NEXTCASEONSUCCESS

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(4),ROOT(5),ROOT(6));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(6));
NEXTCASEONSUCCESS

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(6),ROOT(7),ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP__28_in_29_,2,1,TERMINAL(8),TERMINAL(5),ROOT(9));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Grandparent_20_Helper,1,1,TERMINAL(3),ROOT(10));

result = vpx_get(PARAMETERS,kVPXValue_Sub_20_Classes,TERMINAL(10),ROOT(11),ROOT(12));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(12))) ){
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Delete_20_Nth_20_Class_20_Attribute,2,0,LIST(12),TERMINAL(9));
REPEATFINISH
} else {
}

result = vpx_call_primitive(PARAMETERS,VPLP_detach_2D_nth,2,2,TERMINAL(8),TERMINAL(9),ROOT(13),ROOT(14));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Close,1,0,TERMINAL(14));

result = vpx_set(PARAMETERS,kVPXValue_List,TERMINAL(7),TERMINAL(13),ROOT(15));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Update_20_List_20_Data,2,0,TERMINAL(0),TERMINAL(15));

result = kSuccess;

FOOTER(16)
}

enum opTrigger vpx_method_Class_20_Attribute_20_Data_2F_Remove_20_Self_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Class_20_Attribute_20_Data_2F_Remove_20_Self_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_Class_20_Attribute_20_Data_2F_Remove_20_Self(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Class_20_Attribute_20_Data_2F_Remove_20_Self_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Class_20_Attribute_20_Data_2F_Remove_20_Self_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Class_20_Attribute_20_Data_2F_Substitute_20_With_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Class_20_Attribute_20_Data_2F_Substitute_20_With_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(25)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_detach_2D_nth,2,2,TERMINAL(4),TERMINAL(1),ROOT(5),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_nth,2,1,TERMINAL(4),TERMINAL(1),ROOT(7));

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(7),ROOT(8),ROOT(9));

result = vpx_get(PARAMETERS,kVPXValue_Inherited,TERMINAL(9),ROOT(10),ROOT(11));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_nth,2,1,TERMINAL(4),TERMINAL(2),ROOT(12));

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(12),ROOT(13),ROOT(14));

result = vpx_get(PARAMETERS,kVPXValue_Inherited,TERMINAL(14),ROOT(15),ROOT(16));

result = vpx_match(PARAMETERS,"FALSE",TERMINAL(16));
NEXTCASEONFAILURE

result = vpx_match(PARAMETERS,"FALSE",TERMINAL(11));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_insert_2D_nth,3,1,TERMINAL(5),TERMINAL(6),TERMINAL(2),ROOT(17));

result = vpx_set(PARAMETERS,kVPXValue_List,TERMINAL(3),TERMINAL(17),ROOT(18));

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(18),ROOT(19),ROOT(20));

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(20),ROOT(21),ROOT(22));

result = vpx_get(PARAMETERS,kVPXValue_Sub_20_Classes,TERMINAL(22),ROOT(23),ROOT(24));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(24))) ){
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Substitute_20_Class_20_Attribute,3,0,LIST(24),TERMINAL(1),TERMINAL(2));
REPEATFINISH
} else {
}

result = kSuccess;

FOOTER(25)
}

enum opTrigger vpx_method_Class_20_Attribute_20_Data_2F_Substitute_20_With_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Class_20_Attribute_20_Data_2F_Substitute_20_With_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_Class_20_Attribute_20_Data_2F_Substitute_20_With(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Class_20_Attribute_20_Data_2F_Substitute_20_With_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2))
vpx_method_Class_20_Attribute_20_Data_2F_Substitute_20_With_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2);
return outcome;
}

enum opTrigger vpx_method_Class_20_Attribute_20_Data_2F_Set_20_Name_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Class_20_Attribute_20_Data_2F_Set_20_Name_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Name,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_equals,2,0,TERMINAL(3),TERMINAL(1));
NEXTCASEONFAILURE

result = kSuccess;

FOOTER(4)
}

enum opTrigger vpx_method_Class_20_Attribute_20_Data_2F_Set_20_Name_case_2_local_5_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Class_20_Attribute_20_Data_2F_Set_20_Name_case_2_local_5_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP__3D_,2,0,TERMINAL(1),TERMINAL(2));
TERMINATEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Grandparent_20_Helper,1,1,TERMINAL(0),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Update_20_Class_20_Attribute_20_Name,3,0,TERMINAL(3),TERMINAL(1),TERMINAL(2));
FAILONFAILURE

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Class_20_Attribute_20_Data_2F_Set_20_Name_case_2_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Class_20_Attribute_20_Data_2F_Set_20_Name_case_2_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_method_Formalize_20_Data_20_Name(PARAMETERS,TERMINAL(0),TERMINAL(1),ROOT(3),ROOT(4));

result = vpx_method_Class_20_Attribute_20_Data_2F_Set_20_Name_case_2_local_5_case_1_local_3(PARAMETERS,TERMINAL(0),TERMINAL(3),TERMINAL(2));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Class_20_Attribute_20_Data_2F_Set_20_Name_case_2_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Class_20_Attribute_20_Data_2F_Set_20_Name_case_2_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADERWITHNONE(3)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_method_Duplicate_20_Data_20_Name_20_Error(PARAMETERS,TERMINAL(0),TERMINAL(1));

result = kSuccess;
FAILONSUCCESS

OUTPUT(0,NONE)
FOOTERWITHNONE(3)
}

enum opTrigger vpx_method_Class_20_Attribute_20_Data_2F_Set_20_Name_case_2_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Class_20_Attribute_20_Data_2F_Set_20_Name_case_2_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Class_20_Attribute_20_Data_2F_Set_20_Name_case_2_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
vpx_method_Class_20_Attribute_20_Data_2F_Set_20_Name_case_2_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0);
return outcome;
}

enum opTrigger vpx_method_Class_20_Attribute_20_Data_2F_Set_20_Name_case_2_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Class_20_Attribute_20_Data_2F_Set_20_Name_case_2_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(1));
TERMINATEONFAILURE

result = vpx_constant(PARAMETERS,"Get",ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Create_20_Accessor_20_Method,2,0,TERMINAL(0),TERMINAL(2));

result = vpx_constant(PARAMETERS,"Set",ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Create_20_Accessor_20_Method,2,0,TERMINAL(0),TERMINAL(3));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Class_20_Attribute_20_Data_2F_Set_20_Name_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Class_20_Attribute_20_Data_2F_Set_20_Name_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Inherited,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_match(PARAMETERS,"FALSE",TERMINAL(3));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Name,TERMINAL(0),ROOT(4),ROOT(5));

result = vpx_method_Class_20_Attribute_20_Data_2F_Set_20_Name_case_2_local_5(PARAMETERS,TERMINAL(0),TERMINAL(1),TERMINAL(5),ROOT(6));
FAILONFAILURE

result = vpx_method_Class_20_Attribute_20_Data_2F_Set_20_Name_case_2_local_6(PARAMETERS,TERMINAL(0),TERMINAL(6));

result = kSuccess;

FOOTER(7)
}

enum opTrigger vpx_method_Class_20_Attribute_20_Data_2F_Set_20_Name_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Class_20_Attribute_20_Data_2F_Set_20_Name_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Class_20_Attribute_20_Data_2F_Set_20_Name(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Class_20_Attribute_20_Data_2F_Set_20_Name_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
if(vpx_method_Class_20_Attribute_20_Data_2F_Set_20_Name_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Class_20_Attribute_20_Data_2F_Set_20_Name_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Class_20_Attribute_20_Data_2F_Open_case_1_local_3_case_1_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Class_20_Attribute_20_Data_2F_Open_case_1_local_3_case_1_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
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

enum opTrigger vpx_method_Class_20_Attribute_20_Data_2F_Open_case_1_local_3_case_1_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Class_20_Attribute_20_Data_2F_Open_case_1_local_3_case_1_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Object_20_To_20_Instance(PARAMETERS,TERMINAL(0),ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_object_2D_to_2D_archive,1,2,TERMINAL(1),ROOT(2),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(4)
}

enum opTrigger vpx_method_Class_20_Attribute_20_Data_2F_Open_case_1_local_3_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Class_20_Attribute_20_Data_2F_Open_case_1_local_3_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Class_20_Attribute_20_Data_2F_Open_case_1_local_3_case_1_local_7_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Class_20_Attribute_20_Data_2F_Open_case_1_local_3_case_1_local_7_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Class_20_Attribute_20_Data_2F_Open_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Class_20_Attribute_20_Data_2F_Open_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(10)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Project_20_Data,1,1,TERMINAL(0),ROOT(1));

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Full_20_Name,1,1,TERMINAL(0),ROOT(4));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
FAILONSUCCESS

result = vpx_get(PARAMETERS,kVPXValue_Value,TERMINAL(0),ROOT(5),ROOT(6));

result = vpx_method_Class_20_Attribute_20_Data_2F_Open_case_1_local_3_case_1_local_7(PARAMETERS,TERMINAL(6),ROOT(7));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Create_20_Persistent,3,1,TERMINAL(3),TERMINAL(4),TERMINAL(7),ROOT(8));
NEXTCASEONFAILURE

result = vpx_match(PARAMETERS,"NULL",TERMINAL(8));
FAILONSUCCESS

result = vpx_set(PARAMETERS,kVPXValue_Record,TERMINAL(0),TERMINAL(8),ROOT(9));

result = kSuccess;
FINISHONSUCCESS

FOOTER(10)
}

enum opTrigger vpx_method_Class_20_Attribute_20_Data_2F_Open_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Class_20_Attribute_20_Data_2F_Open_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
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

enum opTrigger vpx_method_Class_20_Attribute_20_Data_2F_Open_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Class_20_Attribute_20_Data_2F_Open_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Class_20_Attribute_20_Data_2F_Open_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Class_20_Attribute_20_Data_2F_Open_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Class_20_Attribute_20_Data_2F_Open_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Class_20_Attribute_20_Data_2F_Open_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Helper_20_Data_2F_Open(PARAMETERS,TERMINAL(0),TERMINAL(1));

REPEATBEGIN
result = vpx_method_Class_20_Attribute_20_Data_2F_Open_case_1_local_3(PARAMETERS,TERMINAL(0));
NEXTCASEONFAILURE
REPEATFINISH

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Class_20_Attribute_20_Data_2F_Open_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Class_20_Attribute_20_Data_2F_Open_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Class Attribute record create failure!",ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_show,1,0,TERMINAL(2));

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_Class_20_Attribute_20_Data_2F_Open(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Class_20_Attribute_20_Data_2F_Open_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Class_20_Attribute_20_Data_2F_Open_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Class_20_Attribute_20_Data_2F_Close(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Dispose_20_Record,1,0,TERMINAL(0));

result = vpx_call_context_super_method(PARAMETERS,kVPXMethod_Close,1,0,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Class_20_Attribute_20_Data_2F_Dispose_20_Record_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Class_20_Attribute_20_Data_2F_Dispose_20_Record_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
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

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Destroy_20_Persistent,2,0,TERMINAL(3),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Class_20_Attribute_20_Data_2F_Dispose_20_Record(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Record,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Project_20_Data,1,1,TERMINAL(0),ROOT(3));

result = vpx_method_Class_20_Attribute_20_Data_2F_Dispose_20_Record_case_1_local_4(PARAMETERS,TERMINAL(3),TERMINAL(2));

result = vpx_constant(PARAMETERS,"NULL",ROOT(4));

result = vpx_set(PARAMETERS,kVPXValue_Record,TERMINAL(1),TERMINAL(4),ROOT(5));

result = kSuccess;

FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Class_20_Attribute_20_Data_2F_Update_20_Record(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Class_20_Attribute_20_Data_2F_Parse_20_CPX_20_Buffer_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2);
enum opTrigger vpx_method_Class_20_Attribute_20_Data_2F_Parse_20_CPX_20_Buffer_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2)
{
HEADER(13)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_constant(PARAMETERS,"4",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_text,3,3,TERMINAL(3),TERMINAL(2),TERMINAL(4),ROOT(5),ROOT(6),ROOT(7));

result = vpx_match(PARAMETERS,"adat",TERMINAL(7));
NEXTCASEONFAILURE

result = vpx_method_Parse_20_Object(PARAMETERS,TERMINAL(1),TERMINAL(6),TERMINAL(5),ROOT(8),ROOT(9),ROOT(10),ROOT(11));

result = vpx_set(PARAMETERS,kVPXValue_Value,TERMINAL(0),TERMINAL(11),ROOT(12));

result = kSuccess;

OUTPUT(0,TERMINAL(12))
OUTPUT(1,TERMINAL(8))
OUTPUT(2,TERMINAL(9))
FOOTER(13)
}

enum opTrigger vpx_method_Class_20_Attribute_20_Data_2F_Parse_20_CPX_20_Buffer_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2);
enum opTrigger vpx_method_Class_20_Attribute_20_Data_2F_Parse_20_CPX_20_Buffer_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2)
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

enum opTrigger vpx_method_Class_20_Attribute_20_Data_2F_Parse_20_CPX_20_Buffer_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2);
enum opTrigger vpx_method_Class_20_Attribute_20_Data_2F_Parse_20_CPX_20_Buffer_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2)
{
HEADER(10)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_constant(PARAMETERS,"8",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_text,3,3,TERMINAL(3),TERMINAL(2),TERMINAL(4),ROOT(5),ROOT(6),ROOT(7));

result = vpx_match(PARAMETERS,"end catt",TERMINAL(7));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_detach_2D_l,1,2,TERMINAL(1),ROOT(8),ROOT(9));

result = kSuccess;

OUTPUT(0,TERMINAL(8))
OUTPUT(1,TERMINAL(9))
OUTPUT(2,TERMINAL(6))
FOOTER(10)
}

enum opTrigger vpx_method_Class_20_Attribute_20_Data_2F_Parse_20_CPX_20_Buffer_case_4_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Class_20_Attribute_20_Data_2F_Parse_20_CPX_20_Buffer_case_4_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
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

enum opTrigger vpx_method_Class_20_Attribute_20_Data_2F_Parse_20_CPX_20_Buffer_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2);
enum opTrigger vpx_method_Class_20_Attribute_20_Data_2F_Parse_20_CPX_20_Buffer_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2)
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
result = vpx_method_Class_20_Attribute_20_Data_2F_Parse_20_CPX_20_Buffer_case_4_local_8(PARAMETERS,TERMINAL(5),LOOP(0),TERMINAL(8),ROOT(11));
REPEATFINISH

result = kSuccess;

OUTPUT(0,TERMINAL(0))
OUTPUT(1,TERMINAL(1))
OUTPUT(2,TERMINAL(11))
FOOTER(12)
}

enum opTrigger vpx_method_Class_20_Attribute_20_Data_2F_Parse_20_CPX_20_Buffer_case_5(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2);
enum opTrigger vpx_method_Class_20_Attribute_20_Data_2F_Parse_20_CPX_20_Buffer_case_5(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2)
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

enum opTrigger vpx_method_Class_20_Attribute_20_Data_2F_Parse_20_CPX_20_Buffer(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Class_20_Attribute_20_Data_2F_Parse_20_CPX_20_Buffer_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0,root1,root2))
if(vpx_method_Class_20_Attribute_20_Data_2F_Parse_20_CPX_20_Buffer_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0,root1,root2))
if(vpx_method_Class_20_Attribute_20_Data_2F_Parse_20_CPX_20_Buffer_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0,root1,root2))
if(vpx_method_Class_20_Attribute_20_Data_2F_Parse_20_CPX_20_Buffer_case_4(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0,root1,root2))
vpx_method_Class_20_Attribute_20_Data_2F_Parse_20_CPX_20_Buffer_case_5(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0,root1,root2);
return outcome;
}

enum opTrigger vpx_method_Class_20_Attribute_20_Data_2F_Set_20_CPX_20_Text_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Class_20_Attribute_20_Data_2F_Set_20_CPX_20_Text_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Name,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_equals,2,0,TERMINAL(3),TERMINAL(1));
NEXTCASEONFAILURE

result = kSuccess;

FOOTER(4)
}

enum opTrigger vpx_method_Class_20_Attribute_20_Data_2F_Set_20_CPX_20_Text_case_2_local_4_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Class_20_Attribute_20_Data_2F_Set_20_CPX_20_Text_case_2_local_4_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Name,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_constant(PARAMETERS,"\"/\"",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,3,1,TERMINAL(3),TERMINAL(4),TERMINAL(1),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Class_20_Attribute_20_Data_2F_Set_20_CPX_20_Text_case_2_local_4_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Class_20_Attribute_20_Data_2F_Set_20_CPX_20_Text_case_2_local_4_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Name,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_constant(PARAMETERS,"\"/\"",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,3,1,TERMINAL(3),TERMINAL(4),TERMINAL(1),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Class_20_Attribute_20_Data_2F_Set_20_CPX_20_Text_case_2_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Class_20_Attribute_20_Data_2F_Set_20_CPX_20_Text_case_2_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(10)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Project_20_Data,1,1,TERMINAL(0),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_method_Class_20_Attribute_20_Data_2F_Set_20_CPX_20_Text_case_2_local_4_case_1_local_4(PARAMETERS,TERMINAL(0),TERMINAL(2),ROOT(6));

result = vpx_method_Class_20_Attribute_20_Data_2F_Set_20_CPX_20_Text_case_2_local_4_case_1_local_5(PARAMETERS,TERMINAL(0),TERMINAL(1),ROOT(7));

result = vpx_constant(PARAMETERS,"NULL",ROOT(8));

result = vpx_constant(PARAMETERS,"persistent",ROOT(9));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Rename_20_Element,5,0,TERMINAL(5),TERMINAL(8),TERMINAL(6),TERMINAL(7),TERMINAL(9));
NEXTCASEONFAILURE

result = kSuccess;
FINISHONSUCCESS

OUTPUT(0,TERMINAL(1))
FOOTER(10)
}

enum opTrigger vpx_method_Class_20_Attribute_20_Data_2F_Set_20_CPX_20_Text_case_2_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Class_20_Attribute_20_Data_2F_Set_20_CPX_20_Text_case_2_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_method_Unique_20_Name_20_For_20_String(PARAMETERS,TERMINAL(1),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_Class_20_Attribute_20_Data_2F_Set_20_CPX_20_Text_case_2_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Class_20_Attribute_20_Data_2F_Set_20_CPX_20_Text_case_2_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Class_20_Attribute_20_Data_2F_Set_20_CPX_20_Text_case_2_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
vpx_method_Class_20_Attribute_20_Data_2F_Set_20_CPX_20_Text_case_2_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0);
return outcome;
}

enum opTrigger vpx_method_Class_20_Attribute_20_Data_2F_Set_20_CPX_20_Text_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Class_20_Attribute_20_Data_2F_Set_20_CPX_20_Text_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(10)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Name,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Grandparent_20_Helper,1,1,TERMINAL(2),ROOT(4));

REPEATBEGIN
LOOPTERMINALBEGIN(1)
LOOPTERMINAL(0,1,5)
result = vpx_method_Class_20_Attribute_20_Data_2F_Set_20_CPX_20_Text_case_2_local_4(PARAMETERS,TERMINAL(4),LOOP(0),TERMINAL(3),ROOT(5));
REPEATFINISH

result = vpx_set(PARAMETERS,kVPXValue_Name,TERMINAL(0),TERMINAL(5),ROOT(6));

result = vpx_get(PARAMETERS,kVPXValue_Owner,TERMINAL(6),ROOT(7),ROOT(8));

result = vpx_set(PARAMETERS,kVPXValue_Name,TERMINAL(8),TERMINAL(5),ROOT(9));

result = kSuccess;

FOOTER(10)
}

enum opTrigger vpx_method_Class_20_Attribute_20_Data_2F_Set_20_CPX_20_Text(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Class_20_Attribute_20_Data_2F_Set_20_CPX_20_Text_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Class_20_Attribute_20_Data_2F_Set_20_CPX_20_Text_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

/* Stop Universals */






Nat4	loadClasses_MyClassData(V_Environment environment);
Nat4	loadClasses_MyClassData(V_Environment environment)
{
	V_Class result = NULL;

	result = class_new("Attribute Data",environment);
	if(result == NULL) return kERROR;
	VPLC_Attribute_20_Data_class_load(result,environment);
	result = class_new("Class Data",environment);
	if(result == NULL) return kERROR;
	VPLC_Class_20_Data_class_load(result,environment);
	result = class_new("Class Attribute Data",environment);
	if(result == NULL) return kERROR;
	VPLC_Class_20_Attribute_20_Data_class_load(result,environment);
	return kNOERROR;

}

Nat4	loadUniversals_MyClassData(V_Environment environment);
Nat4	loadUniversals_MyClassData(V_Environment environment)
{
	V_Method result = NULL;

	result = method_new("Attribute Data/Add To List Data",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Attribute_20_Data_2F_Add_20_To_20_List_20_Data,NULL);

	result = method_new("Attribute Data/Export Text",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Attribute_20_Data_2F_Export_20_Text,NULL);

	result = method_new("Attribute Data/Remove Self",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Attribute_20_Data_2F_Remove_20_Self,NULL);

	result = method_new("Attribute Data/Set Name",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Attribute_20_Data_2F_Set_20_Name,NULL);

	result = method_new("Attribute Data/Substitute With",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Attribute_20_Data_2F_Substitute_20_With,NULL);

	result = method_new("Attribute Data/Open",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Attribute_20_Data_2F_Open,NULL);

	result = method_new("Attribute Data/Dispose Record",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Attribute_20_Data_2F_Dispose_20_Record,NULL);

	result = method_new("Attribute Data/Order Records",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Attribute_20_Data_2F_Order_20_Records,NULL);

	result = method_new("Attribute Data/Update Record",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Attribute_20_Data_2F_Update_20_Record,NULL);

	result = method_new("Attribute Data/Handle Item Click",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Attribute_20_Data_2F_Handle_20_Item_20_Click,NULL);

	result = method_new("Attribute Data/Update Value",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Attribute_20_Data_2F_Update_20_Value,NULL);

	result = method_new("Attribute Data/Full Name",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Attribute_20_Data_2F_Full_20_Name,NULL);

	result = method_new("Attribute Data/Get Direct Value",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Attribute_20_Data_2F_Get_20_Direct_20_Value,NULL);

	result = method_new("Attribute Data/Set Direct Value",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Attribute_20_Data_2F_Set_20_Direct_20_Value,NULL);

	result = method_new("Attribute Data/Set Value Address",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Attribute_20_Data_2F_Set_20_Value_20_Address,NULL);

	result = method_new("Attribute Data/Get Value Address",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Attribute_20_Data_2F_Get_20_Value_20_Address,NULL);

	result = method_new("Attribute Data/Get Value",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Attribute_20_Data_2F_Get_20_Value,NULL);

	result = method_new("Attribute Data/Set Value",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Attribute_20_Data_2F_Set_20_Value,NULL);

	result = method_new("Attribute Data/Have Row Values?",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Attribute_20_Data_2F_Have_20_Row_20_Values_3F_,NULL);

	result = method_new("Attribute Data/Have Icon Values?",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Attribute_20_Data_2F_Have_20_Icon_20_Values_3F_,NULL);

	result = method_new("Attribute Data/Create Accessor Method",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Attribute_20_Data_2F_Create_20_Accessor_20_Method,NULL);

	result = method_new("Attribute Data/Parse CPX Buffer",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Attribute_20_Data_2F_Parse_20_CPX_20_Buffer,NULL);

	result = method_new("Attribute Data/Set CPX Text",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Attribute_20_Data_2F_Set_20_CPX_20_Text,NULL);

	result = method_new("Attribute Data/Isolate First",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Attribute_20_Data_2F_Isolate_20_First,NULL);

	result = method_new("Attribute Data/Integrate First",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Attribute_20_Data_2F_Integrate_20_First,NULL);

	result = method_new("Class Data/C Code Export Attributes",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Class_20_Data_2F_C_20_Code_20_Export_20_Attributes,NULL);

	result = method_new("Class Data/C Code Export Universals",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Class_20_Data_2F_C_20_Code_20_Export_20_Universals,NULL);

	result = method_new("Class Data/C Code Footer",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Class_20_Data_2F_C_20_Code_20_Footer,NULL);

	result = method_new("Class Data/C Code Header",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Class_20_Data_2F_C_20_Code_20_Header,NULL);

	result = method_new("Class Data/C Code Super",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Class_20_Data_2F_C_20_Code_20_Super,NULL);

	result = method_new("Class Data/Clone",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Class_20_Data_2F_Clone,NULL);

	result = method_new("Class Data/Close",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Class_20_Data_2F_Close,NULL);

	result = method_new("Class Data/Delete Nth Attribute",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Class_20_Data_2F_Delete_20_Nth_20_Attribute,NULL);

	result = method_new("Class Data/Export Text",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Class_20_Data_2F_Export_20_Text,NULL);

	result = method_new("Class Data/Full Persistent Name",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Class_20_Data_2F_Full_20_Persistent_20_Name,NULL);

	result = method_new("Class Data/Full Universal Name",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Class_20_Data_2F_Full_20_Universal_20_Name,NULL);

	result = method_new("Class Data/Get Attributes",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Class_20_Data_2F_Get_20_Attributes,NULL);

	result = method_new("Class Data/Get Class Attributes",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Class_20_Data_2F_Get_20_Class_20_Attributes,NULL);

	result = method_new("Class Data/Get Value",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Class_20_Data_2F_Get_20_Value,NULL);

	result = method_new("Class Data/Initialize Item Data",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Class_20_Data_2F_Initialize_20_Item_20_Data,NULL);

	result = method_new("Class Data/Insert Attribute",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Class_20_Data_2F_Insert_20_Attribute,NULL);

	result = method_new("Class Data/Integrate",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Class_20_Data_2F_Integrate,NULL);

	result = method_new("Class Data/Isolate",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Class_20_Data_2F_Isolate,NULL);

	result = method_new("Class Data/Open",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Class_20_Data_2F_Open,NULL);

	result = method_new("Class Data/Remove Self",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Class_20_Data_2F_Remove_20_Self,NULL);

	result = method_new("Class Data/Remove Sub Class",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Class_20_Data_2F_Remove_20_Sub_20_Class,NULL);

	result = method_new("Class Data/Resolve Class",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Class_20_Data_2F_Resolve_20_Class,NULL);

	result = method_new("Class Data/Set Name",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Class_20_Data_2F_Set_20_Name,NULL);

	result = method_new("Class Data/Set Super Class",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Class_20_Data_2F_Set_20_Super_20_Class,NULL);

	result = method_new("Class Data/Update Attribute Name",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Class_20_Data_2F_Update_20_Attribute_20_Name,NULL);

	result = method_new("Class Data/Substitute Attribute",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Class_20_Data_2F_Substitute_20_Attribute,NULL);

	result = method_new("Class Data/Update Class Attribute Name",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Class_20_Data_2F_Update_20_Class_20_Attribute_20_Name,NULL);

	result = method_new("Class Data/Substitute Class Attribute",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Class_20_Data_2F_Substitute_20_Class_20_Attribute,NULL);

	result = method_new("Class Data/Insert Class Attribute",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Class_20_Data_2F_Insert_20_Class_20_Attribute,NULL);

	result = method_new("Class Data/Delete Nth Class Attribute",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Class_20_Data_2F_Delete_20_Nth_20_Class_20_Attribute,NULL);

	result = method_new("Class Data/Update Record",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Class_20_Data_2F_Update_20_Record,NULL);

	result = method_new("Class Data/Post Open",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Class_20_Data_2F_Post_20_Open,NULL);

	result = method_new("Class Data/Class To Instance",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Class_20_Data_2F_Class_20_To_20_Instance,NULL);

	result = method_new("Class Data/Update Value",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Class_20_Data_2F_Update_20_Value,NULL);

	result = method_new("Class Data/Find Editor",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Class_20_Data_2F_Find_20_Editor,NULL);

	result = method_new("Class Data/Update Editors",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Class_20_Data_2F_Update_20_Editors,NULL);

	result = method_new("Class Data/Set Value",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Class_20_Data_2F_Set_20_Value,NULL);

	result = method_new("Class Data/Get Universals",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Class_20_Data_2F_Get_20_Universals,NULL);

	result = method_new("Class Data/Get All Breakpoints",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Class_20_Data_2F_Get_20_All_20_Breakpoints,NULL);

	result = method_new("Class Data/Update Attribute Value",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Class_20_Data_2F_Update_20_Attribute_20_Value,NULL);

	result = method_new("Class Data/Update Class Attribute Value",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Class_20_Data_2F_Update_20_Class_20_Attribute_20_Value,NULL);

	result = method_new("Class Data/Test Attribute Name",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Class_20_Data_2F_Test_20_Attribute_20_Name,NULL);

	result = method_new("Class Data/Create Super Class",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Class_20_Data_2F_Create_20_Super_20_Class,NULL);

	result = method_new("Class Data/Add Sub Class",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Class_20_Data_2F_Add_20_Sub_20_Class,NULL);

	result = method_new("Class Data/After Import",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Class_20_Data_2F_After_20_Import,NULL);

	result = method_new("Class Data/Parse CPX Buffer",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Class_20_Data_2F_Parse_20_CPX_20_Buffer,NULL);

	result = method_new("Class Data/Set CPX Text",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Class_20_Data_2F_Set_20_CPX_20_Text,NULL);

	result = method_new("Class Data/Get Methods",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Class_20_Data_2F_Get_20_Methods,NULL);

	result = method_new("Class Data/Can Delete?",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Class_20_Data_2F_Can_20_Delete_3F_,NULL);

	result = method_new("Class Data/Find Descendants",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Class_20_Data_2F_Find_20_Descendants,NULL);

	result = method_new("Class Attribute Data/Add To List Data",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Class_20_Attribute_20_Data_2F_Add_20_To_20_List_20_Data,NULL);

	result = method_new("Class Attribute Data/Remove Self",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Class_20_Attribute_20_Data_2F_Remove_20_Self,NULL);

	result = method_new("Class Attribute Data/Substitute With",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Class_20_Attribute_20_Data_2F_Substitute_20_With,NULL);

	result = method_new("Class Attribute Data/Set Name",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Class_20_Attribute_20_Data_2F_Set_20_Name,NULL);

	result = method_new("Class Attribute Data/Open",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Class_20_Attribute_20_Data_2F_Open,NULL);

	result = method_new("Class Attribute Data/Close",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Class_20_Attribute_20_Data_2F_Close,NULL);

	result = method_new("Class Attribute Data/Dispose Record",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Class_20_Attribute_20_Data_2F_Dispose_20_Record,NULL);

	result = method_new("Class Attribute Data/Update Record",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Class_20_Attribute_20_Data_2F_Update_20_Record,NULL);

	result = method_new("Class Attribute Data/Parse CPX Buffer",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Class_20_Attribute_20_Data_2F_Parse_20_CPX_20_Buffer,NULL);

	result = method_new("Class Attribute Data/Set CPX Text",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Class_20_Attribute_20_Data_2F_Set_20_CPX_20_Text,NULL);

	return kNOERROR;

}



Nat4	loadPersistents_MyClassData(V_Environment environment);
Nat4	loadPersistents_MyClassData(V_Environment environment)
{
	V_Value tempPersistent = NULL;
	V_Dictionary dictionary = environment->persistentsTable;

	return kNOERROR;

}

Nat4	load_MyClassData(V_Environment environment);
Nat4	load_MyClassData(V_Environment environment)
{

	loadClasses_MyClassData(environment);
	loadUniversals_MyClassData(environment);
	loadPersistents_MyClassData(environment);
	return kNOERROR;

}

