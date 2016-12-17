/* A VPL Section File */
/*

VPLViews.inl.c
Copyright: 2004 Andescotia LLC

*/

#include "MartenInlineProject.h"




	Nat4 tempAttribute_VPLView_2F_Frame[] = {
0000000000, 0X0000008C, 0X00000028, 0X00000005, 0X00000014, 0X00000050, 0X0000004C, 0X00000048,
0X00000044, 0X0000003C, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000044,
0X00000004, 0X00000054, 0X0000006C, 0X00000084, 0X0000009C, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000,
0000000000, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000004,
0000000000, 0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_VPLView_2F_Selected[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_VPLView_2F_Highlight[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0X00010000
	};
	Nat4 tempAttribute_VPLView_2F_Visible_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0X00010000
	};
	Nat4 tempAttribute_VPLView_2F_Content[] = {
0000000000, 0X0000001C, 0X00000014, 0000000000, 0X00000014, 0X00000007, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_VPLView_2F_Window_20_Origin[] = {
0000000000, 0X00000054, 0X00000020, 0X00000003, 0X00000014, 0X00000040, 0X0000003C, 0X00000034,
0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000003C, 0X00000002, 0X00000044,
0X0000005C, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000004,
0000000000, 0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_VPLView_2F_Viewport_20_Origin[] = {
0000000000, 0X00000054, 0X00000020, 0X00000003, 0X00000014, 0X00000040, 0X0000003C, 0X00000034,
0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000003C, 0X00000002, 0X00000044,
0X0000005C, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000004,
0000000000, 0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_VPLView_2F_Canvas_20_Limits[] = {
0000000000, 0X00000054, 0X00000020, 0X00000003, 0X00000014, 0X00000040, 0X0000003C, 0X00000034,
0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X0000003C, 0X00000002, 0X00000044,
0X0000005C, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000004,
0000000000, 0000000000, 0000000000, 0000000000, 0000000000
	};


Nat4 VPLC_VPLView_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_VPLView_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 349 332 }{ 262 335 } */
	tempAttribute = attribute_add("Parent",tempClass,NULL,environment);
	tempAttribute = attribute_add("Item Record",tempClass,NULL,environment);
	tempAttribute = attribute_add("Name",tempClass,NULL,environment);
	tempAttribute = attribute_add("Frame",tempClass,tempAttribute_VPLView_2F_Frame,environment);
	tempAttribute = attribute_add("Selected",tempClass,tempAttribute_VPLView_2F_Selected,environment);
	tempAttribute = attribute_add("Highlight",tempClass,tempAttribute_VPLView_2F_Highlight,environment);
	tempAttribute = attribute_add("Visible?",tempClass,tempAttribute_VPLView_2F_Visible_3F_,environment);
	tempAttribute = attribute_add("Content",tempClass,tempAttribute_VPLView_2F_Content,environment);
	tempAttribute = attribute_add("Window Origin",tempClass,tempAttribute_VPLView_2F_Window_20_Origin,environment);
	tempAttribute = attribute_add("Viewport Origin",tempClass,tempAttribute_VPLView_2F_Viewport_20_Origin,environment);
	tempAttribute = attribute_add("Select List",tempClass,NULL,environment);
	tempAttribute = attribute_add("Vertical Scroll Bar",tempClass,NULL,environment);
	tempAttribute = attribute_add("Horizontal Scroll Bar",tempClass,NULL,environment);
	tempAttribute = attribute_add("Canvas Limits",tempClass,tempAttribute_VPLView_2F_Canvas_20_Limits,environment);
/* Stop Attributes */

	class_superClass_to(tempClass,environment,"VPLWindow Item");
	return kNOERROR;
}

/* Start Universals: { 104 249 }{ 762 317 } */
enum opTrigger vpx_method_VPLView_2F_Old_20_Draw_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_VPLView_2F_Old_20_Draw_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Vertical_20_Scroll_20_Bar,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
TERMINATEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Draw,2,0,TERMINAL(3),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_VPLView_2F_Old_20_Draw(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Before_20_Drawing,1,0,TERMINAL(0));

result = vpx_get(PARAMETERS,kVPXValue_Content,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_reverse,1,1,TERMINAL(3),ROOT(4));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(4))) ){
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Draw,2,0,LIST(4),TERMINAL(1));
REPEATFINISH
} else {
}

result = vpx_call_data_method(PARAMETERS,kVPXMethod_After_20_Drawing,1,0,TERMINAL(0));

result = vpx_method_VPLView_2F_Old_20_Draw_case_1_local_7(PARAMETERS,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_VPLView_2F_Old_20_Move_20_Origin_20_V_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_VPLView_2F_Old_20_Move_20_Origin_20_V_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Viewport_20_Origin,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_method_Add_20_Point(PARAMETERS,TERMINAL(3),TERMINAL(1),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP__28_join_29_,2,1,TERMINAL(3),TERMINAL(4),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_VPLView_2F_Old_20_Move_20_Origin_20_V_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_VPLView_2F_Old_20_Move_20_Origin_20_V_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"0",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_iminus,2,1,TERMINAL(3),TERMINAL(1),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_new_2D_rgn,0,1,ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_list_2D_to_2D_Rect,1,1,TERMINAL(2),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP_scroll_2D_rect,4,0,TERMINAL(6),TERMINAL(3),TERMINAL(4),TERMINAL(5));

result = vpx_constant(PARAMETERS,"FALSE",ROOT(7));

result = kSuccess;

OUTPUT(0,TERMINAL(7))
OUTPUT(1,TERMINAL(5))
FOOTERSINGLECASE(8)
}

enum opTrigger vpx_method_VPLView_2F_Old_20_Move_20_Origin_20_V_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_VPLView_2F_Old_20_Move_20_Origin_20_V_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Viewport_20_Origin,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,2,TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_iplus,2,1,TERMINAL(4),TERMINAL(1),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(6),TERMINAL(5),ROOT(7));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Viewport_20_Origin,2,0,TERMINAL(2),TERMINAL(7));

result = kSuccess;

FOOTERSINGLECASE(8)
}

enum opTrigger vpx_method_VPLView_2F_Old_20_Move_20_Origin_20_V_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_VPLView_2F_Old_20_Move_20_Origin_20_V_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Viewport_20_Origin,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_method_Add_20_Point(PARAMETERS,TERMINAL(3),TERMINAL(1),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP__28_join_29_,2,1,TERMINAL(3),TERMINAL(4),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_VPLView_2F_Old_20_Move_20_Origin_20_V_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_VPLView_2F_Old_20_Move_20_Origin_20_V_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"0",TERMINAL(1));
NEXTCASEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_View_20_Size,1,1,TERMINAL(0),ROOT(2));

result = vpx_method_VPLView_2F_Old_20_Move_20_Origin_20_V_case_1_local_4(PARAMETERS,TERMINAL(0),TERMINAL(2),ROOT(3));

result = vpx_method_VPLView_2F_Old_20_Move_20_Origin_20_V_case_1_local_5(PARAMETERS,TERMINAL(0),TERMINAL(1),TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_method_VPLView_2F_Old_20_Move_20_Origin_20_V_case_1_local_6(PARAMETERS,TERMINAL(0),TERMINAL(1));

result = vpx_method_VPLView_2F_Old_20_Move_20_Origin_20_V_case_1_local_7(PARAMETERS,TERMINAL(0),TERMINAL(2),ROOT(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Window,1,1,TERMINAL(0),ROOT(7));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Refresh,1,0,TERMINAL(7));

result = kSuccess;

FOOTER(8)
}

enum opTrigger vpx_method_VPLView_2F_Old_20_Move_20_Origin_20_V_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_VPLView_2F_Old_20_Move_20_Origin_20_V_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_VPLView_2F_Old_20_Move_20_Origin_20_V(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_VPLView_2F_Old_20_Move_20_Origin_20_V_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_VPLView_2F_Old_20_Move_20_Origin_20_V_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_VPLView_2F_Old_20_Set_20_Canvas_20_Limits_case_1_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_VPLView_2F_Old_20_Set_20_Canvas_20_Limits_case_1_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(0));
TERMINATEONSUCCESS

result = vpx_constant(PARAMETERS,"0",ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_max,2,1,TERMINAL(1),TERMINAL(2),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Maximum,2,0,TERMINAL(0),TERMINAL(3));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_VPLView_2F_Old_20_Set_20_Canvas_20_Limits(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(15)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Canvas_20_Limits,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,2,TERMINAL(1),ROOT(3),ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_Frame,TERMINAL(2),ROOT(5),ROOT(6));

result = vpx_get(PARAMETERS,kVPXValue_Vertical_20_Scroll_20_Bar,TERMINAL(5),ROOT(7),ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,4,TERMINAL(6),ROOT(9),ROOT(10),ROOT(11),ROOT(12));

result = vpx_call_primitive(PARAMETERS,VPLP_iminus,2,1,TERMINAL(11),TERMINAL(9),ROOT(13));

result = vpx_call_primitive(PARAMETERS,VPLP_iminus,2,1,TERMINAL(3),TERMINAL(13),ROOT(14));

result = vpx_method_VPLView_2F_Old_20_Set_20_Canvas_20_Limits_case_1_local_9(PARAMETERS,TERMINAL(8),TERMINAL(14));

result = kSuccess;

FOOTERSINGLECASE(15)
}

enum opTrigger vpx_method_VPLView_2F_Adjust_20_Origin(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Window_20_Origin,2,0,TERMINAL(0),TERMINAL(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Content,1,1,TERMINAL(0),ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_Window_20_Origin,TERMINAL(0),ROOT(3),ROOT(4));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(2))) ){
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Adjust_20_Origin,2,0,LIST(2),TERMINAL(4));
REPEATFINISH
} else {
}

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_VPLView_2F_After_20_Drawing_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_VPLView_2F_After_20_Drawing_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
NEXTCASEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Up_20_Drawing,1,0,TERMINAL(2));

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_VPLView_2F_After_20_Drawing_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_VPLView_2F_After_20_Drawing_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_VPLView_2F_After_20_Drawing(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_VPLView_2F_After_20_Drawing_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_VPLView_2F_After_20_Drawing_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_VPLView_2F_Before_20_Drawing(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Up_20_Drawing,1,0,TERMINAL(0));

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_VPLView_2F_Close_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_VPLView_2F_Close_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Vertical_20_Scroll_20_Bar,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
TERMINATEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Close,1,0,TERMINAL(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_VPLView_2F_Close(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Content,TERMINAL(0),ROOT(1),ROOT(2));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(2))) ){
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Close,1,0,LIST(2));
REPEATFINISH
} else {
}

