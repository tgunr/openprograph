/* A VPL Section File */
/*

MyInputOutputs.inl.c
Copyright: 2004 Andescotia LLC

*/

#include "MartenInlineProject.h"




	Nat4 tempAttribute_Input_2D_Output_2F_Frame[] = {
0000000000, 0X0000008C, 0X00000028, 0X00000005, 0X00000014, 0X00000050, 0X0000004C, 0X00000048,
0X00000044, 0X0000003C, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000044,
0X00000004, 0X00000054, 0X0000006C, 0X00000084, 0X0000009C, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000,
0000000000, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000005, 0X00000004,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000005
	};
	Nat4 tempAttribute_Input_2D_Output_2F_Type[] = {
0000000000, 0X00000024, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X00000006, 0X4E6F726D, 0X616C0000
	};
	Nat4 tempAttribute_Root_2F_Frame[] = {
0000000000, 0X0000008C, 0X00000028, 0X00000005, 0X00000014, 0X00000050, 0X0000004C, 0X00000048,
0X00000044, 0X0000003C, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000044,
0X00000004, 0X00000054, 0X0000006C, 0X00000084, 0X0000009C, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000,
0000000000, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000005, 0X00000004,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000005
	};
	Nat4 tempAttribute_Root_2F_Type[] = {
0000000000, 0X00000024, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X00000006, 0X4E6F726D, 0X616C0000
	};
	Nat4 tempAttribute_Terminal_2F_Frame[] = {
0000000000, 0X0000008C, 0X00000028, 0X00000005, 0X00000014, 0X00000050, 0X0000004C, 0X00000048,
0X00000044, 0X0000003C, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000044,
0X00000004, 0X00000054, 0X0000006C, 0X00000084, 0X0000009C, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000,
0000000000, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000005, 0X00000004,
0000000000, 0000000000, 0000000000, 0000000000, 0X00000005
	};
	Nat4 tempAttribute_Terminal_2F_Type[] = {
0000000000, 0X00000024, 0X00000018, 0X00000001, 0X00000014, 0X0000002C, 0X00000006, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000034, 0X00000006, 0X4E6F726D, 0X616C0000
	};


Nat4 VPLC_Input_2D_Output_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Input_2D_Output_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 334 425 }{ 160 382 } */
	tempAttribute = attribute_add("Parent",tempClass,NULL,environment);
	tempAttribute = attribute_add("Frame",tempClass,tempAttribute_Input_2D_Output_2F_Frame,environment);
	tempAttribute = attribute_add("Name",tempClass,NULL,environment);
	tempAttribute = attribute_add("Type",tempClass,tempAttribute_Input_2D_Output_2F_Type,environment);
/* Stop Attributes */

/* NULL SUPER CLASS */
	return kNOERROR;
}

/* Start Universals: { 492 346 }{ 222 360 } */
enum opTrigger vpx_method_Input_2D_Output_2F_Clone(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_shallow_2D_copy,1,1,TERMINAL(0),ROOT(1));

result = vpx_constant(PARAMETERS,"NULL",ROOT(2));

result = vpx_set(PARAMETERS,kVPXValue_Parent,TERMINAL(1),TERMINAL(2),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Input_2D_Output_2F_Close(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = vpx_set(PARAMETERS,kVPXValue_Parent,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Input_2D_Output_2F_Open(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Parent,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Input_2D_Output_2F_Get_20_Project_20_Data_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Input_2D_Output_2F_Get_20_Project_20_Data_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
NEXTCASEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Project_20_Data,1,1,TERMINAL(2),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_Input_2D_Output_2F_Get_20_Project_20_Data_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Input_2D_Output_2F_Get_20_Project_20_Data_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Input_2D_Output_2F_Get_20_Project_20_Data(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Input_2D_Output_2F_Get_20_Project_20_Data_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Input_2D_Output_2F_Get_20_Project_20_Data_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Input_2D_Output_2F_Get_20_Location(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Frame,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,2,TERMINAL(2),ROOT(3),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Input_2D_Output_2F_Delete(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Remove_20_Self,1,0,TERMINAL(0));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(2));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Make_20_Dirty,1,0,TERMINAL(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Input_2D_Output_2F_Remove_20_Self(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_Input_2D_Output_2F_Can_20_Delete_3F__case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Input_2D_Output_2F_Can_20_Delete_3F__case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Type,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_match(PARAMETERS,"input_bar",TERMINAL(2));
TERMINATEONSUCCESS

result = vpx_match(PARAMETERS,"output_bar",TERMINAL(2));
TERMINATEONSUCCESS

result = kSuccess;
FAILONSUCCESS

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Input_2D_Output_2F_Can_20_Delete_3F__case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Input_2D_Output_2F_Can_20_Delete_3F__case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(8)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_method_Input_2D_Output_2F_Can_20_Delete_3F__case_1_local_4(PARAMETERS,TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Grandparent_20_Helper,1,1,TERMINAL(2),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Grandparent_20_Helper,1,1,TERMINAL(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(4),ROOT(5));

result = vpx_match(PARAMETERS,"Universal Data",TERMINAL(5));
TERMINATEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Text,TERMINAL(4),ROOT(6),ROOT(7));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(7));
FAILONFAILURE

result = kSuccess;

FOOTER(8)
}

enum opTrigger vpx_method_Input_2D_Output_2F_Can_20_Delete_3F__case_2_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Input_2D_Output_2F_Can_20_Delete_3F__case_2_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(2));
FAILONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Type,TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_match(PARAMETERS,"constant",TERMINAL(4));
TERMINATEONSUCCESS

result = vpx_match(PARAMETERS,"match",TERMINAL(4));
TERMINATEONSUCCESS

result = vpx_match(PARAMETERS,"instance",TERMINAL(4));
TERMINATEONSUCCESS

result = vpx_match(PARAMETERS,"evaluate",TERMINAL(4));
TERMINATEONSUCCESS

result = vpx_match(PARAMETERS,"extconstant",TERMINAL(4));
TERMINATEONSUCCESS

result = vpx_match(PARAMETERS,"extmatch",TERMINAL(4));
TERMINATEONSUCCESS

result = kSuccess;
FAILONSUCCESS

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Input_2D_Output_2F_Can_20_Delete_3F__case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Input_2D_Output_2F_Can_20_Delete_3F__case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Input_2D_Output_2F_Can_20_Delete_3F__case_2_local_2(PARAMETERS,TERMINAL(0));
NEXTCASEONFAILURE

result = kSuccess;
FAILONSUCCESS

FOOTER(1)
}

enum opTrigger vpx_method_Input_2D_Output_2F_Can_20_Delete_3F__case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Input_2D_Output_2F_Can_20_Delete_3F__case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_Input_2D_Output_2F_Can_20_Delete_3F_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Input_2D_Output_2F_Can_20_Delete_3F__case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
if(vpx_method_Input_2D_Output_2F_Can_20_Delete_3F__case_2(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Input_2D_Output_2F_Can_20_Delete_3F__case_3(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_Input_2D_Output_2F_Get_20_Visual_20_Frame_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Input_2D_Output_2F_Get_20_Visual_20_Frame_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Type,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_match(PARAMETERS,"List",TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"-3",ROOT(3));

result = vpx_constant(PARAMETERS,"0",ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
OUTPUT(1,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_Input_2D_Output_2F_Get_20_Visual_20_Frame_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Input_2D_Output_2F_Get_20_Visual_20_Frame_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
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

enum opTrigger vpx_method_Input_2D_Output_2F_Get_20_Visual_20_Frame_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_Input_2D_Output_2F_Get_20_Visual_20_Frame_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Input_2D_Output_2F_Get_20_Visual_20_Frame_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1))
vpx_method_Input_2D_Output_2F_Get_20_Visual_20_Frame_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1);
return outcome;
}

enum opTrigger vpx_method_Input_2D_Output_2F_Get_20_Visual_20_Frame(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Frame,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_method_Input_2D_Output_2F_Get_20_Visual_20_Frame_case_1_local_3(PARAMETERS,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_method_Inset_20_Rectangle(PARAMETERS,TERMINAL(2),TERMINAL(3),TERMINAL(4),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTERSINGLECASE(6)
}

/* Stop Universals */



Nat4 VPLC_Root_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Root_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 60 60 }{ 200 300 } */
	tempAttribute = attribute_add("Parent",tempClass,NULL,environment);
	tempAttribute = attribute_add("Frame",tempClass,tempAttribute_Root_2F_Frame,environment);
	tempAttribute = attribute_add("Name",tempClass,NULL,environment);
	tempAttribute = attribute_add("Type",tempClass,tempAttribute_Root_2F_Type,environment);
	tempAttribute = attribute_add("Record",tempClass,NULL,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"Input-Output");
	return kNOERROR;
}

/* Start Universals: { 404 414 }{ 264 364 } */
enum opTrigger vpx_method_Root_2F_Compute_20_Shift_20_Offset_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Root_2F_Compute_20_Shift_20_Offset_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Frame,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_method_Subtract_20_Point(PARAMETERS,TERMINAL(3),TERMINAL(1),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,2,TERMINAL(4),ROOT(5),ROOT(6));

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTERSINGLECASE(7)
}

enum opTrigger vpx_method_Root_2F_Compute_20_Shift_20_Offset_case_1_local_6_case_1_local_4_case_1_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Root_2F_Compute_20_Shift_20_Offset_case_1_local_6_case_1_local_4_case_1_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(9)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"0",ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP__28_in_29_,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_match(PARAMETERS,"0",TERMINAL(2));
NEXTCASEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_split_2D_nth,2,2,TERMINAL(0),TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_detach_2D_r,1,2,TERMINAL(3),ROOT(5),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP_reverse,1,1,TERMINAL(5),ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP__28_join_29_,2,1,TERMINAL(4),TERMINAL(5),ROOT(8));

result = kSuccess;

OUTPUT(0,TERMINAL(8))
FOOTER(9)
}

enum opTrigger vpx_method_Root_2F_Compute_20_Shift_20_Offset_case_1_local_6_case_1_local_4_case_1_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Root_2F_Compute_20_Shift_20_Offset_case_1_local_6_case_1_local_4_case_1_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;
FINISHONSUCCESS

OUTPUT(0,TERMINAL(0))
FOOTER(1)
}

