/* A VPL Section File */
/*

VPLWindowItems.inl.c
Copyright: 2004 Andescotia LLC

*/

#include "MartenInlineProject.h"




	Nat4 tempAttribute_VPLWindow_20_Item_2F_Frame[] = {
0000000000, 0X0000008C, 0X00000028, 0X00000005, 0X00000014, 0X00000050, 0X0000004C, 0X00000048,
0X00000044, 0X0000003C, 0X00000007, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000044,
0X00000004, 0X00000054, 0X0000006C, 0X00000084, 0X0000009C, 0X00000004, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000,
0000000000, 0X00000004, 0000000000, 0000000000, 0000000000, 0000000000, 0000000000, 0X00000004,
0000000000, 0000000000, 0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_VPLWindow_20_Item_2F_Selected[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0000000000
	};
	Nat4 tempAttribute_VPLWindow_20_Item_2F_Highlight[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0X00010000
	};
	Nat4 tempAttribute_VPLWindow_20_Item_2F_Visible_3F_[] = {
0000000000, 0X00000018, 0X00000014, 0000000000, 0X00000014, 0X00000003, 0000000000, 0000000000,
0000000000, 0000000000, 0X00010000
	};


Nat4 VPLC_VPLWindow_20_Item_class_load(V_Class tempClass,V_Environment environment);
Nat4 VPLC_VPLWindow_20_Item_class_load(V_Class tempClass,V_Environment environment)
{
	V_Value	tempAttribute = NULL;

/* Start Attributes: { 341 343 }{ 197 353 } */
	tempAttribute = attribute_add("Parent",tempClass,NULL,environment);
	tempAttribute = attribute_add("Item Record",tempClass,NULL,environment);
	tempAttribute = attribute_add("Name",tempClass,NULL,environment);
	tempAttribute = attribute_add("Frame",tempClass,tempAttribute_VPLWindow_20_Item_2F_Frame,environment);
	tempAttribute = attribute_add("Selected",tempClass,tempAttribute_VPLWindow_20_Item_2F_Selected,environment);
	tempAttribute = attribute_add("Highlight",tempClass,tempAttribute_VPLWindow_20_Item_2F_Highlight,environment);
	tempAttribute = attribute_add("Visible?",tempClass,tempAttribute_VPLWindow_20_Item_2F_Visible_3F_,environment);
/* Stop Attributes */

/* NULL SUPER CLASS */
	return kNOERROR;
}

/* Start Universals: { 111 471 }{ 675 335 } */
enum opTrigger vpx_method_VPLWindow_20_Item_2F_Old_20_Redraw(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADERWITHNONE(12)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Window,1,1,TERMINAL(0),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
TERMINATEONSUCCESS

result = vpx_get(PARAMETERS,kVPXValue_Window_20_Record,TERMINAL(2),ROOT(3),ROOT(4));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(4));
TERMINATEONSUCCESS

GetPort( GETPOINTER(0,OpaqueGrafPtr,**,ROOT(5),NONE));
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Port,1,0,TERMINAL(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Up_20_Drawing,1,0,TERMINAL(0));

result = vpx_get(PARAMETERS,kVPXValue_Frame,TERMINAL(0),ROOT(6),ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP_list_2D_to_2D_Rect,1,1,TERMINAL(7),ROOT(8));

EraseRect( GETCONSTPOINTER(Rect,*,TERMINAL(8)));
result = kSuccess;

PUTINTEGER(InvalWindowRect( GETPOINTER(0,OpaqueWindowPtr,*,ROOT(10),TERMINAL(4)),GETCONSTPOINTER(Rect,*,TERMINAL(8))),9);
result = kSuccess;

SetPort( GETPOINTER(0,OpaqueGrafPtr,*,ROOT(11),TERMINAL(5)));
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASEWITHNONE(12)
}

enum opTrigger vpx_method_VPLWindow_20_Item_2F_Activate(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADERWITHNONE(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Redraw,2,0,TERMINAL(0),NONE);

result = kSuccess;

FOOTERSINGLECASEWITHNONE(2)
}