result = vpx_method_VPLView_2F_Close_case_1_local_4(PARAMETERS,TERMINAL(1));

result = vpx_constant(PARAMETERS,"NULL",ROOT(3));

result = vpx_set(PARAMETERS,kVPXValue_Parent,TERMINAL(1),TERMINAL(3),ROOT(4));

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_VPLView_2F_Find_20_Item_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_VPLView_2F_Find_20_Item_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Was_20_Hit,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(2));
NEXTCASEONFAILURE

result = kSuccess;
FINISHONSUCCESS

OUTPUT(0,TERMINAL(0))
FOOTER(3)
}

enum opTrigger vpx_method_VPLView_2F_Find_20_Item_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_VPLView_2F_Find_20_Item_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
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

enum opTrigger vpx_method_VPLView_2F_Find_20_Item_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_VPLView_2F_Find_20_Item_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_VPLView_2F_Find_20_Item_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_VPLView_2F_Find_20_Item_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_VPLView_2F_Find_20_Item(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Content,1,1,TERMINAL(0),ROOT(2));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(2))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_VPLView_2F_Find_20_Item_case_1_local_3(PARAMETERS,LIST(2),TERMINAL(1),ROOT(3));
REPEATFINISH
} else {
ROOTNULL(3,NULL)
}

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_VPLView_2F_Get_20_Content(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Content,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_VPLView_2F_Get_20_Location(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Frame,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,2,TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(3),TERMINAL(4),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_VPLView_2F_Get_20_Window_20_Origin(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Window_20_Origin,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_VPLView_2F_Hilite(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_context_super_method(PARAMETERS,kVPXMethod_Hilite,2,0,TERMINAL(0),TERMINAL(1));

result = vpx_get(PARAMETERS,kVPXValue_Content,TERMINAL(0),ROOT(2),ROOT(3));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(3))) ){
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Hilite,2,0,LIST(3),TERMINAL(1));
REPEATFINISH
} else {
}

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_VPLView_2F_Mouse_20_Down_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_VPLView_2F_Mouse_20_Down_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(0));
FAILONSUCCESS

result = vpx_get(PARAMETERS,kVPXValue_Frame,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_method_Point_20_In_20_Rect(PARAMETERS,TERMINAL(2),TERMINAL(4),ROOT(5));

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(5));
FAILONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Mouse_20_Down,2,0,TERMINAL(0),TERMINAL(1));
TERMINATEONFAILURE

result = kSuccess;

FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_VPLView_2F_Mouse_20_Down_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_VPLView_2F_Mouse_20_Down_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(9)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
TERMINATEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Local_20_Where,1,1,TERMINAL(1),ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Window_20_Origin,1,1,TERMINAL(3),ROOT(5));

result = vpx_method_Subtract_20_Point(PARAMETERS,TERMINAL(4),TERMINAL(5),ROOT(6));

result = vpx_get(PARAMETERS,kVPXValue_Vertical_20_Scroll_20_Bar,TERMINAL(2),ROOT(7),ROOT(8));

result = vpx_method_VPLView_2F_Mouse_20_Down_case_1_local_8(PARAMETERS,TERMINAL(8),TERMINAL(1),TERMINAL(6));
NEXTCASEONFAILURE

result = kSuccess;

FOOTER(9)
}

enum opTrigger vpx_method_VPLView_2F_Mouse_20_Down_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_VPLView_2F_Mouse_20_Down_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Local_20_Where,1,1,TERMINAL(1),ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_Window_20_Origin,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_method_Subtract_20_Point(PARAMETERS,TERMINAL(2),TERMINAL(4),ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Find_20_Item,2,1,TERMINAL(3),TERMINAL(5),ROOT(6));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(6));
NEXTCASEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Was_20_Content_20_Hit_3F_,3,1,TERMINAL(6),TERMINAL(5),TERMINAL(1),ROOT(7));

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(7));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Mouse_20_Down,2,0,TERMINAL(6),TERMINAL(1));
NEXTCASEONFAILURE

result = kSuccess;

FOOTER(8)
}

enum opTrigger vpx_method_VPLView_2F_Mouse_20_Down_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_VPLView_2F_Mouse_20_Down_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Process_20_Click,2,0,TERMINAL(0),TERMINAL(1));
FAILONFAILURE

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_VPLView_2F_Mouse_20_Down(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_VPLView_2F_Mouse_20_Down_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
if(vpx_method_VPLView_2F_Mouse_20_Down_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_VPLView_2F_Mouse_20_Down_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_VPLView_2F_Open_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_VPLView_2F_Open_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Vertical_20_Scroll_20_Bar,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
TERMINATEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open,2,0,TERMINAL(2),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_VPLView_2F_Open_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_VPLView_2F_Open_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
TERMINATEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Window_20_Origin,1,1,TERMINAL(1),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Window_20_Origin,2,0,TERMINAL(0),TERMINAL(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_VPLView_2F_Open(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_context_super_method(PARAMETERS,kVPXMethod_Open,2,0,TERMINAL(0),TERMINAL(1));

result = vpx_method_VPLView_2F_Open_case_1_local_3(PARAMETERS,TERMINAL(0));

result = vpx_method_VPLView_2F_Open_case_1_local_4(PARAMETERS,TERMINAL(0),TERMINAL(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Up_20_Drawing,1,0,TERMINAL(0));

result = vpx_get(PARAMETERS,kVPXValue_Content,TERMINAL(0),ROOT(2),ROOT(3));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(3))) ){
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open,2,0,LIST(3),TERMINAL(2));
REPEATFINISH
} else {
}

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_VPLView_2F_Resize_case_1_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_VPLView_2F_Resize_case_1_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Content,TERMINAL(0),ROOT(2),ROOT(3));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(3))) ){
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Resize,2,0,LIST(3),TERMINAL(1));
REPEATFINISH
} else {
}

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_VPLView_2F_Resize_case_1_local_11_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_VPLView_2F_Resize_case_1_local_11_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(12)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Canvas_20_Limits,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_match(PARAMETERS,"( 0 0 )",TERMINAL(3));
TERMINATEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,2,TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP__3E_,2,0,TERMINAL(1),TERMINAL(4));
NEXTCASEONSUCCESS

result = vpx_get(PARAMETERS,kVPXValue_Viewport_20_Origin,TERMINAL(0),ROOT(6),ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,2,TERMINAL(7),ROOT(8),ROOT(9));

result = vpx_call_primitive(PARAMETERS,VPLP__2D_,2,1,TERMINAL(4),TERMINAL(1),ROOT(10));

result = vpx_call_primitive(PARAMETERS,VPLP__2D2D_,2,1,TERMINAL(8),TERMINAL(10),ROOT(11));

result = vpx_call_primitive(PARAMETERS,VPLP__3E_,2,0,TERMINAL(8),TERMINAL(10));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Move_20_Origin_20_V,2,0,TERMINAL(0),TERMINAL(11));

result = kSuccess;

FOOTER(12)
}

enum opTrigger vpx_method_VPLView_2F_Resize_case_1_local_11_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_VPLView_2F_Resize_case_1_local_11_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Viewport_20_Origin,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,2,TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_match(PARAMETERS,"0",TERMINAL(4));
TERMINATEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP__2D_,1,1,TERMINAL(4),ROOT(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Move_20_Origin_20_V,2,0,TERMINAL(0),TERMINAL(6));

result = kSuccess;

FOOTER(7)
}

enum opTrigger vpx_method_VPLView_2F_Resize_case_1_local_11(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_VPLView_2F_Resize_case_1_local_11(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_VPLView_2F_Resize_case_1_local_11_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_VPLView_2F_Resize_case_1_local_11_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_VPLView_2F_Resize(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(14)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Frame,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,4,TERMINAL(3),ROOT(4),ROOT(5),ROOT(6),ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,2,TERMINAL(1),ROOT(8),ROOT(9));

result = vpx_call_primitive(PARAMETERS,VPLP_iplus,2,1,TERMINAL(7),TERMINAL(9),ROOT(10));

result = vpx_call_primitive(PARAMETERS,VPLP_iplus,2,1,TERMINAL(6),TERMINAL(8),ROOT(11));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,4,1,TERMINAL(4),TERMINAL(5),TERMINAL(11),TERMINAL(10),ROOT(12));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Frame,2,0,TERMINAL(0),TERMINAL(12));

result = vpx_method_VPLView_2F_Resize_case_1_local_9(PARAMETERS,TERMINAL(0),TERMINAL(1));

result = vpx_call_primitive(PARAMETERS,VPLP__2D2D_,2,1,TERMINAL(11),TERMINAL(4),ROOT(13));

result = vpx_method_VPLView_2F_Resize_case_1_local_11(PARAMETERS,TERMINAL(0),TERMINAL(13));

result = kSuccess;

FOOTERSINGLECASE(14)
}

enum opTrigger vpx_method_VPLView_2F_Scroll_20_V_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_VPLView_2F_Scroll_20_V_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Viewport_20_Origin,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,1,TERMINAL(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_iminus,2,1,TERMINAL(1),TERMINAL(4),ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Move_20_Origin_20_V,2,0,TERMINAL(2),TERMINAL(5));

result = kSuccess;

FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_VPLView_2F_Scroll_20_V(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Up_20_Drawing,1,0,TERMINAL(0));

result = vpx_method_VPLView_2F_Scroll_20_V_case_1_local_3(PARAMETERS,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_VPLView_2F_Select_20_Item_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_VPLView_2F_Select_20_Item_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP__28_in_29_,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_match(PARAMETERS,"0",TERMINAL(2));
NEXTCASEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_detach_2D_nth,2,2,TERMINAL(0),TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_constant(PARAMETERS,"FALSE",ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Selected,2,0,TERMINAL(1),TERMINAL(5));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(6)
}

enum opTrigger vpx_method_VPLView_2F_Select_20_Item_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_VPLView_2F_Select_20_Item_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_attach_2D_r,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_constant(PARAMETERS,"TRUE",ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Selected,2,0,TERMINAL(1),TERMINAL(3));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(4)
}

enum opTrigger vpx_method_VPLView_2F_Select_20_Item_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_VPLView_2F_Select_20_Item_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_VPLView_2F_Select_20_Item_case_1_local_6_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_VPLView_2F_Select_20_Item_case_1_local_6_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_VPLView_2F_Select_20_Item_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_VPLView_2F_Select_20_Item_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Selected,TERMINAL(1),ROOT(2),ROOT(3));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
NEXTCASEONSUCCESS

result = vpx_get(PARAMETERS,kVPXValue_Select_20_List,TERMINAL(0),ROOT(4),ROOT(5));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(5));
NEXTCASEONSUCCESS