enum opTrigger vpx_method_Root_2F_Compute_20_Shift_20_Offset_case_1_local_6_case_1_local_4_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Root_2F_Compute_20_Shift_20_Offset_case_1_local_6_case_1_local_4_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Root_2F_Compute_20_Shift_20_Offset_case_1_local_6_case_1_local_4_case_1_local_7_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Root_2F_Compute_20_Shift_20_Offset_case_1_local_6_case_1_local_4_case_1_local_7_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Root_2F_Compute_20_Shift_20_Offset_case_1_local_6_case_1_local_4_case_1_local_9_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Root_2F_Compute_20_Shift_20_Offset_case_1_local_6_case_1_local_4_case_1_local_9_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_extconstant(PARAMETERS,controlKey,ROOT(1));

result = vpx_method_Modifier_20_Key_20_Pressed_3F_(PARAMETERS,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_detach_2D_r,1,2,TERMINAL(0),ROOT(2),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_Root_2F_Compute_20_Shift_20_Offset_case_1_local_6_case_1_local_4_case_1_local_9_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Root_2F_Compute_20_Shift_20_Offset_case_1_local_6_case_1_local_4_case_1_local_9_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_detach_2D_l,1,2,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(3)
}

enum opTrigger vpx_method_Root_2F_Compute_20_Shift_20_Offset_case_1_local_6_case_1_local_4_case_1_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Root_2F_Compute_20_Shift_20_Offset_case_1_local_6_case_1_local_4_case_1_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Root_2F_Compute_20_Shift_20_Offset_case_1_local_6_case_1_local_4_case_1_local_9_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Root_2F_Compute_20_Shift_20_Offset_case_1_local_6_case_1_local_4_case_1_local_9_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Root_2F_Compute_20_Shift_20_Offset_case_1_local_6_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Root_2F_Compute_20_Shift_20_Offset_case_1_local_6_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"0",ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP__28_in_29_,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP__3D_,2,0,TERMINAL(2),TERMINAL(1));
NEXTCASEONSUCCESS

result = vpx_constant(PARAMETERS,"TRUE",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_sort,2,1,TERMINAL(0),TERMINAL(3),ROOT(4));

REPEATBEGIN
LOOPTERMINALBEGIN(1)
LOOPTERMINAL(0,4,5)
result = vpx_method_Root_2F_Compute_20_Shift_20_Offset_case_1_local_6_case_1_local_4_case_1_local_7(PARAMETERS,LOOP(0),ROOT(5));
REPEATFINISH

result = vpx_match(PARAMETERS,"( )",TERMINAL(5));
FAILONSUCCESS

result = vpx_method_Root_2F_Compute_20_Shift_20_Offset_case_1_local_6_case_1_local_4_case_1_local_9(PARAMETERS,TERMINAL(5),ROOT(6));

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTER(7)
}

enum opTrigger vpx_method_Root_2F_Compute_20_Shift_20_Offset_case_1_local_6_case_1_local_4_case_2_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Root_2F_Compute_20_Shift_20_Offset_case_1_local_6_case_1_local_4_case_2_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_detach_2D_l,1,2,TERMINAL(0),ROOT(1),ROOT(2));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(2))) ){
REPEATBEGINWITHCOUNTER
LOOPTERMINALBEGIN(1)
LOOPTERMINAL(0,1,3)
result = vpx_call_primitive(PARAMETERS,VPLP_min,2,1,LOOP(0),LIST(2),ROOT(3));
REPEATFINISH
} else {
ROOTNULL(3,TERMINAL(1))
}

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Root_2F_Compute_20_Shift_20_Offset_case_1_local_6_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Root_2F_Compute_20_Shift_20_Offset_case_1_local_6_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Root_2F_Compute_20_Shift_20_Offset_case_1_local_6_case_1_local_4_case_2_local_2(PARAMETERS,TERMINAL(0),ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Root_2F_Compute_20_Shift_20_Offset_case_1_local_6_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Root_2F_Compute_20_Shift_20_Offset_case_1_local_6_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Root_2F_Compute_20_Shift_20_Offset_case_1_local_6_case_1_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Root_2F_Compute_20_Shift_20_Offset_case_1_local_6_case_1_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Root_2F_Compute_20_Shift_20_Offset_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Root_2F_Compute_20_Shift_20_Offset_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP__28_length_29_,1,1,TERMINAL(0),ROOT(2));

result = vpx_match(PARAMETERS,"1",TERMINAL(2));
NEXTCASEONSUCCESS

result = vpx_method_Root_2F_Compute_20_Shift_20_Offset_case_1_local_6_case_1_local_4(PARAMETERS,TERMINAL(1),ROOT(3));
FAILONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_Root_2F_Compute_20_Shift_20_Offset_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Root_2F_Compute_20_Shift_20_Offset_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,1,TERMINAL(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Root_2F_Compute_20_Shift_20_Offset_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Root_2F_Compute_20_Shift_20_Offset_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Root_2F_Compute_20_Shift_20_Offset_case_1_local_6_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Root_2F_Compute_20_Shift_20_Offset_case_1_local_6_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Root_2F_Compute_20_Shift_20_Offset_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Root_2F_Compute_20_Shift_20_Offset_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(8)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Find_20_Terminals,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"( )",TERMINAL(1));
NEXTCASEONSUCCESS

result = vpx_get(PARAMETERS,kVPXValue_Frame,TERMINAL(0),ROOT(2),ROOT(3));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(1))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Root_2F_Compute_20_Shift_20_Offset_case_1_local_5(PARAMETERS,LIST(1),TERMINAL(3),ROOT(4));
LISTROOT(4,0)
REPEATFINISH
LISTROOTFINISH(4,0)
LISTROOTEND
} else {
ROOTEMPTY(4)
}

result = vpx_method_Root_2F_Compute_20_Shift_20_Offset_case_1_local_6(PARAMETERS,TERMINAL(1),TERMINAL(4),ROOT(5));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"0",ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(6),TERMINAL(5),ROOT(7));

result = kSuccess;

OUTPUT(0,TERMINAL(7))
FOOTER(8)
}

enum opTrigger vpx_method_Root_2F_Compute_20_Shift_20_Offset_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Root_2F_Compute_20_Shift_20_Offset_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( 0 0 )",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Root_2F_Compute_20_Shift_20_Offset_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Root_2F_Compute_20_Shift_20_Offset_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(13)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Find_20_Terminals,1,1,TERMINAL(0),ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP__28_length_29_,1,1,TERMINAL(1),ROOT(2));

result = vpx_match(PARAMETERS,"1",TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,1,TERMINAL(1),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Frame,TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_get(PARAMETERS,kVPXValue_Frame,TERMINAL(0),ROOT(6),ROOT(7));

result = vpx_method_Subtract_20_Point(PARAMETERS,TERMINAL(5),TERMINAL(7),ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,2,TERMINAL(8),ROOT(9),ROOT(10));

result = vpx_constant(PARAMETERS,"0",ROOT(11));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(11),TERMINAL(10),ROOT(12));

result = kSuccess;

OUTPUT(0,TERMINAL(12))
FOOTER(13)
}

enum opTrigger vpx_method_Root_2F_Compute_20_Shift_20_Offset(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Root_2F_Compute_20_Shift_20_Offset_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_Root_2F_Compute_20_Shift_20_Offset_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Root_2F_Compute_20_Shift_20_Offset_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Root_2F_Create_20_Connection(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(1),ROOT(2));

result = vpx_match(PARAMETERS,"Terminal",TERMINAL(2));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Create_20_Connection,2,0,TERMINAL(1),TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Root_2F_Find_20_Terminals_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Root_2F_Find_20_Terminals_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_Inputs,TERMINAL(2),ROOT(3),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Root_2F_Find_20_Terminals_case_1_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Root_2F_Find_20_Terminals_case_1_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Root,TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_equals,2,0,TERMINAL(0),TERMINAL(3));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(4)
}

enum opTrigger vpx_method_Root_2F_Find_20_Terminals_case_1_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Root_2F_Find_20_Terminals_case_1_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADERWITHNONE(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

OUTPUT(0,NONE)
FOOTERWITHNONE(2)
}

enum opTrigger vpx_method_Root_2F_Find_20_Terminals_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Root_2F_Find_20_Terminals_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Root_2F_Find_20_Terminals_case_1_local_7_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Root_2F_Find_20_Terminals_case_1_local_7_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Root_2F_Find_20_Terminals(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(9)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Container,1,1,TERMINAL(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(3),ROOT(4),ROOT(5));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(5))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Root_2F_Find_20_Terminals_case_1_local_5(PARAMETERS,LIST(5),ROOT(6));
LISTROOT(6,0)
REPEATFINISH
LISTROOTFINISH(6,0)
LISTROOTEND
} else {
ROOTEMPTY(6)
}

result = vpx_method_Lists_20_To_20_List(PARAMETERS,TERMINAL(6),ROOT(7));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(7))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Root_2F_Find_20_Terminals_case_1_local_7(PARAMETERS,TERMINAL(1),LIST(7),ROOT(8));
LISTROOT(8,0)
REPEATFINISH
LISTROOTFINISH(8,0)
LISTROOTEND
} else {
ROOTEMPTY(8)
}

result = kSuccess;

OUTPUT(0,TERMINAL(8))
FOOTERSINGLECASE(9)
}

enum opTrigger vpx_method_Root_2F_Remove_20_Just_20_Self_case_1_local_10_case_1_local_4_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Root_2F_Remove_20_Just_20_Self_case_1_local_10_case_1_local_4_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Loop_20_Root,TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_equals,2,0,TERMINAL(0),TERMINAL(3));
TERMINATEONFAILURE

result = vpx_constant(PARAMETERS,"NULL",ROOT(4));

result = vpx_set(PARAMETERS,kVPXValue_Loop_20_Root,TERMINAL(2),TERMINAL(4),ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Update_20_Record,1,0,TERMINAL(5));