enum opTrigger vpx_method_VPLWindow_20_Item_2F_Adjust_20_Origin(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_VPLWindow_20_Item_2F_Clean_20_Up_20_Context(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_VPLWindow_20_Item_2F_Close(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = vpx_set(PARAMETERS,kVPXValue_Parent,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_VPLWindow_20_Item_2F_Draw(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_VPLWindow_20_Item_2F_Enter(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_VPLWindow_20_Item_2F_Exit(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_VPLWindow_20_Item_2F_Get_20_Application(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_method_Get_20_Application(PARAMETERS,ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_VPLWindow_20_Item_2F_Get_20_Size(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(10)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Frame,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,4,TERMINAL(2),ROOT(3),ROOT(4),ROOT(5),ROOT(6));

result = vpx_call_primitive(PARAMETERS,VPLP_iminus,2,1,TERMINAL(6),TERMINAL(4),ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP_iminus,2,1,TERMINAL(5),TERMINAL(3),ROOT(8));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,2,1,TERMINAL(8),TERMINAL(7),ROOT(9));

result = kSuccess;

OUTPUT(0,TERMINAL(9))
FOOTERSINGLECASE(10)
}

enum opTrigger vpx_method_VPLWindow_20_Item_2F_Get_20_Window_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_VPLWindow_20_Item_2F_Get_20_Window_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
NEXTCASEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Window,1,1,TERMINAL(2),ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_VPLWindow_20_Item_2F_Get_20_Window_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_VPLWindow_20_Item_2F_Get_20_Window_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_VPLWindow_20_Item_2F_Get_20_Window(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_VPLWindow_20_Item_2F_Get_20_Window_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_VPLWindow_20_Item_2F_Get_20_Window_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_VPLWindow_20_Item_2F_Hilite(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Highlight,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_VPLWindow_20_Item_2F_Idle(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_VPLWindow_20_Item_2F_Key_20_Down_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_VPLWindow_20_Item_2F_Key_20_Down_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Process_20_Key,2,0,TERMINAL(0),TERMINAL(1));
NEXTCASEONFAILURE

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_VPLWindow_20_Item_2F_Key_20_Down_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_VPLWindow_20_Item_2F_Key_20_Down_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
FAILONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Key_20_Down,2,0,TERMINAL(3),TERMINAL(1));
FAILONFAILURE

result = kSuccess;

FOOTER(4)
}

enum opTrigger vpx_method_VPLWindow_20_Item_2F_Key_20_Down(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_VPLWindow_20_Item_2F_Key_20_Down_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_VPLWindow_20_Item_2F_Key_20_Down_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_VPLWindow_20_Item_2F_Mouse_20_Down(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Process_20_Click,2,0,TERMINAL(0),TERMINAL(1));
FAILONFAILURE

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_VPLWindow_20_Item_2F_Open(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Parent,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_VPLWindow_20_Item_2F_Prepare_20_Context(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_constant(PARAMETERS,"NULL",ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_VPLWindow_20_Item_2F_Process_20_Click(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;
FAILONSUCCESS

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_VPLWindow_20_Item_2F_Process_20_Key(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;
FAILONSUCCESS

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_VPLWindow_20_Item_2F_Set_20_Frame(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_set(PARAMETERS,kVPXValue_Frame,TERMINAL(0),TERMINAL(1),ROOT(2));

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_VPLWindow_20_Item_2F_Set_20_Location(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(10)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Size,1,1,TERMINAL(0),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,2,TERMINAL(1),ROOT(3),ROOT(4));

result = vpx_method_Add_20_Point(PARAMETERS,TERMINAL(1),TERMINAL(2),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,2,TERMINAL(5),ROOT(6),ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,4,1,TERMINAL(3),TERMINAL(4),TERMINAL(6),TERMINAL(7),ROOT(8));

result = vpx_set(PARAMETERS,kVPXValue_Frame,TERMINAL(0),TERMINAL(8),ROOT(9));

result = kSuccess;

FOOTERSINGLECASE(10)
}

enum opTrigger vpx_method_VPLWindow_20_Item_2F_Set_20_Selected_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_VPLWindow_20_Item_2F_Set_20_Selected_case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADERWITHNONE(3)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_primitive(PARAMETERS,VPLP__3D_,2,0,TERMINAL(1),TERMINAL(2));
TERMINATEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Redraw,2,0,TERMINAL(0),NONE);

result = kSuccess;

FOOTERSINGLECASEWITHNONE(3)
}

enum opTrigger vpx_method_VPLWindow_20_Item_2F_Set_20_Selected_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_VPLWindow_20_Item_2F_Set_20_Selected_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Selected,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
NEXTCASEONSUCCESS

result = vpx_set(PARAMETERS,kVPXValue_Selected,TERMINAL(2),TERMINAL(1),ROOT(4));

result = vpx_method_VPLWindow_20_Item_2F_Set_20_Selected_case_1_local_5(PARAMETERS,TERMINAL(4),TERMINAL(3),TERMINAL(1));

result = kSuccess;

FOOTER(5)
}

enum opTrigger vpx_method_VPLWindow_20_Item_2F_Set_20_Selected_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_VPLWindow_20_Item_2F_Set_20_Selected_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_VPLWindow_20_Item_2F_Set_20_Selected(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_VPLWindow_20_Item_2F_Set_20_Selected_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_VPLWindow_20_Item_2F_Set_20_Selected_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_VPLWindow_20_Item_2F_Set_20_Up_20_Drawing_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_VPLWindow_20_Item_2F_Set_20_Up_20_Drawing_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
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

enum opTrigger vpx_method_VPLWindow_20_Item_2F_Set_20_Up_20_Drawing_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0);
enum opTrigger vpx_method_VPLWindow_20_Item_2F_Set_20_Up_20_Drawing_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTER(1)
}

enum opTrigger vpx_method_VPLWindow_20_Item_2F_Set_20_Up_20_Drawing(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_VPLWindow_20_Item_2F_Set_20_Up_20_Drawing_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0))
vpx_method_VPLWindow_20_Item_2F_Set_20_Up_20_Drawing_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0);
return outcome;
}

enum opTrigger vpx_method_VPLWindow_20_Item_2F_Set_20_Value(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_VPLWindow_20_Item_2F_Target_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_VPLWindow_20_Item_2F_Target_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_method_Get_20_Target(PARAMETERS,ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP__3D_,2,0,TERMINAL(2),TERMINAL(0));
NEXTCASEONFAILURE

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_VPLWindow_20_Item_2F_Target_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_VPLWindow_20_Item_2F_Target_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Window,1,1,TERMINAL(0),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(2));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Target,3,0,TERMINAL(2),TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_VPLWindow_20_Item_2F_Target(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_VPLWindow_20_Item_2F_Target_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_VPLWindow_20_Item_2F_Target_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_VPLWindow_20_Item_2F_Was_20_Hit(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Frame,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_method_Point_20_In_20_Rect(PARAMETERS,TERMINAL(1),TERMINAL(3),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_VPLWindow_20_Item_2F_Redraw(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(7)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Window,1,1,TERMINAL(0),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
TERMINATEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Frame_20_In_20_Window,1,1,TERMINAL(0),ROOT(3));

result = vpx_constant(PARAMETERS,"-2",ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP_list_2D_to_2D_Rect,1,1,TERMINAL(3),ROOT(5));

InsetRect( GETPOINTER(8,Rect,*,ROOT(6),TERMINAL(5)),GETINTEGER(TERMINAL(4)),GETINTEGER(TERMINAL(4)));
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Invalidate_20_Rect,2,0,TERMINAL(2),TERMINAL(6));

result = kSuccess;

FOOTERSINGLECASE(7)
}

enum opTrigger vpx_method_VPLWindow_20_Item_2F_Draw_20_CG(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_VPLWindow_20_Item_2F_Setup_20_Drawing_20_CG_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_VPLWindow_20_Item_2F_Setup_20_Drawing_20_CG_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(3));
NEXTCASEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Setup_20_Drawing_20_CG,2,0,TERMINAL(3),TERMINAL(1));

result = kSuccess;

FOOTER(4)
}

enum opTrigger vpx_method_VPLWindow_20_Item_2F_Setup_20_Drawing_20_CG_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_VPLWindow_20_Item_2F_Setup_20_Drawing_20_CG_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTER(2)
}

enum opTrigger vpx_method_VPLWindow_20_Item_2F_Setup_20_Drawing_20_CG(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_VPLWindow_20_Item_2F_Setup_20_Drawing_20_CG_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_VPLWindow_20_Item_2F_Setup_20_Drawing_20_CG_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_VPLWindow_20_Item_2F_Get_20_Location(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
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

enum opTrigger vpx_method_VPLWindow_20_Item_2F_Target_20_Self(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
TERMINATEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Window,1,1,TERMINAL(0),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_instance_3F_,1,0,TERMINAL(3));
TERMINATEONFAILURE

result = vpx_constant(PARAMETERS,"TRUE",ROOT(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Target,3,0,TERMINAL(3),TERMINAL(2),TERMINAL(4));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Refresh,1,0,TERMINAL(3));

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_VPLWindow_20_Item_2F_Set_20_Size(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(10)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Location,1,1,TERMINAL(0),ROOT(2));

result = vpx_method_Add_20_Point(PARAMETERS,TERMINAL(2),TERMINAL(1),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,2,TERMINAL(2),ROOT(4),ROOT(5));

result = vpx_call_primitive(PARAMETERS,VPLP_unpack,1,2,TERMINAL(3),ROOT(6),ROOT(7));

result = vpx_call_primitive(PARAMETERS,VPLP_pack,4,1,TERMINAL(4),TERMINAL(5),TERMINAL(6),TERMINAL(7),ROOT(8));

result = vpx_set(PARAMETERS,kVPXValue_Frame,TERMINAL(0),TERMINAL(8),ROOT(9));

result = kSuccess;

FOOTERSINGLECASE(10)
}

enum opTrigger vpx_method_VPLWindow_20_Item_2F_Resize(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_VPLWindow_20_Item_2F_Get_20_Frame(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Frame,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_VPLWindow_20_Item_2F_Get_20_Frame_20_In_20_Window_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_VPLWindow_20_Item_2F_Get_20_Frame_20_In_20_Window_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(11)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Parent,TERMINAL(0),ROOT(1),ROOT(2));

result = vpx_match(PARAMETERS,"NULL",TERMINAL(2));
NEXTCASEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Window,1,1,TERMINAL(0),ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP__3D_,2,0,TERMINAL(2),TERMINAL(3));
NEXTCASEONSUCCESS

result = vpx_get(PARAMETERS,kVPXValue_Window_20_Origin,TERMINAL(2),ROOT(4),ROOT(5));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Location,1,1,TERMINAL(0),ROOT(6));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Size,1,1,TERMINAL(0),ROOT(7));

result = vpx_method_Add_20_Point(PARAMETERS,TERMINAL(5),TERMINAL(6),ROOT(8));

result = vpx_method_Add_20_Point(PARAMETERS,TERMINAL(8),TERMINAL(7),ROOT(9));

result = vpx_call_primitive(PARAMETERS,VPLP__28_join_29_,2,1,TERMINAL(8),TERMINAL(9),ROOT(10));

result = kSuccess;

OUTPUT(0,TERMINAL(10))
FOOTER(11)
}

enum opTrigger vpx_method_VPLWindow_20_Item_2F_Get_20_Frame_20_In_20_Window_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0);
enum opTrigger vpx_method_VPLWindow_20_Item_2F_Get_20_Frame_20_In_20_Window_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(2)
INPUT(0,0)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Frame,1,1,TERMINAL(0),ROOT(1));

