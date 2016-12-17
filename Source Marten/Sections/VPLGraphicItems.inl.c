/* A VPL Section File */
/*

VPLGraphicItems.inl.c
Copyright: 2004 Andescotia LLC

*/

#include "MartenInlineProject.h"




	Nat4 tempAttribute_VPLGraphic_20_Item_2F_Frame[] = {
0000000000, 0X0000008C, 0X00000028, 0X00000005, 0X00000014, 0X00000050, 0X0000004C, 0X00000048,
0X00000044, 0X0000003C, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000044,
0X00000004, 0X00000054, 0X0000006C, 0X00000084, 0X0000009C, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000,
0000000000, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000004,
0000000000, 0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_VPLGraphic_20_Item_2F_Selected[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_VPLGraphic_20_Item_2F_Highlight[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0X00010000
	};
	Nat4 tempAttribute_VPLGraphic_20_Item_2F_Visible_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0X00010000
	};


Nat4 VPLC_VPLGraphic_20_Item_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_VPLGraphic_20_Item_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 365 288 }{ 200 300 } */
	tempAttribute = attribute_add("Parent",tempClass,NULL,environment);
	tempAttribute = attribute_add("Item Record",tempClass,NULL,environment);
	tempAttribute = attribute_add("Name",tempClass,NULL,environment);
	tempAttribute = attribute_add("Frame",tempClass,tempAttribute_VPLGraphic_20_Item_2F_Frame,environment);
	tempAttribute = attribute_add("Selected",tempClass,tempAttribute_VPLGraphic_20_Item_2F_Selected,environment);
	tempAttribute = attribute_add("Highlight",tempClass,tempAttribute_VPLGraphic_20_Item_2F_Highlight,environment);
	tempAttribute = attribute_add("Visible?",tempClass,tempAttribute_VPLGraphic_20_Item_2F_Visible_3F_,environment);
	tempAttribute = attribute_add("Graphic",tempClass,NULL,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"VPLWindow Item");
	return kNOERROR;
}

/* Start Universals: { 539 432 }{ 281 380 } */
enum opTrigger vpx_method_VPLGraphic_20_Item_2F_Close_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_VPLGraphic_20_Item_2F_Close_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Graphic,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
TERMINATEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Close,1,0,TERMINAL(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_VPLGraphic_20_Item_2F_Close(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_call_context_super_method(PARAMETERS,kVPXMethod_Close,1,0,TERMINAL(0));

result = vpx_method_VPLGraphic_20_Item_2F_Close_case_1_local_3(PARAMETERS,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_VPLGraphic_20_Item_2F_Draw_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_VPLGraphic_20_Item_2F_Draw_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(0));
TERMINATEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Draw_20_CG,2,0,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_VPLGraphic_20_Item_2F_Draw_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_VPLGraphic_20_Item_2F_Draw_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Graphic,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_method_VPLGraphic_20_Item_2F_Draw_case_1_local_4(PARAMETERS,TERMINAL(3),TERMINAL(1));

result = kSuccess;

FOOTER(4)
}

enum opTrigger vpx_method_VPLGraphic_20_Item_2F_Draw_case_2_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_VPLGraphic_20_Item_2F_Draw_case_2_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(0));
TERMINATEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Draw,2,0,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_VPLGraphic_20_Item_2F_Draw_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_VPLGraphic_20_Item_2F_Draw_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Graphic,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_method_VPLGraphic_20_Item_2F_Draw_case_2_local_3(PARAMETERS,TERMINAL(3),TERMINAL(1));

result = kSuccess;

FOOTER(4)
}

enum opTrigger vpx_method_VPLGraphic_20_Item_2F_Draw(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_VPLGraphic_20_Item_2F_Draw_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_VPLGraphic_20_Item_2F_Draw_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_VPLGraphic_20_Item_2F_Open_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_VPLGraphic_20_Item_2F_Open_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Graphic,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
TERMINATEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open,2,0,TERMINAL(2),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_VPLGraphic_20_Item_2F_Open(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_context_super_method(PARAMETERS,kVPXMethod_Open,2,0,TERMINAL(0),TERMINAL(1));

result = vpx_method_VPLGraphic_20_Item_2F_Open_case_1_local_3(PARAMETERS,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_VPLGraphic_20_Item_2F_Process_20_Click_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_VPLGraphic_20_Item_2F_Process_20_Click_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Target_20_Self,1,0,TERMINAL(0));

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
FAILONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Process_20_Click,2,0,TERMINAL(3),TERMINAL(1));
FAILONFAILURE

result = kSuccess;

FOOTER(4)
}