result = kSuccess;

FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Root_2F_Remove_20_Just_20_Self_case_1_local_10_case_1_local_4_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Root_2F_Remove_20_Just_20_Self_case_1_local_10_case_1_local_4_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Root,TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_equals,2,0,TERMINAL(0),TERMINAL(3));
TERMINATEONFAILURE

result = vpx_constant(PARAMETERS,"NULL",ROOT(4));

result = vpx_set(PARAMETERS,kVPXValue_Root,TERMINAL(2),TERMINAL(4),ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Update_20_Record,1,0,TERMINAL(5));

result = kSuccess;

FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Root_2F_Remove_20_Just_20_Self_case_1_local_10_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Root_2F_Remove_20_Just_20_Self_case_1_local_10_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Root_2F_Remove_20_Just_20_Self_case_1_local_10_case_1_local_4_case_1_local_2(PARAMETERS,TERMINAL(0),TERMINAL(1));

result = vpx_method_Root_2F_Remove_20_Just_20_Self_case_1_local_10_case_1_local_4_case_1_local_3(PARAMETERS,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Root_2F_Remove_20_Just_20_Self_case_1_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Root_2F_Remove_20_Just_20_Self_case_1_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Inputs,TERMINAL(3),ROOT(4),ROOT(5));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(5))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Root_2F_Remove_20_Just_20_Self_case_1_local_10_case_1_local_4(PARAMETERS,TERMINAL(0),LIST(5));
REPEATFINISH
} else {
}

result = kSuccess;

FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Root_2F_Remove_20_Just_20_Self(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(15)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_Outputs,TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP__28_in_29_,2,1,TERMINAL(4),TERMINAL(1),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_detach_2D_nth,2,2,TERMINAL(4),TERMINAL(5),ROOT(6),ROOT(7));

result = vpx_set(PARAMETERS,kVPXValue_Outputs,TERMINAL(3),TERMINAL(6),ROOT(8));

result = vpx_get(PARAMETERS,kVPXValue_Owner,TERMINAL(8),ROOT(9),ROOT(10));

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(10),ROOT(11),ROOT(12));

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(12),ROOT(13),ROOT(14));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(14))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Root_2F_Remove_20_Just_20_Self_case_1_local_10(PARAMETERS,TERMINAL(1),LIST(14));
REPEATFINISH
} else {
}

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Reorder_20_Outputs,2,0,TERMINAL(9),TERMINAL(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Dispose_20_Record,1,0,TERMINAL(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Close,1,0,TERMINAL(7));

result = kSuccess;

FOOTERSINGLECASE(15)
}

enum opTrigger vpx_method_Root_2F_Remove_20_Self_case_1_local_10_case_1_local_4_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Root_2F_Remove_20_Self_case_1_local_10_case_1_local_4_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Loop_20_Root,TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_equals,2,0,TERMINAL(0),TERMINAL(3));
TERMINATEONFAILURE

result = vpx_constant(PARAMETERS,"NULL",ROOT(4));

result = vpx_set(PARAMETERS,kVPXValue_Loop_20_Root,TERMINAL(2),TERMINAL(4),ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Update_20_Record,1,0,TERMINAL(5));

result = kSuccess;

FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Root_2F_Remove_20_Self_case_1_local_10_case_1_local_4_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Root_2F_Remove_20_Self_case_1_local_10_case_1_local_4_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Root,TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_equals,2,0,TERMINAL(0),TERMINAL(3));
TERMINATEONFAILURE

result = vpx_constant(PARAMETERS,"NULL",ROOT(4));

result = vpx_set(PARAMETERS,kVPXValue_Root,TERMINAL(2),TERMINAL(4),ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Update_20_Record,1,0,TERMINAL(5));

result = kSuccess;

FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Root_2F_Remove_20_Self_case_1_local_10_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Root_2F_Remove_20_Self_case_1_local_10_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Root_2F_Remove_20_Self_case_1_local_10_case_1_local_4_case_1_local_2(PARAMETERS,TERMINAL(0),TERMINAL(1));

result = vpx_method_Root_2F_Remove_20_Self_case_1_local_10_case_1_local_4_case_1_local_3(PARAMETERS,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Root_2F_Remove_20_Self_case_1_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Root_2F_Remove_20_Self_case_1_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Inputs,TERMINAL(3),ROOT(4),ROOT(5));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(5))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Root_2F_Remove_20_Self_case_1_local_10_case_1_local_4(PARAMETERS,TERMINAL(0),LIST(5));
REPEATFINISH
} else {
}

result = kSuccess;

FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Root_2F_Remove_20_Self_case_1_local_11_case_1_local_4_case_1_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Root_2F_Remove_20_Self_case_1_local_11_case_1_local_4_case_1_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(9)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Operation Data",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_detach_2D_l,1,2,TERMINAL(4),ROOT(5),ROOT(6));

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(5),ROOT(7),ROOT(8));

result = kSuccess;

OUTPUT(0,TERMINAL(8))
FOOTERSINGLECASE(9)
}

enum opTrigger vpx_method_Root_2F_Remove_20_Self_case_1_local_11_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Root_2F_Remove_20_Self_case_1_local_11_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(12)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Grandparent_20_Helper,1,1,TERMINAL(0),ROOT(1));

result = vpx_get(PARAMETERS,kVPXValue_Owner,TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(5),ROOT(6),ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP__28_in_29_,2,1,TERMINAL(7),TERMINAL(4),ROOT(8));

result = vpx_match(PARAMETERS,"0",TERMINAL(8));
NEXTCASEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_detach_2D_nth,2,2,TERMINAL(7),TERMINAL(8),ROOT(9),ROOT(10));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(9))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Root_2F_Remove_20_Self_case_1_local_11_case_1_local_4_case_1_local_9(PARAMETERS,LIST(9),ROOT(11));
LISTROOT(11,0)
REPEATFINISH
LISTROOTFINISH(11,0)
LISTROOTEND
} else {
ROOTEMPTY(11)
}

result = kSuccess;

OUTPUT(0,TERMINAL(11))
FOOTER(12)
}

enum opTrigger vpx_method_Root_2F_Remove_20_Self_case_1_local_11_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Root_2F_Remove_20_Self_case_1_local_11_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( )",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Root_2F_Remove_20_Self_case_1_local_11_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Root_2F_Remove_20_Self_case_1_local_11_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Root_2F_Remove_20_Self_case_1_local_11_case_1_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Root_2F_Remove_20_Self_case_1_local_11_case_1_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Root_2F_Remove_20_Self_case_1_local_11_case_1_local_6_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Root_2F_Remove_20_Self_case_1_local_11_case_1_local_6_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_match(PARAMETERS,"Operation Data",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Type,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_match(PARAMETERS,"local",TERMINAL(4));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Remove_20_Terminal,2,0,TERMINAL(3),TERMINAL(2));

result = kSuccess;

FOOTER(5)
}

enum opTrigger vpx_method_Root_2F_Remove_20_Self_case_1_local_11_case_1_local_6_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Root_2F_Remove_20_Self_case_1_local_11_case_1_local_6_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_match(PARAMETERS,"Universal Data",TERMINAL(1));
TERMINATEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Inarity,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_minus_2D_one,1,1,TERMINAL(4),ROOT(5));

result = vpx_set(PARAMETERS,kVPXValue_Inarity,TERMINAL(3),TERMINAL(5),ROOT(6));

result = kSuccess;

FOOTER(7)
}

enum opTrigger vpx_method_Root_2F_Remove_20_Self_case_1_local_11_case_1_local_6_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Root_2F_Remove_20_Self_case_1_local_11_case_1_local_6_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Root_2F_Remove_20_Self_case_1_local_11_case_1_local_6_case_1_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2))
vpx_method_Root_2F_Remove_20_Self_case_1_local_11_case_1_local_6_case_1_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2);
return outcome;
}

enum opTrigger vpx_method_Root_2F_Remove_20_Self_case_1_local_11_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Root_2F_Remove_20_Self_case_1_local_11_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Grandparent_20_Helper,1,1,TERMINAL(0),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Grandparent_20_Helper,1,1,TERMINAL(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(3),ROOT(4));

result = vpx_method_Root_2F_Remove_20_Self_case_1_local_11_case_1_local_6_case_1_local_5(PARAMETERS,TERMINAL(3),TERMINAL(4),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Root_2F_Remove_20_Self_case_1_local_11_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Root_2F_Remove_20_Self_case_1_local_11_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Type,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_match(PARAMETERS,"input_bar",TERMINAL(3));
NEXTCASEONFAILURE

result = vpx_method_Root_2F_Remove_20_Self_case_1_local_11_case_1_local_4(PARAMETERS,TERMINAL(2),ROOT(4));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(4))) ){
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Remove_20_Root,2,0,LIST(4),TERMINAL(1));
REPEATFINISH
} else {
}

result = vpx_method_Root_2F_Remove_20_Self_case_1_local_11_case_1_local_6(PARAMETERS,TERMINAL(2),TERMINAL(1));

result = kSuccess;

FOOTER(5)
}

enum opTrigger vpx_method_Root_2F_Remove_20_Self_case_1_local_11_case_2_local_4_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Root_2F_Remove_20_Self_case_1_local_11_case_2_local_4_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(9)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Operation Data",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_detach_2D_r,1,2,TERMINAL(4),ROOT(5),ROOT(6));

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(6),ROOT(7),ROOT(8));

result = kSuccess;

OUTPUT(0,TERMINAL(8))
FOOTERSINGLECASE(9)
}

enum opTrigger vpx_method_Root_2F_Remove_20_Self_case_1_local_11_case_2_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Root_2F_Remove_20_Self_case_1_local_11_case_2_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Case Data",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(2),ROOT(3),ROOT(4));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(4))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Root_2F_Remove_20_Self_case_1_local_11_case_2_local_4_case_1_local_5(PARAMETERS,LIST(4),ROOT(5));
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