result = kSuccess;

OUTPUT(0,TERMINAL(1))
FOOTER(2)
}

enum opTrigger vpx_method_VPLWindow_20_Item_2F_Get_20_Frame_20_In_20_Window(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_VPLWindow_20_Item_2F_Get_20_Frame_20_In_20_Window_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,root0))
vpx_method_VPLWindow_20_Item_2F_Get_20_Frame_20_In_20_Window_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,root0);
return outcome;
}

enum opTrigger vpx_method_VPLWindow_20_Item_2F_Reset_20_Cache(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_VPLWindow_20_Item_2F_Set_20_Selected_20_Colors(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(5)
INPUT(0,0)
result = kSuccess;

result = vpx_persistent(PARAMETERS,kVPXValue_Normal_20_Colors,0,1,ROOT(1));

result = vpx_call_primitive(PARAMETERS,VPLP_list_2D_to_2D_RGB,1,1,TERMINAL(1),ROOT(2));

RGBForeColor( GETCONSTPOINTER(RGBColor,*,TERMINAL(2)));
result = kSuccess;

result = vpx_constant(PARAMETERS,"( 65535 65535 65535 )",ROOT(3));

result = vpx_call_primitive(PARAMETERS,VPLP_list_2D_to_2D_RGB,1,1,TERMINAL(3),ROOT(4));

RGBBackColor( GETCONSTPOINTER(RGBColor,*,TERMINAL(4)));
result = kSuccess;

result = kSuccess;

FOOTERSINGLECASE(5)
}

enum opTrigger vpx_method_VPLWindow_20_Item_2F_Draw_20_Event_20_CG_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_VPLWindow_20_Item_2F_Draw_20_Event_20_CG_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Needs_20_Draw_3F_,2,0,TERMINAL(0),TERMINAL(1));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Draw_20_CG,3,0,TERMINAL(0),TERMINAL(1),TERMINAL(2));

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_VPLWindow_20_Item_2F_Draw_20_Event_20_CG_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2);
enum opTrigger vpx_method_VPLWindow_20_Item_2F_Draw_20_Event_20_CG_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = kSuccess;