enum opTrigger vpx_method_VPLGraphic_20_Item_2F_Process_20_Click_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_VPLGraphic_20_Item_2F_Process_20_Click_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;
FAILONSUCCESS

FOOTER(2)
}

enum opTrigger vpx_method_VPLGraphic_20_Item_2F_Process_20_Click(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_VPLGraphic_20_Item_2F_Process_20_Click_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_VPLGraphic_20_Item_2F_Process_20_Click_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_VPLGraphic_20_Item_2F_Set_20_Value_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_VPLGraphic_20_Item_2F_Set_20_Value_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(0));
TERMINATEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Value,2,0,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_VPLGraphic_20_Item_2F_Set_20_Value(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Graphic,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_method_VPLGraphic_20_Item_2F_Set_20_Value_case_1_local_3(PARAMETERS,TERMINAL(3),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_VPLGraphic_20_Item_2F_Draw_20_CG_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_VPLGraphic_20_Item_2F_Draw_20_CG_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(0));
TERMINATEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Draw_20_CG,2,0,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_VPLGraphic_20_Item_2F_Draw_20_CG_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_VPLGraphic_20_Item_2F_Draw_20_CG_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Graphic,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_method_VPLGraphic_20_Item_2F_Draw_20_CG_case_1_local_4(PARAMETERS,TERMINAL(4),TERMINAL(2));

result = kSuccess;

FOOTER(5)
}

enum opTrigger vpx_method_VPLGraphic_20_Item_2F_Draw_20_CG_case_2_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_VPLGraphic_20_Item_2F_Draw_20_CG_case_2_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(0));
TERMINATEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Draw,2,0,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_VPLGraphic_20_Item_2F_Draw_20_CG_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_VPLGraphic_20_Item_2F_Draw_20_CG_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Graphic,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_method_VPLGraphic_20_Item_2F_Draw_20_CG_case_2_local_3(PARAMETERS,TERMINAL(4),TERMINAL(2));

result = kSuccess;

FOOTER(5)
}

enum opTrigger vpx_method_VPLGraphic_20_Item_2F_Draw_20_CG(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_VPLGraphic_20_Item_2F_Draw_20_CG_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2))
vpx_method_VPLGraphic_20_Item_2F_Draw_20_CG_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2);
return outcome;
}