enum opTrigger vpx_method_Root_2F_Remove_20_Self_case_1_local_11_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Root_2F_Remove_20_Self_case_1_local_11_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Type,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_match(PARAMETERS,"local",TERMINAL(3));
NEXTCASEONFAILURE

result = vpx_method_Root_2F_Remove_20_Self_case_1_local_11_case_2_local_4(PARAMETERS,TERMINAL(2),ROOT(4));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(4))) ){
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Remove_20_Terminal,2,0,LIST(4),TERMINAL(1));
REPEATFINISH
} else {
}

result = kSuccess;

FOOTER(5)
}

enum opTrigger vpx_method_Root_2F_Remove_20_Self_case_1_local_11_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Root_2F_Remove_20_Self_case_1_local_11_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Root_2F_Remove_20_Self_case_1_local_11(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Root_2F_Remove_20_Self_case_1_local_11(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Root_2F_Remove_20_Self_case_1_local_11_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
if(vpx_method_Root_2F_Remove_20_Self_case_1_local_11_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Root_2F_Remove_20_Self_case_1_local_11_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Root_2F_Remove_20_Self(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(15)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_Outputs,TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP__28_in_29_,2,1,TERMINAL(4),TERMINAL(1),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_detach_2D_nth,2,2,TERMINAL(4),TERMINAL(5),ROOT(6),ROOT(7));

result = vpx_set(PARAMETERS,kVPXValue_Outputs,TERMINAL(3),TERMINAL(6),ROOT(8));

result = vpx_get(PARAMETERS,kVPXValue_Owner,TERMINAL(8),ROOT(9),ROOT(10));

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(10),ROOT(11),ROOT(12));

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(12),ROOT(13),ROOT(14));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(14))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_Root_2F_Remove_20_Self_case_1_local_10(PARAMETERS,TERMINAL(1),LIST(14));
REPEATFINISH
} else {
}

result = vpx_method_Root_2F_Remove_20_Self_case_1_local_11(PARAMETERS,TERMINAL(9),TERMINAL(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Reorder_20_Outputs,2,0,TERMINAL(9),TERMINAL(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Dispose_20_Record,1,0,TERMINAL(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Close,1,0,TERMINAL(7));

result = kSuccess;

FOOTERSINGLECASE(15)
}

enum opTrigger vpx_method_Root_2F_Open_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Root_2F_Open_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(13)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_Outputs,TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Project_20_Data,1,1,TERMINAL(3),ROOT(5));

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(5),ROOT(6),ROOT(7));

result = vpx_get(PARAMETERS,kVPXValue_Record,TERMINAL(3),ROOT(8),ROOT(9));

result = vpx_call_primitive(PARAMETERS,VPLP__28_in_29_,2,1,TERMINAL(4),TERMINAL(1),ROOT(10));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Create_20_Root,3,1,TERMINAL(7),TERMINAL(9),TERMINAL(10),ROOT(11));

result = vpx_set(PARAMETERS,kVPXValue_Record,TERMINAL(1),TERMINAL(11),ROOT(12));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Update_20_Record,1,0,TERMINAL(12));

result = kSuccess;

FOOTERSINGLECASE(13)
}

enum opTrigger vpx_method_Root_2F_Open(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_context_super_method(PARAMETERS,kVPXMethod_Open,2,0,TERMINAL(0),TERMINAL(1));

result = vpx_method_Root_2F_Open_case_1_local_3(PARAMETERS,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Root_2F_Update_20_Record(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(8)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Type,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_Record,TERMINAL(1),ROOT(3),ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Project_20_Data,1,1,TERMINAL(3),ROOT(5));

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(5),ROOT(6),ROOT(7));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Root,3,0,TERMINAL(7),TERMINAL(4),TERMINAL(2));

result = kSuccess;

FOOTERSINGLECASE(8)
}

enum opTrigger vpx_method_Root_2F_Parse_20_CPX_20_Buffer_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2);
enum opTrigger vpx_method_Root_2F_Parse_20_CPX_20_Buffer_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2)
{
HEADER(10)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_constant(PARAMETERS,"8",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_text,3,3,TERMINAL(3),TERMINAL(2),TERMINAL(4),ROOT(5),ROOT(6),ROOT(7));

result = vpx_match(PARAMETERS,"end root",TERMINAL(7));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_detach_2D_l,1,2,TERMINAL(1),ROOT(8),ROOT(9));

result = kSuccess;

OUTPUT(0,TERMINAL(8))
OUTPUT(1,TERMINAL(9))
OUTPUT(2,TERMINAL(6))
FOOTER(10)
}

enum opTrigger vpx_method_Root_2F_Parse_20_CPX_20_Buffer_case_2_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Root_2F_Parse_20_CPX_20_Buffer_case_2_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
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

enum opTrigger vpx_method_Root_2F_Parse_20_CPX_20_Buffer_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2);
enum opTrigger vpx_method_Root_2F_Parse_20_CPX_20_Buffer_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2)
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
result = vpx_method_Root_2F_Parse_20_CPX_20_Buffer_case_2_local_8(PARAMETERS,TERMINAL(5),LOOP(0),TERMINAL(8),ROOT(11));
REPEATFINISH

result = kSuccess;

OUTPUT(0,TERMINAL(0))
OUTPUT(1,TERMINAL(1))
OUTPUT(2,TERMINAL(11))
FOOTER(12)
}

enum opTrigger vpx_method_Root_2F_Parse_20_CPX_20_Buffer_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2);
enum opTrigger vpx_method_Root_2F_Parse_20_CPX_20_Buffer_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2)
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

enum opTrigger vpx_method_Root_2F_Parse_20_CPX_20_Buffer(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Root_2F_Parse_20_CPX_20_Buffer_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0,root1,root2))
if(vpx_method_Root_2F_Parse_20_CPX_20_Buffer_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0,root1,root2))
vpx_method_Root_2F_Parse_20_CPX_20_Buffer_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0,root1,root2);
return outcome;
}

enum opTrigger vpx_method_Root_2F_Buffer_20_Initialization_case_1_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Root_2F_Buffer_20_Initialization_case_1_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"0",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"Normal",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Root_2F_Buffer_20_Initialization_case_1_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Root_2F_Buffer_20_Initialization_case_1_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"1",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"List",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Root_2F_Buffer_20_Initialization_case_1_local_7_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Root_2F_Buffer_20_Initialization_case_1_local_7_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"2",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"Loop",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Root_2F_Buffer_20_Initialization_case_1_local_7_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Root_2F_Buffer_20_Initialization_case_1_local_7_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"unknown",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Root_2F_Buffer_20_Initialization_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Root_2F_Buffer_20_Initialization_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Root_2F_Buffer_20_Initialization_case_1_local_7_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_Root_2F_Buffer_20_Initialization_case_1_local_7_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_Root_2F_Buffer_20_Initialization_case_1_local_7_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Root_2F_Buffer_20_Initialization_case_1_local_7_case_4(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Root_2F_Buffer_20_Initialization_case_1_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Root_2F_Buffer_20_Initialization_case_1_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(8)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Type,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_match(PARAMETERS,"unknown",TERMINAL(2));
TERMINATEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(1),ROOT(3),ROOT(4));

result = vpx_persistent(PARAMETERS,kVPXValue_Problem_20_Operations,0,1,ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP__28_in_29_,2,1,TERMINAL(5),TERMINAL(4),ROOT(6));

result = vpx_match(PARAMETERS,"0",TERMINAL(6));
TERMINATEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_attach_2D_r,2,1,TERMINAL(5),TERMINAL(4),ROOT(7));

result = vpx_persistent(PARAMETERS,kVPXValue_Problem_20_Operations,1,0,TERMINAL(7));

result = kSuccess;

FOOTERSINGLECASE(8)
}

enum opTrigger vpx_method_Root_2F_Buffer_20_Initialization(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(14)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"2",ROOT(3));

result = vpx_constant(PARAMETERS,"1",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP__2B2B_,2,1,TERMINAL(1),TERMINAL(3),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_integer,3,3,TERMINAL(2),TERMINAL(5),TERMINAL(4),ROOT(6),ROOT(7),ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_integer,3,3,TERMINAL(6),TERMINAL(7),TERMINAL(4),ROOT(9),ROOT(10),ROOT(11));

result = vpx_method_Root_2F_Buffer_20_Initialization_case_1_local_7(PARAMETERS,TERMINAL(11),ROOT(12));

result = vpx_set(PARAMETERS,kVPXValue_Type,TERMINAL(0),TERMINAL(12),ROOT(13));

result = vpx_method_Root_2F_Buffer_20_Initialization_case_1_local_9(PARAMETERS,TERMINAL(13));

result = kSuccess;

FOOTERSINGLECASE(14)
}

enum opTrigger vpx_method_Root_2F_Dispose_20_Record_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Root_2F_Dispose_20_Record_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
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

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Destroy_20_Root,2,0,TERMINAL(3),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Root_2F_Dispose_20_Record(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Record,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Project_20_Data,1,1,TERMINAL(0),ROOT(3));

result = vpx_constant(PARAMETERS,"NULL",ROOT(4));

result = vpx_method_Root_2F_Dispose_20_Record_case_1_local_5(PARAMETERS,TERMINAL(3),TERMINAL(2));

result = vpx_set(PARAMETERS,kVPXValue_Record,TERMINAL(1),TERMINAL(4),ROOT(5));

result = kSuccess;

FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Root_2F_Can_20_Delete_3F__case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Root_2F_Can_20_Delete_3F__case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(2));
FAILONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Type,TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_match(PARAMETERS,"set",TERMINAL(4));
TERMINATEONSUCCESS

result = vpx_match(PARAMETERS,"extset",TERMINAL(4));
TERMINATEONSUCCESS

result = vpx_match(PARAMETERS,"instance",TERMINAL(4));
TERMINATEONSUCCESS

result = vpx_match(PARAMETERS,"get",TERMINAL(4));
TERMINATEONSUCCESS

result = vpx_match(PARAMETERS,"extget",TERMINAL(4));
TERMINATEONSUCCESS