FOOTER(3)
}

enum opTrigger vpx_method_VPLWindow_20_Item_2F_Draw_20_Event_20_CG(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_VPLWindow_20_Item_2F_Draw_20_Event_20_CG_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2))
vpx_method_VPLWindow_20_Item_2F_Draw_20_Event_20_CG_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2);
return outcome;
}

enum opTrigger vpx_method_VPLWindow_20_Item_2F_Needs_20_Draw_3F__case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_VPLWindow_20_Item_2F_Needs_20_Draw_3F__case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(3)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Visible_3F_,1,1,TERMINAL(0),ROOT(2));

result = vpx_match(PARAMETERS,"FALSE",TERMINAL(2));
FAILONSUCCESS

result = kSuccess;
NEXTCASEONSUCCESS

FOOTER(3)
}

enum opTrigger vpx_method_VPLWindow_20_Item_2F_Needs_20_Draw_3F__case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_VPLWindow_20_Item_2F_Needs_20_Draw_3F__case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"NULL",TERMINAL(1));
TERMINATEONSUCCESS

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Frame_20_In_20_Window,1,1,TERMINAL(0),ROOT(2));

result = vpx_call_primitive(PARAMETERS,VPLP_list_2D_to_2D_Rect,1,1,TERMINAL(2),ROOT(3));