enum opTrigger vpx_method_VPLGraphic_20_Item_2F_Set_20_Location(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_context_super_method(PARAMETERS,kVPXMethod_Set_20_Location,2,0,TERMINAL(0),TERMINAL(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Reset_20_Cache,1,0,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_VPLGraphic_20_Item_2F_Reset_20_Cache_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_VPLGraphic_20_Item_2F_Reset_20_Cache_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Graphic,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
TERMINATEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Close,1,0,TERMINAL(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_VPLGraphic_20_Item_2F_Reset_20_Cache_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_VPLGraphic_20_Item_2F_Reset_20_Cache_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Graphic,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
TERMINATEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open,2,0,TERMINAL(2),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_VPLGraphic_20_Item_2F_Reset_20_Cache(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_method_VPLGraphic_20_Item_2F_Reset_20_Cache_case_1_local_2(PARAMETERS,TERMINAL(0));

result = vpx_method_VPLGraphic_20_Item_2F_Reset_20_Cache_case_1_local_3(PARAMETERS,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_VPLGraphic_20_Item_2F_Get_20_QDFrame(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Frame,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_VPLGraphic_20_Item_2F_Set_20_Selected_20_Colors(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Selected_20_Colors,1,0,TERMINAL(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_VPLGraphic_20_Item_2F_Get_20_Color_20_Names_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_VPLGraphic_20_Item_2F_Get_20_Color_20_Names_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"Operation Item",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"FALSE",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_VPLGraphic_20_Item_2F_Get_20_Color_20_Names_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_VPLGraphic_20_Item_2F_Get_20_Color_20_Names_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_match(PARAMETERS,"Debug Item",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"TRUE",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_VPLGraphic_20_Item_2F_Get_20_Color_20_Names_case_1_local_4_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_VPLGraphic_20_Item_2F_Get_20_Color_20_Names_case_1_local_4_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADERWITHNONE(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;
FAILONSUCCESS

OUTPUT(0,NONE)
FOOTERWITHNONE(1)
}

enum opTrigger vpx_method_VPLGraphic_20_Item_2F_Get_20_Color_20_Names_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_VPLGraphic_20_Item_2F_Get_20_Color_20_Names_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_VPLGraphic_20_Item_2F_Get_20_Color_20_Names_case_1_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
if(vpx_method_VPLGraphic_20_Item_2F_Get_20_Color_20_Names_case_1_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_VPLGraphic_20_Item_2F_Get_20_Color_20_Names_case_1_local_4_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_VPLGraphic_20_Item_2F_Get_20_Color_20_Names_case_1_local_8_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_VPLGraphic_20_Item_2F_Get_20_Color_20_Names_case_1_local_8_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Current_3F_,TERMINAL(1),ROOT(3),ROOT(4));

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(4));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"operation current fill",ROOT(5));

result = vpx_constant(PARAMETERS,"operation current stroke",ROOT(6));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
OUTPUT(1,TERMINAL(6))
FOOTER(7)
}

enum opTrigger vpx_method_VPLGraphic_20_Item_2F_Get_20_Color_20_Names_case_1_local_8_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_VPLGraphic_20_Item_2F_Get_20_Color_20_Names_case_1_local_8_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_match(PARAMETERS,"Debug",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"operation debug fill",ROOT(3));

result = vpx_constant(PARAMETERS,"operation debug stroke",ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
OUTPUT(1,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_VPLGraphic_20_Item_2F_Get_20_Color_20_Names_case_1_local_8_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_VPLGraphic_20_Item_2F_Get_20_Color_20_Names_case_1_local_8_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_match(PARAMETERS,"Skip",TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"operation skip fill",ROOT(3));

result = vpx_constant(PARAMETERS,"operation skip stroke",ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
OUTPUT(1,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_VPLGraphic_20_Item_2F_Get_20_Color_20_Names_case_1_local_8_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_VPLGraphic_20_Item_2F_Get_20_Color_20_Names_case_1_local_8_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1)
{
HEADERWITHNONE(3)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = kSuccess;
FAILONSUCCESS

OUTPUT(0,NONE)
OUTPUT(1,NONE)
FOOTERWITHNONE(3)
}

enum opTrigger vpx_method_VPLGraphic_20_Item_2F_Get_20_Color_20_Names_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_VPLGraphic_20_Item_2F_Get_20_Color_20_Names_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_VPLGraphic_20_Item_2F_Get_20_Color_20_Names_case_1_local_8_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0,root1))
if(vpx_method_VPLGraphic_20_Item_2F_Get_20_Color_20_Names_case_1_local_8_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0,root1))
if(vpx_method_VPLGraphic_20_Item_2F_Get_20_Color_20_Names_case_1_local_8_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0,root1))
vpx_method_VPLGraphic_20_Item_2F_Get_20_Color_20_Names_case_1_local_8_case_4(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0,root1);
return outcome;
}

enum opTrigger vpx_method_VPLGraphic_20_Item_2F_Get_20_Color_20_Names_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_VPLGraphic_20_Item_2F_Get_20_Color_20_Names_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(12)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(2),ROOT(3));

result = vpx_method_VPLGraphic_20_Item_2F_Get_20_Color_20_Names_case_1_local_4(PARAMETERS,TERMINAL(3),ROOT(4));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Data,TERMINAL(2),ROOT(5),ROOT(6));

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(6),ROOT(7),ROOT(8));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Mode,1,1,TERMINAL(8),ROOT(9));

result = vpx_method_VPLGraphic_20_Item_2F_Get_20_Color_20_Names_case_1_local_8(PARAMETERS,TERMINAL(9),TERMINAL(2),TERMINAL(4),ROOT(10),ROOT(11));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(10))
OUTPUT(1,TERMINAL(11))
FOOTER(12)
}

enum opTrigger vpx_method_VPLGraphic_20_Item_2F_Get_20_Color_20_Names_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_VPLGraphic_20_Item_2F_Get_20_Color_20_Names_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"operation fill",ROOT(1));

result = vpx_constant(PARAMETERS,"operation stroke",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
OUTPUT(1,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_VPLGraphic_20_Item_2F_Get_20_Color_20_Names(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_VPLGraphic_20_Item_2F_Get_20_Color_20_Names_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1))
vpx_method_VPLGraphic_20_Item_2F_Get_20_Color_20_Names_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1);
return outcome;
}