result = kSuccess;
FAILONSUCCESS

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Root_2F_Can_20_Delete_3F__case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Root_2F_Can_20_Delete_3F__case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Root_2F_Can_20_Delete_3F__case_1_local_2(PARAMETERS,TERMINAL(0));
NEXTCASEONFAILURE

result = kSuccess;
FAILONSUCCESS

FOOTER(1)
}

enum opTrigger vpx_method_Root_2F_Can_20_Delete_3F__case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Root_2F_Can_20_Delete_3F__case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_call_context_super_method(PARAMETERS,kVPXMethod_Can_20_Delete_3F_,1,0,TERMINAL(0));
FAILONFAILURE

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_Root_2F_Can_20_Delete_3F_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Root_2F_Can_20_Delete_3F__case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Root_2F_Can_20_Delete_3F__case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

/* Stop Universals */



Nat4 VPLC_Terminal_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_Terminal_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 254 407 }{ 200 300 } */
	tempAttribute = attribute_add("Parent",tempClass,NULL,environment);
	tempAttribute = attribute_add("Frame",tempClass,tempAttribute_Terminal_2F_Frame,environment);
	tempAttribute = attribute_add("Name",tempClass,NULL,environment);
	tempAttribute = attribute_add("Type",tempClass,tempAttribute_Terminal_2F_Type,environment);
	tempAttribute = attribute_add("Root",tempClass,NULL,environment);
	tempAttribute = attribute_add("Loop Root",tempClass,NULL,environment);
	tempAttribute = attribute_add("Record",tempClass,NULL,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"Input-Output");
	return kNOERROR;
}

/* Start Universals: { 384 410 }{ 266 336 } */
enum opTrigger vpx_method_Terminal_2F_C_20_Code_20_Export_20_Connection_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4,V_Object *root0);
enum opTrigger vpx_method_Terminal_2F_C_20_Code_20_Export_20_Connection_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4,V_Object *root0)
{
HEADER(32)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
INPUT(4,4)
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
NEXTCASEONSUCCESS

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(0),ROOT(5),ROOT(6));

result = vpx_get(PARAMETERS,kVPXValue_Owner,TERMINAL(6),ROOT(7),ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP__28_in_29_,2,1,TERMINAL(4),TERMINAL(8),ROOT(9));

result = vpx_match(PARAMETERS,"0",TERMINAL(9));
NEXTCASEONSUCCESS

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(1),ROOT(10),ROOT(11));

result = vpx_get(PARAMETERS,kVPXValue_Owner,TERMINAL(11),ROOT(12),ROOT(13));

result = vpx_call_primitive(PARAMETERS,VPLP__28_in_29_,2,1,TERMINAL(4),TERMINAL(13),ROOT(14));

result = vpx_match(PARAMETERS,"0",TERMINAL(14));
NEXTCASEONSUCCESS

result = vpx_get(PARAMETERS,kVPXValue_Outputs,TERMINAL(12),ROOT(15),ROOT(16));

result = vpx_call_primitive(PARAMETERS,VPLP__28_in_29_,2,1,TERMINAL(16),TERMINAL(10),ROOT(17));

result = vpx_call_primitive(PARAMETERS,VPLP_to_2D_string,1,1,TERMINAL(17),ROOT(18));

result = vpx_call_primitive(PARAMETERS,VPLP_minus_2D_one,1,1,TERMINAL(14),ROOT(19));

result = vpx_call_primitive(PARAMETERS,VPLP_to_2D_string,1,1,TERMINAL(19),ROOT(20));

result = vpx_call_primitive(PARAMETERS,VPLP__28_in_29_,2,1,TERMINAL(3),TERMINAL(5),ROOT(21));

result = vpx_call_primitive(PARAMETERS,VPLP_to_2D_string,1,1,TERMINAL(21),ROOT(22));

result = vpx_call_primitive(PARAMETERS,VPLP_minus_2D_one,1,1,TERMINAL(9),ROOT(23));

result = vpx_call_primitive(PARAMETERS,VPLP_to_2D_string,1,1,TERMINAL(23),ROOT(24));

result = vpx_constant(PARAMETERS,"\"\tresult = connect_root_\"",ROOT(25));

result = vpx_constant(PARAMETERS,"\"to_terminal(ptrA,\"",ROOT(26));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,2,1,TERMINAL(25),TERMINAL(26),ROOT(27));

result = vpx_constant(PARAMETERS,"\",\"",ROOT(28));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,7,1,TERMINAL(2),TERMINAL(27),TERMINAL(18),TERMINAL(28),TERMINAL(20),TERMINAL(28),TERMINAL(22),ROOT(29));

result = vpx_constant(PARAMETERS,"\");\n\"",ROOT(30));

result = vpx_call_primitive(PARAMETERS,VPLP__22_join_22_,4,1,TERMINAL(29),TERMINAL(28),TERMINAL(24),TERMINAL(30),ROOT(31));

result = kSuccess;

OUTPUT(0,TERMINAL(31))
FOOTER(32)
}

enum opTrigger vpx_method_Terminal_2F_C_20_Code_20_Export_20_Connection_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4,V_Object *root0);
enum opTrigger vpx_method_Terminal_2F_C_20_Code_20_Export_20_Connection_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
INPUT(4,4)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(5)
}

enum opTrigger vpx_method_Terminal_2F_C_20_Code_20_Export_20_Connection(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Terminal_2F_C_20_Code_20_Export_20_Connection_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,terminal4,root0))
vpx_method_Terminal_2F_C_20_Code_20_Export_20_Connection_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,terminal4,root0);
return outcome;
}

enum opTrigger vpx_method_Terminal_2F_Clone(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = vpx_call_context_super_method(PARAMETERS,kVPXMethod_Clone,1,1,TERMINAL(0),ROOT(2));

result = vpx_set(PARAMETERS,kVPXValue_Root,TERMINAL(2),TERMINAL(1),ROOT(3));

result = vpx_set(PARAMETERS,kVPXValue_Loop_20_Root,TERMINAL(3),TERMINAL(1),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Terminal_2F_Compute_20_Shift_20_Offset_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Terminal_2F_Compute_20_Shift_20_Offset_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(12)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Root,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
NEXTCASEONSUCCESS

result = vpx_get(PARAMETERS,kVPXValue_Frame,TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_Frame,TERMINAL(1),ROOT(5),ROOT(6));

result = vpx_method_Subtract_20_Point(PARAMETERS,TERMINAL(4),TERMINAL(6),ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,2,TERMINAL(7),ROOT(8),ROOT(9));

result = vpx_constant(PARAMETERS,"0",ROOT(10));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(10),TERMINAL(9),ROOT(11));

result = kSuccess;

OUTPUT(0,TERMINAL(11))
FOOTER(12)
}

enum opTrigger vpx_method_Terminal_2F_Compute_20_Shift_20_Offset_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Terminal_2F_Compute_20_Shift_20_Offset_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( 0 0 )",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Terminal_2F_Compute_20_Shift_20_Offset(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Terminal_2F_Compute_20_Shift_20_Offset_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Terminal_2F_Compute_20_Shift_20_Offset_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Terminal_2F_Create_20_Connection_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Terminal_2F_Create_20_Connection_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Loop Root",ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_equals,2,0,TERMINAL(0),TERMINAL(1));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Terminal_2F_Create_20_Connection_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Terminal_2F_Create_20_Connection_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Root",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Terminal_2F_Create_20_Connection_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Terminal_2F_Create_20_Connection_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Terminal_2F_Create_20_Connection_case_1_local_6_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Terminal_2F_Create_20_Connection_case_1_local_6_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Terminal_2F_Create_20_Connection_case_1_local_8_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Terminal_2F_Create_20_Connection_case_1_local_8_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_equals,2,0,TERMINAL(0),TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"NULL",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Terminal_2F_Create_20_Connection_case_1_local_8_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Terminal_2F_Create_20_Connection_case_1_local_8_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Terminal_2F_Create_20_Connection_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Terminal_2F_Create_20_Connection_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Terminal_2F_Create_20_Connection_case_1_local_8_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Terminal_2F_Create_20_Connection_case_1_local_8_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Terminal_2F_Create_20_Connection_case_1_local_10_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4);
enum opTrigger vpx_method_Terminal_2F_Create_20_Connection_case_1_local_10_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
INPUT(4,4)
result = kSuccess;

result = vpx_match(PARAMETERS,"Root",TERMINAL(2));
NEXTCASEONFAILURE

result = kSuccess;

FOOTER(5)
}

enum opTrigger vpx_method_Terminal_2F_Create_20_Connection_case_1_local_10_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4);
enum opTrigger vpx_method_Terminal_2F_Create_20_Connection_case_1_local_10_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
INPUT(4,4)
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"Normal",ROOT(5));

result = vpx_set(PARAMETERS,kVPXValue_Type,TERMINAL(0),TERMINAL(5),ROOT(6));

result = vpx_set(PARAMETERS,kVPXValue_Type,TERMINAL(4),TERMINAL(5),ROOT(7));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Update_20_Record,1,0,TERMINAL(7));

result = kSuccess;

FOOTER(8)
}

enum opTrigger vpx_method_Terminal_2F_Create_20_Connection_case_1_local_10_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4);
enum opTrigger vpx_method_Terminal_2F_Create_20_Connection_case_1_local_10_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4)
{
HEADER(10)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
INPUT(4,4)
result = kSuccess;

result = vpx_constant(PARAMETERS,"TRUE",ROOT(5));

result = vpx_set(PARAMETERS,kVPXValue_Repeat,TERMINAL(1),TERMINAL(5),ROOT(6));

result = vpx_constant(PARAMETERS,"Loop",ROOT(7));

result = vpx_set(PARAMETERS,kVPXValue_Type,TERMINAL(0),TERMINAL(7),ROOT(8));

result = vpx_set(PARAMETERS,kVPXValue_Type,TERMINAL(4),TERMINAL(7),ROOT(9));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Update_20_Record,1,0,TERMINAL(9));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Update_20_Record,1,0,TERMINAL(6));

result = kSuccess;

FOOTER(10)
}