PUTINTEGER(RectInRgn( GETCONSTPOINTER(Rect,*,TERMINAL(3)),GETPOINTER(0,OpaqueRgnHandle,*,ROOT(5),TERMINAL(1))),4);
result = kSuccess;

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(4));
FAILONFAILURE

result = kSuccess;

FOOTER(6)
}

enum opTrigger vpx_method_VPLWindow_20_Item_2F_Needs_20_Draw_3F_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_VPLWindow_20_Item_2F_Needs_20_Draw_3F__case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1))
vpx_method_VPLWindow_20_Item_2F_Needs_20_Draw_3F__case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1);
return outcome;
}

enum opTrigger vpx_method_VPLWindow_20_Item_2F_Get_20_Visible_3F_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object *root0)
{
HEADER(3)
INPUT(0,0)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Visible_3F_,TERMINAL(0),ROOT(1),ROOT(2));

result = kSuccess;

OUTPUT(0,TERMINAL(2))
FOOTERSINGLECASE(3)
}

enum opTrigger vpx_method_VPLWindow_20_Item_2F_Set_20_Visible_3F__case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1);
enum opTrigger vpx_method_VPLWindow_20_Item_2F_Set_20_Visible_3F__case_1_local_5(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADERWITHNONE(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(1));
TERMINATEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Redraw,2,0,TERMINAL(0),NONE);