result = vpx_method_VPLView_2F_Select_20_Item_case_1_local_6(PARAMETERS,TERMINAL(5),TERMINAL(2),ROOT(6));

result = vpx_set(PARAMETERS,kVPXValue_Select_20_List,TERMINAL(4),TERMINAL(6),ROOT(7));

result = kSuccess;

FOOTER(8)
}

enum opTrigger vpx_method_VPLView_2F_Select_20_Item_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_VPLView_2F_Select_20_Item_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_VPLView_2F_Select_20_Item(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_VPLView_2F_Select_20_Item_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_VPLView_2F_Select_20_Item_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_VPLView_2F_Set_20_Content_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_VPLView_2F_Set_20_Content_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
TERMINATEONSUCCESS

if( (repeatLimit = vpx_multiplex(1,TERMINAL(0))) ){
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Close,1,0,LIST(0));
REPEATFINISH
} else {
}

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_VPLView_2F_Set_20_Content_case_1_local_6_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_VPLView_2F_Set_20_Content_case_1_local_6_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Window,1,1,TERMINAL(0),ROOT(1));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
NEXTCASEONSUCCESS

result = vpx_method_Get_20_Port(PARAMETERS,ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Port,1,0,TERMINAL(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Up_20_Drawing,1,0,TERMINAL(0));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_VPLView_2F_Set_20_Content_case_1_local_6_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_VPLView_2F_Set_20_Content_case_1_local_6_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_VPLView_2F_Set_20_Content_case_1_local_6_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_VPLView_2F_Set_20_Content_case_1_local_6_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_VPLView_2F_Set_20_Content_case_1_local_6_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_VPLView_2F_Set_20_Content_case_1_local_6_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_VPLView_2F_Set_20_Content_case_1_local_6_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_VPLView_2F_Set_20_Content_case_1_local_6_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
TERMINATEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_After_20_Drawing,1,0,TERMINAL(0));

result = vpx_method_Set_20_Port(PARAMETERS,TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_VPLView_2F_Set_20_Content_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_VPLView_2F_Set_20_Content_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
TERMINATEONSUCCESS

result = vpx_method_VPLView_2F_Set_20_Content_case_1_local_6_case_1_local_3(PARAMETERS,TERMINAL(0),ROOT(3));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(1))) ){
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Open,2,0,LIST(1),TERMINAL(0));
REPEATFINISH
} else {
}

result = vpx_method_VPLView_2F_Set_20_Content_case_1_local_6_case_1_local_5(PARAMETERS,TERMINAL(0),TERMINAL(3));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_VPLView_2F_Set_20_Content(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Content,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_set(PARAMETERS,kVPXValue_Content,TERMINAL(2),TERMINAL(1),ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(0),ROOT(5),ROOT(6));

result = vpx_method_VPLView_2F_Set_20_Content_case_1_local_5(PARAMETERS,TERMINAL(3),TERMINAL(6));

result = vpx_method_VPLView_2F_Set_20_Content_case_1_local_6(PARAMETERS,TERMINAL(4),TERMINAL(1),TERMINAL(6));

result = kSuccess;

FOOTERSINGLECASE(7)
}

enum opTrigger vpx_method_VPLView_2F_Set_20_Frame_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_VPLView_2F_Set_20_Frame_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(14)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(0));
TERMINATEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,4,TERMINAL(1),ROOT(2),ROOT(3),ROOT(4),ROOT(5));

result = vpx_constant(PARAMETERS,"15",ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP_iminus,2,1,TERMINAL(5),TERMINAL(6),ROOT(7));

result = vpx_constant(PARAMETERS,"14",ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP_iminus,2,1,TERMINAL(4),TERMINAL(8),ROOT(9));

result = vpx_constant(PARAMETERS,"1",ROOT(10));

result = vpx_call_primitive(PARAMETERS,VPLP_iplus,2,1,TERMINAL(5),TERMINAL(10),ROOT(11));

result = vpx_call_primitive(PARAMETERS,VPLP_iminus,2,1,TERMINAL(2),TERMINAL(10),ROOT(12));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,4,1,TERMINAL(12),TERMINAL(7),TERMINAL(9),TERMINAL(11),ROOT(13));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Frame,2,0,TERMINAL(0),TERMINAL(13));

result = kSuccess;

FOOTERSINGLECASE(14)
}

enum opTrigger vpx_method_VPLView_2F_Set_20_Frame(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Frame,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_Vertical_20_Scroll_20_Bar,TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_method_VPLView_2F_Set_20_Frame_case_1_local_4(PARAMETERS,TERMINAL(4),TERMINAL(1));

result = vpx_persistent(PARAMETERS,kVPXValue_List_20_View_20_Canvas_20_Buffer,0,1,ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Update_20_Canvas_20_Limits,2,0,TERMINAL(3),TERMINAL(5));

result = kSuccess;

FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_VPLView_2F_Set_20_Location_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_VPLView_2F_Set_20_Location_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
TERMINATEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Window_20_Origin,1,1,TERMINAL(1),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Adjust_20_Origin,2,0,TERMINAL(0),TERMINAL(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_VPLView_2F_Set_20_Location(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_context_super_method(PARAMETERS,kVPXMethod_Set_20_Location,2,0,TERMINAL(0),TERMINAL(1));

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_method_VPLView_2F_Set_20_Location_case_1_local_4(PARAMETERS,TERMINAL(2),TERMINAL(3));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_VPLView_2F_Set_20_Select_20_List_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_VPLView_2F_Set_20_Select_20_List_case_1_local_5_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP__28_in_29_,2,1,TERMINAL(1),TERMINAL(0),ROOT(2));

result = vpx_match(PARAMETERS,"0",TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"FALSE",ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Selected,2,0,TERMINAL(0),TERMINAL(3));

result = kSuccess;

FOOTER(4)
}

enum opTrigger vpx_method_VPLView_2F_Set_20_Select_20_List_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_VPLView_2F_Set_20_Select_20_List_case_1_local_5_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_VPLView_2F_Set_20_Select_20_List_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_VPLView_2F_Set_20_Select_20_List_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_VPLView_2F_Set_20_Select_20_List_case_1_local_5_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_VPLView_2F_Set_20_Select_20_List_case_1_local_5_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_VPLView_2F_Set_20_Select_20_List_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_VPLView_2F_Set_20_Select_20_List_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Select_20_List,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
NEXTCASEONSUCCESS

result = vpx_method_Default_20_List(PARAMETERS,TERMINAL(1),ROOT(4));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(3))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_VPLView_2F_Set_20_Select_20_List_case_1_local_5(PARAMETERS,LIST(3),TERMINAL(4));
REPEATFINISH
} else {
}

result = vpx_constant(PARAMETERS,"TRUE",ROOT(5));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(4))) ){
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Selected,2,0,LIST(4),TERMINAL(5));
REPEATFINISH
} else {
}

result = vpx_set(PARAMETERS,kVPXValue_Select_20_List,TERMINAL(2),TERMINAL(4),ROOT(6));

result = kSuccess;

FOOTER(7)
}

enum opTrigger vpx_method_VPLView_2F_Set_20_Select_20_List_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_VPLView_2F_Set_20_Select_20_List_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_VPLView_2F_Set_20_Select_20_List_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_VPLView_2F_Set_20_Select_20_List_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Select_20_List,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
NEXTCASEONSUCCESS

result = vpx_constant(PARAMETERS,"FALSE",ROOT(4));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(3))) ){
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Selected,2,0,LIST(3),TERMINAL(4));
REPEATFINISH
} else {
}

result = vpx_constant(PARAMETERS,"TRUE",ROOT(5));

result = vpx_method_Default_20_List(PARAMETERS,TERMINAL(1),ROOT(6));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(6))) ){
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Selected,2,0,LIST(6),TERMINAL(5));
REPEATFINISH
} else {
}

result = vpx_set(PARAMETERS,kVPXValue_Select_20_List,TERMINAL(2),TERMINAL(6),ROOT(7));

result = kSuccess;

FOOTER(8)
}

enum opTrigger vpx_method_VPLView_2F_Set_20_Select_20_List(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_VPLView_2F_Set_20_Select_20_List_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
if(vpx_method_VPLView_2F_Set_20_Select_20_List_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_VPLView_2F_Set_20_Select_20_List_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_VPLView_2F_Set_20_Selected_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_VPLView_2F_Set_20_Selected_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Selected,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
NEXTCASEONSUCCESS

result = vpx_call_context_super_method(PARAMETERS,kVPXMethod_Set_20_Selected,2,0,TERMINAL(2),TERMINAL(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Content,1,1,TERMINAL(2),ROOT(4));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(4))) ){
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Selected,2,0,LIST(4),TERMINAL(1));
REPEATFINISH
} else {
}

result = kSuccess;

FOOTER(5)
}

enum opTrigger vpx_method_VPLView_2F_Set_20_Selected_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_VPLView_2F_Set_20_Selected_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_VPLView_2F_Set_20_Selected(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_VPLView_2F_Set_20_Selected_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_VPLView_2F_Set_20_Selected_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_VPLView_2F_Set_20_Up_20_Drawing(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(8)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Window_20_Origin,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,2,TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_constant(PARAMETERS,"0",ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_iminus,2,1,TERMINAL(5),TERMINAL(3),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP_iminus,2,1,TERMINAL(5),TERMINAL(4),ROOT(7));

SetOrigin( GETINTEGER(TERMINAL(7)),GETINTEGER(TERMINAL(6)));
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(8)
}

enum opTrigger vpx_method_VPLView_2F_Set_20_Viewport_20_Origin_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_VPLView_2F_Set_20_Viewport_20_Origin_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
TERMINATEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Window_20_Origin,1,1,TERMINAL(1),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Adjust_20_Origin,2,0,TERMINAL(0),TERMINAL(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_VPLView_2F_Set_20_Viewport_20_Origin_case_1_local_5_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_VPLView_2F_Set_20_Viewport_20_Origin_case_1_local_5_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
TERMINATEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Up_20_Drawing,1,0,TERMINAL(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_VPLView_2F_Set_20_Viewport_20_Origin_case_1_local_5_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_VPLView_2F_Set_20_Viewport_20_Origin_case_1_local_5_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
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

enum opTrigger vpx_method_VPLView_2F_Set_20_Viewport_20_Origin_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_VPLView_2F_Set_20_Viewport_20_Origin_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(7)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Viewport_20_Origin,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_Vertical_20_Scroll_20_Bar,TERMINAL(1),ROOT(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,2,TERMINAL(2),ROOT(5),ROOT(6));

result = vpx_method_VPLView_2F_Set_20_Viewport_20_Origin_case_1_local_5_case_1_local_5(PARAMETERS,TERMINAL(3));

result = vpx_method_VPLView_2F_Set_20_Viewport_20_Origin_case_1_local_5_case_1_local_6(PARAMETERS,TERMINAL(4),TERMINAL(5));

result = kSuccess;

FOOTERSINGLECASE(7)
}

enum opTrigger vpx_method_VPLView_2F_Set_20_Viewport_20_Origin(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Viewport_20_Origin,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_method_VPLView_2F_Set_20_Viewport_20_Origin_case_1_local_4(PARAMETERS,TERMINAL(3),TERMINAL(4));

result = vpx_method_VPLView_2F_Set_20_Viewport_20_Origin_case_1_local_5(PARAMETERS,TERMINAL(2));

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_VPLView_2F_Set_20_Window_20_Origin(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Location,1,1,TERMINAL(0),ROOT(2));

result = vpx_method_Add_20_Point(PARAMETERS,TERMINAL(2),TERMINAL(1),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Viewport_20_Origin,TERMINAL(0),ROOT(4),ROOT(5));

result = vpx_method_Subtract_20_Point(PARAMETERS,TERMINAL(3),TERMINAL(5),ROOT(6));

result = vpx_set(PARAMETERS,kVPXValue_Window_20_Origin,TERMINAL(4),TERMINAL(6),ROOT(7));

result = kSuccess;

FOOTERSINGLECASE(8)
}

enum opTrigger vpx_method_VPLView_2F_Update_20_Canvas_20_Limits_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_VPLView_2F_Update_20_Canvas_20_Limits_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1)
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
FOOTERSINGLECASE(11)
}