enum opTrigger vpx_method_Terminal_2F_Create_20_Connection_case_1_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4);
enum opTrigger vpx_method_Terminal_2F_Create_20_Connection_case_1_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object terminal4)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Terminal_2F_Create_20_Connection_case_1_local_10_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,terminal4))
if(vpx_method_Terminal_2F_Create_20_Connection_case_1_local_10_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,terminal4))
vpx_method_Terminal_2F_Create_20_Connection_case_1_local_10_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,terminal4);
return outcome;
}

enum opTrigger vpx_method_Terminal_2F_Create_20_Connection(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(12)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(1),ROOT(2));

result = vpx_match(PARAMETERS,"Root",TERMINAL(2));
TERMINATEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(1),ROOT(3),ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(0),ROOT(5),ROOT(6));

result = vpx_method_Terminal_2F_Create_20_Connection_case_1_local_6(PARAMETERS,TERMINAL(6),TERMINAL(4),ROOT(7));

result = vpx_call_inject_get(PARAMETERS,INJECT(7),1,2,TERMINAL(5),ROOT(8),ROOT(9));

result = vpx_method_Terminal_2F_Create_20_Connection_case_1_local_8(PARAMETERS,TERMINAL(9),TERMINAL(3),ROOT(10));

result = vpx_call_inject_set(PARAMETERS,INJECT(7),2,1,TERMINAL(8),TERMINAL(10),ROOT(11));

result = vpx_method_Terminal_2F_Create_20_Connection_case_1_local_10(PARAMETERS,TERMINAL(11),TERMINAL(6),TERMINAL(7),TERMINAL(10),TERMINAL(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Update_20_Record,1,0,TERMINAL(11));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Make_20_Dirty,1,0,TERMINAL(6));

result = kSuccess;

FOOTERSINGLECASE(12)
}

enum opTrigger vpx_method_Terminal_2F_Remove_20_Just_20_Self(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(9)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_Inputs,TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP__28_in_29_,2,1,TERMINAL(4),TERMINAL(1),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_detach_2D_nth,2,2,TERMINAL(4),TERMINAL(5),ROOT(6),ROOT(7));

result = vpx_set(PARAMETERS,kVPXValue_Inputs,TERMINAL(3),TERMINAL(6),ROOT(8));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Reorder_20_Inputs,2,0,TERMINAL(8),TERMINAL(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Dispose_20_Record,1,0,TERMINAL(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Close,1,0,TERMINAL(7));

result = kSuccess;

FOOTERSINGLECASE(9)
}

enum opTrigger vpx_method_Terminal_2F_Remove_20_Self_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Terminal_2F_Remove_20_Self_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Inject,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP__3D_,2,0,TERMINAL(3),TERMINAL(1));
TERMINATEONFAILURE

result = vpx_constant(PARAMETERS,"NULL",ROOT(4));

result = vpx_set(PARAMETERS,kVPXValue_Inject,TERMINAL(2),TERMINAL(4),ROOT(5));

result = vpx_constant(PARAMETERS,"\"\"",ROOT(6));

result = vpx_set(PARAMETERS,kVPXValue_Text,TERMINAL(5),TERMINAL(6),ROOT(7));

result = kSuccess;

FOOTERSINGLECASE(8)
}

enum opTrigger vpx_method_Terminal_2F_Remove_20_Self_case_1_local_8_case_1_local_4_case_1_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Terminal_2F_Remove_20_Self_case_1_local_8_case_1_local_4_case_1_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(9)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Operation Data",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_detach_2D_r,1,2,TERMINAL(4),ROOT(5),ROOT(6));

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(6),ROOT(7),ROOT(8));

result = kSuccess;

OUTPUT(0,TERMINAL(8))
FOOTERSINGLECASE(9)
}

enum opTrigger vpx_method_Terminal_2F_Remove_20_Self_case_1_local_8_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Terminal_2F_Remove_20_Self_case_1_local_8_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(12)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Grandparent_20_Helper,1,1,TERMINAL(0),ROOT(1));

result = vpx_get(PARAMETERS,kVPXValue_Owner,TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(5),ROOT(6),ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP__28_in_29_,2,1,TERMINAL(7),TERMINAL(4),ROOT(8));

result = vpx_match(PARAMETERS,"0",TERMINAL(8));
NEXTCASEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_detach_2D_nth,2,2,TERMINAL(7),TERMINAL(8),ROOT(9),ROOT(10));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(9))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Terminal_2F_Remove_20_Self_case_1_local_8_case_1_local_4_case_1_local_9(PARAMETERS,LIST(9),ROOT(11));
LISTROOT(11,0)
REPEATFINISH
LISTROOTFINISH(11,0)
LISTROOTEND
} else {
ROOTEMPTY(11)
}

result = kSuccess;

OUTPUT(0,TERMINAL(11))
FOOTER(12)
}

enum opTrigger vpx_method_Terminal_2F_Remove_20_Self_case_1_local_8_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Terminal_2F_Remove_20_Self_case_1_local_8_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( )",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Terminal_2F_Remove_20_Self_case_1_local_8_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Terminal_2F_Remove_20_Self_case_1_local_8_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Terminal_2F_Remove_20_Self_case_1_local_8_case_1_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Terminal_2F_Remove_20_Self_case_1_local_8_case_1_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Terminal_2F_Remove_20_Self_case_1_local_8_case_1_local_6_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Terminal_2F_Remove_20_Self_case_1_local_8_case_1_local_6_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_match(PARAMETERS,"Operation Data",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Type,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_match(PARAMETERS,"local",TERMINAL(4));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Remove_20_Root,2,0,TERMINAL(3),TERMINAL(2));

result = kSuccess;

FOOTER(5)
}

enum opTrigger vpx_method_Terminal_2F_Remove_20_Self_case_1_local_8_case_1_local_6_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Terminal_2F_Remove_20_Self_case_1_local_8_case_1_local_6_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_match(PARAMETERS,"Universal Data",TERMINAL(1));
TERMINATEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Outarity,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_minus_2D_one,1,1,TERMINAL(4),ROOT(5));

result = vpx_set(PARAMETERS,kVPXValue_Outarity,TERMINAL(3),TERMINAL(5),ROOT(6));

result = kSuccess;

FOOTER(7)
}

enum opTrigger vpx_method_Terminal_2F_Remove_20_Self_case_1_local_8_case_1_local_6_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_Terminal_2F_Remove_20_Self_case_1_local_8_case_1_local_6_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Terminal_2F_Remove_20_Self_case_1_local_8_case_1_local_6_case_1_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2))
vpx_method_Terminal_2F_Remove_20_Self_case_1_local_8_case_1_local_6_case_1_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2);
return outcome;
}

enum opTrigger vpx_method_Terminal_2F_Remove_20_Self_case_1_local_8_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Terminal_2F_Remove_20_Self_case_1_local_8_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Grandparent_20_Helper,1,1,TERMINAL(0),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Grandparent_20_Helper,1,1,TERMINAL(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(3),ROOT(4));

result = vpx_method_Terminal_2F_Remove_20_Self_case_1_local_8_case_1_local_6_case_1_local_5(PARAMETERS,TERMINAL(3),TERMINAL(4),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_Terminal_2F_Remove_20_Self_case_1_local_8_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Terminal_2F_Remove_20_Self_case_1_local_8_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Type,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_match(PARAMETERS,"output_bar",TERMINAL(3));
NEXTCASEONFAILURE

result = vpx_method_Terminal_2F_Remove_20_Self_case_1_local_8_case_1_local_4(PARAMETERS,TERMINAL(2),ROOT(4));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(4))) ){
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Remove_20_Terminal,2,0,LIST(4),TERMINAL(1));
REPEATFINISH
} else {
}

result = vpx_method_Terminal_2F_Remove_20_Self_case_1_local_8_case_1_local_6(PARAMETERS,TERMINAL(2),TERMINAL(1));

result = kSuccess;

FOOTER(5)
}

enum opTrigger vpx_method_Terminal_2F_Remove_20_Self_case_1_local_8_case_2_local_4_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Terminal_2F_Remove_20_Self_case_1_local_8_case_2_local_4_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(9)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Operation Data",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_detach_2D_l,1,2,TERMINAL(4),ROOT(5),ROOT(6));

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(5),ROOT(7),ROOT(8));

result = kSuccess;

OUTPUT(0,TERMINAL(8))
FOOTERSINGLECASE(9)
}

enum opTrigger vpx_method_Terminal_2F_Remove_20_Self_case_1_local_8_case_2_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Terminal_2F_Remove_20_Self_case_1_local_8_case_2_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Case Data",ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_List_20_Datum,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(2),ROOT(3),ROOT(4));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(4))) ){
LISTROOTBEGIN(1)
REPEATBEGINWITHCOUNTER
result = vpx_method_Terminal_2F_Remove_20_Self_case_1_local_8_case_2_local_4_case_1_local_5(PARAMETERS,LIST(4),ROOT(5));
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

enum opTrigger vpx_method_Terminal_2F_Remove_20_Self_case_1_local_8_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Terminal_2F_Remove_20_Self_case_1_local_8_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Type,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_match(PARAMETERS,"local",TERMINAL(3));
NEXTCASEONFAILURE

result = vpx_method_Terminal_2F_Remove_20_Self_case_1_local_8_case_2_local_4(PARAMETERS,TERMINAL(2),ROOT(4));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(4))) ){
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Remove_20_Root,2,0,LIST(4),TERMINAL(1));
REPEATFINISH
} else {
}

result = kSuccess;

FOOTER(5)
}