result = kSuccess;

FOOTERSINGLECASEWITHNONE(2)
}

enum opTrigger vpx_method_VPLWindow_20_Item_2F_Set_20_Visible_3F_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(6)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_get(PARAMETERS,kVPXValue_Visible_3F_,TERMINAL(0),ROOT(2),ROOT(3));

result = vpx_set(PARAMETERS,kVPXValue_Visible_3F_,TERMINAL(2),TERMINAL(1),ROOT(4));

result = vpx_call_primitive(PARAMETERS,VPLP__3D_,2,1,TERMINAL(3),TERMINAL(1),ROOT(5));

result = vpx_method_VPLWindow_20_Item_2F_Set_20_Visible_3F__case_1_local_5(PARAMETERS,TERMINAL(4),TERMINAL(5));

result = kSuccess;

FOOTERSINGLECASE(6)
}

enum opTrigger vpx_method_VPLWindow_20_Item_2F_Find_20_CTM_20_Item_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_VPLWindow_20_Item_2F_Find_20_CTM_20_Item_case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Is_20_CTM_20_Item_3F_,1,0,TERMINAL(0));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Visible_3F_,1,1,TERMINAL(0),ROOT(2));

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(2));
NEXTCASEONFAILURE

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Was_20_Hit,2,1,TERMINAL(0),TERMINAL(1),ROOT(3));

result = vpx_match(PARAMETERS,"TRUE",TERMINAL(3));
NEXTCASEONFAILURE

result = kSuccess;

OUTPUT(0,TERMINAL(0))
FOOTER(4)
}

enum opTrigger vpx_method_VPLWindow_20_Item_2F_Find_20_CTM_20_Item_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0);
enum opTrigger vpx_method_VPLWindow_20_Item_2F_Find_20_CTM_20_Item_case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
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

enum opTrigger vpx_method_VPLWindow_20_Item_2F_Find_20_CTM_20_Item(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_VPLWindow_20_Item_2F_Find_20_CTM_20_Item_case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0))
vpx_method_VPLWindow_20_Item_2F_Find_20_CTM_20_Item_case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,root0);
return outcome;
}

enum opTrigger vpx_method_VPLWindow_20_Item_2F_Is_20_CTM_20_Item_3F_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0)
{
HEADER(1)
INPUT(0,0)
result = kSuccess;

result = kSuccess;
FAILONSUCCESS

FOOTERSINGLECASE(1)
}

enum opTrigger vpx_method_VPLWindow_20_Item_2F_Was_20_Content_20_Hit_3F__case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_VPLWindow_20_Item_2F_Was_20_Content_20_Hit_3F__case_1(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(5)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Frame,1,1,TERMINAL(0),ROOT(3));

result = vpx_method_Point_20_In_20_Rect(PARAMETERS,TERMINAL(1),TERMINAL(3),ROOT(4));

result = kSuccess;

OUTPUT(0,TERMINAL(4))
FOOTER(5)
}

enum opTrigger vpx_method_VPLWindow_20_Item_2F_Was_20_Content_20_Hit_3F__case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0);
enum opTrigger vpx_method_VPLWindow_20_Item_2F_Was_20_Content_20_Hit_3F__case_2(V_Environment environment, enum opTrigger *outcome, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
INPUT(2,2)
result = kSuccess;

result = vpx_constant(PARAMETERS,"TRUE",ROOT(3));

result = kSuccess;

OUTPUT(0,TERMINAL(3))
FOOTER(4)
}

enum opTrigger vpx_method_VPLWindow_20_Item_2F_Was_20_Content_20_Hit_3F_(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1,V_Object terminal2,V_Object *root0)
{
enum opTrigger outcome = kSuccess;
if(vpx_method_VPLWindow_20_Item_2F_Was_20_Content_20_Hit_3F__case_1(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0))
vpx_method_VPLWindow_20_Item_2F_Was_20_Content_20_Hit_3F__case_2(environment, &outcome, inputRepeat, contextIndex,terminal0,terminal1,terminal2,root0);
return outcome;
}