enum opTrigger vpx_method_VPLView_2F_Update_20_Canvas_20_Limits(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Content,1,1,TERMINAL(0),ROOT(2));

result = vpx_constant(PARAMETERS,"0",ROOT(3));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(2))) ){
REPEATBEGINWITHCOUNTER
LOOPTERMINALBEGIN(2)
LOOPTERMINAL(0,3,4)
LOOPTERMINAL(1,3,5)
result = vpx_method_VPLView_2F_Update_20_Canvas_20_Limits_case_1_local_4(PARAMETERS,LIST(2),LOOP(0),LOOP(1),ROOT(4),ROOT(5));
REPEATFINISH
} else {
ROOTNULL(4,TERMINAL(3))
ROOTNULL(5,TERMINAL(3))
}

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(4),TERMINAL(5),ROOT(6));

result = vpx_method_Add_20_Point(PARAMETERS,TERMINAL(6),TERMINAL(1),ROOT(7));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Canvas_20_Limits,2,0,TERMINAL(0),TERMINAL(7));

result = kSuccess;

FOOTERSINGLECASE(8)
}

enum opTrigger vpx_method_VPLView_2F_View_20_Size_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_VPLView_2F_View_20_Size_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_iminus,2,1,TERMINAL(1),TERMINAL(0),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_VPLView_2F_View_20_Size_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_VPLView_2F_View_20_Size_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_iminus,2,1,TERMINAL(1),TERMINAL(0),ROOT(3));

result = vpx_constant(PARAMETERS,"15",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_iminus,2,1,TERMINAL(3),TERMINAL(4),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTER(6)
}

enum opTrigger vpx_method_VPLView_2F_View_20_Size_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_VPLView_2F_View_20_Size_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_VPLView_2F_View_20_Size_case_1_local_6_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
vpx_method_VPLView_2F_View_20_Size_case_1_local_6_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0);
return outcome;
}

enum opTrigger vpx_method_VPLView_2F_View_20_Size_case_1_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_VPLView_2F_View_20_Size_case_1_local_7_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_call_primitive(PARAMETERS,VPLP_iminus,2,1,TERMINAL(1),TERMINAL(0),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_VPLView_2F_View_20_Size_case_1_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_VPLView_2F_View_20_Size_case_1_local_7_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_iminus,2,1,TERMINAL(1),TERMINAL(0),ROOT(3));

result = vpx_constant(PARAMETERS,"15",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_iminus,2,1,TERMINAL(3),TERMINAL(4),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTER(6)
}

enum opTrigger vpx_method_VPLView_2F_View_20_Size_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_VPLView_2F_View_20_Size_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_VPLView_2F_View_20_Size_case_1_local_7_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
vpx_method_VPLView_2F_View_20_Size_case_1_local_7_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0);
return outcome;
}

enum opTrigger vpx_method_VPLView_2F_View_20_Size(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(14)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Vertical_20_Scroll_20_Bar,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_Frame,TERMINAL(1),ROOT(3),ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_Horizontal_20_Scroll_20_Bar,TERMINAL(3),ROOT(5),ROOT(6));

result = vpx_method_Rect_20_To_20_Ints(PARAMETERS,TERMINAL(4),ROOT(7),ROOT(8),ROOT(9),ROOT(10));

result = vpx_method_VPLView_2F_View_20_Size_case_1_local_6(PARAMETERS,TERMINAL(8),TERMINAL(10),TERMINAL(2),ROOT(11));

result = vpx_method_VPLView_2F_View_20_Size_case_1_local_7(PARAMETERS,TERMINAL(7),TERMINAL(9),TERMINAL(6),ROOT(12));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(12),TERMINAL(11),ROOT(13));

result = kSuccess;

OUTPUT(0,TERMINAL(13))
FOOTERSINGLECASE(14)
}

enum opTrigger vpx_method_VPLView_2F_Draw_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_VPLView_2F_Draw_case_1_local_8(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Vertical_20_Scroll_20_Bar,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
TERMINATEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Draw,2,0,TERMINAL(3),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_VPLView_2F_Draw(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Before_20_Drawing,1,0,TERMINAL(0));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Erase_20_View,1,0,TERMINAL(0));

result = vpx_get(PARAMETERS,kVPXValue_Content,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_reverse,1,1,TERMINAL(3),ROOT(4));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(4))) ){
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Draw,2,0,LIST(4),TERMINAL(1));
REPEATFINISH
} else {
}

result = vpx_call_data_method(PARAMETERS,kVPXMethod_After_20_Drawing,1,0,TERMINAL(0));

result = vpx_method_VPLView_2F_Draw_case_1_local_8(PARAMETERS,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_VPLView_2F_Move_20_Origin_20_V_case_1_local_3_case_1_local_13_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_VPLView_2F_Move_20_Origin_20_V_case_1_local_3_case_1_local_13_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_method_Between_20_Bounds(PARAMETERS,TERMINAL(0),TERMINAL(1),TERMINAL(2),ROOT(3));

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(3));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(4)
}

enum opTrigger vpx_method_VPLView_2F_Move_20_Origin_20_V_case_1_local_3_case_1_local_13_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_VPLView_2F_Move_20_Origin_20_V_case_1_local_3_case_1_local_13_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP__3C_,2,0,TERMINAL(1),TERMINAL(0));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(3)
}

enum opTrigger vpx_method_VPLView_2F_Move_20_Origin_20_V_case_1_local_3_case_1_local_13_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_VPLView_2F_Move_20_Origin_20_V_case_1_local_3_case_1_local_13_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
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

enum opTrigger vpx_method_VPLView_2F_Move_20_Origin_20_V_case_1_local_3_case_1_local_13(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_VPLView_2F_Move_20_Origin_20_V_case_1_local_3_case_1_local_13(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_VPLView_2F_Move_20_Origin_20_V_case_1_local_3_case_1_local_13_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
if(vpx_method_VPLView_2F_Move_20_Origin_20_V_case_1_local_3_case_1_local_13_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
vpx_method_VPLView_2F_Move_20_Origin_20_V_case_1_local_3_case_1_local_13_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0);
return outcome;
}

enum opTrigger vpx_method_VPLView_2F_Move_20_Origin_20_V_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_VPLView_2F_Move_20_Origin_20_V_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(23)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Viewport_20_Origin,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,2,TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_iplus,2,1,TERMINAL(4),TERMINAL(1),ROOT(6));

result = vpx_constant(PARAMETERS,"0",ROOT(7));

result = vpx_get(PARAMETERS,kVPXValue_Frame,TERMINAL(0),ROOT(8),ROOT(9));

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,4,TERMINAL(9),ROOT(10),ROOT(11),ROOT(12),ROOT(13));

result = vpx_call_primitive(PARAMETERS,VPLP_iminus,2,1,TERMINAL(12),TERMINAL(10),ROOT(14));

result = vpx_get(PARAMETERS,kVPXValue_Canvas_20_Limits,TERMINAL(0),ROOT(15),ROOT(16));

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,2,TERMINAL(16),ROOT(17),ROOT(18));

result = vpx_call_primitive(PARAMETERS,VPLP_iminus,2,1,TERMINAL(17),TERMINAL(14),ROOT(19));

result = vpx_call_primitive(PARAMETERS,VPLP_max,2,1,TERMINAL(7),TERMINAL(19),ROOT(20));

result = vpx_method_VPLView_2F_Move_20_Origin_20_V_case_1_local_3_case_1_local_13(PARAMETERS,TERMINAL(7),TERMINAL(6),TERMINAL(20),ROOT(21));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(21),TERMINAL(5),ROOT(22));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Viewport_20_Origin,2,0,TERMINAL(2),TERMINAL(22));

result = kSuccess;

FOOTERSINGLECASE(23)
}

enum opTrigger vpx_method_VPLView_2F_Move_20_Origin_20_V_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_VPLView_2F_Move_20_Origin_20_V_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"0",TERMINAL(1));
NEXTCASEONSUCCESS

result = vpx_method_VPLView_2F_Move_20_Origin_20_V_case_1_local_3(PARAMETERS,TERMINAL(0),TERMINAL(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Window,1,1,TERMINAL(0),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Refresh,1,0,TERMINAL(2));

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_VPLView_2F_Move_20_Origin_20_V_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_VPLView_2F_Move_20_Origin_20_V_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_VPLView_2F_Move_20_Origin_20_V_case_3_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_VPLView_2F_Move_20_Origin_20_V_case_3_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Viewport_20_Origin,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_method_Add_20_Point(PARAMETERS,TERMINAL(3),TERMINAL(1),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP__28_join_29_,2,1,TERMINAL(3),TERMINAL(4),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_VPLView_2F_Move_20_Origin_20_V_case_3_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_VPLView_2F_Move_20_Origin_20_V_case_3_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"0",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_iminus,2,1,TERMINAL(3),TERMINAL(1),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_new_2D_rgn,0,1,ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_list_2D_to_2D_Rect,1,1,TERMINAL(2),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP_scroll_2D_rect,4,0,TERMINAL(6),TERMINAL(3),TERMINAL(4),TERMINAL(5));

result = vpx_constant(PARAMETERS,"FALSE",ROOT(7));

result = kSuccess;

OUTPUT(0,TERMINAL(7))
OUTPUT(1,TERMINAL(5))
FOOTERSINGLECASE(8)
}