enum opTrigger vpx_method_Terminal_2F_Remove_20_Self_case_1_local_8_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Terminal_2F_Remove_20_Self_case_1_local_8_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_Terminal_2F_Remove_20_Self_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Terminal_2F_Remove_20_Self_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Terminal_2F_Remove_20_Self_case_1_local_8_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
if(vpx_method_Terminal_2F_Remove_20_Self_case_1_local_8_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_Terminal_2F_Remove_20_Self_case_1_local_8_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_Terminal_2F_Remove_20_Self(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(9)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_Inputs,TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP__28_in_29_,2,1,TERMINAL(4),TERMINAL(1),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_detach_2D_nth,2,2,TERMINAL(4),TERMINAL(5),ROOT(6),ROOT(7));

result = vpx_set(PARAMETERS,kVPXValue_Inputs,TERMINAL(3),TERMINAL(6),ROOT(8));

result = vpx_method_Terminal_2F_Remove_20_Self_case_1_local_7(PARAMETERS,TERMINAL(8),TERMINAL(0));

result = vpx_method_Terminal_2F_Remove_20_Self_case_1_local_8(PARAMETERS,TERMINAL(8),TERMINAL(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Reorder_20_Inputs,2,0,TERMINAL(8),TERMINAL(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Dispose_20_Record,1,0,TERMINAL(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Close,1,0,TERMINAL(7));

result = kSuccess;

FOOTERSINGLECASE(9)
}

enum opTrigger vpx_method_Terminal_2F_Open_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Terminal_2F_Open_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(13)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_Inputs,TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Project_20_Data,1,1,TERMINAL(3),ROOT(5));

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(5),ROOT(6),ROOT(7));

result = vpx_get(PARAMETERS,kVPXValue_Record,TERMINAL(3),ROOT(8),ROOT(9));

result = vpx_call_primitive(PARAMETERS,VPLP__28_in_29_,2,1,TERMINAL(4),TERMINAL(1),ROOT(10));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Create_20_Terminal,3,1,TERMINAL(7),TERMINAL(9),TERMINAL(10),ROOT(11));

result = vpx_set(PARAMETERS,kVPXValue_Record,TERMINAL(1),TERMINAL(11),ROOT(12));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Update_20_Record,1,0,TERMINAL(12));

result = kSuccess;

FOOTERSINGLECASE(13)
}

enum opTrigger vpx_method_Terminal_2F_Open(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_context_super_method(PARAMETERS,kVPXMethod_Open,2,0,TERMINAL(0),TERMINAL(1));

result = vpx_method_Terminal_2F_Open_case_1_local_3(PARAMETERS,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_Terminal_2F_Update_20_Record_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Terminal_2F_Update_20_Record_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
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

enum opTrigger vpx_method_Terminal_2F_Update_20_Record_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Terminal_2F_Update_20_Record_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Record,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Terminal_2F_Update_20_Record_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Terminal_2F_Update_20_Record_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Terminal_2F_Update_20_Record_case_1_local_6_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Terminal_2F_Update_20_Record_case_1_local_6_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Terminal_2F_Update_20_Record_case_1_local_8_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Terminal_2F_Update_20_Record_case_1_local_8_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"0",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Terminal_2F_Update_20_Record_case_1_local_8_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Terminal_2F_Update_20_Record_case_1_local_8_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP__28_in_29_,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Terminal_2F_Update_20_Record_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_Terminal_2F_Update_20_Record_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Terminal_2F_Update_20_Record_case_1_local_8_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_Terminal_2F_Update_20_Record_case_1_local_8_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_Terminal_2F_Update_20_Record_case_1_local_9_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Terminal_2F_Update_20_Record_case_1_local_9_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
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

enum opTrigger vpx_method_Terminal_2F_Update_20_Record_case_1_local_9_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Terminal_2F_Update_20_Record_case_1_local_9_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Record,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_Terminal_2F_Update_20_Record_case_1_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Terminal_2F_Update_20_Record_case_1_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Terminal_2F_Update_20_Record_case_1_local_9_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Terminal_2F_Update_20_Record_case_1_local_9_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Terminal_2F_Update_20_Record_case_1_local_10_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Terminal_2F_Update_20_Record_case_1_local_10_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
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

enum opTrigger vpx_method_Terminal_2F_Update_20_Record_case_1_local_10_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Terminal_2F_Update_20_Record_case_1_local_10_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_Outputs,TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP__28_in_29_,2,1,TERMINAL(4),TERMINAL(1),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTER(6)
}

enum opTrigger vpx_method_Terminal_2F_Update_20_Record_case_1_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Terminal_2F_Update_20_Record_case_1_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Terminal_2F_Update_20_Record_case_1_local_10_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Terminal_2F_Update_20_Record_case_1_local_10_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Terminal_2F_Update_20_Record_case_1_local_11_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Terminal_2F_Update_20_Record_case_1_local_11_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
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

enum opTrigger vpx_method_Terminal_2F_Update_20_Record_case_1_local_11_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Terminal_2F_Update_20_Record_case_1_local_11_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(11)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_Owner,TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(4),ROOT(5),ROOT(6));

result = vpx_get(PARAMETERS,kVPXValue_List,TERMINAL(6),ROOT(7),ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP__28_in_29_,2,1,TERMINAL(8),TERMINAL(5),ROOT(9));

result = vpx_call_primitive(PARAMETERS,VPLP_minus_2D_one,1,1,TERMINAL(9),ROOT(10));

result = kSuccess;

OUTPUT(0,TERMINAL(10))
FOOTER(11)
}

enum opTrigger vpx_method_Terminal_2F_Update_20_Record_case_1_local_11(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Terminal_2F_Update_20_Record_case_1_local_11(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Terminal_2F_Update_20_Record_case_1_local_11_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Terminal_2F_Update_20_Record_case_1_local_11_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Terminal_2F_Update_20_Record(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(21)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Loop_20_Root,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_Root,TERMINAL(1),ROOT(3),ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_Type,TERMINAL(3),ROOT(5),ROOT(6));

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(5),ROOT(7),ROOT(8));

result = vpx_method_Terminal_2F_Update_20_Record_case_1_local_6(PARAMETERS,TERMINAL(2),ROOT(9));

result = vpx_get(PARAMETERS,kVPXValue_Outputs,TERMINAL(8),ROOT(10),ROOT(11));

result = vpx_method_Terminal_2F_Update_20_Record_case_1_local_8(PARAMETERS,TERMINAL(11),TERMINAL(2),ROOT(12));

result = vpx_method_Terminal_2F_Update_20_Record_case_1_local_9(PARAMETERS,TERMINAL(4),ROOT(13));

result = vpx_method_Terminal_2F_Update_20_Record_case_1_local_10(PARAMETERS,TERMINAL(4),ROOT(14));

result = vpx_method_Terminal_2F_Update_20_Record_case_1_local_11(PARAMETERS,TERMINAL(4),ROOT(15));

result = vpx_get(PARAMETERS,kVPXValue_Record,TERMINAL(7),ROOT(16),ROOT(17));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Project_20_Data,1,1,TERMINAL(16),ROOT(18));

result = vpx_get(PARAMETERS,kVPXValue_Environment,TERMINAL(18),ROOT(19),ROOT(20));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Terminal,8,0,TERMINAL(20),TERMINAL(17),TERMINAL(6),TERMINAL(13),TERMINAL(14),TERMINAL(15),TERMINAL(9),TERMINAL(12));

result = kSuccess;

FOOTERSINGLECASE(21)
}

enum opTrigger vpx_method_Terminal_2F_Parse_20_CPX_20_Buffer_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2);
enum opTrigger vpx_method_Terminal_2F_Parse_20_CPX_20_Buffer_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2)
{
HEADER(10)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_constant(PARAMETERS,"8",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_text,3,3,TERMINAL(3),TERMINAL(2),TERMINAL(4),ROOT(5),ROOT(6),ROOT(7));

result = vpx_match(PARAMETERS,"end term",TERMINAL(7));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_detach_2D_l,1,2,TERMINAL(1),ROOT(8),ROOT(9));

result = kSuccess;

OUTPUT(0,TERMINAL(8))
OUTPUT(1,TERMINAL(9))
OUTPUT(2,TERMINAL(6))
FOOTER(10)
}

enum opTrigger vpx_method_Terminal_2F_Parse_20_CPX_20_Buffer_case_2_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_Terminal_2F_Parse_20_CPX_20_Buffer_case_2_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
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

enum opTrigger vpx_method_Terminal_2F_Parse_20_CPX_20_Buffer_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2);
enum opTrigger vpx_method_Terminal_2F_Parse_20_CPX_20_Buffer_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2)
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
result = vpx_method_Terminal_2F_Parse_20_CPX_20_Buffer_case_2_local_8(PARAMETERS,TERMINAL(5),LOOP(0),TERMINAL(8),ROOT(11));
REPEATFINISH

result = kSuccess;

OUTPUT(0,TERMINAL(0))
OUTPUT(1,TERMINAL(1))
OUTPUT(2,TERMINAL(11))
FOOTER(12)
}

enum opTrigger vpx_method_Terminal_2F_Parse_20_CPX_20_Buffer_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2);
enum opTrigger vpx_method_Terminal_2F_Parse_20_CPX_20_Buffer_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2)
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

enum opTrigger vpx_method_Terminal_2F_Parse_20_CPX_20_Buffer(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Terminal_2F_Parse_20_CPX_20_Buffer_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0,root1,root2))
if(vpx_method_Terminal_2F_Parse_20_CPX_20_Buffer_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0,root1,root2))
vpx_method_Terminal_2F_Parse_20_CPX_20_Buffer_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0,root1,root2);
return outcome;
}

enum opTrigger vpx_method_Terminal_2F_Buffer_20_Initialization_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Terminal_2F_Buffer_20_Initialization_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"1",TERMINAL(1));
TERMINATEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_set(PARAMETERS,kVPXValue_Inject,TERMINAL(3),TERMINAL(2),ROOT(4));

result = vpx_constant(PARAMETERS,"NULL",ROOT(5));

result = vpx_set(PARAMETERS,kVPXValue_Text,TERMINAL(4),TERMINAL(5),ROOT(6));

result = kSuccess;

FOOTERSINGLECASE(7)
}