enum opTrigger vpx_method_VPLWindow_20_Item_2F_Change_20_Frame(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(2)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Frame,2,0,TERMINAL(0),TERMINAL(1));

result = kSuccess;

FOOTERSINGLECASE(2)
}

enum opTrigger vpx_method_VPLWindow_20_Item_2F_Move_20_Item(V_Environment environment, enum boolType *inputRepeat, Nat4 contextIndex,V_Object terminal0,V_Object terminal1)
{
HEADER(4)
INPUT(0,0)
INPUT(1,1)
result = kSuccess;

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Get_20_Location,1,1,TERMINAL(0),ROOT(2));

result = vpx_method_Add_20_Point(PARAMETERS,TERMINAL(2),TERMINAL(1),ROOT(3));

result = vpx_call_data_method(PARAMETERS,kVPXMethod_Set_20_Location,2,0,TERMINAL(0),TERMINAL(3));

result = kSuccess;

FOOTERSINGLECASE(4)
}

/* Stop Universals */






Nat4	loadClasses_VPLWindowItems(V_Environment environment);
Nat4	loadClasses_VPLWindowItems(V_Environment environment)
{
	V_Class result = NULL;

	result = class_new("VPLWindow Item",environment);
	if(result == NULL) return kERROR;
	VPLC_VPLWindow_20_Item_class_load(result,environment);
	return kNOERROR;

}