enum opTrigger vpx_method_VPLView_2F_Move_20_Origin_20_V_case_3_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_VPLView_2F_Move_20_Origin_20_V_case_3_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Viewport_20_Origin,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,2,TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_iplus,2,1,TERMINAL(4),TERMINAL(1),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(6),TERMINAL(5),ROOT(7));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Viewport_20_Origin,2,0,TERMINAL(2),TERMINAL(7));

result = kSuccess;

FOOTERSINGLECASE(8)
}

enum opTrigger vpx_method_VPLView_2F_Move_20_Origin_20_V_case_3_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_VPLView_2F_Move_20_Origin_20_V_case_3_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Viewport_20_Origin,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_method_Add_20_Point(PARAMETERS,TERMINAL(3),TERMINAL(1),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP__28_join_29_,2,1,TERMINAL(3),TERMINAL(4),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_VPLView_2F_Move_20_Origin_20_V_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_VPLView_2F_Move_20_Origin_20_V_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"0",TERMINAL(1));
NEXTCASEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_View_20_Size,1,1,TERMINAL(0),ROOT(2));

result = vpx_method_VPLView_2F_Move_20_Origin_20_V_case_3_local_4(PARAMETERS,TERMINAL(0),TERMINAL(2),ROOT(3));

result = vpx_method_VPLView_2F_Move_20_Origin_20_V_case_3_local_5(PARAMETERS,TERMINAL(0),TERMINAL(1),TERMINAL(3),ROOT(4),ROOT(5));

result = vpx_method_VPLView_2F_Move_20_Origin_20_V_case_3_local_6(PARAMETERS,TERMINAL(0),TERMINAL(1));

result = vpx_method_VPLView_2F_Move_20_Origin_20_V_case_3_local_7(PARAMETERS,TERMINAL(0),TERMINAL(2),ROOT(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Window,1,1,TERMINAL(0),ROOT(7));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Refresh,1,0,TERMINAL(7));

result = kSuccess;

FOOTER(8)
}

enum opTrigger vpx_method_VPLView_2F_Move_20_Origin_20_V(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_VPLView_2F_Move_20_Origin_20_V_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
if(vpx_method_VPLView_2F_Move_20_Origin_20_V_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_VPLView_2F_Move_20_Origin_20_V_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_VPLView_2F_View_20_Rect(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Viewport_20_Origin,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_View_20_Size,1,1,TERMINAL(0),ROOT(3));

result = vpx_method_Add_20_Point(PARAMETERS,TERMINAL(2),TERMINAL(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP__28_join_29_,2,1,TERMINAL(2),TERMINAL(4),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_VPLView_2F_Erase_20_View(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_View_20_Rect,1,1,TERMINAL(0),ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_list_2D_to_2D_Rect,1,1,TERMINAL(1),ROOT(2));

EraseRect( GETCONSTPOINTER(Rect,*,TERMINAL(2)));
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_VPLView_2F_Set_20_Canvas_20_Limits_case_1_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_VPLView_2F_Set_20_Canvas_20_Limits_case_1_local_9(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(0));
TERMINATEONSUCCESS

result = vpx_constant(PARAMETERS,"0",ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_max,2,1,TERMINAL(1),TERMINAL(2),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Maximum,2,0,TERMINAL(0),TERMINAL(3));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_VPLView_2F_Set_20_Canvas_20_Limits_case_1_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_VPLView_2F_Set_20_Canvas_20_Limits_case_1_local_10(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(0));
TERMINATEONSUCCESS

result = vpx_get(PARAMETERS,kVPXValue_Item_20_Record,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
TERMINATEONSUCCESS

SetControlViewSize( GETPOINTER(0,OpaqueControlRef,*,ROOT(4),TERMINAL(3)),GETINTEGER(TERMINAL(1)));
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_VPLView_2F_Set_20_Canvas_20_Limits(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(15)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Canvas_20_Limits,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,2,TERMINAL(1),ROOT(3),ROOT(4));

result = vpx_get(PARAMETERS,kVPXValue_Frame,TERMINAL(2),ROOT(5),ROOT(6));

result = vpx_get(PARAMETERS,kVPXValue_Vertical_20_Scroll_20_Bar,TERMINAL(5),ROOT(7),ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,4,TERMINAL(6),ROOT(9),ROOT(10),ROOT(11),ROOT(12));

result = vpx_call_primitive(PARAMETERS,VPLP_iminus,2,1,TERMINAL(11),TERMINAL(9),ROOT(13));

result = vpx_call_primitive(PARAMETERS,VPLP_iminus,2,1,TERMINAL(3),TERMINAL(13),ROOT(14));

result = vpx_method_VPLView_2F_Set_20_Canvas_20_Limits_case_1_local_9(PARAMETERS,TERMINAL(8),TERMINAL(14));

result = vpx_method_VPLView_2F_Set_20_Canvas_20_Limits_case_1_local_10(PARAMETERS,TERMINAL(8),TERMINAL(13));

result = kSuccess;

FOOTERSINGLECASE(15)
}

enum opTrigger vpx_method_VPLView_2F_Find_20_Item_20_Name(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Content,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_constant(PARAMETERS,"Name",ROOT(4));

result = vpx_method_Find_20_Instance(PARAMETERS,TERMINAL(3),TERMINAL(4),TERMINAL(1),ROOT(5),ROOT(6));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(6));
FAILONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTERSINGLECASE(7)
}

enum opTrigger vpx_method_VPLView_2F_Erase_20_View_20_CG_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_VPLView_2F_Erase_20_View_20_CG_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_View_20_Rect,1,1,TERMINAL(0),ROOT(2));

result = vpx_method_list_2D_to_2D_CGRect(PARAMETERS,TERMINAL(2),ROOT(3));

result = vpx_constant(PARAMETERS,"1.0",ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Fill_20_RGB_20_Color,5,0,TERMINAL(1),TERMINAL(4),TERMINAL(4),TERMINAL(4),TERMINAL(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Fill_20_Rect,2,0,TERMINAL(1),TERMINAL(3));

result = kSuccess;

FOOTER(5)
}

enum opTrigger vpx_method_VPLView_2F_Erase_20_View_20_CG_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_VPLView_2F_Erase_20_View_20_CG_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_View_20_Rect,1,1,TERMINAL(0),ROOT(2));

result = vpx_method_list_2D_to_2D_CGRect(PARAMETERS,TERMINAL(2),ROOT(3));

result = vpx_constant(PARAMETERS,"1.0",ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Stroke_20_RGB_20_Color,5,0,TERMINAL(1),TERMINAL(4),TERMINAL(4),TERMINAL(4),TERMINAL(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Clear_20_Rect,2,0,TERMINAL(1),TERMINAL(3));

result = kSuccess;

FOOTER(5)
}

enum opTrigger vpx_method_VPLView_2F_Erase_20_View_20_CG(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_VPLView_2F_Erase_20_View_20_CG_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_VPLView_2F_Erase_20_View_20_CG_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_VPLView_2F_Before_20_Drawing_20_CG_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_VPLView_2F_Before_20_Drawing_20_CG_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Save_20_GState,1,0,TERMINAL(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Setup_20_Drawing_20_CG,2,0,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_VPLView_2F_Before_20_Drawing_20_CG_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_VPLView_2F_Before_20_Drawing_20_CG_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_VPLView_2F_Before_20_Drawing_20_CG(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_VPLView_2F_Before_20_Drawing_20_CG_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_VPLView_2F_Before_20_Drawing_20_CG_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_VPLView_2F_Setup_20_Drawing_20_CG_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_VPLView_2F_Setup_20_Drawing_20_CG_case_1_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Window,1,1,TERMINAL(0),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP__3D_,2,0,TERMINAL(2),TERMINAL(3));
NEXTCASEONSUCCESS

result = vpx_get(PARAMETERS,kVPXValue_Viewport_20_Origin,TERMINAL(2),ROOT(4),ROOT(5));

result = kSuccess;

OUTPUT(0,TERMINAL(5))
FOOTER(6)
}

enum opTrigger vpx_method_VPLView_2F_Setup_20_Drawing_20_CG_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_VPLView_2F_Setup_20_Drawing_20_CG_case_1_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"( 0 0 )",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_VPLView_2F_Setup_20_Drawing_20_CG_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_VPLView_2F_Setup_20_Drawing_20_CG_case_1_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_VPLView_2F_Setup_20_Drawing_20_CG_case_1_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_VPLView_2F_Setup_20_Drawing_20_CG_case_1_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_VPLView_2F_Setup_20_Drawing_20_CG_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_VPLView_2F_Setup_20_Drawing_20_CG_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(11)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Frame,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_detach_2D_r,1,3,TERMINAL(3),ROOT(4),ROOT(5),ROOT(6));

result = vpx_method_VPLView_2F_Setup_20_Drawing_20_CG_case_1_local_4(PARAMETERS,TERMINAL(0),ROOT(7));

result = vpx_method_Subtract_20_Point(PARAMETERS,TERMINAL(4),TERMINAL(7),ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,2,TERMINAL(8),ROOT(9),ROOT(10));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Translate_20_CTM,3,0,TERMINAL(1),TERMINAL(10),TERMINAL(9));

result = kSuccess;

FOOTER(11)
}

enum opTrigger vpx_method_VPLView_2F_Setup_20_Drawing_20_CG_case_2_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_VPLView_2F_Setup_20_Drawing_20_CG_case_2_local_4_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(2));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(2))
OUTPUT(1,TERMINAL(0))
FOOTER(3)
}

enum opTrigger vpx_method_VPLView_2F_Setup_20_Drawing_20_CG_case_2_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_VPLView_2F_Setup_20_Drawing_20_CG_case_2_local_4_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

OUTPUT(0,TERMINAL(0))
OUTPUT(1,TERMINAL(0))
FOOTER(1)
}

enum opTrigger vpx_method_VPLView_2F_Setup_20_Drawing_20_CG_case_2_local_4_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_VPLView_2F_Setup_20_Drawing_20_CG_case_2_local_4_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(4));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(4))
OUTPUT(1,TERMINAL(2))
FOOTER(5)
}