enum opTrigger vpx_method_VPLGraphic_20_Item_2F_Get_20_Erase_20_Color_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_VPLGraphic_20_Item_2F_Get_20_Erase_20_Color_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( 1.0 1.0 1.0 1.0 )",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_VPLGraphic_20_Item_2F_Get_20_Erase_20_Color_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_VPLGraphic_20_Item_2F_Get_20_Erase_20_Color_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(12)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_type,1,1,TERMINAL(2),ROOT(3));

result = vpx_match(PARAMETERS,"Operation Item",TERMINAL(3));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Data,TERMINAL(2),ROOT(4),ROOT(5));

result = vpx_get(PARAMETERS,kVPXValue_Helper,TERMINAL(5),ROOT(6),ROOT(7));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Mode,1,1,TERMINAL(7),ROOT(8));

result = vpx_match(PARAMETERS,"Skip",TERMINAL(8));
NEXTCASEONFAILURE

result = vpx_extconstant(PARAMETERS,kThemeBrushAlternatePrimaryHighlightColor,ROOT(9));

result = vpx_constant(PARAMETERS,"1.0",ROOT(10));

result = vpx_method_Get_20_Theme_20_Brush_20_RGBA(PARAMETERS,TERMINAL(9),TERMINAL(10),ROOT(11));

result = kSuccess;

OUTPUT(0,TERMINAL(11))
FOOTER(12)
}

enum opTrigger vpx_method_VPLGraphic_20_Item_2F_Get_20_Erase_20_Color(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_VPLGraphic_20_Item_2F_Get_20_Erase_20_Color_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_VPLGraphic_20_Item_2F_Get_20_Erase_20_Color_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

/* Stop Universals */






Nat4	loadClasses_VPLGraphicItems(V_Environment environment);
Nat4	loadClasses_VPLGraphicItems(V_Environment environment)
{
	V_Class result = NULL;

	result = class_new("VPLGraphic Item",environment);
	if(result == NULL) return kERROR;
	VPLC_VPLGraphic_20_Item_class_load(result,environment);
	return kNOERROR;

}

Nat4	loadUniversals_VPLGraphicItems(V_Environment environment);
Nat4	loadUniversals_VPLGraphicItems(V_Environment environment)
{
	V_Method result = NULL;

	result = method_new("VPLGraphic Item/Close",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLGraphic_20_Item_2F_Close,NULL);

	result = method_new("VPLGraphic Item/Draw",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLGraphic_20_Item_2F_Draw,NULL);

	result = method_new("VPLGraphic Item/Open",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLGraphic_20_Item_2F_Open,NULL);

	result = method_new("VPLGraphic Item/Process Click",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLGraphic_20_Item_2F_Process_20_Click,NULL);

	result = method_new("VPLGraphic Item/Set Value",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLGraphic_20_Item_2F_Set_20_Value,NULL);

	result = method_new("VPLGraphic Item/Draw CG",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLGraphic_20_Item_2F_Draw_20_CG,NULL);

	result = method_new("VPLGraphic Item/Set Location",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLGraphic_20_Item_2F_Set_20_Location,NULL);

	result = method_new("VPLGraphic Item/Reset Cache",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLGraphic_20_Item_2F_Reset_20_Cache,NULL);

	result = method_new("VPLGraphic Item/Get QDFrame",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLGraphic_20_Item_2F_Get_20_QDFrame,NULL);

	result = method_new("VPLGraphic Item/Set Selected Colors",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLGraphic_20_Item_2F_Set_20_Selected_20_Colors,NULL);

	result = method_new("VPLGraphic Item/Get Color Names",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLGraphic_20_Item_2F_Get_20_Color_20_Names,NULL);

	result = method_new("VPLGraphic Item/Get Erase Color",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLGraphic_20_Item_2F_Get_20_Erase_20_Color,NULL);

	return kNOERROR;

}



Nat4	loadPersistents_VPLGraphicItems(V_Environment environment);
Nat4	loadPersistents_VPLGraphicItems(V_Environment environment)
{
	V_Value tempPersistent = NULL;
	V_Dictionary dictionary = environment->persistentsTable;

	return kNOERROR;

}

Nat4	load_VPLGraphicItems(V_Environment environment);
Nat4	load_VPLGraphicItems(V_Environment environment)
{

	loadClasses_VPLGraphicItems(environment);
	loadUniversals_VPLGraphicItems(environment);
	loadPersistents_VPLGraphicItems(environment);
	return kNOERROR;

}