Nat4	loadUniversals_VPLWindowItems(V_Environment environment);
Nat4	loadUniversals_VPLWindowItems(V_Environment environment)
{
	V_Method result = NULL;

	result = method_new("VPLWindow Item/Old Redraw",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLWindow_20_Item_2F_Old_20_Redraw,NULL);

	result = method_new("VPLWindow Item/Activate",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLWindow_20_Item_2F_Activate,NULL);

	result = method_new("VPLWindow Item/Adjust Origin",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLWindow_20_Item_2F_Adjust_20_Origin,NULL);

	result = method_new("VPLWindow Item/Clean Up Context",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLWindow_20_Item_2F_Clean_20_Up_20_Context,NULL);

	result = method_new("VPLWindow Item/Close",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLWindow_20_Item_2F_Close,NULL);

	result = method_new("VPLWindow Item/Draw",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLWindow_20_Item_2F_Draw,NULL);

	result = method_new("VPLWindow Item/Enter",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLWindow_20_Item_2F_Enter,NULL);

	result = method_new("VPLWindow Item/Exit",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLWindow_20_Item_2F_Exit,NULL);

	result = method_new("VPLWindow Item/Get Application",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLWindow_20_Item_2F_Get_20_Application,NULL);

	result = method_new("VPLWindow Item/Get Size",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLWindow_20_Item_2F_Get_20_Size,NULL);

	result = method_new("VPLWindow Item/Get Window",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLWindow_20_Item_2F_Get_20_Window,NULL);

	result = method_new("VPLWindow Item/Hilite",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLWindow_20_Item_2F_Hilite,NULL);

	result = method_new("VPLWindow Item/Idle",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLWindow_20_Item_2F_Idle,NULL);

	result = method_new("VPLWindow Item/Key Down",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLWindow_20_Item_2F_Key_20_Down,NULL);

	result = method_new("VPLWindow Item/Mouse Down",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLWindow_20_Item_2F_Mouse_20_Down,NULL);

	result = method_new("VPLWindow Item/Open",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLWindow_20_Item_2F_Open,NULL);

	result = method_new("VPLWindow Item/Prepare Context",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLWindow_20_Item_2F_Prepare_20_Context,NULL);

	result = method_new("VPLWindow Item/Process Click",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLWindow_20_Item_2F_Process_20_Click,NULL);

	result = method_new("VPLWindow Item/Process Key",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLWindow_20_Item_2F_Process_20_Key,NULL);

	result = method_new("VPLWindow Item/Set Frame",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLWindow_20_Item_2F_Set_20_Frame,NULL);

	result = method_new("VPLWindow Item/Set Location",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLWindow_20_Item_2F_Set_20_Location,NULL);

	result = method_new("VPLWindow Item/Set Selected",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLWindow_20_Item_2F_Set_20_Selected,NULL);

	result = method_new("VPLWindow Item/Set Up Drawing",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLWindow_20_Item_2F_Set_20_Up_20_Drawing,NULL);

	result = method_new("VPLWindow Item/Set Value",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLWindow_20_Item_2F_Set_20_Value,NULL);

	result = method_new("VPLWindow Item/Target",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLWindow_20_Item_2F_Target,NULL);

	result = method_new("VPLWindow Item/Was Hit",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLWindow_20_Item_2F_Was_20_Hit,NULL);

	result = method_new("VPLWindow Item/Redraw",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLWindow_20_Item_2F_Redraw,NULL);

	result = method_new("VPLWindow Item/Draw CG",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLWindow_20_Item_2F_Draw_20_CG,NULL);

	result = method_new("VPLWindow Item/Setup Drawing CG",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLWindow_20_Item_2F_Setup_20_Drawing_20_CG,NULL);

	result = method_new("VPLWindow Item/Get Location",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLWindow_20_Item_2F_Get_20_Location,NULL);

	result = method_new("VPLWindow Item/Target Self",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLWindow_20_Item_2F_Target_20_Self,NULL);

	result = method_new("VPLWindow Item/Set Size",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLWindow_20_Item_2F_Set_20_Size,NULL);

	result = method_new("VPLWindow Item/Resize",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLWindow_20_Item_2F_Resize,NULL);

	result = method_new("VPLWindow Item/Get Frame",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLWindow_20_Item_2F_Get_20_Frame,NULL);

	result = method_new("VPLWindow Item/Get Frame In Window",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLWindow_20_Item_2F_Get_20_Frame_20_In_20_Window,NULL);

	result = method_new("VPLWindow Item/Reset Cache",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLWindow_20_Item_2F_Reset_20_Cache,NULL);

	result = method_new("VPLWindow Item/Set Selected Colors",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLWindow_20_Item_2F_Set_20_Selected_20_Colors,NULL);

	result = method_new("VPLWindow Item/Draw Event CG",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLWindow_20_Item_2F_Draw_20_Event_20_CG,NULL);

	result = method_new("VPLWindow Item/Needs Draw?",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLWindow_20_Item_2F_Needs_20_Draw_3F_,NULL);

	result = method_new("VPLWindow Item/Get Visible?",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLWindow_20_Item_2F_Get_20_Visible_3F_,NULL);

	result = method_new("VPLWindow Item/Set Visible?",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLWindow_20_Item_2F_Set_20_Visible_3F_,NULL);

	result = method_new("VPLWindow Item/Find CTM Item",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLWindow_20_Item_2F_Find_20_CTM_20_Item,NULL);

	result = method_new("VPLWindow Item/Is CTM Item?",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLWindow_20_Item_2F_Is_20_CTM_20_Item_3F_,NULL);

	result = method_new("VPLWindow Item/Was Content Hit?",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLWindow_20_Item_2F_Was_20_Content_20_Hit_3F_,NULL);

	result = method_new("VPLWindow Item/Change Frame",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLWindow_20_Item_2F_Change_20_Frame,NULL);

	result = method_new("VPLWindow Item/Move Item",environment);
	if(result == NULL) return kERROR;
	vpx_method_initialize(environment,result,vpx_method_VPLWindow_20_Item_2F_Move_20_Item,NULL);

	return kNOERROR;

}



Nat4	loadPersistents_VPLWindowItems(V_Environment environment);
Nat4	loadPersistents_VPLWindowItems(V_Environment environment)
{
	V_Value tempPersistent = NULL;
	V_Dictionary dictionary = environment->persistentsTable;

	return kNOERROR;

}

Nat4	load_VPLWindowItems(V_Environment environment);
Nat4	load_VPLWindowItems(V_Environment environment)
{

	loadClasses_VPLWindowItems(environment);
	loadUniversals_VPLWindowItems(environment);
	loadPersistents_VPLWindowItems(environment);
	return kNOERROR;

}