enum opTrigger vpx_method_VPLView_2F_Setup_20_Drawing_20_CG_case_2_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_VPLView_2F_Setup_20_Drawing_20_CG_case_2_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0,V_Object *root1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_VPLView_2F_Setup_20_Drawing_20_CG_case_2_local_4_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1))
if(vpx_method_VPLView_2F_Setup_20_Drawing_20_CG_case_2_local_4_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1))
vpx_method_VPLView_2F_Setup_20_Drawing_20_CG_case_2_local_4_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,root0,root1);
return outcome;
}

enum opTrigger vpx_method_VPLView_2F_Setup_20_Drawing_20_CG_case_2_local_23(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_VPLView_2F_Setup_20_Drawing_20_CG_case_2_local_23(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"Drawing",ROOT(1));

result = vpx_constant(PARAMETERS,"Setup",ROOT(2));

result = vpx_constant(PARAMETERS,"0",ROOT(3));

result = vpx_method_Debug_20_Result(PARAMETERS,TERMINAL(0),TERMINAL(1),TERMINAL(2),TERMINAL(3));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_VPLView_2F_Setup_20_Drawing_20_CG_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_VPLView_2F_Setup_20_Drawing_20_CG_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(31)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Save_20_GState,1,0,TERMINAL(1));

result = vpx_constant(PARAMETERS,"0.0",ROOT(2));

result = vpx_method_VPLView_2F_Setup_20_Drawing_20_CG_case_2_local_4(PARAMETERS,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Window,1,1,TERMINAL(0),ROOT(5));

result = vpx_get(PARAMETERS,kVPXValue_View,TERMINAL(5),ROOT(6),ROOT(7));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Size,1,1,TERMINAL(0),ROOT(8));

result = vpx_get(PARAMETERS,kVPXValue_Window_20_Origin,TERMINAL(0),ROOT(9),ROOT(10));

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,2,TERMINAL(8),ROOT(11),ROOT(12));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Location,1,1,TERMINAL(0),ROOT(13));

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,2,TERMINAL(13),ROOT(14),ROOT(15));

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,2,TERMINAL(10),ROOT(16),ROOT(17));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Size,1,1,TERMINAL(5),ROOT(18));

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,2,TERMINAL(18),ROOT(19),ROOT(20));

result = vpx_get(PARAMETERS,kVPXValue_Frame,TERMINAL(0),ROOT(21),ROOT(22));

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,4,TERMINAL(22),ROOT(23),ROOT(24),ROOT(25),ROOT(26));

result = vpx_call_primitive(PARAMETERS,VPLP__2D_,2,1,TERMINAL(19),TERMINAL(25),ROOT(27));

result = vpx_call_primitive(PARAMETERS,VPLP__2D_,2,1,TERMINAL(27),TERMINAL(11),ROOT(28));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Translate_20_CTM,3,0,TERMINAL(1),TERMINAL(15),TERMINAL(19));

result = vpx_constant(PARAMETERS,"1.0",ROOT(29));

result = vpx_constant(PARAMETERS,"-1.0",ROOT(30));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Scale_20_CTM,3,0,TERMINAL(1),TERMINAL(29),TERMINAL(30));

result = vpx_method_VPLView_2F_Setup_20_Drawing_20_CG_case_2_local_23(PARAMETERS,TERMINAL(0));

result = kSuccess;

FOOTER(31)
}

enum opTrigger vpx_method_VPLView_2F_Setup_20_Drawing_20_CG_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_VPLView_2F_Setup_20_Drawing_20_CG_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Window,1,1,TERMINAL(0),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
NEXTCASEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Up_20_Drawing,1,0,TERMINAL(0));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Sync_20_CGContext_20_Origin,2,0,TERMINAL(2),TERMINAL(1));

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_VPLView_2F_Setup_20_Drawing_20_CG_case_4_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_VPLView_2F_Setup_20_Drawing_20_CG_case_4_local_4(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_VPLView_2F_Setup_20_Drawing_20_CG_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_VPLView_2F_Setup_20_Drawing_20_CG_case_4(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADERWITHNONE(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Up_20_Drawing,1,0,TERMINAL(0));

GetPort( GETPOINTER(0,OpaqueGrafPtr,**,ROOT(2),NONE));
result = kSuccess;

result = vpx_method_VPLView_2F_Setup_20_Drawing_20_CG_case_4_local_4(PARAMETERS,TERMINAL(1),TERMINAL(2));

result = kSuccess;

FOOTERWITHNONE(3)
}

enum opTrigger vpx_method_VPLView_2F_Setup_20_Drawing_20_CG_case_5_local_14_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2);
enum opTrigger vpx_method_VPLView_2F_Setup_20_Drawing_20_CG_case_5_local_14_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2)
{
HEADER(13)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(0));
NEXTCASEONSUCCESS

result = vpx_get(PARAMETERS,kVPXValue_Frame,TERMINAL(0),ROOT(4),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,4,TERMINAL(5),ROOT(6),ROOT(7),ROOT(8),ROOT(9));

result = vpx_call_primitive(PARAMETERS,VPLP__2D_,2,1,TERMINAL(8),TERMINAL(1),ROOT(10));

result = vpx_method_Rectangle_20_Size(PARAMETERS,TERMINAL(5),ROOT(11));

result = vpx_call_primitive(PARAMETERS,VPLP__2B_,2,1,TERMINAL(10),TERMINAL(3),ROOT(12));

result = kSuccess;

OUTPUT(0,TERMINAL(7))
OUTPUT(1,TERMINAL(12))
OUTPUT(2,TERMINAL(1))
FOOTER(13)
}

enum opTrigger vpx_method_VPLView_2F_Setup_20_Drawing_20_CG_case_5_local_14_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2);
enum opTrigger vpx_method_VPLView_2F_Setup_20_Drawing_20_CG_case_5_local_14_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
INPUT(3,3)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP__2D_,2,1,TERMINAL(2),TERMINAL(3),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
OUTPUT(1,TERMINAL(4))
OUTPUT(2,TERMINAL(3))
FOOTER(5)
}

enum opTrigger vpx_method_VPLView_2F_Setup_20_Drawing_20_CG_case_5_local_14_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2);
enum opTrigger vpx_method_VPLView_2F_Setup_20_Drawing_20_CG_case_5_local_14_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object terminal3,V_Object *root0,V_Object *root1,V_Object *root2)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_VPLView_2F_Setup_20_Drawing_20_CG_case_5_local_14_case_1_local_6_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0,root1,root2))
vpx_method_VPLView_2F_Setup_20_Drawing_20_CG_case_5_local_14_case_1_local_6_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,terminal3,root0,root1,root2);
return outcome;
}

enum opTrigger vpx_method_VPLView_2F_Setup_20_Drawing_20_CG_case_5_local_14_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_VPLView_2F_Setup_20_Drawing_20_CG_case_5_local_14_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1)
{
HEADER(19)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(0));
NEXTCASEONSUCCESS

result = vpx_get(PARAMETERS,kVPXValue_Frame,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,4,TERMINAL(4),ROOT(5),ROOT(6),ROOT(7),ROOT(8));

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(3),ROOT(9),ROOT(10));

result = vpx_method_VPLView_2F_Setup_20_Drawing_20_CG_case_5_local_14_case_1_local_6(PARAMETERS,TERMINAL(10),TERMINAL(5),TERMINAL(7),TERMINAL(1),ROOT(11),ROOT(12),ROOT(13));

result = vpx_method_Rectangle_20_Size(PARAMETERS,TERMINAL(4),ROOT(14));

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,2,TERMINAL(14),ROOT(15),ROOT(16));

result = vpx_call_primitive(PARAMETERS,VPLP__2B2B_,2,1,TERMINAL(7),TERMINAL(15),ROOT(17));

result = vpx_call_primitive(PARAMETERS,VPLP__2D_,2,1,TERMINAL(12),TERMINAL(13),ROOT(18));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
OUTPUT(1,TERMINAL(12))
FOOTER(19)
}

enum opTrigger vpx_method_VPLView_2F_Setup_20_Drawing_20_CG_case_5_local_14_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_VPLView_2F_Setup_20_Drawing_20_CG_case_5_local_14_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"0",ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
OUTPUT(1,TERMINAL(2))
FOOTER(4)
}

enum opTrigger vpx_method_VPLView_2F_Setup_20_Drawing_20_CG_case_5_local_14(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_VPLView_2F_Setup_20_Drawing_20_CG_case_5_local_14(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0,V_Object *root1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_VPLView_2F_Setup_20_Drawing_20_CG_case_5_local_14_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0,root1))
vpx_method_VPLView_2F_Setup_20_Drawing_20_CG_case_5_local_14_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0,root1);
return outcome;
}

enum opTrigger vpx_method_VPLView_2F_Setup_20_Drawing_20_CG_case_5(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_VPLView_2F_Setup_20_Drawing_20_CG_case_5(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(27)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_get(PARAMETERS,kVPXValue_Window_20_Origin,TERMINAL(0),ROOT(4),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,2,TERMINAL(5),ROOT(6),ROOT(7));

result = vpx_constant(PARAMETERS,"0",ROOT(8));

result = vpx_get(PARAMETERS,kVPXValue_Frame,TERMINAL(0),ROOT(9),ROOT(10));

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,4,TERMINAL(10),ROOT(11),ROOT(12),ROOT(13),ROOT(14));

result = vpx_call_primitive(PARAMETERS,VPLP__2D_,2,1,TERMINAL(13),TERMINAL(11),ROOT(15));

result = vpx_call_primitive(PARAMETERS,VPLP_iminus,2,1,TERMINAL(6),TERMINAL(15),ROOT(16));

result = vpx_call_primitive(PARAMETERS,VPLP_iminus,2,1,TERMINAL(12),TERMINAL(7),ROOT(17));

result = vpx_constant(PARAMETERS,"0",ROOT(18));

result = vpx_constant(PARAMETERS,"1000",ROOT(19));

result = vpx_constant(PARAMETERS,"0",ROOT(20));

result = vpx_method_VPLView_2F_Setup_20_Drawing_20_CG_case_5_local_14(PARAMETERS,TERMINAL(3),TERMINAL(11),TERMINAL(13),ROOT(21),ROOT(22));

result = vpx_call_primitive(PARAMETERS,VPLP__2D_,2,1,TERMINAL(22),TERMINAL(6),ROOT(23));

result = vpx_constant(PARAMETERS,"200",ROOT(24));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Translate_20_CTM,3,0,TERMINAL(1),TERMINAL(12),TERMINAL(22));

result = vpx_constant(PARAMETERS,"1.0",ROOT(25));

result = vpx_constant(PARAMETERS,"-1.0",ROOT(26));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Scale_20_CTM,3,0,TERMINAL(1),TERMINAL(25),TERMINAL(26));

result = kSuccess;

FOOTER(27)
}