enum opTrigger vpx_method_Terminal_2F_Buffer_20_Initialization_case_1_local_8_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Terminal_2F_Buffer_20_Initialization_case_1_local_8_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"0",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"Normal",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Terminal_2F_Buffer_20_Initialization_case_1_local_8_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Terminal_2F_Buffer_20_Initialization_case_1_local_8_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"1",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"List",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Terminal_2F_Buffer_20_Initialization_case_1_local_8_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Terminal_2F_Buffer_20_Initialization_case_1_local_8_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"2",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"Loop",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Terminal_2F_Buffer_20_Initialization_case_1_local_8_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Terminal_2F_Buffer_20_Initialization_case_1_local_8_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"unknown",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_Terminal_2F_Buffer_20_Initialization_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_Terminal_2F_Buffer_20_Initialization_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Terminal_2F_Buffer_20_Initialization_case_1_local_8_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_Terminal_2F_Buffer_20_Initialization_case_1_local_8_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_Terminal_2F_Buffer_20_Initialization_case_1_local_8_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_Terminal_2F_Buffer_20_Initialization_case_1_local_8_case_4(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_Terminal_2F_Buffer_20_Initialization_case_1_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Terminal_2F_Buffer_20_Initialization_case_1_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(8)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Type,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_match(PARAMETERS,"unknown",TERMINAL(2));
TERMINATEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(1),ROOT(3),ROOT(4));

result = vpx_persistent(PARAMETERS,kVPXValue_Problem_20_Operations,0,1,ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP__28_in_29_,2,1,TERMINAL(5),TERMINAL(4),ROOT(6));

result = vpx_match(PARAMETERS,"0",TERMINAL(6));
TERMINATEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_attach_2D_r,2,1,TERMINAL(5),TERMINAL(4),ROOT(7));

result = vpx_persistent(PARAMETERS,kVPXValue_Problem_20_Operations,1,0,TERMINAL(7));

result = kSuccess;

FOOTERSINGLECASE(8)
}

enum opTrigger vpx_method_Terminal_2F_Buffer_20_Initialization(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(14)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"2",ROOT(3));

result = vpx_constant(PARAMETERS,"1",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP__2B2B_,2,1,TERMINAL(1),TERMINAL(3),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_integer,3,3,TERMINAL(2),TERMINAL(5),TERMINAL(4),ROOT(6),ROOT(7),ROOT(8));

result = vpx_method_Terminal_2F_Buffer_20_Initialization_case_1_local_6(PARAMETERS,TERMINAL(0),TERMINAL(8));

result = vpx_call_primitive(PARAMETERS,VPLP_get_2D_integer,3,3,TERMINAL(6),TERMINAL(7),TERMINAL(4),ROOT(9),ROOT(10),ROOT(11));

result = vpx_method_Terminal_2F_Buffer_20_Initialization_case_1_local_8(PARAMETERS,TERMINAL(11),ROOT(12));

result = vpx_set(PARAMETERS,kVPXValue_Type,TERMINAL(0),TERMINAL(12),ROOT(13));

result = vpx_method_Terminal_2F_Buffer_20_Initialization_case_1_local_10(PARAMETERS,TERMINAL(13));

result = kSuccess;

FOOTERSINGLECASE(14)
}

enum opTrigger vpx_method_Terminal_2F_Dispose_20_Record_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_Terminal_2F_Dispose_20_Record_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
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

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Destroy_20_Terminal,2,0,TERMINAL(3),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_Terminal_2F_Dispose_20_Record(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Record,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Project_20_Data,1,1,TERMINAL(0),ROOT(3));

result = vpx_constant(PARAMETERS,"NULL",ROOT(4));

result = vpx_method_Terminal_2F_Dispose_20_Record_case_1_local_5(PARAMETERS,TERMINAL(3),TERMINAL(2));

result = vpx_set(PARAMETERS,kVPXValue_Record,TERMINAL(1),TERMINAL(4),ROOT(5));

result = kSuccess;

FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_Terminal_2F_Can_20_Delete_3F__case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Terminal_2F_Can_20_Delete_3F__case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Type,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_match(PARAMETERS,"get",TERMINAL(2));
TERMINATEONSUCCESS

result = vpx_match(PARAMETERS,"set",TERMINAL(2));
TERMINATEONSUCCESS

result = vpx_match(PARAMETERS,"extget",TERMINAL(2));
TERMINATEONSUCCESS

result = vpx_match(PARAMETERS,"extset",TERMINAL(2));
TERMINATEONSUCCESS

result = vpx_match(PARAMETERS,"instance",TERMINAL(2));
TERMINATEONSUCCESS

result = kSuccess;
FAILONSUCCESS

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_Terminal_2F_Can_20_Delete_3F__case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Terminal_2F_Can_20_Delete_3F__case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(2));
TERMINATEONFAILURE

result = vpx_method_Terminal_2F_Can_20_Delete_3F__case_1_local_4(PARAMETERS,TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Inject,TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP__3D_,2,0,TERMINAL(4),TERMINAL(0));
FAILONFAILURE

result = kSuccess;

FOOTER(5)
}

enum opTrigger vpx_method_Terminal_2F_Can_20_Delete_3F__case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_Terminal_2F_Can_20_Delete_3F__case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_call_context_super_method(PARAMETERS,kVPXMethod_Can_20_Delete_3F_,1,0,TERMINAL(0));
FAILONFAILURE

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_Terminal_2F_Can_20_Delete_3F_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_Terminal_2F_Can_20_Delete_3F__case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_Terminal_2F_Can_20_Delete_3F__case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

/* Stop Universals */






Nat4	loadClasses_MyInputOutputs(V_Environment environment);
Nat4	loadClasses_MyInputOutputs(V_Environment environment)
{
	V_Class result = NULL;

	result = class_new("Input-Output",environment);
	if(result == NULL) return kERROR;
	VPLC_Input_2D_Output_class_load(result,environment);
	result = class_new("Root",environment);
	if(result == NULL) return kERROR;
	VPLC_Root_class_load(result,environment);
	result = class_new("Terminal",environment);
	if(result == NULL) return kERROR;
	VPLC_Terminal_class_load(result,environment);
	return kNOERROR;

}

Nat4	loadUniversals_MyInputOutputs(V_Environment environment);
Nat4	loadUniversals_MyInputOutputs(V_Environment environment)
{
	V_Method result = NULL;

	result = method_new("Input-Output/Clone",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Input_2D_Output_2F_Clone,NULL);

	result = method_new("Input-Output/Close",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Input_2D_Output_2F_Close,NULL);

	result = method_new("Input-Output/Open",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Input_2D_Output_2F_Open,NULL);

	result = method_new("Input-Output/Get Project Data",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Input_2D_Output_2F_Get_20_Project_20_Data,NULL);

	result = method_new("Input-Output/Get Location",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Input_2D_Output_2F_Get_20_Location,NULL);

	result = method_new("Input-Output/Delete",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Input_2D_Output_2F_Delete,NULL);

	result = method_new("Input-Output/Remove Self",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Input_2D_Output_2F_Remove_20_Self,NULL);

	result = method_new("Input-Output/Can Delete?",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Input_2D_Output_2F_Can_20_Delete_3F_,NULL);

	result = method_new("Input-Output/Get Visual Frame",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Input_2D_Output_2F_Get_20_Visual_20_Frame,NULL);

	result = method_new("Root/Compute Shift Offset",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Root_2F_Compute_20_Shift_20_Offset,NULL);

	result = method_new("Root/Create Connection",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Root_2F_Create_20_Connection,NULL);

	result = method_new("Root/Find Terminals",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Root_2F_Find_20_Terminals,NULL);

	result = method_new("Root/Remove Just Self",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Root_2F_Remove_20_Just_20_Self,NULL);

	result = method_new("Root/Remove Self",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Root_2F_Remove_20_Self,NULL);

	result = method_new("Root/Open",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Root_2F_Open,NULL);

	result = method_new("Root/Update Record",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Root_2F_Update_20_Record,NULL);

	result = method_new("Root/Parse CPX Buffer",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Root_2F_Parse_20_CPX_20_Buffer,NULL);

	result = method_new("Root/Buffer Initialization",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Root_2F_Buffer_20_Initialization,NULL);

	result = method_new("Root/Dispose Record",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Root_2F_Dispose_20_Record,NULL);

	result = method_new("Root/Can Delete?",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Root_2F_Can_20_Delete_3F_,NULL);

	result = method_new("Terminal/C Code Export Connection",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Terminal_2F_C_20_Code_20_Export_20_Connection,NULL);

	result = method_new("Terminal/Clone",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Terminal_2F_Clone,NULL);

	result = method_new("Terminal/Compute Shift Offset",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Terminal_2F_Compute_20_Shift_20_Offset,NULL);

	result = method_new("Terminal/Create Connection",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Terminal_2F_Create_20_Connection,NULL);

	result = method_new("Terminal/Remove Just Self",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Terminal_2F_Remove_20_Just_20_Self,NULL);

	result = method_new("Terminal/Remove Self",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Terminal_2F_Remove_20_Self,NULL);

	result = method_new("Terminal/Open",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Terminal_2F_Open,NULL);

	result = method_new("Terminal/Update Record",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Terminal_2F_Update_20_Record,NULL);

	result = method_new("Terminal/Parse CPX Buffer",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Terminal_2F_Parse_20_CPX_20_Buffer,NULL);

	result = method_new("Terminal/Buffer Initialization",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Terminal_2F_Buffer_20_Initialization,NULL);

	result = method_new("Terminal/Dispose Record",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Terminal_2F_Dispose_20_Record,NULL);

	result = method_new("Terminal/Can Delete?",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_Terminal_2F_Can_20_Delete_3F_,NULL);

	return kNOERROR;

}



Nat4	loadPersistents_MyInputOutputs(V_Environment environment);
Nat4	loadPersistents_MyInputOutputs(V_Environment environment)
{
	V_Value tempPersistent = NULL;
	V_Dictionary dictionary = environment->persistentsTable;

	return kNOERROR;

}

Nat4	load_MyInputOutputs(V_Environment environment);
Nat4	load_MyInputOutputs(V_Environment environment)
{

	loadClasses_MyInputOutputs(environment);
	loadUniversals_MyInputOutputs(environment);
	loadPersistents_MyInputOutputs(environment);
	return kNOERROR;

}