enum opTrigger vpx_method_VPLView_2F_Setup_20_Drawing_20_CG_case_6(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_VPLView_2F_Setup_20_Drawing_20_CG_case_6(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_VPLView_2F_Setup_20_Drawing_20_CG(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_VPLView_2F_Setup_20_Drawing_20_CG_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
if(vpx_method_VPLView_2F_Setup_20_Drawing_20_CG_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
if(vpx_method_VPLView_2F_Setup_20_Drawing_20_CG_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
if(vpx_method_VPLView_2F_Setup_20_Drawing_20_CG_case_4(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
if(vpx_method_VPLView_2F_Setup_20_Drawing_20_CG_case_5(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_VPLView_2F_Setup_20_Drawing_20_CG_case_6(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_VPLView_2F_After_20_Drawing_20_CG_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_VPLView_2F_After_20_Drawing_20_CG_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Restore_20_GState,1,0,TERMINAL(1));

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
NEXTCASEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Setup_20_Drawing_20_CG,2,0,TERMINAL(3),TERMINAL(1));

result = kSuccess;

FOOTER(4)
}

enum opTrigger vpx_method_VPLView_2F_After_20_Drawing_20_CG_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_VPLView_2F_After_20_Drawing_20_CG_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_VPLView_2F_After_20_Drawing_20_CG(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_VPLView_2F_After_20_Drawing_20_CG_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_VPLView_2F_After_20_Drawing_20_CG_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_VPLView_2F_Draw_20_CG_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_VPLView_2F_Draw_20_CG_case_1_local_2_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_VPLView_2F_Draw_20_CG_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_VPLView_2F_Draw_20_CG_case_1_local_2_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Vertical_20_Scroll_20_Bar,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(4));
TERMINATEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Window,1,1,TERMINAL(0),ROOT(5));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(5));
TERMINATEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Setup_20_Drawing_20_CG,2,0,TERMINAL(5),TERMINAL(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Draw_20_Event_20_CG,3,0,TERMINAL(4),TERMINAL(1),TERMINAL(2));

result = kSuccess;

FOOTER(6)
}

enum opTrigger vpx_method_VPLView_2F_Draw_20_CG_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_VPLView_2F_Draw_20_CG_case_1_local_2(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_VPLView_2F_Draw_20_CG_case_1_local_2_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2))
vpx_method_VPLView_2F_Draw_20_CG_case_1_local_2_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2);
return outcome;
}

enum opTrigger vpx_method_VPLView_2F_Draw_20_CG(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_method_VPLView_2F_Draw_20_CG_case_1_local_2(PARAMETERS,TERMINAL(0),TERMINAL(1),TERMINAL(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Before_20_Drawing_20_CG,2,0,TERMINAL(0),TERMINAL(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Erase_20_View_20_CG,2,0,TERMINAL(0),TERMINAL(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Draw_20_Content_20_CG,3,0,TERMINAL(0),TERMINAL(1),TERMINAL(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_After_20_Drawing_20_CG,2,0,TERMINAL(0),TERMINAL(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_VPLView_2F_Get_20_Select_20_List(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Select_20_List,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_VPLView_2F_Update_20_Select_20_List_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_VPLView_2F_Update_20_Select_20_List_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Select_20_List,1,1,TERMINAL(0),ROOT(2));

result = vpx_method__28_Without_29_(PARAMETERS,TERMINAL(1),TERMINAL(2),ROOT(3));

result = vpx_method__28_Without_29_(PARAMETERS,TERMINAL(2),TERMINAL(1),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP__28_join_29_,2,1,TERMINAL(4),TERMINAL(3),ROOT(5));

result = vpx_method__28_Unique_29_(PARAMETERS,TERMINAL(5),ROOT(6));

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTERSINGLECASE(7)
}

enum opTrigger vpx_method_VPLView_2F_Update_20_Select_20_List_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_VPLView_2F_Update_20_Select_20_List_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Select_20_List,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(4));
NEXTCASEONSUCCESS

result = vpx_method__28_Check_29_(PARAMETERS,TERMINAL(1),ROOT(5));

result = vpx_method_VPLView_2F_Update_20_Select_20_List_case_1_local_5(PARAMETERS,TERMINAL(0),TERMINAL(5),ROOT(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Select_20_List,2,0,TERMINAL(0),TERMINAL(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Redraw_20_Items_20_CG,3,0,TERMINAL(0),TERMINAL(6),TERMINAL(2));

result = kSuccess;

FOOTER(7)
}

enum opTrigger vpx_method_VPLView_2F_Update_20_Select_20_List_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_VPLView_2F_Update_20_Select_20_List_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_VPLView_2F_Update_20_Select_20_List(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_VPLView_2F_Update_20_Select_20_List_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2))
vpx_method_VPLView_2F_Update_20_Select_20_List_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2);
return outcome;
}

enum opTrigger vpx_method_VPLView_2F_Update_20_Select_20_Item_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_VPLView_2F_Update_20_Select_20_Item_case_1_local_6_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP__28_in_29_,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_match(PARAMETERS,"0",TERMINAL(2));
NEXTCASEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP_detach_2D_nth,2,2,TERMINAL(0),TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_constant(PARAMETERS,"FALSE",ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Selected,2,0,TERMINAL(1),TERMINAL(5));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(6)
}

enum opTrigger vpx_method_VPLView_2F_Update_20_Select_20_Item_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_VPLView_2F_Update_20_Select_20_Item_case_1_local_6_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_attach_2D_r,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_constant(PARAMETERS,"TRUE",ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Selected,2,0,TERMINAL(1),TERMINAL(3));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(4)
}

enum opTrigger vpx_method_VPLView_2F_Update_20_Select_20_Item_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_VPLView_2F_Update_20_Select_20_Item_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_VPLView_2F_Update_20_Select_20_Item_case_1_local_6_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_VPLView_2F_Update_20_Select_20_Item_case_1_local_6_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_VPLView_2F_Update_20_Select_20_Item_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_VPLView_2F_Update_20_Select_20_Item_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Selected,TERMINAL(1),ROOT(3),ROOT(4));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(4));
NEXTCASEONSUCCESS

result = vpx_get(PARAMETERS,kVPXValue_Select_20_List,TERMINAL(0),ROOT(5),ROOT(6));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(6));
NEXTCASEONSUCCESS

result = vpx_method_VPLView_2F_Update_20_Select_20_Item_case_1_local_6(PARAMETERS,TERMINAL(6),TERMINAL(3),ROOT(7));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Select_20_List,2,0,TERMINAL(5),TERMINAL(7));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Redraw_20_Items_20_CG,3,0,TERMINAL(0),TERMINAL(1),TERMINAL(2));

result = kSuccess;

FOOTER(8)
}

enum opTrigger vpx_method_VPLView_2F_Update_20_Select_20_Item_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_VPLView_2F_Update_20_Select_20_Item_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_VPLView_2F_Update_20_Select_20_Item(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_VPLView_2F_Update_20_Select_20_Item_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2))
vpx_method_VPLView_2F_Update_20_Select_20_Item_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2);
return outcome;
}

enum opTrigger vpx_method_VPLView_2F_Redraw_20_Items_20_CG_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_VPLView_2F_Redraw_20_Items_20_CG_case_1_local_3_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"FALSE",ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
OUTPUT(1,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_VPLView_2F_Redraw_20_Items_20_CG_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_VPLView_2F_Redraw_20_Items_20_CG_case_1_local_3_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Begin_20_CGContext,1,1,TERMINAL(0),ROOT(2));
NEXTCASEONFAILURE

result = vpx_constant(PARAMETERS,"TRUE",ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Port,1,0,TERMINAL(0));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
OUTPUT(1,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_VPLView_2F_Redraw_20_Items_20_CG_case_1_local_3_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_VPLView_2F_Redraw_20_Items_20_CG_case_1_local_3_case_3(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(2));

result = vpx_constant(PARAMETERS,"FALSE",ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
OUTPUT(1,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_VPLView_2F_Redraw_20_Items_20_CG_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1);
enum opTrigger vpx_method_VPLView_2F_Redraw_20_Items_20_CG_case_1_local_3(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0,V_Object *root1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_VPLView_2F_Redraw_20_Items_20_CG_case_1_local_3_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1))
if(vpx_method_VPLView_2F_Redraw_20_Items_20_CG_case_1_local_3_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1))
vpx_method_VPLView_2F_Redraw_20_Items_20_CG_case_1_local_3_case_3(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0,root1);
return outcome;
}

enum opTrigger vpx_method_VPLView_2F_Redraw_20_Items_20_CG_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_VPLView_2F_Redraw_20_Items_20_CG_case_1_local_6(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
TERMINATEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Before_20_Drawing_20_CG,2,0,TERMINAL(0),TERMINAL(1));

result = vpx_constant(PARAMETERS,"NULL",ROOT(3));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(2))) ){
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Draw_20_CG,3,0,LIST(2),TERMINAL(3),TERMINAL(1));
REPEATFINISH
} else {
}

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Flush,1,0,TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(4)
}

enum opTrigger vpx_method_VPLView_2F_Redraw_20_Items_20_CG_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_VPLView_2F_Redraw_20_Items_20_CG_case_1_local_7(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(2));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_End_20_CGContext,2,0,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_VPLView_2F_Redraw_20_Items_20_CG(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(8)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Window,1,1,TERMINAL(0),ROOT(3));

result = vpx_method_VPLView_2F_Redraw_20_Items_20_CG_case_1_local_3(PARAMETERS,TERMINAL(3),TERMINAL(2),ROOT(4),ROOT(5));

result = vpx_method_Replace_20_NULL_20_No_20_Copy(PARAMETERS,TERMINAL(1),TERMINAL(0),ROOT(6));

result = vpx_method__28_Check_29_(PARAMETERS,TERMINAL(6),ROOT(7));

result = vpx_method_VPLView_2F_Redraw_20_Items_20_CG_case_1_local_6(PARAMETERS,TERMINAL(0),TERMINAL(4),TERMINAL(7));

result = vpx_method_VPLView_2F_Redraw_20_Items_20_CG_case_1_local_7(PARAMETERS,TERMINAL(3),TERMINAL(4),TERMINAL(5));

result = kSuccess;

FOOTERSINGLECASE(8)
}

enum opTrigger vpx_method_VPLView_2F_Target_20_Self(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Window,1,1,TERMINAL(0),ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(1));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Refresh,1,0,TERMINAL(1));

result = vpx_constant(PARAMETERS,"TRUE",ROOT(2));

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Target,3,0,TERMINAL(1),TERMINAL(4),TERMINAL(2));

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_VPLView_2F_Get_20_Frame_20_In_20_Windowxx_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_VPLView_2F_Get_20_Frame_20_In_20_Windowxx_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(8)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Window_20_Origin,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Location,1,1,TERMINAL(0),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Size,1,1,TERMINAL(0),ROOT(4));

result = vpx_method_Subtract_20_Point(PARAMETERS,TERMINAL(2),TERMINAL(3),ROOT(5));

result = vpx_method_Add_20_Point(PARAMETERS,TERMINAL(5),TERMINAL(4),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP__28_join_29_,2,1,TERMINAL(5),TERMINAL(6),ROOT(7));

result = kSuccess;

OUTPUT(0,TERMINAL(7))
FOOTER(8)
}

enum opTrigger vpx_method_VPLView_2F_Get_20_Frame_20_In_20_Windowxx_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_VPLView_2F_Get_20_Frame_20_In_20_Windowxx_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Frame,1,1,TERMINAL(0),ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_VPLView_2F_Get_20_Frame_20_In_20_Windowxx(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_VPLView_2F_Get_20_Frame_20_In_20_Windowxx_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_VPLView_2F_Get_20_Frame_20_In_20_Windowxx_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_VPLView_2F_Reset_20_Cache(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Content,TERMINAL(0),ROOT(1),ROOT(2));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(2))) ){
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Reset_20_Cache,1,0,LIST(2));
REPEATFINISH
} else {
}

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_VPLView_2F_Draw_20_Content_20_CG(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Content,TERMINAL(0),ROOT(3),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_reverse,1,1,TERMINAL(4),ROOT(5));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(5))) ){
REPEATBEGINWITHCOUNTER
result = vpx_call_data_method(PARAMETERS,kVPXMethod_Draw_20_Event_20_CG,3,0,LIST(5),TERMINAL(1),TERMINAL(2));
REPEATFINISH
} else {
}

result = kSuccess;

FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_VPLView_2F_Find_20_CTM_20_Item_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_VPLView_2F_Find_20_CTM_20_Item_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Is_20_CTM_20_Item_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_call_context_super_method(PARAMETERS,kVPXMethod_Find_20_CTM_20_Item,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTER(3)
}

enum opTrigger vpx_method_VPLView_2F_Find_20_CTM_20_Item_case_2_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_VPLView_2F_Find_20_CTM_20_Item_case_2_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Find_20_CTM_20_Item,2,1,TERMINAL(0),TERMINAL(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(2));
FINISHONSUCCESS

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_VPLView_2F_Find_20_CTM_20_Item_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_VPLView_2F_Find_20_CTM_20_Item_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Window_20_Origin,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_method_Subtract_20_Point(PARAMETERS,TERMINAL(1),TERMINAL(3),ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Content,1,1,TERMINAL(0),ROOT(5));

if( (repeatLimit = vpx_multiplex(1,TERMINAL(5))) ){
REPEATBEGINWITHCOUNTER
result = vpx_method_VPLView_2F_Find_20_CTM_20_Item_case_2_local_5(PARAMETERS,LIST(5),TERMINAL(4),ROOT(6));
REPEATFINISH
} else {
ROOTNULL(6,NULL)
}

result = kSuccess;

OUTPUT(0,TERMINAL(6))
FOOTER(7)
}

enum opTrigger vpx_method_VPLView_2F_Find_20_CTM_20_Item(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_VPLView_2F_Find_20_CTM_20_Item_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_VPLView_2F_Find_20_CTM_20_Item_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_VPLView_2F_Move_20_Origin_20_In_20_Limits(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(12)
INPUT(0,0)
result = kSuccess;

result = vpx_persistent(PARAMETERS,kVPXValue_List_20_View_20_Canvas_20_Buffer,0,1,ROOT(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Update_20_Canvas_20_Limits,2,0,TERMINAL(0),TERMINAL(1));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_View_20_Rect,1,1,TERMINAL(0),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,4,TERMINAL(2),ROOT(3),ROOT(4),ROOT(5),ROOT(6));

result = vpx_get(PARAMETERS,kVPXValue_Canvas_20_Limits,TERMINAL(0),ROOT(7),ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,2,TERMINAL(8),ROOT(9),ROOT(10));

result = vpx_call_primitive(PARAMETERS,VPLP__3E3D_,2,0,TERMINAL(9),TERMINAL(5));
TERMINATEONSUCCESS

result = vpx_call_primitive(PARAMETERS,VPLP__2D_,2,1,TERMINAL(9),TERMINAL(5),ROOT(11));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Move_20_Origin_20_V,2,0,TERMINAL(0),TERMINAL(11));

result = kSuccess;

FOOTERSINGLECASE(12)
}

/* Stop Universals */






Nat4	loadClasses_VPLViews(V_Environment environment);
Nat4	loadClasses_VPLViews(V_Environment environment)
{
	V_Class result = NULL;

	result = class_new("VPLView",environment);
	if(result == NULL) return kERROR;
	VPLC_VPLView_class_load(result,environment);
	return kNOERROR;

}

Nat4	loadUniversals_VPLViews(V_Environment environment);
Nat4	loadUniversals_VPLViews(V_Environment environment)
{
	V_Method result = NULL;

	result = method_new("VPLView/Old Draw",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLView_2F_Old_20_Draw,NULL);

	result = method_new("VPLView/Old Move Origin V",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLView_2F_Old_20_Move_20_Origin_20_V,NULL);

	result = method_new("VPLView/Old Set Canvas Limits",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLView_2F_Old_20_Set_20_Canvas_20_Limits,NULL);

	result = method_new("VPLView/Adjust Origin",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLView_2F_Adjust_20_Origin,NULL);

	result = method_new("VPLView/After Drawing",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLView_2F_After_20_Drawing,NULL);

	result = method_new("VPLView/Before Drawing",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLView_2F_Before_20_Drawing,NULL);

	result = method_new("VPLView/Close",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLView_2F_Close,NULL);

	result = method_new("VPLView/Find Item",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLView_2F_Find_20_Item,NULL);

	result = method_new("VPLView/Get Content",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLView_2F_Get_20_Content,NULL);

	result = method_new("VPLView/Get Location",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLView_2F_Get_20_Location,NULL);

	result = method_new("VPLView/Get Window Origin",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLView_2F_Get_20_Window_20_Origin,NULL);

	result = method_new("VPLView/Hilite",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLView_2F_Hilite,NULL);

	result = method_new("VPLView/Mouse Down",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLView_2F_Mouse_20_Down,NULL);

	result = method_new("VPLView/Open",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLView_2F_Open,NULL);

	result = method_new("VPLView/Resize",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLView_2F_Resize,NULL);

	result = method_new("VPLView/Scroll V",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLView_2F_Scroll_20_V,NULL);

	result = method_new("VPLView/Select Item",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLView_2F_Select_20_Item,NULL);

	result = method_new("VPLView/Set Content",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLView_2F_Set_20_Content,NULL);

	result = method_new("VPLView/Set Frame",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLView_2F_Set_20_Frame,NULL);

	result = method_new("VPLView/Set Location",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLView_2F_Set_20_Location,NULL);

	result = method_new("VPLView/Set Select List",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLView_2F_Set_20_Select_20_List,NULL);

	result = method_new("VPLView/Set Selected",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLView_2F_Set_20_Selected,NULL);

	result = method_new("VPLView/Set Up Drawing",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLView_2F_Set_20_Up_20_Drawing,NULL);

	result = method_new("VPLView/Set Viewport Origin",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLView_2F_Set_20_Viewport_20_Origin,NULL);

	result = method_new("VPLView/Set Window Origin",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLView_2F_Set_20_Window_20_Origin,NULL);

	result = method_new("VPLView/Update Canvas Limits",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLView_2F_Update_20_Canvas_20_Limits,NULL);

	result = method_new("VPLView/View Size",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLView_2F_View_20_Size,NULL);

	result = method_new("VPLView/Draw",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLView_2F_Draw,NULL);

	result = method_new("VPLView/Move Origin V",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLView_2F_Move_20_Origin_20_V,NULL);

	result = method_new("VPLView/View Rect",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLView_2F_View_20_Rect,NULL);

	result = method_new("VPLView/Erase View",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLView_2F_Erase_20_View,NULL);

	result = method_new("VPLView/Set Canvas Limits",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLView_2F_Set_20_Canvas_20_Limits,NULL);

	result = method_new("VPLView/Find Item Name",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLView_2F_Find_20_Item_20_Name,NULL);

	result = method_new("VPLView/Erase View CG",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLView_2F_Erase_20_View_20_CG,NULL);

	result = method_new("VPLView/Before Drawing CG",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLView_2F_Before_20_Drawing_20_CG,NULL);

	result = method_new("VPLView/Setup Drawing CG",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLView_2F_Setup_20_Drawing_20_CG,NULL);

	result = method_new("VPLView/After Drawing CG",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLView_2F_After_20_Drawing_20_CG,NULL);

	result = method_new("VPLView/Draw CG",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLView_2F_Draw_20_CG,NULL);

	result = method_new("VPLView/Get Select List",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLView_2F_Get_20_Select_20_List,NULL);

	result = method_new("VPLView/Update Select List",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLView_2F_Update_20_Select_20_List,NULL);

	result = method_new("VPLView/Update Select Item",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLView_2F_Update_20_Select_20_Item,NULL);

	result = method_new("VPLView/Redraw Items CG",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLView_2F_Redraw_20_Items_20_CG,NULL);

	result = method_new("VPLView/Target Self",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLView_2F_Target_20_Self,NULL);

	result = method_new("VPLView/Get Frame In Windowxx",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLView_2F_Get_20_Frame_20_In_20_Windowxx,NULL);

	result = method_new("VPLView/Reset Cache",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLView_2F_Reset_20_Cache,NULL);

	result = method_new("VPLView/Draw Content CG",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLView_2F_Draw_20_Content_20_CG,NULL);

	result = method_new("VPLView/Find CTM Item",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLView_2F_Find_20_CTM_20_Item,NULL);

	result = method_new("VPLView/Move Origin In Limits",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLView_2F_Move_20_Origin_20_In_20_Limits,NULL);

	return kNOERROR;

}



Nat4	loadPersistents_VPLViews(V_Environment environment);
Nat4	loadPersistents_VPLViews(V_Environment environment)
{
	V_Value tempPersistent = NULL;
	V_Dictionary dictionary = environment->persistentsTable;

	return kNOERROR;

}

Nat4	load_VPLViews(V_Environment environment);
Nat4	load_VPLViews(V_Environment environment)
{

	loadClasses_VPLViews(environment);
	loadUniversals_VPLViews(environment);
	loadPersistents_VPLViews(environment);
	return kNOERROR;

}

